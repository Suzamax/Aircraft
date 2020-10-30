/* main.cpp
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

#include "aircraft-window.h"
#include <memory>

static void
on_activate (Glib::RefPtr<Gtk::Application> app)
{
	// Get the current window. If there is not one, we will create it.
	static std::unique_ptr<Gtk::Window> window;

	if (!window) {
		window = std::make_unique<AircraftWindow>();
		window->property_application() = app;
		window->property_default_width() = 600;
		window->property_default_height() = 300;
		app->add_window(*window);
	}

	// Ask the window manager/compositor to present the window to the user.
	window->present();
}

int
main (int argc, char *argv[])
{
	int ret;

	// Create a new Gtk::Application. The application manages our main loop,
	// application windows, integration with the window manager/compositor, and
	// desktop features such as file opening and single-instance applications.
	Glib::RefPtr<Gtk::Application> app =
		Gtk::Application::create("one.suzamax.Aircraft", Gio::APPLICATION_FLAGS_NONE);

	// We connect to the activate signal to create a window when the application
	// has been lauched. Additionally, this signal notifies us when the user
	// tries to launch a "second instance" of the application. When they try
	// to do that, we'll just present any existing window.
	//
	// Bind the app object to be passed to the callback "on_activate"
	app->signal_activate().connect(sigc::bind(&on_activate, app));

	// Run the application. This function will block until the applicaiton
	// exits. Upon return, we have our exit code to return to the shell. (This
	// is the code you see when you do `echo $?` after running a command in a
	// terminal.
	ret = app->run(argc, argv);

	return ret;
}
