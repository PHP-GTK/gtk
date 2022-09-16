extern void gtk_info_bar_add_action_widget ( GtkInfoBar* info_bar, GtkWidget* child, int response_id );
extern GtkWidget* gtk_info_bar_new_with_buttons ( const char* first_button_text, ... );
extern void gtk_info_bar_add_child ( GtkInfoBar* info_bar, GtkWidget* widget );
extern GtkWidget* gtk_info_bar_new ( void );
extern GtkWidget* gtk_info_bar_add_button ( GtkInfoBar* info_bar, const char* button_text, int response_id );
extern void gtk_info_bar_add_buttons ( GtkInfoBar* info_bar, const char* first_button_text, ... );
extern GtkMessageType gtk_info_bar_get_message_type ( GtkInfoBar* info_bar );
extern gboolean gtk_info_bar_get_show_close_button ( GtkInfoBar* info_bar );
extern gboolean gtk_info_bar_get_revealed ( GtkInfoBar* info_bar );
extern void gtk_info_bar_remove_action_widget ( GtkInfoBar* info_bar, GtkWidget* widget );
extern void gtk_info_bar_response ( GtkInfoBar* info_bar, int response_id );
extern void gtk_info_bar_set_message_type ( GtkInfoBar* info_bar, GtkMessageType message_type );
extern void gtk_info_bar_set_default_response ( GtkInfoBar* info_bar, int response_id );
extern void gtk_info_bar_remove_child ( GtkInfoBar* info_bar, GtkWidget* widget );
extern void gtk_info_bar_set_response_sensitive ( GtkInfoBar* info_bar, int response_id, gboolean setting );
extern void gtk_info_bar_set_revealed ( GtkInfoBar* info_bar, gboolean revealed );
extern void gtk_info_bar_set_show_close_button ( GtkInfoBar* info_bar, gboolean setting );