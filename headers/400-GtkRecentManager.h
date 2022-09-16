extern gboolean gtk_recent_manager_add_full ( GtkRecentManager* manager, const char* uri, const GtkRecentData* recent_data );
extern GtkRecentManager* gtk_recent_manager_new ( void );
extern gboolean gtk_recent_manager_add_item ( GtkRecentManager* manager, const char* uri );
extern GtkRecentInfo* gtk_recent_manager_lookup_item ( GtkRecentManager* manager, const char* uri, GError** error );
extern int gtk_recent_manager_purge_items ( GtkRecentManager* manager, GError** error );
extern GList* gtk_recent_manager_get_items ( GtkRecentManager* manager );
extern gboolean gtk_recent_manager_remove_item ( GtkRecentManager* manager, const char* uri, GError** error );
extern gboolean gtk_recent_manager_has_item ( GtkRecentManager* manager, const char* uri );
extern gboolean gtk_recent_manager_move_item ( GtkRecentManager* manager, const char* uri, const char* new_uri, GError** error );
