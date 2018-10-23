using Td_json;

public class Aircraft.Client {
    // Properties
    private string? api_id;
    private string? api_hash;
    private void * client;

    //public TelegramAccount acc;

    // Client constructor
    public Client (TelegramAccount acc) {
        this.api_id = acc.api_id;
        this.api_hash = acc.api_hash;
    }

    public void create_client () {
        this.client = Td_json.client_create ();
    }

    public void destroy_client () {
        Td_json.client_destroy (this.client);
    }


}
