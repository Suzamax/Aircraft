#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <giomm/settings.h>
#include <gtkmm/builder.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/comboboxtext.h>
#include <gtkmm/dialog.h>

class Preferences : public Gtk::Dialog {
public:
    Preferences(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& builder);
    virtual ~Preferences();

    static Preferences* create(Gtk::Window& parent);

private:
    Glib::RefPtr<Gtk::Builder>  builder;
    Glib::RefPtr<Gio::Settings> settings;
    Gtk::ComboBoxText*          comboBoxText;
    Gtk::CheckButton*           checkButton;
};

#endif  // PREFERENCES_H