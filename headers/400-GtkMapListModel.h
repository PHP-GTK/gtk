extern gboolean gtk_map_list_model_has_map ( GtkMapListModel* self );
extern GListModel* gtk_map_list_model_get_model ( GtkMapListModel* self );
extern GtkMapListModel* gtk_map_list_model_new ( GListModel* model, GtkMapListModelMapFunc map_func, gpointer user_data, GDestroyNotify user_destroy );
extern void gtk_map_list_model_set_map_func ( GtkMapListModel* self, GtkMapListModelMapFunc map_func, gpointer user_data, GDestroyNotify user_destroy );
extern void gtk_map_list_model_set_model ( GtkMapListModel* self, GListModel* model );
