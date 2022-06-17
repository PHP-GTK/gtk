typedef struct _GClosure GClosure;
typedef struct _GMainContext GMainContext;
typedef struct _GtkWidget GtkWidget;
typedef struct _GtkWindow GtkWindow;
typedef struct _GObject GObject;
typedef struct _GtkGrid GtkGrid;
typedef struct _GtkBox GtkBox;
typedef struct _GtkComboBoxText GtkComboBoxText;
typedef struct _GtkListBox GtkListBox;
typedef struct _GtkListBoxRow GtkListBoxRow;
typedef struct _GtkStack GtkStack;
typedef struct _GtkLabel GtkLabel;
typedef struct _GtkStackSwitcher GtkStackSwitcher;
typedef struct _GtkStackPage GtkStackPage;
typedef struct _GtkHeaderBar GtkHeaderBar;
typedef struct _GtkButton GtkButton;
typedef struct _GtkScrolledWindow GtkScrolledWindow;
typedef struct _GtkFlowBox GtkFlowBox;
typedef struct _GtkStyleContext GtkStyleContext;
typedef struct _GtkToggleButton GtkToggleButton;
typedef struct _GtkEntryBuffer GtkEntryBuffer;
typedef void (*GClosureNotify) (gpointer data, GClosure *closure);
typedef void* (*GCallback) (void*, void*);
typedef gboolean (*GSourceFunc) (gpointer user_data);
