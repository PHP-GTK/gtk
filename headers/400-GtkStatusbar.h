extern guint gtk_statusbar_push ( GtkStatusbar* statusbar, guint context_id, const char* text );
extern GtkWidget* gtk_statusbar_new ( void );
extern guint gtk_statusbar_get_context_id ( GtkStatusbar* statusbar, const char* context_description );
extern void gtk_statusbar_pop ( GtkStatusbar* statusbar, guint context_id );
extern void gtk_statusbar_remove ( GtkStatusbar* statusbar, guint context_id, guint message_id );
extern void gtk_statusbar_remove_all ( GtkStatusbar* statusbar, guint context_id );
