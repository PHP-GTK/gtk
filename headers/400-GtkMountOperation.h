extern GtkWindow* gtk_mount_operation_get_parent ( GtkMountOperation* op );
extern gboolean gtk_mount_operation_is_showing ( GtkMountOperation* op );
extern GdkDisplay* gtk_mount_operation_get_display ( GtkMountOperation* op );
extern void gtk_mount_operation_set_parent ( GtkMountOperation* op, GtkWindow* parent );
extern GMountOperation* gtk_mount_operation_new ( GtkWindow* parent );
extern void gtk_mount_operation_set_display ( GtkMountOperation* op, GdkDisplay* display );
