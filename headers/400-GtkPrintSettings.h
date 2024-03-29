extern GtkPrintSettings* gtk_print_settings_new_from_file ( const char* file_name, GError** error );
extern GtkPrintSettings* gtk_print_settings_new ( void );
extern GtkPrintSettings* gtk_print_settings_new_from_key_file ( GKeyFile* key_file, const char* group_name, GError** error );
extern GtkPrintSettings* gtk_print_settings_new_from_gvariant ( GVariant* variant );
extern const char* gtk_print_settings_get ( GtkPrintSettings* settings, const char* key );
extern gboolean gtk_print_settings_get_bool ( GtkPrintSettings* settings, const char* key );
extern void gtk_print_settings_foreach ( GtkPrintSettings* settings, GtkPrintSettingsFunc func, gpointer user_data );
extern gboolean gtk_print_settings_get_collate ( GtkPrintSettings* settings );
extern GtkPrintSettings* gtk_print_settings_copy ( GtkPrintSettings* other );
extern const char* gtk_print_settings_get_default_source ( GtkPrintSettings* settings );
extern const char* gtk_print_settings_get_dither ( GtkPrintSettings* settings );
extern double gtk_print_settings_get_double ( GtkPrintSettings* settings, const char* key );
extern const char* gtk_print_settings_get_finishings ( GtkPrintSettings* settings );
extern double gtk_print_settings_get_double_with_default ( GtkPrintSettings* settings, const char* key, double def );
extern GtkPrintDuplex gtk_print_settings_get_duplex ( GtkPrintSettings* settings );
extern int gtk_print_settings_get_int ( GtkPrintSettings* settings, const char* key );
extern double gtk_print_settings_get_length ( GtkPrintSettings* settings, const char* key, GtkUnit unit );
extern const char* gtk_print_settings_get_media_type ( GtkPrintSettings* settings );
extern int gtk_print_settings_get_int_with_default ( GtkPrintSettings* settings, const char* key, int def );
extern int gtk_print_settings_get_number_up ( GtkPrintSettings* settings );
extern int gtk_print_settings_get_n_copies ( GtkPrintSettings* settings );
extern GtkNumberUpLayout gtk_print_settings_get_number_up_layout ( GtkPrintSettings* settings );
extern GtkPageOrientation gtk_print_settings_get_orientation ( GtkPrintSettings* settings );
extern const char* gtk_print_settings_get_output_bin ( GtkPrintSettings* settings );
extern GtkPageRange* gtk_print_settings_get_page_ranges ( GtkPrintSettings* settings, int* num_ranges );
extern GtkPaperSize* gtk_print_settings_get_paper_size ( GtkPrintSettings* settings );
extern GtkPageSet gtk_print_settings_get_page_set ( GtkPrintSettings* settings );
extern double gtk_print_settings_get_paper_height ( GtkPrintSettings* settings, GtkUnit unit );
extern GtkPrintPages gtk_print_settings_get_print_pages ( GtkPrintSettings* settings );
extern const char* gtk_print_settings_get_printer ( GtkPrintSettings* settings );
extern double gtk_print_settings_get_paper_width ( GtkPrintSettings* settings, GtkUnit unit );
extern GtkPrintQuality gtk_print_settings_get_quality ( GtkPrintSettings* settings );
extern double gtk_print_settings_get_printer_lpi ( GtkPrintSettings* settings );
extern int gtk_print_settings_get_resolution_x ( GtkPrintSettings* settings );
extern int gtk_print_settings_get_resolution_y ( GtkPrintSettings* settings );
extern int gtk_print_settings_get_resolution ( GtkPrintSettings* settings );
extern double gtk_print_settings_get_scale ( GtkPrintSettings* settings );
extern gboolean gtk_print_settings_get_use_color ( GtkPrintSettings* settings );
extern gboolean gtk_print_settings_get_reverse ( GtkPrintSettings* settings );
extern gboolean gtk_print_settings_has_key ( GtkPrintSettings* settings, const char* key );
extern void gtk_print_settings_set ( GtkPrintSettings* settings, const char* key, const char* value );
extern gboolean gtk_print_settings_load_key_file ( GtkPrintSettings* settings, GKeyFile* key_file, const char* group_name, GError** error );
extern void gtk_print_settings_set_collate ( GtkPrintSettings* settings, gboolean collate );
extern gboolean gtk_print_settings_load_file ( GtkPrintSettings* settings, const char* file_name, GError** error );
extern void gtk_print_settings_set_default_source ( GtkPrintSettings* settings, const char* default_source );
extern void gtk_print_settings_set_dither ( GtkPrintSettings* settings, const char* dither );
extern void gtk_print_settings_set_finishings ( GtkPrintSettings* settings, const char* finishings );
extern void gtk_print_settings_set_bool ( GtkPrintSettings* settings, const char* key, gboolean value );
extern void gtk_print_settings_set_int ( GtkPrintSettings* settings, const char* key, int value );
extern void gtk_print_settings_set_duplex ( GtkPrintSettings* settings, GtkPrintDuplex duplex );
extern void gtk_print_settings_set_media_type ( GtkPrintSettings* settings, const char* media_type );
extern void gtk_print_settings_set_double ( GtkPrintSettings* settings, const char* key, double value );
extern void gtk_print_settings_set_length ( GtkPrintSettings* settings, const char* key, double value, GtkUnit unit );
extern void gtk_print_settings_set_n_copies ( GtkPrintSettings* settings, int num_copies );
extern void gtk_print_settings_set_number_up ( GtkPrintSettings* settings, int number_up );
extern void gtk_print_settings_set_output_bin ( GtkPrintSettings* settings, const char* output_bin );
extern void gtk_print_settings_set_orientation ( GtkPrintSettings* settings, GtkPageOrientation orientation );
extern void gtk_print_settings_set_page_ranges ( GtkPrintSettings* settings, GtkPageRange* page_ranges, int num_ranges );
extern void gtk_print_settings_set_page_set ( GtkPrintSettings* settings, GtkPageSet page_set );
extern void gtk_print_settings_set_number_up_layout ( GtkPrintSettings* settings, GtkNumberUpLayout number_up_layout );
extern void gtk_print_settings_set_paper_height ( GtkPrintSettings* settings, double height, GtkUnit unit );
extern void gtk_print_settings_set_paper_size ( GtkPrintSettings* settings, GtkPaperSize* paper_size );
extern void gtk_print_settings_set_paper_width ( GtkPrintSettings* settings, double width, GtkUnit unit );
extern void gtk_print_settings_set_print_pages ( GtkPrintSettings* settings, GtkPrintPages pages );
extern void gtk_print_settings_set_printer_lpi ( GtkPrintSettings* settings, double lpi );
extern void gtk_print_settings_set_printer ( GtkPrintSettings* settings, const char* printer );
extern void gtk_print_settings_set_quality ( GtkPrintSettings* settings, GtkPrintQuality quality );
extern void gtk_print_settings_set_reverse ( GtkPrintSettings* settings, gboolean reverse );
extern void gtk_print_settings_set_use_color ( GtkPrintSettings* settings, gboolean use_color );
extern void gtk_print_settings_set_resolution_xy ( GtkPrintSettings* settings, int resolution_x, int resolution_y );
extern void gtk_print_settings_set_scale ( GtkPrintSettings* settings, double scale );
extern void gtk_print_settings_set_resolution ( GtkPrintSettings* settings, int resolution );
extern gboolean gtk_print_settings_to_file ( GtkPrintSettings* settings, const char* file_name, GError** error );
extern GVariant* gtk_print_settings_to_gvariant ( GtkPrintSettings* settings );
extern void gtk_print_settings_to_key_file ( GtkPrintSettings* settings, GKeyFile* key_file, const char* group_name );
extern void gtk_print_settings_unset ( GtkPrintSettings* settings, const char* key );
