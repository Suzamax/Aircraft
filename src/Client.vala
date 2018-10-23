using Td_json;
using Json;

namespace Aircraft {
    public class Client {
        // Properties
        private string? api_id;
        private string? api_hash;
        private void * client;

        //public TelegramAccount acc;

        // Client constructor
        public Client (TelegramAccount acc) {
            this.api_id = acc.api_id;
            this.api_hash = acc.api_hash;
        }

        public void create_client () {
            this.client = Td_json.client_create ();
        }

        public void destroy_client () {
            Td_json.client_destroy (this.client);
        }

        public void test () {
            string test_data =
            """
                {
                    "@type":  "getTextEntities",
                    "text": "@telegram /test_command https://telegram.org telegram.me",
                    "@extra": ["5", 7.0]
                }
            """;
            Json.Parser parser = new Json.Parser ();
            try {
                parser.load_from_data (test_data);
                Json.Node node = parser.get_root ();
                var data = node.get_object ();
                Td_json.client_execute (this.client, test_data  );
            } catch (Error e) {
                print ("Unable to parse the string: %s\n", e.message);
            }
        }

    }
}
