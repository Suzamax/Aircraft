namespace Aircraft {

    public class Connection {

        private MetadataComponent mc;
        private UpdateHandler updater;

        public Connection (MetadataComponent mc) {
            this.mc = mc;

        }

        public void init_connection () {
            this.updater = new UpdateHandler (this.mc);
            this.updater.updater ();
            this.updater.update.connect (updater.telegram_signal);
            this.updater.get_meta ().get_client ().encrypt ();
        }

        public void pass_phone () {
            debug ("Passing phone...");
            this.updater.get_meta ().get_client ().phone ();
            this.updater.updater ();
            this.updater.updater ();
            //this.updater.update.connect (updater.telegram_signal);
        }

        public void get_code () {
            this.updater.updater ();
            debug ("Getting code...");
            this.updater.update.connect (updater.telegram_signal);
            var dialog_code = new CodeDialog (this.mc);
        }



        public void get_chat_list () {
            this.updater.updater ();
            this.updater.updater ();
            this.updater.get_chats ();
        }

        public string get_status () {
            this.mc.get_client ().status ();
            return this.mc.get_client ().receive ();
        }

    }

}
