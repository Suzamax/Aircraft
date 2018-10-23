/*
* Copyright (c) 2018 Carlos Cañellas Tovar (https://www.suzamax.one)
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
using Gtk;


namespace Aircraft {
    public static Gtk.Application app;
    public static Window window_dummy;
    public static Handler handler;

    public class Application : Gtk.Application {

        public abstract signal void toast (string title);

        construct {
            application_id = "com.github.suzamax.Aircraft";
            flags = ApplicationFlags.FLAGS_NONE;
        }


        protected override void activate () {
            Handler handler = new Handler(this);
            if (handler.get_window () != null) return;

            debug ("Creating a new window...");

            if (handler.get_account () == null) {
                NewAccountDialog.open ();
            } else
                handler.new_window (this);

        }

        protected override void startup (){
            base.startup ();
            Granite.Services.Logger.DisplayLevel = Granite.Services.LogLevel.INFO;

            window_dummy = new Window ();
            add_window (window_dummy);
        }

        public static int main (string[] args) {
            Gtk.init (ref args);
            var app = new Aircraft.Application ();
//          account = new Account (app);
//          account.init ();
//          TelegramAccount telegram_account = account.get_account ();
//          Client client = new Client (telegram_account);

            return app.run (args);
        }
    }
}
