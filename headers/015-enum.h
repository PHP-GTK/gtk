typedef enum {
    G_CONNECT_AFTER = 1 << 0,
    G_CONNECT_SWAPPED = 1 << 1
} GConnectFlags;

typedef enum {
    G_SIGNAL_RUN_FIRST = 1 << 0,
    G_SIGNAL_RUN_LAST = 1 << 1,
    G_SIGNAL_RUN_CLEANUP = 1 << 2,
    G_SIGNAL_NO_RECURSE = 1 << 3,
    G_SIGNAL_DETAILED = 1 << 4,
    G_SIGNAL_ACTION = 1 << 5,
    G_SIGNAL_NO_HOOKS = 1 << 6,
    G_SIGNAL_MUST_COLLECT = 1 << 7,
    G_SIGNAL_DEPRECATED = 1 << 8
} GSignalFlags;

typedef enum {
  GTK_POS_LEFT,
  GTK_POS_RIGHT,
  GTK_POS_TOP,
  GTK_POS_BOTTOM
} GtkPositionType;

typedef enum {
  GTK_ORIENTATION_HORIZONTAL,
  GTK_ORIENTATION_VERTICAL,
} GtkOrientation;

typedef enum {
  GTK_SELECTION_NONE,
  GTK_SELECTION_SINGLE,
  GTK_SELECTION_BROWSE,
  GTK_SELECTION_MULTIPLE,
} GtkSelectionMode;

typedef enum {
GTK_STACK_TRANSITION_TYPE_NONE,
GTK_STACK_TRANSITION_TYPE_CROSSFADE,
GTK_STACK_TRANSITION_TYPE_SLIDE_RIGHT,
GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT,
GTK_STACK_TRANSITION_TYPE_SLIDE_UP,
GTK_STACK_TRANSITION_TYPE_SLIDE_DOWN,
GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT,
GTK_STACK_TRANSITION_TYPE_SLIDE_UP_DOWN,
GTK_STACK_TRANSITION_TYPE_OVER_UP,
GTK_STACK_TRANSITION_TYPE_OVER_DOWN,
GTK_STACK_TRANSITION_TYPE_OVER_LEFT,
GTK_STACK_TRANSITION_TYPE_OVER_RIGHT,
GTK_STACK_TRANSITION_TYPE_UNDER_UP,
GTK_STACK_TRANSITION_TYPE_UNDER_DOWN,
GTK_STACK_TRANSITION_TYPE_UNDER_LEFT,
GTK_STACK_TRANSITION_TYPE_UNDER_RIGHT,
GTK_STACK_TRANSITION_TYPE_OVER_UP_DOWN,
GTK_STACK_TRANSITION_TYPE_OVER_DOWN_UP,
GTK_STACK_TRANSITION_TYPE_OVER_LEFT_RIGHT,
GTK_STACK_TRANSITION_TYPE_OVER_RIGHT_LEFT,
GTK_STACK_TRANSITION_TYPE_ROTATE_LEFT,
GTK_STACK_TRANSITION_TYPE_ROTATE_RIGHT,
GTK_STACK_TRANSITION_TYPE_ROTATE_LEFT_RIGHT
} GtkStackTransitionType;

typedef enum {
  GTK_POLICY_ALWAYS,
  GTK_POLICY_AUTOMATIC,
  GTK_POLICY_NEVER,
  GTK_POLICY_EXTERNAL,
} GtkPolicyType;
