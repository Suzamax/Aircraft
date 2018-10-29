namespace Aircraft {

    [DBus (name = "com.github.suzamax.Aircraft")]
    public class AircraftDBus : Object {

        private MetadataComponent mc;

        public struct Message {
            public UpdateStates state;
            string event;
        }

        public AircraftDBus (MetadataComponent mc) {
            this.mc = mc;
        }

        public async void receiver () {
            while (true) {
                Message msg = MessageUtils.handle_last_message (this.mc); //Aircraft.client_dbus.receive ());
                print (msg.event);
                received (msg);
            }

        }

        public signal void received (Message msg);
    }

    public class DBusHandler {
        private MetadataComponent mc;
        void on_bus_acquired (DBusConnection conn) {
            try {
                conn.register_object ("/com/github/suzamax/Aircraft", new AircraftDBus (this.mc));
            } catch (IOError e) {
                stderr.printf ("Could not register service\n");
            }
        }


        public void init_dbus (MetadataComponent mc) {
            this.mc = mc;
            Bus.own_name (BusType.SESSION, "com.github.suzamax.Aircraft", BusNameOwnerFlags.NONE,
                      on_bus_acquired,
                      () => {},
                      () => stderr.printf ("Could not aquire name\n"));

            new MainLoop ().run ();
        }
    }


}
