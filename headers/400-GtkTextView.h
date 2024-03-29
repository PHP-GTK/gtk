extern GtkWidget* gtk_text_view_new_with_buffer ( GtkTextBuffer* buffer );
extern void gtk_text_view_add_child_at_anchor ( GtkTextView* text_view, GtkWidget* child, GtkTextChildAnchor* anchor );
extern void gtk_text_view_add_overlay ( GtkTextView* text_view, GtkWidget* child, int xpos, int ypos );
extern GtkWidget* gtk_text_view_new ( void );
extern gboolean gtk_text_view_backward_display_line_start ( GtkTextView* text_view, GtkTextIter* iter );
extern gboolean gtk_text_view_backward_display_line ( GtkTextView* text_view, GtkTextIter* iter );
extern gboolean gtk_text_view_forward_display_line ( GtkTextView* text_view, GtkTextIter* iter );
extern gboolean gtk_text_view_forward_display_line_end ( GtkTextView* text_view, GtkTextIter* iter );
extern int gtk_text_view_get_bottom_margin ( GtkTextView* text_view );
extern void gtk_text_view_buffer_to_window_coords ( GtkTextView* text_view, GtkTextWindowType win, int buffer_x, int buffer_y, int* window_x, int* window_y );
extern GtkTextBuffer* gtk_text_view_get_buffer ( GtkTextView* text_view );
extern gboolean gtk_text_view_get_accepts_tab ( GtkTextView* text_view );
extern void gtk_text_view_get_cursor_locations ( GtkTextView* text_view, const GtkTextIter* iter, GdkRectangle* strong, GdkRectangle* weak );
extern gboolean gtk_text_view_get_editable ( GtkTextView* text_view );
extern gboolean gtk_text_view_get_cursor_visible ( GtkTextView* text_view );
extern GtkWidget* gtk_text_view_get_gutter ( GtkTextView* text_view, GtkTextWindowType win );
extern GMenuModel* gtk_text_view_get_extra_menu ( GtkTextView* text_view );
extern GtkInputHints gtk_text_view_get_input_hints ( GtkTextView* text_view );
extern int gtk_text_view_get_indent ( GtkTextView* text_view );
extern GtkInputPurpose gtk_text_view_get_input_purpose ( GtkTextView* text_view );
extern gboolean gtk_text_view_get_iter_at_location ( GtkTextView* text_view, GtkTextIter* iter, int x, int y );
extern gboolean gtk_text_view_get_iter_at_position ( GtkTextView* text_view, GtkTextIter* iter, int* trailing, int x, int y );
extern void gtk_text_view_get_line_yrange ( GtkTextView* text_view, const GtkTextIter* iter, int* y, int* height );
extern void gtk_text_view_get_line_at_y ( GtkTextView* text_view, GtkTextIter* target_iter, int y, int* line_top );
extern int gtk_text_view_get_left_margin ( GtkTextView* text_view );
extern GtkJustification gtk_text_view_get_justification ( GtkTextView* text_view );
extern void gtk_text_view_get_iter_location ( GtkTextView* text_view, const GtkTextIter* iter, GdkRectangle* location );
extern gboolean gtk_text_view_get_overwrite ( GtkTextView* text_view );
extern PangoContext* gtk_text_view_get_ltr_context ( GtkTextView* text_view );
extern gboolean gtk_text_view_get_monospace ( GtkTextView* text_view );
extern int gtk_text_view_get_pixels_below_lines ( GtkTextView* text_view );
extern int gtk_text_view_get_pixels_above_lines ( GtkTextView* text_view );
extern int gtk_text_view_get_pixels_inside_wrap ( GtkTextView* text_view );
extern int gtk_text_view_get_right_margin ( GtkTextView* text_view );
extern PangoContext* gtk_text_view_get_rtl_context ( GtkTextView* text_view );
extern void gtk_text_view_get_visible_rect ( GtkTextView* text_view, GdkRectangle* visible_rect );
extern PangoTabArray* gtk_text_view_get_tabs ( GtkTextView* text_view );
extern int gtk_text_view_get_top_margin ( GtkTextView* text_view );
extern GtkWrapMode gtk_text_view_get_wrap_mode ( GtkTextView* text_view );
extern gboolean gtk_text_view_im_context_filter_keypress ( GtkTextView* text_view, GdkEvent* event );
extern gboolean gtk_text_view_move_mark_onscreen ( GtkTextView* text_view, GtkTextMark* mark );
extern gboolean gtk_text_view_place_cursor_onscreen ( GtkTextView* text_view );
extern gboolean gtk_text_view_move_visually ( GtkTextView* text_view, GtkTextIter* iter, int count );
extern void gtk_text_view_move_overlay ( GtkTextView* text_view, GtkWidget* child, int xpos, int ypos );
extern void gtk_text_view_remove ( GtkTextView* text_view, GtkWidget* child );
extern void gtk_text_view_reset_cursor_blink ( GtkTextView* text_view );
extern void gtk_text_view_reset_im_context ( GtkTextView* text_view );
extern gboolean gtk_text_view_scroll_to_iter ( GtkTextView* text_view, GtkTextIter* iter, double within_margin, gboolean use_align, double xalign, double yalign );
extern void gtk_text_view_scroll_mark_onscreen ( GtkTextView* text_view, GtkTextMark* mark );
extern void gtk_text_view_scroll_to_mark ( GtkTextView* text_view, GtkTextMark* mark, double within_margin, gboolean use_align, double xalign, double yalign );
extern void gtk_text_view_set_accepts_tab ( GtkTextView* text_view, gboolean accepts_tab );
extern void gtk_text_view_set_bottom_margin ( GtkTextView* text_view, int bottom_margin );
extern void gtk_text_view_set_editable ( GtkTextView* text_view, gboolean setting );
extern void gtk_text_view_set_buffer ( GtkTextView* text_view, GtkTextBuffer* buffer );
extern void gtk_text_view_set_cursor_visible ( GtkTextView* text_view, gboolean setting );
extern void gtk_text_view_set_extra_menu ( GtkTextView* text_view, GMenuModel* model );
extern void gtk_text_view_set_gutter ( GtkTextView* text_view, GtkTextWindowType win, GtkWidget* widget );
extern void gtk_text_view_set_indent ( GtkTextView* text_view, int indent );
extern void gtk_text_view_set_justification ( GtkTextView* text_view, GtkJustification justification );
extern void gtk_text_view_set_input_purpose ( GtkTextView* text_view, GtkInputPurpose purpose );
extern void gtk_text_view_set_input_hints ( GtkTextView* text_view, GtkInputHints hints );
extern void gtk_text_view_set_monospace ( GtkTextView* text_view, gboolean monospace );
extern void gtk_text_view_set_pixels_inside_wrap ( GtkTextView* text_view, int pixels_inside_wrap );
extern void gtk_text_view_set_left_margin ( GtkTextView* text_view, int left_margin );
extern void gtk_text_view_set_overwrite ( GtkTextView* text_view, gboolean overwrite );
extern void gtk_text_view_set_pixels_below_lines ( GtkTextView* text_view, int pixels_below_lines );
extern void gtk_text_view_set_pixels_above_lines ( GtkTextView* text_view, int pixels_above_lines );
extern void gtk_text_view_set_top_margin ( GtkTextView* text_view, int top_margin );
extern void gtk_text_view_set_right_margin ( GtkTextView* text_view, int right_margin );
extern void gtk_text_view_set_tabs ( GtkTextView* text_view, PangoTabArray* tabs );
extern void gtk_text_view_set_wrap_mode ( GtkTextView* text_view, GtkWrapMode wrap_mode );
extern void gtk_text_view_window_to_buffer_coords ( GtkTextView* text_view, GtkTextWindowType win, int window_x, int window_y, int* buffer_x, int* buffer_y );
extern gboolean gtk_text_view_starts_display_line ( GtkTextView* text_view, const GtkTextIter* iter );
