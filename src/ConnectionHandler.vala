namespace Aircraft {
    public class ConnectionHandler {

        private Connection conn;
        private MetadataComponent mc;

        public ConnectionHandler (MetadataComponent mc) {
            this.mc = mc;
        }



        public void init () {
            this.conn = new Connection (this.mc);
            conn.init_connection ();
            /*while (true) {
                var status = conn.get_status ();
                print (status);
                if (status.contains ("authorizationStateWaitPhoneNumber")){
                    break;
                }

            }*/
            debug ("Passing phone...");
            conn.pass_phone ();
            debug ("Phone sent!");
            // aquí llamar a un diálogo para obtener la clave.
            while (true) {
                string status = conn.get_status ();
                if (status.contains ("authorizationStateWaitCode")) {
                    conn.get_code ();
                    break;
                } else if (status.contains ("authorizationStateReady")) break;
                //else if (status.contains ("authorizationStateWaitPhoneNumber"))
                    //conn.pass_phone ();
                else debug (status);

            }
        }

        public string get_chats () {
            return this.conn.get_chat_list ();
        }

    }
}
