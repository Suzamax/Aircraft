using Td_json;
using Td_log;
using Json;

namespace Aircraft {
    public class Client {
        // Properties
        private string? number;
        private string? api_id;
        private string? api_hash;
        private void * client;
        private string dir_path;

        //public TelegramAccount acc;


        // Client constructor
        public Client (TelegramID acc) {
            this.number = acc.get_number ();
            this.api_id = acc.get_api_id ();
            this.api_hash = acc.get_api_hash ();
            this.dir_path = "%s/com.github.suzamax.Aircraft".printf (GLib.Environment.get_user_config_dir ());
            Td_log.file_path ("%s/log.txt".printf(this.dir_path));
            Td_log.verbosity_level(2);
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
            debug ("Sending data...");
            Td_json.client_send(this.client, data);
        }

        public string receive () {
            return Td_json.client_receive (this.client, 1.0);
        }






        // Ejemplo

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
            this.number = a.get_id ().get_number ();
            string api_id = a.get_id ().get_api_id ();
            string api_hash = a.get_id ().get_api_hash ();
            string dir_path = "%s/%s".printf (GLib.Environment.get_user_config_dir (), "com.github.suzamax.Aircraft");
            string db_path = "%s/%s".printf (dir_path, "database");
            string data =
            """
                {
                    "@type":  "setTdlibParameters",
                    "parameters":
                    {
                        "application_version": "0.0.1",
                        "database_directory": "%s",
                        "use_message_database": true,
                        "api_id": "%s",
                        "api_hash": "%s",
                        "system_version": "elementary Juno",
                        "system_language_code": "en",
                        "device_model": "Desktop",
                        "files_directory": "%s/storage"
                    }
                }
            """.printf (db_path, api_id, api_hash, dir_path);
            this.send (data);
        }

        public void encrypt () {
            string data =
            """
                {
                    "@type": "checkDatabaseEncryptionKey",
                    "setEncryptionKey": ""
                }
            """;
            this.send (data);
        }


        public string chats () {
            string data =
            """
                {
                    "@type": "getChats",
                    "offsetOrder": 9223372036854775807,
                    "offsetChatId": 0,
                    "limit": 20
                }
            """;
            this.send (data);
            return "Test";
        }

        public void phone () {
            string data =
            """
                {
                    "@type": "setAuthenticationPhoneNumber",
                    "phone_number": "%s"
                }
            """.printf(this.number);
            this.send (data);
        }


        public void code (string code) {
            string data =
            """
                {
                    "@type": "checkAuthenticationCode",
                    "code": "%s"
                }
            """.printf (code);
            this.send (data);
        }

        public void status () {
            string data =
            """
                {
                    "@type": "getAuthorizationState"
                }
            """;

            this.send (data);
        }

    }
}
