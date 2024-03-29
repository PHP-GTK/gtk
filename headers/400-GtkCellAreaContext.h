extern void gtk_cell_area_context_allocate ( GtkCellAreaContext* context, int width, int height );
extern void gtk_cell_area_context_get_allocation ( GtkCellAreaContext* context, int* width, int* height );
extern void gtk_cell_area_context_get_preferred_height ( GtkCellAreaContext* context, int* minimum_height, int* natural_height );
extern GtkCellArea* gtk_cell_area_context_get_area ( GtkCellAreaContext* context );
extern void gtk_cell_area_context_get_preferred_width ( GtkCellAreaContext* context, int* minimum_width, int* natural_width );
extern void gtk_cell_area_context_push_preferred_height ( GtkCellAreaContext* context, int minimum_height, int natural_height );
extern void gtk_cell_area_context_push_preferred_width ( GtkCellAreaContext* context, int minimum_width, int natural_width );
extern void gtk_cell_area_context_get_preferred_height_for_width ( GtkCellAreaContext* context, int width, int* minimum_height, int* natural_height );
extern void gtk_cell_area_context_get_preferred_width_for_height ( GtkCellAreaContext* context, int height, int* minimum_width, int* natural_width );
extern void gtk_cell_area_context_reset ( GtkCellAreaContext* context );
