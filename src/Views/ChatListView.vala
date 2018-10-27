namespace Aircraft {

    [DBus (name = "com.github.suzamax.Aircraft")]
    interface Messages : Object {
        public signal void started ();
        public signal void finished ();


        public async void retrieve_chats () {

        }

    }

    public class ChatListView {

        private ConnectionHandler ch;


        public ChatListView (MetadataComponent mc, ConnectionHandler ch) {
            this.ch = new ConnectionHandler (mc);
        }

        // Get chats!

        public void get_chats () {
            var chats = this.ch.get_chats ();
        }
    }
}
