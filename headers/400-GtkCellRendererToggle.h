extern GtkCellRenderer* gtk_cell_renderer_toggle_new ( void );
extern gboolean gtk_cell_renderer_toggle_get_activatable ( GtkCellRendererToggle* toggle );
extern gboolean gtk_cell_renderer_toggle_get_active ( GtkCellRendererToggle* toggle );
extern gboolean gtk_cell_renderer_toggle_get_radio ( GtkCellRendererToggle* toggle );
extern void gtk_cell_renderer_toggle_set_radio ( GtkCellRendererToggle* toggle, gboolean radio );
extern void gtk_cell_renderer_toggle_set_activatable ( GtkCellRendererToggle* toggle, gboolean setting );
extern void gtk_cell_renderer_toggle_set_active ( GtkCellRendererToggle* toggle, gboolean setting );
