extern GtkWidget* gtk_stack_new(void);
extern void gtk_stack_set_transition_type(GtkStack* stack, GtkStackTransitionType transition);
extern void gtk_stack_set_transition_duration(GtkStack* stack, guint duration);
extern GtkStackPage* gtk_stack_add_titled(GtkStack* stack,GtkWidget* child,const char* name,const char* title);
