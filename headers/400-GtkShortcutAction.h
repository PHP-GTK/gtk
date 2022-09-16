extern char* gtk_shortcut_action_to_string ( GtkShortcutAction* self );
extern GtkShortcutAction* gtk_shortcut_action_parse_string ( const char* string );
extern gboolean gtk_shortcut_action_activate ( GtkShortcutAction* self, GtkShortcutActionFlags flags, GtkWidget* widget, GVariant* args );
extern void gtk_shortcut_action_print ( GtkShortcutAction* self, GString* string );
