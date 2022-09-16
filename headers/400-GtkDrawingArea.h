extern GtkWidget* gtk_drawing_area_new ( void );
extern void gtk_drawing_area_set_content_height ( GtkDrawingArea* self, int height );
extern int gtk_drawing_area_get_content_height ( GtkDrawingArea* self );
extern int gtk_drawing_area_get_content_width ( GtkDrawingArea* self );
extern void gtk_drawing_area_set_draw_func ( GtkDrawingArea* self, GtkDrawingAreaDrawFunc draw_func, gpointer user_data, GDestroyNotify destroy );
extern void gtk_drawing_area_set_content_width ( GtkDrawingArea* self, int width );
