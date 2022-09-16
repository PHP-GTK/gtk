extern void gtk_drag_source_drag_cancel ( GtkDragSource* source );
extern GdkDragAction gtk_drag_source_get_actions ( GtkDragSource* source );
extern GdkContentProvider* gtk_drag_source_get_content ( GtkDragSource* source );
extern GtkDragSource* gtk_drag_source_new ( void );
extern void gtk_drag_source_set_actions ( GtkDragSource* source, GdkDragAction actions );
extern void gtk_drag_source_set_icon ( GtkDragSource* source, GdkPaintable* paintable, int hot_x, int hot_y );
extern void gtk_drag_source_set_content ( GtkDragSource* source, GdkContentProvider* content );
extern GdkDrag* gtk_drag_source_get_drag ( GtkDragSource* source );
