extern void gtk_string_list_remove ( GtkStringList* self, guint position );
extern const char* gtk_string_list_get_string ( GtkStringList* self, guint position );
extern void gtk_string_list_append ( GtkStringList* self, const char* string );
extern GtkStringList* gtk_string_list_new ( const char* const* strings );
extern void gtk_string_list_splice ( GtkStringList* self, guint position, guint n_removals, const char* const* additions );
extern void gtk_string_list_take ( GtkStringList* self, char* string );
