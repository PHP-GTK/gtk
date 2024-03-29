extern gboolean gtk_popover_get_cascade_popdown ( GtkPopover* popover );
extern GtkWidget* gtk_popover_get_child ( GtkPopover* popover );
extern gboolean gtk_popover_get_autohide ( GtkPopover* popover );
extern void gtk_popover_get_offset ( GtkPopover* popover, int* x_offset, int* y_offset );
extern GtkWidget* gtk_popover_new ( void );
extern gboolean gtk_popover_get_mnemonics_visible ( GtkPopover* popover );
extern gboolean gtk_popover_get_has_arrow ( GtkPopover* popover );
extern gboolean gtk_popover_get_pointing_to ( GtkPopover* popover, GdkRectangle* rect );
extern void gtk_popover_popup ( GtkPopover* popover );
extern void gtk_popover_popdown ( GtkPopover* popover );
extern GtkPositionType gtk_popover_get_position ( GtkPopover* popover );
extern void gtk_popover_set_child ( GtkPopover* popover, GtkWidget* child );
extern void gtk_popover_present ( GtkPopover* popover );
extern void gtk_popover_set_default_widget ( GtkPopover* popover, GtkWidget* widget );
extern void gtk_popover_set_cascade_popdown ( GtkPopover* popover, gboolean cascade_popdown );
extern void gtk_popover_set_has_arrow ( GtkPopover* popover, gboolean has_arrow );
extern void gtk_popover_set_mnemonics_visible ( GtkPopover* popover, gboolean mnemonics_visible );
extern void gtk_popover_set_autohide ( GtkPopover* popover, gboolean autohide );
extern void gtk_popover_set_offset ( GtkPopover* popover, int x_offset, int y_offset );
extern void gtk_popover_set_position ( GtkPopover* popover, GtkPositionType position );
extern void gtk_popover_set_pointing_to ( GtkPopover* popover, const GdkRectangle* rect );
