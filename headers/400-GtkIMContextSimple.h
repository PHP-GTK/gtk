extern GtkIMContext* gtk_im_context_simple_new ( void );
extern void gtk_im_context_simple_add_compose_file ( GtkIMContextSimple* context_simple, const char* compose_file );
extern void gtk_im_context_simple_add_table ( GtkIMContextSimple* context_simple, guint16* data, int max_seq_len, int n_seqs );
