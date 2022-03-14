typedef struct _GClosure GClosure;
typedef struct _GMainContext GMainContext;
typedef struct _GtkWidget GtkWidget;
typedef struct _GtkWindow GtkWindow;
typedef struct _GObject GObject;
typedef struct _GtkGrid GtkGrid;
typedef void (*GClosureNotify) (gpointer data, GClosure *closure);
typedef void* (*GCallback) (void*, void*);