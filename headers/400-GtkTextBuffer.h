extern GtkTextBuffer* gtk_text_buffer_new ( GtkTextTagTable* table );
extern void gtk_text_buffer_add_selection_clipboard ( GtkTextBuffer* buffer, GdkClipboard* clipboard );
extern void gtk_text_buffer_add_mark ( GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where );
extern void gtk_text_buffer_apply_tag ( GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end );
extern void gtk_text_buffer_begin_irreversible_action ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_backspace ( GtkTextBuffer* buffer, GtkTextIter* iter, gboolean interactive, gboolean default_editable );
extern void gtk_text_buffer_begin_user_action ( GtkTextBuffer* buffer );
extern void gtk_text_buffer_copy_clipboard ( GtkTextBuffer* buffer, GdkClipboard* clipboard );
extern GtkTextMark* gtk_text_buffer_create_mark ( GtkTextBuffer* buffer, const char* mark_name, const GtkTextIter* where, gboolean left_gravity );
extern void gtk_text_buffer_apply_tag_by_name ( GtkTextBuffer* buffer, const char* name, const GtkTextIter* start, const GtkTextIter* end );
extern void gtk_text_buffer_cut_clipboard ( GtkTextBuffer* buffer, GdkClipboard* clipboard, gboolean default_editable );
extern GtkTextTag* gtk_text_buffer_create_tag ( GtkTextBuffer* buffer, const char* tag_name, const char* first_property_name, ... );
extern GtkTextChildAnchor* gtk_text_buffer_create_child_anchor ( GtkTextBuffer* buffer, GtkTextIter* iter );
extern void gtk_text_buffer_delete ( GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end );
extern void gtk_text_buffer_delete_mark ( GtkTextBuffer* buffer, GtkTextMark* mark );
extern gboolean gtk_text_buffer_delete_interactive ( GtkTextBuffer* buffer, GtkTextIter* start_iter, GtkTextIter* end_iter, gboolean default_editable );
extern void gtk_text_buffer_delete_mark_by_name ( GtkTextBuffer* buffer, const char* name );
extern void gtk_text_buffer_end_irreversible_action ( GtkTextBuffer* buffer );
extern void gtk_text_buffer_end_user_action ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_get_can_redo ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_delete_selection ( GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable );
extern gboolean gtk_text_buffer_get_can_undo ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_get_enable_undo ( GtkTextBuffer* buffer );
extern void gtk_text_buffer_get_bounds ( GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end );
extern int gtk_text_buffer_get_char_count ( GtkTextBuffer* buffer );
extern void gtk_text_buffer_get_end_iter ( GtkTextBuffer* buffer, GtkTextIter* iter );
extern gboolean gtk_text_buffer_get_has_selection ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_get_iter_at_line ( GtkTextBuffer* buffer, GtkTextIter* iter, int line_number );
extern void gtk_text_buffer_get_iter_at_child_anchor ( GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor );
extern GtkTextMark* gtk_text_buffer_get_insert ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_get_iter_at_line_offset ( GtkTextBuffer* buffer, GtkTextIter* iter, int line_number, int char_offset );
extern void gtk_text_buffer_get_iter_at_mark ( GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextMark* mark );
extern gboolean gtk_text_buffer_get_iter_at_line_index ( GtkTextBuffer* buffer, GtkTextIter* iter, int line_number, int byte_index );
extern int gtk_text_buffer_get_line_count ( GtkTextBuffer* buffer );
extern void gtk_text_buffer_get_iter_at_offset ( GtkTextBuffer* buffer, GtkTextIter* iter, int char_offset );
extern guint gtk_text_buffer_get_max_undo_levels ( GtkTextBuffer* buffer );
extern GtkTextMark* gtk_text_buffer_get_selection_bound ( GtkTextBuffer* buffer );
extern GdkContentProvider* gtk_text_buffer_get_selection_content ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_get_modified ( GtkTextBuffer* buffer );
extern GtkTextMark* gtk_text_buffer_get_mark ( GtkTextBuffer* buffer, const char* name );
extern gboolean gtk_text_buffer_get_selection_bounds ( GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end );
extern char* gtk_text_buffer_get_slice ( GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars );
extern void gtk_text_buffer_get_start_iter ( GtkTextBuffer* buffer, GtkTextIter* iter );
extern char* gtk_text_buffer_get_text ( GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars );
extern void gtk_text_buffer_insert_at_cursor ( GtkTextBuffer* buffer, const char* text, int len );
extern void gtk_text_buffer_insert ( GtkTextBuffer* buffer, GtkTextIter* iter, const char* text, int len );
extern void gtk_text_buffer_insert_child_anchor ( GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor );
extern GtkTextTagTable* gtk_text_buffer_get_tag_table ( GtkTextBuffer* buffer );
extern gboolean gtk_text_buffer_insert_interactive ( GtkTextBuffer* buffer, GtkTextIter* iter, const char* text, int len, gboolean default_editable );
extern void gtk_text_buffer_insert_paintable ( GtkTextBuffer* buffer, GtkTextIter* iter, GdkPaintable* paintable );
extern gboolean gtk_text_buffer_insert_interactive_at_cursor ( GtkTextBuffer* buffer, const char* text, int len, gboolean default_editable );
extern void gtk_text_buffer_insert_range ( GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end );
extern void gtk_text_buffer_insert_markup ( GtkTextBuffer* buffer, GtkTextIter* iter, const char* markup, int len );
extern void gtk_text_buffer_insert_with_tags ( GtkTextBuffer* buffer, GtkTextIter* iter, const char* text, int len, GtkTextTag* first_tag, ... );
extern void gtk_text_buffer_move_mark ( GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where );
extern void gtk_text_buffer_insert_with_tags_by_name ( GtkTextBuffer* buffer, GtkTextIter* iter, const char* text, int len, const char* first_tag_name, ... );
extern void gtk_text_buffer_move_mark_by_name ( GtkTextBuffer* buffer, const char* name, const GtkTextIter* where );
extern gboolean gtk_text_buffer_insert_range_interactive ( GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end, gboolean default_editable );
extern void gtk_text_buffer_paste_clipboard ( GtkTextBuffer* buffer, GdkClipboard* clipboard, GtkTextIter* override_location, gboolean default_editable );
extern void gtk_text_buffer_redo ( GtkTextBuffer* buffer );
extern void gtk_text_buffer_remove_selection_clipboard ( GtkTextBuffer* buffer, GdkClipboard* clipboard );
extern void gtk_text_buffer_place_cursor ( GtkTextBuffer* buffer, const GtkTextIter* where );
extern void gtk_text_buffer_remove_all_tags ( GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end );
extern void gtk_text_buffer_set_enable_undo ( GtkTextBuffer* buffer, gboolean enable_undo );
extern void gtk_text_buffer_remove_tag_by_name ( GtkTextBuffer* buffer, const char* name, const GtkTextIter* start, const GtkTextIter* end );
extern void gtk_text_buffer_remove_tag ( GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end );
extern void gtk_text_buffer_set_max_undo_levels ( GtkTextBuffer* buffer, guint max_undo_levels );
extern void gtk_text_buffer_select_range ( GtkTextBuffer* buffer, const GtkTextIter* ins, const GtkTextIter* bound );
extern void gtk_text_buffer_set_text ( GtkTextBuffer* buffer, const char* text, int len );
extern void gtk_text_buffer_undo ( GtkTextBuffer* buffer );
extern void gtk_text_buffer_set_modified ( GtkTextBuffer* buffer, gboolean setting );
