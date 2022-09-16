extern GtkBaselinePosition gtk_box_get_baseline_position ( GtkBox* box );
extern GtkWidget* gtk_box_new ( GtkOrientation orientation, int spacing );
extern void gtk_box_append ( GtkBox* box, GtkWidget* child );
extern void gtk_box_insert_child_after ( GtkBox* box, GtkWidget* child, GtkWidget* sibling );
extern void gtk_box_prepend ( GtkBox* box, GtkWidget* child );
extern void gtk_box_remove ( GtkBox* box, GtkWidget* child );
extern gboolean gtk_box_get_homogeneous ( GtkBox* box );
extern int gtk_box_get_spacing ( GtkBox* box );
extern void gtk_box_reorder_child_after ( GtkBox* box, GtkWidget* child, GtkWidget* sibling );
extern void gtk_box_set_baseline_position ( GtkBox* box, GtkBaselinePosition position );
extern void gtk_box_set_spacing ( GtkBox* box, int spacing );
extern void gtk_box_set_homogeneous ( GtkBox* box, gboolean homogeneous );