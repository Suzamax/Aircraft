namespace Aircraft {
    public class MetadataComponent {

        private Client? tc;
        private Account? acc;

        public MetadataComponent (Client tc, Account acc) {
            this.tc = tc;
            this.acc = acc;
        }

        public Client get_client () {
            return this.tc;
        }

        public Account get_account () {
            return this.acc;
        }
    }

}
