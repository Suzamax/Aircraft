namespace Aircraft.Utils {


    public SimpleAction action_from_group (string action_name, SimpleActionGroup action_group) {
        return ((SimpleAction) action_group.lookup_action (action_name));
    }
}
