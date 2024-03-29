extern void gtk_spin_button_configure ( GtkSpinButton* spin_button, GtkAdjustment* adjustment, double climb_rate, guint digits );
extern GtkWidget* gtk_spin_button_new_with_range ( double min, double max, double step );
extern GtkWidget* gtk_spin_button_new ( GtkAdjustment* adjustment, double climb_rate, guint digits );
extern guint gtk_spin_button_get_digits ( GtkSpinButton* spin_button );
extern GtkAdjustment* gtk_spin_button_get_adjustment ( GtkSpinButton* spin_button );
extern void gtk_spin_button_get_increments ( GtkSpinButton* spin_button, double* step, double* page );
extern gboolean gtk_spin_button_get_numeric ( GtkSpinButton* spin_button );
extern gboolean gtk_spin_button_get_snap_to_ticks ( GtkSpinButton* spin_button );
extern double gtk_spin_button_get_climb_rate ( GtkSpinButton* spin_button );
extern GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy ( GtkSpinButton* spin_button );
extern void gtk_spin_button_get_range ( GtkSpinButton* spin_button, double* min, double* max );
extern double gtk_spin_button_get_value ( GtkSpinButton* spin_button );
extern gboolean gtk_spin_button_get_wrap ( GtkSpinButton* spin_button );
extern int gtk_spin_button_get_value_as_int ( GtkSpinButton* spin_button );
extern void gtk_spin_button_set_adjustment ( GtkSpinButton* spin_button, GtkAdjustment* adjustment );
extern void gtk_spin_button_set_climb_rate ( GtkSpinButton* spin_button, double climb_rate );
extern void gtk_spin_button_set_increments ( GtkSpinButton* spin_button, double step, double page );
extern void gtk_spin_button_set_numeric ( GtkSpinButton* spin_button, gboolean numeric );
extern void gtk_spin_button_set_digits ( GtkSpinButton* spin_button, guint digits );
extern void gtk_spin_button_set_range ( GtkSpinButton* spin_button, double min, double max );
extern void gtk_spin_button_set_update_policy ( GtkSpinButton* spin_button, GtkSpinButtonUpdatePolicy policy );
extern void gtk_spin_button_set_snap_to_ticks ( GtkSpinButton* spin_button, gboolean snap_to_ticks );
extern void gtk_spin_button_set_value ( GtkSpinButton* spin_button, double value );
extern void gtk_spin_button_spin ( GtkSpinButton* spin_button, GtkSpinType direction, double increment );
extern void gtk_spin_button_set_wrap ( GtkSpinButton* spin_button, gboolean wrap );
extern void gtk_spin_button_update ( GtkSpinButton* spin_button );
