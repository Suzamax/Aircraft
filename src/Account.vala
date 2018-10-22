using GLib;

public class Aircraft.Account : Object {
    private string dir_path;
    private string file_path;

    public Account () {
        Object();
        this.dir_path = "%s/%s".printf (GLib.Environment.get_user_config_dir (), Aircraft.app.application_id);
        this.file_path = "%s/%s".printf (dir_path, "account.json");
    }

    
}
