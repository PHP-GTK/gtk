extern GtkLayoutChild* gtk_layout_manager_get_layout_child ( GtkLayoutManager* manager, GtkWidget* child );
extern GtkWidget* gtk_layout_manager_get_widget ( GtkLayoutManager* manager );
extern GtkSizeRequestMode gtk_layout_manager_get_request_mode ( GtkLayoutManager* manager );
extern void gtk_layout_manager_allocate ( GtkLayoutManager* manager, GtkWidget* widget, int width, int height, int baseline );
extern void gtk_layout_manager_measure ( GtkLayoutManager* manager, GtkWidget* widget, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline );
extern void gtk_layout_manager_layout_changed ( GtkLayoutManager* manager );
