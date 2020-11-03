#include "preferences.h"

#include "projectdefinitions.h"

Preferences::Preferences(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder> &builder)
        : Gtk::Dialog(cobject), builder(builder), settings(nullptr), comboBoxText(nullptr), checkButton(nullptr) {
    builder->get_widget("comboBoxText", comboBoxText);
    if (!comboBoxText) {
        throw std::runtime_error("No \"comboBoxText\" object in preferences.glade");
    }

    builder->get_widget("checkButton", checkButton);
    if (!checkButton) {
        throw std::runtime_error("No \"checkButton\" object in preferences.glade");
    }

    settings = Gio::Settings::create(projectdefinitions::getApplicationID());
    settings->bind("first", comboBoxText->property_active_id());
    settings->bind("second", checkButton->property_active());
}

Preferences::~Preferences() {
}

Preferences *Preferences::create(Gtk::Window &parent) {
    auto builder = Gtk::Builder::create_from_resource(projectdefinitions::getApplicationPrefix() + "ui/preferences.glade");

    Preferences *prefsDialog = nullptr;
    builder->get_widget_derived("prefsDialog", prefsDialog);
    if (!prefsDialog) {
        throw std::runtime_error("No \"prefsDialog\" object in preferences.glade");
    }

    prefsDialog->set_transient_for(parent);
    return prefsDialog;
}