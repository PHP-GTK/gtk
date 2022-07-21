extern GMainLoop* g_main_loop_new (GMainContext* context, gboolean is_running);
extern void g_main_loop_run(GMainLoop* loop);
extern void g_main_loop_quit(GMainLoop* loop);
extern gboolean g_main_loop_is_running(GMainLoop* loop);
extern GMainLoop* g_main_loop_ref(GMainLoop* loop);
extern void g_main_loop_unref(GMainLoop* loop);