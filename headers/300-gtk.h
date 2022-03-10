typedef bool gboolean;
typedef struct _GMainContext GMainContext;
void gtk_init(void);
gboolean g_main_context_iteration(GMainContext* context, gboolean may_block);