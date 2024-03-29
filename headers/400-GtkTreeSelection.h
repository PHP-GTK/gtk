extern GtkSelectionMode gtk_tree_selection_get_mode ( GtkTreeSelection* selection );
extern GtkTreeSelectionFunc gtk_tree_selection_get_select_function ( GtkTreeSelection* selection );
extern gboolean gtk_tree_selection_get_selected ( GtkTreeSelection* selection, GtkTreeModel** model, GtkTreeIter* iter );
extern gpointer gtk_tree_selection_get_user_data ( GtkTreeSelection* selection );
extern int gtk_tree_selection_count_selected_rows ( GtkTreeSelection* selection );
extern GList* gtk_tree_selection_get_selected_rows ( GtkTreeSelection* selection, GtkTreeModel** model );
extern GtkTreeView* gtk_tree_selection_get_tree_view ( GtkTreeSelection* selection );
extern gboolean gtk_tree_selection_iter_is_selected ( GtkTreeSelection* selection, GtkTreeIter* iter );
extern gboolean gtk_tree_selection_path_is_selected ( GtkTreeSelection* selection, GtkTreePath* path );
extern void gtk_tree_selection_select_all ( GtkTreeSelection* selection );
extern void gtk_tree_selection_select_path ( GtkTreeSelection* selection, GtkTreePath* path );
extern void gtk_tree_selection_select_range ( GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path );
extern void gtk_tree_selection_select_iter ( GtkTreeSelection* selection, GtkTreeIter* iter );
extern void gtk_tree_selection_selected_foreach ( GtkTreeSelection* selection, GtkTreeSelectionForeachFunc func, gpointer data );
extern void gtk_tree_selection_set_select_function ( GtkTreeSelection* selection, GtkTreeSelectionFunc func, gpointer data, GDestroyNotify destroy );
extern void gtk_tree_selection_unselect_iter ( GtkTreeSelection* selection, GtkTreeIter* iter );
extern void gtk_tree_selection_unselect_all ( GtkTreeSelection* selection );
extern void gtk_tree_selection_unselect_path ( GtkTreeSelection* selection, GtkTreePath* path );
extern void gtk_tree_selection_unselect_range ( GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path );
extern void gtk_tree_selection_set_mode ( GtkTreeSelection* selection, GtkSelectionMode type );
