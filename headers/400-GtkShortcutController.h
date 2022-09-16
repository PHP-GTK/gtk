extern void gtk_shortcut_controller_add_shortcut ( GtkShortcutController* self, GtkShortcut* shortcut );
extern GtkEventController* gtk_shortcut_controller_new ( void );
extern GtkEventController* gtk_shortcut_controller_new_for_model ( GListModel* model );
extern GdkModifierType gtk_shortcut_controller_get_mnemonics_modifiers ( GtkShortcutController* self );
extern void gtk_shortcut_controller_set_mnemonics_modifiers ( GtkShortcutController* self, GdkModifierType modifiers );
extern void gtk_shortcut_controller_remove_shortcut ( GtkShortcutController* self, GtkShortcut* shortcut );
extern GtkShortcutScope gtk_shortcut_controller_get_scope ( GtkShortcutController* self );
extern void gtk_shortcut_controller_set_scope ( GtkShortcutController* self, GtkShortcutScope scope );
