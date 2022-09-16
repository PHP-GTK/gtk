extern GtkTextBuffer* gtk_text_mark_get_buffer ( GtkTextMark* mark );
extern GtkTextMark* gtk_text_mark_new ( const char* name, gboolean left_gravity );
extern gboolean gtk_text_mark_get_deleted ( GtkTextMark* mark );
extern gboolean gtk_text_mark_get_left_gravity ( GtkTextMark* mark );
extern gboolean gtk_text_mark_get_visible ( GtkTextMark* mark );
extern const char* gtk_text_mark_get_name ( GtkTextMark* mark );
extern void gtk_text_mark_set_visible ( GtkTextMark* mark, gboolean setting );
