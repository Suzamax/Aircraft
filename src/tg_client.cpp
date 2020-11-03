#include <td/telegram/Client.h>
#include <td/telegram/td_api.h>
#include "tg_client.hpp"
#include <functional>

namespace td_api = td::td_api;
using Object = td_api::object_ptr<td_api::Object>;

TgClient::TgClient(TgState * state)
{
    td::Client::execute({0, td_api::make_object<td_api::setLogVerbosityLevel>(1)});
    client_ = std::make_unique<td::Client>();
    current_query_id_ = 0;
    state_ = state;
}
TgClient::~TgClient()
{
    client_.reset();
}

TgState * TgClient::getState()
{
    return state_;
}

void TgClient::send_query(td_api::object_ptr<td_api::Function> f, std::function<void(Object)> handler)
{
    auto query_id = this->next_query_id();
    if (handler) {
      handlers_.emplace(query_id, std::move(handler));
    }
    client_->send({query_id, std::move(f)});
}

std::uint64_t TgClient::next_query_id()
{
    return ++this->current_query_id_;
}