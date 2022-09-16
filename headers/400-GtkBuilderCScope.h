extern void gtk_builder_cscope_add_callback_symbol ( GtkBuilderCScope* self, const char* callback_name, GCallback callback_symbol );
extern GCallback gtk_builder_cscope_lookup_callback_symbol ( GtkBuilderCScope* self, const char* callback_name );
extern void gtk_builder_cscope_add_callback_symbols ( GtkBuilderCScope* self, const char* first_callback_name, GCallback first_callback_symbol, ... );
extern GtkBuilderScope* gtk_builder_cscope_new ( void );
