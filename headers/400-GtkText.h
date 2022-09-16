extern GtkWidget* gtk_text_new_with_buffer ( GtkEntryBuffer* buffer );
extern GtkWidget* gtk_text_new ( void );
extern gboolean gtk_text_get_activates_default ( GtkText* self );
extern gboolean gtk_text_get_enable_emoji_completion ( GtkText* self );
extern void gtk_text_compute_cursor_extents ( GtkText* self, gsize position, graphene_rect_t* strong, graphene_rect_t* weak );
extern GtkEntryBuffer* gtk_text_get_buffer ( GtkText* self );
extern GMenuModel* gtk_text_get_extra_menu ( GtkText* self );
extern GtkInputPurpose gtk_text_get_input_purpose ( GtkText* self );
extern GtkInputHints gtk_text_get_input_hints ( GtkText* self );
extern PangoAttrList* gtk_text_get_attributes ( GtkText* self );
extern gunichar gtk_text_get_invisible_char ( GtkText* self );
extern int gtk_text_get_max_length ( GtkText* self );
extern gboolean gtk_text_get_overwrite_mode ( GtkText* self );
extern gboolean gtk_text_get_propagate_text_width ( GtkText* self );
extern PangoTabArray* gtk_text_get_tabs ( GtkText* self );
extern gboolean gtk_text_get_truncate_multiline ( GtkText* self );
extern const char* gtk_text_get_placeholder_text ( GtkText* self );
extern guint16 gtk_text_get_text_length ( GtkText* self );
extern gboolean gtk_text_get_visibility ( GtkText* self );
extern void gtk_text_set_activates_default ( GtkText* self, gboolean activates );
extern void gtk_text_set_attributes ( GtkText* self, PangoAttrList* attrs );
extern gboolean gtk_text_grab_focus_without_selecting ( GtkText* self );
extern void gtk_text_set_extra_menu ( GtkText* self, GMenuModel* model );
extern void gtk_text_set_input_hints ( GtkText* self, GtkInputHints hints );
extern void gtk_text_set_buffer ( GtkText* self, GtkEntryBuffer* buffer );
extern void gtk_text_set_enable_emoji_completion ( GtkText* self, gboolean enable_emoji_completion );
extern void gtk_text_set_input_purpose ( GtkText* self, GtkInputPurpose purpose );
extern void gtk_text_set_overwrite_mode ( GtkText* self, gboolean overwrite );
extern void gtk_text_set_propagate_text_width ( GtkText* self, gboolean propagate_text_width );
extern void gtk_text_set_max_length ( GtkText* self, int length );
extern void gtk_text_set_placeholder_text ( GtkText* self, const char* text );
extern void gtk_text_set_invisible_char ( GtkText* self, gunichar ch );
extern void gtk_text_set_tabs ( GtkText* self, PangoTabArray* tabs );
extern void gtk_text_set_truncate_multiline ( GtkText* self, gboolean truncate_multiline );
extern void gtk_text_unset_invisible_char ( GtkText* self );
extern void gtk_text_set_visibility ( GtkText* self, gboolean visible );