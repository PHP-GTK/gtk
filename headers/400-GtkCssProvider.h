extern void gtk_css_provider_load_from_path ( GtkCssProvider* css_provider, const char* path );
extern void gtk_css_provider_load_from_data ( GtkCssProvider* css_provider, const char* data, gssize length );
extern GtkCssProvider* gtk_css_provider_new ( void );
extern void gtk_css_provider_load_from_file ( GtkCssProvider* css_provider, GFile* file );
extern char* gtk_css_provider_to_string ( GtkCssProvider* provider );
extern void gtk_css_provider_load_named ( GtkCssProvider* provider, const char* name, const char* variant );
extern void gtk_css_provider_load_from_resource ( GtkCssProvider* css_provider, const char* resource_path );
