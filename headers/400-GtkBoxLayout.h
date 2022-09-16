extern guint gtk_box_layout_get_spacing ( GtkBoxLayout* box_layout );
extern gboolean gtk_box_layout_get_homogeneous ( GtkBoxLayout* box_layout );
extern GtkBaselinePosition gtk_box_layout_get_baseline_position ( GtkBoxLayout* box_layout );
extern GtkLayoutManager* gtk_box_layout_new ( GtkOrientation orientation );
extern void gtk_box_layout_set_homogeneous ( GtkBoxLayout* box_layout, gboolean homogeneous );
extern void gtk_box_layout_set_baseline_position ( GtkBoxLayout* box_layout, GtkBaselinePosition position );
extern void gtk_box_layout_set_spacing ( GtkBoxLayout* box_layout, guint spacing );
