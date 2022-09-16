extern GtkWidget* gtk_action_bar_new ( void );
extern gboolean gtk_action_bar_get_revealed ( GtkActionBar* action_bar );
extern void gtk_action_bar_pack_end ( GtkActionBar* action_bar, GtkWidget* child );
extern void gtk_action_bar_pack_start ( GtkActionBar* action_bar, GtkWidget* child );
extern GtkWidget* gtk_action_bar_get_center_widget ( GtkActionBar* action_bar );
extern void gtk_action_bar_set_revealed ( GtkActionBar* action_bar, gboolean revealed );
extern void gtk_action_bar_remove ( GtkActionBar* action_bar, GtkWidget* child );
extern void gtk_action_bar_set_center_widget ( GtkActionBar* action_bar, GtkWidget* center_widget );
