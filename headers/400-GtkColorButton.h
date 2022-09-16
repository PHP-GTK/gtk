extern GtkWidget* gtk_color_button_new_with_rgba ( const GdkRGBA* rgba );
extern gboolean gtk_color_button_get_modal ( GtkColorButton* button );
extern GtkWidget* gtk_color_button_new ( void );
extern void gtk_color_button_set_title ( GtkColorButton* button, const char* title );
extern void gtk_color_button_set_modal ( GtkColorButton* button, gboolean modal );
extern const char* gtk_color_button_get_title ( GtkColorButton* button );
