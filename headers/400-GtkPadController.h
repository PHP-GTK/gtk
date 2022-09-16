extern GtkPadController* gtk_pad_controller_new ( GActionGroup* group, GdkDevice* pad );
extern void gtk_pad_controller_set_action ( GtkPadController* controller, GtkPadActionType type, int index, int mode, const char* label, const char* action_name );
extern void gtk_pad_controller_set_action_entries ( GtkPadController* controller, const GtkPadActionEntry* entries, int n_entries );
