extern GtkWidget* gtk_page_setup_unix_dialog_new ( const char* title, GtkWindow* parent );
extern void gtk_page_setup_unix_dialog_set_page_setup ( GtkPageSetupUnixDialog* dialog, GtkPageSetup* page_setup );
extern GtkPageSetup* gtk_page_setup_unix_dialog_get_page_setup ( GtkPageSetupUnixDialog* dialog );
extern GtkPrintSettings* gtk_page_setup_unix_dialog_get_print_settings ( GtkPageSetupUnixDialog* dialog );
extern void gtk_page_setup_unix_dialog_set_print_settings ( GtkPageSetupUnixDialog* dialog, GtkPrintSettings* print_settings );
