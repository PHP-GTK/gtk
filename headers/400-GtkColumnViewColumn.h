extern GtkColumnViewColumn* gtk_column_view_column_new ( const char* title, GtkListItemFactory* factory );
extern GtkListItemFactory* gtk_column_view_column_get_factory ( GtkColumnViewColumn* self );
extern GtkColumnView* gtk_column_view_column_get_column_view ( GtkColumnViewColumn* self );
extern gboolean gtk_column_view_column_get_expand ( GtkColumnViewColumn* self );
extern GMenuModel* gtk_column_view_column_get_header_menu ( GtkColumnViewColumn* self );
extern gboolean gtk_column_view_column_get_resizable ( GtkColumnViewColumn* self );
extern const char* gtk_column_view_column_get_title ( GtkColumnViewColumn* self );
extern int gtk_column_view_column_get_fixed_width ( GtkColumnViewColumn* self );
extern GtkSorter* gtk_column_view_column_get_sorter ( GtkColumnViewColumn* self );
extern gboolean gtk_column_view_column_get_visible ( GtkColumnViewColumn* self );
extern void gtk_column_view_column_set_fixed_width ( GtkColumnViewColumn* self, int fixed_width );
extern void gtk_column_view_column_set_header_menu ( GtkColumnViewColumn* self, GMenuModel* menu );
extern void gtk_column_view_column_set_factory ( GtkColumnViewColumn* self, GtkListItemFactory* factory );
extern void gtk_column_view_column_set_expand ( GtkColumnViewColumn* self, gboolean expand );
extern void gtk_column_view_column_set_resizable ( GtkColumnViewColumn* self, gboolean resizable );
extern void gtk_column_view_column_set_title ( GtkColumnViewColumn* self, const char* title );
extern void gtk_column_view_column_set_sorter ( GtkColumnViewColumn* self, GtkSorter* sorter );
extern void gtk_column_view_column_set_visible ( GtkColumnViewColumn* self, gboolean visible );