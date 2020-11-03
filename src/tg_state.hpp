#ifndef _TG_STATE_
#define _TG_STATE_

#include <map>
#include <functional>
#include <td/telegram/td_api.h>
#include <td/telegram/td_api.hpp>

namespace td_api = td::td_api;
using Object = td_api::object_ptr<td_api::Object>;

/**
 * This class has the Telegram state of the application.
 */
class TgState
{
    public:
        TgState();
        ~TgState();
//    private:
        bool are_authorized_;
        bool need_restart_;

        std::map<std::uint64_t, std::function<void(Object)>> handlers_;
        std::map<std::int32_t, td_api::object_ptr<td_api::user>> users_;
        std::map<std::int64_t, std::string> chat_title_;
};

#endif