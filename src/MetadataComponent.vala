namespace Aircraft {
    public class MetadataComponent {

        private Client tc;

        public MetadataComponent (Client tc) {
            this.tc = tc;
        }

        public Client get_client () {
            return tc;
        }



    }

}
