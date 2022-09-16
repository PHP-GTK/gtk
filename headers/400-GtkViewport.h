extern void gtk_viewport_set_child ( GtkViewport* viewport, GtkWidget* child );
extern gboolean gtk_viewport_get_scroll_to_focus ( GtkViewport* viewport );
extern GtkWidget* gtk_viewport_new ( GtkAdjustment* hadjustment, GtkAdjustment* vadjustment );
extern GtkWidget* gtk_viewport_get_child ( GtkViewport* viewport );
extern void gtk_viewport_set_scroll_to_focus ( GtkViewport* viewport, gboolean scroll_to_focus );
