extern GtkCustomFilter* gtk_custom_filter_new ( GtkCustomFilterFunc match_func, gpointer user_data, GDestroyNotify user_destroy );
extern void gtk_custom_filter_set_filter_func ( GtkCustomFilter* self, GtkCustomFilterFunc match_func, gpointer user_data, GDestroyNotify user_destroy );
