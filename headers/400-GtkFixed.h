extern GskTransform* gtk_fixed_get_child_transform ( GtkFixed* fixed, GtkWidget* widget );
extern GtkWidget* gtk_fixed_new ( void );
extern void gtk_fixed_move ( GtkFixed* fixed, GtkWidget* widget, double x, double y );
extern void gtk_fixed_get_child_position ( GtkFixed* fixed, GtkWidget* widget, double* x, double* y );
extern void gtk_fixed_set_child_transform ( GtkFixed* fixed, GtkWidget* widget, GskTransform* transform );
extern void gtk_fixed_remove ( GtkFixed* fixed, GtkWidget* widget );
extern void gtk_fixed_put ( GtkFixed* fixed, GtkWidget* widget, double x, double y );
