extern GtkTreeListRow* gtk_tree_list_row_get_child_row ( GtkTreeListRow* self, guint position );
extern guint gtk_tree_list_row_get_depth ( GtkTreeListRow* self );
extern GListModel* gtk_tree_list_row_get_children ( GtkTreeListRow* self );
extern gboolean gtk_tree_list_row_get_expanded ( GtkTreeListRow* self );
extern guint gtk_tree_list_row_get_position ( GtkTreeListRow* self );
extern GtkTreeListRow* gtk_tree_list_row_get_parent ( GtkTreeListRow* self );
extern GObject* gtk_tree_list_row_get_item ( GtkTreeListRow* self );
extern void gtk_tree_list_row_set_expanded ( GtkTreeListRow* self, gboolean expanded );
extern gboolean gtk_tree_list_row_is_expandable ( GtkTreeListRow* self );
