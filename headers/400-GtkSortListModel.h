extern gboolean gtk_sort_list_model_get_incremental ( GtkSortListModel* self );
extern GListModel* gtk_sort_list_model_get_model ( GtkSortListModel* self );
extern guint gtk_sort_list_model_get_pending ( GtkSortListModel* self );
extern GtkSortListModel* gtk_sort_list_model_new ( GListModel* model, GtkSorter* sorter );
extern GtkSorter* gtk_sort_list_model_get_sorter ( GtkSortListModel* self );
extern void gtk_sort_list_model_set_sorter ( GtkSortListModel* self, GtkSorter* sorter );
extern void gtk_sort_list_model_set_incremental ( GtkSortListModel* self, gboolean incremental );
extern void gtk_sort_list_model_set_model ( GtkSortListModel* self, GListModel* model );
