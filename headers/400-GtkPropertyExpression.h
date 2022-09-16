extern GParamSpec* gtk_property_expression_get_pspec ( GtkExpression* expression );
extern GtkExpression* gtk_property_expression_new ( GType this_type, GtkExpression* expression, const char* property_name );
extern GtkExpression* gtk_property_expression_new_for_pspec ( GtkExpression* expression, GParamSpec* pspec );
extern GtkExpression* gtk_property_expression_get_expression ( GtkExpression* expression );
