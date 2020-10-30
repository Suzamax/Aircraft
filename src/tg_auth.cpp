/* aircraft-window.cpp
 *
 * Copyright 2020 Carlos Cañellas (Suzamax)
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE X CONSORTIUM BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name(s) of the above copyright
 * holders shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in this Software without prior written
 * authorization.
 */
#include "tg_auth.hpp"

namespace td_api = td::td_api;

namespace detail {
    template <class... Fs> struct overload;

    template <class F> struct overload<F> : public F
    {
        explicit overload(F f) : F(f) {}
    };
    template <class F, class... Fs>
    struct overload<F, Fs...>
        : public overload<F>
        , overload<Fs...>
    {
        overload(F f, Fs... fs) : overload<F>(f), overload<Fs...>(fs...) {}
        using overload<F>::operator();
        using overload<Fs...>::operator();
    };
}  // namespace detail

template <class... F>
auto overloaded(F... f) {
    return detail::overload<F...>(f...);
}

class TgAuth
{
    public:
        TgAuth()
        {
            // TODO Complete the auth object.
            //      Will it be static?
        }



    private:
        using Object = td_api::object_ptr<td_api::Object>;

        std::uint64_t current_query_id_{0};
        std::uint64_t authentication_query_id_{0};

        td_api::object_ptr<td_api::AuthorizationState> authorization_state_;

        bool are_authorized_{false};
        bool need_restart_{false};





        void on_authorization_state_update()
        {
            authentication_query_id_++;
            td_api::downcast_call(
                authorization_state_,
                overloaded(
                    [this](td_api::authorizationStateReady &)
                    {
                        are_authorized_ = true;
                        std::cout << "Got authorization" << std::endl;
                    },
                    [this](td_api::authorizationStateLoggingOut &)
                    {
                        are_authorized_ = false;
                        std::cout << "Logging out..." << std::endl;
                    },
                    [this](td_api::authorizationStateClosing &)
                    {
                        std::cout << "Closing..." << std::endl;
                    },
                    [this](td_api::authorizationStateClosed &)
                    {
                        are_authorized_ = false;
                        need_restart_ = true;
                        std::cout << "Terminated" << std::endl;
                    },

                )
            )
        }

}
