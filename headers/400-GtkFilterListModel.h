extern gboolean gtk_filter_list_model_get_incremental ( GtkFilterListModel* self );
extern GListModel* gtk_filter_list_model_get_model ( GtkFilterListModel* self );
extern GtkFilter* gtk_filter_list_model_get_filter ( GtkFilterListModel* self );
extern GtkFilterListModel* gtk_filter_list_model_new ( GListModel* model, GtkFilter* filter );
extern void gtk_filter_list_model_set_filter ( GtkFilterListModel* self, GtkFilter* filter );
extern void gtk_filter_list_model_set_incremental ( GtkFilterListModel* self, gboolean incremental );
extern guint gtk_filter_list_model_get_pending ( GtkFilterListModel* self );
extern void gtk_filter_list_model_set_model ( GtkFilterListModel* self, GListModel* model );
