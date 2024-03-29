extern gboolean gtk_print_unix_dialog_get_embed_page_setup ( GtkPrintUnixDialog* dialog );
extern void gtk_print_unix_dialog_add_custom_tab ( GtkPrintUnixDialog* dialog, GtkWidget* child, GtkWidget* tab_label );
extern GtkWidget* gtk_print_unix_dialog_new ( const char* title, GtkWindow* parent );
extern int gtk_print_unix_dialog_get_current_page ( GtkPrintUnixDialog* dialog );
extern GtkPrintCapabilities gtk_print_unix_dialog_get_manual_capabilities ( GtkPrintUnixDialog* dialog );
extern GtkPageSetup* gtk_print_unix_dialog_get_page_setup ( GtkPrintUnixDialog* dialog );
extern gboolean gtk_print_unix_dialog_get_has_selection ( GtkPrintUnixDialog* dialog );
extern gboolean gtk_print_unix_dialog_get_page_setup_set ( GtkPrintUnixDialog* dialog );
extern GtkPrintSettings* gtk_print_unix_dialog_get_settings ( GtkPrintUnixDialog* dialog );
extern gboolean gtk_print_unix_dialog_get_support_selection ( GtkPrintUnixDialog* dialog );
extern GtkPrinter* gtk_print_unix_dialog_get_selected_printer ( GtkPrintUnixDialog* dialog );
extern void gtk_print_unix_dialog_set_current_page ( GtkPrintUnixDialog* dialog, int current_page );
extern void gtk_print_unix_dialog_set_has_selection ( GtkPrintUnixDialog* dialog, gboolean has_selection );
extern void gtk_print_unix_dialog_set_page_setup ( GtkPrintUnixDialog* dialog, GtkPageSetup* page_setup );
extern void gtk_print_unix_dialog_set_manual_capabilities ( GtkPrintUnixDialog* dialog, GtkPrintCapabilities capabilities );
extern void gtk_print_unix_dialog_set_embed_page_setup ( GtkPrintUnixDialog* dialog, gboolean embed );
extern void gtk_print_unix_dialog_set_support_selection ( GtkPrintUnixDialog* dialog, gboolean support_selection );
extern void gtk_print_unix_dialog_set_settings ( GtkPrintUnixDialog* dialog, GtkPrintSettings* settings );
