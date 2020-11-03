#ifndef _TG_CLIENT_
#define _TG_CLIENT_

#include "tg_state.hpp"
#include <td/telegram/Client.h>
#include <td/telegram/td_api.h>
#include <td/telegram/td_api.hpp>

#include <map>
#include <functional>
#include <memory>

namespace td_api = td::td_api;
using Object = td_api::object_ptr<td_api::Object>;

class TgClient {
    public:
        TgClient(TgState * state);
        ~TgClient();
        void send_query(td_api::object_ptr<td_api::Function> f, std::function<void(Object)> handler);
        TgState * getState();
    private:
        std::unique_ptr<td::Client> client_;
        TgState * state_;
        std::uint64_t current_query_id_;
        std::map<std::uint64_t, std::function<void(Object)>> handlers_;
        std::map<std::int32_t, td_api::object_ptr<td_api::user>> users_;
        std::map<std::int64_t, std::string> chat_title_;
        std::uint64_t next_query_id();

};

#endif