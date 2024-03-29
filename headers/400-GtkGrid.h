extern void gtk_grid_attach ( GtkGrid* grid, GtkWidget* child, int column, int row, int width, int height );
extern void gtk_grid_attach_next_to ( GtkGrid* grid, GtkWidget* child, GtkWidget* sibling, GtkPositionType side, int width, int height );
extern int gtk_grid_get_baseline_row ( GtkGrid* grid );
extern GtkWidget* gtk_grid_new ( void );
extern gboolean gtk_grid_get_column_homogeneous ( GtkGrid* grid );
extern guint gtk_grid_get_column_spacing ( GtkGrid* grid );
extern GtkBaselinePosition gtk_grid_get_row_baseline_position ( GtkGrid* grid, int row );
extern GtkWidget* gtk_grid_get_child_at ( GtkGrid* grid, int column, int row );
extern gboolean gtk_grid_get_row_homogeneous ( GtkGrid* grid );
extern guint gtk_grid_get_row_spacing ( GtkGrid* grid );
extern void gtk_grid_insert_row ( GtkGrid* grid, int position );
extern void gtk_grid_insert_next_to ( GtkGrid* grid, GtkWidget* sibling, GtkPositionType side );
extern void gtk_grid_remove ( GtkGrid* grid, GtkWidget* child );
extern void gtk_grid_insert_column ( GtkGrid* grid, int position );
extern void gtk_grid_remove_column ( GtkGrid* grid, int position );
extern void gtk_grid_query_child ( GtkGrid* grid, GtkWidget* child, int* column, int* row, int* width, int* height );
extern void gtk_grid_remove_row ( GtkGrid* grid, int position );
extern void gtk_grid_set_baseline_row ( GtkGrid* grid, int row );
extern void gtk_grid_set_column_spacing ( GtkGrid* grid, guint spacing );
extern void gtk_grid_set_row_spacing ( GtkGrid* grid, guint spacing );
extern void gtk_grid_set_row_homogeneous ( GtkGrid* grid, gboolean homogeneous );
extern void gtk_grid_set_row_baseline_position ( GtkGrid* grid, int row, GtkBaselinePosition pos );
extern void gtk_grid_set_column_homogeneous ( GtkGrid* grid, gboolean homogeneous );
