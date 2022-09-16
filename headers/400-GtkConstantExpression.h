extern GtkExpression* gtk_constant_expression_new_for_value ( const GValue* value );
extern GtkExpression* gtk_constant_expression_new ( GType value_type, ... );
extern const GValue* gtk_constant_expression_get_value ( GtkExpression* expression );
