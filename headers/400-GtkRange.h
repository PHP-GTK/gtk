extern gboolean gtk_range_get_flippable ( GtkRange* range );
extern gboolean gtk_range_get_inverted ( GtkRange* range );
extern double gtk_range_get_fill_level ( GtkRange* range );
extern GtkAdjustment* gtk_range_get_adjustment ( GtkRange* range );
extern int gtk_range_get_round_digits ( GtkRange* range );
extern gboolean gtk_range_get_show_fill_level ( GtkRange* range );
extern gboolean gtk_range_get_restrict_to_fill_level ( GtkRange* range );
extern void gtk_range_get_slider_range ( GtkRange* range, int* slider_start, int* slider_end );
extern gboolean gtk_range_get_slider_size_fixed ( GtkRange* range );
extern void gtk_range_get_range_rect ( GtkRange* range, GdkRectangle* range_rect );
extern double gtk_range_get_value ( GtkRange* range );
extern void gtk_range_set_adjustment ( GtkRange* range, GtkAdjustment* adjustment );
extern void gtk_range_set_flippable ( GtkRange* range, gboolean flippable );
extern void gtk_range_set_fill_level ( GtkRange* range, double fill_level );
extern void gtk_range_set_increments ( GtkRange* range, double step, double page );
extern void gtk_range_set_inverted ( GtkRange* range, gboolean setting );
extern void gtk_range_set_range ( GtkRange* range, double min, double max );
extern void gtk_range_set_restrict_to_fill_level ( GtkRange* range, gboolean restrict_to_fill_level );
extern void gtk_range_set_round_digits ( GtkRange* range, int round_digits );
extern void gtk_range_set_value ( GtkRange* range, double value );
extern void gtk_range_set_slider_size_fixed ( GtkRange* range, gboolean size_fixed );
extern void gtk_range_set_show_fill_level ( GtkRange* range, gboolean show_fill_level );
