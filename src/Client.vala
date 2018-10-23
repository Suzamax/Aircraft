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

        private void execute (string data) {
            Td_json.client_execute (this.client, data);
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
            this.execute (test_data);
        }

    }
}
