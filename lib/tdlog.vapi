[CCode (cprefix = "Td_log", gir_namespace = "Td_log", lower_case_cprefix = "td_set_log_")]
namespace Td_log {
    [CCode (cheader_filename = "td/telegram/td_log.h", cname = "td_log_fatal_error_callback_ptr", has_target = false)]
	public delegate void fatal_error_callback_ptr (string error_message);
	[CCode (cheader_filename = "td/telegram/td_log.h")]
	public static unowned int file_path (string? file_path);
	[CCode (cheader_filename = "td/telegram/td_log.h")]
	public static void max_file_size (int max_file_size);
	[CCode (cheader_filename = "td/telegram/td_log.h")]
	public static void verbosity_level (int new_verbosity_level);
	[CCode (cheader_filename = "td/telegram/td_log.h")]
	public static void fatal_error_callback (fatal_error_callback_ptr callback);
}
