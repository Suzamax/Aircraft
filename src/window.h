#ifndef WINDOW_H
#define WINDOW_H

#include <giomm/settings.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/builder.h>
#include <gtkmm/headerbar.h>
#include <gtkmm/label.h>

class Window : public Gtk::ApplicationWindow {
public:
    Window(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& builder);
    virtual ~Window();

    static Window* create();

private:
    Glib::RefPtr<Gtk::Builder>  builder;
    Glib::RefPtr<Gio::Settings> settings;
    Gtk::HeaderBar*             headerBar;
    Gtk::Label*                 firstLabel;
    Gtk::Label*                 secondLabel;

    void setHeaderBar();
};

#endif  // WINDOW_H