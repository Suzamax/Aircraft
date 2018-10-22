using Td_json;

public class Aircraft.Client {
    // Properties
    private string? api_id;
    private string? api_hash;
    private void * client;

    // Client constructor
    public Client (string api_id, string api_hash) {
        this.client = Td_json.client_create ();
        this.api_id = api_id;
        this.api_hash = api_hash;
    }

    public void destroy_client() {
        Td_json.client_destroy (this.client);
    }


}
