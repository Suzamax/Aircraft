#ifndef _TG_THREAD_
#define _TG_THREAD_

// Telegram libraries
#include <td/telegram/Client.h>
#include <td/telegram/td_api.h>
#include <td/telegram/td_api.hpp>

// More includes

#include <iostream>
#include <thread>

#include "tg_auth.hpp"

class TgThread
{
    public:
        TgThread();
        ~TgThread();
        void thread_loop();

    private:
        // NADA
};

#endif