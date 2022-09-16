extern GtkSizeGroupMode gtk_size_group_get_mode ( GtkSizeGroup* size_group );
extern void gtk_size_group_add_widget ( GtkSizeGroup* size_group, GtkWidget* widget );
extern GSList* gtk_size_group_get_widgets ( GtkSizeGroup* size_group );
extern GtkSizeGroup* gtk_size_group_new ( GtkSizeGroupMode mode );
extern void gtk_size_group_set_mode ( GtkSizeGroup* size_group, GtkSizeGroupMode mode );
extern void gtk_size_group_remove_widget ( GtkSizeGroup* size_group, GtkWidget* widget );
