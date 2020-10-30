//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2020
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

///\file

#include "td/telegram/td_api.h"
#include "td/telegram/td_api.hpp"

#include <cstdint>
#include <memory>

namespace td {

/**
 * Native C++ interface for interaction with TDLib.
 *
 * The TDLib instance is created for the lifetime of the Client object.
 * Requests to TDLib can be sent using the Client::send method from any thread.
 * New updates and responses to requests can be received using the Client::receive method from any thread,
 * this function must not be called simultaneously from two different threads. Also note that all updates and
 * responses to requests should be applied in the same order as they were received, to ensure consistency.
 * Given this information, it's advisable to call this function from a dedicated thread.
 * Some service TDLib requests can be executed synchronously from any thread by using the Client::execute method.
 *
 * General pattern of usage:
 * \code
 * std::shared_ptr<td::Client> client = std::make_shared<td::Client>();
 * // somehow share the client with other threads, which will be able to send requests via client->send
 *
 * const double WAIT_TIMEOUT = 10.0;  // seconds
 * bool is_closed = false;            // should be set to true, when updateAuthorizationState with
 *                                    // authorizationStateClosed is received
 * while (!is_closed) {
 *   auto response = client->receive(WAIT_TIMEOUT);
 *   if (response.object == nullptr) {
 *     continue;
 *   }
 *
 *   if (response.id == 0) {
 *     // process response.object as an incoming update of type td_api::Update
 *   } else {
 *     // process response.object as an answer to a sent request with id response.id
 *   }
 * }
 * \endcode
 */
class Client final {
 public:
  /**
   * Creates a new TDLib client.
   */
  Client();

  /**
   * A request to the TDLib.
   */
  struct Request {
    /**
     * Request identifier.
     * Responses to TDLib requests will have the same id as the corresponding request.
     * Updates from TDLib will have id == 0, incoming requests are thus disallowed to have id == 0.
     */
    std::uint64_t id;

    /**
     * TDLib API function representing a request to TDLib.
     */
    td_api::object_ptr<td_api::Function> function;
  };

  /**
   * Sends request to TDLib. May be called from any thread.
   * \param[in] request Request to TDLib.
   */
  void send(Request &&request);

  /**
   * A response to a request, or an incoming update from TDLib.
   */
  struct Response {
    /**
     * TDLib request identifier, which corresponds to the response, or 0 for incoming updates from TDLib.
     */
    std::uint64_t id;

    /**
     * TDLib API object representing a response to a TDLib request or an incoming update.
     */
    td_api::object_ptr<td_api::Object> object;
  };

  /**
   * Receives incoming updates and request responses from TDLib. May be called from any thread, but shouldn't be
   * called simultaneously from two different threads.
   * \param[in] timeout The maximum number of seconds allowed for this function to wait for new data.
   * \return An incoming update or request response. The object returned in the response may be a nullptr
   *         if the timeout expires.
   */
  Response receive(double timeout);

  /**
   * Synchronously executes TDLib requests. Only a few requests can be executed synchronously.
   * May be called from any thread.
   * \param[in] request Request to the TDLib.
   * \return The request response.
   */
  static Response execute(Request &&request);

  /**
   * Destroys the client and TDLib instance.
   */
  ~Client();

  /**
   * Move constructor.
   */
  Client(Client &&other);

  /**
   * Move assignment operator.
   */
  Client &operator=(Client &&other);

 private:
  class Impl;
  std::unique_ptr<Impl> impl_;
};

/**
 * The future native C++ interface for interaction with TDLib.
 *
 * The TDLib client instance is created using the ClientManager::create_client method, returning a client identifier.
 * Requests to TDLib can be sent using the ClientManager::send method from any thread.
 * New updates and responses to requests can be received using the ClientManager::receive method from any thread,
 * this function must not be called simultaneously from two different threads. Also note that all updates and
 * responses to requests should be applied in the same order as they were received, to ensure consistency.
 * Some TDLib requests can be executed synchronously from any thread by using the ClientManager::execute method.
 *
 * General pattern of usage:
 * \code
 * td::ClientManager manager;
 * auto client_id = manager.create_client();
 * // somehow share the manager and the client_id with other threads,
 * // which will be able to send requests via manager.send(client_id, ...)
 *
 * const double WAIT_TIMEOUT = 10.0;  // seconds
 * while (true) {
 *   auto response = manager.receive(WAIT_TIMEOUT);
 *   if (response.object == nullptr) {
 *     continue;
 *   }
 *
 *   if (response.id == 0) {
 *     // process response.object as an incoming update of type td_api::Update for the client response.client_id
 *   } else {
 *     // process response.object as an answer to a request response.request_id for the client response.client_id
 *   }
 * }
 * \endcode
 */
class ClientManager final {
 public:
  /**
   * Creates a new TDLib client manager.
   */
  ClientManager();

  /**
   * Opaque TDLib client instance identifier.
   */
  using ClientId = std::int32_t;

  /**
   * Request identifier.
   * Responses to TDLib requests will have the same request id as the corresponding request.
   * Updates from TDLib will have request id == 0, incoming requests are thus disallowed to have request id == 0.
   */
  using RequestId = std::uint64_t;

  /**
   * Creates a new TDLib client and returns its opaque identifier.
   */
  ClientId create_client();

  /**
   * Sends request to TDLib. May be called from any thread.
   * \param[in] client_id TDLib client instance identifier.
   * \param[in] request_id Request identifier. Must be non-zero.
   * \param[in] request Request to TDLib.
   */
  void send(ClientId client_id, RequestId request_id, td_api::object_ptr<td_api::Function> &&request);

  /**
   * A response to a request, or an incoming update from TDLib.
   */
  struct Response {
    /**
     * TDLib client instance identifier, for which the response is received.
     */
    ClientId client_id;

    /**
     * Request identifier, to which the response corresponds, or 0 for incoming updates from TDLib.
     */
    RequestId request_id;

    /**
     * TDLib API object representing a response to a TDLib request or an incoming update.
     */
    td_api::object_ptr<td_api::Object> object;
  };

  /**
   * Receives incoming updates and request responses from TDLib. May be called from any thread, but must not be
   * called simultaneously from two different threads.
   * \param[in] timeout The maximum number of seconds allowed for this function to wait for new data.
   * \return An incoming update or request response. The object returned in the response may be a nullptr
   *         if the timeout expires.
   */
  Response receive(double timeout);

  /**
   * Synchronously executes TDLib requests. Only a few requests can be executed synchronously.
   * May be called from any thread.
   * \param[in] request Request to the TDLib.
   * \return The request response.
   */
  static td_api::object_ptr<td_api::Object> execute(td_api::object_ptr<td_api::Function> &&request);

  /**
   * Destroys the client manager and all TDLib client instance managed by it.
   */
  ~ClientManager();

  /**
   * Move constructor.
   */
  ClientManager(ClientManager &&other);

  /**
   * Move assignment operator.
   */
  ClientManager &operator=(ClientManager &&other);

  /**
   * Returns a pointer to a singleton ClientManager instance.
   * \return A unique singleton ClientManager instance.
   */
  static ClientManager *get_manager_singleton();

 private:
  friend class Client;
  class Impl;
  std::unique_ptr<Impl> impl_;
};

}  // namespace td
