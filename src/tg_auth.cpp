#include "tg_auth.hpp"
#include "overloaded.h"
#include <td/telegram/td_api.h>
#include <td/tl/TlObject.h>
#include <td/telegram/td_api.hpp>
#include <cstdlib>

namespace td_api = td::td_api;

TgAuth::TgAuth(TgClient *client) {
    client_ = client;
    authentication_query_id_ = 0;
}

TgAuth::~TgAuth()
{
    delete client_;
    authorization_state_.reset();
}


auto TgAuth::create_authentication_query_handler() {
    return [this, id = authentication_query_id_](Object object) {
        if (id == authentication_query_id_) {
            check_authentication_error(std::move(object));
        }
    };
}

void TgAuth::check_authentication_error(Object object) {
    if (object->get_id() == td_api::error::ID) {
        auto error = td::move_tl_object_as<td_api::error>(object);
        std::cout << "Error: " << to_string(error) << std::flush;
        this->on_authorization_state_update();
    }
}

void TgAuth::on_authorization_state_update()
{
    authentication_query_id_++;
    td_api::downcast_call(
            *authorization_state_,
            overloaded(
                    [this](td_api::authorizationStateReady &) {
                        client_->getState()->are_authorized_ = true;
                        std::cout << "Got authorization" << std::endl;
                    },
                    [this](td_api::authorizationStateLoggingOut &) {
                        client_->getState()->are_authorized_ = false;
                        std::cout << "Logging out" << std::endl;
                    },
                    [this](td_api::authorizationStateClosing &) { std::cout << "Closing" << std::endl; },
                    [this](td_api::authorizationStateClosed &) {
                        client_->getState()->are_authorized_ = false;
                        client_->getState()->need_restart_ = true;
                        std::cout << "Terminated" << std::endl;
                    },
                    [this](td_api::authorizationStateWaitCode &) {
                        std::cout << "Enter authentication code: " << std::flush;
                        std::string code;
                        std::cin >> code;
                        client_->send_query(td_api::make_object<td_api::checkAuthenticationCode>(code),
                                            this->create_authentication_query_handler());
                    },
                    [this](td_api::authorizationStateWaitRegistration &) {
                        std::string first_name;
                        std::string last_name;
                        std::cout << "Enter your first name: " << std::flush;
                        std::cin >> first_name;
                        std::cout << "Enter your last name: " << std::flush;
                        std::cin >> last_name;
                        client_->send_query(td_api::make_object<td_api::registerUser>(first_name, last_name),
                                            this->create_authentication_query_handler());
                    },
                    [this](td_api::authorizationStateWaitPassword &) {
                        std::cout << "Enter authentication password: " << std::flush;
                        std::string password;
                        std::getline(std::cin, password);
                        client_->send_query(td_api::make_object<td_api::checkAuthenticationPassword>(password),
                                            this->create_authentication_query_handler());
                    },
                    [this](td_api::authorizationStateWaitOtherDeviceConfirmation &state) {
                        std::cout << "Confirm this login link on another device: " << state.link_ << std::endl;
                    },
                    [this](td_api::authorizationStateWaitPhoneNumber &) {
                        std::cout << "Enter phone number: " << std::flush;
                        std::string phone_number;
                        std::cin >> phone_number;
                        client_->send_query(td_api::make_object<td_api::setAuthenticationPhoneNumber>(phone_number, nullptr),
                                            this->create_authentication_query_handler());
                    },
                    [this](td_api::authorizationStateWaitEncryptionKey &)
                    {
                        std::cout << "Enter encryption key or DESTROY" << std::endl;
                        std::string key;
                        std::getline(std::cin, key);
                        if (key == "DESTROY") {
                            client_->send_query(td_api::make_object<td_api::destroy>(), this->create_authentication_query_handler());
                        } else {
                            client_->send_query(td_api::make_object<td_api::checkDatabaseEncryptionKey>(std::move(key)),
                                                this->create_authentication_query_handler());
                        }
                    },
                    [this](td_api::authorizationStateWaitTdlibParameters &)
                    {
                        char * end;
                        auto parameters = td_api::make_object<td_api::tdlibParameters>();
                        // Add parameters
                        parameters->database_directory_ = "db";
                        parameters->use_message_database_ = true;
                        parameters->use_secret_chats_ = true;
                        parameters->api_id_ = strtol(std::getenv("API_ID"), &end, 10);
                        parameters->api_hash_ = std::getenv("API_HASH");
                        parameters->system_language_code_ = "en";
                        parameters->device_model_ = "Desktop";
                        parameters->application_version_ = "0.2.0";
                        parameters->enable_storage_optimizer_ = true;

                        // Now use the client object's method to send this query to the Telegram servers
                        client_->send_query(td_api::make_object<td_api::setTdlibParameters>(std::move(parameters)),
                                            create_authentication_query_handler());
                    }
            )
    );
}

