namespace Aircraft {
    public class Serializer {

        public static Json.Node serializer_account (TelegramID id) {
            var builder = new Json.Builder ();
            builder.begin_object ();
            /*builder.set_member_name ("hash");
            builder.add_string_value ("test");
            builder.set_member_name ("username");
            builder.add_string_value (this.username);
            */
            // Add number
            builder.set_member_name ("number");
            builder.add_string_value (id.get_number ());
            // Add API
            builder.set_member_name ("api_id");
            builder.add_string_value (id.get_api_id ());
            builder.set_member_name ("api_hash");
            builder.add_string_value (id.get_api_hash ());
            builder.end_object ();
            return builder.get_root ();
        }

    }
}
