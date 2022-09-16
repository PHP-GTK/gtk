extern gboolean gtk_window_controls_get_empty ( GtkWindowControls* self );
extern GtkPackType gtk_window_controls_get_side ( GtkWindowControls* self );
extern GtkWidget* gtk_window_controls_new ( GtkPackType side );
extern const char* gtk_window_controls_get_decoration_layout ( GtkWindowControls* self );
extern void gtk_window_controls_set_side ( GtkWindowControls* self, GtkPackType side );
extern void gtk_window_controls_set_decoration_layout ( GtkWindowControls* self, const char* layout );
