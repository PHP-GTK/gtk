extern GtkWidget* gtk_toggle_button_new ( void );
extern GtkWidget* gtk_toggle_button_new_with_label ( const char* label );
extern GtkWidget* gtk_toggle_button_new_with_mnemonic ( const char* label );
extern gboolean gtk_toggle_button_get_active ( GtkToggleButton* toggle_button );
extern void gtk_toggle_button_set_active ( GtkToggleButton* toggle_button, gboolean is_active );
extern void gtk_toggle_button_set_group ( GtkToggleButton* toggle_button, GtkToggleButton* group );
extern void gtk_toggle_button_toggled ( GtkToggleButton* toggle_button );
