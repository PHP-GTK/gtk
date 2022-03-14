extern GtkWidget* gtk_grid_new(void);
extern void gtk_grid_attach (GtkGrid* grid, GtkWidget* child, int column, int row, int width, int height);
extern void gtk_grid_attach_next_to(GtkGrid* grid, GtkWidget* child, GtkWidget* sibling, GtkPositionType side, int width, int height);