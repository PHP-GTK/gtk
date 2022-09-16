extern gboolean gtk_link_button_get_visited ( GtkLinkButton* link_button );
extern GtkWidget* gtk_link_button_new_with_label ( const char* uri, const char* label );
extern GtkWidget* gtk_link_button_new ( const char* uri );
extern const char* gtk_link_button_get_uri ( GtkLinkButton* link_button );
extern void gtk_link_button_set_visited ( GtkLinkButton* link_button, gboolean visited );
extern void gtk_link_button_set_uri ( GtkLinkButton* link_button, const char* uri );
