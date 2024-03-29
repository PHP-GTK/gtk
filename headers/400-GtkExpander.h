extern gboolean gtk_expander_get_expanded ( GtkExpander* expander );
extern GtkWidget* gtk_expander_get_child ( GtkExpander* expander );
extern GtkWidget* gtk_expander_new ( const char* label );
extern GtkWidget* gtk_expander_new_with_mnemonic ( const char* label );
extern GtkWidget* gtk_expander_get_label_widget ( GtkExpander* expander );
extern gboolean gtk_expander_get_resize_toplevel ( GtkExpander* expander );
extern gboolean gtk_expander_get_use_markup ( GtkExpander* expander );
extern gboolean gtk_expander_get_use_underline ( GtkExpander* expander );
extern void gtk_expander_set_child ( GtkExpander* expander, GtkWidget* child );
extern void gtk_expander_set_label ( GtkExpander* expander, const char* label );
extern void gtk_expander_set_expanded ( GtkExpander* expander, gboolean expanded );
extern void gtk_expander_set_resize_toplevel ( GtkExpander* expander, gboolean resize_toplevel );
extern const char* gtk_expander_get_label ( GtkExpander* expander );
extern void gtk_expander_set_label_widget ( GtkExpander* expander, GtkWidget* label_widget );
extern void gtk_expander_set_use_underline ( GtkExpander* expander, gboolean use_underline );
extern void gtk_expander_set_use_markup ( GtkExpander* expander, gboolean use_markup );
