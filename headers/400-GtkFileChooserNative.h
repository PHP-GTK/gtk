extern void gtk_file_chooser_native_set_accept_label ( GtkFileChooserNative* self, const char* accept_label );
extern const char* gtk_file_chooser_native_get_accept_label ( GtkFileChooserNative* self );
extern GtkFileChooserNative* gtk_file_chooser_native_new ( const char* title, GtkWindow* parent, GtkFileChooserAction action, const char* accept_label, const char* cancel_label );
extern const char* gtk_file_chooser_native_get_cancel_label ( GtkFileChooserNative* self );
extern void gtk_file_chooser_native_set_cancel_label ( GtkFileChooserNative* self, const char* cancel_label );
