namespace Aircraft {
    /**
     * This Vala class helps the management of accounts and clients
     * It's used in Application.vala
     */


     public class Handler {

        private Application app; // The main app
        private Client? client; // The TDLib JSON Client
        private Account? account; // The accounts handler
        private MainWindow window; // Main Window is handled here


        // kbd and other actions
        public SimpleActionGroup actions { get; construct; }

        public const string ACTION_PREFIX = "win.";
        public const string ACTION_SHOW_FIND = "action_show_find";
        public const string ACTION_QUIT = "action_quit";

        public static Gee.MultiMap<string, string> action_accelerators = new Gee.HashMultiMap<string, string> ();

        private const ActionEntry[] action_entries = {
             { ACTION_QUIT, action_quit }
        };

        static construct {
            action_accelerators.set (ACTION_QUIT, "<Control>q");
        }
        construct {
            actions = new SimpleActionGroup ();
            actions.add_action_entries (action_entries, this);
            insert_action_group ("win", actions);

            app.set_accels_for_action (ACTION_PREFIX + ACTION_QUIT, {"<Control>q", "<Control>w"});
            key_press_event.connect (on_key_pressed);

            Unix.signal_add (Posix.Signal.INT, quit_source_func, Priority.HIGH);
            Unix.signal_add (Posix.Signal.TERM, quit_source_func, Priority.HIGH);

        }
        // Constructor
        public Handler (Aircraft.Application app) {
            this.app = app;
            this.account = new Account (app);
            this.client = new Client (this.account.get_account ());

        }
        
        
        
        public void new_window (Aircraft.Application app) {
            this.window = new MainWindow (app);
            this.window.build_ui ();
        }

        public Account get_account () {
            return this.account;
        }

        public MainWindow get_window () {
            return this.window;
        }

        

        private bool on_key_pressed (Gdk.EventKey event) {

            // propagate this event to child widgets
            return false;
        }

        public bool quit_source_func () {
            action_quit ();
            return false;
        }

        private void action_quit () {
            debug ("Quitting...");
            this.client.destroy_client ();
            window.destroy ();
            Process.exit (0);
        }


    }

}
