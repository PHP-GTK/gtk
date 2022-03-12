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