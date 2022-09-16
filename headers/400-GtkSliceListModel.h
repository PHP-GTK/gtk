extern GtkSliceListModel* gtk_slice_list_model_new ( GListModel* model, guint offset, guint size );
extern guint gtk_slice_list_model_get_offset ( GtkSliceListModel* self );
extern guint gtk_slice_list_model_get_size ( GtkSliceListModel* self );
extern GListModel* gtk_slice_list_model_get_model ( GtkSliceListModel* self );
extern void gtk_slice_list_model_set_offset ( GtkSliceListModel* self, guint offset );
extern void gtk_slice_list_model_set_size ( GtkSliceListModel* self, guint size );
extern void gtk_slice_list_model_set_model ( GtkSliceListModel* self, GListModel* model );
