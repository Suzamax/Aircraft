#ifndef APPLICATION_H
#define APPLICATION_H

#include <gtkmm/application.h>

#include "preferences.h"
#include "aircraft-window.h"

class Application : public Gtk::Application {
public:
    virtual ~Application() override;

    static Glib::RefPtr<Application> create();

private:
    Application();

    AircraftWindow * createWindow();

    void on_activate() override;
    void on_startup() override;
    void on_hide_window(Gtk::Window* window);
    void on_action_preferences();
    void on_action_quit();
};

#endif  // APPLICATION_H