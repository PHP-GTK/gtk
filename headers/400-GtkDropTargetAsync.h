extern void gtk_drop_target_async_reject_drop ( GtkDropTargetAsync* self, GdkDrop* drop );
extern GdkDragAction gtk_drop_target_async_get_actions ( GtkDropTargetAsync* self );
extern GtkDropTargetAsync* gtk_drop_target_async_new ( GdkContentFormats* formats, GdkDragAction actions );
extern GdkContentFormats* gtk_drop_target_async_get_formats ( GtkDropTargetAsync* self );
extern void gtk_drop_target_async_set_formats ( GtkDropTargetAsync* self, GdkContentFormats* formats );
extern void gtk_drop_target_async_set_actions ( GtkDropTargetAsync* self, GdkDragAction actions );
