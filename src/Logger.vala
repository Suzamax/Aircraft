namespace Aircraft {

    public class Logger {

        private MetadataComponent mc;

        public Logger (MetadataComponent mc) {
            this.mc = mc;
        }

        public void log () {

            //FileStream stream = GLib.stderr;

            assert (GLib.stderr != null);

            char buf[1024];

            while (GLib.stderr.gets (buf) != null) {
                print ((string) buf);
            }

        }


    }

}
