#ifndef _TG_AUTH_
#define _TG_AUTH_

#include "tg_client.hpp"
#include <td/telegram/Client.h>
#include <td/telegram/td_api.h>
#include <td/telegram/td_api.hpp>
#include <td/tl/TlObject.h>
#include <iostream>

namespace td_api = td::td_api;

using Object = td_api::object_ptr<td_api::Object>;

class TgAuth
{
public:
    TgAuth(TgClient * client);
    ~TgAuth();
private:
    td_api::object_ptr<td_api::AuthorizationState> authorization_state_;
    TgClient * client_; // A client passed on the constructor.
    std::uint64_t authentication_query_id_;
    void on_authorization_state_update();
    auto create_authentication_query_handler();
    void check_authentication_error(Object object);
};

#endif