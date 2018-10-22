using Granite;
using Gtk;
using GLib;

public class Aircraft.MainWindow : Gtk.Window {
    // Properties
    private Overlay overlay;
    private Granite.Widgets.Toast toast;
    private Grid grid;

    public HeaderBar header;
    private Spinner spinner;


    // Acciones de teclado
    public const string ACTION_PREFIX = "win.";
    public const string ACTION_QUIT = "action_quit";

    private const GLib.ActionEntry[] action_entries = {
         { ACTION_QUIT, action_quit }
    };


    // Constructor
    construct {

    }

    public MainWindow (Gtk.Application application) {
        Object(application: application,
            icon_name: "com.github.suzamax.Aircraft",
            resizable: true
        );
        application.set_accels_for_action (ACTION_PREFIX + ACTION_QUIT, {"<Control>q", "<Control>w"});
    }

    public void build_ui () {
        var provider = new Gtk.CssProvider();
        provider.load_from_resource("com/github/suzamax/Aircraft/app.css");

        spinner = new Spinner();
        spinner.active = true;

        header = new Gtk.HeaderBar();
        header.show_close_button = true;
        header.title = "Aircraft";
        header.show_all();

        grid = new Gtk.Grid();

        toast = new Granite.Widgets.Toast("");
        overlay = new Gtk.Overlay();
        overlay.add_overlay(grid);
        overlay.add_overlay(toast);
        overlay.set_size_request(800, 600);
        add(overlay);

        window_position = WindowPosition.CENTER;
        set_titlebar(header);

        destroy.connect (on_quit);
        show_all ();
        app.toast.connect (on_toast);

    }

    private void on_toast(string msg){
        toast.title = msg;
        toast.send_notification();
    }

    private void action_quit () {
        destroy();
    }

    private void on_quit () {
        //client.destroy_client ();
    }
}
