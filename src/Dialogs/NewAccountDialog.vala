using Gtk;
using Aircraft;

public class Aircraft.NewAccountDialog : Gtk.Dialog {
    private static NewAccountDialog dialog;

    private Gtk.Grid grid;
    private Gtk.Button button_done;
    private Gtk.Button nothanks;
    private Gtk.Entry api_id_field;
    private Gtk.Entry api_hash_field;
    private Gtk.Label api_id_label;
    private Gtk.Label api_hash_label;
    private Gtk.Label get_telegram_api;

    private string? username;
    private string? api_id;
    private string? api_hash;


    public NewAccountDialog () {
        Object (
            border_width: 6,
            deletable: false,
            resizable: false,
            title: "Add account",
            transient_for: window
        );

        api_id_field = new Gtk.Entry ();
        api_id_field.secondary_icon_tooltip_text = "API ID";
        api_id_field.width_chars = 10;

        api_id_label = new Gtk.Label ("Append API ID");
        get_telegram_api = new Gtk.Label ("<a href=\"https://my.telegram.org/\">How to get Telegram API codes</a>");
        get_telegram_api.halign = Gtk.Align.END;
        get_telegram_api.set_use_markup (true);

        api_hash_label = new Label ("Append API Hash");
        api_hash_field = new Gtk.Entry ();

        button_done = new Gtk.Button.with_label ("Use account");
        button_done.clicked.connect (add_account);
        nothanks = new Gtk.Button.with_label ("No, thanks");
        nothanks.clicked.connect (no);

        grid = new Gtk.Grid ();
        grid.column_spacing = 12;
        grid.row_spacing = 6;
        grid.hexpand = true;
        grid.halign = Gtk.Align.CENTER;
        grid.attach (get_telegram_api, 1, 0);
        grid.attach (api_id_label, 0, 1);
        grid.attach (api_id_field, 1, 1);
        grid.attach (api_hash_label, 0, 2);
        grid.attach (api_hash_field, 1, 2);
        grid.attach (button_done, 1, 10);
        grid.attach (nothanks, 0, 10);

        var content = get_content_area () as Gtk.Box;
        content.pack_start (grid, false, false, 0);

        destroy.connect ( () => {
            dialog = null;
            if (account.is_empty ())
                app.remove_window (window_dummy);
        });


        show_all ();

    }


    public static void open () {
        if (dialog == null)
            dialog = new NewAccountDialog ();
    }


    private void no () {
        destroy ();
        Process.exit (0);
    }

    private void add_account () {
        this.api_id = api_id_field.text;
        this.api_hash = api_hash_field.text;

        var account = new TelegramAccount ();
        var account_handler = new Account (app);
        account.api_id = this.api_id;
        account.api_hash = this.api_hash;
        account_handler.add (account);

    }

}
