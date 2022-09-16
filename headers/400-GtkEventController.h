extern guint32 gtk_event_controller_get_current_event_time ( GtkEventController* controller );
extern GdkEvent* gtk_event_controller_get_current_event ( GtkEventController* controller );
extern GdkDevice* gtk_event_controller_get_current_event_device ( GtkEventController* controller );
extern GdkModifierType gtk_event_controller_get_current_event_state ( GtkEventController* controller );
extern GtkPropagationLimit gtk_event_controller_get_propagation_limit ( GtkEventController* controller );
extern void gtk_event_controller_set_name ( GtkEventController* controller, const char* name );
extern GtkPropagationPhase gtk_event_controller_get_propagation_phase ( GtkEventController* controller );
extern GtkWidget* gtk_event_controller_get_widget ( GtkEventController* controller );
extern const char* gtk_event_controller_get_name ( GtkEventController* controller );
extern void gtk_event_controller_reset ( GtkEventController* controller );
extern void gtk_event_controller_set_propagation_limit ( GtkEventController* controller, GtkPropagationLimit limit );
extern void gtk_event_controller_set_propagation_phase ( GtkEventController* controller, GtkPropagationPhase phase );
