extern int gtk_shortcut_trigger_compare ( gconstpointer trigger1, gconstpointer trigger2 );
extern gboolean gtk_shortcut_trigger_equal ( gconstpointer trigger1, gconstpointer trigger2 );
extern guint gtk_shortcut_trigger_hash ( gconstpointer trigger );
extern GtkShortcutTrigger* gtk_shortcut_trigger_parse_string ( const char* string );
extern char* gtk_shortcut_trigger_to_label ( GtkShortcutTrigger* self, GdkDisplay* display );
extern void gtk_shortcut_trigger_print ( GtkShortcutTrigger* self, GString* string );
extern char* gtk_shortcut_trigger_to_string ( GtkShortcutTrigger* self );
extern gboolean gtk_shortcut_trigger_print_label ( GtkShortcutTrigger* self, GdkDisplay* display, GString* string );
extern GdkKeyMatch gtk_shortcut_trigger_trigger ( GtkShortcutTrigger* self, GdkEvent* event, gboolean enable_mnemonics );
