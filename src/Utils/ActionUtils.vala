namespace Aircraft.Utils {


    public SimpleAction action_from_group (string action_name, SimpleActionGroup action_group) {
        return ((SimpleAction) action_group.lookup_action (action_name));
    }

    public static void handle_event (UpdateStates state, string event) {
        /**
         * Make a switch for every update case:
         *
        switch (state) {
            case USER:

                break;
            case USER_STATUS:

                break;
            case CHAT_LAST_MESSAGE:
                MessageUtils.handle_last_message ();
                break;
        }*/
    }

}
