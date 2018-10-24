public class Aircraft.CodeDialog : Gtk.Dialog {

    private static CodeDialog dialog;
    private MetadataComponent mc;

    private Gtk.Grid grid;
    private Gtk.Button button_done;
    private Gtk.Label label;
    private Gtk.Entry code;

    public CodeDialog (MetadataComponent mc) {
        Object (
            border_width: 6,
            deletable: false,
            resizable: false,
            title: "Add account",
            transient_for: window
        );

        this.mc = mc;

        // DIALOG

        this.code = new Gtk.Entry ();
        this.code.secondary_icon_tooltip_text = "Enter the code";
        this.code.width_chars = 6;

        this.label = new Gtk.Label ("Enter the code");

        this.button_done = new Gtk.Button.with_label ("OK");
        this.button_done.clicked.connect (() => this.mc.get_client ().code (this.code.get_text ()));

        grid = new Gtk.Grid ();
        grid.column_spacing = 12;
        grid.row_spacing = 6;
        grid.hexpand = true;
        grid.halign = Gtk.Align.CENTER;
        grid.attach (label, 1, 0);
        grid.attach (code, 0, 1);
        grid.attach (button_done, 1, 1);

        var content = get_content_area () as Gtk.Box;
        content.pack_start (grid, false, false, 0);

        show_all ();

    }





    public static void open (MetadataComponent mc) {
        if (dialog == null)
            dialog = new CodeDialog (mc);
    }
}
