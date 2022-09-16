extern const char* gtk_builder_list_item_factory_get_resource ( GtkBuilderListItemFactory* self );
extern GBytes* gtk_builder_list_item_factory_get_bytes ( GtkBuilderListItemFactory* self );
extern GtkListItemFactory* gtk_builder_list_item_factory_new_from_bytes ( GtkBuilderScope* scope, GBytes* bytes );
extern GtkListItemFactory* gtk_builder_list_item_factory_new_from_resource ( GtkBuilderScope* scope, const char* resource_path );
extern GtkBuilderScope* gtk_builder_list_item_factory_get_scope ( GtkBuilderListItemFactory* self );
