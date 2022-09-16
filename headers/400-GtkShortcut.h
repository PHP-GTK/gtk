extern GtkShortcutAction* gtk_shortcut_get_action ( GtkShortcut* self );
extern GtkShortcut* gtk_shortcut_new_with_arguments ( GtkShortcutTrigger* trigger, GtkShortcutAction* action, const char* format_string, ... );
extern GtkShortcut* gtk_shortcut_new ( GtkShortcutTrigger* trigger, GtkShortcutAction* action );
extern GVariant* gtk_shortcut_get_arguments ( GtkShortcut* self );
extern void gtk_shortcut_set_action ( GtkShortcut* self, GtkShortcutAction* action );
extern void gtk_shortcut_set_trigger ( GtkShortcut* self, GtkShortcutTrigger* trigger );
extern void gtk_shortcut_set_arguments ( GtkShortcut* self, GVariant* args );
extern GtkShortcutTrigger* gtk_shortcut_get_trigger ( GtkShortcut* self );
