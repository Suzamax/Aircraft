using Gtk;
using Aircraft;

public class Aircraft.NewAccountDialog : Gtk.Dialog {
    private static NewAccountDialog dialog;

    private Gtk.Application app;


    private Gtk.Grid grid;
    private Gtk.Button button_done;
    private Gtk.Button nothanks;
    private Gtk.Entry number_field;
    private Gtk.Entry api_id_field;
    private Gtk.Entry api_hash_field;
    private Gtk.Label number_label;
    private Gtk.Label api_id_label;
    private Gtk.Label api_hash_label;
    private Gtk.Label get_telegram_api;

    private string? number;
    private string? api_id;
    private string? api_hash;

    public NewAccountDialog (Gtk.Application app) {
        Object (
            border_width: 6,
            deletable: false,
            resizable: false,
            title: "Add account",
            transient_for: window
        );

        this.app = app;

        number_label = new Gtk.Label ("Phone number; i.e. +34(number)");
        number_field = new Gtk.Entry ();
        number_field.width_chars = 20;
        number_field.secondary_icon_tooltip_text = "Phone number";


        api_id_field = new Gtk.Entry ();
        api_id_field.secondary_icon_tooltip_text = "API ID";
        api_id_field.width_chars = 10;

        api_id_label = new Gtk.Label ("API ID");
        get_telegram_api = new Gtk.Label ("<a href=\"https://my.telegram.org/\">How to get Telegram API codes</a>");
        get_telegram_api.halign = Gtk.Align.END;
        get_telegram_api.set_use_markup (true);

        api_hash_label = new Label ("API Hash");
        api_hash_field = new Gtk.Entry ();

        button_done = new Gtk.Button.with_label ("Use account. Restart the application.");
        button_done.clicked.connect (() => {
            if (number_field.text == "")
                this.number_label.label = "This field cannot be blank!";
            else if (api_id_field.text == "")
                this.api_id_label.label = "This field cannot be blank!";
            else if (api_hash_field.text == "")
                this.api_hash_label.label = "This field cannot be blank!";
            else {
                add_account ();
                this.dialog = null;
                destroy ();
            }
        });
        nothanks = new Gtk.Button.with_label ("No, thanks");
        nothanks.clicked.connect (no);

        grid = new Gtk.Grid ();
        grid.column_spacing = 12;
        grid.row_spacing = 6;
        grid.hexpand = true;
        grid.halign = Gtk.Align.CENTER;
                        // LEFT TOP
        grid.attach (number_label, 0, 0);
        grid.attach (number_field, 1, 0);
        grid.attach (get_telegram_api, 1, 1);
        grid.attach (api_id_label, 0, 2);
        grid.attach (api_id_field, 1, 2);
        grid.attach (api_hash_label, 0, 3);
        grid.attach (api_hash_field, 1, 3);
        grid.attach (button_done, 1, 4);
        grid.attach (nothanks, 0, 4);

        var content = get_content_area () as Gtk.Box;
        content.pack_start (grid, false, false, 0);

        destroy.connect ( () => {
            dialog = null;
            if (account.is_empty ())
                app.remove_window (window_dummy);
        });


        show_all ();

    }


    public static void open (Gtk.Application app) {
        if (dialog == null)
            dialog = new NewAccountDialog (app);
    }


    private void no () {
        close ();
        Process.exit (0);
    }

    private void add_account () {
        this.number = number_field.text;
        this.api_id = api_id_field.text;
        this.api_hash = api_hash_field.text;

        var account = new TelegramID ();
        account.set_number (this.number);
        account.set_api_id (this.api_id);
        account.set_api_hash (this.api_hash);

        var account_handler = new Account (this.app);
        if (! (this.number == null || this.api_id == null || this.api_hash == null)) {
            account_handler.add (account);
            return;
        }
    }

}
