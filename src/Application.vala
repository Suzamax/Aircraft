/*
* Copyright (c) {{yearrange}} Carlos Cañellas Tovar (https://www.suzamax.one)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Carlos Cañellas Tovar <https://www.suzamax.one>
*/
using Granite;
using Granite.Widgets;
using Gtk;
using Td_json;

namespace Aircraft {
    public class Application : Granite.Application {

        public Application () {
            Object(
                application_id: "com.github.suzamax.Aircraft",
                flags: ApplicationFlags.FLAGS_NONE
            );
        }

        protected override void activate () {
            var window = new Gtk.ApplicationWindow (this);
            var main = new Gtk.Grid ();

            window.title = "Aircraft";
            window.set_default_size (900, 640);
            window.add (main);
            window.show_all ();
        }

        public static int main (string[] args) {
            var app = new Aircraft.Application ();
            void * client = Td_json.client_create();
            Td_json.client_destroy(client);
            return app.run (args);
        }
    }
}
