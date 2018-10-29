namespace Aircraft {

    [DBus (name = "com.github.suzamax.Aircraft")]
    interface Messages : Object {

        public abstract async void receiver () throws IOError;
        public signal void received (AircraftDBus.Message msg);

    }


    public class ChatListView {

        private ConnectionHandler ch;
        private MetadataComponent mc;

        public ChatListView (MetadataComponent mc, ConnectionHandler ch) {
            this.mc = mc;
            this.ch = new ConnectionHandler (mc);
        }

        public void update_chats () {
            var loop = new MainLoop ();

            Messages msgs = null;

            try {
                msgs = Bus.get_proxy_sync (BusType.SESSION, "com.github.suzamax.Aircraft",
                                                    "/com/github/suzamax/Aircraft");

                msgs.received.connect ((msg) => {
                    print(msg.event);
                });
            } catch (IOError e) {
                stderr.printf ("%s\n", e.message);
            }
        }





        /* Get chats!

        public void get_chats () {
            var chats = this.ch.get_chats ();
        }
        */
    }
}
