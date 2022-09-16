extern GtkWidget** gtk_text_child_anchor_get_widgets ( GtkTextChildAnchor* anchor, guint* out_len );
extern GtkTextChildAnchor* gtk_text_child_anchor_new ( void );
extern gboolean gtk_text_child_anchor_get_deleted ( GtkTextChildAnchor* anchor );
extern GtkTextChildAnchor* gtk_text_child_anchor_new_with_replacement ( const char* character );
