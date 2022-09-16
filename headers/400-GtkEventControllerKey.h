extern guint gtk_event_controller_key_get_group ( GtkEventControllerKey* controller );
extern GtkEventController* gtk_event_controller_key_new ( void );
extern GtkIMContext* gtk_event_controller_key_get_im_context ( GtkEventControllerKey* controller );
extern gboolean gtk_event_controller_key_forward ( GtkEventControllerKey* controller, GtkWidget* widget );
extern void gtk_event_controller_key_set_im_context ( GtkEventControllerKey* controller, GtkIMContext* im_context );
