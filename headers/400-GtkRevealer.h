extern gboolean gtk_revealer_get_reveal_child ( GtkRevealer* revealer );
extern gboolean gtk_revealer_get_child_revealed ( GtkRevealer* revealer );
extern GtkWidget* gtk_revealer_get_child ( GtkRevealer* revealer );
extern GtkWidget* gtk_revealer_new ( void );
extern void gtk_revealer_set_reveal_child ( GtkRevealer* revealer, gboolean reveal_child );
extern void gtk_revealer_set_child ( GtkRevealer* revealer, GtkWidget* child );
extern guint gtk_revealer_get_transition_duration ( GtkRevealer* revealer );
extern GtkRevealerTransitionType gtk_revealer_get_transition_type ( GtkRevealer* revealer );
extern void gtk_revealer_set_transition_type ( GtkRevealer* revealer, GtkRevealerTransitionType transition );
extern void gtk_revealer_set_transition_duration ( GtkRevealer* revealer, guint duration );
