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

        private string execute (string data) {
            return Td_json.client_execute (this.client, data);
        }

        private void send (string data) {
            Td_json.client_send(this.client, data);
        }

        private void receive () {
            Td_json.client_receive (this.client, 1.0);
        }

        public string test () {
            string test_data =
            """
                {
                    "@type":  "getTextEntities",
                    "text": "@telegram /test_command https://telegram.org telegram.me",
                    "@extra": ["5", 7.0]
                }
            """;
            return this.execute (test_data);
        }

        public void auth (Account a) {
            string username = a.get_account ().username;
            string number = a.get_account ().number;
            string api_id = a.get_account ().api_id;
            string api_hash = a.get_account ().api_hash;
            string dir_path = "%s/%s".printf (GLib.Environment.get_user_config_dir (), "com.github.suzamax.Aircraft");
            string db_path = "%s/%s".printf (dir_path, "database");
            string data =
            """
                {
                    "@type":  "setTdlibParameters",
                    "parameters":
                    {
                        "application_version": "0.1.0",
                        "database_directory": "$HOME/.config/com.github.suzamax.Aircraft/database",
                        "use_message_database": true,
                        "api_id": "%s",
                        "api_hash": "%s",
                        "system_version": "elementary Juno",
                        "system_language_code": "es",
                        "device_model": "Desktop",
                        "files_directory": "$HOME/Downloads/"
                    }
                }
            """.printf(api_id, api_hash);
            this.send(data);
        }

    }
}
