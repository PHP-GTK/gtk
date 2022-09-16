extern gboolean gtk_icon_paintable_is_symbolic ( GtkIconPaintable* self );
extern GtkIconPaintable* gtk_icon_paintable_new_for_file ( GFile* file, int size, int scale );
extern GFile* gtk_icon_paintable_get_file ( GtkIconPaintable* self );
extern const char* gtk_icon_paintable_get_icon_name ( GtkIconPaintable* self );
