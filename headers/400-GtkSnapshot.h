extern void gtk_snapshot_append_color ( GtkSnapshot* snapshot, const GdkRGBA* color, const graphene_rect_t* bounds );
extern GtkSnapshot* gtk_snapshot_new ( void );
extern cairo_t* gtk_snapshot_append_cairo ( GtkSnapshot* snapshot, const graphene_rect_t* bounds );
extern void gtk_snapshot_append_conic_gradient ( GtkSnapshot* snapshot, const graphene_rect_t* bounds, const graphene_point_t* center, float rotation, const GskColorStop* stops, gsize n_stops );
extern void gtk_snapshot_append_border ( GtkSnapshot* snapshot, const GskRoundedRect* outline, const float* border_width, const GdkRGBA* border_color );
extern void gtk_snapshot_append_inset_shadow ( GtkSnapshot* snapshot, const GskRoundedRect* outline, const GdkRGBA* color, float dx, float dy, float spread, float blur_radius );
extern void gtk_snapshot_append_layout ( GtkSnapshot* snapshot, PangoLayout* layout, const GdkRGBA* color );
extern void gtk_snapshot_append_node ( GtkSnapshot* snapshot, GskRenderNode* node );
extern void gtk_snapshot_append_linear_gradient ( GtkSnapshot* snapshot, const graphene_rect_t* bounds, const graphene_point_t* start_point, const graphene_point_t* end_point, const GskColorStop* stops, gsize n_stops );
extern void gtk_snapshot_append_radial_gradient ( GtkSnapshot* snapshot, const graphene_rect_t* bounds, const graphene_point_t* center, float hradius, float vradius, float start, float end, const GskColorStop* stops, gsize n_stops );
extern void gtk_snapshot_append_repeating_linear_gradient ( GtkSnapshot* snapshot, const graphene_rect_t* bounds, const graphene_point_t* start_point, const graphene_point_t* end_point, const GskColorStop* stops, gsize n_stops );
extern GskRenderNode* gtk_snapshot_free_to_node ( GtkSnapshot* snapshot );
extern void gtk_snapshot_append_texture ( GtkSnapshot* snapshot, GdkTexture* texture, const graphene_rect_t* bounds );
extern void gtk_snapshot_append_outset_shadow ( GtkSnapshot* snapshot, const GskRoundedRect* outline, const GdkRGBA* color, float dx, float dy, float spread, float blur_radius );
extern void gtk_snapshot_append_repeating_radial_gradient ( GtkSnapshot* snapshot, const graphene_rect_t* bounds, const graphene_point_t* center, float hradius, float vradius, float start, float end, const GskColorStop* stops, gsize n_stops );
extern void gtk_snapshot_perspective ( GtkSnapshot* snapshot, float depth );
extern GdkPaintable* gtk_snapshot_free_to_paintable ( GtkSnapshot* snapshot, const graphene_size_t* size );
extern void gtk_snapshot_gl_shader_pop_texture ( GtkSnapshot* snapshot );
extern void gtk_snapshot_push_blend ( GtkSnapshot* snapshot, GskBlendMode blend_mode );
extern void gtk_snapshot_pop ( GtkSnapshot* snapshot );
extern void gtk_snapshot_push_clip ( GtkSnapshot* snapshot, const graphene_rect_t* bounds );
extern void gtk_snapshot_push_blur ( GtkSnapshot* snapshot, double radius );
extern void gtk_snapshot_push_color_matrix ( GtkSnapshot* snapshot, const graphene_matrix_t* color_matrix, const graphene_vec4_t* color_offset );
extern void gtk_snapshot_push_debug ( GtkSnapshot* snapshot, const char* message, ... );
extern void gtk_snapshot_push_opacity ( GtkSnapshot* snapshot, double opacity );
extern void gtk_snapshot_push_repeat ( GtkSnapshot* snapshot, const graphene_rect_t* bounds, const graphene_rect_t* child_bounds );
extern void gtk_snapshot_push_cross_fade ( GtkSnapshot* snapshot, double progress );
extern void gtk_snapshot_push_rounded_clip ( GtkSnapshot* snapshot, const GskRoundedRect* bounds );
extern void gtk_snapshot_push_gl_shader ( GtkSnapshot* snapshot, GskGLShader* shader, const graphene_rect_t* bounds, GBytes* take_args );
extern void gtk_snapshot_render_focus ( GtkSnapshot* snapshot, GtkStyleContext* context, double x, double y, double width, double height );
extern void gtk_snapshot_render_frame ( GtkSnapshot* snapshot, GtkStyleContext* context, double x, double y, double width, double height );
extern void gtk_snapshot_push_shadow ( GtkSnapshot* snapshot, const GskShadow* shadow, gsize n_shadows );
extern void gtk_snapshot_render_background ( GtkSnapshot* snapshot, GtkStyleContext* context, double x, double y, double width, double height );
extern void gtk_snapshot_restore ( GtkSnapshot* snapshot );
extern void gtk_snapshot_render_layout ( GtkSnapshot* snapshot, GtkStyleContext* context, double x, double y, PangoLayout* layout );
extern void gtk_snapshot_rotate_3d ( GtkSnapshot* snapshot, float angle, const graphene_vec3_t* axis );
extern void gtk_snapshot_rotate ( GtkSnapshot* snapshot, float angle );
extern void gtk_snapshot_render_insertion_cursor ( GtkSnapshot* snapshot, GtkStyleContext* context, double x, double y, PangoLayout* layout, int index, PangoDirection direction );
extern void gtk_snapshot_save ( GtkSnapshot* snapshot );
extern void gtk_snapshot_scale ( GtkSnapshot* snapshot, float factor_x, float factor_y );
extern GdkPaintable* gtk_snapshot_to_paintable ( GtkSnapshot* snapshot, const graphene_size_t* size );
extern GskRenderNode* gtk_snapshot_to_node ( GtkSnapshot* snapshot );
extern void gtk_snapshot_transform_matrix ( GtkSnapshot* snapshot, const graphene_matrix_t* matrix );
extern void gtk_snapshot_transform ( GtkSnapshot* snapshot, GskTransform* transform );
extern void gtk_snapshot_scale_3d ( GtkSnapshot* snapshot, float factor_x, float factor_y, float factor_z );
extern void gtk_snapshot_translate_3d ( GtkSnapshot* snapshot, const graphene_point3d_t* point );
extern void gtk_snapshot_translate ( GtkSnapshot* snapshot, const graphene_point_t* point );
