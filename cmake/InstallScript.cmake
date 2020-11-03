execute_process(
        COMMAND glib-compile-schemas .
        WORKING_DIRECTORY /usr/share/glib-2.0/schemas
        OUTPUT_QUIET
        ERROR_QUIET
)