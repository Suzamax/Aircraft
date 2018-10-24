namespace Aircraft {

    public class Connection {

        private MetadataComponent mc;
        private UpdateHandler updater;
        private Logger log;

        public Connection (MetadataComponent mc) {
            this.mc = mc;

        }

        public void init_connection () {
            this.updater = new UpdateHandler (this.mc);
            this.updater.updater ();
            this.updater.update.connect (updater.telegram_signal);
            string tud = updater.get_meta ().get_last_update ();
//          print ("%s\n", tud);
            if (tud.contains ("authorizationStateWaitEncryptionKey")) {
                updater.get_meta ().get_client ().encrypt ();
                this.updater.update.connect (updater.telegram_signal);
                this.updater.updater ();
            }

            this.log = new Logger (this.mc);
        }

        public void get_logs () {
            this.log.log ();
        }

        public void pass_phone () {
            this.updater.updater ();
            this.updater.update.connect (updater.telegram_signal);
            updater.get_meta ().get_client ().phone ();
            this.updater.updater ();
            this.updater.update.connect (updater.telegram_signal);
        }

        public void get_code () {
            this.updater.updater ();
            this.updater.update.connect (updater.telegram_signal);
            var dialog_code = new CodeDialog (this.mc);
        }


        public void get_chat_list () {
            this.updater.updater ();
            this.updater.updater ();
            this.updater.get_chats ();
        }


    }

}
