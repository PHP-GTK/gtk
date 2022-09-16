extern gboolean gtk_progress_bar_get_inverted ( GtkProgressBar* pbar );
extern PangoEllipsizeMode gtk_progress_bar_get_ellipsize ( GtkProgressBar* pbar );
extern double gtk_progress_bar_get_fraction ( GtkProgressBar* pbar );
extern GtkWidget* gtk_progress_bar_new ( void );
extern gboolean gtk_progress_bar_get_show_text ( GtkProgressBar* pbar );
extern const char* gtk_progress_bar_get_text ( GtkProgressBar* pbar );
extern void gtk_progress_bar_pulse ( GtkProgressBar* pbar );
extern void gtk_progress_bar_set_ellipsize ( GtkProgressBar* pbar, PangoEllipsizeMode mode );
extern double gtk_progress_bar_get_pulse_step ( GtkProgressBar* pbar );
extern void gtk_progress_bar_set_fraction ( GtkProgressBar* pbar, double fraction );
extern void gtk_progress_bar_set_pulse_step ( GtkProgressBar* pbar, double fraction );
extern void gtk_progress_bar_set_inverted ( GtkProgressBar* pbar, gboolean inverted );
extern void gtk_progress_bar_set_show_text ( GtkProgressBar* pbar, gboolean show_text );
extern void gtk_progress_bar_set_text ( GtkProgressBar* pbar, const char* text );