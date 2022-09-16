extern GtkShortcutsWindow* gtk_application_window_get_help_overlay ( GtkApplicationWindow* window );
extern gboolean gtk_application_window_get_show_menubar ( GtkApplicationWindow* window );
extern GtkWidget* gtk_application_window_new ( GtkApplication* application );
extern guint gtk_application_window_get_id ( GtkApplicationWindow* window );
extern void gtk_application_window_set_show_menubar ( GtkApplicationWindow* window, gboolean show_menubar );
extern void gtk_application_window_set_help_overlay ( GtkApplicationWindow* window, GtkShortcutsWindow* help_overlay );
