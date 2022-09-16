extern gboolean gtk_gesture_stylus_get_axes ( GtkGestureStylus* gesture, GdkAxisUse* axes, double** values );
extern GtkGesture* gtk_gesture_stylus_new ( void );
extern gboolean gtk_gesture_stylus_get_axis ( GtkGestureStylus* gesture, GdkAxisUse axis, double* value );
extern gboolean gtk_gesture_stylus_get_backlog ( GtkGestureStylus* gesture, GdkTimeCoord** backlog, guint* n_elems );
extern GdkDeviceTool* gtk_gesture_stylus_get_device_tool ( GtkGestureStylus* gesture );
