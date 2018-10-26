public class TelegramID : GLib.Object {

    private string number;// {get; set;} // Includes the "+" character
    private string api_id;//{get; set;}
    private string api_hash;// {get; set;}


    public TelegramID () {
        Object ();
    }
    // GETTERS
    public string get_number () {
        return this.number;
    }

    public string get_api_id () {
        return this.api_id;
    }

    public string get_api_hash () {
        return this.api_hash;
    }
    // SETTERS
    public void set_number (string s) {
        this.number = s;
    }

    public void set_api_id (string s) {
        this.api_id = s;
    }

    public void set_api_hash (string s) {
        this.api_hash = s;
    }

    public static TelegramID parse (Json.Object obj) {

        var number = obj.get_string_member ("number");
        var api_id = obj.get_string_member ("api_id");
        var api_hash = obj.get_string_member ("api_hash");
        var id = new TelegramID ();
        id.set_number (number);
        id.set_api_id (api_id);
        id.set_api_hash (api_hash);

        return id;
    }

    public Json.Node serialize () {
        var builder = new Json.Builder ();
        builder.begin_object ();
        /*builder.set_member_name ("hash");
        builder.add_string_value ("test");
        builder.set_member_name ("username");
        builder.add_string_value (this.username);
        */
        // Add number
        builder.set_member_name ("number");
        builder.add_string_value (this.number);
        // Add API
        builder.set_member_name ("api_id");
        builder.add_string_value (this.api_id);
        builder.set_member_name ("api_hash");
        builder.add_string_value (this.api_hash);
        builder.end_object ();
        return builder.get_root ();
    }

}
