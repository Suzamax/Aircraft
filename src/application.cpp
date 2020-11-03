#include "application.h"
#include <iostream>
#include "projectdefinitions.h"

// Telegram
#include "tg_thread.hpp"
#include "tg_state.hpp"
#include "tg_client.hpp"
#include "tg_auth.hpp"

Application::Application(TgState * state) : Gtk::Application(projectdefinitions::getApplicationID() + ".application") {
    state_ = state;
}

Application::~Application() {
}

Glib::RefPtr<Application> Application::create(TgState * state) {
    return Glib::RefPtr<Application>(new Application(state));
}

Window * Application::createWindow() {
    auto window = Window::create();
    add_window(*window);
    window->signal_hide().connect(sigc::bind(sigc::mem_fun(*this, &Application::on_hide_window), window));
    return window;
}

void Application::on_activate() {
    try {
        auto window = createWindow();
        window->present();
    } catch (const Glib::Error &ex) {
        std::cerr << "Application::on_activate(): " << ex.what() << std::endl;
    } catch (const std::exception &ex) {
        std::cerr << "Application::on_activate(): " << ex.what() << std::endl;
    }
}

void Application::on_startup() {
    Gtk::Application::on_startup();

    add_action("preferences", sigc::mem_fun(*this, &Application::on_action_preferences));
    add_action("quit", sigc::mem_fun(*this, &Application::on_action_quit));
    set_accel_for_action("app.quit", "<Ctrl>Q");

    auto builder = Gtk::Builder::create();
    try {
        builder->add_from_resource(projectdefinitions::getApplicationPrefix() + "ui/menu.glade");
    } catch (const Glib::Error &ex) {
        std::cerr << "Application::on_startup(): " << ex.what() << std::endl;
        return;
    }

    auto object   = builder->get_object("appmenu");
    auto app_menu = Glib::RefPtr<Gio::MenuModel>::cast_dynamic(object);
    if (app_menu) {
        set_app_menu(app_menu);
    } else {
        std::cerr << "Application::on_startup(): No \"appmenu\" object in menu.glade" << std::endl;
    }
}

void Application::on_hide_window(Gtk::Window *window) {
    delete window;
}

void Application::on_action_preferences() {
    try {
        auto prefsDialog = Preferences::create(*get_active_window());
        prefsDialog->present();
        prefsDialog->signal_hide().connect(sigc::bind(sigc::mem_fun(*this, &Application::on_hide_window), prefsDialog));
    } catch (const Glib::Error &ex) {
        std::cerr << "Application::on_action_preferences(): " << ex.what() << std::endl;
    } catch (const std::exception &ex) {
        std::cerr << "Application::on_action_preferences(): " << ex.what() << std::endl;
    }
}

void Application::on_action_quit() {
    auto windows = get_windows();
    for (auto window : windows) {
        window->hide();
    }

    quit();
}