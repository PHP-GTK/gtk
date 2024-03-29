extern GtkWidget* gtk_grid_view_new ( GtkSelectionModel* model, GtkListItemFactory* factory );
extern guint gtk_grid_view_get_max_columns ( GtkGridView* self );
extern GtkListItemFactory* gtk_grid_view_get_factory ( GtkGridView* self );
extern gboolean gtk_grid_view_get_enable_rubberband ( GtkGridView* self );
extern GtkSelectionModel* gtk_grid_view_get_model ( GtkGridView* self );
extern gboolean gtk_grid_view_get_single_click_activate ( GtkGridView* self );
extern guint gtk_grid_view_get_min_columns ( GtkGridView* self );
extern void gtk_grid_view_set_enable_rubberband ( GtkGridView* self, gboolean enable_rubberband );
extern void gtk_grid_view_set_factory ( GtkGridView* self, GtkListItemFactory* factory );
extern void gtk_grid_view_set_max_columns ( GtkGridView* self, guint max_columns );
extern void gtk_grid_view_set_min_columns ( GtkGridView* self, guint min_columns );
extern void gtk_grid_view_set_single_click_activate ( GtkGridView* self, gboolean single_click_activate );
extern void gtk_grid_view_set_model ( GtkGridView* self, GtkSelectionModel* model );
