namespace Aircraft {

    public class MessageUtils {


        public static AircraftDBus.Message handle_last_message (MetadataComponent mc) { //string e) {
            /*Json.Node eventNode = Json.from_string*/
            string e = mc.get_client ().receive ();
            print(e);
            // Se debe quitar
            AircraftDBus.Message msg = {SHORT_MESSAGE, e};
            return msg;
            /*
            var event = eventNode.get_object ().get_string_member ("@type");
            AircraftDBus.Message msg = AircraftDBus.Message ();
            // Switch, analyzing Type:
            switch (event) {

                case "updateNewMessage":
                    msg = {NEW_MESSAGE, e};
                    return msg;
                    break;
                case "updateShortMessage":
                    msg = {SHORT_MESSAGE, e};
                    return msg;
                    break;
                default:
                    msg = {ERR, e};
                    return msg;
                    break;
            } */

        }


    }
}
