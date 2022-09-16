extern void gtk_app_chooser_button_append_separator ( GtkAppChooserButton* self );
extern gboolean gtk_app_chooser_button_get_modal ( GtkAppChooserButton* self );
extern GtkWidget* gtk_app_chooser_button_new ( const char* content_type );
extern const char* gtk_app_chooser_button_get_heading ( GtkAppChooserButton* self );
extern void gtk_app_chooser_button_append_custom_item ( GtkAppChooserButton* self, const char* name, const char* label, GIcon* icon );
extern gboolean gtk_app_chooser_button_get_show_default_item ( GtkAppChooserButton* self );
extern gboolean gtk_app_chooser_button_get_show_dialog_item ( GtkAppChooserButton* self );
extern void gtk_app_chooser_button_set_active_custom_item ( GtkAppChooserButton* self, const char* name );
extern void gtk_app_chooser_button_set_modal ( GtkAppChooserButton* self, gboolean modal );
extern void gtk_app_chooser_button_set_heading ( GtkAppChooserButton* self, const char* heading );
extern void gtk_app_chooser_button_set_show_dialog_item ( GtkAppChooserButton* self, gboolean setting );
extern void gtk_app_chooser_button_set_show_default_item ( GtkAppChooserButton* self, gboolean setting );