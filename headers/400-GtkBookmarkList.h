extern int gtk_bookmark_list_get_io_priority ( GtkBookmarkList* self );
extern const char* gtk_bookmark_list_get_attributes ( GtkBookmarkList* self );
extern GtkBookmarkList* gtk_bookmark_list_new ( const char* filename, const char* attributes );
extern const char* gtk_bookmark_list_get_filename ( GtkBookmarkList* self );
extern void gtk_bookmark_list_set_attributes ( GtkBookmarkList* self, const char* attributes );
extern gboolean gtk_bookmark_list_is_loading ( GtkBookmarkList* self );
extern void gtk_bookmark_list_set_io_priority ( GtkBookmarkList* self, int io_priority );
