extern gboolean gtk_string_filter_get_ignore_case ( GtkStringFilter* self );
extern GtkExpression* gtk_string_filter_get_expression ( GtkStringFilter* self );
extern GtkStringFilterMatchMode gtk_string_filter_get_match_mode ( GtkStringFilter* self );
extern void gtk_string_filter_set_ignore_case ( GtkStringFilter* self, gboolean ignore_case );
extern void gtk_string_filter_set_expression ( GtkStringFilter* self, GtkExpression* expression );
extern GtkStringFilter* gtk_string_filter_new ( GtkExpression* expression );
extern void gtk_string_filter_set_match_mode ( GtkStringFilter* self, GtkStringFilterMatchMode mode );
extern const char* gtk_string_filter_get_search ( GtkStringFilter* self );
extern void gtk_string_filter_set_search ( GtkStringFilter* self, const char* search );
