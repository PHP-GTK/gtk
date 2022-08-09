extern GtkTextTagTable* gtk_text_tag_table_new ( void );
extern gboolean gtk_text_tag_table_add ( GtkTextTagTable* table, GtkTextTag* tag );
extern void gtk_text_tag_table_foreach ( GtkTextTagTable* table, GtkTextTagTableForeach func, gpointer data );
extern int gtk_text_tag_table_get_size ( GtkTextTagTable* table );
extern GtkTextTag* gtk_text_tag_table_lookup ( GtkTextTagTable* table, const char* name );
extern void gtk_text_tag_table_remove ( GtkTextTagTable* table, GtkTextTag* tag );
