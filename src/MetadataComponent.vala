namespace Aircraft {
    public class MetadataComponent {

        private Client? tc;
        private Account? acc;
        //private string last_update;

        public MetadataComponent (Client tc, Account acc) {
            this.tc = tc;
            this.acc = acc;
        }

        /*public void set_last_update (string s) {
            this.last_update = s;
        }
        public string get_last_update () {
            return this.last_update;
        }*/

        public Client get_client () {
            return this.tc;
        }

        public Account get_account () {
            return this.acc;
        }
    }

}
