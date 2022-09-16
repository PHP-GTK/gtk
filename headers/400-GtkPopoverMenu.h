extern GMenuModel* gtk_popover_menu_get_menu_model ( GtkPopoverMenu* popover );
extern GtkWidget* gtk_popover_menu_new_from_model ( GMenuModel* model );
extern GtkWidget* gtk_popover_menu_new_from_model_full ( GMenuModel* model, GtkPopoverMenuFlags flags );
extern gboolean gtk_popover_menu_add_child ( GtkPopoverMenu* popover, GtkWidget* child, const char* id );
extern void gtk_popover_menu_set_menu_model ( GtkPopoverMenu* popover, GMenuModel* model );
extern gboolean gtk_popover_menu_remove_child ( GtkPopoverMenu* popover, GtkWidget* child );
