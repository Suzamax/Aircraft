public class TelegramAccount : GLib.Object {

    public string? username {get; set;}
    public string number {get; set;} // Includes the "+" character
    public string api_id {get; set;}
    public string api_hash {get; set;}


    public TelegramAccount () {
        Object();
    }

    public static TelegramAccount parse (Json.Object obj) {
        var acc = new TelegramAccount ();
        acc.username = obj.get_string_member ("username");
        acc.number = obj.get_string_member ("number");
        acc.api_id = obj.get_string_member ("api_id");
        acc.api_hash = obj.get_string_member ("api_hash");
        return acc;
    }

    public Json.Node serialize () {
        var builder = new Json.Builder ();
        builder.begin_object ();
        builder.set_member_name ("hash");
        builder.add_string_value ("test");
        builder.set_member_name ("username");
        builder.add_string_value (this.username);
        builder.set_member_name ("number");
        builder.add_string_value (this.number);
        builder.set_member_name ("api_id");
        builder.add_string_value (this.api_id);
        builder.set_member_name ("api_hash");
        builder.add_string_value (this.api_hash);
        builder.end_object ();
        return builder.get_root ();
    }

}
