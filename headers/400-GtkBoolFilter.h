extern void gtk_bool_filter_set_expression ( GtkBoolFilter* self, GtkExpression* expression );
extern GtkExpression* gtk_bool_filter_get_expression ( GtkBoolFilter* self );
extern GtkBoolFilter* gtk_bool_filter_new ( GtkExpression* expression );
extern gboolean gtk_bool_filter_get_invert ( GtkBoolFilter* self );
extern void gtk_bool_filter_set_invert ( GtkBoolFilter* self, gboolean invert );
