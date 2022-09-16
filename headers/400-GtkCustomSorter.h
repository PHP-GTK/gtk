extern void gtk_custom_sorter_set_sort_func ( GtkCustomSorter* self, GCompareDataFunc sort_func, gpointer user_data, GDestroyNotify user_destroy );
extern GtkCustomSorter* gtk_custom_sorter_new ( GCompareDataFunc sort_func, gpointer user_data, GDestroyNotify user_destroy );
