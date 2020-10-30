#include <td/telegram/Client.h>
#include <td/telegram/td_api.h>
#include <td/telegram/td_api.hpp>

#include <map>
#include <functional>



namespace td_api = td::td_api;

class TgClient {
    public:
        TgClient(); // TODO in cpp file
        ~TgClient(); // TODO destructor of worlds

    private:
        std::unique_ptr<td::Client> client_;

        std::map<std::uint64_t, std::function<void(Object)>> handlers_;
        std::map<std::int32_t, td_api::object_ptr<td_api::user>> users_;
        std::map<std::int64_t, std::string> chat_title_;


}
