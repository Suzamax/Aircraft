#include "window.h"

#include <gtkmm/settings.h>

#include <iostream>

#include "projectdefinitions.h"

Window::Window(Gtk::ApplicationWindow::BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& builder)
        : Gtk::ApplicationWindow(cobject),
          builder(builder),
          settings(nullptr),
          headerBar(nullptr),
          firstLabel(nullptr),
          secondLabel(nullptr) {
    builder->get_widget("firstLabel", firstLabel);
    if (!firstLabel) {
        throw std::runtime_error("No \"firstLabel\" object in window.glade");
    }

    builder->get_widget("secondLabel", secondLabel);
    if (!secondLabel) {
        throw std::runtime_error("No \"secondLabel\" object in window.glade");
    }

    settings = Gio::Settings::create(projectdefinitions::getApplicationID());
    settings->bind("first", firstLabel->property_label());
    settings->bind("second", secondLabel->property_visible());

    set_icon(Gdk::Pixbuf::create_from_resource(projectdefinitions::getApplicationPrefix() + "icons/48x48/icon.png"));
    setHeaderBar();
}

Window::~Window() {
}

Window* Window::create() {
    auto builder = Gtk::Builder::create_from_resource(projectdefinitions::getApplicationPrefix() + "ui/window.glade");

    Window* window = nullptr;
    builder->get_widget_derived("window", window);
    if (!window) {
        throw std::runtime_error("No \"window\" object in window.glade");
    }
    return window;
}

void Window::setHeaderBar() {
    auto builder =
            Gtk::Builder::create_from_resource(projectdefinitions::getApplicationPrefix() + "ui/headerbar.glade");
    builder->get_widget("headerBar", headerBar);
    if (!headerBar) {
        throw std::runtime_error("No \"headerBar\" object in headerbar.glade");
    } else {
        headerBar->set_title(projectdefinitions::getProjectName());
        set_titlebar(*headerBar);
    }
}