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

}
