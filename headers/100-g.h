gboolean g_main_context_iteration(GMainContext* context, gboolean may_block);
gulong g_signal_connect_data(GObject* instance, const gchar* detailed_signal, GCallback c_handler, gpointer data, GClosureNotify destroy_data, GConnectFlags connect_flags);
