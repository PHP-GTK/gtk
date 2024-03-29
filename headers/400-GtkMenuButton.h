extern GtkWidget* gtk_menu_button_get_child ( GtkMenuButton* menu_button );
extern gboolean gtk_menu_button_get_always_show_arrow ( GtkMenuButton* menu_button );
extern GtkArrowType gtk_menu_button_get_direction ( GtkMenuButton* menu_button );
extern GtkWidget* gtk_menu_button_new ( void );
extern gboolean gtk_menu_button_get_has_frame ( GtkMenuButton* menu_button );
extern const char* gtk_menu_button_get_icon_name ( GtkMenuButton* menu_button );
extern const char* gtk_menu_button_get_label ( GtkMenuButton* menu_button );
extern GtkPopover* gtk_menu_button_get_popover ( GtkMenuButton* menu_button );
extern gboolean gtk_menu_button_get_primary ( GtkMenuButton* menu_button );
extern GMenuModel* gtk_menu_button_get_menu_model ( GtkMenuButton* menu_button );
extern void gtk_menu_button_set_always_show_arrow ( GtkMenuButton* menu_button, gboolean always_show_arrow );
extern void gtk_menu_button_set_child ( GtkMenuButton* menu_button, GtkWidget* child );
extern void gtk_menu_button_popup ( GtkMenuButton* menu_button );
extern void gtk_menu_button_set_create_popup_func ( GtkMenuButton* menu_button, GtkMenuButtonCreatePopupFunc func, gpointer user_data, GDestroyNotify destroy_notify );
extern gboolean gtk_menu_button_get_use_underline ( GtkMenuButton* menu_button );
extern void gtk_menu_button_popdown ( GtkMenuButton* menu_button );
extern void gtk_menu_button_set_icon_name ( GtkMenuButton* menu_button, const char* icon_name );
extern void gtk_menu_button_set_has_frame ( GtkMenuButton* menu_button, gboolean has_frame );
extern void gtk_menu_button_set_direction ( GtkMenuButton* menu_button, GtkArrowType direction );
extern void gtk_menu_button_set_primary ( GtkMenuButton* menu_button, gboolean primary );
extern void gtk_menu_button_set_menu_model ( GtkMenuButton* menu_button, GMenuModel* menu_model );
extern void gtk_menu_button_set_label ( GtkMenuButton* menu_button, const char* label );
extern void gtk_menu_button_set_popover ( GtkMenuButton* menu_button, GtkWidget* popover );
extern void gtk_menu_button_set_use_underline ( GtkMenuButton* menu_button, gboolean use_underline );
