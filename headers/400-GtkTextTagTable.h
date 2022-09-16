extern gboolean gtk_text_tag_table_add ( GtkTextTagTable* table, GtkTextTag* tag );
extern int gtk_text_tag_table_get_size ( GtkTextTagTable* table );
extern void gtk_text_tag_table_foreach ( GtkTextTagTable* table, GtkTextTagTableForeach func, gpointer data );
extern GtkTextTagTable* gtk_text_tag_table_new ( void );
extern void gtk_text_tag_table_remove ( GtkTextTagTable* table, GtkTextTag* tag );
extern GtkTextTag* gtk_text_tag_table_lookup ( GtkTextTagTable* table, const char* name );
