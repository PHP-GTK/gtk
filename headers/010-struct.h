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
typedef struct _GtkEntry GtkEntry;
typedef struct _GtkEntryBuffer GtkEntryBuffer;
typedef struct _GtkText GtkText;
typedef struct _GtkTextBuffer GtkTextBuffer;
typedef struct _GtkTextTagTable GtkTextTagTable;
typedef struct _GMainLoop GMainLoop;
typedef struct _GtkEventController GtkEventController;
typedef struct _GVariant GVariant;
typedef struct _GdkFrameClock GdkFrameClock;
typedef struct _GskTransform GskTransform;
typedef struct _PangoContext PangoContext;
typedef struct _PangoLayout PangoLayout;
typedef struct _GtkAllocation GtkAllocation;
typedef struct _GdkClipboard GdkClipboard;
typedef struct _GdkCursor GdkCursor;
typedef struct _GdkDisplay GdkDisplay;
typedef struct _PangoFontMap PangoFontMap;
typedef struct _GtkTextDirection GtkTextDirection;
typedef struct _GtkAlign GtkAlign;
typedef struct _GtkLayoutManager GtkLayoutManager;
typedef struct _GtkNative GtkNative;
typedef struct _GtkOverflow GtkOverflow;
typedef struct _GtkRequisition GtkRequisition;
typedef struct _GtkRoot GtkRoot;
typedef struct _GtkSettings GtkSettings;
typedef struct _GActionGroup GActionGroup;
typedef struct _GListModel GListModel;
typedef struct _GtkSnapshot GtkSnapshot;
typedef struct _GtkWidgetClass GtkWidgetClass;
typedef struct _GtkShortcut GtkShortcut;
typedef struct _GVariantType GVariantType;
typedef struct _GBytes GBytes;
typedef struct _GtkBuilderScope GtkBuilderScope;
typedef struct _GdkMonitor GdkMonitor;
typedef struct _GtkApplication GtkApplication;
typedef struct _GtkWindowGroup GtkWindowGroup;
typedef struct _GtkCheckButton GtkCheckButton;
typedef struct _GtkColorButton GtkColorButton;
typedef struct _GtkFontButton GtkFontButton;
typedef struct _GtkGtkLinkButton GtkLinkButton;
typedef struct _GtkAdjustment GtkAdjustment;
typedef struct _GList GList;
typedef struct _GdkRGBA GdkRGBA;
struct _GList {
  gpointer data;
  GList* next;
  GList* prev;
};
struct _GdkRGBA {
  gdouble red;
  gdouble green;
  gdouble blue;
  gdouble alpha;
};
typedef gsize GType;
typedef void (*GClosureNotify) (gpointer data, GClosure *closure);
typedef gboolean(*GtkTickCallback)(GtkWidget* widget,GdkFrameClock* frame_clock,gpointer user_data);
typedef void* (*GCallback) (void*, void*);
typedef void (* GDestroyNotify)(gpointer data);
typedef gboolean (*GSourceFunc) (gpointer user_data);
typedef gboolean (* GtkShortcutFunc) (GtkWidget* widget,GVariant* args,gpointer user_data);
typedef void (* GtkWidgetActionActivateFunc) (GtkWidget* widget,const char* action_name,GVariant* parameter);
typedef GtkWidget* (* GtkListBoxCreateWidgetFunc) (GObject* item, gpointer user_data);
typedef void (* GtkListBoxForeachFunc) (GtkListBox* box, GtkListBoxRow* row, gpointer user_data);
typedef gboolean (* GtkListBoxFilterFunc) (GtkListBoxRow* row, gpointer user_data);
typedef void (* GtkListBoxUpdateHeaderFunc) (GtkListBoxRow* row, GtkListBoxRow* before, gpointer user_data);
typedef int (* GtkListBoxSortFunc) (GtkListBoxRow* row1, GtkListBoxRow* row2, gpointer user_data);
