#include "window.h"
#include "tg_thread.hpp"
#include "tg_state.hpp"
#include "tg_auth.hpp"
#include "tg_client.hpp"
#include "application.h"
#include "projectdefinitions.h"
#include <memory>
#include <thread>
#include <glibmm.h>
#include <iostream>

int main(int argc, char** argv) {
    Glib::setenv("GSETTINGS_SCHEMA_DIR", projectdefinitions::getGeneratedDataDirectory(), false);
    auto app = Application::create();

    // Telegram
    TgState * state     = new TgState(); // TODO pass state to App!!
    TgClient * client   = new TgClient(state);
    TgAuth * auth       = new TgAuth(client);
    TgThread * tgthread = new TgThread(client);

    // TODO make it a thread


    std::thread telegramThread (tgthread::thread_loop());

    return app->run(argc, argv);
}