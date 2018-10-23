using Gtk;
using Aircraft;

public class Aircraft.NewAccountDialog : Gtk.Dialog {
    private static NewAccountDialog dialog;

    private Gtk.Grid grid;
    private Gtk.Button button_done;
    private Gtk.Entry api_id;
    private Gtk.Entry api_hash;
    private Gtk.Label enter_api_id;
    private Gtk.Label enter_api_hash;

    public NewAccountDialog () {
        Object (
            border_width: 6,
            deletable: true,
            resizable: false,
            title: "Add account"
        );

        api_id = new Gtk.Entry ();
        api_id.width_chars = 10;

        enter_api_id = new Gtk.Label ("<a href=\"https://my.telegram.org/\">How to get Telegram API codes</a>");
        enter_api_id.halign = Gtk.Align.END;
        enter_api_id.set_use_markup (true);

        enter_api_hash = new Label ("Introduce el hash de la API:");


        show_all ();
    }


    public static void open () {
        if (dialog == null)
            dialog = new NewAccountDialog ();
    }



}
