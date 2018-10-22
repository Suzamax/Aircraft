public class Aircraft.MainWindow : Gtk.Window {
    // Properties
    private Gtk.Overlay overlay;
    private Granite.Widgets.Toast toast;
    private Gtk.Grid grid;

    public Gtk.HeaderBar header;
    private Gtk.Spinner spinner;


    // Acciones de teclado
    public const string ACTION_PREFIX = "win.";
    public const string ACTION_QUIT = "action_quit";

    public static Gee.MultiMap<string, string> action_accelerators = new Gee.HashMultiMap<string, string> ();

    private const ActionEntry[] action_entries = {
         { ACTION_QUIT, action_quit }
    };


    // Constructor
    static construct {
         action_accelerators.set (ACTION_QUIT, "<Control>q");
    }

    construct {
         application.set_accels_for_action (ACTION_PREFIX + ACTION_QUIT, {"<Control>q", "<Control>w"});
    }

    public MainWindow (Gtk.Application app) {
        Object(application: app,
            icon_name: "com.github.suzamax.Aircraft",
            resizable: true
        );

    }

    public void build_ui () {
        var provider = new Gtk.CssProvider ();
        provider.load_from_resource("com/github/suzamax/Aircraft/app.css");

        spinner = new Gtk.Spinner();
        spinner.active = true;

        header = new Gtk.HeaderBar ();
        header.show_close_button = true;
        header.title = "Aircraft";
        header.show_all();

        grid = new Gtk.Grid();

        toast = new Granite.Widgets.Toast ("");
        overlay = new Gtk.Overlay();
        overlay.add_overlay(grid);
        overlay.add_overlay(toast);
        overlay.set_size_request (800, 600);
        add (overlay);

        window_position = Gtk.WindowPosition.CENTER;
        set_titlebar(header);

        show_all ();
        //app.toast.connect (on_toast);

    }

    /*private void on_toast (string msg){
        toast.title = msg;
        toast.send_notification();
    }*/

    private void action_quit () {
        debug("Quitting...");
        //client.destroy_client ();
        this.destroy();
    }

}
