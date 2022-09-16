extern gboolean gtk_expression_is_static ( GtkExpression* self );
extern GType gtk_expression_get_value_type ( GtkExpression* self );
extern GtkExpressionWatch* gtk_expression_bind ( GtkExpression* self, GObject* target, const char* property, GObject* this_ );
extern gboolean gtk_expression_evaluate ( GtkExpression* self, GObject* this_, GValue* value );
extern GtkExpression* gtk_expression_ref ( GtkExpression* self );
extern GtkExpressionWatch* gtk_expression_watch ( GtkExpression* self, GObject* this_, GtkExpressionNotify notify, gpointer user_data, GDestroyNotify user_destroy );
extern void gtk_expression_unref ( GtkExpression* self );
