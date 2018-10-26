using GLib;

public class Aircraft.Account : Object {
    private string dir_path;
    private string file_path;

    private Client tdclient;
    private TelegramID? id;

    public Account (Gtk.Application app) {
        Object();
        this.dir_path = "%s/%s".printf (GLib.Environment.get_user_config_dir (), app.application_id);
        this.file_path = "%s/%s".printf (dir_path, "account.json");
    }

    private void save (TelegramID id, bool overwrite = true) {
        try {
            var dir = File.new_for_path (this.dir_path);
            if (!dir.query_exists ())
                dir.make_directory ();

            var file = File.new_for_path (this.file_path);
            if (file.query_exists () && !overwrite)
                return;

            var builder = new Json.Builder ();
            builder.begin_array ();
            var node = id.serialize ();
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

            id = new TelegramID ();
            array.foreach_element ((_arr, _i, node) => {
                var obj = node.get_object ();
                var account = TelegramID.parse (obj);

                if (account != null) {
                    id = TelegramID.parse (obj);
                }
            });

            debug ("Telegram Database API and number loaded!");
        } catch (GLib.Error e){ warning (e.message); }
    }


    public bool is_empty () {
        return this.id == null;
    }

    public void init () {
        load ();

        if (this.id != null) {
            this.tdclient = new Client (this.id);
            tdclient.create_client ();
        }
    }

    public Client get_client () {
        return this.tdclient;
    }

    public TelegramID get_id () {
        return this.id;
    }

    public void add (TelegramID id) {

        debug ("Adding the ID...");
        save (id);
    }


}
