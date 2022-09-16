extern GListModel* gtk_flatten_list_model_get_model ( GtkFlattenListModel* self );
extern void gtk_flatten_list_model_set_model ( GtkFlattenListModel* self, GListModel* model );
extern GtkFlattenListModel* gtk_flatten_list_model_new ( GListModel* model );
extern GListModel* gtk_flatten_list_model_get_model_for_item ( GtkFlattenListModel* self, guint position );
