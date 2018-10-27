namespace Aircraft {

    public class UpdateHandler : GLib.Object {

        private Client client;
        private MetadataComponent mc;

        public UpdateHandler (MetadataComponent mc) {
            this.client = mc.get_client ();
            this.mc = mc;
        }

        public signal void update ();

        public void updater () {
            update ();
        }

        public MetadataComponent get_meta () {
            return this.mc;
        }

        public void telegram_signal () {
            //this.mc.set_last_update (this.client.receive ());
        }

        public string get_chats () {
            return this.mc.get_client (). chats ();
        }




    }

}
