extern GtkWidget* gtk_overlay_new ( void );
extern void gtk_overlay_add_overlay ( GtkOverlay* overlay, GtkWidget* widget );
extern gboolean gtk_overlay_get_clip_overlay ( GtkOverlay* overlay, GtkWidget* widget );
extern void gtk_overlay_remove_overlay ( GtkOverlay* overlay, GtkWidget* widget );
extern GtkWidget* gtk_overlay_get_child ( GtkOverlay* overlay );
extern void gtk_overlay_set_child ( GtkOverlay* overlay, GtkWidget* child );
extern void gtk_overlay_set_clip_overlay ( GtkOverlay* overlay, GtkWidget* widget, gboolean clip_overlay );
extern gboolean gtk_overlay_get_measure_overlay ( GtkOverlay* overlay, GtkWidget* widget );
extern void gtk_overlay_set_measure_overlay ( GtkOverlay* overlay, GtkWidget* widget, gboolean measure );
