extern GtkWidget* gtk_message_dialog_new ( GtkWindow* parent, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const char* message_format, ... );
extern void gtk_message_dialog_format_secondary_markup ( GtkMessageDialog* message_dialog, const char* message_format, ... );
extern void gtk_message_dialog_format_secondary_text ( GtkMessageDialog* message_dialog, const char* message_format, ... );
extern GtkWidget* gtk_message_dialog_get_message_area ( GtkMessageDialog* message_dialog );
extern void gtk_message_dialog_set_markup ( GtkMessageDialog* message_dialog, const char* str );
extern GtkWidget* gtk_message_dialog_new_with_markup ( GtkWindow* parent, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const char* message_format, ... );
