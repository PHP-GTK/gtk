extern GObject* gtk_list_item_get_item ( GtkListItem* self );
extern guint gtk_list_item_get_position ( GtkListItem* self );
extern GtkWidget* gtk_list_item_get_child ( GtkListItem* self );
extern gboolean gtk_list_item_get_activatable ( GtkListItem* self );
extern gboolean gtk_list_item_get_selectable ( GtkListItem* self );
extern gboolean gtk_list_item_get_selected ( GtkListItem* self );
extern void gtk_list_item_set_activatable ( GtkListItem* self, gboolean activatable );
extern void gtk_list_item_set_child ( GtkListItem* self, GtkWidget* child );
extern void gtk_list_item_set_selectable ( GtkListItem* self, gboolean selectable );
