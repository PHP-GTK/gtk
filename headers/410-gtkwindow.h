typedef struct _GtkWindow GtkWindow;
GtkWidget* gtk_window_new (void);
const char* gtk_window_get_title(GtkWindow* window);
void gtk_window_set_title(GtkWindow* window, const char* title);
void gtk_window_destroy(GtkWindow* window);