extern GtkWidget* gtk_app_chooser_dialog_new_for_content_type ( GtkWindow* parent, GtkDialogFlags flags, const char* content_type );
extern void gtk_app_chooser_dialog_set_heading ( GtkAppChooserDialog* self, const char* heading );
extern const char* gtk_app_chooser_dialog_get_heading ( GtkAppChooserDialog* self );
extern GtkWidget* gtk_app_chooser_dialog_get_widget ( GtkAppChooserDialog* self );
extern GtkWidget* gtk_app_chooser_dialog_new ( GtkWindow* parent, GtkDialogFlags flags, GFile* file );
