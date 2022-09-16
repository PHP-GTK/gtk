extern GtkTreeListRow* gtk_tree_list_model_get_child_row ( GtkTreeListModel* self, guint position );
extern gboolean gtk_tree_list_model_get_autoexpand ( GtkTreeListModel* self );
extern GtkTreeListModel* gtk_tree_list_model_new ( GListModel* root, gboolean passthrough, gboolean autoexpand, GtkTreeListModelCreateModelFunc create_func, gpointer user_data, GDestroyNotify user_destroy );
extern void gtk_tree_list_model_set_autoexpand ( GtkTreeListModel* self, gboolean autoexpand );
extern GListModel* gtk_tree_list_model_get_model ( GtkTreeListModel* self );
extern GtkTreeListRow* gtk_tree_list_model_get_row ( GtkTreeListModel* self, guint position );
extern gboolean gtk_tree_list_model_get_passthrough ( GtkTreeListModel* self );
