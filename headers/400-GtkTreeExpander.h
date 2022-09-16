extern GtkWidget* gtk_tree_expander_new ( void );
extern GObject* gtk_tree_expander_get_item ( GtkTreeExpander* self );
extern gboolean gtk_tree_expander_get_indent_for_icon ( GtkTreeExpander* self );
extern GtkWidget* gtk_tree_expander_get_child ( GtkTreeExpander* self );
extern void gtk_tree_expander_set_child ( GtkTreeExpander* self, GtkWidget* child );
extern void gtk_tree_expander_set_indent_for_icon ( GtkTreeExpander* self, gboolean indent_for_icon );
extern void gtk_tree_expander_set_list_row ( GtkTreeExpander* self, GtkTreeListRow* list_row );
extern GtkTreeListRow* gtk_tree_expander_get_list_row ( GtkTreeExpander* self );
