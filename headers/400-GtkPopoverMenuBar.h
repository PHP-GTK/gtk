extern gboolean gtk_popover_menu_bar_remove_child ( GtkPopoverMenuBar* bar, GtkWidget* child );
extern GMenuModel* gtk_popover_menu_bar_get_menu_model ( GtkPopoverMenuBar* bar );
extern GtkWidget* gtk_popover_menu_bar_new_from_model ( GMenuModel* model );
extern gboolean gtk_popover_menu_bar_add_child ( GtkPopoverMenuBar* bar, GtkWidget* child, const char* id );
extern void gtk_popover_menu_bar_set_menu_model ( GtkPopoverMenuBar* bar, GMenuModel* model );
