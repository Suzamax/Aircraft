using GLib;

public class Aircraft.Account : Object {
    private string dir_path;
    private string file_path;

    private Client tdclient;
    private TelegramAccount? acc;

    public Account (Gtk.Application app) {
        Object();
        this.dir_path = "%s/%s".printf (GLib.Environment.get_user_config_dir (), app.application_id);
        this.file_path = "%s/%s".printf (dir_path, "account.json");
    }

    private void save (bool overwrite = true) {
        try {
            var dir = File.new_for_path (dir_path);
            if (!dir.query_exists ())
                dir.make_directory ();

            var file = File.new_for_path (file_path);
            if (file.query_exists () && !overwrite)
                return;

            var builder = new Json.Builder ();
            builder.begin_array ();
            var node = acc.serialize ();
            builder.add_value (node);

            builder.end_array ();

            var generator = new Json.Generator ();
            generator.set_root (builder.get_root ());
            var data = generator.to_data (null);

            if (file.query_exists ())
                file.@delete ();

            FileOutputStream stream = file.create (FileCreateFlags.PRIVATE);
            stream.write (data.data);
        } catch (GLib.Error e) {
            warning (e.message);
        }
    }

    private void load () {
        try {
            uint8[] data;
            string etag;
            var file = File.new_for_path (file_path);
            file.load_contents (null, out data, out etag);
            var contents = (string) data;

            var parser = new Json.Parser ();
            parser.load_from_data (contents, -1);
            var array = parser.get_root ().get_array ();

            acc = new TelegramAccount ();
            array.foreach_element ((_arr, _i, node) => {
                var obj = node.get_object ();
                var account = TelegramAccount.parse (obj);

                if (account != null) {
                    acc = TelegramAccount.parse (obj);
                }
            });

            debug ("Telegram account loaded");
        } catch (GLib.Error e){ warning (e.message); }
    }


    public bool is_empty () {
        return this.acc == null;
    }

    public void init () {
        load ();

        if (this.acc != null) {
            this.tdclient = new Client (this.acc);
            tdclient.create_client ();
        }
    }

    public Client get_client () {
        return this.tdclient;
    }

    public TelegramAccount get_account () {
        return this.acc;
    }

    public void add (TelegramAccount tac) {
        debug ("Adding the user...");
        save ();
    }


}
