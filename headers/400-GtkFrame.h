extern GtkWidget* gtk_frame_new ( const char* label );
extern float gtk_frame_get_label_align ( GtkFrame* frame );
extern const char* gtk_frame_get_label ( GtkFrame* frame );
extern GtkWidget* gtk_frame_get_child ( GtkFrame* frame );
extern void gtk_frame_set_label ( GtkFrame* frame, const char* label );
extern void gtk_frame_set_label_align ( GtkFrame* frame, float xalign );
extern GtkWidget* gtk_frame_get_label_widget ( GtkFrame* frame );
extern void gtk_frame_set_label_widget ( GtkFrame* frame, GtkWidget* label_widget );
extern void gtk_frame_set_child ( GtkFrame* frame, GtkWidget* child );
