extern GtkCellArea* gtk_cell_area_box_new ( void );
extern int gtk_cell_area_box_get_spacing ( GtkCellAreaBox* box );
extern void gtk_cell_area_box_pack_end ( GtkCellAreaBox* box, GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed );
extern void gtk_cell_area_box_pack_start ( GtkCellAreaBox* box, GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed );
extern void gtk_cell_area_box_set_spacing ( GtkCellAreaBox* box, int spacing );
