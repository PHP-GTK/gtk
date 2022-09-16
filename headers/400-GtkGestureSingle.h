extern GdkEventSequence* gtk_gesture_single_get_current_sequence ( GtkGestureSingle* gesture );
extern guint gtk_gesture_single_get_button ( GtkGestureSingle* gesture );
extern gboolean gtk_gesture_single_get_exclusive ( GtkGestureSingle* gesture );
extern guint gtk_gesture_single_get_current_button ( GtkGestureSingle* gesture );
extern void gtk_gesture_single_set_button ( GtkGestureSingle* gesture, guint button );
extern void gtk_gesture_single_set_exclusive ( GtkGestureSingle* gesture, gboolean exclusive );
extern gboolean gtk_gesture_single_get_touch_only ( GtkGestureSingle* gesture );
extern void gtk_gesture_single_set_touch_only ( GtkGestureSingle* gesture, gboolean touch_only );
