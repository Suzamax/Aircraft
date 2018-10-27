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

    // Moved serializer to own file, as a static function

}
