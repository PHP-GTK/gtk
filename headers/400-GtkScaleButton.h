extern GtkWidget* gtk_scale_button_get_plus_button ( GtkScaleButton* button );
extern GtkWidget* gtk_scale_button_new ( double min, double max, double step, const char** icons );
extern GtkWidget* gtk_scale_button_get_minus_button ( GtkScaleButton* button );
extern GtkAdjustment* gtk_scale_button_get_adjustment ( GtkScaleButton* button );
extern double gtk_scale_button_get_value ( GtkScaleButton* button );
extern void gtk_scale_button_set_icons ( GtkScaleButton* button, const char** icons );
extern GtkWidget* gtk_scale_button_get_popup ( GtkScaleButton* button );
extern void gtk_scale_button_set_value ( GtkScaleButton* button, double value );
extern void gtk_scale_button_set_adjustment ( GtkScaleButton* button, GtkAdjustment* adjustment );
