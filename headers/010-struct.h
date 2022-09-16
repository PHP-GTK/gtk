typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;
typedef struct {
long long __max_align_ll;
long double __max_align_ld;
} max_align_t;
typedef signed char gint8;
typedef unsigned char guint8;
typedef signed short gint16;
typedef unsigned short guint16;
typedef signed int gint32;
typedef unsigned int guint32;
typedef signed long gint64;
typedef unsigned long guint64;
typedef signed long gssize;
typedef unsigned long gsize;
typedef gint64 goffset;
typedef signed long gintptr;
typedef unsigned long guintptr;
typedef int GPid;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
struct tm
{
int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;
long int tm_gmtoff;
const char *tm_zone;
};
struct timespec
{
__time_t tv_sec;
__syscall_slong_t tv_nsec;
};
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
struct itimerspec
{
struct timespec it_interval;
struct timespec it_value;
};
struct sigevent;
typedef __pid_t pid_t;
struct __locale_struct
{
struct __locale_data *__locales[13];
const unsigned short int *__ctype_b;
const int *__ctype_tolower;
const int *__ctype_toupper;
const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
typedef char gchar;
typedef short gshort;
typedef long glong;
typedef int gint;
typedef gint gboolean;
typedef unsigned char guchar;
typedef unsigned short gushort;
typedef unsigned long gulong;
typedef unsigned int guint;
typedef float gfloat;
typedef double gdouble;
typedef void* gpointer;
typedef const void *gconstpointer;
typedef gint (*GCompareFunc) (gconstpointer a,gconstpointer b);
typedef gint (*GCompareDataFunc) (gconstpointer a,gconstpointer b,gpointer user_data);
typedef gboolean (*GEqualFunc) (gconstpointer a,gconstpointer b);
typedef void (*GDestroyNotify) (gpointer data);
typedef void (*GFunc) (gpointer data,gpointer user_data);
typedef guint (*GHashFunc) (gconstpointer key);
typedef void (*GHFunc) (gpointer key,gpointer value,gpointer user_data);
typedef gpointer (*GCopyFunc) (gconstpointer src,gpointer data);
typedef void (*GFreeFunc) (gpointer data);
typedef const gchar * (*GTranslateFunc) (const gchar *str,gpointer data);
typedef union _GDoubleIEEE754 GDoubleIEEE754;
typedef union _GFloatIEEE754 GFloatIEEE754;
union _GFloatIEEE754
{
gfloat v_float;
struct {
guint mantissa : 23;
guint biased_exponent : 8;
guint sign : 1;
} mpn;
};
union _GDoubleIEEE754
{
gdouble v_double;
struct {
guint mantissa_low : 32;
guint mantissa_high : 20;
guint biased_exponent : 11;
guint sign : 1;
} mpn;
};
typedef struct _GTimeVal GTimeVal;
struct _GTimeVal
{
glong tv_sec;
glong tv_usec;
};
typedef int hb_direction_t;
typedef int hb_script_t;
typedef int hb_memory_mode_t;
typedef int hb_unicode_general_category_t;
typedef int hb_unicode_combining_class_t;
typedef int hb_glyph_flags_t;
typedef int GTlsRehandshakeMode;
typedef int GtkToolPaletteDragTargets;
typedef int GTokenType;
typedef int GTestTrapFlags;
typedef int GThreadPriority;
typedef int GTypeDebugFlags;
typedef int hb_buffer_content_type_t;
typedef int hb_buffer_flags_t;
typedef int hb_buffer_cluster_level_t;
typedef int hb_buffer_serialize_flags_t;
typedef int hb_buffer_serialize_format_t;
typedef int hb_buffer_diff_flags_t;
typedef int cairo_status_t;
typedef int cairo_content_t;
typedef int cairo_format_t;
typedef int cairo_operator_t;
typedef int cairo_antialias_t;
typedef int cairo_fill_rule_t;
typedef int cairo_line_cap_t;
typedef int cairo_line_join_t;
typedef int cairo_text_cluster_flags_t;
typedef int cairo_font_slant_t;
typedef int cairo_font_weight_t;
typedef int cairo_subpixel_order_t;
typedef int cairo_hint_style_t;
typedef int cairo_hint_metrics_t;
typedef int cairo_font_type_t;
typedef int cairo_path_data_type_t;
typedef int cairo_device_type_t;
typedef int cairo_surface_observer_mode_t;
typedef int cairo_surface_type_t;
typedef int cairo_pattern_type_t;
typedef int cairo_extend_t;
typedef int cairo_filter_t;
typedef int cairo_region_overlap_t;
typedef int AtkCoordType;
typedef int AtkValueType;
typedef int GUserDirectory;
typedef int GFormatSizeFlags;
typedef int GThreadError;
typedef int GOnceStatus;
typedef int GBookmarkFileError;
typedef int GChecksumType;
typedef int GConvertError;
typedef int GDateDMY;
typedef int GDateWeekday;
typedef int GDateMonth;
typedef int GTimeType;
typedef int GFileError;
typedef int GFileTest;
typedef int GTraverseFlags;
typedef int GTraverseType;
typedef int GHookFlagMask;
typedef int GIOCondition;
typedef int GUnicodeType;
typedef int GUnicodeBreakType;
typedef int GUnicodeScript;
typedef int GNormalizeMode;
typedef int GIOError;
typedef int GIOChannelError;
typedef int GIOStatus;
typedef int GSeekType;
typedef int GIOFlags;
typedef int GKeyFileError;
typedef int GKeyFileFlags;
typedef int GMarkupError;
typedef int GMarkupParseFlags;
typedef int GMarkupCollectType;
typedef int GVariantClass;
typedef int GVariantParseError;
typedef int GLogLevelFlags;
typedef int GLogWriterOutput;
typedef int GOptionFlags;
typedef int GOptionArg;
typedef int GOptionError;
typedef int GRegexError;
typedef int GRegexCompileFlags;
typedef int GRegexMatchFlags;
typedef int GErrorType;
typedef int GShellError;
typedef int GSliceConfig;
typedef int GSpawnError;
typedef int GSpawnFlags;
typedef int GAsciiType;
typedef int GNumberParserError;
typedef int GTestSubprocessFlags;
typedef int GTestResult;
typedef int GTestLogType;
typedef int GTestFileType;
typedef int GTypeFundamentalFlags;
typedef int GTypeFlags;
typedef int GParamFlags;
typedef int GSignalMatchType;
typedef int GBindingFlags;
typedef int GAppInfoCreateFlags;
typedef int GConverterFlags;
typedef int GConverterResult;
typedef int GDataStreamByteOrder;
typedef int GDataStreamNewlineType;
typedef int GFileAttributeType;
typedef int GFileAttributeInfoFlags;
typedef int GFileAttributeStatus;
typedef int GFileQueryInfoFlags;
typedef int GFileCreateFlags;
typedef int GFileMeasureFlags;
typedef int GMountMountFlags;
typedef int GMountUnmountFlags;
typedef int GDriveStartFlags;
typedef int GDriveStartStopType;
typedef int GFileCopyFlags;
typedef int GFileMonitorFlags;
typedef int GFileType;
typedef int GFilesystemPreviewType;
typedef int GFileMonitorEvent;
typedef int GIOErrorEnum;
typedef int GAskPasswordFlags;
typedef int GPasswordSave;
typedef int GMountOperationResult;
typedef int GOutputStreamSpliceFlags;
typedef int GIOStreamSpliceFlags;
typedef int GEmblemOrigin;
typedef int GResolverError;
typedef int GResolverRecordType;
typedef int GResourceError;
typedef int GResourceFlags;
typedef int GResourceLookupFlags;
typedef int GSocketFamily;
typedef int GSocketType;
typedef int GSocketMsgFlags;
typedef int GSocketProtocol;
typedef int GZlibCompressorFormat;
typedef int GUnixSocketAddressType;
typedef int GBusType;
typedef int GBusNameOwnerFlags;
typedef int GBusNameWatcherFlags;
typedef int GDBusProxyFlags;
typedef int GDBusError;
typedef int GDBusConnectionFlags;
typedef int GDBusCapabilityFlags;
typedef int GDBusCallFlags;
typedef int GDBusMessageType;
typedef int GDBusMessageFlags;
typedef int GDBusMessageHeaderField;
typedef int GDBusPropertyInfoFlags;
typedef int GDBusSubtreeFlags;
typedef int GDBusServerFlags;
typedef int GDBusSignalFlags;
typedef int GDBusSendMessageFlags;
typedef int GCredentialsType;
typedef int GDBusMessageByteOrder;
typedef int GTlsError;
typedef int GTlsCertificateFlags;
typedef int GTlsAuthenticationMode;
typedef int GTlsPasswordFlags;
typedef int GTlsInteractionResult;
typedef int GDBusInterfaceSkeletonFlags;
typedef int GDBusObjectManagerClientFlags;
typedef int GTlsDatabaseVerifyFlags;
typedef int GTlsDatabaseLookupFlags;
typedef int GTlsCertificateRequestFlags;
typedef int GIOModuleScopeFlags;
typedef int GSocketClientEvent;
typedef int GSocketListenerEvent;
typedef int GTestDBusFlags;
typedef int GSubprocessFlags;
typedef int GNotificationPriority;
typedef int GNetworkConnectivity;
typedef int GPollableReturn;
typedef int GModuleFlags;
typedef int GResolverNameLookupFlags;
typedef int GSettingsBindFlags;
typedef int PangoCoverageLevel;
typedef int PangoGravity;
typedef int PangoGravityHint;
typedef int PangoScript;
typedef int PangoDirection;
typedef int PangoBidiType;
typedef int PangoStyle;
typedef int PangoVariant;
typedef int PangoWeight;
typedef int PangoStretch;
typedef int PangoFontMask;
typedef int PangoAttrType;
typedef int PangoUnderline;
typedef int PangoShowFlags;
typedef int PangoShapeFlags;
typedef int PangoTabAlign;
typedef int PangoAlignment;
typedef int PangoWrapMode;
typedef int PangoRenderPart;
typedef int GdkByteOrder;
typedef int GdkModifierIntent;
typedef int GdkStatus;
typedef int GdkGrabStatus;
typedef int GdkGrabOwnership;
typedef int GdkEventMask;
typedef int GdkGLError;
typedef int GdkWindowTypeHint;
typedef int GdkAxisUse;
typedef int GdkAxisFlags;
typedef int GdkInputSource;
typedef int GdkInputMode;
typedef int GdkDeviceType;
typedef int GdkDragAction;
typedef int GdkDragCancelReason;
typedef int GdkDragProtocol;
typedef int GdkDeviceToolType;
typedef int GdkFilterReturn;
typedef int GdkEventType;
typedef int GdkVisibilityState;
typedef int GdkTouchpadGesturePhase;
typedef int GdkScrollDirection;
typedef int GdkNotifyType;
typedef int GdkCrossingMode;
typedef int GdkPropertyState;
typedef int GdkWindowState;
typedef int GdkSettingAction;
typedef int GdkOwnerChange;
typedef int GdkFrameClockPhase;
typedef int GdkWindowWindowClass;
typedef int GdkWindowType;
typedef int GdkWindowAttributesType;
typedef int GdkWindowHints;
typedef int GdkWMDecoration;
typedef int GdkWMFunction;
typedef int GdkGravity;
typedef int GdkAnchorHints;
typedef int GdkWindowEdge;
typedef int GdkFullscreenMode;
typedef int GdkSeatCapabilities;
typedef int GdkSubpixelLayout;
typedef int GdkPixbufAlphaMode;
typedef int GdkColorspace;
typedef int GdkPixbufError;
typedef int GdkInterpType;
typedef int GdkPixbufRotation;
typedef int GdkCursorType;
typedef int GdkDevicePadFeature;
typedef int GdkPropMode;
typedef int GdkVisualType;
typedef int GtkAlign;
typedef int GtkArrowType;
typedef int GtkDeleteType;
typedef int GtkTextDirection;
typedef int GtkJustification;
typedef int GtkMenuDirectionType;
typedef int GtkMovementStep;
typedef int GtkScrollStep;
typedef int GtkPackType;
typedef int GtkReliefStyle;
typedef int GtkScrollType;
typedef int GtkShadowType;
typedef int GtkStateType;
typedef int GtkToolbarStyle;
typedef int GtkWrapMode;
typedef int GtkIMPreeditStyle;
typedef int GtkIMStatusStyle;
typedef int GtkPackDirection;
typedef int GtkPrintPages;
typedef int GtkPageSet;
typedef int GtkNumberUpLayout;
typedef int GtkPageOrientation;
typedef int GtkPrintQuality;
typedef int GtkPrintDuplex;
typedef int GtkUnit;
typedef int GtkTreeViewGridLines;
typedef int GtkDragResult;
typedef int GtkSizeGroupMode;
typedef int GtkScrollablePolicy;
typedef int GtkRegionFlags;
typedef int GtkJunctionSides;
typedef int GtkBorderStyle;
typedef int GtkLevelBarMode;
typedef int GtkPropagationPhase;
typedef int GtkEventSequenceState;
typedef int GtkPanDirection;
typedef int GtkPopoverConstraint;
typedef int GtkAccelFlags;
typedef int AtkStateType;
typedef int AtkRelationType;
typedef int AtkRole;
typedef int AtkLayer;
typedef int AtkKeyEventType;
typedef int AtkScrollType;
typedef int AtkTextAttribute;
typedef int AtkTextBoundary;
typedef int AtkTextGranularity;
typedef int AtkTextClipType;
typedef int AtkHyperlinkStateFlags;
typedef int GtkWidgetHelpType;
typedef int GtkResizeMode;
typedef int GtkWindowType;
typedef int GtkWindowPosition;
typedef int GtkResponseType;
typedef int GtkLicense;
typedef int GtkArrowPlacement;
typedef int GtkTreeModelFlags;
typedef int GtkCellRendererMode;
typedef int GtkTreeViewColumnSizing;
typedef int GtkTextSearchFlags;
typedef int GtkTargetFlags;
typedef int GtkTreeViewDropPosition;
typedef int GtkButtonBoxStyle;
typedef int GtkBuilderError;
typedef int GtkCalendarDisplayOptions;
typedef int GtkCellRendererAccelMode;
typedef int GtkCssSectionType;
typedef int GtkCssProviderError;
typedef int GtkDebugFlag;
typedef int GtkDestDefaults;
typedef int GtkFileFilterFlags;
typedef int GtkFileChooserAction;
typedef int GtkFileChooserConfirmation;
typedef int GtkFileChooserError;
typedef int GtkFontChooserLevel;
typedef int GtkStyleContextPrintFlags;
typedef int GtkIconThemeError;
typedef int GtkButtonsType;
typedef int GtkButtonRole;
typedef int GtkNotebookTab;
typedef int GtkPadActionType;
typedef int GtkPlacesOpenFlags;
typedef int GtkPrintStatus;
typedef int GtkPrintOperationResult;
typedef int GtkPrintOperationAction;
typedef int GtkPrintError;
typedef int GtkRecentManagerError;
typedef int GtkRecentFilterFlags;
typedef int GtkRecentSortType;
typedef int GtkRecentChooserError;
typedef int GtkRevealerTransitionType;
typedef int GtkShortcutType;
typedef int GtkSpinButtonUpdatePolicy;
typedef int GtkSpinType;
typedef int GtkTextBufferTargetInfo;
typedef int GtkTextWindowType;
typedef int GtkTextViewLayer;
typedef int GtkTextExtendSelection;
typedef int GtkToolbarSpaceStyle;
typedef int GtkRcFlags;
typedef int GtkRcTokenType;
typedef int GtkPathPriorityType;
typedef int GtkPathType;
typedef int GtkExpanderStyle;
typedef int GtkAttachOptions;
typedef int GtkUIManagerItemType;
typedef gint grefcount;
typedef volatile gint gatomicrefcount;
typedef struct _GBytes GBytes;
typedef struct _GArray GArray;
typedef struct _GByteArray GByteArray;
typedef struct _GPtrArray GPtrArray;
struct _GArray
{
gchar *data;
guint len;
};
struct _GByteArray
{
guint8 *data;
guint len;
};
struct _GPtrArray
{
gpointer *pdata;
guint len;
};
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef guint32 GQuark;
typedef struct _GError GError;
struct _GError
{
GQuark domain;
gint code;
gchar *message;
};
typedef struct _GDebugKey GDebugKey;
struct _GDebugKey
{
const gchar *key;
guint value;
};
typedef void (*GVoidFunc) (void);
typedef struct
{
int quot;
int rem;
} div_t;
typedef struct
{
long int quot;
long int rem;
} ldiv_t;
typedef struct
{
long long int quot;
long long int rem;
} lldiv_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t;
typedef struct
{
unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timeval
{
__time_t tv_sec;
__suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct
{
__fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
} fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
struct __pthread_rwlock_arch_t
{
unsigned int __readers;
unsigned int __writers;
unsigned int __wrphase_futex;
unsigned int __writers_futex;
unsigned int __pad3;
unsigned int __pad4;
int __cur_writer;
int __shared;
signed char __rwelision;
unsigned char __pad1[7];
unsigned long int __pad2;
unsigned int __flags;
};
typedef struct __pthread_internal_list
{
struct __pthread_internal_list *__prev;
struct __pthread_internal_list *__next;
} __pthread_list_t;
struct __pthread_mutex_s
{
int __lock;
unsigned int __count;
int __owner;
unsigned int __nusers;
int __kind;
short __spins; short __elision;
__pthread_list_t __list;
};
struct __pthread_cond_s
{
union
{
unsigned long long int __wseq;
struct
{
unsigned int __low;
unsigned int __high;
} __wseq32;
};
union
{
unsigned long long int __g1_start;
struct
{
unsigned int __low;
unsigned int __high;
} __g1_start32;
};
unsigned int __g_refs[2];
unsigned int __g_size[2];
unsigned int __g1_orig_size;
unsigned int __wrefs;
unsigned int __g_signals[2];
};
typedef unsigned long int pthread_t;
typedef union
{
char __size[4];
int __align;
} pthread_mutexattr_t;
typedef union
{
char __size[4];
int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[56];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
struct __pthread_mutex_s __data;
char __size[40];
long int __align;
} pthread_mutex_t;
typedef union
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
} pthread_cond_t;
typedef union
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
} pthread_rwlock_t;
typedef union
{
char __size[8];
long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
char __size[32];
long int __align;
} pthread_barrier_t;
typedef union
{
char __size[4];
int __align;
} pthread_barrierattr_t;
struct random_data
{
int32_t *fptr;
int32_t *rptr;
int32_t *state;
int rand_type;
int rand_deg;
int rand_sep;
int32_t *end_ptr;
};
struct drand48_data
{
unsigned short int __x[3];
unsigned short int __old_x[3];
unsigned short int __c;
unsigned short int __init;
unsigned long long int __a;
};
typedef int (*__compar_fn_t) (const void *, const void *);
typedef gpointer (*GThreadFunc) (gpointer data);
typedef struct _GThread GThread;
typedef union _GMutex GMutex;
typedef struct _GRecMutex GRecMutex;
typedef struct _GRWLock GRWLock;
typedef struct _GCond GCond;
typedef struct _GPrivate GPrivate;
typedef struct _GOnce GOnce;
union _GMutex
{
gpointer p;
guint i[2];
};
struct _GRWLock
{
gpointer p;
guint i[2];
};
struct _GCond
{
gpointer p;
guint i[2];
};
struct _GRecMutex
{
gpointer p;
guint i[2];
};
struct _GPrivate
{
gpointer p;
GDestroyNotify notify;
gpointer future[2];
};
struct _GOnce
{
volatile GOnceStatus status;
volatile gpointer retval;
};
typedef void GMutexLocker;
typedef void GRecMutexLocker;
typedef void GRWLockWriterLocker;
typedef void GRWLockReaderLocker;
typedef struct _GAsyncQueue GAsyncQueue;
typedef __sig_atomic_t sig_atomic_t;
union sigval
{
int sival_int;
void *sival_ptr;
};
typedef union sigval __sigval_t;
typedef struct
{
int si_signo;
int si_errno;
int si_code;
int __pad0;
union
{
int _pad[((128 / sizeof (int)) - 4)];
struct
{
__pid_t si_pid;
__uid_t si_uid;
} _kill;
struct
{
int si_tid;
int si_overrun;
__sigval_t si_sigval;
} _timer;
struct
{
__pid_t si_pid;
__uid_t si_uid;
__sigval_t si_sigval;
} _rt;
struct
{
__pid_t si_pid;
__uid_t si_uid;
int si_status;
__clock_t si_utime;
__clock_t si_stime;
} _sigchld;
struct
{
void *si_addr;
short int si_addr_lsb;
union
{
struct
{
void *_lower;
void *_upper;
} _addr_bnd;
__uint32_t _pkey;
} _bounds;
} _sigfault;
struct
{
long int si_band;
int si_fd;
} _sigpoll;
struct
{
void *_call_addr;
int _syscall;
unsigned int _arch;
} _sigsys;
} _sifields;
} siginfo_t;
typedef __sigval_t sigval_t;
typedef struct sigevent
{
__sigval_t sigev_value;
int sigev_signo;
int sigev_notify;
union
{
int _pad[((64 / sizeof (int)) - 4)];
__pid_t _tid;
struct
{
void (*_function) (__sigval_t);
pthread_attr_t *_attribute;
} _sigev_thread;
} _sigev_un;
} sigevent_t;
typedef void (*__sighandler_t) (int);
typedef __sighandler_t sig_t;
struct sigaction
{
union
{
__sighandler_t sa_handler;
void (*sa_sigaction) (int, siginfo_t *, void *);
}
__sigaction_handler;
__sigset_t sa_mask;
int sa_flags;
void (*sa_restorer) (void);
};
struct _fpx_sw_bytes
{
__uint32_t magic1;
__uint32_t extended_size;
__uint64_t xstate_bv;
__uint32_t xstate_size;
__uint32_t __glibc_reserved1[7];
};
struct _fpreg
{
unsigned short significand[4];
unsigned short exponent;
};
struct _fpxreg
{
unsigned short significand[4];
unsigned short exponent;
unsigned short __glibc_reserved1[3];
};
struct _xmmreg
{
__uint32_t element[4];
};
struct _fpstate
{
__uint16_t cwd;
__uint16_t swd;
__uint16_t ftw;
__uint16_t fop;
__uint64_t rip;
__uint64_t rdp;
__uint32_t mxcsr;
__uint32_t mxcr_mask;
struct _fpxreg _st[8];
struct _xmmreg _xmm[16];
__uint32_t __glibc_reserved1[24];
};
struct sigcontext
{
__uint64_t r8;
__uint64_t r9;
__uint64_t r10;
__uint64_t r11;
__uint64_t r12;
__uint64_t r13;
__uint64_t r14;
__uint64_t r15;
__uint64_t rdi;
__uint64_t rsi;
__uint64_t rbp;
__uint64_t rbx;
__uint64_t rdx;
__uint64_t rax;
__uint64_t rcx;
__uint64_t rsp;
__uint64_t rip;
__uint64_t eflags;
unsigned short cs;
unsigned short gs;
unsigned short fs;
unsigned short __pad0;
__uint64_t err;
__uint64_t trapno;
__uint64_t oldmask;
__uint64_t cr2;
union
{
struct _fpstate * fpstate;
__uint64_t __fpstate_word;
};
__uint64_t __reserved1 [8];
};
struct _xsave_hdr
{
__uint64_t xstate_bv;
__uint64_t __glibc_reserved1[2];
__uint64_t __glibc_reserved2[5];
};
struct _ymmh_state
{
__uint32_t ymmh_space[64];
};
struct _xstate
{
struct _fpstate fpstate;
struct _xsave_hdr xstate_hdr;
struct _ymmh_state ymmh;
};
typedef struct
{
void *ss_sp;
int ss_flags;
size_t ss_size;
} stack_t;
typedef long long int greg_t;
typedef greg_t gregset_t[23];
struct _libc_fpxreg
{
unsigned short int significand[4];
unsigned short int exponent;
unsigned short int __glibc_reserved1[3];
};
struct _libc_xmmreg
{
__uint32_t element[4];
};
struct _libc_fpstate
{
__uint16_t cwd;
__uint16_t swd;
__uint16_t ftw;
__uint16_t fop;
__uint64_t rip;
__uint64_t rdp;
__uint32_t mxcsr;
__uint32_t mxcr_mask;
struct _libc_fpxreg _st[8];
struct _libc_xmmreg _xmm[16];
__uint32_t __glibc_reserved1[24];
};
typedef struct _libc_fpstate *fpregset_t;
typedef struct
{
gregset_t gregs;
fpregset_t fpregs;
unsigned long long __reserved1 [8];
} mcontext_t;
typedef struct ucontext_t
{
unsigned long int uc_flags;
struct ucontext_t *uc_link;
stack_t uc_stack;
mcontext_t uc_mcontext;
sigset_t uc_sigmask;
struct _libc_fpstate __fpregs_mem;
unsigned long long int __ssp[4];
} ucontext_t;
struct sigstack
{
void *ss_sp;
int ss_onstack;
};
typedef struct _GBookmarkFile GBookmarkFile;
typedef struct _GChecksum GChecksum;
typedef struct _GIConv *GIConv;
typedef struct _GData GData;
typedef void (*GDataForeachFunc) (GQuark key_id,
gpointer data,
gpointer user_data);
typedef gpointer (*GDuplicateFunc) (gpointer data, gpointer user_data);
typedef gint32 GTime;
typedef guint16 GDateYear;
typedef guint8 GDateDay;
typedef struct _GDate GDate;
struct _GDate
{
guint julian_days : 32;
guint julian : 1;
guint dmy : 1;
guint day : 6;
guint month : 4;
guint year : 16;
};
typedef struct _GTimeZone GTimeZone;
typedef gint64 GTimeSpan;
typedef struct _GDateTime GDateTime;
struct dirent
{
__ino_t d_ino;
__off_t d_off;
unsigned short int d_reclen;
unsigned char d_type;
char d_name[256];
};
typedef struct __dirstream DIR;
typedef struct _GDir GDir;
typedef struct _GMemVTable GMemVTable;
struct _GMemVTable {
gpointer (*malloc) (gsize n_bytes);
gpointer (*realloc) (gpointer mem,
gsize n_bytes);
void (*free) (gpointer mem);
gpointer (*calloc) (gsize n_blocks,
gsize n_block_bytes);
gpointer (*try_malloc) (gsize n_bytes);
gpointer (*try_realloc) (gpointer mem,
gsize n_bytes);
};
typedef struct _GNode GNode;
typedef gboolean (*GNodeTraverseFunc) (GNode *node,
gpointer data);
typedef void (*GNodeForeachFunc) (GNode *node,
gpointer data);
struct _GNode
{
gpointer data;
GNode *next;
GNode *prev;
GNode *parent;
GNode *children;
};
typedef struct _GList GList;
struct _GList
{
gpointer data;
GList *next;
GList *prev;
};
typedef struct _GHashTable GHashTable;
typedef gboolean (*GHRFunc) (gpointer key,
gpointer value,
gpointer user_data);
typedef struct _GHashTableIter GHashTableIter;
struct _GHashTableIter
{
gpointer dummy1;
gpointer dummy2;
gpointer dummy3;
int dummy4;
gboolean dummy5;
gpointer dummy6;
};
typedef struct _GHmac GHmac;
typedef struct _GHook GHook;
typedef struct _GHookList GHookList;
typedef gint (*GHookCompareFunc) (GHook *new_hook,
GHook *sibling);
typedef gboolean (*GHookFindFunc) (GHook *hook,
gpointer data);
typedef void (*GHookMarshaller) (GHook *hook,
gpointer marshal_data);
typedef gboolean (*GHookCheckMarshaller) (GHook *hook,
gpointer marshal_data);
typedef void (*GHookFunc) (gpointer data);
typedef gboolean (*GHookCheckFunc) (gpointer data);
typedef void (*GHookFinalizeFunc) (GHookList *hook_list,
GHook *hook);
struct _GHookList
{
gulong seq_id;
guint hook_size : 16;
guint is_setup : 1;
GHook *hooks;
gpointer dummy3;
GHookFinalizeFunc finalize_hook;
gpointer dummy[2];
};
struct _GHook
{
gpointer data;
GHook *next;
GHook *prev;
guint ref_count;
gulong hook_id;
guint flags;
gpointer func;
GDestroyNotify destroy;
};
typedef struct _GPollFD GPollFD;
typedef gint (*GPollFunc) (GPollFD *ufds,
guint nfsd,
gint timeout_);
struct _GPollFD
{
gint fd;
gushort events;
gushort revents;
};
typedef struct _GSList GSList;
struct _GSList
{
gpointer data;
GSList *next;
};
typedef struct _GMainContext GMainContext;
typedef struct _GMainLoop GMainLoop;
typedef struct _GSource GSource;
typedef struct _GSourcePrivate GSourcePrivate;
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;
typedef struct _GSourceFuncs GSourceFuncs;
typedef gboolean (*GSourceFunc) (gpointer user_data);
typedef void (*GChildWatchFunc) (GPid pid,
gint status,
gpointer user_data);
struct _GSource
{
gpointer callback_data;
GSourceCallbackFuncs *callback_funcs;
const GSourceFuncs *source_funcs;
guint ref_count;
GMainContext *context;
gint priority;
guint flags;
guint source_id;
GSList *poll_fds;
GSource *prev;
GSource *next;
char *name;
GSourcePrivate *priv;
};
struct _GSourceCallbackFuncs
{
void (*ref) (gpointer cb_data);
void (*unref) (gpointer cb_data);
void (*get) (gpointer cb_data,
GSource *source,
GSourceFunc *func,
gpointer *data);
};
typedef void (*GSourceDummyMarshal) (void);
struct _GSourceFuncs
{
gboolean (*prepare) (GSource *source,
gint *timeout_);
gboolean (*check) (GSource *source);
gboolean (*dispatch) (GSource *source,
GSourceFunc callback,
gpointer user_data);
void (*finalize) (GSource *source);
GSourceFunc closure_callback;
GSourceDummyMarshal closure_marshal;
};
typedef void (* GClearHandleFunc) (guint handle_id);
typedef guint32 gunichar;
typedef guint16 gunichar2;
typedef struct _GString GString;
struct _GString
{
gchar *str;
gsize len;
gsize allocated_len;
};
typedef struct _GIOChannel GIOChannel;
typedef struct _GIOFuncs GIOFuncs;
struct _GIOChannel
{
gint ref_count;
GIOFuncs *funcs;
gchar *encoding;
GIConv read_cd;
GIConv write_cd;
gchar *line_term;
guint line_term_len;
gsize buf_size;
GString *read_buf;
GString *encoded_read_buf;
GString *write_buf;
gchar partial_write_buf[6];
guint use_buffer : 1;
guint do_encode : 1;
guint close_on_unref : 1;
guint is_readable : 1;
guint is_writeable : 1;
guint is_seekable : 1;
gpointer reserved1;
gpointer reserved2;
};
typedef gboolean (*GIOFunc) (GIOChannel *source,
GIOCondition condition,
gpointer data);
struct _GIOFuncs
{
GIOStatus (*io_read) (GIOChannel *channel,
gchar *buf,
gsize count,
gsize *bytes_read,
GError **err);
GIOStatus (*io_write) (GIOChannel *channel,
const gchar *buf,
gsize count,
gsize *bytes_written,
GError **err);
GIOStatus (*io_seek) (GIOChannel *channel,
gint64 offset,
GSeekType type,
GError **err);
GIOStatus (*io_close) (GIOChannel *channel,
GError **err);
GSource* (*io_create_watch) (GIOChannel *channel,
GIOCondition condition);
void (*io_free) (GIOChannel *channel);
GIOStatus (*io_set_flags) (GIOChannel *channel,
GIOFlags flags,
GError **err);
GIOFlags (*io_get_flags) (GIOChannel *channel);
};
typedef struct _GKeyFile GKeyFile;
typedef struct _GMappedFile GMappedFile;
typedef struct _GMarkupParseContext GMarkupParseContext;
typedef struct _GMarkupParser GMarkupParser;
struct _GMarkupParser
{
void (*start_element) (GMarkupParseContext *context,
const gchar *element_name,
const gchar **attribute_names,
const gchar **attribute_values,
gpointer user_data,
GError **error);
void (*end_element) (GMarkupParseContext *context,
const gchar *element_name,
gpointer user_data,
GError **error);
void (*text) (GMarkupParseContext *context,
const gchar *text,
gsize text_len,
gpointer user_data,
GError **error);
void (*passthrough) (GMarkupParseContext *context,
const gchar *passthrough_text,
gsize text_len,
gpointer user_data,
GError **error);
void (*error) (GMarkupParseContext *context,
GError *error,
gpointer user_data);
};
typedef struct _GVariantType GVariantType;
typedef struct _GVariant GVariant;
typedef struct _GVariantIter GVariantIter;
struct _GVariantIter {
gsize x[16];
};
typedef struct _GVariantBuilder GVariantBuilder;
struct _GVariantBuilder {
union
{
struct {
gsize partial_magic;
const GVariantType *type;
gsize y[14];
} s;
gsize x[16];
} u;
};
typedef struct _GVariantDict GVariantDict;
struct _GVariantDict {
union
{
struct {
GVariant *asv;
gsize partial_magic;
gsize y[14];
} s;
gsize x[16];
} u;
};
typedef void (*GLogFunc) (const gchar *log_domain,
GLogLevelFlags log_level,
const gchar *message,
gpointer user_data);
typedef struct _GLogField GLogField;
struct _GLogField
{
const gchar *key;
gconstpointer value;
gssize length;
};
typedef GLogWriterOutput (*GLogWriterFunc) (GLogLevelFlags log_level,
const GLogField *fields,
gsize n_fields,
gpointer user_data);
typedef void (*GPrintFunc) (const gchar *string);
typedef struct _GOptionContext GOptionContext;
typedef struct _GOptionGroup GOptionGroup;
typedef struct _GOptionEntry GOptionEntry;
typedef gboolean (*GOptionArgFunc) (const gchar *option_name,
const gchar *value,
gpointer data,
GError **error);
typedef gboolean (*GOptionParseFunc) (GOptionContext *context,
GOptionGroup *group,
gpointer data,
GError **error);
typedef void (*GOptionErrorFunc) (GOptionContext *context,
GOptionGroup *group,
gpointer data,
GError **error);
struct _GOptionEntry
{
const gchar *long_name;
gchar short_name;
gint flags;
GOptionArg arg;
gpointer arg_data;
const gchar *description;
const gchar *arg_description;
};
typedef struct _GPatternSpec GPatternSpec;
typedef struct _GQueue GQueue;
struct _GQueue
{
GList *head;
GList *tail;
guint length;
};
typedef struct _GRand GRand;
typedef char GRefString;
typedef struct _GRegex GRegex;
typedef struct _GMatchInfo GMatchInfo;
typedef gboolean (*GRegexEvalCallback) (const GMatchInfo *match_info,
GString *result,
gpointer user_data);
typedef struct _GScanner GScanner;
typedef struct _GScannerConfig GScannerConfig;
typedef union _GTokenValue GTokenValue;
typedef void (*GScannerMsgFunc) (GScanner *scanner,
gchar *message,
gboolean error);
union _GTokenValue
{
gpointer v_symbol;
gchar *v_identifier;
gulong v_binary;
gulong v_octal;
gulong v_int;
guint64 v_int64;
gdouble v_float;
gulong v_hex;
gchar *v_string;
gchar *v_comment;
guchar v_char;
guint v_error;
};
struct _GScannerConfig
{
gchar *cset_skip_characters;
gchar *cset_identifier_first;
gchar *cset_identifier_nth;
gchar *cpair_comment_single;
guint case_sensitive : 1;
guint skip_comment_multi : 1;
guint skip_comment_single : 1;
guint scan_comment_multi : 1;
guint scan_identifier : 1;
guint scan_identifier_1char : 1;
guint scan_identifier_NULL : 1;
guint scan_symbols : 1;
guint scan_binary : 1;
guint scan_octal : 1;
guint scan_float : 1;
guint scan_hex : 1;
guint scan_hex_dollar : 1;
guint scan_string_sq : 1;
guint scan_string_dq : 1;
guint numbers_2_int : 1;
guint int_2_float : 1;
guint identifier_2_string : 1;
guint char_2_token : 1;
guint symbol_2_token : 1;
guint scope_0_fallback : 1;
guint store_int64 : 1;
guint padding_dummy;
};
struct _GScanner
{
gpointer user_data;
guint max_parse_errors;
guint parse_errors;
const gchar *input_name;
GData *qdata;
GScannerConfig *config;
GTokenType token;
GTokenValue value;
guint line;
guint position;
GTokenType next_token;
GTokenValue next_value;
guint next_line;
guint next_position;
GHashTable *symbol_table;
gint input_fd;
const gchar *text;
const gchar *text_end;
gchar *buffer;
guint scope_id;
GScannerMsgFunc msg_handler;
};
typedef struct _GSequence GSequence;
typedef struct _GSequenceNode GSequenceIter;
typedef gint (* GSequenceIterCompareFunc) (GSequenceIter *a,
GSequenceIter *b,
gpointer data);
typedef void (* GSpawnChildSetupFunc) (gpointer user_data);
typedef gchar** GStrv;
typedef struct _GStringChunk GStringChunk;
typedef struct GTestCase GTestCase;
typedef struct GTestSuite GTestSuite;
typedef void (*GTestFunc) (void);
typedef void (*GTestDataFunc) (gconstpointer user_data);
typedef void (*GTestFixtureFunc) (gpointer fixture,
gconstpointer user_data);
typedef struct {
gboolean test_initialized;
gboolean test_quick;
gboolean test_perf;
gboolean test_verbose;
gboolean test_quiet;
gboolean test_undefined;
} GTestConfig;
typedef struct {
GTestLogType log_type;
guint n_strings;
gchar **strings;
guint n_nums;
long double *nums;
} GTestLogMsg;
typedef struct {
GString *data;
GSList *msgs;
} GTestLogBuffer;
typedef gboolean (*GTestLogFatalFunc) (const gchar *log_domain,
GLogLevelFlags log_level,
const gchar *message,
gpointer user_data);
typedef struct _GThreadPool GThreadPool;
struct _GThreadPool
{
GFunc func;
gpointer user_data;
gboolean exclusive;
};
typedef struct _GTimer GTimer;
typedef struct _GTrashStack GTrashStack;
struct _GTrashStack
{
GTrashStack *next;
};
typedef struct _GTree GTree;
typedef gboolean (*GTraverseFunc) (gpointer key,
gpointer value,
gpointer data);
typedef struct _GAllocator GAllocator;
typedef struct _GMemChunk GMemChunk;
typedef struct _GCache GCache;
typedef gpointer (*GCacheNewFunc) (gpointer key);
typedef gpointer (*GCacheDupFunc) (gpointer value);
typedef void (*GCacheDestroyFunc) (gpointer value);
typedef struct _GCompletion GCompletion;
typedef gchar* (*GCompletionFunc) (gpointer);
typedef gint (*GCompletionStrncmpFunc) (const gchar *s1,
const gchar *s2,
gsize n);
struct _GCompletion
{
GList* items;
GCompletionFunc func;
gchar* prefix;
GList* cache;
GCompletionStrncmpFunc strncmp_func;
};
typedef struct _GRelation GRelation;
typedef struct _GTuples GTuples;
struct _GTuples
{
guint len;
};
struct _GThread
{
GThreadFunc func;
gpointer data;
gboolean joinable;
GThreadPriority priority;
};
typedef struct _GThreadFunctions GThreadFunctions;
struct _GThreadFunctions
{
GMutex* (*mutex_new) (void);
void (*mutex_lock) (GMutex *mutex);
gboolean (*mutex_trylock) (GMutex *mutex);
void (*mutex_unlock) (GMutex *mutex);
void (*mutex_free) (GMutex *mutex);
GCond* (*cond_new) (void);
void (*cond_signal) (GCond *cond);
void (*cond_broadcast) (GCond *cond);
void (*cond_wait) (GCond *cond,
GMutex *mutex);
gboolean (*cond_timed_wait) (GCond *cond,
GMutex *mutex,
GTimeVal *end_time);
void (*cond_free) (GCond *cond);
GPrivate* (*private_new) (GDestroyNotify destructor);
gpointer (*private_get) (GPrivate *private_key);
void (*private_set) (GPrivate *private_key,
gpointer data);
void (*thread_create) (GThreadFunc func,
gpointer data,
gulong stack_size,
gboolean joinable,
gboolean bound,
GThreadPriority priority,
gpointer thread,
GError **error);
void (*thread_yield) (void);
void (*thread_join) (gpointer thread);
void (*thread_exit) (void);
void (*thread_set_priority)(gpointer thread,
GThreadPriority priority);
void (*thread_self) (gpointer thread);
gboolean (*thread_equal) (gpointer thread1,
gpointer thread2);
};
struct sched_param
{
int sched_priority;
};
typedef unsigned long int __cpu_mask;
typedef struct
{
__cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
typedef long int __jmp_buf[8];
struct _pthread_cleanup_buffer
{
void (*__routine) (void *);
void *__arg;
int __canceltype;
struct _pthread_cleanup_buffer *__prev;
};
typedef struct
{
struct
{
__jmp_buf __cancel_jmp_buf;
int __mask_was_saved;
} __cancel_jmp_buf[1];
void *__pad[4];
} __pthread_unwind_buf_t;
struct __pthread_cleanup_frame
{
void (*__cancel_routine) (void *);
void *__cancel_arg;
int __do_it;
int __cancel_type;
};
struct __jmp_buf_tag;
typedef struct
{
GMutex *mutex;
pthread_mutex_t unused;
} GStaticMutex;
typedef struct _GStaticRecMutex GStaticRecMutex;
struct _GStaticRecMutex
{
GStaticMutex mutex;
guint depth;
union {
pthread_t owner;
gdouble dummy;
} unused;
};
typedef struct _GStaticRWLock GStaticRWLock;
struct _GStaticRWLock
{
GStaticMutex mutex;
GCond *read_cond;
GCond *write_cond;
guint read_counter;
gboolean have_writer;
guint want_to_read;
guint want_to_write;
};
typedef struct _GStaticPrivate GStaticPrivate;
struct _GStaticPrivate
{
guint index;
};
typedef GAsyncQueue *GAsyncQueue_autoptr; typedef GList *GAsyncQueue_listautoptr; typedef GSList *GAsyncQueue_slistautoptr; typedef GQueue *GAsyncQueue_queueautoptr;
typedef GBookmarkFile *GBookmarkFile_autoptr; typedef GList *GBookmarkFile_listautoptr; typedef GSList *GBookmarkFile_slistautoptr; typedef GQueue *GBookmarkFile_queueautoptr;
typedef GBytes *GBytes_autoptr; typedef GList *GBytes_listautoptr; typedef GSList *GBytes_slistautoptr; typedef GQueue *GBytes_queueautoptr;
typedef GChecksum *GChecksum_autoptr; typedef GList *GChecksum_listautoptr; typedef GSList *GChecksum_slistautoptr; typedef GQueue *GChecksum_queueautoptr;
typedef GDateTime *GDateTime_autoptr; typedef GList *GDateTime_listautoptr; typedef GSList *GDateTime_slistautoptr; typedef GQueue *GDateTime_queueautoptr;
typedef GDir *GDir_autoptr; typedef GList *GDir_listautoptr; typedef GSList *GDir_slistautoptr; typedef GQueue *GDir_queueautoptr;
typedef GError *GError_autoptr; typedef GList *GError_listautoptr; typedef GSList *GError_slistautoptr; typedef GQueue *GError_queueautoptr;
typedef GHashTable *GHashTable_autoptr; typedef GList *GHashTable_listautoptr; typedef GSList *GHashTable_slistautoptr; typedef GQueue *GHashTable_queueautoptr;
typedef GHmac *GHmac_autoptr; typedef GList *GHmac_listautoptr; typedef GSList *GHmac_slistautoptr; typedef GQueue *GHmac_queueautoptr;
typedef GIOChannel *GIOChannel_autoptr; typedef GList *GIOChannel_listautoptr; typedef GSList *GIOChannel_slistautoptr; typedef GQueue *GIOChannel_queueautoptr;
typedef GKeyFile *GKeyFile_autoptr; typedef GList *GKeyFile_listautoptr; typedef GSList *GKeyFile_slistautoptr; typedef GQueue *GKeyFile_queueautoptr;
typedef GList *GList_autoptr; typedef GList *GList_listautoptr; typedef GSList *GList_slistautoptr; typedef GQueue *GList_queueautoptr;
typedef GArray *GArray_autoptr; typedef GList *GArray_listautoptr; typedef GSList *GArray_slistautoptr; typedef GQueue *GArray_queueautoptr;
typedef GPtrArray *GPtrArray_autoptr; typedef GList *GPtrArray_listautoptr; typedef GSList *GPtrArray_slistautoptr; typedef GQueue *GPtrArray_queueautoptr;
typedef GByteArray *GByteArray_autoptr; typedef GList *GByteArray_listautoptr; typedef GSList *GByteArray_slistautoptr; typedef GQueue *GByteArray_queueautoptr;
typedef GMainContext *GMainContext_autoptr; typedef GList *GMainContext_listautoptr; typedef GSList *GMainContext_slistautoptr; typedef GQueue *GMainContext_queueautoptr;
typedef GMainLoop *GMainLoop_autoptr; typedef GList *GMainLoop_listautoptr; typedef GSList *GMainLoop_slistautoptr; typedef GQueue *GMainLoop_queueautoptr;
typedef GSource *GSource_autoptr; typedef GList *GSource_listautoptr; typedef GSList *GSource_slistautoptr; typedef GQueue *GSource_queueautoptr;
typedef GMappedFile *GMappedFile_autoptr; typedef GList *GMappedFile_listautoptr; typedef GSList *GMappedFile_slistautoptr; typedef GQueue *GMappedFile_queueautoptr;
typedef GMarkupParseContext *GMarkupParseContext_autoptr; typedef GList *GMarkupParseContext_listautoptr; typedef GSList *GMarkupParseContext_slistautoptr; typedef GQueue *GMarkupParseContext_queueautoptr;
typedef GNode *GNode_autoptr; typedef GList *GNode_listautoptr; typedef GSList *GNode_slistautoptr; typedef GQueue *GNode_queueautoptr;
typedef GOptionContext *GOptionContext_autoptr; typedef GList *GOptionContext_listautoptr; typedef GSList *GOptionContext_slistautoptr; typedef GQueue *GOptionContext_queueautoptr;
typedef GOptionGroup *GOptionGroup_autoptr; typedef GList *GOptionGroup_listautoptr; typedef GSList *GOptionGroup_slistautoptr; typedef GQueue *GOptionGroup_queueautoptr;
typedef GPatternSpec *GPatternSpec_autoptr; typedef GList *GPatternSpec_listautoptr; typedef GSList *GPatternSpec_slistautoptr; typedef GQueue *GPatternSpec_queueautoptr;
typedef GQueue *GQueue_autoptr; typedef GList *GQueue_listautoptr; typedef GSList *GQueue_slistautoptr; typedef GQueue *GQueue_queueautoptr;
typedef GRand *GRand_autoptr; typedef GList *GRand_listautoptr; typedef GSList *GRand_slistautoptr; typedef GQueue *GRand_queueautoptr;
typedef GRegex *GRegex_autoptr; typedef GList *GRegex_listautoptr; typedef GSList *GRegex_slistautoptr; typedef GQueue *GRegex_queueautoptr;
typedef GMatchInfo *GMatchInfo_autoptr; typedef GList *GMatchInfo_listautoptr; typedef GSList *GMatchInfo_slistautoptr; typedef GQueue *GMatchInfo_queueautoptr;
typedef GScanner *GScanner_autoptr; typedef GList *GScanner_listautoptr; typedef GSList *GScanner_slistautoptr; typedef GQueue *GScanner_queueautoptr;
typedef GSequence *GSequence_autoptr; typedef GList *GSequence_listautoptr; typedef GSList *GSequence_slistautoptr; typedef GQueue *GSequence_queueautoptr;
typedef GSList *GSList_autoptr; typedef GList *GSList_listautoptr; typedef GSList *GSList_slistautoptr; typedef GQueue *GSList_queueautoptr;
typedef GString *GString_autoptr; typedef GList *GString_listautoptr; typedef GSList *GString_slistautoptr; typedef GQueue *GString_queueautoptr;
typedef GStringChunk *GStringChunk_autoptr; typedef GList *GStringChunk_listautoptr; typedef GSList *GStringChunk_slistautoptr; typedef GQueue *GStringChunk_queueautoptr;
typedef GThread *GThread_autoptr; typedef GList *GThread_listautoptr; typedef GSList *GThread_slistautoptr; typedef GQueue *GThread_queueautoptr;
typedef GMutexLocker *GMutexLocker_autoptr; typedef GList *GMutexLocker_listautoptr; typedef GSList *GMutexLocker_slistautoptr; typedef GQueue *GMutexLocker_queueautoptr;
typedef GRecMutexLocker *GRecMutexLocker_autoptr; typedef GList *GRecMutexLocker_listautoptr; typedef GSList *GRecMutexLocker_slistautoptr; typedef GQueue *GRecMutexLocker_queueautoptr;
typedef GRWLockWriterLocker *GRWLockWriterLocker_autoptr; typedef GList *GRWLockWriterLocker_listautoptr; typedef GSList *GRWLockWriterLocker_slistautoptr; typedef GQueue *GRWLockWriterLocker_queueautoptr;
typedef GRWLockReaderLocker *GRWLockReaderLocker_autoptr; typedef GList *GRWLockReaderLocker_listautoptr; typedef GSList *GRWLockReaderLocker_slistautoptr; typedef GQueue *GRWLockReaderLocker_queueautoptr;
typedef GTimer *GTimer_autoptr; typedef GList *GTimer_listautoptr; typedef GSList *GTimer_slistautoptr; typedef GQueue *GTimer_queueautoptr;
typedef GTimeZone *GTimeZone_autoptr; typedef GList *GTimeZone_listautoptr; typedef GSList *GTimeZone_slistautoptr; typedef GQueue *GTimeZone_queueautoptr;
typedef GTree *GTree_autoptr; typedef GList *GTree_listautoptr; typedef GSList *GTree_slistautoptr; typedef GQueue *GTree_queueautoptr;
typedef GVariant *GVariant_autoptr; typedef GList *GVariant_listautoptr; typedef GSList *GVariant_slistautoptr; typedef GQueue *GVariant_queueautoptr;
typedef GVariantBuilder *GVariantBuilder_autoptr; typedef GList *GVariantBuilder_listautoptr; typedef GSList *GVariantBuilder_slistautoptr; typedef GQueue *GVariantBuilder_queueautoptr;
typedef GVariantIter *GVariantIter_autoptr; typedef GList *GVariantIter_listautoptr; typedef GSList *GVariantIter_slistautoptr; typedef GQueue *GVariantIter_queueautoptr;
typedef GVariantDict *GVariantDict_autoptr; typedef GList *GVariantDict_listautoptr; typedef GSList *GVariantDict_slistautoptr; typedef GQueue *GVariantDict_queueautoptr;
typedef GVariantType *GVariantType_autoptr; typedef GList *GVariantType_listautoptr; typedef GSList *GVariantType_slistautoptr; typedef GQueue *GVariantType_queueautoptr;
typedef GRefString *GRefString_autoptr; typedef GList *GRefString_listautoptr; typedef GSList *GRefString_slistautoptr; typedef GQueue *GRefString_queueautoptr;
typedef gsize GType;
typedef struct _GValue GValue;
typedef union _GTypeCValue GTypeCValue;
typedef struct _GTypePlugin GTypePlugin;
typedef struct _GTypeClass GTypeClass;
typedef struct _GTypeInterface GTypeInterface;
typedef struct _GTypeInstance GTypeInstance;
typedef struct _GTypeInfo GTypeInfo;
typedef struct _GTypeFundamentalInfo GTypeFundamentalInfo;
typedef struct _GInterfaceInfo GInterfaceInfo;
typedef struct _GTypeValueTable GTypeValueTable;
typedef struct _GTypeQuery GTypeQuery;
struct _GTypeClass
{
GType g_type;
};
struct _GTypeInstance
{
GTypeClass *g_class;
};
struct _GTypeInterface
{
GType g_type;
GType g_instance_type;
};
struct _GTypeQuery
{
GType type;
const gchar *type_name;
guint class_size;
guint instance_size;
};
typedef void (*GBaseInitFunc) (gpointer g_class);
typedef void (*GBaseFinalizeFunc) (gpointer g_class);
typedef void (*GClassInitFunc) (gpointer g_class,
gpointer class_data);
typedef void (*GClassFinalizeFunc) (gpointer g_class,
gpointer class_data);
typedef void (*GInstanceInitFunc) (GTypeInstance *instance,
gpointer g_class);
typedef void (*GInterfaceInitFunc) (gpointer g_iface,
gpointer iface_data);
typedef void (*GInterfaceFinalizeFunc) (gpointer g_iface,
gpointer iface_data);
typedef gboolean (*GTypeClassCacheFunc) (gpointer cache_data,
GTypeClass *g_class);
typedef void (*GTypeInterfaceCheckFunc) (gpointer check_data,
gpointer g_iface);
struct _GTypeInfo
{
guint16 class_size;
GBaseInitFunc base_init;
GBaseFinalizeFunc base_finalize;
GClassInitFunc class_init;
GClassFinalizeFunc class_finalize;
gconstpointer class_data;
guint16 instance_size;
guint16 n_preallocs;
GInstanceInitFunc instance_init;
const GTypeValueTable *value_table;
};
struct _GTypeFundamentalInfo
{
GTypeFundamentalFlags type_flags;
};
struct _GInterfaceInfo
{
GInterfaceInitFunc interface_init;
GInterfaceFinalizeFunc interface_finalize;
gpointer interface_data;
};
struct _GTypeValueTable
{
void (*value_init) (GValue *value);
void (*value_free) (GValue *value);
void (*value_copy) (const GValue *src_value,
GValue *dest_value);
gpointer (*value_peek_pointer) (const GValue *value);
const gchar *collect_format;
gchar* (*collect_value) (GValue *value,
guint n_collect_values,
GTypeCValue *collect_values,
guint collect_flags);
const gchar *lcopy_format;
gchar* (*lcopy_value) (const GValue *value,
guint n_collect_values,
GTypeCValue *collect_values,
guint collect_flags);
};
typedef void (*GValueTransform) (const GValue *src_value,
GValue *dest_value);
struct _GValue
{
GType g_type;
union {
gint v_int;
guint v_uint;
glong v_long;
gulong v_ulong;
gint64 v_int64;
guint64 v_uint64;
gfloat v_float;
gdouble v_double;
gpointer v_pointer;
} data[2];
};
typedef struct _GParamSpec GParamSpec;
typedef struct _GParamSpecClass GParamSpecClass;
typedef struct _GParameter GParameter;
typedef struct _GParamSpecPool GParamSpecPool;
struct _GParamSpec
{
GTypeInstance g_type_instance;
const gchar *name;
GParamFlags flags;
GType value_type;
GType owner_type;
gchar *_nick;
gchar *_blurb;
GData *qdata;
guint ref_count;
guint param_id;
};
struct _GParamSpecClass
{
GTypeClass g_type_class;
GType value_type;
void (*finalize) (GParamSpec *pspec);
void (*value_set_default) (GParamSpec *pspec,
GValue *value);
gboolean (*value_validate) (GParamSpec *pspec,
GValue *value);
gint (*values_cmp) (GParamSpec *pspec,
const GValue *value1,
const GValue *value2);
gpointer dummy[4];
};
struct _GParameter
{
const gchar *name;
GValue value;
};
typedef struct _GParamSpecTypeInfo GParamSpecTypeInfo;
struct _GParamSpecTypeInfo
{
guint16 instance_size;
guint16 n_preallocs;
void (*instance_init) (GParamSpec *pspec);
GType value_type;
void (*finalize) (GParamSpec *pspec);
void (*value_set_default) (GParamSpec *pspec,
GValue *value);
gboolean (*value_validate) (GParamSpec *pspec,
GValue *value);
gint (*values_cmp) (GParamSpec *pspec,
const GValue *value1,
const GValue *value2);
};
typedef struct _GClosure GClosure;
typedef struct _GtkATContext GtkATContext;
typedef struct _GClosureNotifyData GClosureNotifyData;
typedef struct _GdkPaintable GdkPaintable;
typedef struct _GtkShortcutTrigger GtkShortcutTrigger;
typedef struct _GtkAnyFilter GtkAnyFilter;
typedef struct _GtkAssistantPage GtkAssistantPage;
typedef struct _GtkLayoutManager GtkLayoutManager;
typedef struct _GtkBookmarkList GtkBookmarkList;
typedef struct _GtkBoolFilter GtkBoolFilter;
typedef struct _GtkExpression GtkExpression;
typedef struct _GtkAlternativeTrigger GtkAlternativeTrigger;
typedef void (*GClosureNotify) (gpointer data,
GClosure *closure);
typedef void (* GCallback) (void);
typedef void (*GClosureMarshal) (GClosure *closure,
GValue *return_value,
guint n_param_values,
const GValue *param_values,
gpointer invocation_hint,
gpointer marshal_data);
typedef void (* GVaClosureMarshal) (GClosure *closure,
GValue *return_value,
gpointer instance,
va_list args,
gpointer marshal_data,
int n_params,
GType *param_types);
typedef struct _GCClosure GCClosure;
struct _GClosureNotifyData
{
gpointer data;
GClosureNotify notify;
};
struct _GClosure
{
volatile guint ref_count : 15;
volatile guint meta_marshal_nouse : 1;
volatile guint n_guards : 1;
volatile guint n_fnotifiers : 2;
volatile guint n_inotifiers : 8;
volatile guint in_inotify : 1;
volatile guint floating : 1;
volatile guint derivative_flag : 1;
volatile guint in_marshal : 1;
volatile guint is_invalid : 1;
void (*marshal) (GClosure *closure,
GValue *return_value,
guint n_param_values,
const GValue *param_values,
gpointer invocation_hint,
gpointer marshal_data);
gpointer data;
GClosureNotifyData *notifiers;
};
struct _GCClosure
{
GClosure closure;
gpointer callback;
};
typedef struct _GSignalQuery GSignalQuery;
typedef struct _GSignalInvocationHint GSignalInvocationHint;
typedef GClosureMarshal GSignalCMarshaller;
typedef GVaClosureMarshal GSignalCVaMarshaller;
typedef gboolean (*GSignalEmissionHook) (GSignalInvocationHint *ihint,
guint n_param_values,
const GValue *param_values,
gpointer data);
typedef gboolean (*GSignalAccumulator) (GSignalInvocationHint *ihint,
GValue *return_accu,
const GValue *handler_return,
gpointer data);
struct _GSignalInvocationHint
{
guint signal_id;
GQuark detail;
GSignalFlags run_type;
};
struct _GSignalQuery
{
guint signal_id;
const gchar *signal_name;
GType itype;
GSignalFlags signal_flags;
GType return_type;
guint n_params;
const GType *param_types;
};
typedef gpointer (*GBoxedCopyFunc) (gpointer boxed);
typedef void (*GBoxedFreeFunc) (gpointer boxed);
typedef struct _GObject GObject;
typedef struct _GObjectClass GObjectClass;
typedef struct _GObject GInitiallyUnowned;
typedef struct _GObjectClass GInitiallyUnownedClass;
typedef struct _GObjectConstructParam GObjectConstructParam;
typedef void (*GObjectGetPropertyFunc) (GObject *object,
guint property_id,
GValue *value,
GParamSpec *pspec);
typedef void (*GObjectSetPropertyFunc) (GObject *object,
guint property_id,
const GValue *value,
GParamSpec *pspec);
typedef void (*GObjectFinalizeFunc) (GObject *object);
typedef void (*GWeakNotify) (gpointer data,
GObject *where_the_object_was);
struct _GObject
{
GTypeInstance g_type_instance;
volatile guint ref_count;
GData *qdata;
};
struct _GObjectClass
{
GTypeClass g_type_class;
GSList *construct_properties;
GObject* (*constructor) (GType type,
guint n_construct_properties,
GObjectConstructParam *construct_properties);
void (*set_property) (GObject *object,
guint property_id,
const GValue *value,
GParamSpec *pspec);
void (*get_property) (GObject *object,
guint property_id,
GValue *value,
GParamSpec *pspec);
void (*dispose) (GObject *object);
void (*finalize) (GObject *object);
void (*dispatch_properties_changed) (GObject *object,
guint n_pspecs,
GParamSpec **pspecs);
void (*notify) (GObject *object,
GParamSpec *pspec);
void (*constructed) (GObject *object);
gsize flags;
gpointer pdummy[6];
};
struct _GObjectConstructParam
{
GParamSpec *pspec;
GValue *value;
};
typedef void (*GToggleNotify) (gpointer data,
GObject *object,
gboolean is_last_ref);
typedef struct {
union { gpointer p; } priv;
} GWeakRef;
typedef struct _GBinding GBinding;
typedef gboolean (* GBindingTransformFunc) (GBinding *binding,
const GValue *from_value,
GValue *to_value,
gpointer user_data);
typedef struct _GEnumClass GEnumClass;
typedef struct _GFlagsClass GFlagsClass;
typedef struct _GEnumValue GEnumValue;
typedef struct _GFlagsValue GFlagsValue;
struct _GEnumClass
{
GTypeClass g_type_class;
gint minimum;
gint maximum;
guint n_values;
GEnumValue *values;
};
struct _GFlagsClass
{
GTypeClass g_type_class;
guint mask;
guint n_values;
GFlagsValue *values;
};
struct _GEnumValue
{
gint value;
const gchar *value_name;
const gchar *value_nick;
};
struct _GFlagsValue
{
guint value;
const gchar *value_name;
const gchar *value_nick;
};
typedef struct _GParamSpecChar GParamSpecChar;
typedef struct _GParamSpecUChar GParamSpecUChar;
typedef struct _GParamSpecBoolean GParamSpecBoolean;
typedef struct _GParamSpecInt GParamSpecInt;
typedef struct _GParamSpecUInt GParamSpecUInt;
typedef struct _GParamSpecLong GParamSpecLong;
typedef struct _GParamSpecULong GParamSpecULong;
typedef struct _GParamSpecInt64 GParamSpecInt64;
typedef struct _GParamSpecUInt64 GParamSpecUInt64;
typedef struct _GParamSpecUnichar GParamSpecUnichar;
typedef struct _GParamSpecEnum GParamSpecEnum;
typedef struct _GParamSpecFlags GParamSpecFlags;
typedef struct _GParamSpecFloat GParamSpecFloat;
typedef struct _GParamSpecDouble GParamSpecDouble;
typedef struct _GParamSpecString GParamSpecString;
typedef struct _GParamSpecParam GParamSpecParam;
typedef struct _GParamSpecBoxed GParamSpecBoxed;
typedef struct _GParamSpecPointer GParamSpecPointer;
typedef struct _GParamSpecValueArray GParamSpecValueArray;
typedef struct _GParamSpecObject GParamSpecObject;
typedef struct _GParamSpecOverride GParamSpecOverride;
typedef struct _GParamSpecGType GParamSpecGType;
typedef struct _GParamSpecVariant GParamSpecVariant;
struct _GParamSpecChar
{
GParamSpec parent_instance;
gint8 minimum;
gint8 maximum;
gint8 default_value;
};
struct _GParamSpecUChar
{
GParamSpec parent_instance;
guint8 minimum;
guint8 maximum;
guint8 default_value;
};
struct _GParamSpecBoolean
{
GParamSpec parent_instance;
gboolean default_value;
};
struct _GParamSpecInt
{
GParamSpec parent_instance;
gint minimum;
gint maximum;
gint default_value;
};
struct _GParamSpecUInt
{
GParamSpec parent_instance;
guint minimum;
guint maximum;
guint default_value;
};
struct _GParamSpecLong
{
GParamSpec parent_instance;
glong minimum;
glong maximum;
glong default_value;
};
struct _GParamSpecULong
{
GParamSpec parent_instance;
gulong minimum;
gulong maximum;
gulong default_value;
};
struct _GParamSpecInt64
{
GParamSpec parent_instance;
gint64 minimum;
gint64 maximum;
gint64 default_value;
};
struct _GParamSpecUInt64
{
GParamSpec parent_instance;
guint64 minimum;
guint64 maximum;
guint64 default_value;
};
struct _GParamSpecUnichar
{
GParamSpec parent_instance;
gunichar default_value;
};
struct _GParamSpecEnum
{
GParamSpec parent_instance;
GEnumClass *enum_class;
gint default_value;
};
struct _GParamSpecFlags
{
GParamSpec parent_instance;
GFlagsClass *flags_class;
guint default_value;
};
struct _GParamSpecFloat
{
GParamSpec parent_instance;
gfloat minimum;
gfloat maximum;
gfloat default_value;
gfloat epsilon;
};
struct _GParamSpecDouble
{
GParamSpec parent_instance;
gdouble minimum;
gdouble maximum;
gdouble default_value;
gdouble epsilon;
};
struct _GParamSpecString
{
GParamSpec parent_instance;
gchar *default_value;
gchar *cset_first;
gchar *cset_nth;
gchar substitutor;
guint null_fold_if_empty : 1;
guint ensure_non_null : 1;
};
struct _GParamSpecParam
{
GParamSpec parent_instance;
};
struct _GParamSpecBoxed
{
GParamSpec parent_instance;
};
struct _GParamSpecPointer
{
GParamSpec parent_instance;
};
struct _GParamSpecValueArray
{
GParamSpec parent_instance;
GParamSpec *element_spec;
guint fixed_n_elements;
};
struct _GParamSpecObject
{
GParamSpec parent_instance;
};
struct _GParamSpecOverride
{
GParamSpec parent_instance;
GParamSpec *overridden;
};
struct _GParamSpecGType
{
GParamSpec parent_instance;
GType is_a_type;
};
struct _GParamSpecVariant
{
GParamSpec parent_instance;
GVariantType *type;
GVariant *default_value;
gpointer padding[4];
};
typedef struct _GTypeModule GTypeModule;
typedef struct _GTypeModuleClass GTypeModuleClass;
typedef GTypeModule *GTypeModule_autoptr; typedef GList *GTypeModule_listautoptr; typedef GSList *GTypeModule_slistautoptr; typedef GQueue *GTypeModule_queueautoptr;
struct _GTypeModule
{
GObject parent_instance;
guint use_count;
GSList *type_infos;
GSList *interface_infos;
gchar *name;
};
struct _GTypeModuleClass
{
GObjectClass parent_class;
gboolean (* load) (GTypeModule *module);
void (* unload) (GTypeModule *module);
void (*reserved1) (void);
void (*reserved2) (void);
void (*reserved3) (void);
void (*reserved4) (void);
};
typedef struct _GTypePluginClass GTypePluginClass;
typedef void (*GTypePluginUse) (GTypePlugin *plugin);
typedef void (*GTypePluginUnuse) (GTypePlugin *plugin);
typedef void (*GTypePluginCompleteTypeInfo) (GTypePlugin *plugin,
GType g_type,
GTypeInfo *info,
GTypeValueTable *value_table);
typedef void (*GTypePluginCompleteInterfaceInfo) (GTypePlugin *plugin,
GType instance_type,
GType interface_type,
GInterfaceInfo *info);
struct _GTypePluginClass
{
GTypeInterface base_iface;
GTypePluginUse use_plugin;
GTypePluginUnuse unuse_plugin;
GTypePluginCompleteTypeInfo complete_type_info;
GTypePluginCompleteInterfaceInfo complete_interface_info;
};
typedef struct _GValueArray GValueArray;
struct _GValueArray
{
guint n_values;
GValue *values;
guint n_prealloced;
};
typedef gchar* gchararray;
typedef GClosure *GClosure_autoptr; typedef GList *GClosure_listautoptr; typedef GSList *GClosure_slistautoptr; typedef GQueue *GClosure_queueautoptr;
typedef GEnumClass *GEnumClass_autoptr; typedef GList *GEnumClass_listautoptr; typedef GSList *GEnumClass_slistautoptr; typedef GQueue *GEnumClass_queueautoptr;
typedef GFlagsClass *GFlagsClass_autoptr; typedef GList *GFlagsClass_listautoptr; typedef GSList *GFlagsClass_slistautoptr; typedef GQueue *GFlagsClass_queueautoptr;
typedef GObject *GObject_autoptr; typedef GList *GObject_listautoptr; typedef GSList *GObject_slistautoptr; typedef GQueue *GObject_queueautoptr;
typedef GInitiallyUnowned *GInitiallyUnowned_autoptr; typedef GList *GInitiallyUnowned_listautoptr; typedef GSList *GInitiallyUnowned_slistautoptr; typedef GQueue *GInitiallyUnowned_queueautoptr;
typedef GParamSpec *GParamSpec_autoptr; typedef GList *GParamSpec_listautoptr; typedef GSList *GParamSpec_slistautoptr; typedef GQueue *GParamSpec_queueautoptr;
typedef GTypeClass *GTypeClass_autoptr; typedef GList *GTypeClass_listautoptr; typedef GSList *GTypeClass_slistautoptr; typedef GQueue *GTypeClass_queueautoptr;
typedef struct _GAppLaunchContext GAppLaunchContext;
typedef struct _GAppInfo GAppInfo;
typedef struct _GAsyncResult GAsyncResult;
typedef struct _GAsyncInitable GAsyncInitable;
typedef struct _GBufferedInputStream GBufferedInputStream;
typedef struct _GBufferedOutputStream GBufferedOutputStream;
typedef struct _GCancellable GCancellable;
typedef struct _GCharsetConverter GCharsetConverter;
typedef struct _GConverter GConverter;
typedef struct _GConverterInputStream GConverterInputStream;
typedef struct _GConverterOutputStream GConverterOutputStream;
typedef struct _GDatagramBased GDatagramBased;
typedef struct _GDataInputStream GDataInputStream;
typedef struct _GSimplePermission GSimplePermission;
typedef struct _GZlibCompressor GZlibCompressor;
typedef struct _GZlibDecompressor GZlibDecompressor;
typedef struct _GSimpleActionGroup GSimpleActionGroup;
typedef struct _GRemoteActionGroup GRemoteActionGroup;
typedef struct _GDBusActionGroup GDBusActionGroup;
typedef struct _GActionMap GActionMap;
typedef struct _GActionGroup GActionGroup;
typedef struct _GPropertyAction GPropertyAction;
typedef struct _GSimpleAction GSimpleAction;
typedef struct _GAction GAction;
typedef struct _GApplication GApplication;
typedef struct _GApplicationCommandLine GApplicationCommandLine;
typedef struct _GSettingsBackend GSettingsBackend;
typedef struct _GSettings GSettings;
typedef struct _GPermission GPermission;
typedef struct _GMenuModel GMenuModel;
typedef struct _GNotification GNotification;
typedef struct _GDrive GDrive;
typedef struct _GFileEnumerator GFileEnumerator;
typedef struct _GFileMonitor GFileMonitor;
typedef struct _GFilterInputStream GFilterInputStream;
typedef struct _GFilterOutputStream GFilterOutputStream;
typedef struct _GFile GFile;
typedef struct _GFileInfo GFileInfo;
typedef struct _GFileAttributeMatcher GFileAttributeMatcher;
typedef struct _GFileAttributeInfo GFileAttributeInfo;
typedef struct _GFileAttributeInfoList GFileAttributeInfoList;
typedef struct _GFileDescriptorBased GFileDescriptorBased;
typedef struct _GFileInputStream GFileInputStream;
typedef struct _GFileOutputStream GFileOutputStream;
typedef struct _GFileIOStream GFileIOStream;
typedef struct _GFileIcon GFileIcon;
typedef struct _GFilenameCompleter GFilenameCompleter;
typedef struct _GIcon GIcon;
typedef struct _GInetAddress GInetAddress;
typedef struct _GInetAddressMask GInetAddressMask;
typedef struct _GInetSocketAddress GInetSocketAddress;
typedef struct _GNativeSocketAddress GNativeSocketAddress;
typedef struct _GInputStream GInputStream;
typedef struct _GInitable GInitable;
typedef struct _GIOModule GIOModule;
typedef struct _GIOExtensionPoint GIOExtensionPoint;
typedef struct _GIOExtension GIOExtension;
typedef struct _GIOSchedulerJob GIOSchedulerJob;
typedef struct _GIOStreamAdapter GIOStreamAdapter;
typedef struct _GLoadableIcon GLoadableIcon;
typedef struct _GBytesIcon GBytesIcon;
typedef struct _GMemoryInputStream GMemoryInputStream;
typedef struct _GMemoryOutputStream GMemoryOutputStream;
typedef struct _GMount GMount;
typedef struct _GMountOperation GMountOperation;
typedef struct _GNetworkAddress GNetworkAddress;
typedef struct _GNetworkMonitor GNetworkMonitor;
typedef struct _GNetworkService GNetworkService;
typedef struct _GOutputStream GOutputStream;
typedef struct _GIOStream GIOStream;
typedef struct _GSimpleIOStream GSimpleIOStream;
typedef struct _GPollableInputStream GPollableInputStream;
typedef struct _GPollableOutputStream GPollableOutputStream;
typedef struct _GResolver GResolver;
typedef struct _GResource GResource;
typedef struct _GSeekable GSeekable;
typedef struct _GSimpleAsyncResult GSimpleAsyncResult;
typedef struct _GSocket GSocket;
typedef struct _GSocketControlMessage GSocketControlMessage;
typedef struct _GSocketClient GSocketClient;
typedef struct _GSocketConnection GSocketConnection;
typedef struct _GSocketListener GSocketListener;
typedef struct _GSocketService GSocketService;
typedef struct _GSocketAddress GSocketAddress;
typedef struct _GSocketAddressEnumerator GSocketAddressEnumerator;
typedef struct _GSocketConnectable GSocketConnectable;
typedef struct _GSrvTarget GSrvTarget;
typedef struct _GTask GTask;
typedef struct _GTcpConnection GTcpConnection;
typedef struct _GTcpWrapperConnection GTcpWrapperConnection;
typedef struct _GThreadedSocketService GThreadedSocketService;
typedef struct _GDtlsConnection GDtlsConnection;
typedef struct _GDtlsClientConnection GDtlsClientConnection;
typedef struct _GDtlsServerConnection GDtlsServerConnection;
typedef struct _GThemedIcon GThemedIcon;
typedef struct _GTlsCertificate GTlsCertificate;
typedef struct _GTlsClientConnection GTlsClientConnection;
typedef struct _GTlsConnection GTlsConnection;
typedef struct _GTlsDatabase GTlsDatabase;
typedef struct _GTlsFileDatabase GTlsFileDatabase;
typedef struct _GTlsInteraction GTlsInteraction;
typedef struct _GTlsPassword GTlsPassword;
typedef struct _GTlsServerConnection GTlsServerConnection;
typedef struct _GVfs GVfs;
typedef struct _GProxyResolver GProxyResolver;
typedef struct _GProxy GProxy;
typedef struct _GProxyAddress GProxyAddress;
typedef struct _GProxyAddressEnumerator GProxyAddressEnumerator;
typedef struct _GVolume GVolume;
typedef struct _GVolumeMonitor GVolumeMonitor;
typedef void (*GAsyncReadyCallback) (GObject *source_object,
GAsyncResult *res,
gpointer user_data);
typedef void (*GFileProgressCallback) (goffset current_num_bytes,
goffset total_num_bytes,
gpointer user_data);
typedef gboolean (* GFileReadMoreCallback) (const char *file_contents,
goffset file_size,
gpointer callback_data);
typedef void (* GFileMeasureProgressCallback) (gboolean reporting,
guint64 current_size,
guint64 num_dirs,
guint64 num_files,
gpointer user_data);
typedef gboolean (*GIOSchedulerJobFunc) (GIOSchedulerJob *job,
GCancellable *cancellable,
gpointer user_data);
typedef void (*GSimpleAsyncThreadFunc) (GSimpleAsyncResult *res,
GObject *object,
GCancellable *cancellable);
typedef gboolean (*GSocketSourceFunc) (GSocket *socket,
GIOCondition condition,
gpointer user_data);
typedef gboolean (*GDatagramBasedSourceFunc) (GDatagramBased *datagram_based,
GIOCondition condition,
gpointer user_data);
typedef struct _GInputVector GInputVector;
struct _GInputVector {
gpointer buffer;
gsize size;
};
typedef struct _GInputMessage GInputMessage;
struct _GInputMessage {
GSocketAddress **address;
GInputVector *vectors;
guint num_vectors;
gsize bytes_received;
gint flags;
GSocketControlMessage ***control_messages;
guint *num_control_messages;
};
typedef struct _GOutputVector GOutputVector;
struct _GOutputVector {
gconstpointer buffer;
gsize size;
};
typedef struct _GOutputMessage GOutputMessage;
struct _GOutputMessage {
GSocketAddress *address;
GOutputVector *vectors;
guint num_vectors;
guint bytes_sent;
GSocketControlMessage **control_messages;
guint num_control_messages;
};
typedef struct _GCredentials GCredentials;
typedef struct _GUnixCredentialsMessage GUnixCredentialsMessage;
typedef struct _GUnixFDList GUnixFDList;
typedef struct _GDBusMessage GDBusMessage;
typedef struct _GDBusConnection GDBusConnection;
typedef struct _GDBusProxy GDBusProxy;
typedef struct _GDBusMethodInvocation GDBusMethodInvocation;
typedef struct _GDBusServer GDBusServer;
typedef struct _GDBusAuthObserver GDBusAuthObserver;
typedef struct _GDBusErrorEntry GDBusErrorEntry;
typedef struct _GDBusInterfaceVTable GDBusInterfaceVTable;
typedef struct _GDBusSubtreeVTable GDBusSubtreeVTable;
typedef struct _GDBusAnnotationInfo GDBusAnnotationInfo;
typedef struct _GDBusArgInfo GDBusArgInfo;
typedef struct _GDBusMethodInfo GDBusMethodInfo;
typedef struct _GDBusSignalInfo GDBusSignalInfo;
typedef struct _GDBusPropertyInfo GDBusPropertyInfo;
typedef struct _GDBusInterfaceInfo GDBusInterfaceInfo;
typedef struct _GDBusNodeInfo GDBusNodeInfo;
typedef gboolean (*GCancellableSourceFunc) (GCancellable *cancellable,
gpointer user_data);
typedef gboolean (*GPollableSourceFunc) (GObject *pollable_stream,
gpointer user_data);
typedef struct _GDBusInterface GDBusInterface;
typedef struct _GDBusInterfaceSkeleton GDBusInterfaceSkeleton;
typedef struct _GDBusObject GDBusObject;
typedef struct _GDBusObjectSkeleton GDBusObjectSkeleton;
typedef struct _GDBusObjectProxy GDBusObjectProxy;
typedef struct _GDBusObjectManager GDBusObjectManager;
typedef struct _GDBusObjectManagerClient GDBusObjectManagerClient;
typedef struct _GDBusObjectManagerServer GDBusObjectManagerServer;
typedef GType (*GDBusProxyTypeFunc) (GDBusObjectManagerClient *manager,
const gchar *object_path,
const gchar *interface_name,
gpointer user_data);
typedef struct _GTestDBus GTestDBus;
typedef struct _GSubprocess GSubprocess;
typedef struct _GSubprocessLauncher GSubprocessLauncher;
typedef struct _GActionInterface GActionInterface;
struct _GActionInterface
{
GTypeInterface g_iface;
const gchar * (* get_name) (GAction *action);
const GVariantType * (* get_parameter_type) (GAction *action);
const GVariantType * (* get_state_type) (GAction *action);
GVariant * (* get_state_hint) (GAction *action);
gboolean (* get_enabled) (GAction *action);
GVariant * (* get_state) (GAction *action);
void (* change_state) (GAction *action,
GVariant *value);
void (* activate) (GAction *action,
GVariant *parameter);
};
typedef struct _GActionGroupInterface GActionGroupInterface;
struct _GActionGroupInterface
{
GTypeInterface g_iface;
gboolean (* has_action) (GActionGroup *action_group,
const gchar *action_name);
gchar ** (* list_actions) (GActionGroup *action_group);
gboolean (* get_action_enabled) (GActionGroup *action_group,
const gchar *action_name);
const GVariantType * (* get_action_parameter_type) (GActionGroup *action_group,
const gchar *action_name);
const GVariantType * (* get_action_state_type) (GActionGroup *action_group,
const gchar *action_name);
GVariant * (* get_action_state_hint) (GActionGroup *action_group,
const gchar *action_name);
GVariant * (* get_action_state) (GActionGroup *action_group,
const gchar *action_name);
void (* change_action_state) (GActionGroup *action_group,
const gchar *action_name,
GVariant *value);
void (* activate_action) (GActionGroup *action_group,
const gchar *action_name,
GVariant *parameter);
void (* action_added) (GActionGroup *action_group,
const gchar *action_name);
void (* action_removed) (GActionGroup *action_group,
const gchar *action_name);
void (* action_enabled_changed) (GActionGroup *action_group,
const gchar *action_name,
gboolean enabled);
void (* action_state_changed) (GActionGroup *action_group,
const gchar *action_name,
GVariant *state);
gboolean (* query_action) (GActionGroup *action_group,
const gchar *action_name,
gboolean *enabled,
const GVariantType **parameter_type,
const GVariantType **state_type,
GVariant **state_hint,
GVariant **state);
};
typedef struct _GActionMapInterface GActionMapInterface;
typedef struct _GActionEntry GActionEntry;
struct _GActionMapInterface
{
GTypeInterface g_iface;
GAction * (* lookup_action) (GActionMap *action_map,
const gchar *action_name);
void (* add_action) (GActionMap *action_map,
GAction *action);
void (* remove_action) (GActionMap *action_map,
const gchar *action_name);
};
struct _GActionEntry
{
const gchar *name;
void (* activate) (GSimpleAction *action,
GVariant *parameter,
gpointer user_data);
const gchar *parameter_type;
const gchar *state;
void (* change_state) (GSimpleAction *action,
GVariant *value,
gpointer user_data);
gsize padding[3];
};
typedef struct _GAppLaunchContextClass GAppLaunchContextClass;
typedef struct _GAppLaunchContextPrivate GAppLaunchContextPrivate;
typedef struct _GAppInfoIface GAppInfoIface;
struct _GAppInfoIface
{
GTypeInterface g_iface;
GAppInfo * (* dup) (GAppInfo *appinfo);
gboolean (* equal) (GAppInfo *appinfo1,
GAppInfo *appinfo2);
const char * (* get_id) (GAppInfo *appinfo);
const char * (* get_name) (GAppInfo *appinfo);
const char * (* get_description) (GAppInfo *appinfo);
const char * (* get_executable) (GAppInfo *appinfo);
GIcon * (* get_icon) (GAppInfo *appinfo);
gboolean (* launch) (GAppInfo *appinfo,
GList *files,
GAppLaunchContext *context,
GError **error);
gboolean (* supports_uris) (GAppInfo *appinfo);
gboolean (* supports_files) (GAppInfo *appinfo);
gboolean (* launch_uris) (GAppInfo *appinfo,
GList *uris,
GAppLaunchContext *context,
GError **error);
gboolean (* should_show) (GAppInfo *appinfo);
gboolean (* set_as_default_for_type) (GAppInfo *appinfo,
const char *content_type,
GError **error);
gboolean (* set_as_default_for_extension) (GAppInfo *appinfo,
const char *extension,
GError **error);
gboolean (* add_supports_type) (GAppInfo *appinfo,
const char *content_type,
GError **error);
gboolean (* can_remove_supports_type) (GAppInfo *appinfo);
gboolean (* remove_supports_type) (GAppInfo *appinfo,
const char *content_type,
GError **error);
gboolean (* can_delete) (GAppInfo *appinfo);
gboolean (* do_delete) (GAppInfo *appinfo);
const char * (* get_commandline) (GAppInfo *appinfo);
const char * (* get_display_name) (GAppInfo *appinfo);
gboolean (* set_as_last_used_for_type) (GAppInfo *appinfo,
const char *content_type,
GError **error);
const char ** (* get_supported_types) (GAppInfo *appinfo);
void (* launch_uris_async) (GAppInfo *appinfo,
GList *uris,
GAppLaunchContext *context,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* launch_uris_finish) (GAppInfo *appinfo,
GAsyncResult *result,
GError **error);
};
struct _GAppLaunchContext
{
GObject parent_instance;
GAppLaunchContextPrivate *priv;
};
struct _GAppLaunchContextClass
{
GObjectClass parent_class;
char * (* get_display) (GAppLaunchContext *context,
GAppInfo *info,
GList *files);
char * (* get_startup_notify_id) (GAppLaunchContext *context,
GAppInfo *info,
GList *files);
void (* launch_failed) (GAppLaunchContext *context,
const char *startup_notify_id);
void (* launched) (GAppLaunchContext *context,
GAppInfo *info,
GVariant *platform_data);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
};
typedef struct _GAppInfoMonitor GAppInfoMonitor;
typedef struct _GApplicationPrivate GApplicationPrivate;
typedef struct _GApplicationClass GApplicationClass;
struct _GApplication
{
GObject parent_instance;
GApplicationPrivate *priv;
};
struct _GApplicationClass
{
GObjectClass parent_class;
void (* startup) (GApplication *application);
void (* activate) (GApplication *application);
void (* open) (GApplication *application,
GFile **files,
gint n_files,
const gchar *hint);
int (* command_line) (GApplication *application,
GApplicationCommandLine *command_line);
gboolean (* local_command_line) (GApplication *application,
gchar ***arguments,
int *exit_status);
void (* before_emit) (GApplication *application,
GVariant *platform_data);
void (* after_emit) (GApplication *application,
GVariant *platform_data);
void (* add_platform_data) (GApplication *application,
GVariantBuilder *builder);
void (* quit_mainloop) (GApplication *application);
void (* run_mainloop) (GApplication *application);
void (* shutdown) (GApplication *application);
gboolean (* dbus_register) (GApplication *application,
GDBusConnection *connection,
const gchar *object_path,
GError **error);
void (* dbus_unregister) (GApplication *application,
GDBusConnection *connection,
const gchar *object_path);
gint (* handle_local_options)(GApplication *application,
GVariantDict *options);
gboolean (* name_lost) (GApplication *application);
gpointer padding[7];
};
typedef struct _GApplicationCommandLinePrivate GApplicationCommandLinePrivate;
typedef struct _GApplicationCommandLineClass GApplicationCommandLineClass;
struct _GApplicationCommandLine
{
GObject parent_instance;
GApplicationCommandLinePrivate *priv;
};
struct _GApplicationCommandLineClass
{
GObjectClass parent_class;
void (* print_literal) (GApplicationCommandLine *cmdline,
const gchar *message);
void (* printerr_literal) (GApplicationCommandLine *cmdline,
const gchar *message);
GInputStream * (* get_stdin) (GApplicationCommandLine *cmdline);
gpointer padding[11];
};
typedef struct _GInitableIface GInitableIface;
struct _GInitableIface
{
GTypeInterface g_iface;
gboolean (* init) (GInitable *initable,
GCancellable *cancellable,
GError **error);
};
typedef struct _GAsyncInitableIface GAsyncInitableIface;
struct _GAsyncInitableIface
{
GTypeInterface g_iface;
void (* init_async) (GAsyncInitable *initable,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* init_finish) (GAsyncInitable *initable,
GAsyncResult *res,
GError **error);
};
typedef struct _GAsyncResultIface GAsyncResultIface;
struct _GAsyncResultIface
{
GTypeInterface g_iface;
gpointer (* get_user_data) (GAsyncResult *res);
GObject * (* get_source_object) (GAsyncResult *res);
gboolean (* is_tagged) (GAsyncResult *res,
gpointer source_tag);
};
typedef struct _GInputStreamClass GInputStreamClass;
typedef struct _GInputStreamPrivate GInputStreamPrivate;
struct _GInputStream
{
GObject parent_instance;
GInputStreamPrivate *priv;
};
struct _GInputStreamClass
{
GObjectClass parent_class;
gssize (* read_fn) (GInputStream *stream,
void *buffer,
gsize count,
GCancellable *cancellable,
GError **error);
gssize (* skip) (GInputStream *stream,
gsize count,
GCancellable *cancellable,
GError **error);
gboolean (* close_fn) (GInputStream *stream,
GCancellable *cancellable,
GError **error);
void (* read_async) (GInputStream *stream,
void *buffer,
gsize count,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gssize (* read_finish) (GInputStream *stream,
GAsyncResult *result,
GError **error);
void (* skip_async) (GInputStream *stream,
gsize count,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gssize (* skip_finish) (GInputStream *stream,
GAsyncResult *result,
GError **error);
void (* close_async) (GInputStream *stream,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* close_finish) (GInputStream *stream,
GAsyncResult *result,
GError **error);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GFilterInputStreamClass GFilterInputStreamClass;
struct _GFilterInputStream
{
GInputStream parent_instance;
GInputStream *base_stream;
};
struct _GFilterInputStreamClass
{
GInputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
};
typedef struct _GBufferedInputStreamClass GBufferedInputStreamClass;
typedef struct _GBufferedInputStreamPrivate GBufferedInputStreamPrivate;
struct _GBufferedInputStream
{
GFilterInputStream parent_instance;
GBufferedInputStreamPrivate *priv;
};
struct _GBufferedInputStreamClass
{
GFilterInputStreamClass parent_class;
gssize (* fill) (GBufferedInputStream *stream,
gssize count,
GCancellable *cancellable,
GError **error);
void (* fill_async) (GBufferedInputStream *stream,
gssize count,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gssize (* fill_finish) (GBufferedInputStream *stream,
GAsyncResult *result,
GError **error);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GOutputStreamClass GOutputStreamClass;
typedef struct _GOutputStreamPrivate GOutputStreamPrivate;
struct _GOutputStream
{
GObject parent_instance;
GOutputStreamPrivate *priv;
};
struct _GOutputStreamClass
{
GObjectClass parent_class;
gssize (* write_fn) (GOutputStream *stream,
const void *buffer,
gsize count,
GCancellable *cancellable,
GError **error);
gssize (* splice) (GOutputStream *stream,
GInputStream *source,
GOutputStreamSpliceFlags flags,
GCancellable *cancellable,
GError **error);
gboolean (* flush) (GOutputStream *stream,
GCancellable *cancellable,
GError **error);
gboolean (* close_fn) (GOutputStream *stream,
GCancellable *cancellable,
GError **error);
void (* write_async) (GOutputStream *stream,
const void *buffer,
gsize count,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gssize (* write_finish) (GOutputStream *stream,
GAsyncResult *result,
GError **error);
void (* splice_async) (GOutputStream *stream,
GInputStream *source,
GOutputStreamSpliceFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gssize (* splice_finish) (GOutputStream *stream,
GAsyncResult *result,
GError **error);
void (* flush_async) (GOutputStream *stream,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* flush_finish) (GOutputStream *stream,
GAsyncResult *result,
GError **error);
void (* close_async) (GOutputStream *stream,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* close_finish) (GOutputStream *stream,
GAsyncResult *result,
GError **error);
gboolean (* writev_fn) (GOutputStream *stream,
const GOutputVector *vectors,
gsize n_vectors,
gsize *bytes_written,
GCancellable *cancellable,
GError **error);
void (* writev_async) (GOutputStream *stream,
const GOutputVector *vectors,
gsize n_vectors,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* writev_finish) (GOutputStream *stream,
GAsyncResult *result,
gsize *bytes_written,
GError **error);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
void (*_g_reserved7) (void);
void (*_g_reserved8) (void);
};
typedef struct _GFilterOutputStreamClass GFilterOutputStreamClass;
struct _GFilterOutputStream
{
GOutputStream parent_instance;
GOutputStream *base_stream;
};
struct _GFilterOutputStreamClass
{
GOutputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
};
typedef struct _GBufferedOutputStreamClass GBufferedOutputStreamClass;
typedef struct _GBufferedOutputStreamPrivate GBufferedOutputStreamPrivate;
struct _GBufferedOutputStream
{
GFilterOutputStream parent_instance;
GBufferedOutputStreamPrivate *priv;
};
struct _GBufferedOutputStreamClass
{
GFilterOutputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
};
typedef struct _GCancellableClass GCancellableClass;
typedef struct _GCancellablePrivate GCancellablePrivate;
struct _GCancellable
{
GObject parent_instance;
GCancellablePrivate *priv;
};
struct _GCancellableClass
{
GObjectClass parent_class;
void (* cancelled) (GCancellable *cancellable);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GConverterIface GConverterIface;
struct _GConverterIface
{
GTypeInterface g_iface;
GConverterResult (* convert) (GConverter *converter,
const void *inbuf,
gsize inbuf_size,
void *outbuf,
gsize outbuf_size,
GConverterFlags flags,
gsize *bytes_read,
gsize *bytes_written,
GError **error);
void (* reset) (GConverter *converter);
};
typedef struct _GCharsetConverterClass GCharsetConverterClass;
struct _GCharsetConverterClass
{
GObjectClass parent_class;
};
typedef struct _GConverterInputStreamClass GConverterInputStreamClass;
typedef struct _GConverterInputStreamPrivate GConverterInputStreamPrivate;
struct _GConverterInputStream
{
GFilterInputStream parent_instance;
GConverterInputStreamPrivate *priv;
};
struct _GConverterInputStreamClass
{
GFilterInputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GConverterOutputStreamClass GConverterOutputStreamClass;
typedef struct _GConverterOutputStreamPrivate GConverterOutputStreamPrivate;
struct _GConverterOutputStream
{
GFilterOutputStream parent_instance;
GConverterOutputStreamPrivate *priv;
};
struct _GConverterOutputStreamClass
{
GFilterOutputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
typedef struct _GCredentialsClass GCredentialsClass;
typedef struct _GDatagramBasedInterface GDatagramBasedInterface;
struct _GDatagramBasedInterface
{
GTypeInterface g_iface;
gint (*receive_messages) (GDatagramBased *datagram_based,
GInputMessage *messages,
guint num_messages,
gint flags,
gint64 timeout,
GCancellable *cancellable,
GError **error);
gint (*send_messages) (GDatagramBased *datagram_based,
GOutputMessage *messages,
guint num_messages,
gint flags,
gint64 timeout,
GCancellable *cancellable,
GError **error);
GSource *(*create_source) (GDatagramBased *datagram_based,
GIOCondition condition,
GCancellable *cancellable);
GIOCondition (*condition_check) (GDatagramBased *datagram_based,
GIOCondition condition);
gboolean (*condition_wait) (GDatagramBased *datagram_based,
GIOCondition condition,
gint64 timeout,
GCancellable *cancellable,
GError **error);
};
typedef struct _GDataInputStreamClass GDataInputStreamClass;
typedef struct _GDataInputStreamPrivate GDataInputStreamPrivate;
struct _GDataInputStream
{
GBufferedInputStream parent_instance;
GDataInputStreamPrivate *priv;
};
struct _GDataInputStreamClass
{
GBufferedInputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GDataOutputStream GDataOutputStream;
typedef struct _GDataOutputStreamClass GDataOutputStreamClass;
typedef struct _GDataOutputStreamPrivate GDataOutputStreamPrivate;
struct _GDataOutputStream
{
GFilterOutputStream parent_instance;
GDataOutputStreamPrivate *priv;
};
struct _GDataOutputStreamClass
{
GFilterOutputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef void (*GDBusInterfaceMethodCallFunc) (GDBusConnection *connection,
const gchar *sender,
const gchar *object_path,
const gchar *interface_name,
const gchar *method_name,
GVariant *parameters,
GDBusMethodInvocation *invocation,
gpointer user_data);
typedef GVariant *(*GDBusInterfaceGetPropertyFunc) (GDBusConnection *connection,
const gchar *sender,
const gchar *object_path,
const gchar *interface_name,
const gchar *property_name,
GError **error,
gpointer user_data);
typedef gboolean (*GDBusInterfaceSetPropertyFunc) (GDBusConnection *connection,
const gchar *sender,
const gchar *object_path,
const gchar *interface_name,
const gchar *property_name,
GVariant *value,
GError **error,
gpointer user_data);
struct _GDBusInterfaceVTable
{
GDBusInterfaceMethodCallFunc method_call;
GDBusInterfaceGetPropertyFunc get_property;
GDBusInterfaceSetPropertyFunc set_property;
gpointer padding[8];
};
typedef gchar** (*GDBusSubtreeEnumerateFunc) (GDBusConnection *connection,
const gchar *sender,
const gchar *object_path,
gpointer user_data);
typedef GDBusInterfaceInfo ** (*GDBusSubtreeIntrospectFunc) (GDBusConnection *connection,
const gchar *sender,
const gchar *object_path,
const gchar *node,
gpointer user_data);
typedef const GDBusInterfaceVTable * (*GDBusSubtreeDispatchFunc) (GDBusConnection *connection,
const gchar *sender,
const gchar *object_path,
const gchar *interface_name,
const gchar *node,
gpointer *out_user_data,
gpointer user_data);
struct _GDBusSubtreeVTable
{
GDBusSubtreeEnumerateFunc enumerate;
GDBusSubtreeIntrospectFunc introspect;
GDBusSubtreeDispatchFunc dispatch;
gpointer padding[8];
};
typedef void (*GDBusSignalCallback) (GDBusConnection *connection,
const gchar *sender_name,
const gchar *object_path,
const gchar *interface_name,
const gchar *signal_name,
GVariant *parameters,
gpointer user_data);
typedef GDBusMessage *(*GDBusMessageFilterFunction) (GDBusConnection *connection,
GDBusMessage *message,
gboolean incoming,
gpointer user_data);
struct _GDBusErrorEntry
{
gint error_code;
const gchar *dbus_error_name;
};
struct _GDBusAnnotationInfo
{
volatile gint ref_count;
gchar *key;
gchar *value;
GDBusAnnotationInfo **annotations;
};
struct _GDBusArgInfo
{
volatile gint ref_count;
gchar *name;
gchar *signature;
GDBusAnnotationInfo **annotations;
};
struct _GDBusMethodInfo
{
volatile gint ref_count;
gchar *name;
GDBusArgInfo **in_args;
GDBusArgInfo **out_args;
GDBusAnnotationInfo **annotations;
};
struct _GDBusSignalInfo
{
volatile gint ref_count;
gchar *name;
GDBusArgInfo **args;
GDBusAnnotationInfo **annotations;
};
struct _GDBusPropertyInfo
{
volatile gint ref_count;
gchar *name;
gchar *signature;
GDBusPropertyInfoFlags flags;
GDBusAnnotationInfo **annotations;
};
struct _GDBusInterfaceInfo
{
volatile gint ref_count;
gchar *name;
GDBusMethodInfo **methods;
GDBusSignalInfo **signals;
GDBusPropertyInfo **properties;
GDBusAnnotationInfo **annotations;
};
struct _GDBusNodeInfo
{
volatile gint ref_count;
gchar *path;
GDBusInterfaceInfo **interfaces;
GDBusNodeInfo **nodes;
GDBusAnnotationInfo **annotations;
};
typedef void (*GBusAcquiredCallback) (GDBusConnection *connection,
const gchar *name,
gpointer user_data);
typedef void (*GBusNameAcquiredCallback) (GDBusConnection *connection,
const gchar *name,
gpointer user_data);
typedef void (*GBusNameLostCallback) (GDBusConnection *connection,
const gchar *name,
gpointer user_data);
typedef void (*GBusNameAppearedCallback) (GDBusConnection *connection,
const gchar *name,
const gchar *name_owner,
gpointer user_data);
typedef void (*GBusNameVanishedCallback) (GDBusConnection *connection,
const gchar *name,
gpointer user_data);
typedef struct _GDBusProxyClass GDBusProxyClass;
typedef struct _GDBusProxyPrivate GDBusProxyPrivate;
struct _GDBusProxy
{
GObject parent_instance;
GDBusProxyPrivate *priv;
};
struct _GDBusProxyClass
{
GObjectClass parent_class;
void (*g_properties_changed) (GDBusProxy *proxy,
GVariant *changed_properties,
const gchar* const *invalidated_properties);
void (*g_signal) (GDBusProxy *proxy,
const gchar *sender_name,
const gchar *signal_name,
GVariant *parameters);
gpointer padding[32];
};
typedef struct _GDriveIface GDriveIface;
struct _GDriveIface
{
GTypeInterface g_iface;
void (* changed) (GDrive *drive);
void (* disconnected) (GDrive *drive);
void (* eject_button) (GDrive *drive);
char * (* get_name) (GDrive *drive);
GIcon * (* get_icon) (GDrive *drive);
gboolean (* has_volumes) (GDrive *drive);
GList * (* get_volumes) (GDrive *drive);
gboolean (* is_media_removable) (GDrive *drive);
gboolean (* has_media) (GDrive *drive);
gboolean (* is_media_check_automatic) (GDrive *drive);
gboolean (* can_eject) (GDrive *drive);
gboolean (* can_poll_for_media) (GDrive *drive);
void (* eject) (GDrive *drive,
GMountUnmountFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_finish) (GDrive *drive,
GAsyncResult *result,
GError **error);
void (* poll_for_media) (GDrive *drive,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* poll_for_media_finish) (GDrive *drive,
GAsyncResult *result,
GError **error);
char * (* get_identifier) (GDrive *drive,
const char *kind);
char ** (* enumerate_identifiers) (GDrive *drive);
GDriveStartStopType (* get_start_stop_type) (GDrive *drive);
gboolean (* can_start) (GDrive *drive);
gboolean (* can_start_degraded) (GDrive *drive);
void (* start) (GDrive *drive,
GDriveStartFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* start_finish) (GDrive *drive,
GAsyncResult *result,
GError **error);
gboolean (* can_stop) (GDrive *drive);
void (* stop) (GDrive *drive,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* stop_finish) (GDrive *drive,
GAsyncResult *result,
GError **error);
void (* stop_button) (GDrive *drive);
void (* eject_with_operation) (GDrive *drive,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_with_operation_finish) (GDrive *drive,
GAsyncResult *result,
GError **error);
const gchar * (* get_sort_key) (GDrive *drive);
GIcon * (* get_symbolic_icon) (GDrive *drive);
gboolean (* is_removable) (GDrive *drive);
};
typedef struct _GDtlsConnectionInterface GDtlsConnectionInterface;
struct _GDtlsConnectionInterface
{
GTypeInterface g_iface;
gboolean (*accept_certificate) (GDtlsConnection *connection,
GTlsCertificate *peer_cert,
GTlsCertificateFlags errors);
gboolean (*handshake) (GDtlsConnection *conn,
GCancellable *cancellable,
GError **error);
void (*handshake_async) (GDtlsConnection *conn,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (*handshake_finish) (GDtlsConnection *conn,
GAsyncResult *result,
GError **error);
gboolean (*shutdown) (GDtlsConnection *conn,
gboolean shutdown_read,
gboolean shutdown_write,
GCancellable *cancellable,
GError **error);
void (*shutdown_async) (GDtlsConnection *conn,
gboolean shutdown_read,
gboolean shutdown_write,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (*shutdown_finish) (GDtlsConnection *conn,
GAsyncResult *result,
GError **error);
void (*set_advertised_protocols) (GDtlsConnection *conn,
const gchar * const *protocols);
const gchar *(*get_negotiated_protocol) (GDtlsConnection *conn);
};
typedef struct _GDtlsClientConnectionInterface GDtlsClientConnectionInterface;
struct _GDtlsClientConnectionInterface
{
GTypeInterface g_iface;
};
typedef struct _GDtlsServerConnectionInterface GDtlsServerConnectionInterface;
struct _GDtlsServerConnectionInterface
{
GTypeInterface g_iface;
};
typedef struct _GIconIface GIconIface;
struct _GIconIface
{
GTypeInterface g_iface;
guint (* hash) (GIcon *icon);
gboolean (* equal) (GIcon *icon1,
GIcon *icon2);
gboolean (* to_tokens) (GIcon *icon,
GPtrArray *tokens,
gint *out_version);
GIcon * (* from_tokens) (gchar **tokens,
gint num_tokens,
gint version,
GError **error);
GVariant * (* serialize) (GIcon *icon);
};
typedef struct _GEmblem GEmblem;
typedef struct _GEmblemClass GEmblemClass;
typedef struct _GEmblemedIcon GEmblemedIcon;
typedef struct _GEmblemedIconClass GEmblemedIconClass;
typedef struct _GEmblemedIconPrivate GEmblemedIconPrivate;
struct _GEmblemedIcon
{
GObject parent_instance;
GEmblemedIconPrivate *priv;
};
struct _GEmblemedIconClass
{
GObjectClass parent_class;
};
struct _GFileAttributeInfo
{
char *name;
GFileAttributeType type;
GFileAttributeInfoFlags flags;
};
struct _GFileAttributeInfoList
{
GFileAttributeInfo *infos;
int n_infos;
};
typedef struct _GFileEnumeratorClass GFileEnumeratorClass;
typedef struct _GFileEnumeratorPrivate GFileEnumeratorPrivate;
struct _GFileEnumerator
{
GObject parent_instance;
GFileEnumeratorPrivate *priv;
};
struct _GFileEnumeratorClass
{
GObjectClass parent_class;
GFileInfo * (* next_file) (GFileEnumerator *enumerator,
GCancellable *cancellable,
GError **error);
gboolean (* close_fn) (GFileEnumerator *enumerator,
GCancellable *cancellable,
GError **error);
void (* next_files_async) (GFileEnumerator *enumerator,
int num_files,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GList * (* next_files_finish) (GFileEnumerator *enumerator,
GAsyncResult *result,
GError **error);
void (* close_async) (GFileEnumerator *enumerator,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* close_finish) (GFileEnumerator *enumerator,
GAsyncResult *result,
GError **error);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
void (*_g_reserved7) (void);
};
typedef struct _GFileIface GFileIface;
struct _GFileIface
{
GTypeInterface g_iface;
GFile * (* dup) (GFile *file);
guint (* hash) (GFile *file);
gboolean (* equal) (GFile *file1,
GFile *file2);
gboolean (* is_native) (GFile *file);
gboolean (* has_uri_scheme) (GFile *file,
const char *uri_scheme);
char * (* get_uri_scheme) (GFile *file);
char * (* get_basename) (GFile *file);
char * (* get_path) (GFile *file);
char * (* get_uri) (GFile *file);
char * (* get_parse_name) (GFile *file);
GFile * (* get_parent) (GFile *file);
gboolean (* prefix_matches) (GFile *prefix,
GFile *file);
char * (* get_relative_path) (GFile *parent,
GFile *descendant);
GFile * (* resolve_relative_path) (GFile *file,
const char *relative_path);
GFile * (* get_child_for_display_name) (GFile *file,
const char *display_name,
GError **error);
GFileEnumerator * (* enumerate_children) (GFile *file,
const char *attributes,
GFileQueryInfoFlags flags,
GCancellable *cancellable,
GError **error);
void (* enumerate_children_async) (GFile *file,
const char *attributes,
GFileQueryInfoFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileEnumerator * (* enumerate_children_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileInfo * (* query_info) (GFile *file,
const char *attributes,
GFileQueryInfoFlags flags,
GCancellable *cancellable,
GError **error);
void (* query_info_async) (GFile *file,
const char *attributes,
GFileQueryInfoFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileInfo * (* query_info_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileInfo * (* query_filesystem_info) (GFile *file,
const char *attributes,
GCancellable *cancellable,
GError **error);
void (* query_filesystem_info_async) (GFile *file,
const char *attributes,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileInfo * (* query_filesystem_info_finish)(GFile *file,
GAsyncResult *res,
GError **error);
GMount * (* find_enclosing_mount) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* find_enclosing_mount_async) (GFile *file,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GMount * (* find_enclosing_mount_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFile * (* set_display_name) (GFile *file,
const char *display_name,
GCancellable *cancellable,
GError **error);
void (* set_display_name_async) (GFile *file,
const char *display_name,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFile * (* set_display_name_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileAttributeInfoList * (* query_settable_attributes) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* _query_settable_attributes_async) (void);
void (* _query_settable_attributes_finish) (void);
GFileAttributeInfoList * (* query_writable_namespaces) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* _query_writable_namespaces_async) (void);
void (* _query_writable_namespaces_finish) (void);
gboolean (* set_attribute) (GFile *file,
const char *attribute,
GFileAttributeType type,
gpointer value_p,
GFileQueryInfoFlags flags,
GCancellable *cancellable,
GError **error);
gboolean (* set_attributes_from_info) (GFile *file,
GFileInfo *info,
GFileQueryInfoFlags flags,
GCancellable *cancellable,
GError **error);
void (* set_attributes_async) (GFile *file,
GFileInfo *info,
GFileQueryInfoFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* set_attributes_finish) (GFile *file,
GAsyncResult *result,
GFileInfo **info,
GError **error);
GFileInputStream * (* read_fn) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* read_async) (GFile *file,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileInputStream * (* read_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileOutputStream * (* append_to) (GFile *file,
GFileCreateFlags flags,
GCancellable *cancellable,
GError **error);
void (* append_to_async) (GFile *file,
GFileCreateFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileOutputStream * (* append_to_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileOutputStream * (* create) (GFile *file,
GFileCreateFlags flags,
GCancellable *cancellable,
GError **error);
void (* create_async) (GFile *file,
GFileCreateFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileOutputStream * (* create_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileOutputStream * (* replace) (GFile *file,
const char *etag,
gboolean make_backup,
GFileCreateFlags flags,
GCancellable *cancellable,
GError **error);
void (* replace_async) (GFile *file,
const char *etag,
gboolean make_backup,
GFileCreateFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileOutputStream * (* replace_finish) (GFile *file,
GAsyncResult *res,
GError **error);
gboolean (* delete_file) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* delete_file_async) (GFile *file,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* delete_file_finish) (GFile *file,
GAsyncResult *result,
GError **error);
gboolean (* trash) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* trash_async) (GFile *file,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* trash_finish) (GFile *file,
GAsyncResult *result,
GError **error);
gboolean (* make_directory) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* make_directory_async) (GFile *file,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* make_directory_finish) (GFile *file,
GAsyncResult *result,
GError **error);
gboolean (* make_symbolic_link) (GFile *file,
const char *symlink_value,
GCancellable *cancellable,
GError **error);
void (* _make_symbolic_link_async) (void);
void (* _make_symbolic_link_finish) (void);
gboolean (* copy) (GFile *source,
GFile *destination,
GFileCopyFlags flags,
GCancellable *cancellable,
GFileProgressCallback progress_callback,
gpointer progress_callback_data,
GError **error);
void (* copy_async) (GFile *source,
GFile *destination,
GFileCopyFlags flags,
int io_priority,
GCancellable *cancellable,
GFileProgressCallback progress_callback,
gpointer progress_callback_data,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* copy_finish) (GFile *file,
GAsyncResult *res,
GError **error);
gboolean (* move) (GFile *source,
GFile *destination,
GFileCopyFlags flags,
GCancellable *cancellable,
GFileProgressCallback progress_callback,
gpointer progress_callback_data,
GError **error);
void (* _move_async) (void);
void (* _move_finish) (void);
void (* mount_mountable) (GFile *file,
GMountMountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFile * (* mount_mountable_finish) (GFile *file,
GAsyncResult *result,
GError **error);
void (* unmount_mountable) (GFile *file,
GMountUnmountFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* unmount_mountable_finish) (GFile *file,
GAsyncResult *result,
GError **error);
void (* eject_mountable) (GFile *file,
GMountUnmountFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_mountable_finish) (GFile *file,
GAsyncResult *result,
GError **error);
void (* mount_enclosing_volume) (GFile *location,
GMountMountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* mount_enclosing_volume_finish) (GFile *location,
GAsyncResult *result,
GError **error);
GFileMonitor * (* monitor_dir) (GFile *file,
GFileMonitorFlags flags,
GCancellable *cancellable,
GError **error);
GFileMonitor * (* monitor_file) (GFile *file,
GFileMonitorFlags flags,
GCancellable *cancellable,
GError **error);
GFileIOStream * (* open_readwrite) (GFile *file,
GCancellable *cancellable,
GError **error);
void (* open_readwrite_async) (GFile *file,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileIOStream * (* open_readwrite_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileIOStream * (* create_readwrite) (GFile *file,
GFileCreateFlags flags,
GCancellable *cancellable,
GError **error);
void (* create_readwrite_async) (GFile *file,
GFileCreateFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileIOStream * (* create_readwrite_finish) (GFile *file,
GAsyncResult *res,
GError **error);
GFileIOStream * (* replace_readwrite) (GFile *file,
const char *etag,
gboolean make_backup,
GFileCreateFlags flags,
GCancellable *cancellable,
GError **error);
void (* replace_readwrite_async) (GFile *file,
const char *etag,
gboolean make_backup,
GFileCreateFlags flags,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileIOStream * (* replace_readwrite_finish) (GFile *file,
GAsyncResult *res,
GError **error);
void (* start_mountable) (GFile *file,
GDriveStartFlags flags,
GMountOperation *start_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* start_mountable_finish) (GFile *file,
GAsyncResult *result,
GError **error);
void (* stop_mountable) (GFile *file,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* stop_mountable_finish) (GFile *file,
GAsyncResult *result,
GError **error);
gboolean supports_thread_contexts;
void (* unmount_mountable_with_operation) (GFile *file,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* unmount_mountable_with_operation_finish) (GFile *file,
GAsyncResult *result,
GError **error);
void (* eject_mountable_with_operation) (GFile *file,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_mountable_with_operation_finish) (GFile *file,
GAsyncResult *result,
GError **error);
void (* poll_mountable) (GFile *file,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* poll_mountable_finish) (GFile *file,
GAsyncResult *result,
GError **error);
gboolean (* measure_disk_usage) (GFile *file,
GFileMeasureFlags flags,
GCancellable *cancellable,
GFileMeasureProgressCallback progress_callback,
gpointer progress_data,
guint64 *disk_usage,
guint64 *num_dirs,
guint64 *num_files,
GError **error);
void (* measure_disk_usage_async) (GFile *file,
GFileMeasureFlags flags,
gint io_priority,
GCancellable *cancellable,
GFileMeasureProgressCallback progress_callback,
gpointer progress_data,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* measure_disk_usage_finish) (GFile *file,
GAsyncResult *result,
guint64 *disk_usage,
guint64 *num_dirs,
guint64 *num_files,
GError **error);
};
typedef struct _GFileIconClass GFileIconClass;
typedef struct _GFileInfoClass GFileInfoClass;
typedef struct _GFileInputStreamClass GFileInputStreamClass;
typedef struct _GFileInputStreamPrivate GFileInputStreamPrivate;
struct _GFileInputStream
{
GInputStream parent_instance;
GFileInputStreamPrivate *priv;
};
struct _GFileInputStreamClass
{
GInputStreamClass parent_class;
goffset (* tell) (GFileInputStream *stream);
gboolean (* can_seek) (GFileInputStream *stream);
gboolean (* seek) (GFileInputStream *stream,
goffset offset,
GSeekType type,
GCancellable *cancellable,
GError **error);
GFileInfo * (* query_info) (GFileInputStream *stream,
const char *attributes,
GCancellable *cancellable,
GError **error);
void (* query_info_async) (GFileInputStream *stream,
const char *attributes,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileInfo * (* query_info_finish) (GFileInputStream *stream,
GAsyncResult *result,
GError **error);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GIOStreamPrivate GIOStreamPrivate;
typedef struct _GIOStreamClass GIOStreamClass;
struct _GIOStream
{
GObject parent_instance;
GIOStreamPrivate *priv;
};
struct _GIOStreamClass
{
GObjectClass parent_class;
GInputStream * (*get_input_stream) (GIOStream *stream);
GOutputStream * (*get_output_stream) (GIOStream *stream);
gboolean (* close_fn) (GIOStream *stream,
GCancellable *cancellable,
GError **error);
void (* close_async) (GIOStream *stream,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* close_finish) (GIOStream *stream,
GAsyncResult *result,
GError **error);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
void (*_g_reserved7) (void);
void (*_g_reserved8) (void);
void (*_g_reserved9) (void);
void (*_g_reserved10) (void);
};
typedef struct _GFileIOStreamClass GFileIOStreamClass;
typedef struct _GFileIOStreamPrivate GFileIOStreamPrivate;
struct _GFileIOStream
{
GIOStream parent_instance;
GFileIOStreamPrivate *priv;
};
struct _GFileIOStreamClass
{
GIOStreamClass parent_class;
goffset (* tell) (GFileIOStream *stream);
gboolean (* can_seek) (GFileIOStream *stream);
gboolean (* seek) (GFileIOStream *stream,
goffset offset,
GSeekType type,
GCancellable *cancellable,
GError **error);
gboolean (* can_truncate) (GFileIOStream *stream);
gboolean (* truncate_fn) (GFileIOStream *stream,
goffset size,
GCancellable *cancellable,
GError **error);
GFileInfo * (* query_info) (GFileIOStream *stream,
const char *attributes,
GCancellable *cancellable,
GError **error);
void (* query_info_async) (GFileIOStream *stream,
const char *attributes,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileInfo * (* query_info_finish) (GFileIOStream *stream,
GAsyncResult *result,
GError **error);
char * (* get_etag) (GFileIOStream *stream);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GFileMonitorClass GFileMonitorClass;
typedef struct _GFileMonitorPrivate GFileMonitorPrivate;
struct _GFileMonitor
{
GObject parent_instance;
GFileMonitorPrivate *priv;
};
struct _GFileMonitorClass
{
GObjectClass parent_class;
void (* changed) (GFileMonitor *monitor,
GFile *file,
GFile *other_file,
GFileMonitorEvent event_type);
gboolean (* cancel) (GFileMonitor *monitor);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GFilenameCompleterClass GFilenameCompleterClass;
struct _GFilenameCompleterClass
{
GObjectClass parent_class;
void (* got_completion_data) (GFilenameCompleter *filename_completer);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
};
typedef struct _GFileOutputStreamClass GFileOutputStreamClass;
typedef struct _GFileOutputStreamPrivate GFileOutputStreamPrivate;
struct _GFileOutputStream
{
GOutputStream parent_instance;
GFileOutputStreamPrivate *priv;
};
struct _GFileOutputStreamClass
{
GOutputStreamClass parent_class;
goffset (* tell) (GFileOutputStream *stream);
gboolean (* can_seek) (GFileOutputStream *stream);
gboolean (* seek) (GFileOutputStream *stream,
goffset offset,
GSeekType type,
GCancellable *cancellable,
GError **error);
gboolean (* can_truncate) (GFileOutputStream *stream);
gboolean (* truncate_fn) (GFileOutputStream *stream,
goffset size,
GCancellable *cancellable,
GError **error);
GFileInfo * (* query_info) (GFileOutputStream *stream,
const char *attributes,
GCancellable *cancellable,
GError **error);
void (* query_info_async) (GFileOutputStream *stream,
const char *attributes,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GFileInfo * (* query_info_finish) (GFileOutputStream *stream,
GAsyncResult *result,
GError **error);
char * (* get_etag) (GFileOutputStream *stream);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GInetAddressClass GInetAddressClass;
typedef struct _GInetAddressPrivate GInetAddressPrivate;
struct _GInetAddress
{
GObject parent_instance;
GInetAddressPrivate *priv;
};
struct _GInetAddressClass
{
GObjectClass parent_class;
gchar * (*to_string) (GInetAddress *address);
const guint8 * (*to_bytes) (GInetAddress *address);
};
typedef struct _GInetAddressMaskClass GInetAddressMaskClass;
typedef struct _GInetAddressMaskPrivate GInetAddressMaskPrivate;
struct _GInetAddressMask
{
GObject parent_instance;
GInetAddressMaskPrivate *priv;
};
struct _GInetAddressMaskClass
{
GObjectClass parent_class;
};
typedef struct _GSocketAddressClass GSocketAddressClass;
struct _GSocketAddress
{
GObject parent_instance;
};
struct _GSocketAddressClass
{
GObjectClass parent_class;
GSocketFamily (*get_family) (GSocketAddress *address);
gssize (*get_native_size) (GSocketAddress *address);
gboolean (*to_native) (GSocketAddress *address,
gpointer dest,
gsize destlen,
GError **error);
};
typedef struct _GInetSocketAddressClass GInetSocketAddressClass;
typedef struct _GInetSocketAddressPrivate GInetSocketAddressPrivate;
struct _GInetSocketAddress
{
GSocketAddress parent_instance;
GInetSocketAddressPrivate *priv;
};
struct _GInetSocketAddressClass
{
GSocketAddressClass parent_class;
};
typedef struct _GModule GModule;
typedef const gchar* (*GModuleCheckInit) (GModule *module);
typedef void (*GModuleUnload) (GModule *module);
typedef struct _GIOModuleScope GIOModuleScope;
typedef struct _GIOModuleClass GIOModuleClass;
typedef struct _GLoadableIconIface GLoadableIconIface;
struct _GLoadableIconIface
{
GTypeInterface g_iface;
GInputStream * (* load) (GLoadableIcon *icon,
int size,
char **type,
GCancellable *cancellable,
GError **error);
void (* load_async) (GLoadableIcon *icon,
int size,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GInputStream * (* load_finish) (GLoadableIcon *icon,
GAsyncResult *res,
char **type,
GError **error);
};
typedef struct _GMemoryInputStreamClass GMemoryInputStreamClass;
typedef struct _GMemoryInputStreamPrivate GMemoryInputStreamPrivate;
struct _GMemoryInputStream
{
GInputStream parent_instance;
GMemoryInputStreamPrivate *priv;
};
struct _GMemoryInputStreamClass
{
GInputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GMemoryOutputStreamClass GMemoryOutputStreamClass;
typedef struct _GMemoryOutputStreamPrivate GMemoryOutputStreamPrivate;
struct _GMemoryOutputStream
{
GOutputStream parent_instance;
GMemoryOutputStreamPrivate *priv;
};
struct _GMemoryOutputStreamClass
{
GOutputStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef gpointer (* GReallocFunc) (gpointer data,
gsize size);
typedef struct _GMountIface GMountIface;
struct _GMountIface
{
GTypeInterface g_iface;
void (* changed) (GMount *mount);
void (* unmounted) (GMount *mount);
GFile * (* get_root) (GMount *mount);
char * (* get_name) (GMount *mount);
GIcon * (* get_icon) (GMount *mount);
char * (* get_uuid) (GMount *mount);
GVolume * (* get_volume) (GMount *mount);
GDrive * (* get_drive) (GMount *mount);
gboolean (* can_unmount) (GMount *mount);
gboolean (* can_eject) (GMount *mount);
void (* unmount) (GMount *mount,
GMountUnmountFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* unmount_finish) (GMount *mount,
GAsyncResult *result,
GError **error);
void (* eject) (GMount *mount,
GMountUnmountFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_finish) (GMount *mount,
GAsyncResult *result,
GError **error);
void (* remount) (GMount *mount,
GMountMountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* remount_finish) (GMount *mount,
GAsyncResult *result,
GError **error);
void (* guess_content_type) (GMount *mount,
gboolean force_rescan,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gchar ** (* guess_content_type_finish) (GMount *mount,
GAsyncResult *result,
GError **error);
gchar ** (* guess_content_type_sync) (GMount *mount,
gboolean force_rescan,
GCancellable *cancellable,
GError **error);
void (* pre_unmount) (GMount *mount);
void (* unmount_with_operation) (GMount *mount,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* unmount_with_operation_finish) (GMount *mount,
GAsyncResult *result,
GError **error);
void (* eject_with_operation) (GMount *mount,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_with_operation_finish) (GMount *mount,
GAsyncResult *result,
GError **error);
GFile * (* get_default_location) (GMount *mount);
const gchar * (* get_sort_key) (GMount *mount);
GIcon * (* get_symbolic_icon) (GMount *mount);
};
typedef struct _GMountOperationClass GMountOperationClass;
typedef struct _GMountOperationPrivate GMountOperationPrivate;
struct _GMountOperation
{
GObject parent_instance;
GMountOperationPrivate *priv;
};
struct _GMountOperationClass
{
GObjectClass parent_class;
void (* ask_password) (GMountOperation *op,
const char *message,
const char *default_user,
const char *default_domain,
GAskPasswordFlags flags);
void (* ask_question) (GMountOperation *op,
const char *message,
const char *choices[]);
void (* reply) (GMountOperation *op,
GMountOperationResult result);
void (* aborted) (GMountOperation *op);
void (* show_processes) (GMountOperation *op,
const gchar *message,
GArray *processes,
const gchar *choices[]);
void (* show_unmount_progress) (GMountOperation *op,
const gchar *message,
gint64 time_left,
gint64 bytes_left);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
void (*_g_reserved7) (void);
void (*_g_reserved8) (void);
void (*_g_reserved9) (void);
};
typedef struct _GNativeSocketAddressClass GNativeSocketAddressClass;
typedef struct _GNativeSocketAddressPrivate GNativeSocketAddressPrivate;
struct _GNativeSocketAddress
{
GSocketAddress parent_instance;
GNativeSocketAddressPrivate *priv;
};
struct _GNativeSocketAddressClass
{
GSocketAddressClass parent_class;
};
typedef struct _GVolumeMonitorClass GVolumeMonitorClass;
struct _GVolumeMonitor
{
GObject parent_instance;
gpointer priv;
};
struct _GVolumeMonitorClass
{
GObjectClass parent_class;
void (* volume_added) (GVolumeMonitor *volume_monitor,
GVolume *volume);
void (* volume_removed) (GVolumeMonitor *volume_monitor,
GVolume *volume);
void (* volume_changed) (GVolumeMonitor *volume_monitor,
GVolume *volume);
void (* mount_added) (GVolumeMonitor *volume_monitor,
GMount *mount);
void (* mount_removed) (GVolumeMonitor *volume_monitor,
GMount *mount);
void (* mount_pre_unmount) (GVolumeMonitor *volume_monitor,
GMount *mount);
void (* mount_changed) (GVolumeMonitor *volume_monitor,
GMount *mount);
void (* drive_connected) (GVolumeMonitor *volume_monitor,
GDrive *drive);
void (* drive_disconnected) (GVolumeMonitor *volume_monitor,
GDrive *drive);
void (* drive_changed) (GVolumeMonitor *volume_monitor,
GDrive *drive);
gboolean (* is_supported) (void);
GList * (* get_connected_drives) (GVolumeMonitor *volume_monitor);
GList * (* get_volumes) (GVolumeMonitor *volume_monitor);
GList * (* get_mounts) (GVolumeMonitor *volume_monitor);
GVolume * (* get_volume_for_uuid) (GVolumeMonitor *volume_monitor,
const char *uuid);
GMount * (* get_mount_for_uuid) (GVolumeMonitor *volume_monitor,
const char *uuid);
GVolume * (* adopt_orphan_mount) (GMount *mount,
GVolumeMonitor *volume_monitor);
void (* drive_eject_button) (GVolumeMonitor *volume_monitor,
GDrive *drive);
void (* drive_stop_button) (GVolumeMonitor *volume_monitor,
GDrive *drive);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
};
typedef struct _GNativeVolumeMonitor GNativeVolumeMonitor;
typedef struct _GNativeVolumeMonitorClass GNativeVolumeMonitorClass;
struct _GNativeVolumeMonitor
{
GVolumeMonitor parent_instance;
};
struct _GNativeVolumeMonitorClass
{
GVolumeMonitorClass parent_class;
GMount * (* get_mount_for_mount_path) (const char *mount_path,
GCancellable *cancellable);
};
typedef struct _GNetworkAddressClass GNetworkAddressClass;
typedef struct _GNetworkAddressPrivate GNetworkAddressPrivate;
struct _GNetworkAddress
{
GObject parent_instance;
GNetworkAddressPrivate *priv;
};
struct _GNetworkAddressClass
{
GObjectClass parent_class;
};
typedef struct _GNetworkMonitorInterface GNetworkMonitorInterface;
struct _GNetworkMonitorInterface {
GTypeInterface g_iface;
void (*network_changed) (GNetworkMonitor *monitor,
gboolean network_available);
gboolean (*can_reach) (GNetworkMonitor *monitor,
GSocketConnectable *connectable,
GCancellable *cancellable,
GError **error);
void (*can_reach_async) (GNetworkMonitor *monitor,
GSocketConnectable *connectable,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (*can_reach_finish) (GNetworkMonitor *monitor,
GAsyncResult *result,
GError **error);
};
typedef struct _GNetworkServiceClass GNetworkServiceClass;
typedef struct _GNetworkServicePrivate GNetworkServicePrivate;
struct _GNetworkService
{
GObject parent_instance;
GNetworkServicePrivate *priv;
};
struct _GNetworkServiceClass
{
GObjectClass parent_class;
};
typedef struct _GPermissionPrivate GPermissionPrivate;
typedef struct _GPermissionClass GPermissionClass;
struct _GPermission
{
GObject parent_instance;
GPermissionPrivate *priv;
};
struct _GPermissionClass {
GObjectClass parent_class;
gboolean (*acquire) (GPermission *permission,
GCancellable *cancellable,
GError **error);
void (*acquire_async) (GPermission *permission,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (*acquire_finish) (GPermission *permission,
GAsyncResult *result,
GError **error);
gboolean (*release) (GPermission *permission,
GCancellable *cancellable,
GError **error);
void (*release_async) (GPermission *permission,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (*release_finish) (GPermission *permission,
GAsyncResult *result,
GError **error);
gpointer reserved[16];
};
typedef struct _GPollableInputStreamInterface GPollableInputStreamInterface;
struct _GPollableInputStreamInterface
{
GTypeInterface g_iface;
gboolean (*can_poll) (GPollableInputStream *stream);
gboolean (*is_readable) (GPollableInputStream *stream);
GSource * (*create_source) (GPollableInputStream *stream,
GCancellable *cancellable);
gssize (*read_nonblocking) (GPollableInputStream *stream,
void *buffer,
gsize count,
GError **error);
};
typedef struct _GPollableOutputStreamInterface GPollableOutputStreamInterface;
struct _GPollableOutputStreamInterface
{
GTypeInterface g_iface;
gboolean (*can_poll) (GPollableOutputStream *stream);
gboolean (*is_writable) (GPollableOutputStream *stream);
GSource * (*create_source) (GPollableOutputStream *stream,
GCancellable *cancellable);
gssize (*write_nonblocking) (GPollableOutputStream *stream,
const void *buffer,
gsize count,
GError **error);
GPollableReturn (*writev_nonblocking) (GPollableOutputStream *stream,
const GOutputVector *vectors,
gsize n_vectors,
gsize *bytes_written,
GError **error);
};
typedef struct _GProxyInterface GProxyInterface;
struct _GProxyInterface
{
GTypeInterface g_iface;
GIOStream * (* connect) (GProxy *proxy,
GIOStream *connection,
GProxyAddress *proxy_address,
GCancellable *cancellable,
GError **error);
void (* connect_async) (GProxy *proxy,
GIOStream *connection,
GProxyAddress *proxy_address,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GIOStream * (* connect_finish) (GProxy *proxy,
GAsyncResult *result,
GError **error);
gboolean (* supports_hostname) (GProxy *proxy);
};
typedef struct _GProxyAddressClass GProxyAddressClass;
typedef struct _GProxyAddressPrivate GProxyAddressPrivate;
struct _GProxyAddress
{
GInetSocketAddress parent_instance;
GProxyAddressPrivate *priv;
};
struct _GProxyAddressClass
{
GInetSocketAddressClass parent_class;
};
typedef struct _GSocketAddressEnumeratorClass GSocketAddressEnumeratorClass;
struct _GSocketAddressEnumerator
{
GObject parent_instance;
};
struct _GSocketAddressEnumeratorClass
{
GObjectClass parent_class;
GSocketAddress * (* next) (GSocketAddressEnumerator *enumerator,
GCancellable *cancellable,
GError **error);
void (* next_async) (GSocketAddressEnumerator *enumerator,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GSocketAddress * (* next_finish) (GSocketAddressEnumerator *enumerator,
GAsyncResult *result,
GError **error);
};
typedef struct _GProxyAddressEnumeratorClass GProxyAddressEnumeratorClass;
typedef struct _GProxyAddressEnumeratorPrivate GProxyAddressEnumeratorPrivate;
struct _GProxyAddressEnumerator
{
GSocketAddressEnumerator parent_instance;
GProxyAddressEnumeratorPrivate *priv;
};
struct _GProxyAddressEnumeratorClass
{
GSocketAddressEnumeratorClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
void (*_g_reserved7) (void);
};
typedef struct _GProxyResolverInterface GProxyResolverInterface;
struct _GProxyResolverInterface {
GTypeInterface g_iface;
gboolean (* is_supported) (GProxyResolver *resolver);
gchar ** (* lookup) (GProxyResolver *resolver,
const gchar *uri,
GCancellable *cancellable,
GError **error);
void (* lookup_async) (GProxyResolver *resolver,
const gchar *uri,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gchar ** (* lookup_finish) (GProxyResolver *resolver,
GAsyncResult *result,
GError **error);
};
typedef struct _GResolverPrivate GResolverPrivate;
typedef struct _GResolverClass GResolverClass;
struct _GResolver {
GObject parent_instance;
GResolverPrivate *priv;
};
struct _GResolverClass {
GObjectClass parent_class;
void ( *reload) (GResolver *resolver);
GList * ( *lookup_by_name) (GResolver *resolver,
const gchar *hostname,
GCancellable *cancellable,
GError **error);
void ( *lookup_by_name_async) (GResolver *resolver,
const gchar *hostname,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GList * ( *lookup_by_name_finish) (GResolver *resolver,
GAsyncResult *result,
GError **error);
gchar * ( *lookup_by_address) (GResolver *resolver,
GInetAddress *address,
GCancellable *cancellable,
GError **error);
void ( *lookup_by_address_async) (GResolver *resolver,
GInetAddress *address,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gchar * ( *lookup_by_address_finish) (GResolver *resolver,
GAsyncResult *result,
GError **error);
GList * ( *lookup_service) (GResolver *resolver,
const gchar *rrname,
GCancellable *cancellable,
GError **error);
void ( *lookup_service_async) (GResolver *resolver,
const gchar *rrname,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GList * ( *lookup_service_finish) (GResolver *resolver,
GAsyncResult *result,
GError **error);
GList * ( *lookup_records) (GResolver *resolver,
const gchar *rrname,
GResolverRecordType record_type,
GCancellable *cancellable,
GError **error);
void ( *lookup_records_async) (GResolver *resolver,
const gchar *rrname,
GResolverRecordType record_type,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GList * ( *lookup_records_finish) (GResolver *resolver,
GAsyncResult *result,
GError **error);
void ( *lookup_by_name_with_flags_async) (GResolver *resolver,
const gchar *hostname,
GResolverNameLookupFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GList * ( *lookup_by_name_with_flags_finish) (GResolver *resolver,
GAsyncResult *result,
GError **error);
GList * ( *lookup_by_name_with_flags) (GResolver *resolver,
const gchar *hostname,
GResolverNameLookupFlags flags,
GCancellable *cancellable,
GError **error);
};
typedef struct _GStaticResource GStaticResource;
struct _GStaticResource {
const guint8 *data;
gsize data_len;
GResource *resource;
GStaticResource *next;
gpointer padding;
};
typedef struct _GSeekableIface GSeekableIface;
struct _GSeekableIface
{
GTypeInterface g_iface;
goffset (* tell) (GSeekable *seekable);
gboolean (* can_seek) (GSeekable *seekable);
gboolean (* seek) (GSeekable *seekable,
goffset offset,
GSeekType type,
GCancellable *cancellable,
GError **error);
gboolean (* can_truncate) (GSeekable *seekable);
gboolean (* truncate_fn) (GSeekable *seekable,
goffset offset,
GCancellable *cancellable,
GError **error);
};
typedef struct _GSettingsSchemaSource GSettingsSchemaSource;
typedef struct _GSettingsSchema GSettingsSchema;
typedef struct _GSettingsSchemaKey GSettingsSchemaKey;
typedef struct _GSettingsPrivate GSettingsPrivate;
typedef struct _GSettingsClass GSettingsClass;
struct _GSettingsClass
{
GObjectClass parent_class;
void (*writable_changed) (GSettings *settings,
const gchar *key);
void (*changed) (GSettings *settings,
const gchar *key);
gboolean (*writable_change_event) (GSettings *settings,
GQuark key);
gboolean (*change_event) (GSettings *settings,
const GQuark *keys,
gint n_keys);
gpointer padding[20];
};
struct _GSettings
{
GObject parent_instance;
GSettingsPrivate *priv;
};
typedef GVariant * (*GSettingsBindSetMapping) (const GValue *value,
const GVariantType *expected_type,
gpointer user_data);
typedef gboolean (*GSettingsBindGetMapping) (GValue *value,
GVariant *variant,
gpointer user_data);
typedef gboolean (*GSettingsGetMapping) (GVariant *value,
gpointer *result,
gpointer user_data);
typedef struct _GSimpleActionGroupPrivate GSimpleActionGroupPrivate;
typedef struct _GSimpleActionGroupClass GSimpleActionGroupClass;
struct _GSimpleActionGroup
{
GObject parent_instance;
GSimpleActionGroupPrivate *priv;
};
struct _GSimpleActionGroupClass
{
GObjectClass parent_class;
gpointer padding[12];
};
typedef struct _GSimpleAsyncResultClass GSimpleAsyncResultClass;
typedef struct _GSocketClientPrivate GSocketClientPrivate;
typedef struct _GSocketClientClass GSocketClientClass;
struct _GSocketClientClass
{
GObjectClass parent_class;
void (* event) (GSocketClient *client,
GSocketClientEvent event,
GSocketConnectable *connectable,
GIOStream *connection);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
};
struct _GSocketClient
{
GObject parent_instance;
GSocketClientPrivate *priv;
};
typedef struct _GSocketConnectableIface GSocketConnectableIface;
struct _GSocketConnectableIface
{
GTypeInterface g_iface;
GSocketAddressEnumerator * (* enumerate) (GSocketConnectable *connectable);
GSocketAddressEnumerator * (* proxy_enumerate) (GSocketConnectable *connectable);
gchar * (* to_string) (GSocketConnectable *connectable);
};
typedef struct _GSocketPrivate GSocketPrivate;
typedef struct _GSocketClass GSocketClass;
struct _GSocketClass
{
GObjectClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
void (*_g_reserved7) (void);
void (*_g_reserved8) (void);
void (*_g_reserved9) (void);
void (*_g_reserved10) (void);
};
struct _GSocket
{
GObject parent_instance;
GSocketPrivate *priv;
};
typedef struct _GSocketConnectionPrivate GSocketConnectionPrivate;
typedef struct _GSocketConnectionClass GSocketConnectionClass;
struct _GSocketConnectionClass
{
GIOStreamClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
};
struct _GSocketConnection
{
GIOStream parent_instance;
GSocketConnectionPrivate *priv;
};
typedef struct _GSocketControlMessagePrivate GSocketControlMessagePrivate;
typedef struct _GSocketControlMessageClass GSocketControlMessageClass;
struct _GSocketControlMessageClass
{
GObjectClass parent_class;
gsize (* get_size) (GSocketControlMessage *message);
int (* get_level) (GSocketControlMessage *message);
int (* get_type) (GSocketControlMessage *message);
void (* serialize) (GSocketControlMessage *message,
gpointer data);
GSocketControlMessage *(* deserialize) (int level,
int type,
gsize size,
gpointer data);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
struct _GSocketControlMessage
{
GObject parent_instance;
GSocketControlMessagePrivate *priv;
};
typedef struct _GSocketListenerPrivate GSocketListenerPrivate;
typedef struct _GSocketListenerClass GSocketListenerClass;
struct _GSocketListenerClass
{
GObjectClass parent_class;
void (* changed) (GSocketListener *listener);
void (* event) (GSocketListener *listener,
GSocketListenerEvent event,
GSocket *socket);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
};
struct _GSocketListener
{
GObject parent_instance;
GSocketListenerPrivate *priv;
};
typedef struct _GSocketServicePrivate GSocketServicePrivate;
typedef struct _GSocketServiceClass GSocketServiceClass;
struct _GSocketServiceClass
{
GSocketListenerClass parent_class;
gboolean (* incoming) (GSocketService *service,
GSocketConnection *connection,
GObject *source_object);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
};
struct _GSocketService
{
GSocketListener parent_instance;
GSocketServicePrivate *priv;
};
typedef struct _GSimpleProxyResolver GSimpleProxyResolver;
typedef struct _GSimpleProxyResolverPrivate GSimpleProxyResolverPrivate;
typedef struct _GSimpleProxyResolverClass GSimpleProxyResolverClass;
struct _GSimpleProxyResolver
{
GObject parent_instance;
GSimpleProxyResolverPrivate *priv;
};
struct _GSimpleProxyResolverClass
{
GObjectClass parent_class;
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
typedef struct _GTaskClass GTaskClass;
typedef void (*GTaskThreadFunc) (GTask *task,
gpointer source_object,
gpointer task_data,
GCancellable *cancellable);
typedef struct _GTcpConnectionPrivate GTcpConnectionPrivate;
typedef struct _GTcpConnectionClass GTcpConnectionClass;
struct _GTcpConnectionClass
{
GSocketConnectionClass parent_class;
};
struct _GTcpConnection
{
GSocketConnection parent_instance;
GTcpConnectionPrivate *priv;
};
typedef struct _GTcpWrapperConnectionPrivate GTcpWrapperConnectionPrivate;
typedef struct _GTcpWrapperConnectionClass GTcpWrapperConnectionClass;
struct _GTcpWrapperConnectionClass
{
GTcpConnectionClass parent_class;
};
struct _GTcpWrapperConnection
{
GTcpConnection parent_instance;
GTcpWrapperConnectionPrivate *priv;
};
typedef struct _GThemedIconClass GThemedIconClass;
typedef struct _GThreadedSocketServicePrivate GThreadedSocketServicePrivate;
typedef struct _GThreadedSocketServiceClass GThreadedSocketServiceClass;
struct _GThreadedSocketServiceClass
{
GSocketServiceClass parent_class;
gboolean (* run) (GThreadedSocketService *service,
GSocketConnection *connection,
GObject *source_object);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
};
struct _GThreadedSocketService
{
GSocketService parent_instance;
GThreadedSocketServicePrivate *priv;
};
typedef struct _GTlsBackend GTlsBackend;
typedef struct _GTlsBackendInterface GTlsBackendInterface;
struct _GTlsBackendInterface
{
GTypeInterface g_iface;
gboolean ( *supports_tls) (GTlsBackend *backend);
GType ( *get_certificate_type) (void);
GType ( *get_client_connection_type) (void);
GType ( *get_server_connection_type) (void);
GType ( *get_file_database_type) (void);
GTlsDatabase * ( *get_default_database) (GTlsBackend *backend);
gboolean ( *supports_dtls) (GTlsBackend *backend);
GType ( *get_dtls_client_connection_type) (void);
GType ( *get_dtls_server_connection_type) (void);
};
typedef struct _GTlsCertificateClass GTlsCertificateClass;
typedef struct _GTlsCertificatePrivate GTlsCertificatePrivate;
struct _GTlsCertificate {
GObject parent_instance;
GTlsCertificatePrivate *priv;
};
struct _GTlsCertificateClass
{
GObjectClass parent_class;
GTlsCertificateFlags (* verify) (GTlsCertificate *cert,
GSocketConnectable *identity,
GTlsCertificate *trusted_ca);
gpointer padding[8];
};
typedef struct _GTlsConnectionClass GTlsConnectionClass;
typedef struct _GTlsConnectionPrivate GTlsConnectionPrivate;
struct _GTlsConnection {
GIOStream parent_instance;
GTlsConnectionPrivate *priv;
};
struct _GTlsConnectionClass
{
GIOStreamClass parent_class;
gboolean ( *accept_certificate) (GTlsConnection *connection,
GTlsCertificate *peer_cert,
GTlsCertificateFlags errors);
gboolean ( *handshake ) (GTlsConnection *conn,
GCancellable *cancellable,
GError **error);
void ( *handshake_async ) (GTlsConnection *conn,
int io_priority,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean ( *handshake_finish ) (GTlsConnection *conn,
GAsyncResult *result,
GError **error);
gpointer padding[8];
};
typedef struct _GTlsClientConnectionInterface GTlsClientConnectionInterface;
struct _GTlsClientConnectionInterface
{
GTypeInterface g_iface;
void ( *copy_session_state ) (GTlsClientConnection *conn,
GTlsClientConnection *source);
};
typedef struct _GTlsDatabaseClass GTlsDatabaseClass;
typedef struct _GTlsDatabasePrivate GTlsDatabasePrivate;
struct _GTlsDatabase
{
GObject parent_instance;
GTlsDatabasePrivate *priv;
};
struct _GTlsDatabaseClass
{
GObjectClass parent_class;
GTlsCertificateFlags (*verify_chain) (GTlsDatabase *self,
GTlsCertificate *chain,
const gchar *purpose,
GSocketConnectable *identity,
GTlsInteraction *interaction,
GTlsDatabaseVerifyFlags flags,
GCancellable *cancellable,
GError **error);
void (*verify_chain_async) (GTlsDatabase *self,
GTlsCertificate *chain,
const gchar *purpose,
GSocketConnectable *identity,
GTlsInteraction *interaction,
GTlsDatabaseVerifyFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GTlsCertificateFlags (*verify_chain_finish) (GTlsDatabase *self,
GAsyncResult *result,
GError **error);
gchar* (*create_certificate_handle) (GTlsDatabase *self,
GTlsCertificate *certificate);
GTlsCertificate* (*lookup_certificate_for_handle) (GTlsDatabase *self,
const gchar *handle,
GTlsInteraction *interaction,
GTlsDatabaseLookupFlags flags,
GCancellable *cancellable,
GError **error);
void (*lookup_certificate_for_handle_async) (GTlsDatabase *self,
const gchar *handle,
GTlsInteraction *interaction,
GTlsDatabaseLookupFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GTlsCertificate* (*lookup_certificate_for_handle_finish) (GTlsDatabase *self,
GAsyncResult *result,
GError **error);
GTlsCertificate* (*lookup_certificate_issuer) (GTlsDatabase *self,
GTlsCertificate *certificate,
GTlsInteraction *interaction,
GTlsDatabaseLookupFlags flags,
GCancellable *cancellable,
GError **error);
void (*lookup_certificate_issuer_async) (GTlsDatabase *self,
GTlsCertificate *certificate,
GTlsInteraction *interaction,
GTlsDatabaseLookupFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GTlsCertificate* (*lookup_certificate_issuer_finish) (GTlsDatabase *self,
GAsyncResult *result,
GError **error);
GList* (*lookup_certificates_issued_by) (GTlsDatabase *self,
GByteArray *issuer_raw_dn,
GTlsInteraction *interaction,
GTlsDatabaseLookupFlags flags,
GCancellable *cancellable,
GError **error);
void (*lookup_certificates_issued_by_async) (GTlsDatabase *self,
GByteArray *issuer_raw_dn,
GTlsInteraction *interaction,
GTlsDatabaseLookupFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GList* (*lookup_certificates_issued_by_finish) (GTlsDatabase *self,
GAsyncResult *result,
GError **error);
gpointer padding[16];
};
typedef struct _GTlsFileDatabaseInterface GTlsFileDatabaseInterface;
struct _GTlsFileDatabaseInterface
{
GTypeInterface g_iface;
gpointer padding[8];
};
typedef struct _GTlsInteractionClass GTlsInteractionClass;
typedef struct _GTlsInteractionPrivate GTlsInteractionPrivate;
struct _GTlsInteraction
{
GObject parent_instance;
GTlsInteractionPrivate *priv;
};
struct _GTlsInteractionClass
{
GObjectClass parent_class;
GTlsInteractionResult (* ask_password) (GTlsInteraction *interaction,
GTlsPassword *password,
GCancellable *cancellable,
GError **error);
void (* ask_password_async) (GTlsInteraction *interaction,
GTlsPassword *password,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GTlsInteractionResult (* ask_password_finish) (GTlsInteraction *interaction,
GAsyncResult *result,
GError **error);
GTlsInteractionResult (* request_certificate) (GTlsInteraction *interaction,
GTlsConnection *connection,
GTlsCertificateRequestFlags flags,
GCancellable *cancellable,
GError **error);
void (* request_certificate_async) (GTlsInteraction *interaction,
GTlsConnection *connection,
GTlsCertificateRequestFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
GTlsInteractionResult (* request_certificate_finish) (GTlsInteraction *interaction,
GAsyncResult *result,
GError **error);
gpointer padding[21];
};
typedef struct _GTlsServerConnectionInterface GTlsServerConnectionInterface;
struct _GTlsServerConnectionInterface
{
GTypeInterface g_iface;
};
typedef struct _GTlsPasswordClass GTlsPasswordClass;
typedef struct _GTlsPasswordPrivate GTlsPasswordPrivate;
struct _GTlsPassword
{
GObject parent_instance;
GTlsPasswordPrivate *priv;
};
struct _GTlsPasswordClass
{
GObjectClass parent_class;
const guchar * ( *get_value) (GTlsPassword *password,
gsize *length);
void ( *set_value) (GTlsPassword *password,
guchar *value,
gssize length,
GDestroyNotify destroy);
const gchar* ( *get_default_warning) (GTlsPassword *password);
gpointer padding[4];
};
typedef GFile * (* GVfsFileLookupFunc) (GVfs *vfs,
const char *identifier,
gpointer user_data);
typedef struct _GVfsClass GVfsClass;
struct _GVfs
{
GObject parent_instance;
};
struct _GVfsClass
{
GObjectClass parent_class;
gboolean (* is_active) (GVfs *vfs);
GFile * (* get_file_for_path) (GVfs *vfs,
const char *path);
GFile * (* get_file_for_uri) (GVfs *vfs,
const char *uri);
const gchar * const * (* get_supported_uri_schemes) (GVfs *vfs);
GFile * (* parse_name) (GVfs *vfs,
const char *parse_name);
void (* local_file_add_info) (GVfs *vfs,
const char *filename,
guint64 device,
GFileAttributeMatcher *attribute_matcher,
GFileInfo *info,
GCancellable *cancellable,
gpointer *extra_data,
GDestroyNotify *free_extra_data);
void (* add_writable_namespaces) (GVfs *vfs,
GFileAttributeInfoList *list);
gboolean (* local_file_set_attributes) (GVfs *vfs,
const char *filename,
GFileInfo *info,
GFileQueryInfoFlags flags,
GCancellable *cancellable,
GError **error);
void (* local_file_removed) (GVfs *vfs,
const char *filename);
void (* local_file_moved) (GVfs *vfs,
const char *source,
const char *dest);
GIcon * (* deserialize_icon) (GVfs *vfs,
GVariant *value);
void (*_g_reserved1) (void);
void (*_g_reserved2) (void);
void (*_g_reserved3) (void);
void (*_g_reserved4) (void);
void (*_g_reserved5) (void);
void (*_g_reserved6) (void);
};
typedef struct _GVolumeIface GVolumeIface;
struct _GVolumeIface
{
GTypeInterface g_iface;
void (* changed) (GVolume *volume);
void (* removed) (GVolume *volume);
char * (* get_name) (GVolume *volume);
GIcon * (* get_icon) (GVolume *volume);
char * (* get_uuid) (GVolume *volume);
GDrive * (* get_drive) (GVolume *volume);
GMount * (* get_mount) (GVolume *volume);
gboolean (* can_mount) (GVolume *volume);
gboolean (* can_eject) (GVolume *volume);
void (* mount_fn) (GVolume *volume,
GMountMountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* mount_finish) (GVolume *volume,
GAsyncResult *result,
GError **error);
void (* eject) (GVolume *volume,
GMountUnmountFlags flags,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_finish) (GVolume *volume,
GAsyncResult *result,
GError **error);
char * (* get_identifier) (GVolume *volume,
const char *kind);
char ** (* enumerate_identifiers) (GVolume *volume);
gboolean (* should_automount) (GVolume *volume);
GFile * (* get_activation_root) (GVolume *volume);
void (* eject_with_operation) (GVolume *volume,
GMountUnmountFlags flags,
GMountOperation *mount_operation,
GCancellable *cancellable,
GAsyncReadyCallback callback,
gpointer user_data);
gboolean (* eject_with_operation_finish) (GVolume *volume,
GAsyncResult *result,
GError **error);
const gchar * (* get_sort_key) (GVolume *volume);
GIcon * (* get_symbolic_icon) (GVolume *volume);
};
typedef struct _GZlibCompressorClass GZlibCompressorClass;
struct _GZlibCompressorClass
{
GObjectClass parent_class;
};
typedef struct _GZlibDecompressorClass GZlibDecompressorClass;
struct _GZlibDecompressorClass
{
GObjectClass parent_class;
};
typedef struct _GDBusInterfaceIface GDBusInterfaceIface;
struct _GDBusInterfaceIface
{
GTypeInterface parent_iface;
GDBusInterfaceInfo *(*get_info) (GDBusInterface *interface_);
GDBusObject *(*get_object) (GDBusInterface *interface_);
void (*set_object) (GDBusInterface *interface_,
GDBusObject *object);
GDBusObject *(*dup_object) (GDBusInterface *interface_);
};
typedef struct _GDBusInterfaceSkeletonClass GDBusInterfaceSkeletonClass;
typedef struct _GDBusInterfaceSkeletonPrivate GDBusInterfaceSkeletonPrivate;
struct _GDBusInterfaceSkeleton
{
GObject parent_instance;
GDBusInterfaceSkeletonPrivate *priv;
};
struct _GDBusInterfaceSkeletonClass
{
GObjectClass parent_class;
GDBusInterfaceInfo *(*get_info) (GDBusInterfaceSkeleton *interface_);
GDBusInterfaceVTable *(*get_vtable) (GDBusInterfaceSkeleton *interface_);
GVariant *(*get_properties) (GDBusInterfaceSkeleton *interface_);
void (*flush) (GDBusInterfaceSkeleton *interface_);
gpointer vfunc_padding[8];
gboolean (*g_authorize_method) (GDBusInterfaceSkeleton *interface_,
GDBusMethodInvocation *invocation);
gpointer signal_padding[8];
};
typedef struct _GDBusObjectIface GDBusObjectIface;
struct _GDBusObjectIface
{
GTypeInterface parent_iface;
const gchar *(*get_object_path) (GDBusObject *object);
GList *(*get_interfaces) (GDBusObject *object);
GDBusInterface *(*get_interface) (GDBusObject *object,
const gchar *interface_name);
void (*interface_added) (GDBusObject *object,
GDBusInterface *interface_);
void (*interface_removed) (GDBusObject *object,
GDBusInterface *interface_);
};
typedef struct _GDBusObjectSkeletonClass GDBusObjectSkeletonClass;
typedef struct _GDBusObjectSkeletonPrivate GDBusObjectSkeletonPrivate;
struct _GDBusObjectSkeleton
{
GObject parent_instance;
GDBusObjectSkeletonPrivate *priv;
};
struct _GDBusObjectSkeletonClass
{
GObjectClass parent_class;
gboolean (*authorize_method) (GDBusObjectSkeleton *object,
GDBusInterfaceSkeleton *interface_,
GDBusMethodInvocation *invocation);
gpointer padding[8];
};
typedef struct _GDBusObjectProxyClass GDBusObjectProxyClass;
typedef struct _GDBusObjectProxyPrivate GDBusObjectProxyPrivate;
struct _GDBusObjectProxy
{
GObject parent_instance;
GDBusObjectProxyPrivate *priv;
};
struct _GDBusObjectProxyClass
{
GObjectClass parent_class;
gpointer padding[8];
};
typedef struct _GDBusObjectManagerIface GDBusObjectManagerIface;
struct _GDBusObjectManagerIface
{
GTypeInterface parent_iface;
const gchar *(*get_object_path) (GDBusObjectManager *manager);
GList *(*get_objects) (GDBusObjectManager *manager);
GDBusObject *(*get_object) (GDBusObjectManager *manager,
const gchar *object_path);
GDBusInterface *(*get_interface) (GDBusObjectManager *manager,
const gchar *object_path,
const gchar *interface_name);
void (*object_added) (GDBusObjectManager *manager,
GDBusObject *object);
void (*object_removed) (GDBusObjectManager *manager,
GDBusObject *object);
void (*interface_added) (GDBusObjectManager *manager,
GDBusObject *object,
GDBusInterface *interface_);
void (*interface_removed) (GDBusObjectManager *manager,
GDBusObject *object,
GDBusInterface *interface_);
};
typedef struct _GDBusObjectManagerClientClass GDBusObjectManagerClientClass;
typedef struct _GDBusObjectManagerClientPrivate GDBusObjectManagerClientPrivate;
struct _GDBusObjectManagerClient
{
GObject parent_instance;
GDBusObjectManagerClientPrivate *priv;
};
struct _GDBusObjectManagerClientClass
{
GObjectClass parent_class;
void (*interface_proxy_signal) (GDBusObjectManagerClient *manager,
GDBusObjectProxy *object_proxy,
GDBusProxy *interface_proxy,
const gchar *sender_name,
const gchar *signal_name,
GVariant *parameters);
void (*interface_proxy_properties_changed) (GDBusObjectManagerClient *manager,
GDBusObjectProxy *object_proxy,
GDBusProxy *interface_proxy,
GVariant *changed_properties,
const gchar* const *invalidated_properties);
gpointer padding[8];
};
typedef struct _GDBusObjectManagerServerClass GDBusObjectManagerServerClass;
typedef struct _GDBusObjectManagerServerPrivate GDBusObjectManagerServerPrivate;
struct _GDBusObjectManagerServer
{
GObject parent_instance;
GDBusObjectManagerServerPrivate *priv;
};
struct _GDBusObjectManagerServerClass
{
GObjectClass parent_class;
gpointer padding[8];
};
typedef struct _GRemoteActionGroupInterface GRemoteActionGroupInterface;
struct _GRemoteActionGroupInterface
{
GTypeInterface g_iface;
void (* activate_action_full) (GRemoteActionGroup *remote,
const gchar *action_name,
GVariant *parameter,
GVariant *platform_data);
void (* change_action_state_full) (GRemoteActionGroup *remote,
const gchar *action_name,
GVariant *value,
GVariant *platform_data);
};
typedef struct _GMenuModelPrivate GMenuModelPrivate;
typedef struct _GMenuModelClass GMenuModelClass;
typedef struct _GMenuAttributeIterPrivate GMenuAttributeIterPrivate;
typedef struct _GMenuAttributeIterClass GMenuAttributeIterClass;
typedef struct _GMenuAttributeIter GMenuAttributeIter;
typedef struct _GMenuLinkIterPrivate GMenuLinkIterPrivate;
typedef struct _GMenuLinkIterClass GMenuLinkIterClass;
typedef struct _GMenuLinkIter GMenuLinkIter;
struct _GMenuModel
{
GObject parent_instance;
GMenuModelPrivate *priv;
};
struct _GMenuModelClass
{
GObjectClass parent_class;
gboolean (*is_mutable) (GMenuModel *model);
gint (*get_n_items) (GMenuModel *model);
void (*get_item_attributes) (GMenuModel *model,
gint item_index,
GHashTable **attributes);
GMenuAttributeIter * (*iterate_item_attributes) (GMenuModel *model,
gint item_index);
GVariant * (*get_item_attribute_value) (GMenuModel *model,
gint item_index,
const gchar *attribute,
const GVariantType *expected_type);
void (*get_item_links) (GMenuModel *model,
gint item_index,
GHashTable **links);
GMenuLinkIter * (*iterate_item_links) (GMenuModel *model,
gint item_index);
GMenuModel * (*get_item_link) (GMenuModel *model,
gint item_index,
const gchar *link);
};
struct _GMenuAttributeIter
{
GObject parent_instance;
GMenuAttributeIterPrivate *priv;
};
struct _GMenuAttributeIterClass
{
GObjectClass parent_class;
gboolean (*get_next) (GMenuAttributeIter *iter,
const gchar **out_name,
GVariant **value);
};
struct _GMenuLinkIter
{
GObject parent_instance;
GMenuLinkIterPrivate *priv;
};
struct _GMenuLinkIterClass
{
GObjectClass parent_class;
gboolean (*get_next) (GMenuLinkIter *iter,
const gchar **out_link,
GMenuModel **value);
};
typedef struct _GMenuItem GMenuItem;
typedef struct _GMenu GMenu;
typedef struct _GDBusMenuModel GDBusMenuModel;
typedef struct _GListModel GListModel; typedef struct _GListModelInterface GListModelInterface; typedef GListModel *GListModel_autoptr; typedef GList *GListModel_listautoptr; typedef GSList *GListModel_slistautoptr; typedef GQueue *GListModel_queueautoptr;
struct _GListModelInterface
{
GTypeInterface g_iface;
GType (* get_item_type) (GListModel *list);
guint (* get_n_items) (GListModel *list);
gpointer (* get_item) (GListModel *list,
guint position);
};
typedef struct _GListStore GListStore; typedef struct { GObjectClass parent_class; } GListStoreClass; typedef GListStore *GListStore_autoptr; typedef GList *GListStore_listautoptr; typedef GSList *GListStore_slistautoptr; typedef GQueue *GListStore_queueautoptr;
typedef GAction *GAction_autoptr; typedef GList *GAction_listautoptr; typedef GSList *GAction_slistautoptr; typedef GQueue *GAction_queueautoptr;
typedef GActionMap *GActionMap_autoptr; typedef GList *GActionMap_listautoptr; typedef GSList *GActionMap_slistautoptr; typedef GQueue *GActionMap_queueautoptr;
typedef GAppInfo *GAppInfo_autoptr; typedef GList *GAppInfo_listautoptr; typedef GSList *GAppInfo_slistautoptr; typedef GQueue *GAppInfo_queueautoptr;
typedef GAppLaunchContext *GAppLaunchContext_autoptr; typedef GList *GAppLaunchContext_listautoptr; typedef GSList *GAppLaunchContext_slistautoptr; typedef GQueue *GAppLaunchContext_queueautoptr;
typedef GAppInfoMonitor *GAppInfoMonitor_autoptr; typedef GList *GAppInfoMonitor_listautoptr; typedef GSList *GAppInfoMonitor_slistautoptr; typedef GQueue *GAppInfoMonitor_queueautoptr;
typedef GApplicationCommandLine *GApplicationCommandLine_autoptr; typedef GList *GApplicationCommandLine_listautoptr; typedef GSList *GApplicationCommandLine_slistautoptr; typedef GQueue *GApplicationCommandLine_queueautoptr;
typedef GApplication *GApplication_autoptr; typedef GList *GApplication_listautoptr; typedef GSList *GApplication_slistautoptr; typedef GQueue *GApplication_queueautoptr;
typedef GAsyncInitable *GAsyncInitable_autoptr; typedef GList *GAsyncInitable_listautoptr; typedef GSList *GAsyncInitable_slistautoptr; typedef GQueue *GAsyncInitable_queueautoptr;
typedef GAsyncResult *GAsyncResult_autoptr; typedef GList *GAsyncResult_listautoptr; typedef GSList *GAsyncResult_slistautoptr; typedef GQueue *GAsyncResult_queueautoptr;
typedef GBufferedInputStream *GBufferedInputStream_autoptr; typedef GList *GBufferedInputStream_listautoptr; typedef GSList *GBufferedInputStream_slistautoptr; typedef GQueue *GBufferedInputStream_queueautoptr;
typedef GBufferedOutputStream *GBufferedOutputStream_autoptr; typedef GList *GBufferedOutputStream_listautoptr; typedef GSList *GBufferedOutputStream_slistautoptr; typedef GQueue *GBufferedOutputStream_queueautoptr;
typedef GBytesIcon *GBytesIcon_autoptr; typedef GList *GBytesIcon_listautoptr; typedef GSList *GBytesIcon_slistautoptr; typedef GQueue *GBytesIcon_queueautoptr;
typedef GCancellable *GCancellable_autoptr; typedef GList *GCancellable_listautoptr; typedef GSList *GCancellable_slistautoptr; typedef GQueue *GCancellable_queueautoptr;
typedef GCharsetConverter *GCharsetConverter_autoptr; typedef GList *GCharsetConverter_listautoptr; typedef GSList *GCharsetConverter_slistautoptr; typedef GQueue *GCharsetConverter_queueautoptr;
typedef GConverter *GConverter_autoptr; typedef GList *GConverter_listautoptr; typedef GSList *GConverter_slistautoptr; typedef GQueue *GConverter_queueautoptr;
typedef GConverterInputStream *GConverterInputStream_autoptr; typedef GList *GConverterInputStream_listautoptr; typedef GSList *GConverterInputStream_slistautoptr; typedef GQueue *GConverterInputStream_queueautoptr;
typedef GConverterOutputStream *GConverterOutputStream_autoptr; typedef GList *GConverterOutputStream_listautoptr; typedef GSList *GConverterOutputStream_slistautoptr; typedef GQueue *GConverterOutputStream_queueautoptr;
typedef GCredentials *GCredentials_autoptr; typedef GList *GCredentials_listautoptr; typedef GSList *GCredentials_slistautoptr; typedef GQueue *GCredentials_queueautoptr;
typedef GDatagramBased *GDatagramBased_autoptr; typedef GList *GDatagramBased_listautoptr; typedef GSList *GDatagramBased_slistautoptr; typedef GQueue *GDatagramBased_queueautoptr;
typedef GDataInputStream *GDataInputStream_autoptr; typedef GList *GDataInputStream_listautoptr; typedef GSList *GDataInputStream_slistautoptr; typedef GQueue *GDataInputStream_queueautoptr;
typedef GDataOutputStream *GDataOutputStream_autoptr; typedef GList *GDataOutputStream_listautoptr; typedef GSList *GDataOutputStream_slistautoptr; typedef GQueue *GDataOutputStream_queueautoptr;
typedef GDBusActionGroup *GDBusActionGroup_autoptr; typedef GList *GDBusActionGroup_listautoptr; typedef GSList *GDBusActionGroup_slistautoptr; typedef GQueue *GDBusActionGroup_queueautoptr;
typedef GDBusAuthObserver *GDBusAuthObserver_autoptr; typedef GList *GDBusAuthObserver_listautoptr; typedef GSList *GDBusAuthObserver_slistautoptr; typedef GQueue *GDBusAuthObserver_queueautoptr;
typedef GDBusConnection *GDBusConnection_autoptr; typedef GList *GDBusConnection_listautoptr; typedef GSList *GDBusConnection_slistautoptr; typedef GQueue *GDBusConnection_queueautoptr;
typedef GDBusInterface *GDBusInterface_autoptr; typedef GList *GDBusInterface_listautoptr; typedef GSList *GDBusInterface_slistautoptr; typedef GQueue *GDBusInterface_queueautoptr;
typedef GDBusInterfaceSkeleton *GDBusInterfaceSkeleton_autoptr; typedef GList *GDBusInterfaceSkeleton_listautoptr; typedef GSList *GDBusInterfaceSkeleton_slistautoptr; typedef GQueue *GDBusInterfaceSkeleton_queueautoptr;
typedef GDBusMenuModel *GDBusMenuModel_autoptr; typedef GList *GDBusMenuModel_listautoptr; typedef GSList *GDBusMenuModel_slistautoptr; typedef GQueue *GDBusMenuModel_queueautoptr;
typedef GDBusMessage *GDBusMessage_autoptr; typedef GList *GDBusMessage_listautoptr; typedef GSList *GDBusMessage_slistautoptr; typedef GQueue *GDBusMessage_queueautoptr;
typedef GDBusMethodInvocation *GDBusMethodInvocation_autoptr; typedef GList *GDBusMethodInvocation_listautoptr; typedef GSList *GDBusMethodInvocation_slistautoptr; typedef GQueue *GDBusMethodInvocation_queueautoptr;
typedef GDBusNodeInfo *GDBusNodeInfo_autoptr; typedef GList *GDBusNodeInfo_listautoptr; typedef GSList *GDBusNodeInfo_slistautoptr; typedef GQueue *GDBusNodeInfo_queueautoptr;
typedef GDBusObject *GDBusObject_autoptr; typedef GList *GDBusObject_listautoptr; typedef GSList *GDBusObject_slistautoptr; typedef GQueue *GDBusObject_queueautoptr;
typedef GDBusObjectManagerClient *GDBusObjectManagerClient_autoptr; typedef GList *GDBusObjectManagerClient_listautoptr; typedef GSList *GDBusObjectManagerClient_slistautoptr; typedef GQueue *GDBusObjectManagerClient_queueautoptr;
typedef GDBusObjectManager *GDBusObjectManager_autoptr; typedef GList *GDBusObjectManager_listautoptr; typedef GSList *GDBusObjectManager_slistautoptr; typedef GQueue *GDBusObjectManager_queueautoptr;
typedef GDBusObjectManagerServer *GDBusObjectManagerServer_autoptr; typedef GList *GDBusObjectManagerServer_listautoptr; typedef GSList *GDBusObjectManagerServer_slistautoptr; typedef GQueue *GDBusObjectManagerServer_queueautoptr;
typedef GDBusObjectProxy *GDBusObjectProxy_autoptr; typedef GList *GDBusObjectProxy_listautoptr; typedef GSList *GDBusObjectProxy_slistautoptr; typedef GQueue *GDBusObjectProxy_queueautoptr;
typedef GDBusObjectSkeleton *GDBusObjectSkeleton_autoptr; typedef GList *GDBusObjectSkeleton_listautoptr; typedef GSList *GDBusObjectSkeleton_slistautoptr; typedef GQueue *GDBusObjectSkeleton_queueautoptr;
typedef GDBusProxy *GDBusProxy_autoptr; typedef GList *GDBusProxy_listautoptr; typedef GSList *GDBusProxy_slistautoptr; typedef GQueue *GDBusProxy_queueautoptr;
typedef GDBusServer *GDBusServer_autoptr; typedef GList *GDBusServer_listautoptr; typedef GSList *GDBusServer_slistautoptr; typedef GQueue *GDBusServer_queueautoptr;
typedef GDrive *GDrive_autoptr; typedef GList *GDrive_listautoptr; typedef GSList *GDrive_slistautoptr; typedef GQueue *GDrive_queueautoptr;
typedef GEmblemedIcon *GEmblemedIcon_autoptr; typedef GList *GEmblemedIcon_listautoptr; typedef GSList *GEmblemedIcon_slistautoptr; typedef GQueue *GEmblemedIcon_queueautoptr;
typedef GEmblem *GEmblem_autoptr; typedef GList *GEmblem_listautoptr; typedef GSList *GEmblem_slistautoptr; typedef GQueue *GEmblem_queueautoptr;
typedef GFileEnumerator *GFileEnumerator_autoptr; typedef GList *GFileEnumerator_listautoptr; typedef GSList *GFileEnumerator_slistautoptr; typedef GQueue *GFileEnumerator_queueautoptr;
typedef GFile *GFile_autoptr; typedef GList *GFile_listautoptr; typedef GSList *GFile_slistautoptr; typedef GQueue *GFile_queueautoptr;
typedef GFileAttributeInfoList *GFileAttributeInfoList_autoptr; typedef GList *GFileAttributeInfoList_listautoptr; typedef GSList *GFileAttributeInfoList_slistautoptr; typedef GQueue *GFileAttributeInfoList_queueautoptr;
typedef GFileIcon *GFileIcon_autoptr; typedef GList *GFileIcon_listautoptr; typedef GSList *GFileIcon_slistautoptr; typedef GQueue *GFileIcon_queueautoptr;
typedef GFileInfo *GFileInfo_autoptr; typedef GList *GFileInfo_listautoptr; typedef GSList *GFileInfo_slistautoptr; typedef GQueue *GFileInfo_queueautoptr;
typedef GFileInputStream *GFileInputStream_autoptr; typedef GList *GFileInputStream_listautoptr; typedef GSList *GFileInputStream_slistautoptr; typedef GQueue *GFileInputStream_queueautoptr;
typedef GFileIOStream *GFileIOStream_autoptr; typedef GList *GFileIOStream_listautoptr; typedef GSList *GFileIOStream_slistautoptr; typedef GQueue *GFileIOStream_queueautoptr;
typedef GFileMonitor *GFileMonitor_autoptr; typedef GList *GFileMonitor_listautoptr; typedef GSList *GFileMonitor_slistautoptr; typedef GQueue *GFileMonitor_queueautoptr;
typedef GFilenameCompleter *GFilenameCompleter_autoptr; typedef GList *GFilenameCompleter_listautoptr; typedef GSList *GFilenameCompleter_slistautoptr; typedef GQueue *GFilenameCompleter_queueautoptr;
typedef GFileOutputStream *GFileOutputStream_autoptr; typedef GList *GFileOutputStream_listautoptr; typedef GSList *GFileOutputStream_slistautoptr; typedef GQueue *GFileOutputStream_queueautoptr;
typedef GFilterInputStream *GFilterInputStream_autoptr; typedef GList *GFilterInputStream_listautoptr; typedef GSList *GFilterInputStream_slistautoptr; typedef GQueue *GFilterInputStream_queueautoptr;
typedef GFilterOutputStream *GFilterOutputStream_autoptr; typedef GList *GFilterOutputStream_listautoptr; typedef GSList *GFilterOutputStream_slistautoptr; typedef GQueue *GFilterOutputStream_queueautoptr;
typedef GIcon *GIcon_autoptr; typedef GList *GIcon_listautoptr; typedef GSList *GIcon_slistautoptr; typedef GQueue *GIcon_queueautoptr;
typedef GInetAddress *GInetAddress_autoptr; typedef GList *GInetAddress_listautoptr; typedef GSList *GInetAddress_slistautoptr; typedef GQueue *GInetAddress_queueautoptr;
typedef GInetAddressMask *GInetAddressMask_autoptr; typedef GList *GInetAddressMask_listautoptr; typedef GSList *GInetAddressMask_slistautoptr; typedef GQueue *GInetAddressMask_queueautoptr;
typedef GInetSocketAddress *GInetSocketAddress_autoptr; typedef GList *GInetSocketAddress_listautoptr; typedef GSList *GInetSocketAddress_slistautoptr; typedef GQueue *GInetSocketAddress_queueautoptr;
typedef GInitable *GInitable_autoptr; typedef GList *GInitable_listautoptr; typedef GSList *GInitable_slistautoptr; typedef GQueue *GInitable_queueautoptr;
typedef GInputStream *GInputStream_autoptr; typedef GList *GInputStream_listautoptr; typedef GSList *GInputStream_slistautoptr; typedef GQueue *GInputStream_queueautoptr;
typedef GIOModule *GIOModule_autoptr; typedef GList *GIOModule_listautoptr; typedef GSList *GIOModule_slistautoptr; typedef GQueue *GIOModule_queueautoptr;
typedef GIOStream *GIOStream_autoptr; typedef GList *GIOStream_listautoptr; typedef GSList *GIOStream_slistautoptr; typedef GQueue *GIOStream_queueautoptr;
typedef GLoadableIcon *GLoadableIcon_autoptr; typedef GList *GLoadableIcon_listautoptr; typedef GSList *GLoadableIcon_slistautoptr; typedef GQueue *GLoadableIcon_queueautoptr;
typedef GMemoryInputStream *GMemoryInputStream_autoptr; typedef GList *GMemoryInputStream_listautoptr; typedef GSList *GMemoryInputStream_slistautoptr; typedef GQueue *GMemoryInputStream_queueautoptr;
typedef GMemoryOutputStream *GMemoryOutputStream_autoptr; typedef GList *GMemoryOutputStream_listautoptr; typedef GSList *GMemoryOutputStream_slistautoptr; typedef GQueue *GMemoryOutputStream_queueautoptr;
typedef GMenu *GMenu_autoptr; typedef GList *GMenu_listautoptr; typedef GSList *GMenu_slistautoptr; typedef GQueue *GMenu_queueautoptr;
typedef GMenuItem *GMenuItem_autoptr; typedef GList *GMenuItem_listautoptr; typedef GSList *GMenuItem_slistautoptr; typedef GQueue *GMenuItem_queueautoptr;
typedef GMenuModel *GMenuModel_autoptr; typedef GList *GMenuModel_listautoptr; typedef GSList *GMenuModel_slistautoptr; typedef GQueue *GMenuModel_queueautoptr;
typedef GMenuAttributeIter *GMenuAttributeIter_autoptr; typedef GList *GMenuAttributeIter_listautoptr; typedef GSList *GMenuAttributeIter_slistautoptr; typedef GQueue *GMenuAttributeIter_queueautoptr;
typedef GMenuLinkIter *GMenuLinkIter_autoptr; typedef GList *GMenuLinkIter_listautoptr; typedef GSList *GMenuLinkIter_slistautoptr; typedef GQueue *GMenuLinkIter_queueautoptr;
typedef GMount *GMount_autoptr; typedef GList *GMount_listautoptr; typedef GSList *GMount_slistautoptr; typedef GQueue *GMount_queueautoptr;
typedef GMountOperation *GMountOperation_autoptr; typedef GList *GMountOperation_listautoptr; typedef GSList *GMountOperation_slistautoptr; typedef GQueue *GMountOperation_queueautoptr;
typedef GNativeVolumeMonitor *GNativeVolumeMonitor_autoptr; typedef GList *GNativeVolumeMonitor_listautoptr; typedef GSList *GNativeVolumeMonitor_slistautoptr; typedef GQueue *GNativeVolumeMonitor_queueautoptr;
typedef GNetworkAddress *GNetworkAddress_autoptr; typedef GList *GNetworkAddress_listautoptr; typedef GSList *GNetworkAddress_slistautoptr; typedef GQueue *GNetworkAddress_queueautoptr;
typedef GNetworkMonitor *GNetworkMonitor_autoptr; typedef GList *GNetworkMonitor_listautoptr; typedef GSList *GNetworkMonitor_slistautoptr; typedef GQueue *GNetworkMonitor_queueautoptr;
typedef GNetworkService *GNetworkService_autoptr; typedef GList *GNetworkService_listautoptr; typedef GSList *GNetworkService_slistautoptr; typedef GQueue *GNetworkService_queueautoptr;
typedef GNotification *GNotification_autoptr; typedef GList *GNotification_listautoptr; typedef GSList *GNotification_slistautoptr; typedef GQueue *GNotification_queueautoptr;
typedef GOutputStream *GOutputStream_autoptr; typedef GList *GOutputStream_listautoptr; typedef GSList *GOutputStream_slistautoptr; typedef GQueue *GOutputStream_queueautoptr;
typedef GPermission *GPermission_autoptr; typedef GList *GPermission_listautoptr; typedef GSList *GPermission_slistautoptr; typedef GQueue *GPermission_queueautoptr;
typedef GPollableInputStream *GPollableInputStream_autoptr; typedef GList *GPollableInputStream_listautoptr; typedef GSList *GPollableInputStream_slistautoptr; typedef GQueue *GPollableInputStream_queueautoptr;
typedef GPollableOutputStream *GPollableOutputStream_autoptr; typedef GList *GPollableOutputStream_listautoptr; typedef GSList *GPollableOutputStream_slistautoptr; typedef GQueue *GPollableOutputStream_queueautoptr;
typedef GPropertyAction *GPropertyAction_autoptr; typedef GList *GPropertyAction_listautoptr; typedef GSList *GPropertyAction_slistautoptr; typedef GQueue *GPropertyAction_queueautoptr;
typedef GProxyAddressEnumerator *GProxyAddressEnumerator_autoptr; typedef GList *GProxyAddressEnumerator_listautoptr; typedef GSList *GProxyAddressEnumerator_slistautoptr; typedef GQueue *GProxyAddressEnumerator_queueautoptr;
typedef GProxyAddress *GProxyAddress_autoptr; typedef GList *GProxyAddress_listautoptr; typedef GSList *GProxyAddress_slistautoptr; typedef GQueue *GProxyAddress_queueautoptr;
typedef GProxy *GProxy_autoptr; typedef GList *GProxy_listautoptr; typedef GSList *GProxy_slistautoptr; typedef GQueue *GProxy_queueautoptr;
typedef GProxyResolver *GProxyResolver_autoptr; typedef GList *GProxyResolver_listautoptr; typedef GSList *GProxyResolver_slistautoptr; typedef GQueue *GProxyResolver_queueautoptr;
typedef GRemoteActionGroup *GRemoteActionGroup_autoptr; typedef GList *GRemoteActionGroup_listautoptr; typedef GSList *GRemoteActionGroup_slistautoptr; typedef GQueue *GRemoteActionGroup_queueautoptr;
typedef GResolver *GResolver_autoptr; typedef GList *GResolver_listautoptr; typedef GSList *GResolver_slistautoptr; typedef GQueue *GResolver_queueautoptr;
typedef GResource *GResource_autoptr; typedef GList *GResource_listautoptr; typedef GSList *GResource_slistautoptr; typedef GQueue *GResource_queueautoptr;
typedef GSeekable *GSeekable_autoptr; typedef GList *GSeekable_listautoptr; typedef GSList *GSeekable_slistautoptr; typedef GQueue *GSeekable_queueautoptr;
typedef GSettingsBackend *GSettingsBackend_autoptr; typedef GList *GSettingsBackend_listautoptr; typedef GSList *GSettingsBackend_slistautoptr; typedef GQueue *GSettingsBackend_queueautoptr;
typedef GSettingsSchema *GSettingsSchema_autoptr; typedef GList *GSettingsSchema_listautoptr; typedef GSList *GSettingsSchema_slistautoptr; typedef GQueue *GSettingsSchema_queueautoptr;
typedef GSettingsSchemaKey *GSettingsSchemaKey_autoptr; typedef GList *GSettingsSchemaKey_listautoptr; typedef GSList *GSettingsSchemaKey_slistautoptr; typedef GQueue *GSettingsSchemaKey_queueautoptr;
typedef GSettingsSchemaSource *GSettingsSchemaSource_autoptr; typedef GList *GSettingsSchemaSource_listautoptr; typedef GSList *GSettingsSchemaSource_slistautoptr; typedef GQueue *GSettingsSchemaSource_queueautoptr;
typedef GSettings *GSettings_autoptr; typedef GList *GSettings_listautoptr; typedef GSList *GSettings_slistautoptr; typedef GQueue *GSettings_queueautoptr;
typedef GSimpleActionGroup *GSimpleActionGroup_autoptr; typedef GList *GSimpleActionGroup_listautoptr; typedef GSList *GSimpleActionGroup_slistautoptr; typedef GQueue *GSimpleActionGroup_queueautoptr;
typedef GSimpleAction *GSimpleAction_autoptr; typedef GList *GSimpleAction_listautoptr; typedef GSList *GSimpleAction_slistautoptr; typedef GQueue *GSimpleAction_queueautoptr;
typedef GSimpleAsyncResult *GSimpleAsyncResult_autoptr; typedef GList *GSimpleAsyncResult_listautoptr; typedef GSList *GSimpleAsyncResult_slistautoptr; typedef GQueue *GSimpleAsyncResult_queueautoptr;
typedef GSimplePermission *GSimplePermission_autoptr; typedef GList *GSimplePermission_listautoptr; typedef GSList *GSimplePermission_slistautoptr; typedef GQueue *GSimplePermission_queueautoptr;
typedef GSimpleProxyResolver *GSimpleProxyResolver_autoptr; typedef GList *GSimpleProxyResolver_listautoptr; typedef GSList *GSimpleProxyResolver_slistautoptr; typedef GQueue *GSimpleProxyResolver_queueautoptr;
typedef GSocketAddressEnumerator *GSocketAddressEnumerator_autoptr; typedef GList *GSocketAddressEnumerator_listautoptr; typedef GSList *GSocketAddressEnumerator_slistautoptr; typedef GQueue *GSocketAddressEnumerator_queueautoptr;
typedef GSocketAddress *GSocketAddress_autoptr; typedef GList *GSocketAddress_listautoptr; typedef GSList *GSocketAddress_slistautoptr; typedef GQueue *GSocketAddress_queueautoptr;
typedef GSocketClient *GSocketClient_autoptr; typedef GList *GSocketClient_listautoptr; typedef GSList *GSocketClient_slistautoptr; typedef GQueue *GSocketClient_queueautoptr;
typedef GSocketConnectable *GSocketConnectable_autoptr; typedef GList *GSocketConnectable_listautoptr; typedef GSList *GSocketConnectable_slistautoptr; typedef GQueue *GSocketConnectable_queueautoptr;
typedef GSocketConnection *GSocketConnection_autoptr; typedef GList *GSocketConnection_listautoptr; typedef GSList *GSocketConnection_slistautoptr; typedef GQueue *GSocketConnection_queueautoptr;
typedef GSocketControlMessage *GSocketControlMessage_autoptr; typedef GList *GSocketControlMessage_listautoptr; typedef GSList *GSocketControlMessage_slistautoptr; typedef GQueue *GSocketControlMessage_queueautoptr;
typedef GSocket *GSocket_autoptr; typedef GList *GSocket_listautoptr; typedef GSList *GSocket_slistautoptr; typedef GQueue *GSocket_queueautoptr;
typedef GSocketListener *GSocketListener_autoptr; typedef GList *GSocketListener_listautoptr; typedef GSList *GSocketListener_slistautoptr; typedef GQueue *GSocketListener_queueautoptr;
typedef GSocketService *GSocketService_autoptr; typedef GList *GSocketService_listautoptr; typedef GSList *GSocketService_slistautoptr; typedef GQueue *GSocketService_queueautoptr;
typedef GSubprocess *GSubprocess_autoptr; typedef GList *GSubprocess_listautoptr; typedef GSList *GSubprocess_slistautoptr; typedef GQueue *GSubprocess_queueautoptr;
typedef GSubprocessLauncher *GSubprocessLauncher_autoptr; typedef GList *GSubprocessLauncher_listautoptr; typedef GSList *GSubprocessLauncher_slistautoptr; typedef GQueue *GSubprocessLauncher_queueautoptr;
typedef GTask *GTask_autoptr; typedef GList *GTask_listautoptr; typedef GSList *GTask_slistautoptr; typedef GQueue *GTask_queueautoptr;
typedef GTcpConnection *GTcpConnection_autoptr; typedef GList *GTcpConnection_listautoptr; typedef GSList *GTcpConnection_slistautoptr; typedef GQueue *GTcpConnection_queueautoptr;
typedef GTcpWrapperConnection *GTcpWrapperConnection_autoptr; typedef GList *GTcpWrapperConnection_listautoptr; typedef GSList *GTcpWrapperConnection_slistautoptr; typedef GQueue *GTcpWrapperConnection_queueautoptr;
typedef GTestDBus *GTestDBus_autoptr; typedef GList *GTestDBus_listautoptr; typedef GSList *GTestDBus_slistautoptr; typedef GQueue *GTestDBus_queueautoptr;
typedef GThemedIcon *GThemedIcon_autoptr; typedef GList *GThemedIcon_listautoptr; typedef GSList *GThemedIcon_slistautoptr; typedef GQueue *GThemedIcon_queueautoptr;
typedef GThreadedSocketService *GThreadedSocketService_autoptr; typedef GList *GThreadedSocketService_listautoptr; typedef GSList *GThreadedSocketService_slistautoptr; typedef GQueue *GThreadedSocketService_queueautoptr;
typedef GTlsBackend *GTlsBackend_autoptr; typedef GList *GTlsBackend_listautoptr; typedef GSList *GTlsBackend_slistautoptr; typedef GQueue *GTlsBackend_queueautoptr;
typedef GTlsCertificate *GTlsCertificate_autoptr; typedef GList *GTlsCertificate_listautoptr; typedef GSList *GTlsCertificate_slistautoptr; typedef GQueue *GTlsCertificate_queueautoptr;
typedef GTlsClientConnection *GTlsClientConnection_autoptr; typedef GList *GTlsClientConnection_listautoptr; typedef GSList *GTlsClientConnection_slistautoptr; typedef GQueue *GTlsClientConnection_queueautoptr;
typedef GTlsConnection *GTlsConnection_autoptr; typedef GList *GTlsConnection_listautoptr; typedef GSList *GTlsConnection_slistautoptr; typedef GQueue *GTlsConnection_queueautoptr;
typedef GTlsDatabase *GTlsDatabase_autoptr; typedef GList *GTlsDatabase_listautoptr; typedef GSList *GTlsDatabase_slistautoptr; typedef GQueue *GTlsDatabase_queueautoptr;
typedef GTlsFileDatabase *GTlsFileDatabase_autoptr; typedef GList *GTlsFileDatabase_listautoptr; typedef GSList *GTlsFileDatabase_slistautoptr; typedef GQueue *GTlsFileDatabase_queueautoptr;
typedef GTlsInteraction *GTlsInteraction_autoptr; typedef GList *GTlsInteraction_listautoptr; typedef GSList *GTlsInteraction_slistautoptr; typedef GQueue *GTlsInteraction_queueautoptr;
typedef GTlsPassword *GTlsPassword_autoptr; typedef GList *GTlsPassword_listautoptr; typedef GSList *GTlsPassword_slistautoptr; typedef GQueue *GTlsPassword_queueautoptr;
typedef GTlsServerConnection *GTlsServerConnection_autoptr; typedef GList *GTlsServerConnection_listautoptr; typedef GSList *GTlsServerConnection_slistautoptr; typedef GQueue *GTlsServerConnection_queueautoptr;
typedef GVfs *GVfs_autoptr; typedef GList *GVfs_listautoptr; typedef GSList *GVfs_slistautoptr; typedef GQueue *GVfs_queueautoptr;
typedef GVolume *GVolume_autoptr; typedef GList *GVolume_listautoptr; typedef GSList *GVolume_slistautoptr; typedef GQueue *GVolume_queueautoptr;
typedef GVolumeMonitor *GVolumeMonitor_autoptr; typedef GList *GVolumeMonitor_listautoptr; typedef GSList *GVolumeMonitor_slistautoptr; typedef GQueue *GVolumeMonitor_queueautoptr;
typedef GZlibCompressor *GZlibCompressor_autoptr; typedef GList *GZlibCompressor_listautoptr; typedef GSList *GZlibCompressor_slistautoptr; typedef GQueue *GZlibCompressor_queueautoptr;
typedef GZlibDecompressor *GZlibDecompressor_autoptr; typedef GList *GZlibDecompressor_listautoptr; typedef GSList *GZlibDecompressor_slistautoptr; typedef GQueue *GZlibDecompressor_queueautoptr;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
typedef int hb_bool_t;
typedef uint32_t hb_codepoint_t;
typedef int32_t hb_position_t;
typedef uint32_t hb_mask_t;
typedef union _hb_var_int_t {
uint32_t u32;
int32_t i32;
uint16_t u16[2];
int16_t i16[2];
uint8_t u8[4];
int8_t i8[4];
} hb_var_int_t;
typedef uint32_t hb_tag_t;
typedef const struct hb_language_impl_t *hb_language_t;
typedef struct hb_user_data_key_t {
char unused;
} hb_user_data_key_t;
typedef void (*hb_destroy_func_t) (void *user_data);
typedef struct hb_feature_t {
hb_tag_t tag;
uint32_t value;
unsigned int start;
unsigned int end;
} hb_feature_t;
typedef struct hb_variation_t {
hb_tag_t tag;
float value;
} hb_variation_t;
typedef uint32_t hb_color_t;
typedef struct hb_blob_t hb_blob_t;
typedef struct hb_unicode_funcs_t hb_unicode_funcs_t;
typedef hb_unicode_combining_class_t (*hb_unicode_combining_class_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t unicode,
void *user_data);
typedef hb_unicode_general_category_t (*hb_unicode_general_category_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t unicode,
void *user_data);
typedef hb_codepoint_t (*hb_unicode_mirroring_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t unicode,
void *user_data);
typedef hb_script_t (*hb_unicode_script_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t unicode,
void *user_data);
typedef hb_bool_t (*hb_unicode_compose_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t a,
hb_codepoint_t b,
hb_codepoint_t *ab,
void *user_data);
typedef hb_bool_t (*hb_unicode_decompose_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t ab,
hb_codepoint_t *a,
hb_codepoint_t *b,
void *user_data);
typedef struct hb_set_t hb_set_t;
typedef struct hb_face_t hb_face_t;
typedef hb_blob_t * (*hb_reference_table_func_t) (hb_face_t *face, hb_tag_t tag, void *user_data);
typedef struct hb_font_t hb_font_t;
typedef struct hb_font_funcs_t hb_font_funcs_t;
typedef struct hb_font_extents_t
{
hb_position_t ascender;
hb_position_t descender;
hb_position_t line_gap;
hb_position_t reserved9;
hb_position_t reserved8;
hb_position_t reserved7;
hb_position_t reserved6;
hb_position_t reserved5;
hb_position_t reserved4;
hb_position_t reserved3;
hb_position_t reserved2;
hb_position_t reserved1;
} hb_font_extents_t;
typedef struct hb_glyph_extents_t
{
hb_position_t x_bearing;
hb_position_t y_bearing;
hb_position_t width;
hb_position_t height;
} hb_glyph_extents_t;
typedef hb_bool_t (*hb_font_get_font_extents_func_t) (hb_font_t *font, void *font_data,
hb_font_extents_t *extents,
void *user_data);
typedef hb_font_get_font_extents_func_t hb_font_get_font_h_extents_func_t;
typedef hb_font_get_font_extents_func_t hb_font_get_font_v_extents_func_t;
typedef hb_bool_t (*hb_font_get_nominal_glyph_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t unicode,
hb_codepoint_t *glyph,
void *user_data);
typedef hb_bool_t (*hb_font_get_variation_glyph_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t unicode, hb_codepoint_t variation_selector,
hb_codepoint_t *glyph,
void *user_data);
typedef unsigned int (*hb_font_get_nominal_glyphs_func_t) (hb_font_t *font, void *font_data,
unsigned int count,
const hb_codepoint_t *first_unicode,
unsigned int unicode_stride,
hb_codepoint_t *first_glyph,
unsigned int glyph_stride,
void *user_data);
typedef hb_position_t (*hb_font_get_glyph_advance_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t glyph,
void *user_data);
typedef hb_font_get_glyph_advance_func_t hb_font_get_glyph_h_advance_func_t;
typedef hb_font_get_glyph_advance_func_t hb_font_get_glyph_v_advance_func_t;
typedef void (*hb_font_get_glyph_advances_func_t) (hb_font_t* font, void* font_data,
unsigned int count,
const hb_codepoint_t *first_glyph,
unsigned glyph_stride,
hb_position_t *first_advance,
unsigned advance_stride,
void *user_data);
typedef hb_font_get_glyph_advances_func_t hb_font_get_glyph_h_advances_func_t;
typedef hb_font_get_glyph_advances_func_t hb_font_get_glyph_v_advances_func_t;
typedef hb_bool_t (*hb_font_get_glyph_origin_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t glyph,
hb_position_t *x, hb_position_t *y,
void *user_data);
typedef hb_font_get_glyph_origin_func_t hb_font_get_glyph_h_origin_func_t;
typedef hb_font_get_glyph_origin_func_t hb_font_get_glyph_v_origin_func_t;
typedef hb_position_t (*hb_font_get_glyph_kerning_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t first_glyph, hb_codepoint_t second_glyph,
void *user_data);
typedef hb_font_get_glyph_kerning_func_t hb_font_get_glyph_h_kerning_func_t;
typedef hb_bool_t (*hb_font_get_glyph_extents_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t glyph,
hb_glyph_extents_t *extents,
void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_contour_point_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t glyph, unsigned int point_index,
hb_position_t *x, hb_position_t *y,
void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_name_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t glyph,
char *name, unsigned int size,
void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_from_name_func_t) (hb_font_t *font, void *font_data,
const char *name, int len,
hb_codepoint_t *glyph,
void *user_data);
typedef struct hb_glyph_info_t
{
hb_codepoint_t codepoint;
hb_mask_t mask;
uint32_t cluster;
hb_var_int_t var1;
hb_var_int_t var2;
} hb_glyph_info_t;
typedef struct hb_glyph_position_t {
hb_position_t x_advance;
hb_position_t y_advance;
hb_position_t x_offset;
hb_position_t y_offset;
hb_var_int_t var;
} hb_glyph_position_t;
typedef struct hb_segment_properties_t {
hb_direction_t direction;
hb_script_t script;
hb_language_t language;
void *reserved1;
void *reserved2;
} hb_segment_properties_t;
typedef struct hb_buffer_t hb_buffer_t;
typedef hb_bool_t (*hb_buffer_message_func_t) (hb_buffer_t *buffer,
hb_font_t *font,
const char *message,
void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_func_t) (hb_font_t *font, void *font_data,
hb_codepoint_t unicode, hb_codepoint_t variation_selector,
hb_codepoint_t *glyph,
void *user_data);
typedef unsigned int (*hb_unicode_eastasian_width_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t unicode,
void *user_data);
typedef unsigned int (*hb_unicode_decompose_compatibility_func_t) (hb_unicode_funcs_t *ufuncs,
hb_codepoint_t u,
hb_codepoint_t *decomposed,
void *user_data);
typedef hb_font_get_glyph_kerning_func_t hb_font_get_glyph_v_kerning_func_t;
typedef struct hb_map_t hb_map_t;
typedef struct hb_shape_plan_t hb_shape_plan_t;
typedef struct _PangoCoverage PangoCoverage;
typedef struct _PangoLogAttr PangoLogAttr;
typedef struct _PangoEngineLang PangoEngineLang;
typedef struct _PangoEngineShape PangoEngineShape;
typedef struct _PangoFont PangoFont;
typedef struct _PangoFontMap PangoFontMap;
typedef struct _PangoRectangle PangoRectangle;
typedef guint32 PangoGlyph;
struct _PangoRectangle
{
int x;
int y;
int width;
int height;
};
typedef struct _PangoMatrix PangoMatrix;
struct _PangoMatrix
{
double xx;
double xy;
double yx;
double yy;
double x0;
double y0;
};
typedef struct _PangoScriptIter PangoScriptIter;
typedef struct _PangoLanguage PangoLanguage;
typedef struct _PangoFontDescription PangoFontDescription;
typedef struct _PangoFontMetrics PangoFontMetrics;
struct _PangoFontMetrics
{
guint ref_count;
int ascent;
int descent;
int height;
int approximate_char_width;
int approximate_digit_width;
int underline_position;
int underline_thickness;
int strikethrough_position;
int strikethrough_thickness;
};
typedef struct _PangoFontFace PangoFontFace;
typedef struct _PangoFontFamily PangoFontFamily;
typedef struct _PangoFontFamilyClass PangoFontFamilyClass;
struct _PangoFontFamily
{
GObject parent_instance;
};
struct _PangoFontFamilyClass
{
GObjectClass parent_class;
void (*list_faces) (PangoFontFamily *family,
PangoFontFace ***faces,
int *n_faces);
const char * (*get_name) (PangoFontFamily *family);
gboolean (*is_monospace) (PangoFontFamily *family);
gboolean (*is_variable) (PangoFontFamily *family);
void (*_pango_reserved2) (void);
void (*_pango_reserved3) (void);
};
typedef struct _PangoFontFaceClass PangoFontFaceClass;
struct _PangoFontFace
{
GObject parent_instance;
};
struct _PangoFontFaceClass
{
GObjectClass parent_class;
const char * (*get_face_name) (PangoFontFace *face);
PangoFontDescription * (*describe) (PangoFontFace *face);
void (*list_sizes) (PangoFontFace *face,
int **sizes,
int *n_sizes);
gboolean (*is_synthesized) (PangoFontFace *face);
void (*_pango_reserved3) (void);
void (*_pango_reserved4) (void);
};
struct _PangoFont
{
GObject parent_instance;
};
typedef struct _PangoFontClass PangoFontClass;
struct _PangoFontClass
{
GObjectClass parent_class;
PangoFontDescription *(*describe) (PangoFont *font);
PangoCoverage * (*get_coverage) (PangoFont *font,
PangoLanguage *language);
void (*get_glyph_extents) (PangoFont *font,
PangoGlyph glyph,
PangoRectangle *ink_rect,
PangoRectangle *logical_rect);
PangoFontMetrics * (*get_metrics) (PangoFont *font,
PangoLanguage *language);
PangoFontMap * (*get_font_map) (PangoFont *font);
PangoFontDescription *(*describe_absolute) (PangoFont *font);
void (*get_features) (PangoFont *font,
hb_feature_t *features,
guint len,
guint *num_features);
hb_font_t * (*create_hb_font) (PangoFont *font);
};
typedef struct _PangoColor PangoColor;
struct _PangoColor
{
guint16 red;
guint16 green;
guint16 blue;
};
typedef struct _PangoAttribute PangoAttribute;
typedef struct _PangoAttrClass PangoAttrClass;
typedef struct _PangoAttrString PangoAttrString;
typedef struct _PangoAttrLanguage PangoAttrLanguage;
typedef struct _PangoAttrInt PangoAttrInt;
typedef struct _PangoAttrSize PangoAttrSize;
typedef struct _PangoAttrFloat PangoAttrFloat;
typedef struct _PangoAttrColor PangoAttrColor;
typedef struct _PangoAttrFontDesc PangoAttrFontDesc;
typedef struct _PangoAttrShape PangoAttrShape;
typedef struct _PangoAttrFontFeatures PangoAttrFontFeatures;
typedef struct _PangoAttrList PangoAttrList;
typedef struct _PangoAttrIterator PangoAttrIterator;
struct _PangoAttribute
{
const PangoAttrClass *klass;
guint start_index;
guint end_index;
};
typedef gboolean (*PangoAttrFilterFunc) (PangoAttribute *attribute,
gpointer user_data);
typedef gpointer (*PangoAttrDataCopyFunc) (gconstpointer user_data);
struct _PangoAttrClass
{
PangoAttrType type;
PangoAttribute * (*copy) (const PangoAttribute *attr);
void (*destroy) (PangoAttribute *attr);
gboolean (*equal) (const PangoAttribute *attr1, const PangoAttribute *attr2);
};
struct _PangoAttrString
{
PangoAttribute attr;
char *value;
};
struct _PangoAttrLanguage
{
PangoAttribute attr;
PangoLanguage *value;
};
struct _PangoAttrInt
{
PangoAttribute attr;
int value;
};
struct _PangoAttrFloat
{
PangoAttribute attr;
double value;
};
struct _PangoAttrColor
{
PangoAttribute attr;
PangoColor color;
};
struct _PangoAttrSize
{
PangoAttribute attr;
int size;
guint absolute : 1;
};
struct _PangoAttrShape
{
PangoAttribute attr;
PangoRectangle ink_rect;
PangoRectangle logical_rect;
gpointer data;
PangoAttrDataCopyFunc copy_func;
GDestroyNotify destroy_func;
};
struct _PangoAttrFontDesc
{
PangoAttribute attr;
PangoFontDescription *desc;
};
struct _PangoAttrFontFeatures
{
PangoAttribute attr;
gchar *features;
};
typedef struct _PangoAnalysis PangoAnalysis;
typedef struct _PangoItem PangoItem;
struct _PangoAnalysis
{
PangoEngineShape *shape_engine;
PangoEngineLang *lang_engine;
PangoFont *font;
guint8 level;
guint8 gravity;
guint8 flags;
guint8 script;
PangoLanguage *language;
GSList *extra_attrs;
};
struct _PangoItem
{
gint offset;
gint length;
gint num_chars;
PangoAnalysis analysis;
};
struct _PangoLogAttr
{
guint is_line_break : 1;
guint is_mandatory_break : 1;
guint is_char_break : 1;
guint is_white : 1;
guint is_cursor_position : 1;
guint is_word_start : 1;
guint is_word_end : 1;
guint is_sentence_boundary : 1;
guint is_sentence_start : 1;
guint is_sentence_end : 1;
guint backspace_deletes_character : 1;
guint is_expandable_space : 1;
guint is_word_boundary : 1;
};
typedef struct _PangoFontset PangoFontset;
typedef struct _PangoFontsetClass PangoFontsetClass;
typedef gboolean (*PangoFontsetForeachFunc) (PangoFontset *fontset,
PangoFont *font,
gpointer user_data);
struct _PangoFontset
{
GObject parent_instance;
};
struct _PangoFontsetClass
{
GObjectClass parent_class;
PangoFont * (*get_font) (PangoFontset *fontset,
guint wc);
PangoFontMetrics *(*get_metrics) (PangoFontset *fontset);
PangoLanguage * (*get_language) (PangoFontset *fontset);
void (*foreach) (PangoFontset *fontset,
PangoFontsetForeachFunc func,
gpointer data);
void (*_pango_reserved1) (void);
void (*_pango_reserved2) (void);
void (*_pango_reserved3) (void);
void (*_pango_reserved4) (void);
};
typedef struct _PangoFontsetSimple PangoFontsetSimple;
typedef struct _PangoFontsetSimpleClass PangoFontsetSimpleClass;
typedef struct _PangoFontMapClass PangoFontMapClass;
typedef struct _PangoContext PangoContext;
struct _PangoFontMap
{
GObject parent_instance;
};
struct _PangoFontMapClass
{
GObjectClass parent_class;
PangoFont * (*load_font) (PangoFontMap *fontmap,
PangoContext *context,
const PangoFontDescription *desc);
void (*list_families) (PangoFontMap *fontmap,
PangoFontFamily ***families,
int *n_families);
PangoFontset *(*load_fontset) (PangoFontMap *fontmap,
PangoContext *context,
const PangoFontDescription *desc,
PangoLanguage *language);
const char *shape_engine_type;
guint (*get_serial) (PangoFontMap *fontmap);
void (*changed) (PangoFontMap *fontmap);
void (*_pango_reserved1) (void);
void (*_pango_reserved2) (void);
};
typedef struct _PangoContextClass PangoContextClass;
typedef struct _PangoGlyphGeometry PangoGlyphGeometry;
typedef struct _PangoGlyphVisAttr PangoGlyphVisAttr;
typedef struct _PangoGlyphInfo PangoGlyphInfo;
typedef struct _PangoGlyphString PangoGlyphString;
typedef gint32 PangoGlyphUnit;
struct _PangoGlyphGeometry
{
PangoGlyphUnit width;
PangoGlyphUnit x_offset;
PangoGlyphUnit y_offset;
};
struct _PangoGlyphVisAttr
{
guint is_cluster_start : 1;
};
struct _PangoGlyphInfo
{
PangoGlyph glyph;
PangoGlyphGeometry geometry;
PangoGlyphVisAttr attr;
};
struct _PangoGlyphString {
gint num_glyphs;
PangoGlyphInfo *glyphs;
gint *log_clusters;
gint space;
};
typedef struct _PangoEngine PangoEngine;
typedef struct _PangoEngineClass PangoEngineClass;
struct _PangoEngine
{
GObject parent_instance;
};
struct _PangoEngineClass
{
GObjectClass parent_class;
};
typedef struct _PangoEngineLangClass PangoEngineLangClass;
struct _PangoEngineLang
{
PangoEngine parent_instance;
};
struct _PangoEngineLangClass
{
PangoEngineClass parent_class;
void (*script_break) (PangoEngineLang *engine,
const char *text,
int len,
PangoAnalysis *analysis,
PangoLogAttr *attrs,
int attrs_len);
};
typedef struct _PangoEngineShapeClass PangoEngineShapeClass;
struct _PangoEngineShape
{
PangoEngine parent_instance;
};
struct _PangoEngineShapeClass
{
PangoEngineClass parent_class;
void (*script_shape) (PangoEngineShape *engine,
PangoFont *font,
const char *item_text,
unsigned int item_length,
const PangoAnalysis *analysis,
PangoGlyphString *glyphs,
const char *paragraph_text,
unsigned int paragraph_length);
PangoCoverageLevel (*covers) (PangoEngineShape *engine,
PangoFont *font,
PangoLanguage *language,
gunichar wc);
};
typedef struct _PangoEngineInfo PangoEngineInfo;
typedef struct _PangoEngineScriptInfo PangoEngineScriptInfo;
struct _PangoEngineScriptInfo
{
PangoScript script;
const gchar *langs;
};
struct _PangoEngineInfo
{
const gchar *id;
const gchar *engine_type;
const gchar *render_type;
PangoEngineScriptInfo *scripts;
gint n_scripts;
};
typedef struct _PangoGlyphItem PangoGlyphItem;
struct _PangoGlyphItem
{
PangoItem *item;
PangoGlyphString *glyphs;
};
typedef struct _PangoGlyphItemIter PangoGlyphItemIter;
struct _PangoGlyphItemIter
{
PangoGlyphItem *glyph_item;
const gchar *text;
int start_glyph;
int start_index;
int start_char;
int end_glyph;
int end_index;
int end_char;
};
typedef struct _PangoTabArray PangoTabArray;
typedef struct _PangoLayout PangoLayout;
typedef struct _PangoLayoutClass PangoLayoutClass;
typedef struct _PangoLayoutLine PangoLayoutLine;
typedef PangoGlyphItem PangoLayoutRun;
struct _PangoLayoutLine
{
PangoLayout *layout;
gint start_index;
gint length;
GSList *runs;
guint is_paragraph_start : 1;
guint resolved_dir : 3;
};
typedef struct _PangoLayoutIter PangoLayoutIter;
typedef struct _PangoRenderer PangoRenderer;
typedef struct _PangoRendererClass PangoRendererClass;
typedef struct _PangoRendererPrivate PangoRendererPrivate;
struct _PangoRenderer
{
GObject parent_instance;
PangoUnderline underline;
gboolean strikethrough;
int active_count;
PangoMatrix *matrix;
PangoRendererPrivate *priv;
};
struct _PangoRendererClass
{
GObjectClass parent_class;
void (*draw_glyphs) (PangoRenderer *renderer,
PangoFont *font,
PangoGlyphString *glyphs,
int x,
int y);
void (*draw_rectangle) (PangoRenderer *renderer,
PangoRenderPart part,
int x,
int y,
int width,
int height);
void (*draw_error_underline) (PangoRenderer *renderer,
int x,
int y,
int width,
int height);
void (*draw_shape) (PangoRenderer *renderer,
PangoAttrShape *attr,
int x,
int y);
void (*draw_trapezoid) (PangoRenderer *renderer,
PangoRenderPart part,
double y1_,
double x11,
double x21,
double y2,
double x12,
double x22);
void (*draw_glyph) (PangoRenderer *renderer,
PangoFont *font,
PangoGlyph glyph,
double x,
double y);
void (*part_changed) (PangoRenderer *renderer,
PangoRenderPart part);
void (*begin) (PangoRenderer *renderer);
void (*end) (PangoRenderer *renderer);
void (*prepare_run) (PangoRenderer *renderer,
PangoLayoutRun *run);
void (*draw_glyph_item) (PangoRenderer *renderer,
const char *text,
PangoGlyphItem *glyph_item,
int x,
int y);
void (*_pango_reserved2) (void);
void (*_pango_reserved3) (void);
void (*_pango_reserved4) (void);
};
typedef struct
{
int __count;
union
{
unsigned int __wch;
char __wchb[4];
} __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
__off_t __pos;
__mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
__off64_t __pos;
__mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
int _flags;
char *_IO_read_ptr;
char *_IO_read_end;
char *_IO_read_base;
char *_IO_write_base;
char *_IO_write_ptr;
char *_IO_write_end;
char *_IO_buf_base;
char *_IO_buf_end;
char *_IO_save_base;
char *_IO_backup_base;
char *_IO_save_end;
struct _IO_marker *_markers;
struct _IO_FILE *_chain;
int _fileno;
int _flags2;
__off_t _old_offset;
unsigned short _cur_column;
signed char _vtable_offset;
char _shortbuf[1];
_IO_lock_t *_lock;
__off64_t _offset;
struct _IO_codecvt *_codecvt;
struct _IO_wide_data *_wide_data;
struct _IO_FILE *_freeres_list;
void *_freeres_buf;
size_t __pad5;
int _mode;
char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __fpos_t fpos_t;
typedef int cairo_bool_t;
typedef struct _cairo cairo_t;
typedef struct _cairo_surface cairo_surface_t;
typedef struct _cairo_device cairo_device_t;
typedef struct _cairo_matrix {
double xx; double yx;
double xy; double yy;
double x0; double y0;
} cairo_matrix_t;
typedef struct _cairo_pattern cairo_pattern_t;
typedef void (*cairo_destroy_func_t) (void *data);
typedef struct _cairo_user_data_key {
int unused;
} cairo_user_data_key_t;
typedef cairo_status_t (*cairo_write_func_t) (void *closure,
const unsigned char *data,
unsigned int length);
typedef cairo_status_t (*cairo_read_func_t) (void *closure,
unsigned char *data,
unsigned int length);
typedef struct _cairo_rectangle_int {
int x, y;
int width, height;
} cairo_rectangle_int_t;
typedef struct _cairo_rectangle {
double x, y, width, height;
} cairo_rectangle_t;
typedef struct _cairo_rectangle_list {
cairo_status_t status;
cairo_rectangle_t *rectangles;
int num_rectangles;
} cairo_rectangle_list_t;
typedef struct _cairo_scaled_font cairo_scaled_font_t;
typedef struct _cairo_font_face cairo_font_face_t;
typedef struct {
unsigned long index;
double x;
double y;
} cairo_glyph_t;
typedef struct {
int num_bytes;
int num_glyphs;
} cairo_text_cluster_t;
typedef struct {
double x_bearing;
double y_bearing;
double width;
double height;
double x_advance;
double y_advance;
} cairo_text_extents_t;
typedef struct {
double ascent;
double descent;
double height;
double max_x_advance;
double max_y_advance;
} cairo_font_extents_t;
typedef struct _cairo_font_options cairo_font_options_t;
typedef cairo_status_t (*cairo_user_scaled_font_init_func_t) (cairo_scaled_font_t *scaled_font,
cairo_t *cr,
cairo_font_extents_t *extents);
typedef cairo_status_t (*cairo_user_scaled_font_render_glyph_func_t) (cairo_scaled_font_t *scaled_font,
unsigned long glyph,
cairo_t *cr,
cairo_text_extents_t *extents);
typedef cairo_status_t (*cairo_user_scaled_font_text_to_glyphs_func_t) (cairo_scaled_font_t *scaled_font,
const char *utf8,
int utf8_len,
cairo_glyph_t **glyphs,
int *num_glyphs,
cairo_text_cluster_t **clusters,
int *num_clusters,
cairo_text_cluster_flags_t *cluster_flags);
typedef cairo_status_t (*cairo_user_scaled_font_unicode_to_glyph_func_t) (cairo_scaled_font_t *scaled_font,
unsigned long unicode,
unsigned long *glyph_index);
typedef union _cairo_path_data_t cairo_path_data_t;
union _cairo_path_data_t {
struct {
cairo_path_data_type_t type;
int length;
} header;
struct {
double x, y;
} point;
};
typedef struct cairo_path {
cairo_status_t status;
cairo_path_data_t *data;
int num_data;
} cairo_path_t;
typedef void (*cairo_surface_observer_callback_t) (cairo_surface_t *observer,
cairo_surface_t *target,
void *data);
typedef cairo_surface_t *
(*cairo_raster_source_acquire_func_t) (cairo_pattern_t *pattern,
void *callback_data,
cairo_surface_t *target,
const cairo_rectangle_int_t *extents);
typedef void
(*cairo_raster_source_release_func_t) (cairo_pattern_t *pattern,
void *callback_data,
cairo_surface_t *surface);
typedef cairo_status_t
(*cairo_raster_source_snapshot_func_t) (cairo_pattern_t *pattern,
void *callback_data);
typedef cairo_status_t
(*cairo_raster_source_copy_func_t) (cairo_pattern_t *pattern,
void *callback_data,
const cairo_pattern_t *other);
typedef void
(*cairo_raster_source_finish_func_t) (cairo_pattern_t *pattern,
void *callback_data);
typedef struct _cairo_region cairo_region_t;
typedef struct _GdkPoint GdkPoint;
typedef cairo_rectangle_int_t GdkRectangle;
typedef struct _GdkAtom *GdkAtom;
typedef struct _GdkColor GdkColor;
typedef struct _GdkRGBA GdkRGBA;
typedef struct _GdkCursor GdkCursor;
typedef struct _GdkVisual GdkVisual;
typedef struct _GdkDevice GdkDevice;
typedef struct _GdkDragContext GdkDragContext;
typedef struct _GdkDisplayManager GdkDisplayManager;
typedef struct _GdkDeviceManager GdkDeviceManager;
typedef struct _GdkDisplay GdkDisplay;
typedef struct _GdkScreen GdkScreen;
typedef struct _GdkWindow GdkWindow;
typedef struct _GdkKeymap GdkKeymap;
typedef struct _GdkAppLaunchContext GdkAppLaunchContext;
typedef struct _GdkSeat GdkSeat;
typedef struct _GdkGLContext GdkGLContext;
struct _GdkPoint
{
gint x;
gint y;
};
typedef struct _GdkTimeCoord GdkTimeCoord;
struct _GdkTimeCoord
{
guint32 time;
gdouble axes[128];
};
typedef struct _GdkDeviceTool GdkDeviceTool;
typedef struct _GdkEventAny GdkEventAny;
typedef struct _GdkEventExpose GdkEventExpose;
typedef struct _GdkEventVisibility GdkEventVisibility;
typedef struct _GdkEventMotion GdkEventMotion;
typedef struct _GdkEventButton GdkEventButton;
typedef struct _GdkEventTouch GdkEventTouch;
typedef struct _GdkEventScroll GdkEventScroll;
typedef struct _GdkEventKey GdkEventKey;
typedef struct _GdkEventFocus GdkEventFocus;
typedef struct _GdkEventCrossing GdkEventCrossing;
typedef struct _GdkEventConfigure GdkEventConfigure;
typedef struct _GdkEventProperty GdkEventProperty;
typedef struct _GdkEventSelection GdkEventSelection;
typedef struct _GdkEventOwnerChange GdkEventOwnerChange;
typedef struct _GdkEventProximity GdkEventProximity;
typedef struct _GdkEventDND GdkEventDND;
typedef struct _GdkEventWindowState GdkEventWindowState;
typedef struct _GdkEventSetting GdkEventSetting;
typedef struct _GdkEventGrabBroken GdkEventGrabBroken;
typedef struct _GdkEventTouchpadSwipe GdkEventTouchpadSwipe;
typedef struct _GdkEventTouchpadPinch GdkEventTouchpadPinch;
typedef struct _GdkEventPadButton GdkEventPadButton;
typedef struct _GdkEventPadAxis GdkEventPadAxis;
typedef struct _GdkEventPadGroupMode GdkEventPadGroupMode;
typedef struct _GdkEventSequence GdkEventSequence;
typedef union _GdkEvent GdkEvent;
typedef void (*GdkEventFunc) (GdkEvent *event,
gpointer data);
typedef void GdkXEvent;
typedef GdkFilterReturn (*GdkFilterFunc) (GdkXEvent *xevent,
GdkEvent *event,
gpointer data);
struct _GdkEventAny
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
};
struct _GdkEventExpose
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkRectangle area;
cairo_region_t *region;
gint count;
};
struct _GdkEventVisibility
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkVisibilityState state;
};
struct _GdkEventMotion
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
gdouble x;
gdouble y;
gdouble *axes;
guint state;
gint16 is_hint;
GdkDevice *device;
gdouble x_root, y_root;
};
struct _GdkEventButton
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
gdouble x;
gdouble y;
gdouble *axes;
guint state;
guint button;
GdkDevice *device;
gdouble x_root, y_root;
};
struct _GdkEventTouch
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
gdouble x;
gdouble y;
gdouble *axes;
guint state;
GdkEventSequence *sequence;
gboolean emulating_pointer;
GdkDevice *device;
gdouble x_root, y_root;
};
struct _GdkEventScroll
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
gdouble x;
gdouble y;
guint state;
GdkScrollDirection direction;
GdkDevice *device;
gdouble x_root, y_root;
gdouble delta_x;
gdouble delta_y;
guint is_stop : 1;
};
struct _GdkEventKey
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
guint state;
guint keyval;
gint length;
gchar *string;
guint16 hardware_keycode;
guint8 group;
guint is_modifier : 1;
};
struct _GdkEventCrossing
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkWindow *subwindow;
guint32 time;
gdouble x;
gdouble y;
gdouble x_root;
gdouble y_root;
GdkCrossingMode mode;
GdkNotifyType detail;
gboolean focus;
guint state;
};
struct _GdkEventFocus
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
gint16 in;
};
struct _GdkEventConfigure
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
gint x, y;
gint width;
gint height;
};
struct _GdkEventProperty
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkAtom atom;
guint32 time;
guint state;
};
struct _GdkEventSelection
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkAtom selection;
GdkAtom target;
GdkAtom property;
guint32 time;
GdkWindow *requestor;
};
struct _GdkEventOwnerChange
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkWindow *owner;
GdkOwnerChange reason;
GdkAtom selection;
guint32 time;
guint32 selection_time;
};
struct _GdkEventProximity
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
GdkDevice *device;
};
struct _GdkEventSetting
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkSettingAction action;
char *name;
};
struct _GdkEventWindowState
{
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkWindowState changed_mask;
GdkWindowState new_window_state;
};
struct _GdkEventGrabBroken {
GdkEventType type;
GdkWindow *window;
gint8 send_event;
gboolean keyboard;
gboolean implicit;
GdkWindow *grab_window;
};
struct _GdkEventDND {
GdkEventType type;
GdkWindow *window;
gint8 send_event;
GdkDragContext *context;
guint32 time;
gshort x_root, y_root;
};
struct _GdkEventTouchpadSwipe {
GdkEventType type;
GdkWindow *window;
gint8 send_event;
gint8 phase;
gint8 n_fingers;
guint32 time;
gdouble x;
gdouble y;
gdouble dx;
gdouble dy;
gdouble x_root, y_root;
guint state;
};
struct _GdkEventTouchpadPinch {
GdkEventType type;
GdkWindow *window;
gint8 send_event;
gint8 phase;
gint8 n_fingers;
guint32 time;
gdouble x;
gdouble y;
gdouble dx;
gdouble dy;
gdouble angle_delta;
gdouble scale;
gdouble x_root, y_root;
guint state;
};
struct _GdkEventPadButton {
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
guint group;
guint button;
guint mode;
};
struct _GdkEventPadAxis {
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
guint group;
guint index;
guint mode;
gdouble value;
};
struct _GdkEventPadGroupMode {
GdkEventType type;
GdkWindow *window;
gint8 send_event;
guint32 time;
guint group;
guint mode;
};
union _GdkEvent
{
GdkEventType type;
GdkEventAny any;
GdkEventExpose expose;
GdkEventVisibility visibility;
GdkEventMotion motion;
GdkEventButton button;
GdkEventTouch touch;
GdkEventScroll scroll;
GdkEventKey key;
GdkEventCrossing crossing;
GdkEventFocus focus_change;
GdkEventConfigure configure;
GdkEventProperty property;
GdkEventSelection selection;
GdkEventOwnerChange owner_change;
GdkEventProximity proximity;
GdkEventDND dnd;
GdkEventWindowState window_state;
GdkEventSetting setting;
GdkEventGrabBroken grab_broken;
GdkEventTouchpadSwipe touchpad_swipe;
GdkEventTouchpadPinch touchpad_pinch;
GdkEventPadButton pad_button;
GdkEventPadAxis pad_axis;
GdkEventPadGroupMode pad_group_mode;
};
typedef struct _GdkDrawingContext GdkDrawingContext;
typedef struct _GdkDrawingContextClass GdkDrawingContextClass;
typedef struct _GdkFrameTimings GdkFrameTimings;
typedef struct _GdkFrameClock GdkFrameClock;
typedef struct _GdkFrameClockPrivate GdkFrameClockPrivate;
typedef struct _GdkFrameClockClass GdkFrameClockClass;
typedef struct _GdkGeometry GdkGeometry;
typedef struct _GdkWindowAttr GdkWindowAttr;
typedef struct _GdkWindowRedirect GdkWindowRedirect;
struct _GdkWindowAttr
{
gchar *title;
gint event_mask;
gint x, y;
gint width;
gint height;
GdkWindowWindowClass wclass;
GdkVisual *visual;
GdkWindowType window_type;
GdkCursor *cursor;
gchar *wmclass_name;
gchar *wmclass_class;
gboolean override_redirect;
GdkWindowTypeHint type_hint;
};
struct _GdkGeometry
{
gint min_width;
gint min_height;
gint max_width;
gint max_height;
gint base_width;
gint base_height;
gint width_inc;
gint height_inc;
gdouble min_aspect;
gdouble max_aspect;
GdkGravity win_gravity;
};
typedef struct _GdkWindowClass GdkWindowClass;
struct _GdkWindowClass
{
GObjectClass parent_class;
GdkWindow * (* pick_embedded_child) (GdkWindow *window,
gdouble x,
gdouble y);
void (* to_embedder) (GdkWindow *window,
gdouble offscreen_x,
gdouble offscreen_y,
gdouble *embedder_x,
gdouble *embedder_y);
void (* from_embedder) (GdkWindow *window,
gdouble embedder_x,
gdouble embedder_y,
gdouble *offscreen_x,
gdouble *offscreen_y);
cairo_surface_t * (* create_surface) (GdkWindow *window,
gint width,
gint height);
void (*_gdk_reserved1) (void);
void (*_gdk_reserved2) (void);
void (*_gdk_reserved3) (void);
void (*_gdk_reserved4) (void);
void (*_gdk_reserved5) (void);
void (*_gdk_reserved6) (void);
void (*_gdk_reserved7) (void);
void (*_gdk_reserved8) (void);
};
typedef void (*GdkWindowInvalidateHandlerFunc) (GdkWindow *window,
cairo_region_t *region);
typedef gboolean (*GdkWindowChildFunc) (GdkWindow *window,
gpointer user_data);
typedef void (* GdkSeatGrabPrepareFunc) (GdkSeat *seat,
GdkWindow *window,
gpointer user_data);
struct _GdkSeat
{
GObject parent_instance;
};
typedef struct _GdkMonitor GdkMonitor;
typedef struct _GdkMonitorClass GdkMonitorClass;
struct _GdkColor
{
guint32 pixel;
guint16 red;
guint16 green;
guint16 blue;
};
struct _GdkRGBA
{
gdouble red;
gdouble green;
gdouble blue;
gdouble alpha;
};
typedef struct _GdkPixbuf GdkPixbuf;
typedef void (* GdkPixbufDestroyNotify) (guchar *pixels, gpointer data);
typedef gboolean (*GdkPixbufSaveFunc) (const gchar *buf,
gsize count,
GError **error,
gpointer data);
typedef struct _GdkPixbufAnimation GdkPixbufAnimation;
typedef struct _GdkPixbufAnimationIter GdkPixbufAnimationIter;
typedef struct _GdkPixbufSimpleAnim GdkPixbufSimpleAnim;
typedef struct _GdkPixbufSimpleAnimClass GdkPixbufSimpleAnimClass;
typedef struct _GdkPixbufFormat GdkPixbufFormat;
typedef struct _GdkPixbufLoader GdkPixbufLoader;
struct _GdkPixbufLoader
{
GObject parent_instance;
gpointer priv;
};
typedef struct _GdkPixbufLoaderClass GdkPixbufLoaderClass;
struct _GdkPixbufLoaderClass
{
GObjectClass parent_class;
void (*size_prepared) (GdkPixbufLoader *loader,
int width,
int height);
void (*area_prepared) (GdkPixbufLoader *loader);
void (*area_updated) (GdkPixbufLoader *loader,
int x,
int y,
int width,
int height);
void (*closed) (GdkPixbufLoader *loader);
};
typedef GdkPixbuf *GdkPixbuf_autoptr; typedef GList *GdkPixbuf_listautoptr; typedef GSList *GdkPixbuf_slistautoptr; typedef GQueue *GdkPixbuf_queueautoptr;
typedef GdkPixbufAnimation *GdkPixbufAnimation_autoptr; typedef GList *GdkPixbufAnimation_listautoptr; typedef GSList *GdkPixbufAnimation_slistautoptr; typedef GQueue *GdkPixbufAnimation_queueautoptr;
typedef GdkPixbufAnimationIter *GdkPixbufAnimationIter_autoptr; typedef GList *GdkPixbufAnimationIter_listautoptr; typedef GSList *GdkPixbufAnimationIter_slistautoptr; typedef GQueue *GdkPixbufAnimationIter_queueautoptr;
typedef GdkPixbufLoader *GdkPixbufLoader_autoptr; typedef GList *GdkPixbufLoader_listautoptr; typedef GSList *GdkPixbufLoader_slistautoptr; typedef GQueue *GdkPixbufLoader_queueautoptr;
typedef GdkPixbufSimpleAnim *GdkPixbufSimpleAnim_autoptr; typedef GList *GdkPixbufSimpleAnim_listautoptr; typedef GSList *GdkPixbufSimpleAnim_slistautoptr; typedef GQueue *GdkPixbufSimpleAnim_queueautoptr;
typedef struct _PangoCairoFont PangoCairoFont;
typedef struct _PangoCairoFontMap PangoCairoFontMap;
typedef void (* PangoCairoShapeRendererFunc) (cairo_t *cr,
PangoAttrShape *attr,
gboolean do_path,
gpointer data);
typedef struct _GdkDevicePad GdkDevicePad;
typedef struct _GdkDevicePadInterface GdkDevicePadInterface;
typedef struct _GdkKeymapKey GdkKeymapKey;
struct _GdkKeymapKey
{
guint keycode;
gint group;
gint level;
};
typedef GdkAppLaunchContext *GdkAppLaunchContext_autoptr; typedef GList *GdkAppLaunchContext_listautoptr; typedef GSList *GdkAppLaunchContext_slistautoptr; typedef GQueue *GdkAppLaunchContext_queueautoptr;
typedef GdkCursor *GdkCursor_autoptr; typedef GList *GdkCursor_listautoptr; typedef GSList *GdkCursor_slistautoptr; typedef GQueue *GdkCursor_queueautoptr;
typedef GdkDevice *GdkDevice_autoptr; typedef GList *GdkDevice_listautoptr; typedef GSList *GdkDevice_slistautoptr; typedef GQueue *GdkDevice_queueautoptr;
typedef GdkDeviceManager *GdkDeviceManager_autoptr; typedef GList *GdkDeviceManager_listautoptr; typedef GSList *GdkDeviceManager_slistautoptr; typedef GQueue *GdkDeviceManager_queueautoptr;
typedef GdkDisplay *GdkDisplay_autoptr; typedef GList *GdkDisplay_listautoptr; typedef GSList *GdkDisplay_slistautoptr; typedef GQueue *GdkDisplay_queueautoptr;
typedef GdkDisplayManager *GdkDisplayManager_autoptr; typedef GList *GdkDisplayManager_listautoptr; typedef GSList *GdkDisplayManager_slistautoptr; typedef GQueue *GdkDisplayManager_queueautoptr;
typedef GdkDragContext *GdkDragContext_autoptr; typedef GList *GdkDragContext_listautoptr; typedef GSList *GdkDragContext_slistautoptr; typedef GQueue *GdkDragContext_queueautoptr;
typedef GdkFrameClock *GdkFrameClock_autoptr; typedef GList *GdkFrameClock_listautoptr; typedef GSList *GdkFrameClock_slistautoptr; typedef GQueue *GdkFrameClock_queueautoptr;
typedef GdkGLContext *GdkGLContext_autoptr; typedef GList *GdkGLContext_listautoptr; typedef GSList *GdkGLContext_slistautoptr; typedef GQueue *GdkGLContext_queueautoptr;
typedef GdkKeymap *GdkKeymap_autoptr; typedef GList *GdkKeymap_listautoptr; typedef GSList *GdkKeymap_slistautoptr; typedef GQueue *GdkKeymap_queueautoptr;
typedef GdkScreen *GdkScreen_autoptr; typedef GList *GdkScreen_listautoptr; typedef GSList *GdkScreen_slistautoptr; typedef GQueue *GdkScreen_queueautoptr;
typedef GdkVisual *GdkVisual_autoptr; typedef GList *GdkVisual_listautoptr; typedef GSList *GdkVisual_slistautoptr; typedef GQueue *GdkVisual_queueautoptr;
typedef GdkWindow *GdkWindow_autoptr; typedef GList *GdkWindow_listautoptr; typedef GSList *GdkWindow_slistautoptr; typedef GQueue *GdkWindow_queueautoptr;
typedef GdkEvent *GdkEvent_autoptr; typedef GList *GdkEvent_listautoptr; typedef GSList *GdkEvent_slistautoptr; typedef GQueue *GdkEvent_queueautoptr;
typedef GdkFrameTimings *GdkFrameTimings_autoptr; typedef GList *GdkFrameTimings_listautoptr; typedef GSList *GdkFrameTimings_slistautoptr; typedef GQueue *GdkFrameTimings_queueautoptr;
typedef GdkRGBA *GdkRGBA_autoptr; typedef GList *GdkRGBA_listautoptr; typedef GSList *GdkRGBA_slistautoptr; typedef GQueue *GdkRGBA_queueautoptr;
typedef struct _GtkAccelGroup GtkAccelGroup;
typedef struct _GtkAccelGroupClass GtkAccelGroupClass;
typedef struct _GtkAccelGroupPrivate GtkAccelGroupPrivate;
typedef struct _GtkAccelKey GtkAccelKey;
typedef struct _GtkAccelGroupEntry GtkAccelGroupEntry;
typedef gboolean (*GtkAccelGroupActivate) (GtkAccelGroup *accel_group,
GObject *acceleratable,
guint keyval,
GdkModifierType modifier);
typedef gboolean (*GtkAccelGroupFindFunc) (GtkAccelKey *key,
GClosure *closure,
gpointer data);
struct _GtkAccelGroup
{
GObject parent;
GtkAccelGroupPrivate *priv;
};
struct _GtkAccelGroupClass
{
GObjectClass parent_class;
void (*accel_changed) (GtkAccelGroup *accel_group,
guint keyval,
GdkModifierType modifier,
GClosure *accel_closure);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkAccelKey
{
guint accel_key;
GdkModifierType accel_mods;
guint accel_flags : 16;
};
struct _GtkAccelGroupEntry
{
GtkAccelKey key;
GClosure *closure;
GQuark accel_path_quark;
};
typedef GtkAccelGroup *GtkAccelGroup_autoptr; typedef GList *GtkAccelGroup_listautoptr; typedef GSList *GtkAccelGroup_slistautoptr; typedef GQueue *GtkAccelGroup_queueautoptr;
typedef struct _GtkBorder GtkBorder;
struct _GtkBorder
{
gint16 left;
gint16 right;
gint16 top;
gint16 bottom;
};
typedef GtkBorder *GtkBorder_autoptr; typedef GList *GtkBorder_listautoptr; typedef GSList *GtkBorder_slistautoptr; typedef GQueue *GtkBorder_queueautoptr;
typedef struct _GtkAdjustment GtkAdjustment;
typedef struct _GtkBuilder GtkBuilder;
typedef struct _GtkClipboard GtkClipboard;
typedef struct _GtkIconSet GtkIconSet;
typedef struct _GtkIconSource GtkIconSource;
typedef struct _GtkRcStyle GtkRcStyle;
typedef struct _GtkRequisition GtkRequisition;
typedef struct _GtkSelectionData GtkSelectionData;
typedef struct _GtkSettings GtkSettings;
typedef struct _GtkStyle GtkStyle;
typedef struct _GtkStyleContext GtkStyleContext;
typedef struct _GtkTooltip GtkTooltip;
typedef struct _GtkWidget GtkWidget;
typedef struct _GtkWidgetPath GtkWidgetPath;
typedef struct _GtkWindow GtkWindow;
typedef gboolean (*GtkRcPropertyParser) (const GParamSpec *pspec,
const GString *rc_string,
GValue *property_value);
typedef void (*GtkBuilderConnectFunc) (GtkBuilder *builder,
GObject *object,
const gchar *signal_name,
const gchar *handler_name,
GObject *connect_object,
GConnectFlags flags,
gpointer user_data);
typedef guint64 AtkState;
typedef GSList AtkAttributeSet;
typedef struct _AtkAttribute AtkAttribute;
struct _AtkAttribute {
gchar* name;
gchar* value;
};
typedef struct _AtkImplementor AtkImplementor;
typedef struct _AtkImplementorIface AtkImplementorIface;
typedef struct _AtkObject AtkObject;
typedef struct _AtkObjectClass AtkObjectClass;
typedef struct _AtkRelationSet AtkRelationSet;
typedef struct _AtkStateSet AtkStateSet;
struct _AtkPropertyValues
{
const gchar *property_name;
GValue old_value;
GValue new_value;
};
typedef struct _AtkPropertyValues AtkPropertyValues;
typedef gboolean (*AtkFunction) (gpointer user_data);
typedef void (*AtkPropertyChangeHandler) (AtkObject* obj, AtkPropertyValues* vals);
struct _AtkObject
{
GObject parent;
gchar *description;
gchar *name;
AtkObject *accessible_parent;
AtkRole role;
AtkRelationSet *relation_set;
AtkLayer layer;
};
struct _AtkObjectClass
{
GObjectClass parent;
const gchar* (* get_name) (AtkObject *accessible);
const gchar* (* get_description) (AtkObject *accessible);
AtkObject* (*get_parent) (AtkObject *accessible);
gint (* get_n_children) (AtkObject *accessible);
AtkObject* (* ref_child) (AtkObject *accessible,
gint i);
gint (* get_index_in_parent) (AtkObject *accessible);
AtkRelationSet* (* ref_relation_set) (AtkObject *accessible);
AtkRole (* get_role) (AtkObject *accessible);
AtkLayer (* get_layer) (AtkObject *accessible);
gint (* get_mdi_zorder) (AtkObject *accessible);
AtkStateSet* (* ref_state_set) (AtkObject *accessible);
void (* set_name) (AtkObject *accessible,
const gchar *name);
void (* set_description) (AtkObject *accessible,
const gchar *description);
void (* set_parent) (AtkObject *accessible,
AtkObject *parent);
void (* set_role) (AtkObject *accessible,
AtkRole role);
guint (* connect_property_change_handler) (AtkObject
*accessible,
AtkPropertyChangeHandler *handler);
void (* remove_property_change_handler) (AtkObject
*accessible,
guint
handler_id);
void (* initialize) (AtkObject *accessible,
gpointer data);
void (* children_changed) (AtkObject *accessible,
guint change_index,
gpointer changed_child);
void (* focus_event) (AtkObject *accessible,
gboolean focus_in);
void (* property_change) (AtkObject *accessible,
AtkPropertyValues *values);
void (* state_change) (AtkObject *accessible,
const gchar *name,
gboolean state_set);
void (*visible_data_changed) (AtkObject *accessible);
void (*active_descendant_changed) (AtkObject *accessible,
gpointer *child);
AtkAttributeSet* (*get_attributes) (AtkObject *accessible);
const gchar* (*get_object_locale) (AtkObject *accessible);
AtkFunction pad1;
};
struct _AtkImplementorIface
{
GTypeInterface parent;
AtkObject* (*ref_accessible) (AtkImplementor *implementor);
};
typedef struct _AtkAction AtkAction;
typedef struct _AtkActionIface AtkActionIface;
struct _AtkActionIface
{
GTypeInterface parent;
gboolean (*do_action) (AtkAction *action,
gint i);
gint (*get_n_actions) (AtkAction *action);
const gchar* (*get_description) (AtkAction *action,
gint i);
const gchar* (*get_name) (AtkAction *action,
gint i);
const gchar* (*get_keybinding) (AtkAction *action,
gint i);
gboolean (*set_description) (AtkAction *action,
gint i,
const gchar *desc);
const gchar* (*get_localized_name)(AtkAction *action,
gint i);
};
typedef struct _AtkUtil AtkUtil;
typedef struct _AtkUtilClass AtkUtilClass;
typedef struct _AtkKeyEventStruct AtkKeyEventStruct;
typedef void (*AtkEventListener) (AtkObject* obj);
typedef void (*AtkEventListenerInit) (void);
typedef gint (*AtkKeySnoopFunc) (AtkKeyEventStruct *event,
gpointer user_data);
struct _AtkKeyEventStruct {
gint type;
guint state;
guint keyval;
gint length;
gchar *string;
guint16 keycode;
guint32 timestamp;
};
struct _AtkUtil
{
GObject parent;
};
struct _AtkUtilClass
{
GObjectClass parent;
guint (* add_global_event_listener) (GSignalEmissionHook listener,
const gchar *event_type);
void (* remove_global_event_listener) (guint listener_id);
guint (* add_key_event_listener) (AtkKeySnoopFunc listener,
gpointer data);
void (* remove_key_event_listener) (guint listener_id);
AtkObject* (* get_root) (void);
const gchar* (* get_toolkit_name) (void);
const gchar* (* get_toolkit_version) (void);
};
typedef struct _AtkComponent AtkComponent;
typedef struct _AtkComponentIface AtkComponentIface;
typedef void (*AtkFocusHandler) (AtkObject* object, gboolean focus_in);
typedef struct _AtkRectangle AtkRectangle;
struct _AtkRectangle
{
gint x;
gint y;
gint width;
gint height;
};
struct _AtkComponentIface
{
GTypeInterface parent;
guint (* add_focus_handler) (AtkComponent *component,
AtkFocusHandler handler);
gboolean (* contains) (AtkComponent *component,
gint x,
gint y,
AtkCoordType coord_type);
AtkObject* (* ref_accessible_at_point) (AtkComponent *component,
gint x,
gint y,
AtkCoordType coord_type);
void (* get_extents) (AtkComponent *component,
gint *x,
gint *y,
gint *width,
gint *height,
AtkCoordType coord_type);
void (* get_position) (AtkComponent *component,
gint *x,
gint *y,
AtkCoordType coord_type);
void (* get_size) (AtkComponent *component,
gint *width,
gint *height);
gboolean (* grab_focus) (AtkComponent *component);
void (* remove_focus_handler) (AtkComponent *component,
guint handler_id);
gboolean (* set_extents) (AtkComponent *component,
gint x,
gint y,
gint width,
gint height,
AtkCoordType coord_type);
gboolean (* set_position) (AtkComponent *component,
gint x,
gint y,
AtkCoordType coord_type);
gboolean (* set_size) (AtkComponent *component,
gint width,
gint height);
AtkLayer (* get_layer) (AtkComponent *component);
gint (* get_mdi_zorder) (AtkComponent *component);
void (* bounds_changed) (AtkComponent *component,
AtkRectangle *bounds);
gdouble (* get_alpha) (AtkComponent *component);
gboolean (*scroll_to) (AtkComponent *component,
AtkScrollType type);
gboolean (*scroll_to_point) (AtkComponent *component,
AtkCoordType coords,
gint x,
gint y);
};
typedef struct _AtkDocument AtkDocument;
typedef struct _AtkDocumentIface AtkDocumentIface;
struct _AtkDocumentIface
{
GTypeInterface parent;
const gchar* ( *get_document_type) (AtkDocument *document);
gpointer ( *get_document) (AtkDocument *document);
const gchar* ( *get_document_locale) (AtkDocument *document);
AtkAttributeSet * ( *get_document_attributes) (AtkDocument *document);
const gchar* ( *get_document_attribute_value) (AtkDocument *document,
const gchar *attribute_name);
gboolean ( *set_document_attribute) (AtkDocument *document,
const gchar *attribute_name,
const gchar *attribute_value);
gint ( *get_current_page_number) (AtkDocument *document);
gint ( *get_page_count) (AtkDocument *document);
};
typedef struct _AtkText AtkText;
typedef struct _AtkTextIface AtkTextIface;
typedef struct _AtkTextRectangle AtkTextRectangle;
struct _AtkTextRectangle {
gint x;
gint y;
gint width;
gint height;
};
typedef struct _AtkTextRange AtkTextRange;
struct _AtkTextRange {
AtkTextRectangle bounds;
gint start_offset;
gint end_offset;
gchar* content;
};
struct _AtkTextIface
{
GTypeInterface parent;
gchar* (* get_text) (AtkText *text,
gint start_offset,
gint end_offset);
gchar* (* get_text_after_offset) (AtkText *text,
gint offset,
AtkTextBoundary boundary_type,
gint *start_offset,
gint *end_offset);
gchar* (* get_text_at_offset) (AtkText *text,
gint offset,
AtkTextBoundary boundary_type,
gint *start_offset,
gint *end_offset);
gunichar (* get_character_at_offset) (AtkText *text,
gint offset);
gchar* (* get_text_before_offset) (AtkText *text,
gint offset,
AtkTextBoundary boundary_type,
gint *start_offset,
gint *end_offset);
gint (* get_caret_offset) (AtkText *text);
AtkAttributeSet* (* get_run_attributes) (AtkText *text,
gint offset,
gint *start_offset,
gint *end_offset);
AtkAttributeSet* (* get_default_attributes) (AtkText *text);
void (* get_character_extents) (AtkText *text,
gint offset,
gint *x,
gint *y,
gint *width,
gint *height,
AtkCoordType coords);
gint (* get_character_count) (AtkText *text);
gint (* get_offset_at_point) (AtkText *text,
gint x,
gint y,
AtkCoordType coords);
gint (* get_n_selections) (AtkText *text);
gchar* (* get_selection) (AtkText *text,
gint selection_num,
gint *start_offset,
gint *end_offset);
gboolean (* add_selection) (AtkText *text,
gint start_offset,
gint end_offset);
gboolean (* remove_selection) (AtkText *text,
gint selection_num);
gboolean (* set_selection) (AtkText *text,
gint selection_num,
gint start_offset,
gint end_offset);
gboolean (* set_caret_offset) (AtkText *text,
gint offset);
void (* text_changed) (AtkText *text,
gint position,
gint length);
void (* text_caret_moved) (AtkText *text,
gint location);
void (* text_selection_changed) (AtkText *text);
void (* text_attributes_changed) (AtkText *text);
void (* get_range_extents) (AtkText *text,
gint start_offset,
gint end_offset,
AtkCoordType coord_type,
AtkTextRectangle *rect);
AtkTextRange** (* get_bounded_ranges) (AtkText *text,
AtkTextRectangle *rect,
AtkCoordType coord_type,
AtkTextClipType x_clip_type,
AtkTextClipType y_clip_type);
gchar* (* get_string_at_offset) (AtkText *text,
gint offset,
AtkTextGranularity granularity,
gint *start_offset,
gint *end_offset);
gboolean (* scroll_substring_to) (AtkText *text,
gint start_offset,
gint end_offset,
AtkScrollType type);
gboolean (* scroll_substring_to_point) (AtkText *text,
gint start_offset,
gint end_offset,
AtkCoordType coords,
gint x,
gint y);
};
typedef struct _AtkEditableText AtkEditableText;
typedef struct _AtkEditableTextIface AtkEditableTextIface;
struct _AtkEditableTextIface
{
GTypeInterface parent_interface;
gboolean (* set_run_attributes) (AtkEditableText *text,
AtkAttributeSet *attrib_set,
gint start_offset,
gint end_offset);
void (* set_text_contents) (AtkEditableText *text,
const gchar *string);
void (* insert_text) (AtkEditableText *text,
const gchar *string,
gint length,
gint *position);
void (* copy_text) (AtkEditableText *text,
gint start_pos,
gint end_pos);
void (* cut_text) (AtkEditableText *text,
gint start_pos,
gint end_pos);
void (* delete_text) (AtkEditableText *text,
gint start_pos,
gint end_pos);
void (* paste_text) (AtkEditableText *text,
gint position);
};
typedef struct _AtkGObjectAccessible AtkGObjectAccessible;
typedef struct _AtkGObjectAccessibleClass AtkGObjectAccessibleClass;
struct _AtkGObjectAccessible
{
AtkObject parent;
};
struct _AtkGObjectAccessibleClass
{
AtkObjectClass parent_class;
AtkFunction pad1;
AtkFunction pad2;
};
typedef struct _AtkHyperlink AtkHyperlink;
typedef struct _AtkHyperlinkClass AtkHyperlinkClass;
struct _AtkHyperlink
{
GObject parent;
};
struct _AtkHyperlinkClass
{
GObjectClass parent;
gchar* (* get_uri) (AtkHyperlink *link_,
gint i);
AtkObject* (* get_object) (AtkHyperlink *link_,
gint i);
gint (* get_end_index) (AtkHyperlink *link_);
gint (* get_start_index) (AtkHyperlink *link_);
gboolean (* is_valid) (AtkHyperlink *link_);
gint (* get_n_anchors) (AtkHyperlink *link_);
guint (* link_state) (AtkHyperlink *link_);
gboolean (* is_selected_link) (AtkHyperlink *link_);
void ( *link_activated) (AtkHyperlink *link_);
AtkFunction pad1;
};
typedef struct _AtkHyperlinkImpl AtkHyperlinkImpl;
typedef struct _AtkHyperlinkImplIface AtkHyperlinkImplIface;
struct _AtkHyperlinkImplIface
{
GTypeInterface parent;
AtkHyperlink* (* get_hyperlink) (AtkHyperlinkImpl *impl);
};
typedef struct _AtkHypertext AtkHypertext;
typedef struct _AtkHypertextIface AtkHypertextIface;
struct _AtkHypertextIface
{
GTypeInterface parent;
AtkHyperlink*(* get_link) (AtkHypertext *hypertext,
gint link_index);
gint (* get_n_links) (AtkHypertext *hypertext);
gint (* get_link_index) (AtkHypertext *hypertext,
gint char_index);
void (* link_selected) (AtkHypertext *hypertext,
gint link_index);
};
typedef struct _AtkImage AtkImage;
typedef struct _AtkImageIface AtkImageIface;
struct _AtkImageIface
{
GTypeInterface parent;
void ( *get_image_position) (AtkImage *image,
gint *x,
gint *y,
AtkCoordType coord_type);
const gchar* ( *get_image_description) (AtkImage *image);
void ( *get_image_size) (AtkImage *image,
gint *width,
gint *height);
gboolean ( *set_image_description) (AtkImage *image,
const gchar *description);
const gchar* ( *get_image_locale) (AtkImage *image);
};
typedef struct _AtkNoOpObject AtkNoOpObject;
typedef struct _AtkNoOpObjectClass AtkNoOpObjectClass;
struct _AtkNoOpObject
{
AtkObject parent;
};
struct _AtkNoOpObjectClass
{
AtkObjectClass parent_class;
};
typedef struct _AtkObjectFactory AtkObjectFactory;
typedef struct _AtkObjectFactoryClass AtkObjectFactoryClass;
struct _AtkObjectFactory
{
GObject parent;
};
struct _AtkObjectFactoryClass
{
GObjectClass parent_class;
AtkObject* (* create_accessible) (GObject *obj);
void (* invalidate) (AtkObjectFactory *factory);
GType (* get_accessible_type) (void);
AtkFunction pad1;
AtkFunction pad2;
};
typedef struct _AtkNoOpObjectFactory AtkNoOpObjectFactory;
typedef struct _AtkNoOpObjectFactoryClass AtkNoOpObjectFactoryClass;
struct _AtkNoOpObjectFactory
{
AtkObjectFactory parent;
};
struct _AtkNoOpObjectFactoryClass
{
AtkObjectFactoryClass parent_class;
};
typedef struct _AtkPlug AtkPlug;
typedef struct _AtkPlugClass AtkPlugClass;
struct _AtkPlug
{
AtkObject parent;
};
struct _AtkPlugClass
{
AtkObjectClass parent_class;
gchar* (* get_object_id) (AtkPlug* obj);
};
typedef struct _AtkRange AtkRange;
struct _AtkRegistry
{
GObject parent;
GHashTable *factory_type_registry;
GHashTable *factory_singleton_cache;
};
struct _AtkRegistryClass
{
GObjectClass parent_class;
};
typedef struct _AtkRegistry AtkRegistry;
typedef struct _AtkRegistryClass AtkRegistryClass;
typedef struct _AtkRelation AtkRelation;
typedef struct _AtkRelationClass AtkRelationClass;
struct _AtkRelation
{
GObject parent;
GPtrArray *target;
AtkRelationType relationship;
};
struct _AtkRelationClass
{
GObjectClass parent;
};
typedef struct _AtkRelationSetClass AtkRelationSetClass;
struct _AtkRelationSet
{
GObject parent;
GPtrArray *relations;
};
struct _AtkRelationSetClass
{
GObjectClass parent;
AtkFunction pad1;
AtkFunction pad2;
};
typedef struct _AtkSelection AtkSelection;
typedef struct _AtkSelectionIface AtkSelectionIface;
struct _AtkSelectionIface
{
GTypeInterface parent;
gboolean (* add_selection) (AtkSelection *selection,
gint i);
gboolean (* clear_selection) (AtkSelection *selection);
AtkObject* (* ref_selection) (AtkSelection *selection,
gint i);
gint (* get_selection_count) (AtkSelection *selection);
gboolean (* is_child_selected) (AtkSelection *selection,
gint i);
gboolean (* remove_selection) (AtkSelection *selection,
gint i);
gboolean (* select_all_selection) (AtkSelection *selection);
void (*selection_changed) (AtkSelection *selection);
};
typedef struct _AtkSocket AtkSocket;
typedef struct _AtkSocketClass AtkSocketClass;
struct _AtkSocket
{
AtkObject parent;
gchar* embedded_plug_id;
};
struct _AtkSocketClass
{
AtkObjectClass parent_class;
void (* embed) (AtkSocket *obj, gchar* plug_id);
};
typedef struct _AtkStateSetClass AtkStateSetClass;
struct _AtkStateSet
{
GObject parent;
};
struct _AtkStateSetClass
{
GObjectClass parent;
};
typedef struct _AtkStreamableContent AtkStreamableContent;
typedef struct _AtkStreamableContentIface AtkStreamableContentIface;
struct _AtkStreamableContentIface
{
GTypeInterface parent;
gint (* get_n_mime_types) (AtkStreamableContent *streamable);
const gchar* (* get_mime_type) (AtkStreamableContent *streamable,
gint i);
GIOChannel* (* get_stream) (AtkStreamableContent *streamable,
const gchar *mime_type);
const gchar* (* get_uri) (AtkStreamableContent *streamable,
const gchar *mime_type);
AtkFunction pad1;
AtkFunction pad2;
AtkFunction pad3;
};
typedef struct _AtkTable AtkTable;
typedef struct _AtkTableIface AtkTableIface;
struct _AtkTableIface
{
GTypeInterface parent;
AtkObject* (* ref_at) (AtkTable *table,
gint row,
gint column);
gint (* get_index_at) (AtkTable *table,
gint row,
gint column);
gint (* get_column_at_index) (AtkTable *table,
gint index_);
gint (* get_row_at_index) (AtkTable *table,
gint index_);
gint (* get_n_columns) (AtkTable *table);
gint (* get_n_rows) (AtkTable *table);
gint (* get_column_extent_at) (AtkTable *table,
gint row,
gint column);
gint (* get_row_extent_at) (AtkTable *table,
gint row,
gint column);
AtkObject*
(* get_caption) (AtkTable *table);
const gchar* (* get_column_description) (AtkTable *table,
gint column);
AtkObject* (* get_column_header) (AtkTable *table,
gint column);
const gchar* (* get_row_description) (AtkTable *table,
gint row);
AtkObject* (* get_row_header) (AtkTable *table,
gint row);
AtkObject* (* get_summary) (AtkTable *table);
void (* set_caption) (AtkTable *table,
AtkObject *caption);
void (* set_column_description) (AtkTable *table,
gint column,
const gchar *description);
void (* set_column_header) (AtkTable *table,
gint column,
AtkObject *header);
void (* set_row_description) (AtkTable *table,
gint row,
const gchar *description);
void (* set_row_header) (AtkTable *table,
gint row,
AtkObject *header);
void (* set_summary) (AtkTable *table,
AtkObject *accessible);
gint (* get_selected_columns) (AtkTable *table,
gint **selected);
gint (* get_selected_rows) (AtkTable *table,
gint **selected);
gboolean (* is_column_selected) (AtkTable *table,
gint column);
gboolean (* is_row_selected) (AtkTable *table,
gint row);
gboolean (* is_selected) (AtkTable *table,
gint row,
gint column);
gboolean (* add_row_selection) (AtkTable *table,
gint row);
gboolean (* remove_row_selection) (AtkTable *table,
gint row);
gboolean (* add_column_selection) (AtkTable *table,
gint column);
gboolean (* remove_column_selection) (AtkTable *table,
gint column);
void (* row_inserted) (AtkTable *table,
gint row,
gint num_inserted);
void (* column_inserted) (AtkTable *table,
gint column,
gint num_inserted);
void (* row_deleted) (AtkTable *table,
gint row,
gint num_deleted);
void (* column_deleted) (AtkTable *table,
gint column,
gint num_deleted);
void (* row_reordered) (AtkTable *table);
void (* column_reordered) (AtkTable *table);
void (* model_changed) (AtkTable *table);
};
typedef struct _AtkTableCell AtkTableCell;
typedef struct _AtkTableCellIface AtkTableCellIface;
struct _AtkTableCellIface
{
GTypeInterface parent;
gint (*get_column_span) (AtkTableCell *cell);
GPtrArray * (*get_column_header_cells) (AtkTableCell *cell);
gboolean (*get_position) (AtkTableCell *cell,
gint *row,
gint *column);
gint (*get_row_span) (AtkTableCell *cell);
GPtrArray * (*get_row_header_cells) (AtkTableCell *cell);
gboolean (*get_row_column_span) (AtkTableCell *cell,
gint *row,
gint *column,
gint *row_span,
gint *column_span);
AtkObject * (*get_table) (AtkTableCell *cell);
};
typedef struct _AtkMisc AtkMisc;
typedef struct _AtkMiscClass AtkMiscClass;
struct _AtkMisc
{
GObject parent;
};
struct _AtkMiscClass
{
GObjectClass parent;
void (* threads_enter) (AtkMisc *misc);
void (* threads_leave) (AtkMisc *misc);
gpointer vfuncs[32];
};
typedef struct _AtkValue AtkValue;
typedef struct _AtkValueIface AtkValueIface;
struct _AtkValueIface
{
GTypeInterface parent;
void (* get_current_value) (AtkValue *obj,
GValue *value);
void (* get_maximum_value) (AtkValue *obj,
GValue *value);
void (* get_minimum_value) (AtkValue *obj,
GValue *value);
gboolean (* set_current_value) (AtkValue *obj,
const GValue *value);
void (* get_minimum_increment) (AtkValue *obj,
GValue *value);
void (* get_value_and_text) (AtkValue *obj,
gdouble *value,
gchar **text);
AtkRange*(* get_range) (AtkValue *obj);
gdouble (* get_increment) (AtkValue *obj);
GSList* (* get_sub_ranges) (AtkValue *obj);
void (* set_value) (AtkValue *obj,
const gdouble new_value);
};
typedef struct _AtkWindow AtkWindow;
typedef struct _AtkWindowIface AtkWindowIface;
struct _AtkWindowIface
{
GTypeInterface parent;
};
typedef struct _GtkWidgetPrivate GtkWidgetPrivate;
typedef struct _GtkWidgetClass GtkWidgetClass;
typedef struct _GtkWidgetClassPrivate GtkWidgetClassPrivate;
typedef GdkRectangle GtkAllocation;
typedef void (*GtkCallback) (GtkWidget *widget,
gpointer data);
typedef gboolean (*GtkTickCallback) (GtkWidget *widget,
GdkFrameClock *frame_clock,
gpointer user_data);
struct _GtkRequisition
{
gint width;
gint height;
};
struct _GtkWidget
{
GInitiallyUnowned parent_instance;
GtkWidgetPrivate *priv;
};
struct _GtkWidgetClass
{
GInitiallyUnownedClass parent_class;
guint activate_signal;
void (*dispatch_child_properties_changed) (GtkWidget *widget,
guint n_pspecs,
GParamSpec **pspecs);
void (* destroy) (GtkWidget *widget);
void (* show) (GtkWidget *widget);
void (* show_all) (GtkWidget *widget);
void (* hide) (GtkWidget *widget);
void (* map) (GtkWidget *widget);
void (* unmap) (GtkWidget *widget);
void (* realize) (GtkWidget *widget);
void (* unrealize) (GtkWidget *widget);
void (* size_allocate) (GtkWidget *widget,
GtkAllocation *allocation);
void (* state_changed) (GtkWidget *widget,
GtkStateType previous_state);
void (* state_flags_changed) (GtkWidget *widget,
GtkStateFlags previous_state_flags);
void (* parent_set) (GtkWidget *widget,
GtkWidget *previous_parent);
void (* hierarchy_changed) (GtkWidget *widget,
GtkWidget *previous_toplevel);
void (* style_set) (GtkWidget *widget,
GtkStyle *previous_style);
void (* direction_changed) (GtkWidget *widget,
GtkTextDirection previous_direction);
void (* grab_notify) (GtkWidget *widget,
gboolean was_grabbed);
void (* child_notify) (GtkWidget *widget,
GParamSpec *child_property);
gboolean (* draw) (GtkWidget *widget,
cairo_t *cr);
GtkSizeRequestMode (* get_request_mode) (GtkWidget *widget);
void (* get_preferred_height) (GtkWidget *widget,
gint *minimum_height,
gint *natural_height);
void (* get_preferred_width_for_height) (GtkWidget *widget,
gint height,
gint *minimum_width,
gint *natural_width);
void (* get_preferred_width) (GtkWidget *widget,
gint *minimum_width,
gint *natural_width);
void (* get_preferred_height_for_width) (GtkWidget *widget,
gint width,
gint *minimum_height,
gint *natural_height);
gboolean (* mnemonic_activate) (GtkWidget *widget,
gboolean group_cycling);
void (* grab_focus) (GtkWidget *widget);
gboolean (* focus) (GtkWidget *widget,
GtkDirectionType direction);
void (* move_focus) (GtkWidget *widget,
GtkDirectionType direction);
gboolean (* keynav_failed) (GtkWidget *widget,
GtkDirectionType direction);
gboolean (* event) (GtkWidget *widget,
GdkEvent *event);
gboolean (* button_press_event) (GtkWidget *widget,
GdkEventButton *event);
gboolean (* button_release_event) (GtkWidget *widget,
GdkEventButton *event);
gboolean (* scroll_event) (GtkWidget *widget,
GdkEventScroll *event);
gboolean (* motion_notify_event) (GtkWidget *widget,
GdkEventMotion *event);
gboolean (* delete_event) (GtkWidget *widget,
GdkEventAny *event);
gboolean (* destroy_event) (GtkWidget *widget,
GdkEventAny *event);
gboolean (* key_press_event) (GtkWidget *widget,
GdkEventKey *event);
gboolean (* key_release_event) (GtkWidget *widget,
GdkEventKey *event);
gboolean (* enter_notify_event) (GtkWidget *widget,
GdkEventCrossing *event);
gboolean (* leave_notify_event) (GtkWidget *widget,
GdkEventCrossing *event);
gboolean (* configure_event) (GtkWidget *widget,
GdkEventConfigure *event);
gboolean (* focus_in_event) (GtkWidget *widget,
GdkEventFocus *event);
gboolean (* focus_out_event) (GtkWidget *widget,
GdkEventFocus *event);
gboolean (* map_event) (GtkWidget *widget,
GdkEventAny *event);
gboolean (* unmap_event) (GtkWidget *widget,
GdkEventAny *event);
gboolean (* property_notify_event) (GtkWidget *widget,
GdkEventProperty *event);
gboolean (* selection_clear_event) (GtkWidget *widget,
GdkEventSelection *event);
gboolean (* selection_request_event) (GtkWidget *widget,
GdkEventSelection *event);
gboolean (* selection_notify_event) (GtkWidget *widget,
GdkEventSelection *event);
gboolean (* proximity_in_event) (GtkWidget *widget,
GdkEventProximity *event);
gboolean (* proximity_out_event) (GtkWidget *widget,
GdkEventProximity *event);
gboolean (* visibility_notify_event) (GtkWidget *widget,
GdkEventVisibility *event);
gboolean (* window_state_event) (GtkWidget *widget,
GdkEventWindowState *event);
gboolean (* damage_event) (GtkWidget *widget,
GdkEventExpose *event);
gboolean (* grab_broken_event) (GtkWidget *widget,
GdkEventGrabBroken *event);
void (* selection_get) (GtkWidget *widget,
GtkSelectionData *selection_data,
guint info,
guint time_);
void (* selection_received) (GtkWidget *widget,
GtkSelectionData *selection_data,
guint time_);
void (* drag_begin) (GtkWidget *widget,
GdkDragContext *context);
void (* drag_end) (GtkWidget *widget,
GdkDragContext *context);
void (* drag_data_get) (GtkWidget *widget,
GdkDragContext *context,
GtkSelectionData *selection_data,
guint info,
guint time_);
void (* drag_data_delete) (GtkWidget *widget,
GdkDragContext *context);
void (* drag_leave) (GtkWidget *widget,
GdkDragContext *context,
guint time_);
gboolean (* drag_motion) (GtkWidget *widget,
GdkDragContext *context,
gint x,
gint y,
guint time_);
gboolean (* drag_drop) (GtkWidget *widget,
GdkDragContext *context,
gint x,
gint y,
guint time_);
void (* drag_data_received) (GtkWidget *widget,
GdkDragContext *context,
gint x,
gint y,
GtkSelectionData *selection_data,
guint info,
guint time_);
gboolean (* drag_failed) (GtkWidget *widget,
GdkDragContext *context,
GtkDragResult result);
gboolean (* popup_menu) (GtkWidget *widget);
gboolean (* show_help) (GtkWidget *widget,
GtkWidgetHelpType help_type);
AtkObject * (* get_accessible) (GtkWidget *widget);
void (* screen_changed) (GtkWidget *widget,
GdkScreen *previous_screen);
gboolean (* can_activate_accel) (GtkWidget *widget,
guint signal_id);
void (* composited_changed) (GtkWidget *widget);
gboolean (* query_tooltip) (GtkWidget *widget,
gint x,
gint y,
gboolean keyboard_tooltip,
GtkTooltip *tooltip);
void (* compute_expand) (GtkWidget *widget,
gboolean *hexpand_p,
gboolean *vexpand_p);
void (* adjust_size_request) (GtkWidget *widget,
GtkOrientation orientation,
gint *minimum_size,
gint *natural_size);
void (* adjust_size_allocation) (GtkWidget *widget,
GtkOrientation orientation,
gint *minimum_size,
gint *natural_size,
gint *allocated_pos,
gint *allocated_size);
void (* style_updated) (GtkWidget *widget);
gboolean (* touch_event) (GtkWidget *widget,
GdkEventTouch *event);
void (* get_preferred_height_and_baseline_for_width) (GtkWidget *widget,
gint width,
gint *minimum_height,
gint *natural_height,
gint *minimum_baseline,
gint *natural_baseline);
void (* adjust_baseline_request)(GtkWidget *widget,
gint *minimum_baseline,
gint *natural_baseline);
void (* adjust_baseline_allocation) (GtkWidget *widget,
gint *baseline);
void (*queue_draw_region) (GtkWidget *widget,
const cairo_region_t *region);
GtkWidgetClassPrivate *priv;
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
};
typedef GtkWidget *GtkWidget_autoptr; typedef GList *GtkWidget_listautoptr; typedef GSList *GtkWidget_slistautoptr; typedef GQueue *GtkWidget_queueautoptr;
typedef GtkRequisition *GtkRequisition_autoptr; typedef GList *GtkRequisition_listautoptr; typedef GSList *GtkRequisition_slistautoptr; typedef GQueue *GtkRequisition_queueautoptr;
typedef struct _GtkApplication GtkApplication;
typedef struct _GtkApplicationClass GtkApplicationClass;
typedef struct _GtkApplicationPrivate GtkApplicationPrivate;
struct _GtkApplication
{
GApplication parent;
GtkApplicationPrivate *priv;
};
struct _GtkApplicationClass
{
GApplicationClass parent_class;
void (*window_added) (GtkApplication *application,
GtkWindow *window);
void (*window_removed) (GtkApplication *application,
GtkWindow *window);
gpointer padding[12];
};
typedef GtkApplication *GtkApplication_autoptr; typedef GList *GtkApplication_listautoptr; typedef GSList *GtkApplication_slistautoptr; typedef GQueue *GtkApplication_queueautoptr;
typedef struct _GtkContainer GtkContainer;
typedef struct _GtkContainerPrivate GtkContainerPrivate;
typedef struct _GtkContainerClass GtkContainerClass;
struct _GtkContainer
{
GtkWidget widget;
GtkContainerPrivate *priv;
};
struct _GtkContainerClass
{
GtkWidgetClass parent_class;
void (*add) (GtkContainer *container,
GtkWidget *widget);
void (*remove) (GtkContainer *container,
GtkWidget *widget);
void (*check_resize) (GtkContainer *container);
void (*forall) (GtkContainer *container,
gboolean include_internals,
GtkCallback callback,
gpointer callback_data);
void (*set_focus_child) (GtkContainer *container,
GtkWidget *child);
GType (*child_type) (GtkContainer *container);
gchar* (*composite_name) (GtkContainer *container,
GtkWidget *child);
void (*set_child_property) (GtkContainer *container,
GtkWidget *child,
guint property_id,
const GValue *value,
GParamSpec *pspec);
void (*get_child_property) (GtkContainer *container,
GtkWidget *child,
guint property_id,
GValue *value,
GParamSpec *pspec);
GtkWidgetPath * (*get_path_for_child) (GtkContainer *container,
GtkWidget *child);
unsigned int _handle_border_width : 1;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef GtkContainer *GtkContainer_autoptr; typedef GList *GtkContainer_listautoptr; typedef GSList *GtkContainer_slistautoptr; typedef GQueue *GtkContainer_queueautoptr;
typedef struct _GtkBin GtkBin;
typedef struct _GtkBinPrivate GtkBinPrivate;
typedef struct _GtkBinClass GtkBinClass;
struct _GtkBin
{
GtkContainer container;
GtkBinPrivate *priv;
};
struct _GtkBinClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef GtkBin *GtkBin_autoptr; typedef GList *GtkBin_listautoptr; typedef GSList *GtkBin_slistautoptr; typedef GQueue *GtkBin_queueautoptr;
typedef struct _GtkWindowPrivate GtkWindowPrivate;
typedef struct _GtkWindowClass GtkWindowClass;
typedef struct _GtkWindowGeometryInfo GtkWindowGeometryInfo;
typedef struct _GtkWindowGroup GtkWindowGroup;
typedef struct _GtkWindowGroupClass GtkWindowGroupClass;
typedef struct _GtkWindowGroupPrivate GtkWindowGroupPrivate;
struct _GtkWindow
{
GtkBin bin;
GtkWindowPrivate *priv;
};
struct _GtkWindowClass
{
GtkBinClass parent_class;
void (* set_focus) (GtkWindow *window,
GtkWidget *focus);
void (* activate_focus) (GtkWindow *window);
void (* activate_default) (GtkWindow *window);
void (* keys_changed) (GtkWindow *window);
gboolean (* enable_debugging) (GtkWindow *window,
gboolean toggle);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
};
typedef GtkWindow *GtkWindow_autoptr; typedef GList *GtkWindow_listautoptr; typedef GSList *GtkWindow_slistautoptr; typedef GQueue *GtkWindow_queueautoptr;
typedef GtkWindowGroup *GtkWindowGroup_autoptr; typedef GList *GtkWindowGroup_listautoptr; typedef GSList *GtkWindowGroup_slistautoptr; typedef GQueue *GtkWindowGroup_queueautoptr;
typedef struct _GtkDialog GtkDialog;
typedef struct _GtkDialogPrivate GtkDialogPrivate;
typedef struct _GtkDialogClass GtkDialogClass;
struct _GtkDialog
{
GtkWindow window;
GtkDialogPrivate *priv;
};
struct _GtkDialogClass
{
GtkWindowClass parent_class;
void (* response) (GtkDialog *dialog, gint response_id);
void (* close) (GtkDialog *dialog);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef GtkDialog *GtkDialog_autoptr; typedef GList *GtkDialog_listautoptr; typedef GSList *GtkDialog_slistautoptr; typedef GQueue *GtkDialog_queueautoptr;
typedef struct _GtkAboutDialog GtkAboutDialog;
typedef struct _GtkAboutDialogClass GtkAboutDialogClass;
typedef struct _GtkAboutDialogPrivate GtkAboutDialogPrivate;
struct _GtkAboutDialog
{
GtkDialog parent_instance;
GtkAboutDialogPrivate *priv;
};
struct _GtkAboutDialogClass
{
GtkDialogClass parent_class;
gboolean (*activate_link) (GtkAboutDialog *dialog,
const gchar *uri);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef GtkAboutDialog *GtkAboutDialog_autoptr; typedef GList *GtkAboutDialog_listautoptr; typedef GSList *GtkAboutDialog_slistautoptr; typedef GQueue *GtkAboutDialog_queueautoptr;
typedef struct _GtkMisc GtkMisc;
typedef struct _GtkMiscPrivate GtkMiscPrivate;
typedef struct _GtkMiscClass GtkMiscClass;
struct _GtkMisc
{
GtkWidget widget;
GtkMiscPrivate *priv;
};
struct _GtkMiscClass
{
GtkWidgetClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkMenuShell GtkMenuShell;
typedef struct _GtkMenuShellClass GtkMenuShellClass;
typedef struct _GtkMenuShellPrivate GtkMenuShellPrivate;
struct _GtkMenuShell
{
GtkContainer container;
GtkMenuShellPrivate *priv;
};
struct _GtkMenuShellClass
{
GtkContainerClass parent_class;
guint submenu_placement : 1;
void (*deactivate) (GtkMenuShell *menu_shell);
void (*selection_done) (GtkMenuShell *menu_shell);
void (*move_current) (GtkMenuShell *menu_shell,
GtkMenuDirectionType direction);
void (*activate_current) (GtkMenuShell *menu_shell,
gboolean force_hide);
void (*cancel) (GtkMenuShell *menu_shell);
void (*select_item) (GtkMenuShell *menu_shell,
GtkWidget *menu_item);
void (*insert) (GtkMenuShell *menu_shell,
GtkWidget *child,
gint position);
gint (*get_popup_delay) (GtkMenuShell *menu_shell);
gboolean (*move_selected) (GtkMenuShell *menu_shell,
gint distance);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef GtkMenuShell *GtkMenuShell_autoptr; typedef GList *GtkMenuShell_listautoptr; typedef GSList *GtkMenuShell_slistautoptr; typedef GQueue *GtkMenuShell_queueautoptr;
typedef struct _GtkMenu GtkMenu;
typedef struct _GtkMenuClass GtkMenuClass;
typedef struct _GtkMenuPrivate GtkMenuPrivate;
typedef void (*GtkMenuPositionFunc) (GtkMenu *menu,
gint *x,
gint *y,
gboolean *push_in,
gpointer user_data);
typedef void (*GtkMenuDetachFunc) (GtkWidget *attach_widget,
GtkMenu *menu);
struct _GtkMenu
{
GtkMenuShell menu_shell;
GtkMenuPrivate *priv;
};
struct _GtkMenuClass
{
GtkMenuShellClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef GtkMenu *GtkMenu_autoptr; typedef GList *GtkMenu_listautoptr; typedef GSList *GtkMenu_slistautoptr; typedef GQueue *GtkMenu_queueautoptr;
typedef struct _GtkLabel GtkLabel;
typedef struct _GtkLabelPrivate GtkLabelPrivate;
typedef struct _GtkLabelClass GtkLabelClass;
typedef struct _GtkLabelSelectionInfo GtkLabelSelectionInfo;
struct _GtkLabel
{
GtkMisc misc;
GtkLabelPrivate *priv;
};
struct _GtkLabelClass
{
GtkMiscClass parent_class;
void (* move_cursor) (GtkLabel *label,
GtkMovementStep step,
gint count,
gboolean extend_selection);
void (* copy_clipboard) (GtkLabel *label);
void (* populate_popup) (GtkLabel *label,
GtkMenu *menu);
gboolean (*activate_link) (GtkLabel *label,
const gchar *uri);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef GtkLabel *GtkLabel_autoptr; typedef GList *GtkLabel_listautoptr; typedef GSList *GtkLabel_slistautoptr; typedef GQueue *GtkLabel_queueautoptr;
typedef struct _GtkAccelLabel GtkAccelLabel;
typedef struct _GtkAccelLabelClass GtkAccelLabelClass;
typedef struct _GtkAccelLabelPrivate GtkAccelLabelPrivate;
struct _GtkAccelLabel
{
GtkLabel label;
GtkAccelLabelPrivate *priv;
};
struct _GtkAccelLabelClass
{
GtkLabelClass parent_class;
gchar *signal_quote1;
gchar *signal_quote2;
gchar *mod_name_shift;
gchar *mod_name_control;
gchar *mod_name_alt;
gchar *mod_separator;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef GtkAccelLabel *GtkAccelLabel_autoptr; typedef GList *GtkAccelLabel_listautoptr; typedef GSList *GtkAccelLabel_slistautoptr; typedef GQueue *GtkAccelLabel_queueautoptr;
typedef struct _GtkAccelMap GtkAccelMap;
typedef struct _GtkAccelMapClass GtkAccelMapClass;
typedef void (*GtkAccelMapForeach) (gpointer data,
const gchar *accel_path,
guint accel_key,
GdkModifierType accel_mods,
gboolean changed);
typedef GtkAccelMap *GtkAccelMap_autoptr; typedef GList *GtkAccelMap_listautoptr; typedef GSList *GtkAccelMap_slistautoptr; typedef GQueue *GtkAccelMap_queueautoptr;
typedef struct _GtkAccessible GtkAccessible;
typedef struct _GtkAccessiblePrivate GtkAccessiblePrivate;
typedef struct _GtkAccessibleClass GtkAccessibleClass;
struct _GtkAccessible
{
AtkObject parent;
GtkAccessiblePrivate *priv;
};
struct _GtkAccessibleClass
{
AtkObjectClass parent_class;
void (*connect_widget_destroyed) (GtkAccessible *accessible);
void (*widget_set) (GtkAccessible *accessible);
void (*widget_unset) (GtkAccessible *accessible);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkActionableInterface GtkActionableInterface;
typedef struct _GtkActionable GtkActionable;
struct _GtkActionableInterface
{
GTypeInterface g_iface;
const gchar * (* get_action_name) (GtkActionable *actionable);
void (* set_action_name) (GtkActionable *actionable,
const gchar *action_name);
GVariant * (* get_action_target_value) (GtkActionable *actionable);
void (* set_action_target_value) (GtkActionable *actionable,
GVariant *target_value);
};
typedef struct _GtkActionBar GtkActionBar;
typedef struct _GtkActionBarPrivate GtkActionBarPrivate;
typedef struct _GtkActionBarClass GtkActionBarClass;
struct _GtkActionBar
{
GtkBin bin;
};
struct _GtkActionBarClass
{
GtkBinClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkAdjustmentPrivate GtkAdjustmentPrivate;
typedef struct _GtkAdjustmentClass GtkAdjustmentClass;
struct _GtkAdjustment
{
GInitiallyUnowned parent_instance;
GtkAdjustmentPrivate *priv;
};
struct _GtkAdjustmentClass
{
GInitiallyUnownedClass parent_class;
void (* changed) (GtkAdjustment *adjustment);
void (* value_changed) (GtkAdjustment *adjustment);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkAppChooser GtkAppChooser;
typedef struct _GtkAppChooserDialog GtkAppChooserDialog;
typedef struct _GtkAppChooserDialogClass GtkAppChooserDialogClass;
typedef struct _GtkAppChooserDialogPrivate GtkAppChooserDialogPrivate;
struct _GtkAppChooserDialog {
GtkDialog parent;
GtkAppChooserDialogPrivate *priv;
};
struct _GtkAppChooserDialogClass {
GtkDialogClass parent_class;
gpointer padding[16];
};
typedef struct _GtkBox GtkBox;
typedef struct _GtkBoxPrivate GtkBoxPrivate;
typedef struct _GtkBoxClass GtkBoxClass;
struct _GtkBox
{
GtkContainer container;
GtkBoxPrivate *priv;
};
struct _GtkBoxClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkAppChooserWidget GtkAppChooserWidget;
typedef struct _GtkAppChooserWidgetClass GtkAppChooserWidgetClass;
typedef struct _GtkAppChooserWidgetPrivate GtkAppChooserWidgetPrivate;
struct _GtkAppChooserWidget {
GtkBox parent;
GtkAppChooserWidgetPrivate *priv;
};
struct _GtkAppChooserWidgetClass {
GtkBoxClass parent_class;
void (* application_selected) (GtkAppChooserWidget *self,
GAppInfo *app_info);
void (* application_activated) (GtkAppChooserWidget *self,
GAppInfo *app_info);
void (* populate_popup) (GtkAppChooserWidget *self,
GtkMenu *menu,
GAppInfo *app_info);
gpointer padding[16];
};
typedef struct _GtkTreeIter GtkTreeIter;
typedef struct _GtkTreePath GtkTreePath;
typedef struct _GtkTreeRowReference GtkTreeRowReference;
typedef struct _GtkTreeModel GtkTreeModel;
typedef struct _GtkTreeModelIface GtkTreeModelIface;
typedef gboolean (* GtkTreeModelForeachFunc) (GtkTreeModel *model, GtkTreePath *path, GtkTreeIter *iter, gpointer data);
struct _GtkTreeIter
{
gint stamp;
gpointer user_data;
gpointer user_data2;
gpointer user_data3;
};
struct _GtkTreeModelIface
{
GTypeInterface g_iface;
void (* row_changed) (GtkTreeModel *tree_model,
GtkTreePath *path,
GtkTreeIter *iter);
void (* row_inserted) (GtkTreeModel *tree_model,
GtkTreePath *path,
GtkTreeIter *iter);
void (* row_has_child_toggled) (GtkTreeModel *tree_model,
GtkTreePath *path,
GtkTreeIter *iter);
void (* row_deleted) (GtkTreeModel *tree_model,
GtkTreePath *path);
void (* rows_reordered) (GtkTreeModel *tree_model,
GtkTreePath *path,
GtkTreeIter *iter,
gint *new_order);
GtkTreeModelFlags (* get_flags) (GtkTreeModel *tree_model);
gint (* get_n_columns) (GtkTreeModel *tree_model);
GType (* get_column_type) (GtkTreeModel *tree_model,
gint index_);
gboolean (* get_iter) (GtkTreeModel *tree_model,
GtkTreeIter *iter,
GtkTreePath *path);
GtkTreePath *(* get_path) (GtkTreeModel *tree_model,
GtkTreeIter *iter);
void (* get_value) (GtkTreeModel *tree_model,
GtkTreeIter *iter,
gint column,
GValue *value);
gboolean (* iter_next) (GtkTreeModel *tree_model,
GtkTreeIter *iter);
gboolean (* iter_previous) (GtkTreeModel *tree_model,
GtkTreeIter *iter);
gboolean (* iter_children) (GtkTreeModel *tree_model,
GtkTreeIter *iter,
GtkTreeIter *parent);
gboolean (* iter_has_child) (GtkTreeModel *tree_model,
GtkTreeIter *iter);
gint (* iter_n_children) (GtkTreeModel *tree_model,
GtkTreeIter *iter);
gboolean (* iter_nth_child) (GtkTreeModel *tree_model,
GtkTreeIter *iter,
GtkTreeIter *parent,
gint n);
gboolean (* iter_parent) (GtkTreeModel *tree_model,
GtkTreeIter *iter,
GtkTreeIter *child);
void (* ref_node) (GtkTreeModel *tree_model,
GtkTreeIter *iter);
void (* unref_node) (GtkTreeModel *tree_model,
GtkTreeIter *iter);
};
typedef struct _GtkCellEditable GtkCellEditable;
typedef struct _GtkCellEditableIface GtkCellEditableIface;
struct _GtkCellEditableIface
{
GTypeInterface g_iface;
void (* editing_done) (GtkCellEditable *cell_editable);
void (* remove_widget) (GtkCellEditable *cell_editable);
void (* start_editing) (GtkCellEditable *cell_editable,
GdkEvent *event);
};
typedef struct _GtkCellRenderer GtkCellRenderer;
typedef struct _GtkCellRendererPrivate GtkCellRendererPrivate;
typedef struct _GtkCellRendererClass GtkCellRendererClass;
typedef struct _GtkCellRendererClassPrivate GtkCellRendererClassPrivate;
struct _GtkCellRenderer
{
GInitiallyUnowned parent_instance;
GtkCellRendererPrivate *priv;
};
struct _GtkCellRendererClass
{
GInitiallyUnownedClass parent_class;
GtkSizeRequestMode (* get_request_mode) (GtkCellRenderer *cell);
void (* get_preferred_width) (GtkCellRenderer *cell,
GtkWidget *widget,
gint *minimum_size,
gint *natural_size);
void (* get_preferred_height_for_width) (GtkCellRenderer *cell,
GtkWidget *widget,
gint width,
gint *minimum_height,
gint *natural_height);
void (* get_preferred_height) (GtkCellRenderer *cell,
GtkWidget *widget,
gint *minimum_size,
gint *natural_size);
void (* get_preferred_width_for_height) (GtkCellRenderer *cell,
GtkWidget *widget,
gint height,
gint *minimum_width,
gint *natural_width);
void (* get_aligned_area) (GtkCellRenderer *cell,
GtkWidget *widget,
GtkCellRendererState flags,
const GdkRectangle *cell_area,
GdkRectangle *aligned_area);
void (* get_size) (GtkCellRenderer *cell,
GtkWidget *widget,
const GdkRectangle *cell_area,
gint *x_offset,
gint *y_offset,
gint *width,
gint *height);
void (* render) (GtkCellRenderer *cell,
cairo_t *cr,
GtkWidget *widget,
const GdkRectangle *background_area,
const GdkRectangle *cell_area,
GtkCellRendererState flags);
gboolean (* activate) (GtkCellRenderer *cell,
GdkEvent *event,
GtkWidget *widget,
const gchar *path,
const GdkRectangle *background_area,
const GdkRectangle *cell_area,
GtkCellRendererState flags);
GtkCellEditable * (* start_editing) (GtkCellRenderer *cell,
GdkEvent *event,
GtkWidget *widget,
const gchar *path,
const GdkRectangle *background_area,
const GdkRectangle *cell_area,
GtkCellRendererState flags);
void (* editing_canceled) (GtkCellRenderer *cell);
void (* editing_started) (GtkCellRenderer *cell,
GtkCellEditable *editable,
const gchar *path);
GtkCellRendererClassPrivate *priv;
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTreeSortable GtkTreeSortable;
typedef struct _GtkTreeSortableIface GtkTreeSortableIface;
typedef gint (* GtkTreeIterCompareFunc) (GtkTreeModel *model,
GtkTreeIter *a,
GtkTreeIter *b,
gpointer user_data);
struct _GtkTreeSortableIface
{
GTypeInterface g_iface;
void (* sort_column_changed) (GtkTreeSortable *sortable);
gboolean (* get_sort_column_id) (GtkTreeSortable *sortable,
gint *sort_column_id,
GtkSortType *order);
void (* set_sort_column_id) (GtkTreeSortable *sortable,
gint sort_column_id,
GtkSortType order);
void (* set_sort_func) (GtkTreeSortable *sortable,
gint sort_column_id,
GtkTreeIterCompareFunc sort_func,
gpointer user_data,
GDestroyNotify destroy);
void (* set_default_sort_func) (GtkTreeSortable *sortable,
GtkTreeIterCompareFunc sort_func,
gpointer user_data,
GDestroyNotify destroy);
gboolean (* has_default_sort_func) (GtkTreeSortable *sortable);
};
typedef struct _GtkCellArea GtkCellArea;
typedef struct _GtkCellAreaClass GtkCellAreaClass;
typedef struct _GtkCellAreaPrivate GtkCellAreaPrivate;
typedef struct _GtkCellAreaContext GtkCellAreaContext;
typedef gboolean (*GtkCellCallback) (GtkCellRenderer *renderer,
gpointer data);
typedef gboolean (*GtkCellAllocCallback) (GtkCellRenderer *renderer,
const GdkRectangle *cell_area,
const GdkRectangle *cell_background,
gpointer data);
struct _GtkCellArea
{
GInitiallyUnowned parent_instance;
GtkCellAreaPrivate *priv;
};
struct _GtkCellAreaClass
{
GInitiallyUnownedClass parent_class;
void (* add) (GtkCellArea *area,
GtkCellRenderer *renderer);
void (* remove) (GtkCellArea *area,
GtkCellRenderer *renderer);
void (* foreach) (GtkCellArea *area,
GtkCellCallback callback,
gpointer callback_data);
void (* foreach_alloc) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
const GdkRectangle *cell_area,
const GdkRectangle *background_area,
GtkCellAllocCallback callback,
gpointer callback_data);
gint (* event) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
GdkEvent *event,
const GdkRectangle *cell_area,
GtkCellRendererState flags);
void (* render) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
cairo_t *cr,
const GdkRectangle *background_area,
const GdkRectangle *cell_area,
GtkCellRendererState flags,
gboolean paint_focus);
void (* apply_attributes) (GtkCellArea *area,
GtkTreeModel *tree_model,
GtkTreeIter *iter,
gboolean is_expander,
gboolean is_expanded);
GtkCellAreaContext *(* create_context) (GtkCellArea *area);
GtkCellAreaContext *(* copy_context) (GtkCellArea *area,
GtkCellAreaContext *context);
GtkSizeRequestMode (* get_request_mode) (GtkCellArea *area);
void (* get_preferred_width) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
gint *minimum_width,
gint *natural_width);
void (* get_preferred_height_for_width) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
gint width,
gint *minimum_height,
gint *natural_height);
void (* get_preferred_height) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
gint *minimum_height,
gint *natural_height);
void (* get_preferred_width_for_height) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
gint height,
gint *minimum_width,
gint *natural_width);
void (* set_cell_property) (GtkCellArea *area,
GtkCellRenderer *renderer,
guint property_id,
const GValue *value,
GParamSpec *pspec);
void (* get_cell_property) (GtkCellArea *area,
GtkCellRenderer *renderer,
guint property_id,
GValue *value,
GParamSpec *pspec);
gboolean (* focus) (GtkCellArea *area,
GtkDirectionType direction);
gboolean (* is_activatable) (GtkCellArea *area);
gboolean (* activate) (GtkCellArea *area,
GtkCellAreaContext *context,
GtkWidget *widget,
const GdkRectangle *cell_area,
GtkCellRendererState flags,
gboolean edit_only);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkTreeViewColumn GtkTreeViewColumn;
typedef struct _GtkTreeViewColumnClass GtkTreeViewColumnClass;
typedef struct _GtkTreeViewColumnPrivate GtkTreeViewColumnPrivate;
typedef void (* GtkTreeCellDataFunc) (GtkTreeViewColumn *tree_column,
GtkCellRenderer *cell,
GtkTreeModel *tree_model,
GtkTreeIter *iter,
gpointer data);
struct _GtkTreeViewColumn
{
GInitiallyUnowned parent_instance;
GtkTreeViewColumnPrivate *priv;
};
struct _GtkTreeViewColumnClass
{
GInitiallyUnownedClass parent_class;
void (*clicked) (GtkTreeViewColumn *tree_column);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTextAttributes GtkTextAttributes;
typedef struct _GtkTextAppearance GtkTextAppearance;
struct _GtkTextAppearance
{
GdkColor bg_color;
GdkColor fg_color;
gint rise;
guint underline : 4;
guint strikethrough : 1;
guint draw_bg : 1;
guint inside_selection : 1;
guint is_text : 1;
GdkRGBA *rgba[2];
};
struct _GtkTextAttributes
{
guint refcount;
GtkTextAppearance appearance;
GtkJustification justification;
GtkTextDirection direction;
PangoFontDescription *font;
gdouble font_scale;
gint left_margin;
gint right_margin;
gint indent;
gint pixels_above_lines;
gint pixels_below_lines;
gint pixels_inside_wrap;
PangoTabArray *tabs;
GtkWrapMode wrap_mode;
PangoLanguage *language;
GdkColor *pg_bg_color;
guint invisible : 1;
guint bg_full_height : 1;
guint editable : 1;
guint no_fallback: 1;
GdkRGBA *pg_bg_rgba;
gint letter_spacing;
gchar *font_features;
};
typedef struct _GtkTextChildAnchor GtkTextChildAnchor;
typedef struct _GtkTextChildAnchorClass GtkTextChildAnchorClass;
struct _GtkTextChildAnchor
{
GObject parent_instance;
gpointer segment;
};
struct _GtkTextChildAnchorClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTextIter GtkTextIter;
typedef struct _GtkTextTagTable GtkTextTagTable;
typedef struct _GtkTextTag GtkTextTag;
typedef struct _GtkTextTagPrivate GtkTextTagPrivate;
typedef struct _GtkTextTagClass GtkTextTagClass;
struct _GtkTextTag
{
GObject parent_instance;
GtkTextTagPrivate *priv;
};
struct _GtkTextTagClass
{
GObjectClass parent_class;
gboolean (* event) (GtkTextTag *tag,
GObject *event_object,
GdkEvent *event,
const GtkTextIter *iter);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTextBuffer GtkTextBuffer;
struct _GtkTextIter {
gpointer dummy1;
gpointer dummy2;
gint dummy3;
gint dummy4;
gint dummy5;
gint dummy6;
gint dummy7;
gint dummy8;
gpointer dummy9;
gpointer dummy10;
gint dummy11;
gint dummy12;
gint dummy13;
gpointer dummy14;
};
typedef gboolean (* GtkTextCharPredicate) (gunichar ch, gpointer user_data);
typedef struct _GtkTargetPair GtkTargetPair;
struct _GtkTargetPair
{
GdkAtom target;
guint flags;
guint info;
};
typedef struct _GtkTargetList GtkTargetList;
typedef struct _GtkTargetEntry GtkTargetEntry;
struct _GtkTargetEntry
{
gchar *target;
guint flags;
guint info;
};
typedef struct _GtkEditable GtkEditable;
typedef struct _GtkEditableInterface GtkEditableInterface;
struct _GtkEditableInterface
{
GTypeInterface base_iface;
void (* insert_text) (GtkEditable *editable,
const gchar *new_text,
gint new_text_length,
gint *position);
void (* delete_text) (GtkEditable *editable,
gint start_pos,
gint end_pos);
void (* changed) (GtkEditable *editable);
void (* do_insert_text) (GtkEditable *editable,
const gchar *new_text,
gint new_text_length,
gint *position);
void (* do_delete_text) (GtkEditable *editable,
gint start_pos,
gint end_pos);
gchar* (* get_chars) (GtkEditable *editable,
gint start_pos,
gint end_pos);
void (* set_selection_bounds) (GtkEditable *editable,
gint start_pos,
gint end_pos);
gboolean (* get_selection_bounds) (GtkEditable *editable,
gint *start_pos,
gint *end_pos);
void (* set_position) (GtkEditable *editable,
gint position);
gint (* get_position) (GtkEditable *editable);
};
typedef struct _GtkIMContext GtkIMContext;
typedef struct _GtkIMContextClass GtkIMContextClass;
struct _GtkIMContext
{
GObject parent_instance;
};
struct _GtkIMContextClass
{
GObjectClass parent_class;
void (*preedit_start) (GtkIMContext *context);
void (*preedit_end) (GtkIMContext *context);
void (*preedit_changed) (GtkIMContext *context);
void (*commit) (GtkIMContext *context, const gchar *str);
gboolean (*retrieve_surrounding) (GtkIMContext *context);
gboolean (*delete_surrounding) (GtkIMContext *context,
gint offset,
gint n_chars);
void (*set_client_window) (GtkIMContext *context,
GdkWindow *window);
void (*get_preedit_string) (GtkIMContext *context,
gchar **str,
PangoAttrList **attrs,
gint *cursor_pos);
gboolean (*filter_keypress) (GtkIMContext *context,
GdkEventKey *event);
void (*focus_in) (GtkIMContext *context);
void (*focus_out) (GtkIMContext *context);
void (*reset) (GtkIMContext *context);
void (*set_cursor_location) (GtkIMContext *context,
GdkRectangle *area);
void (*set_use_preedit) (GtkIMContext *context,
gboolean use_preedit);
void (*set_surrounding) (GtkIMContext *context,
const gchar *text,
gint len,
gint cursor_index);
gboolean (*get_surrounding) (GtkIMContext *context,
gchar **text,
gint *cursor_index);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
};
typedef struct _GtkEntryBuffer GtkEntryBuffer;
typedef struct _GtkEntryBufferClass GtkEntryBufferClass;
typedef struct _GtkEntryBufferPrivate GtkEntryBufferPrivate;
struct _GtkEntryBuffer
{
GObject parent_instance;
GtkEntryBufferPrivate *priv;
};
struct _GtkEntryBufferClass
{
GObjectClass parent_class;
void (*inserted_text) (GtkEntryBuffer *buffer,
guint position,
const gchar *chars,
guint n_chars);
void (*deleted_text) (GtkEntryBuffer *buffer,
guint position,
guint n_chars);
const gchar* (*get_text) (GtkEntryBuffer *buffer,
gsize *n_bytes);
guint (*get_length) (GtkEntryBuffer *buffer);
guint (*insert_text) (GtkEntryBuffer *buffer,
guint position,
const gchar *chars,
guint n_chars);
guint (*delete_text) (GtkEntryBuffer *buffer,
guint position,
guint n_chars);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkListStore GtkListStore;
typedef struct _GtkListStorePrivate GtkListStorePrivate;
typedef struct _GtkListStoreClass GtkListStoreClass;
struct _GtkListStore
{
GObject parent;
GtkListStorePrivate *priv;
};
struct _GtkListStoreClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef gboolean (* GtkTreeModelFilterVisibleFunc) (GtkTreeModel *model,
GtkTreeIter *iter,
gpointer data);
typedef void (* GtkTreeModelFilterModifyFunc) (GtkTreeModel *model,
GtkTreeIter *iter,
GValue *value,
gint column,
gpointer data);
typedef struct _GtkTreeModelFilter GtkTreeModelFilter;
typedef struct _GtkTreeModelFilterClass GtkTreeModelFilterClass;
typedef struct _GtkTreeModelFilterPrivate GtkTreeModelFilterPrivate;
struct _GtkTreeModelFilter
{
GObject parent;
GtkTreeModelFilterPrivate *priv;
};
struct _GtkTreeModelFilterClass
{
GObjectClass parent_class;
gboolean (* visible) (GtkTreeModelFilter *self,
GtkTreeModel *child_model,
GtkTreeIter *iter);
void (* modify) (GtkTreeModelFilter *self,
GtkTreeModel *child_model,
GtkTreeIter *iter,
GValue *value,
gint column);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkEntryCompletion GtkEntryCompletion;
typedef struct _GtkEntryCompletionClass GtkEntryCompletionClass;
typedef struct _GtkEntryCompletionPrivate GtkEntryCompletionPrivate;
typedef gboolean (* GtkEntryCompletionMatchFunc) (GtkEntryCompletion *completion,
const gchar *key,
GtkTreeIter *iter,
gpointer user_data);
struct _GtkEntryCompletion
{
GObject parent_instance;
GtkEntryCompletionPrivate *priv;
};
struct _GtkEntryCompletionClass
{
GObjectClass parent_class;
gboolean (* match_selected) (GtkEntryCompletion *completion,
GtkTreeModel *model,
GtkTreeIter *iter);
void (* action_activated) (GtkEntryCompletion *completion,
gint index_);
gboolean (* insert_prefix) (GtkEntryCompletion *completion,
const gchar *prefix);
gboolean (* cursor_on_match) (GtkEntryCompletion *completion,
GtkTreeModel *model,
GtkTreeIter *iter);
void (* no_matches) (GtkEntryCompletion *completion);
void (*_gtk_reserved0) (void);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
};
typedef struct _GtkImage GtkImage;
typedef struct _GtkImagePrivate GtkImagePrivate;
typedef struct _GtkImageClass GtkImageClass;
struct _GtkImage
{
GtkMisc misc;
GtkImagePrivate *priv;
};
struct _GtkImageClass
{
GtkMiscClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkEntry GtkEntry;
typedef struct _GtkEntryPrivate GtkEntryPrivate;
typedef struct _GtkEntryClass GtkEntryClass;
struct _GtkEntry
{
GtkWidget parent_instance;
GtkEntryPrivate *priv;
};
struct _GtkEntryClass
{
GtkWidgetClass parent_class;
void (* populate_popup) (GtkEntry *entry,
GtkWidget *popup);
void (* activate) (GtkEntry *entry);
void (* move_cursor) (GtkEntry *entry,
GtkMovementStep step,
gint count,
gboolean extend_selection);
void (* insert_at_cursor) (GtkEntry *entry,
const gchar *str);
void (* delete_from_cursor) (GtkEntry *entry,
GtkDeleteType type,
gint count);
void (* backspace) (GtkEntry *entry);
void (* cut_clipboard) (GtkEntry *entry);
void (* copy_clipboard) (GtkEntry *entry);
void (* paste_clipboard) (GtkEntry *entry);
void (* toggle_overwrite) (GtkEntry *entry);
void (* get_text_area_size) (GtkEntry *entry,
gint *x,
gint *y,
gint *width,
gint *height);
void (* get_frame_size) (GtkEntry *entry,
gint *x,
gint *y,
gint *width,
gint *height);
void (* insert_emoji) (GtkEntry *entry);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
};
typedef struct _GtkTreeView GtkTreeView;
typedef struct _GtkTreeViewClass GtkTreeViewClass;
typedef struct _GtkTreeViewPrivate GtkTreeViewPrivate;
typedef struct _GtkTreeSelection GtkTreeSelection;
typedef struct _GtkTreeSelectionClass GtkTreeSelectionClass;
struct _GtkTreeView
{
GtkContainer parent;
GtkTreeViewPrivate *priv;
};
struct _GtkTreeViewClass
{
GtkContainerClass parent_class;
void (* row_activated) (GtkTreeView *tree_view,
GtkTreePath *path,
GtkTreeViewColumn *column);
gboolean (* test_expand_row) (GtkTreeView *tree_view,
GtkTreeIter *iter,
GtkTreePath *path);
gboolean (* test_collapse_row) (GtkTreeView *tree_view,
GtkTreeIter *iter,
GtkTreePath *path);
void (* row_expanded) (GtkTreeView *tree_view,
GtkTreeIter *iter,
GtkTreePath *path);
void (* row_collapsed) (GtkTreeView *tree_view,
GtkTreeIter *iter,
GtkTreePath *path);
void (* columns_changed) (GtkTreeView *tree_view);
void (* cursor_changed) (GtkTreeView *tree_view);
gboolean (* move_cursor) (GtkTreeView *tree_view,
GtkMovementStep step,
gint count);
gboolean (* select_all) (GtkTreeView *tree_view);
gboolean (* unselect_all) (GtkTreeView *tree_view);
gboolean (* select_cursor_row) (GtkTreeView *tree_view,
gboolean start_editing);
gboolean (* toggle_cursor_row) (GtkTreeView *tree_view);
gboolean (* expand_collapse_cursor_row) (GtkTreeView *tree_view,
gboolean logical,
gboolean expand,
gboolean open_all);
gboolean (* select_cursor_parent) (GtkTreeView *tree_view);
gboolean (* start_interactive_search) (GtkTreeView *tree_view);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef gboolean (* GtkTreeViewColumnDropFunc) (GtkTreeView *tree_view,
GtkTreeViewColumn *column,
GtkTreeViewColumn *prev_column,
GtkTreeViewColumn *next_column,
gpointer data);
typedef void (* GtkTreeViewMappingFunc) (GtkTreeView *tree_view,
GtkTreePath *path,
gpointer user_data);
typedef gboolean (*GtkTreeViewSearchEqualFunc) (GtkTreeModel *model,
gint column,
const gchar *key,
GtkTreeIter *iter,
gpointer search_data);
typedef gboolean (*GtkTreeViewRowSeparatorFunc) (GtkTreeModel *model,
GtkTreeIter *iter,
gpointer data);
typedef void (*GtkTreeViewSearchPositionFunc) (GtkTreeView *tree_view,
GtkWidget *search_dialog,
gpointer user_data);
typedef void (* GtkTreeDestroyCountFunc) (GtkTreeView *tree_view,
GtkTreePath *path,
gint children,
gpointer user_data);
typedef struct _GtkComboBox GtkComboBox;
typedef struct _GtkComboBoxClass GtkComboBoxClass;
typedef struct _GtkComboBoxPrivate GtkComboBoxPrivate;
struct _GtkComboBox
{
GtkBin parent_instance;
GtkComboBoxPrivate *priv;
};
struct _GtkComboBoxClass
{
GtkBinClass parent_class;
void (* changed) (GtkComboBox *combo_box);
gchar *(* format_entry_text) (GtkComboBox *combo_box,
const gchar *path);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
};
typedef struct _GtkAppChooserButton GtkAppChooserButton;
typedef struct _GtkAppChooserButtonClass GtkAppChooserButtonClass;
typedef struct _GtkAppChooserButtonPrivate GtkAppChooserButtonPrivate;
struct _GtkAppChooserButton {
GtkComboBox parent;
GtkAppChooserButtonPrivate *priv;
};
struct _GtkAppChooserButtonClass {
GtkComboBoxClass parent_class;
void (* custom_item_activated) (GtkAppChooserButton *self,
const gchar *item_name);
gpointer padding[16];
};
typedef struct _GtkShortcutsWindow GtkShortcutsWindow;
typedef struct _GtkShortcutsWindowClass GtkShortcutsWindowClass;
struct _GtkShortcutsWindow
{
GtkWindow window;
};
struct _GtkShortcutsWindowClass
{
GtkWindowClass parent_class;
void (*close) (GtkShortcutsWindow *self);
void (*search) (GtkShortcutsWindow *self);
};
typedef GtkShortcutsWindow *GtkShortcutsWindow_autoptr; typedef GList *GtkShortcutsWindow_listautoptr; typedef GSList *GtkShortcutsWindow_slistautoptr; typedef GQueue *GtkShortcutsWindow_queueautoptr;
typedef struct _GtkApplicationWindowPrivate GtkApplicationWindowPrivate;
typedef struct _GtkApplicationWindowClass GtkApplicationWindowClass;
typedef struct _GtkApplicationWindow GtkApplicationWindow;
struct _GtkApplicationWindow
{
GtkWindow parent_instance;
GtkApplicationWindowPrivate *priv;
};
struct _GtkApplicationWindowClass
{
GtkWindowClass parent_class;
gpointer padding[14];
};
typedef struct _GtkFrame GtkFrame;
typedef struct _GtkFramePrivate GtkFramePrivate;
typedef struct _GtkFrameClass GtkFrameClass;
struct _GtkFrame
{
GtkBin bin;
GtkFramePrivate *priv;
};
struct _GtkFrameClass
{
GtkBinClass parent_class;
void (*compute_child_allocation) (GtkFrame *frame,
GtkAllocation *allocation);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkAspectFrame GtkAspectFrame;
typedef struct _GtkAspectFramePrivate GtkAspectFramePrivate;
typedef struct _GtkAspectFrameClass GtkAspectFrameClass;
struct _GtkAspectFrame
{
GtkFrame frame;
GtkAspectFramePrivate *priv;
};
struct _GtkAspectFrameClass
{
GtkFrameClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkAssistant GtkAssistant;
typedef struct _GtkAssistantPrivate GtkAssistantPrivate;
typedef struct _GtkAssistantClass GtkAssistantClass;
struct _GtkAssistant
{
GtkWindow parent;
GtkAssistantPrivate *priv;
};
struct _GtkAssistantClass
{
GtkWindowClass parent_class;
void (* prepare) (GtkAssistant *assistant, GtkWidget *page);
void (* apply) (GtkAssistant *assistant);
void (* close) (GtkAssistant *assistant);
void (* cancel) (GtkAssistant *assistant);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
};
typedef gint (*GtkAssistantPageFunc) (gint current_page, gpointer data);
typedef struct _GtkButtonBox GtkButtonBox;
typedef struct _GtkButtonBoxPrivate GtkButtonBoxPrivate;
typedef struct _GtkButtonBoxClass GtkButtonBoxClass;
struct _GtkButtonBox
{
GtkBox box;
GtkButtonBoxPrivate *priv;
};
struct _GtkButtonBoxClass
{
GtkBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkBindingSet GtkBindingSet;
typedef struct _GtkBindingEntry GtkBindingEntry;
typedef struct _GtkBindingSignal GtkBindingSignal;
typedef struct _GtkBindingArg GtkBindingArg;
struct _GtkBindingSet
{
gchar *set_name;
gint priority;
GSList *widget_path_pspecs;
GSList *widget_class_pspecs;
GSList *class_branch_pspecs;
GtkBindingEntry *entries;
GtkBindingEntry *current;
guint parsed : 1;
};
struct _GtkBindingEntry
{
guint keyval;
GdkModifierType modifiers;
GtkBindingSet *binding_set;
guint destroyed : 1;
guint in_emission : 1;
guint marks_unbound : 1;
GtkBindingEntry *set_next;
GtkBindingEntry *hash_next;
GtkBindingSignal *signals;
};
struct _GtkBindingArg
{
GType arg_type;
union {
glong long_data;
gdouble double_data;
gchar *string_data;
} d;
};
struct _GtkBindingSignal
{
GtkBindingSignal *next;
gchar *signal_name;
guint n_args;
GtkBindingArg *args;
};
typedef struct _GtkBuilderClass GtkBuilderClass;
typedef struct _GtkBuilderPrivate GtkBuilderPrivate;
struct _GtkBuilder
{
GObject parent_instance;
GtkBuilderPrivate *priv;
};
struct _GtkBuilderClass
{
GObjectClass parent_class;
GType (* get_type_from_name) (GtkBuilder *builder,
const char *type_name);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkBuildable GtkBuildable;
typedef struct _GtkBuildableIface GtkBuildableIface;
struct _GtkBuildableIface
{
GTypeInterface g_iface;
void (* set_name) (GtkBuildable *buildable,
const gchar *name);
const gchar * (* get_name) (GtkBuildable *buildable);
void (* add_child) (GtkBuildable *buildable,
GtkBuilder *builder,
GObject *child,
const gchar *type);
void (* set_buildable_property) (GtkBuildable *buildable,
GtkBuilder *builder,
const gchar *name,
const GValue *value);
GObject * (* construct_child) (GtkBuildable *buildable,
GtkBuilder *builder,
const gchar *name);
gboolean (* custom_tag_start) (GtkBuildable *buildable,
GtkBuilder *builder,
GObject *child,
const gchar *tagname,
GMarkupParser *parser,
gpointer *data);
void (* custom_tag_end) (GtkBuildable *buildable,
GtkBuilder *builder,
GObject *child,
const gchar *tagname,
gpointer *data);
void (* custom_finished) (GtkBuildable *buildable,
GtkBuilder *builder,
GObject *child,
const gchar *tagname,
gpointer data);
void (* parser_finished) (GtkBuildable *buildable,
GtkBuilder *builder);
GObject * (* get_internal_child) (GtkBuildable *buildable,
GtkBuilder *builder,
const gchar *childname);
};
typedef struct _GtkButton GtkButton;
typedef struct _GtkButtonPrivate GtkButtonPrivate;
typedef struct _GtkButtonClass GtkButtonClass;
struct _GtkButton
{
GtkBin bin;
GtkButtonPrivate *priv;
};
struct _GtkButtonClass
{
GtkBinClass parent_class;
void (* pressed) (GtkButton *button);
void (* released) (GtkButton *button);
void (* clicked) (GtkButton *button);
void (* enter) (GtkButton *button);
void (* leave) (GtkButton *button);
void (* activate) (GtkButton *button);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCalendar GtkCalendar;
typedef struct _GtkCalendarClass GtkCalendarClass;
typedef struct _GtkCalendarPrivate GtkCalendarPrivate;
typedef gchar* (*GtkCalendarDetailFunc) (GtkCalendar *calendar,
guint year,
guint month,
guint day,
gpointer user_data);
struct _GtkCalendar
{
GtkWidget widget;
GtkCalendarPrivate *priv;
};
struct _GtkCalendarClass
{
GtkWidgetClass parent_class;
void (* month_changed) (GtkCalendar *calendar);
void (* day_selected) (GtkCalendar *calendar);
void (* day_selected_double_click) (GtkCalendar *calendar);
void (* prev_month) (GtkCalendar *calendar);
void (* next_month) (GtkCalendar *calendar);
void (* prev_year) (GtkCalendar *calendar);
void (* next_year) (GtkCalendar *calendar);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellAreaBox GtkCellAreaBox;
typedef struct _GtkCellAreaBoxClass GtkCellAreaBoxClass;
typedef struct _GtkCellAreaBoxPrivate GtkCellAreaBoxPrivate;
struct _GtkCellAreaBox
{
GtkCellArea parent_instance;
GtkCellAreaBoxPrivate *priv;
};
struct _GtkCellAreaBoxClass
{
GtkCellAreaClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellAreaContextPrivate GtkCellAreaContextPrivate;
typedef struct _GtkCellAreaContextClass GtkCellAreaContextClass;
struct _GtkCellAreaContext
{
GObject parent_instance;
GtkCellAreaContextPrivate *priv;
};
struct _GtkCellAreaContextClass
{
GObjectClass parent_class;
void (* allocate) (GtkCellAreaContext *context,
gint width,
gint height);
void (* reset) (GtkCellAreaContext *context);
void (* get_preferred_height_for_width) (GtkCellAreaContext *context,
gint width,
gint *minimum_height,
gint *natural_height);
void (* get_preferred_width_for_height) (GtkCellAreaContext *context,
gint height,
gint *minimum_width,
gint *natural_width);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
};
typedef struct _GtkCellLayout GtkCellLayout;
typedef struct _GtkCellLayoutIface GtkCellLayoutIface;
typedef void (* GtkCellLayoutDataFunc) (GtkCellLayout *cell_layout,
GtkCellRenderer *cell,
GtkTreeModel *tree_model,
GtkTreeIter *iter,
gpointer data);
struct _GtkCellLayoutIface
{
GTypeInterface g_iface;
void (* pack_start) (GtkCellLayout *cell_layout,
GtkCellRenderer *cell,
gboolean expand);
void (* pack_end) (GtkCellLayout *cell_layout,
GtkCellRenderer *cell,
gboolean expand);
void (* clear) (GtkCellLayout *cell_layout);
void (* add_attribute) (GtkCellLayout *cell_layout,
GtkCellRenderer *cell,
const gchar *attribute,
gint column);
void (* set_cell_data_func) (GtkCellLayout *cell_layout,
GtkCellRenderer *cell,
GtkCellLayoutDataFunc func,
gpointer func_data,
GDestroyNotify destroy);
void (* clear_attributes) (GtkCellLayout *cell_layout,
GtkCellRenderer *cell);
void (* reorder) (GtkCellLayout *cell_layout,
GtkCellRenderer *cell,
gint position);
GList* (* get_cells) (GtkCellLayout *cell_layout);
GtkCellArea *(* get_area) (GtkCellLayout *cell_layout);
};
typedef struct _GtkCellRendererText GtkCellRendererText;
typedef struct _GtkCellRendererTextPrivate GtkCellRendererTextPrivate;
typedef struct _GtkCellRendererTextClass GtkCellRendererTextClass;
struct _GtkCellRendererText
{
GtkCellRenderer parent;
GtkCellRendererTextPrivate *priv;
};
struct _GtkCellRendererTextClass
{
GtkCellRendererClass parent_class;
void (* edited) (GtkCellRendererText *cell_renderer_text,
const gchar *path,
const gchar *new_text);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererAccel GtkCellRendererAccel;
typedef struct _GtkCellRendererAccelPrivate GtkCellRendererAccelPrivate;
typedef struct _GtkCellRendererAccelClass GtkCellRendererAccelClass;
struct _GtkCellRendererAccel
{
GtkCellRendererText parent;
GtkCellRendererAccelPrivate *priv;
};
struct _GtkCellRendererAccelClass
{
GtkCellRendererTextClass parent_class;
void (* accel_edited) (GtkCellRendererAccel *accel,
const gchar *path_string,
guint accel_key,
GdkModifierType accel_mods,
guint hardware_keycode);
void (* accel_cleared) (GtkCellRendererAccel *accel,
const gchar *path_string);
void (*_gtk_reserved0) (void);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererCombo GtkCellRendererCombo;
typedef struct _GtkCellRendererComboPrivate GtkCellRendererComboPrivate;
typedef struct _GtkCellRendererComboClass GtkCellRendererComboClass;
struct _GtkCellRendererCombo
{
GtkCellRendererText parent;
GtkCellRendererComboPrivate *priv;
};
struct _GtkCellRendererComboClass
{
GtkCellRendererTextClass parent;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererPixbuf GtkCellRendererPixbuf;
typedef struct _GtkCellRendererPixbufPrivate GtkCellRendererPixbufPrivate;
typedef struct _GtkCellRendererPixbufClass GtkCellRendererPixbufClass;
struct _GtkCellRendererPixbuf
{
GtkCellRenderer parent;
GtkCellRendererPixbufPrivate *priv;
};
struct _GtkCellRendererPixbufClass
{
GtkCellRendererClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererProgress GtkCellRendererProgress;
typedef struct _GtkCellRendererProgressClass GtkCellRendererProgressClass;
typedef struct _GtkCellRendererProgressPrivate GtkCellRendererProgressPrivate;
struct _GtkCellRendererProgress
{
GtkCellRenderer parent_instance;
GtkCellRendererProgressPrivate *priv;
};
struct _GtkCellRendererProgressClass
{
GtkCellRendererClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererSpin GtkCellRendererSpin;
typedef struct _GtkCellRendererSpinClass GtkCellRendererSpinClass;
typedef struct _GtkCellRendererSpinPrivate GtkCellRendererSpinPrivate;
struct _GtkCellRendererSpin
{
GtkCellRendererText parent;
GtkCellRendererSpinPrivate *priv;
};
struct _GtkCellRendererSpinClass
{
GtkCellRendererTextClass parent;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererSpinner GtkCellRendererSpinner;
typedef struct _GtkCellRendererSpinnerClass GtkCellRendererSpinnerClass;
typedef struct _GtkCellRendererSpinnerPrivate GtkCellRendererSpinnerPrivate;
struct _GtkCellRendererSpinner
{
GtkCellRenderer parent;
GtkCellRendererSpinnerPrivate *priv;
};
struct _GtkCellRendererSpinnerClass
{
GtkCellRendererClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellRendererToggle GtkCellRendererToggle;
typedef struct _GtkCellRendererTogglePrivate GtkCellRendererTogglePrivate;
typedef struct _GtkCellRendererToggleClass GtkCellRendererToggleClass;
struct _GtkCellRendererToggle
{
GtkCellRenderer parent;
GtkCellRendererTogglePrivate *priv;
};
struct _GtkCellRendererToggleClass
{
GtkCellRendererClass parent_class;
void (* toggled) (GtkCellRendererToggle *cell_renderer_toggle,
const gchar *path);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCellView GtkCellView;
typedef struct _GtkCellViewClass GtkCellViewClass;
typedef struct _GtkCellViewPrivate GtkCellViewPrivate;
struct _GtkCellView
{
GtkWidget parent_instance;
GtkCellViewPrivate *priv;
};
struct _GtkCellViewClass
{
GtkWidgetClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkToggleButton GtkToggleButton;
typedef struct _GtkToggleButtonPrivate GtkToggleButtonPrivate;
typedef struct _GtkToggleButtonClass GtkToggleButtonClass;
struct _GtkToggleButton
{
GtkButton button;
GtkToggleButtonPrivate *priv;
};
struct _GtkToggleButtonClass
{
GtkButtonClass parent_class;
void (* toggled) (GtkToggleButton *toggle_button);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCheckButton GtkCheckButton;
typedef struct _GtkCheckButtonClass GtkCheckButtonClass;
struct _GtkCheckButton
{
GtkToggleButton toggle_button;
};
struct _GtkCheckButtonClass
{
GtkToggleButtonClass parent_class;
void (* draw_indicator) (GtkCheckButton *check_button,
cairo_t *cr);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkMenuItem GtkMenuItem;
typedef struct _GtkMenuItemClass GtkMenuItemClass;
typedef struct _GtkMenuItemPrivate GtkMenuItemPrivate;
struct _GtkMenuItem
{
GtkBin bin;
GtkMenuItemPrivate *priv;
};
struct _GtkMenuItemClass
{
GtkBinClass parent_class;
guint hide_on_activate : 1;
void (* activate) (GtkMenuItem *menu_item);
void (* activate_item) (GtkMenuItem *menu_item);
void (* toggle_size_request) (GtkMenuItem *menu_item,
gint *requisition);
void (* toggle_size_allocate) (GtkMenuItem *menu_item,
gint allocation);
void (* set_label) (GtkMenuItem *menu_item,
const gchar *label);
const gchar * (* get_label) (GtkMenuItem *menu_item);
void (* select) (GtkMenuItem *menu_item);
void (* deselect) (GtkMenuItem *menu_item);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCheckMenuItem GtkCheckMenuItem;
typedef struct _GtkCheckMenuItemPrivate GtkCheckMenuItemPrivate;
typedef struct _GtkCheckMenuItemClass GtkCheckMenuItemClass;
struct _GtkCheckMenuItem
{
GtkMenuItem menu_item;
GtkCheckMenuItemPrivate *priv;
};
struct _GtkCheckMenuItemClass
{
GtkMenuItemClass parent_class;
void (* toggled) (GtkCheckMenuItem *check_menu_item);
void (* draw_indicator) (GtkCheckMenuItem *check_menu_item,
cairo_t *cr);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef void (* GtkClipboardReceivedFunc) (GtkClipboard *clipboard,
GtkSelectionData *selection_data,
gpointer data);
typedef void (* GtkClipboardTextReceivedFunc) (GtkClipboard *clipboard,
const gchar *text,
gpointer data);
typedef void (* GtkClipboardRichTextReceivedFunc) (GtkClipboard *clipboard,
GdkAtom format,
const guint8 *text,
gsize length,
gpointer data);
typedef void (* GtkClipboardImageReceivedFunc) (GtkClipboard *clipboard,
GdkPixbuf *pixbuf,
gpointer data);
typedef void (* GtkClipboardURIReceivedFunc) (GtkClipboard *clipboard,
gchar **uris,
gpointer data);
typedef void (* GtkClipboardTargetsReceivedFunc) (GtkClipboard *clipboard,
GdkAtom *atoms,
gint n_atoms,
gpointer data);
typedef void (* GtkClipboardGetFunc) (GtkClipboard *clipboard,
GtkSelectionData *selection_data,
guint info,
gpointer user_data_or_owner);
typedef void (* GtkClipboardClearFunc) (GtkClipboard *clipboard,
gpointer user_data_or_owner);
typedef struct _GtkColorButton GtkColorButton;
typedef struct _GtkColorButtonClass GtkColorButtonClass;
typedef struct _GtkColorButtonPrivate GtkColorButtonPrivate;
struct _GtkColorButton {
GtkButton button;
GtkColorButtonPrivate *priv;
};
struct _GtkColorButtonClass {
GtkButtonClass parent_class;
void (* color_set) (GtkColorButton *cp);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorChooser GtkColorChooser;
typedef struct _GtkColorChooserInterface GtkColorChooserInterface;
struct _GtkColorChooserInterface
{
GTypeInterface base_interface;
void (* get_rgba) (GtkColorChooser *chooser,
GdkRGBA *color);
void (* set_rgba) (GtkColorChooser *chooser,
const GdkRGBA *color);
void (* add_palette) (GtkColorChooser *chooser,
GtkOrientation orientation,
gint colors_per_line,
gint n_colors,
GdkRGBA *colors);
void (* color_activated) (GtkColorChooser *chooser,
const GdkRGBA *color);
gpointer padding[12];
};
typedef struct _GtkColorChooserDialog GtkColorChooserDialog;
typedef struct _GtkColorChooserDialogPrivate GtkColorChooserDialogPrivate;
typedef struct _GtkColorChooserDialogClass GtkColorChooserDialogClass;
struct _GtkColorChooserDialog
{
GtkDialog parent_instance;
GtkColorChooserDialogPrivate *priv;
};
struct _GtkColorChooserDialogClass
{
GtkDialogClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorChooserWidget GtkColorChooserWidget;
typedef struct _GtkColorChooserWidgetPrivate GtkColorChooserWidgetPrivate;
typedef struct _GtkColorChooserWidgetClass GtkColorChooserWidgetClass;
struct _GtkColorChooserWidget
{
GtkBox parent_instance;
GtkColorChooserWidgetPrivate *priv;
};
struct _GtkColorChooserWidgetClass
{
GtkBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkComboBoxText GtkComboBoxText;
typedef struct _GtkComboBoxTextPrivate GtkComboBoxTextPrivate;
typedef struct _GtkComboBoxTextClass GtkComboBoxTextClass;
struct _GtkComboBoxText
{
GtkComboBox parent_instance;
GtkComboBoxTextPrivate *priv;
};
struct _GtkComboBoxTextClass
{
GtkComboBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkCssSection GtkCssSection;
typedef struct _GtkCssProvider GtkCssProvider;
typedef struct _GtkCssProviderClass GtkCssProviderClass;
typedef struct _GtkCssProviderPrivate GtkCssProviderPrivate;
struct _GtkCssProvider
{
GObject parent_instance;
GtkCssProviderPrivate *priv;
};
struct _GtkCssProviderClass
{
GObjectClass parent_class;
void (* parsing_error) (GtkCssProvider *provider,
GtkCssSection *section,
const GError * error);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkDrawingArea GtkDrawingArea;
typedef struct _GtkDrawingAreaClass GtkDrawingAreaClass;
struct _GtkDrawingArea
{
GtkWidget widget;
gpointer dummy;
};
struct _GtkDrawingAreaClass
{
GtkWidgetClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkEventBox GtkEventBox;
typedef struct _GtkEventBoxClass GtkEventBoxClass;
typedef struct _GtkEventBoxPrivate GtkEventBoxPrivate;
struct _GtkEventBox
{
GtkBin bin;
GtkEventBoxPrivate *priv;
};
struct _GtkEventBoxClass
{
GtkBinClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkEventController GtkEventController;
typedef struct _GtkEventControllerClass GtkEventControllerClass;
typedef struct _GtkEventControllerKey GtkEventControllerKey;
typedef struct _GtkEventControllerKeyClass GtkEventControllerKeyClass;
typedef struct _GtkEventControllerMotion GtkEventControllerMotion;
typedef struct _GtkEventControllerMotionClass GtkEventControllerMotionClass;
typedef struct _GtkEventControllerScroll GtkEventControllerScroll;
typedef struct _GtkEventControllerScrollClass GtkEventControllerScrollClass;
typedef struct _GtkExpander GtkExpander;
typedef struct _GtkExpanderClass GtkExpanderClass;
typedef struct _GtkExpanderPrivate GtkExpanderPrivate;
struct _GtkExpander
{
GtkBin bin;
GtkExpanderPrivate *priv;
};
struct _GtkExpanderClass
{
GtkBinClass parent_class;
void (* activate) (GtkExpander *expander);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkFixed GtkFixed;
typedef struct _GtkFixedPrivate GtkFixedPrivate;
typedef struct _GtkFixedClass GtkFixedClass;
typedef struct _GtkFixedChild GtkFixedChild;
struct _GtkFixed
{
GtkContainer container;
GtkFixedPrivate *priv;
};
struct _GtkFixedClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkFixedChild
{
GtkWidget *widget;
gint x;
gint y;
};
typedef struct _GtkFileFilter GtkFileFilter;
typedef struct _GtkFileFilterInfo GtkFileFilterInfo;
typedef gboolean (*GtkFileFilterFunc) (const GtkFileFilterInfo *filter_info,
gpointer data);
struct _GtkFileFilterInfo
{
GtkFileFilterFlags contains;
const gchar *filename;
const gchar *uri;
const gchar *display_name;
const gchar *mime_type;
};
typedef struct _GtkFileChooser GtkFileChooser;
typedef struct _GtkFileChooserButton GtkFileChooserButton;
typedef struct _GtkFileChooserButtonPrivate GtkFileChooserButtonPrivate;
typedef struct _GtkFileChooserButtonClass GtkFileChooserButtonClass;
struct _GtkFileChooserButton
{
GtkBox parent;
GtkFileChooserButtonPrivate *priv;
};
struct _GtkFileChooserButtonClass
{
GtkBoxClass parent_class;
void (* file_set) (GtkFileChooserButton *fc);
void (*__gtk_reserved1) (void);
void (*__gtk_reserved2) (void);
void (*__gtk_reserved3) (void);
void (*__gtk_reserved4) (void);
};
typedef struct _GtkFileChooserDialog GtkFileChooserDialog;
typedef struct _GtkFileChooserDialogPrivate GtkFileChooserDialogPrivate;
typedef struct _GtkFileChooserDialogClass GtkFileChooserDialogClass;
struct _GtkFileChooserDialog
{
GtkDialog parent_instance;
GtkFileChooserDialogPrivate *priv;
};
struct _GtkFileChooserDialogClass
{
GtkDialogClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkNativeDialog GtkNativeDialog; typedef struct _GtkNativeDialogClass GtkNativeDialogClass; struct _GtkNativeDialog { GObject parent_instance; }; typedef GtkNativeDialog *GtkNativeDialog_autoptr; typedef GList *GtkNativeDialog_listautoptr; typedef GSList *GtkNativeDialog_slistautoptr; typedef GQueue *GtkNativeDialog_queueautoptr;
struct _GtkNativeDialogClass
{
GObjectClass parent_class;
void (* response) (GtkNativeDialog *self, gint response_id);
void (* show) (GtkNativeDialog *self);
void (* hide) (GtkNativeDialog *self);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkFileChooserNative GtkFileChooserNative; typedef struct { GtkNativeDialogClass parent_class; } GtkFileChooserNativeClass; typedef GtkFileChooserNative *GtkFileChooserNative_autoptr; typedef GList *GtkFileChooserNative_listautoptr; typedef GSList *GtkFileChooserNative_slistautoptr; typedef GQueue *GtkFileChooserNative_queueautoptr;
typedef struct _GtkFileChooserWidget GtkFileChooserWidget;
typedef struct _GtkFileChooserWidgetPrivate GtkFileChooserWidgetPrivate;
typedef struct _GtkFileChooserWidgetClass GtkFileChooserWidgetClass;
struct _GtkFileChooserWidget
{
GtkBox parent_instance;
GtkFileChooserWidgetPrivate *priv;
};
struct _GtkFileChooserWidgetClass
{
GtkBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkFlowBox GtkFlowBox;
typedef struct _GtkFlowBoxClass GtkFlowBoxClass;
typedef struct _GtkFlowBoxChild GtkFlowBoxChild;
typedef struct _GtkFlowBoxChildClass GtkFlowBoxChildClass;
struct _GtkFlowBox
{
GtkContainer container;
};
struct _GtkFlowBoxClass
{
GtkContainerClass parent_class;
void (*child_activated) (GtkFlowBox *box,
GtkFlowBoxChild *child);
void (*selected_children_changed) (GtkFlowBox *box);
void (*activate_cursor_child) (GtkFlowBox *box);
void (*toggle_cursor_child) (GtkFlowBox *box);
gboolean (*move_cursor) (GtkFlowBox *box,
GtkMovementStep step,
gint count);
void (*select_all) (GtkFlowBox *box);
void (*unselect_all) (GtkFlowBox *box);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
};
struct _GtkFlowBoxChild
{
GtkBin parent_instance;
};
struct _GtkFlowBoxChildClass
{
GtkBinClass parent_class;
void (* activate) (GtkFlowBoxChild *child);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
};
typedef GtkWidget * (*GtkFlowBoxCreateWidgetFunc) (gpointer item,
gpointer user_data);
typedef void (* GtkFlowBoxForeachFunc) (GtkFlowBox *box,
GtkFlowBoxChild *child,
gpointer user_data);
typedef gboolean (*GtkFlowBoxFilterFunc) (GtkFlowBoxChild *child,
gpointer user_data);
typedef gint (*GtkFlowBoxSortFunc) (GtkFlowBoxChild *child1,
GtkFlowBoxChild *child2,
gpointer user_data);
typedef struct _GtkFontButton GtkFontButton;
typedef struct _GtkFontButtonClass GtkFontButtonClass;
typedef struct _GtkFontButtonPrivate GtkFontButtonPrivate;
struct _GtkFontButton {
GtkButton button;
GtkFontButtonPrivate *priv;
};
struct _GtkFontButtonClass {
GtkButtonClass parent_class;
void (* font_set) (GtkFontButton *gfp);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef gboolean (*GtkFontFilterFunc) (const PangoFontFamily *family,
const PangoFontFace *face,
gpointer data);
typedef struct _GtkFontChooser GtkFontChooser;
typedef struct _GtkFontChooserIface GtkFontChooserIface;
struct _GtkFontChooserIface
{
GTypeInterface base_iface;
PangoFontFamily * (* get_font_family) (GtkFontChooser *fontchooser);
PangoFontFace * (* get_font_face) (GtkFontChooser *fontchooser);
gint (* get_font_size) (GtkFontChooser *fontchooser);
void (* set_filter_func) (GtkFontChooser *fontchooser,
GtkFontFilterFunc filter,
gpointer user_data,
GDestroyNotify destroy);
void (* font_activated) (GtkFontChooser *chooser,
const gchar *fontname);
void (* set_font_map) (GtkFontChooser *fontchooser,
PangoFontMap *fontmap);
PangoFontMap * (* get_font_map) (GtkFontChooser *fontchooser);
gpointer padding[10];
};
typedef struct _GtkFontChooserDialog GtkFontChooserDialog;
typedef struct _GtkFontChooserDialogPrivate GtkFontChooserDialogPrivate;
typedef struct _GtkFontChooserDialogClass GtkFontChooserDialogClass;
struct _GtkFontChooserDialog
{
GtkDialog parent_instance;
GtkFontChooserDialogPrivate *priv;
};
struct _GtkFontChooserDialogClass
{
GtkDialogClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkFontChooserWidget GtkFontChooserWidget;
typedef struct _GtkFontChooserWidgetPrivate GtkFontChooserWidgetPrivate;
typedef struct _GtkFontChooserWidgetClass GtkFontChooserWidgetClass;
struct _GtkFontChooserWidget
{
GtkBox parent_instance;
GtkFontChooserWidgetPrivate *priv;
};
struct _GtkFontChooserWidgetClass
{
GtkBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkGesture GtkGesture;
typedef struct _GtkGestureClass GtkGestureClass;
typedef struct _GtkGestureSingle GtkGestureSingle;
typedef struct _GtkGestureSingleClass GtkGestureSingleClass;
typedef struct _GtkGestureDrag GtkGestureDrag;
typedef struct _GtkGestureDragClass GtkGestureDragClass;
typedef struct _GtkGestureLongPress GtkGestureLongPress;
typedef struct _GtkGestureLongPressClass GtkGestureLongPressClass;
typedef struct _GtkGestureMultiPress GtkGestureMultiPress;
typedef struct _GtkGestureMultiPressClass GtkGestureMultiPressClass;
typedef struct _GtkGesturePan GtkGesturePan;
typedef struct _GtkGesturePanClass GtkGesturePanClass;
typedef struct _GtkGestureRotate GtkGestureRotate;
typedef struct _GtkGestureRotateClass GtkGestureRotateClass;
typedef struct _GtkGestureStylus GtkGestureStylus;
typedef struct _GtkGestureStylusClass GtkGestureStylusClass;
typedef struct _GtkGestureSwipe GtkGestureSwipe;
typedef struct _GtkGestureSwipeClass GtkGestureSwipeClass;
typedef struct _GtkGestureZoom GtkGestureZoom;
typedef struct _GtkGestureZoomClass GtkGestureZoomClass;
typedef struct _GtkGLArea GtkGLArea;
typedef struct _GtkGLAreaClass GtkGLAreaClass;
typedef struct _GtkGridLayout GtkGridLayout;
typedef struct _GtkGridLayoutChild GtkGridLayoutChild;
typedef struct _GtkGridView GtkGridView;
typedef struct _GdkSurface GdkSurface;
typedef struct _GtkIconPaintable GtkIconPaintable;
typedef struct _GtkInscription GtkInscription;
typedef struct _GtkKeyvalTrigger GtkKeyvalTrigger;
typedef struct _GtkLayoutChild GtkLayoutChild;
typedef struct _GtkListItem GtkListItem;
typedef struct _GtkListView GtkListView;
typedef struct _GtkMapListModel GtkMapListModel;
struct _GtkGLArea
{
GtkWidget parent_instance;
};
struct _GtkGLAreaClass
{
GtkWidgetClass parent_class;
gboolean (* render) (GtkGLArea *area,
GdkGLContext *context);
void (* resize) (GtkGLArea *area,
int width,
int height);
GdkGLContext * (* create_context) (GtkGLArea *area);
gpointer _padding[6];
};
typedef struct _GtkGrid GtkGrid;
typedef struct _GtkGridPrivate GtkGridPrivate;
typedef struct _GtkGridClass GtkGridClass;
struct _GtkGrid
{
GtkContainer container;
GtkGridPrivate *priv;
};
struct _GtkGridClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkHeaderBar GtkHeaderBar;
typedef struct _GtkHeaderBarPrivate GtkHeaderBarPrivate;
typedef struct _GtkHeaderBarClass GtkHeaderBarClass;
struct _GtkHeaderBar
{
GtkContainer container;
};
struct _GtkHeaderBarClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkIconFactory GtkIconFactory;
typedef struct _GtkIconFactoryPrivate GtkIconFactoryPrivate;
typedef struct _GtkIconFactoryClass GtkIconFactoryClass;
struct _GtkIconFactory
{
GObject parent_instance;
GtkIconFactoryPrivate *priv;
};
struct _GtkIconFactoryClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkStyleProperties GtkStyleProperties;
typedef struct _GtkStylePropertiesClass GtkStylePropertiesClass;
typedef struct _GtkStylePropertiesPrivate GtkStylePropertiesPrivate;
typedef struct _GtkSymbolicColor GtkSymbolicColor;
typedef struct _GtkGradient GtkGradient;
struct _GtkStyleProperties
{
GObject parent_object;
GtkStylePropertiesPrivate *priv;
};
struct _GtkStylePropertiesClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef gboolean (* GtkStylePropertyParser) (const gchar *string,
GValue *value,
GError **error);
typedef struct _GtkStyleProviderIface GtkStyleProviderIface;
typedef struct _GtkStyleProvider GtkStyleProvider;
struct _GtkStyleProviderIface
{
GTypeInterface g_iface;
GtkStyleProperties * (* get_style) (GtkStyleProvider *provider,
GtkWidgetPath *path);
gboolean (* get_style_property) (GtkStyleProvider *provider,
GtkWidgetPath *path,
GtkStateFlags state,
GParamSpec *pspec,
GValue *value);
GtkIconFactory * (* get_icon_factory) (GtkStyleProvider *provider,
GtkWidgetPath *path);
};
typedef struct _GtkStyleContextClass GtkStyleContextClass;
typedef struct _GtkStyleContextPrivate GtkStyleContextPrivate;
struct _GtkStyleContext
{
GObject parent_object;
GtkStyleContextPrivate *priv;
};
struct _GtkStyleContextClass
{
GObjectClass parent_class;
void (* changed) (GtkStyleContext *context);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkIconInfo GtkIconInfo;
typedef struct _GtkIconInfoClass GtkIconInfoClass;
typedef struct _GtkIconTheme GtkIconTheme;
typedef struct _GtkIconThemeClass GtkIconThemeClass;
typedef struct _GtkIconThemePrivate GtkIconThemePrivate;
struct _GtkIconTheme
{
GObject parent_instance;
GtkIconThemePrivate *priv;
};
struct _GtkIconThemeClass
{
GObjectClass parent_class;
void (* changed) (GtkIconTheme *icon_theme);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkIconView GtkIconView;
typedef struct _GtkIconViewClass GtkIconViewClass;
typedef struct _GtkIconViewPrivate GtkIconViewPrivate;
typedef void (* GtkIconViewForeachFunc) (GtkIconView *icon_view,
GtkTreePath *path,
gpointer data);
struct _GtkIconView
{
GtkContainer parent;
GtkIconViewPrivate *priv;
};
struct _GtkIconViewClass
{
GtkContainerClass parent_class;
void (* item_activated) (GtkIconView *icon_view,
GtkTreePath *path);
void (* selection_changed) (GtkIconView *icon_view);
void (* select_all) (GtkIconView *icon_view);
void (* unselect_all) (GtkIconView *icon_view);
void (* select_cursor_item) (GtkIconView *icon_view);
void (* toggle_cursor_item) (GtkIconView *icon_view);
gboolean (* move_cursor) (GtkIconView *icon_view,
GtkMovementStep step,
gint count);
gboolean (* activate_cursor_item) (GtkIconView *icon_view);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkIMContextInfo GtkIMContextInfo;
struct _GtkIMContextInfo
{
const gchar *context_id;
const gchar *context_name;
const gchar *domain;
const gchar *domain_dirname;
const gchar *default_locales;
};
typedef struct _GtkIMContextSimple GtkIMContextSimple;
typedef struct _GtkIMContextSimplePrivate GtkIMContextSimplePrivate;
typedef struct _GtkIMContextSimpleClass GtkIMContextSimpleClass;
struct _GtkIMContextSimple
{
GtkIMContext object;
GtkIMContextSimplePrivate *priv;
};
struct _GtkIMContextSimpleClass
{
GtkIMContextClass parent_class;
};
typedef struct _GtkIMMulticontext GtkIMMulticontext;
typedef struct _GtkIMMulticontextClass GtkIMMulticontextClass;
typedef struct _GtkIMMulticontextPrivate GtkIMMulticontextPrivate;
struct _GtkIMMulticontext
{
GtkIMContext object;
GtkIMMulticontextPrivate *priv;
};
struct _GtkIMMulticontextClass
{
GtkIMContextClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkInfoBarPrivate GtkInfoBarPrivate;
typedef struct _GtkInfoBarClass GtkInfoBarClass;
typedef struct _GtkInfoBar GtkInfoBar;
struct _GtkInfoBar
{
GtkBox parent;
GtkInfoBarPrivate *priv;
};
struct _GtkInfoBarClass
{
GtkBoxClass parent_class;
void (* response) (GtkInfoBar *info_bar, gint response_id);
void (* close) (GtkInfoBar *info_bar);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkInvisible GtkInvisible;
typedef struct _GtkInvisiblePrivate GtkInvisiblePrivate;
typedef struct _GtkInvisibleClass GtkInvisibleClass;
struct _GtkInvisible
{
GtkWidget widget;
GtkInvisiblePrivate *priv;
};
struct _GtkInvisibleClass
{
GtkWidgetClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkLayout GtkLayout;
typedef struct _GtkLayoutPrivate GtkLayoutPrivate;
typedef struct _GtkLayoutClass GtkLayoutClass;
struct _GtkLayout
{
GtkContainer container;
GtkLayoutPrivate *priv;
};
struct _GtkLayoutClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkLevelBarClass GtkLevelBarClass;
typedef struct _GtkLevelBar GtkLevelBar;
typedef struct _GtkLevelBarPrivate GtkLevelBarPrivate;
struct _GtkLevelBar {
GtkWidget parent;
GtkLevelBarPrivate *priv;
};
struct _GtkLevelBarClass {
GtkWidgetClass parent_class;
void (* offset_changed) (GtkLevelBar *self,
const gchar *name);
gpointer padding[16];
};
typedef struct _GtkLinkButton GtkLinkButton;
typedef struct _GtkLinkButtonClass GtkLinkButtonClass;
typedef struct _GtkLinkButtonPrivate GtkLinkButtonPrivate;
struct _GtkLinkButton
{
GtkButton parent_instance;
GtkLinkButtonPrivate *priv;
};
struct _GtkLinkButtonClass
{
GtkButtonClass parent_class;
gboolean (* activate_link) (GtkLinkButton *button);
void (*_gtk_padding1) (void);
void (*_gtk_padding2) (void);
void (*_gtk_padding3) (void);
void (*_gtk_padding4) (void);
};
typedef struct _GtkListBox GtkListBox;
typedef struct _GtkListBoxClass GtkListBoxClass;
typedef struct _GtkListBoxRow GtkListBoxRow;
typedef struct _GtkListBoxRowClass GtkListBoxRowClass;
struct _GtkListBox
{
GtkContainer parent_instance;
};
struct _GtkListBoxClass
{
GtkContainerClass parent_class;
void (*row_selected) (GtkListBox *box,
GtkListBoxRow *row);
void (*row_activated) (GtkListBox *box,
GtkListBoxRow *row);
void (*activate_cursor_row) (GtkListBox *box);
void (*toggle_cursor_row) (GtkListBox *box);
void (*move_cursor) (GtkListBox *box,
GtkMovementStep step,
gint count);
void (*selected_rows_changed) (GtkListBox *box);
void (*select_all) (GtkListBox *box);
void (*unselect_all) (GtkListBox *box);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
};
struct _GtkListBoxRow
{
GtkBin parent_instance;
};
struct _GtkListBoxRowClass
{
GtkBinClass parent_class;
void (* activate) (GtkListBoxRow *row);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
};
typedef gboolean (*GtkListBoxFilterFunc) (GtkListBoxRow *row,
gpointer user_data);
typedef gint (*GtkListBoxSortFunc) (GtkListBoxRow *row1,
GtkListBoxRow *row2,
gpointer user_data);
typedef void (*GtkListBoxUpdateHeaderFunc) (GtkListBoxRow *row,
GtkListBoxRow *before,
gpointer user_data);
typedef GtkWidget * (*GtkListBoxCreateWidgetFunc) (gpointer item,
gpointer user_data);
typedef void (* GtkListBoxForeachFunc) (GtkListBox *box,
GtkListBoxRow *row,
gpointer user_data);
typedef GtkListBox *GtkListBox_autoptr; typedef GList *GtkListBox_listautoptr; typedef GSList *GtkListBox_slistautoptr; typedef GQueue *GtkListBox_queueautoptr;
typedef GtkListBoxRow *GtkListBoxRow_autoptr; typedef GList *GtkListBoxRow_listautoptr; typedef GSList *GtkListBoxRow_slistautoptr; typedef GQueue *GtkListBoxRow_queueautoptr;
typedef struct _GtkLockButton GtkLockButton;
typedef struct _GtkLockButtonClass GtkLockButtonClass;
typedef struct _GtkLockButtonPrivate GtkLockButtonPrivate;
struct _GtkLockButton
{
GtkButton parent;
GtkLockButtonPrivate *priv;
};
struct _GtkLockButtonClass
{
GtkButtonClass parent_class;
void (*reserved0) (void);
void (*reserved1) (void);
void (*reserved2) (void);
void (*reserved3) (void);
void (*reserved4) (void);
void (*reserved5) (void);
void (*reserved6) (void);
void (*reserved7) (void);
};
typedef gint (*GtkKeySnoopFunc) (GtkWidget *grab_widget,
GdkEventKey *event,
gpointer func_data);
typedef struct _GtkMenuBar GtkMenuBar;
typedef struct _GtkMenuBarPrivate GtkMenuBarPrivate;
typedef struct _GtkMenuBarClass GtkMenuBarClass;
struct _GtkMenuBar
{
GtkMenuShell menu_shell;
GtkMenuBarPrivate *priv;
};
struct _GtkMenuBarClass
{
GtkMenuShellClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkPopover GtkPopover;
typedef struct _GtkPopoverClass GtkPopoverClass;
typedef struct _GtkPopoverPrivate GtkPopoverPrivate;
struct _GtkPopover
{
GtkBin parent_instance;
GtkPopoverPrivate *priv;
};
struct _GtkPopoverClass
{
GtkBinClass parent_class;
void (* closed) (GtkPopover *popover);
gpointer reserved[10];
};
typedef struct _GtkMenuButton GtkMenuButton;
typedef struct _GtkMenuButtonClass GtkMenuButtonClass;
typedef struct _GtkMenuButtonPrivate GtkMenuButtonPrivate;
struct _GtkMenuButton
{
GtkToggleButton parent;
GtkMenuButtonPrivate *priv;
};
struct _GtkMenuButtonClass
{
GtkToggleButtonClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkSizeGroup GtkSizeGroup;
typedef struct _GtkSizeGroupPrivate GtkSizeGroupPrivate;
typedef struct _GtkSizeGroupClass GtkSizeGroupClass;
struct _GtkSizeGroup
{
GObject parent_instance;
GtkSizeGroupPrivate *priv;
};
struct _GtkSizeGroupClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolItem GtkToolItem;
typedef struct _GtkToolItemClass GtkToolItemClass;
typedef struct _GtkToolItemPrivate GtkToolItemPrivate;
struct _GtkToolItem
{
GtkBin parent;
GtkToolItemPrivate *priv;
};
struct _GtkToolItemClass
{
GtkBinClass parent_class;
gboolean (* create_menu_proxy) (GtkToolItem *tool_item);
void (* toolbar_reconfigured) (GtkToolItem *tool_item);
void (* _gtk_reserved1) (void);
void (* _gtk_reserved2) (void);
void (* _gtk_reserved3) (void);
void (* _gtk_reserved4) (void);
};
typedef struct _GtkToolButton GtkToolButton;
typedef struct _GtkToolButtonClass GtkToolButtonClass;
typedef struct _GtkToolButtonPrivate GtkToolButtonPrivate;
struct _GtkToolButton
{
GtkToolItem parent;
GtkToolButtonPrivate *priv;
};
struct _GtkToolButtonClass
{
GtkToolItemClass parent_class;
GType button_type;
void (* clicked) (GtkToolButton *tool_item);
void (* _gtk_reserved1) (void);
void (* _gtk_reserved2) (void);
void (* _gtk_reserved3) (void);
void (* _gtk_reserved4) (void);
};
typedef struct _GtkMenuToolButtonClass GtkMenuToolButtonClass;
typedef struct _GtkMenuToolButton GtkMenuToolButton;
typedef struct _GtkMenuToolButtonPrivate GtkMenuToolButtonPrivate;
struct _GtkMenuToolButton
{
GtkToolButton parent;
GtkMenuToolButtonPrivate *priv;
};
struct _GtkMenuToolButtonClass
{
GtkToolButtonClass parent_class;
void (*show_menu) (GtkMenuToolButton *button);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkMessageDialog GtkMessageDialog;
typedef struct _GtkMessageDialogPrivate GtkMessageDialogPrivate;
typedef struct _GtkMessageDialogClass GtkMessageDialogClass;
struct _GtkMessageDialog
{
GtkDialog parent_instance;
GtkMessageDialogPrivate *priv;
};
struct _GtkMessageDialogClass
{
GtkDialogClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkModelButton GtkModelButton;
typedef void (*GtkModuleInitFunc) (gint *argc,
gchar ***argv);
typedef void (*GtkModuleDisplayInitFunc) (GdkDisplay *display);
typedef struct _GtkMountOperation GtkMountOperation;
typedef struct _GtkMountOperationClass GtkMountOperationClass;
typedef struct _GtkMountOperationPrivate GtkMountOperationPrivate;
struct _GtkMountOperation
{
GMountOperation parent_instance;
GtkMountOperationPrivate *priv;
};
struct _GtkMountOperationClass
{
GMountOperationClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkNotebook GtkNotebook;
typedef struct _GtkNotebookPrivate GtkNotebookPrivate;
typedef struct _GtkNotebookClass GtkNotebookClass;
struct _GtkNotebook
{
GtkContainer container;
GtkNotebookPrivate *priv;
};
struct _GtkNotebookClass
{
GtkContainerClass parent_class;
void (* switch_page) (GtkNotebook *notebook,
GtkWidget *page,
guint page_num);
gboolean (* select_page) (GtkNotebook *notebook,
gboolean move_focus);
gboolean (* focus_tab) (GtkNotebook *notebook,
GtkNotebookTab type);
gboolean (* change_current_page) (GtkNotebook *notebook,
gint offset);
void (* move_focus_out) (GtkNotebook *notebook,
GtkDirectionType direction);
gboolean (* reorder_tab) (GtkNotebook *notebook,
GtkDirectionType direction,
gboolean move_to_last);
gint (* insert_page) (GtkNotebook *notebook,
GtkWidget *child,
GtkWidget *tab_label,
GtkWidget *menu_label,
gint position);
GtkNotebook * (* create_window) (GtkNotebook *notebook,
GtkWidget *page,
gint x,
gint y);
void (* page_reordered) (GtkNotebook *notebook,
GtkWidget *child,
guint page_num);
void (* page_removed) (GtkNotebook *notebook,
GtkWidget *child,
guint page_num);
void (* page_added) (GtkNotebook *notebook,
GtkWidget *child,
guint page_num);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkOffscreenWindow GtkOffscreenWindow;
typedef struct _GtkOffscreenWindowClass GtkOffscreenWindowClass;
struct _GtkOffscreenWindow
{
GtkWindow parent_object;
};
struct _GtkOffscreenWindowClass
{
GtkWindowClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkOrientable GtkOrientable;
typedef struct _GtkOrientableIface GtkOrientableIface;
struct _GtkOrientableIface
{
GTypeInterface base_iface;
};
typedef struct _GtkOverlay GtkOverlay;
typedef struct _GtkOverlayClass GtkOverlayClass;
typedef struct _GtkOverlayPrivate GtkOverlayPrivate;
struct _GtkOverlay
{
GtkBin parent;
GtkOverlayPrivate *priv;
};
struct _GtkOverlayClass
{
GtkBinClass parent_class;
gboolean (*get_child_position) (GtkOverlay *overlay,
GtkWidget *widget,
GtkAllocation *allocation);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkPadController GtkPadController;
typedef struct _GtkPadControllerClass GtkPadControllerClass;
typedef struct _GtkPadActionEntry GtkPadActionEntry;
struct _GtkPadActionEntry {
GtkPadActionType type;
gint index;
gint mode;
gchar *label;
gchar *action_name;
};
typedef struct _GtkPaperSize GtkPaperSize;
typedef struct _GtkPageSetup GtkPageSetup;
typedef struct _GtkPaned GtkPaned;
typedef struct _GtkPanedClass GtkPanedClass;
typedef struct _GtkPanedPrivate GtkPanedPrivate;
struct _GtkPaned
{
GtkContainer container;
GtkPanedPrivate *priv;
};
struct _GtkPanedClass
{
GtkContainerClass parent_class;
gboolean (* cycle_child_focus) (GtkPaned *paned,
gboolean reverse);
gboolean (* toggle_handle_focus) (GtkPaned *paned);
gboolean (* move_handle) (GtkPaned *paned,
GtkScrollType scroll);
gboolean (* cycle_handle_focus) (GtkPaned *paned,
gboolean reverse);
gboolean (* accept_position) (GtkPaned *paned);
gboolean (* cancel_position) (GtkPaned *paned);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkPlacesSidebar GtkPlacesSidebar;
typedef struct _GtkPlacesSidebarClass GtkPlacesSidebarClass;
typedef struct _GtkPopoverMenu GtkPopoverMenu;
typedef struct _GtkPopoverMenuClass GtkPopoverMenuClass;
struct _GtkPopoverMenuClass
{
GtkPopoverClass parent_class;
gpointer reserved[10];
};
typedef struct _GtkPrintContext GtkPrintContext;
typedef struct _GtkPrintSettings GtkPrintSettings;
typedef void (*GtkPrintSettingsFunc) (const gchar *key,
const gchar *value,
gpointer user_data);
typedef struct _GtkPageRange GtkPageRange;
struct _GtkPageRange
{
gint start;
gint end;
};
typedef struct _GtkPrintOperationPreview GtkPrintOperationPreview;
typedef struct _GtkPrintOperationPreviewIface GtkPrintOperationPreviewIface;
struct _GtkPrintOperationPreviewIface
{
GTypeInterface g_iface;
void (*ready) (GtkPrintOperationPreview *preview,
GtkPrintContext *context);
void (*got_page_size) (GtkPrintOperationPreview *preview,
GtkPrintContext *context,
GtkPageSetup *page_setup);
void (*render_page) (GtkPrintOperationPreview *preview,
gint page_nr);
gboolean (*is_selected) (GtkPrintOperationPreview *preview,
gint page_nr);
void (*end_preview) (GtkPrintOperationPreview *preview);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef struct _GtkPrintOperationClass GtkPrintOperationClass;
typedef struct _GtkPrintOperationPrivate GtkPrintOperationPrivate;
typedef struct _GtkPrintOperation GtkPrintOperation;
struct _GtkPrintOperation
{
GObject parent_instance;
GtkPrintOperationPrivate *priv;
};
struct _GtkPrintOperationClass
{
GObjectClass parent_class;
void (*done) (GtkPrintOperation *operation,
GtkPrintOperationResult result);
void (*begin_print) (GtkPrintOperation *operation,
GtkPrintContext *context);
gboolean (*paginate) (GtkPrintOperation *operation,
GtkPrintContext *context);
void (*request_page_setup) (GtkPrintOperation *operation,
GtkPrintContext *context,
gint page_nr,
GtkPageSetup *setup);
void (*draw_page) (GtkPrintOperation *operation,
GtkPrintContext *context,
gint page_nr);
void (*end_print) (GtkPrintOperation *operation,
GtkPrintContext *context);
void (*status_changed) (GtkPrintOperation *operation);
GtkWidget *(*create_custom_widget) (GtkPrintOperation *operation);
void (*custom_widget_apply) (GtkPrintOperation *operation,
GtkWidget *widget);
gboolean (*preview) (GtkPrintOperation *operation,
GtkPrintOperationPreview *preview,
GtkPrintContext *context,
GtkWindow *parent);
void (*update_custom_widget) (GtkPrintOperation *operation,
GtkWidget *widget,
GtkPageSetup *setup,
GtkPrintSettings *settings);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
};
typedef void (* GtkPageSetupDoneFunc) (GtkPageSetup *page_setup,
gpointer data);
typedef struct _GtkProgressBar GtkProgressBar;
typedef struct _GtkProgressBarPrivate GtkProgressBarPrivate;
typedef struct _GtkProgressBarClass GtkProgressBarClass;
struct _GtkProgressBar
{
GtkWidget parent;
GtkProgressBarPrivate *priv;
};
struct _GtkProgressBarClass
{
GtkWidgetClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkRadioButton GtkRadioButton;
typedef struct _GtkRadioButtonPrivate GtkRadioButtonPrivate;
typedef struct _GtkRadioButtonClass GtkRadioButtonClass;
struct _GtkRadioButton
{
GtkCheckButton check_button;
GtkRadioButtonPrivate *priv;
};
struct _GtkRadioButtonClass
{
GtkCheckButtonClass parent_class;
void (*group_changed) (GtkRadioButton *radio_button);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkRadioMenuItem GtkRadioMenuItem;
typedef struct _GtkRadioMenuItemPrivate GtkRadioMenuItemPrivate;
typedef struct _GtkRadioMenuItemClass GtkRadioMenuItemClass;
struct _GtkRadioMenuItem
{
GtkCheckMenuItem check_menu_item;
GtkRadioMenuItemPrivate *priv;
};
struct _GtkRadioMenuItemClass
{
GtkCheckMenuItemClass parent_class;
void (*group_changed) (GtkRadioMenuItem *radio_menu_item);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkToggleToolButton GtkToggleToolButton;
typedef struct _GtkToggleToolButtonClass GtkToggleToolButtonClass;
typedef struct _GtkToggleToolButtonPrivate GtkToggleToolButtonPrivate;
struct _GtkToggleToolButton
{
GtkToolButton parent;
GtkToggleToolButtonPrivate *priv;
};
struct _GtkToggleToolButtonClass
{
GtkToolButtonClass parent_class;
void (* toggled) (GtkToggleToolButton *button);
void (* _gtk_reserved1) (void);
void (* _gtk_reserved2) (void);
void (* _gtk_reserved3) (void);
void (* _gtk_reserved4) (void);
};
typedef struct _GtkRadioToolButton GtkRadioToolButton;
typedef struct _GtkRadioToolButtonClass GtkRadioToolButtonClass;
struct _GtkRadioToolButton
{
GtkToggleToolButton parent;
};
struct _GtkRadioToolButtonClass
{
GtkToggleToolButtonClass parent_class;
void (* _gtk_reserved1) (void);
void (* _gtk_reserved2) (void);
void (* _gtk_reserved3) (void);
void (* _gtk_reserved4) (void);
};
typedef struct _GtkRange GtkRange;
typedef struct _GtkRangePrivate GtkRangePrivate;
typedef struct _GtkRangeClass GtkRangeClass;
struct _GtkRange
{
GtkWidget widget;
GtkRangePrivate *priv;
};
struct _GtkRangeClass
{
GtkWidgetClass parent_class;
gchar *slider_detail;
gchar *stepper_detail;
void (* value_changed) (GtkRange *range);
void (* adjust_bounds) (GtkRange *range,
gdouble new_value);
void (* move_slider) (GtkRange *range,
GtkScrollType scroll);
void (* get_range_border) (GtkRange *range,
GtkBorder *border_);
gboolean (* change_value) (GtkRange *range,
GtkScrollType scroll,
gdouble new_value);
void (* get_range_size_request) (GtkRange *range,
GtkOrientation orientation,
gint *minimum,
gint *natural);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
};
typedef struct _GtkRecentInfo GtkRecentInfo;
typedef struct _GtkRecentData GtkRecentData;
typedef struct _GtkRecentManager GtkRecentManager;
typedef struct _GtkRecentManagerClass GtkRecentManagerClass;
typedef struct _GtkRecentManagerPrivate GtkRecentManagerPrivate;
struct _GtkRecentData
{
gchar *display_name;
gchar *description;
gchar *mime_type;
gchar *app_name;
gchar *app_exec;
gchar **groups;
gboolean is_private;
};
struct _GtkRecentManager
{
GObject parent_instance;
GtkRecentManagerPrivate *priv;
};
struct _GtkRecentManagerClass
{
GObjectClass parent_class;
void (*changed) (GtkRecentManager *manager);
void (*_gtk_recent1) (void);
void (*_gtk_recent2) (void);
void (*_gtk_recent3) (void);
void (*_gtk_recent4) (void);
};
typedef struct _GtkRecentFilter GtkRecentFilter;
typedef struct _GtkRecentFilterInfo GtkRecentFilterInfo;
typedef gboolean (*GtkRecentFilterFunc) (const GtkRecentFilterInfo *filter_info,
gpointer user_data);
struct _GtkRecentFilterInfo
{
GtkRecentFilterFlags contains;
const gchar *uri;
const gchar *display_name;
const gchar *mime_type;
const gchar **applications;
const gchar **groups;
gint age;
};
typedef gint (*GtkRecentSortFunc) (GtkRecentInfo *a,
GtkRecentInfo *b,
gpointer user_data);
typedef struct _GtkRecentChooser GtkRecentChooser;
typedef struct _GtkRecentChooserIface GtkRecentChooserIface;
struct _GtkRecentChooserIface
{
GTypeInterface base_iface;
gboolean (* set_current_uri) (GtkRecentChooser *chooser,
const gchar *uri,
GError **error);
gchar * (* get_current_uri) (GtkRecentChooser *chooser);
gboolean (* select_uri) (GtkRecentChooser *chooser,
const gchar *uri,
GError **error);
void (* unselect_uri) (GtkRecentChooser *chooser,
const gchar *uri);
void (* select_all) (GtkRecentChooser *chooser);
void (* unselect_all) (GtkRecentChooser *chooser);
GList * (* get_items) (GtkRecentChooser *chooser);
GtkRecentManager *(* get_recent_manager) (GtkRecentChooser *chooser);
void (* add_filter) (GtkRecentChooser *chooser,
GtkRecentFilter *filter);
void (* remove_filter) (GtkRecentChooser *chooser,
GtkRecentFilter *filter);
GSList * (* list_filters) (GtkRecentChooser *chooser);
void (* set_sort_func) (GtkRecentChooser *chooser,
GtkRecentSortFunc sort_func,
gpointer sort_data,
GDestroyNotify data_destroy);
void (* item_activated) (GtkRecentChooser *chooser);
void (* selection_changed) (GtkRecentChooser *chooser);
};
typedef struct _GtkRecentChooserDialog GtkRecentChooserDialog;
typedef struct _GtkRecentChooserDialogClass GtkRecentChooserDialogClass;
typedef struct _GtkRecentChooserDialogPrivate GtkRecentChooserDialogPrivate;
struct _GtkRecentChooserDialog
{
GtkDialog parent_instance;
GtkRecentChooserDialogPrivate *priv;
};
struct _GtkRecentChooserDialogClass
{
GtkDialogClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkRecentChooserMenu GtkRecentChooserMenu;
typedef struct _GtkRecentChooserMenuClass GtkRecentChooserMenuClass;
typedef struct _GtkRecentChooserMenuPrivate GtkRecentChooserMenuPrivate;
struct _GtkRecentChooserMenu
{
GtkMenu parent_instance;
GtkRecentChooserMenuPrivate *priv;
};
struct _GtkRecentChooserMenuClass
{
GtkMenuClass parent_class;
void (* gtk_recent1) (void);
void (* gtk_recent2) (void);
void (* gtk_recent3) (void);
void (* gtk_recent4) (void);
};
typedef struct _GtkRecentChooserWidget GtkRecentChooserWidget;
typedef struct _GtkRecentChooserWidgetClass GtkRecentChooserWidgetClass;
typedef struct _GtkRecentChooserWidgetPrivate GtkRecentChooserWidgetPrivate;
struct _GtkRecentChooserWidget
{
GtkBox parent_instance;
GtkRecentChooserWidgetPrivate *priv;
};
struct _GtkRecentChooserWidgetClass
{
GtkBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkRevealer GtkRevealer;
typedef struct _GtkRevealerClass GtkRevealerClass;
struct _GtkRevealer {
GtkBin parent_instance;
};
struct _GtkRevealerClass {
GtkBinClass parent_class;
};
typedef struct _GtkScale GtkScale;
typedef struct _GtkScalePrivate GtkScalePrivate;
typedef struct _GtkScaleClass GtkScaleClass;
struct _GtkScale
{
GtkRange range;
GtkScalePrivate *priv;
};
struct _GtkScaleClass
{
GtkRangeClass parent_class;
gchar* (* format_value) (GtkScale *scale,
gdouble value);
void (* draw_value) (GtkScale *scale);
void (* get_layout_offsets) (GtkScale *scale,
gint *x,
gint *y);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkScaleButton GtkScaleButton;
typedef struct _GtkScaleButtonClass GtkScaleButtonClass;
typedef struct _GtkScaleButtonPrivate GtkScaleButtonPrivate;
struct _GtkScaleButton
{
GtkButton parent;
GtkScaleButtonPrivate *priv;
};
struct _GtkScaleButtonClass
{
GtkButtonClass parent_class;
void (* value_changed) (GtkScaleButton *button,
gdouble value);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkScrollable GtkScrollable;
typedef struct _GtkScrollableInterface GtkScrollableInterface;
struct _GtkScrollableInterface
{
GTypeInterface base_iface;
gboolean (* get_border) (GtkScrollable *scrollable,
GtkBorder *border);
};
typedef struct _GtkScrollbar GtkScrollbar;
typedef struct _GtkScrollbarClass GtkScrollbarClass;
struct _GtkScrollbar
{
GtkRange range;
};
struct _GtkScrollbarClass
{
GtkRangeClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkScrolledWindow GtkScrolledWindow;
typedef struct _GtkScrolledWindowPrivate GtkScrolledWindowPrivate;
typedef struct _GtkScrolledWindowClass GtkScrolledWindowClass;
struct _GtkScrolledWindow
{
GtkBin container;
GtkScrolledWindowPrivate *priv;
};
struct _GtkScrolledWindowClass
{
GtkBinClass parent_class;
gint scrollbar_spacing;
gboolean (*scroll_child) (GtkScrolledWindow *scrolled_window,
GtkScrollType scroll,
gboolean horizontal);
void (* move_focus_out) (GtkScrolledWindow *scrolled_window,
GtkDirectionType direction);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkSearchBar GtkSearchBar;
typedef struct _GtkSearchBarClass GtkSearchBarClass;
struct _GtkSearchBar
{
GtkBin parent;
};
struct _GtkSearchBarClass
{
GtkBinClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkSearchEntry GtkSearchEntry;
typedef struct _GtkSearchEntryClass GtkSearchEntryClass;
struct _GtkSearchEntry
{
GtkEntry parent;
};
struct _GtkSearchEntryClass
{
GtkEntryClass parent_class;
void (*search_changed) (GtkSearchEntry *entry);
void (*next_match) (GtkSearchEntry *entry);
void (*previous_match) (GtkSearchEntry *entry);
void (*stop_search) (GtkSearchEntry *entry);
};
typedef struct _GtkSeparator GtkSeparator;
typedef struct _GtkSeparatorPrivate GtkSeparatorPrivate;
typedef struct _GtkSeparatorClass GtkSeparatorClass;
struct _GtkSeparator
{
GtkWidget widget;
GtkSeparatorPrivate *priv;
};
struct _GtkSeparatorClass
{
GtkWidgetClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkSeparatorMenuItem GtkSeparatorMenuItem;
typedef struct _GtkSeparatorMenuItemClass GtkSeparatorMenuItemClass;
struct _GtkSeparatorMenuItem
{
GtkMenuItem menu_item;
};
struct _GtkSeparatorMenuItemClass
{
GtkMenuItemClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkSeparatorToolItem GtkSeparatorToolItem;
typedef struct _GtkSeparatorToolItemClass GtkSeparatorToolItemClass;
typedef struct _GtkSeparatorToolItemPrivate GtkSeparatorToolItemPrivate;
struct _GtkSeparatorToolItem
{
GtkToolItem parent;
GtkSeparatorToolItemPrivate *priv;
};
struct _GtkSeparatorToolItemClass
{
GtkToolItemClass parent_class;
void (* _gtk_reserved1) (void);
void (* _gtk_reserved2) (void);
void (* _gtk_reserved3) (void);
void (* _gtk_reserved4) (void);
};
typedef struct _GtkSettingsPrivate GtkSettingsPrivate;
typedef struct _GtkSettingsClass GtkSettingsClass;
typedef struct _GtkSettingsValue GtkSettingsValue;
struct _GtkSettings
{
GObject parent_instance;
GtkSettingsPrivate *priv;
};
struct _GtkSettingsClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkSettingsValue
{
gchar *origin;
GValue value;
};
typedef struct _GtkShortcutLabel GtkShortcutLabel;
typedef struct _GtkShortcutLabelClass GtkShortcutLabelClass;
typedef struct _GtkShortcutsGroup GtkShortcutsGroup;
typedef struct _GtkShortcutsGroupClass GtkShortcutsGroupClass;
typedef struct _GtkShortcutsSection GtkShortcutsSection;
typedef struct _GtkShortcutsSectionClass GtkShortcutsSectionClass;
typedef struct _GtkShortcutsShortcut GtkShortcutsShortcut;
typedef struct _GtkShortcutsShortcutClass GtkShortcutsShortcutClass;
typedef struct _GtkStack GtkStack;
typedef struct _GtkStackClass GtkStackClass;
struct _GtkStack {
GtkContainer parent_instance;
};
struct _GtkStackClass {
GtkContainerClass parent_class;
};
typedef struct _GtkStackSidebar GtkStackSidebar;
typedef struct _GtkStackSidebarPrivate GtkStackSidebarPrivate;
typedef struct _GtkStackSidebarClass GtkStackSidebarClass;
struct _GtkStackSidebar
{
GtkBin parent;
};
struct _GtkStackSidebarClass
{
GtkBinClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkRequestedSize GtkRequestedSize;
struct _GtkRequestedSize
{
gpointer data;
gint minimum_size;
gint natural_size;
};
typedef struct _GtkSpinButton GtkSpinButton;
typedef struct _GtkSpinButtonPrivate GtkSpinButtonPrivate;
typedef struct _GtkSpinButtonClass GtkSpinButtonClass;
struct _GtkSpinButton
{
GtkEntry entry;
GtkSpinButtonPrivate *priv;
};
struct _GtkSpinButtonClass
{
GtkEntryClass parent_class;
gint (*input) (GtkSpinButton *spin_button,
gdouble *new_value);
gint (*output) (GtkSpinButton *spin_button);
void (*value_changed) (GtkSpinButton *spin_button);
void (*change_value) (GtkSpinButton *spin_button,
GtkScrollType scroll);
void (*wrapped) (GtkSpinButton *spin_button);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkSpinner GtkSpinner;
typedef struct _GtkSpinnerClass GtkSpinnerClass;
typedef struct _GtkSpinnerPrivate GtkSpinnerPrivate;
struct _GtkSpinner
{
GtkWidget parent;
GtkSpinnerPrivate *priv;
};
struct _GtkSpinnerClass
{
GtkWidgetClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkStackSwitcher GtkStackSwitcher;
typedef struct _GtkStackSwitcherClass GtkStackSwitcherClass;
struct _GtkStackSwitcher
{
GtkBox widget;
};
struct _GtkStackSwitcherClass
{
GtkBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkStatusbar GtkStatusbar;
typedef struct _GtkStatusbarPrivate GtkStatusbarPrivate;
typedef struct _GtkStatusbarClass GtkStatusbarClass;
struct _GtkStatusbar
{
GtkBox parent_widget;
GtkStatusbarPrivate *priv;
};
struct _GtkStatusbarClass
{
GtkBoxClass parent_class;
gpointer reserved;
void (*text_pushed) (GtkStatusbar *statusbar,
guint context_id,
const gchar *text);
void (*text_popped) (GtkStatusbar *statusbar,
guint context_id,
const gchar *text);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkSwitch GtkSwitch;
typedef struct _GtkSwitchPrivate GtkSwitchPrivate;
typedef struct _GtkSwitchClass GtkSwitchClass;
struct _GtkSwitch
{
GtkWidget parent_instance;
GtkSwitchPrivate *priv;
};
struct _GtkSwitchClass
{
GtkWidgetClass parent_class;
void (* activate) (GtkSwitch *sw);
gboolean (* state_set) (GtkSwitch *sw, gboolean state);
void (* _switch_padding_1) (void);
void (* _switch_padding_2) (void);
void (* _switch_padding_3) (void);
void (* _switch_padding_4) (void);
void (* _switch_padding_5) (void);
};
typedef void (* GtkTextTagTableForeach) (GtkTextTag *tag, gpointer data);
typedef struct _GtkTextTagTablePrivate GtkTextTagTablePrivate;
typedef struct _GtkTextTagTableClass GtkTextTagTableClass;
struct _GtkTextTagTable
{
GObject parent_instance;
GtkTextTagTablePrivate *priv;
};
struct _GtkTextTagTableClass
{
GObjectClass parent_class;
void (* tag_changed) (GtkTextTagTable *table, GtkTextTag *tag, gboolean size_changed);
void (* tag_added) (GtkTextTagTable *table, GtkTextTag *tag);
void (* tag_removed) (GtkTextTagTable *table, GtkTextTag *tag);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTextMark GtkTextMark;
typedef struct _GtkTextMarkClass GtkTextMarkClass;
struct _GtkTextMark
{
GObject parent_instance;
gpointer segment;
};
struct _GtkTextMarkClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTextBTree GtkTextBTree;
typedef struct _GtkTextBufferPrivate GtkTextBufferPrivate;
typedef struct _GtkTextBufferClass GtkTextBufferClass;
struct _GtkTextBuffer
{
GObject parent_instance;
GtkTextBufferPrivate *priv;
};
struct _GtkTextBufferClass
{
GObjectClass parent_class;
void (* insert_text) (GtkTextBuffer *buffer,
GtkTextIter *pos,
const gchar *new_text,
gint new_text_length);
void (* insert_pixbuf) (GtkTextBuffer *buffer,
GtkTextIter *iter,
GdkPixbuf *pixbuf);
void (* insert_child_anchor) (GtkTextBuffer *buffer,
GtkTextIter *iter,
GtkTextChildAnchor *anchor);
void (* delete_range) (GtkTextBuffer *buffer,
GtkTextIter *start,
GtkTextIter *end);
void (* changed) (GtkTextBuffer *buffer);
void (* modified_changed) (GtkTextBuffer *buffer);
void (* mark_set) (GtkTextBuffer *buffer,
const GtkTextIter *location,
GtkTextMark *mark);
void (* mark_deleted) (GtkTextBuffer *buffer,
GtkTextMark *mark);
void (* apply_tag) (GtkTextBuffer *buffer,
GtkTextTag *tag,
const GtkTextIter *start,
const GtkTextIter *end);
void (* remove_tag) (GtkTextBuffer *buffer,
GtkTextTag *tag,
const GtkTextIter *start,
const GtkTextIter *end);
void (* begin_user_action) (GtkTextBuffer *buffer);
void (* end_user_action) (GtkTextBuffer *buffer);
void (* paste_done) (GtkTextBuffer *buffer,
GtkClipboard *clipboard);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef guint8 * (* GtkTextBufferSerializeFunc) (GtkTextBuffer *register_buffer,
GtkTextBuffer *content_buffer,
const GtkTextIter *start,
const GtkTextIter *end,
gsize *length,
gpointer user_data);
typedef gboolean (* GtkTextBufferDeserializeFunc) (GtkTextBuffer *register_buffer,
GtkTextBuffer *content_buffer,
GtkTextIter *iter,
const guint8 *data,
gsize length,
gboolean create_tags,
gpointer user_data,
GError **error);
typedef struct _GtkTextView GtkTextView;
typedef struct _GtkTextViewPrivate GtkTextViewPrivate;
typedef struct _GtkTextViewClass GtkTextViewClass;
struct _GtkTextView
{
GtkContainer parent_instance;
GtkTextViewPrivate *priv;
};
struct _GtkTextViewClass
{
GtkContainerClass parent_class;
void (* populate_popup) (GtkTextView *text_view,
GtkWidget *popup);
void (* move_cursor) (GtkTextView *text_view,
GtkMovementStep step,
gint count,
gboolean extend_selection);
void (* set_anchor) (GtkTextView *text_view);
void (* insert_at_cursor) (GtkTextView *text_view,
const gchar *str);
void (* delete_from_cursor) (GtkTextView *text_view,
GtkDeleteType type,
gint count);
void (* backspace) (GtkTextView *text_view);
void (* cut_clipboard) (GtkTextView *text_view);
void (* copy_clipboard) (GtkTextView *text_view);
void (* paste_clipboard) (GtkTextView *text_view);
void (* toggle_overwrite) (GtkTextView *text_view);
GtkTextBuffer * (* create_buffer) (GtkTextView *text_view);
void (* draw_layer) (GtkTextView *text_view,
GtkTextViewLayer layer,
cairo_t *cr);
gboolean (* extend_selection) (GtkTextView *text_view,
GtkTextExtendSelection granularity,
const GtkTextIter *location,
GtkTextIter *start,
GtkTextIter *end);
void (* insert_emoji) (GtkTextView *text_view);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolbar GtkToolbar;
typedef struct _GtkToolbarPrivate GtkToolbarPrivate;
typedef struct _GtkToolbarClass GtkToolbarClass;
typedef struct _GtkMediaStream GtkMediaStream;
typedef struct _GtkMediaControls GtkMediaControls;
typedef struct _GtkMediaFile GtkMediaFile;
struct _GtkToolbar
{
GtkContainer container;
GtkToolbarPrivate *priv;
};
struct _GtkToolbarClass
{
GtkContainerClass parent_class;
void (* orientation_changed) (GtkToolbar *toolbar,
GtkOrientation orientation);
void (* style_changed) (GtkToolbar *toolbar,
GtkToolbarStyle style);
gboolean (* popup_context_menu) (GtkToolbar *toolbar,
gint x,
gint y,
gint button_number);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolItemGroup GtkToolItemGroup;
typedef struct _GtkToolItemGroupClass GtkToolItemGroupClass;
typedef struct _GtkToolItemGroupPrivate GtkToolItemGroupPrivate;
struct _GtkToolItemGroup
{
GtkContainer parent_instance;
GtkToolItemGroupPrivate *priv;
};
struct _GtkToolItemGroupClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolPalette GtkToolPalette;
typedef struct _GtkToolPaletteClass GtkToolPaletteClass;
typedef struct _GtkToolPalettePrivate GtkToolPalettePrivate;
struct _GtkToolPalette
{
GtkContainer parent_instance;
GtkToolPalettePrivate *priv;
};
struct _GtkToolPaletteClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkToolShell GtkToolShell;
typedef struct _GtkToolShellIface GtkToolShellIface;
struct _GtkToolShellIface
{
GTypeInterface g_iface;
GtkIconSize (*get_icon_size) (GtkToolShell *shell);
GtkOrientation (*get_orientation) (GtkToolShell *shell);
GtkToolbarStyle (*get_style) (GtkToolShell *shell);
GtkReliefStyle (*get_relief_style) (GtkToolShell *shell);
void (*rebuild_menu) (GtkToolShell *shell);
GtkOrientation (*get_text_orientation) (GtkToolShell *shell);
gfloat (*get_text_alignment) (GtkToolShell *shell);
PangoEllipsizeMode (*get_ellipsize_mode) (GtkToolShell *shell);
GtkSizeGroup * (*get_text_size_group) (GtkToolShell *shell);
};
typedef struct _GtkTreeDragSource GtkTreeDragSource;
typedef struct _GtkTreeDragSourceIface GtkTreeDragSourceIface;
struct _GtkTreeDragSourceIface
{
GTypeInterface g_iface;
gboolean (* row_draggable) (GtkTreeDragSource *drag_source,
GtkTreePath *path);
gboolean (* drag_data_get) (GtkTreeDragSource *drag_source,
GtkTreePath *path,
GtkSelectionData *selection_data);
gboolean (* drag_data_delete) (GtkTreeDragSource *drag_source,
GtkTreePath *path);
};
typedef struct _GtkTreeDragDest GtkTreeDragDest;
typedef struct _GtkTreeDragDestIface GtkTreeDragDestIface;
struct _GtkTreeDragDestIface
{
GTypeInterface g_iface;
gboolean (* drag_data_received) (GtkTreeDragDest *drag_dest,
GtkTreePath *dest,
GtkSelectionData *selection_data);
gboolean (* row_drop_possible) (GtkTreeDragDest *drag_dest,
GtkTreePath *dest_path,
GtkSelectionData *selection_data);
};
typedef struct _GtkTreeModelSort GtkTreeModelSort;
typedef struct _GtkTreeModelSortClass GtkTreeModelSortClass;
typedef struct _GtkTreeModelSortPrivate GtkTreeModelSortPrivate;
struct _GtkTreeModelSort
{
GObject parent;
GtkTreeModelSortPrivate *priv;
};
struct _GtkTreeModelSortClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTreeSelectionPrivate GtkTreeSelectionPrivate;
typedef gboolean (* GtkTreeSelectionFunc) (GtkTreeSelection *selection,
GtkTreeModel *model,
GtkTreePath *path,
gboolean path_currently_selected,
gpointer data);
typedef void (* GtkTreeSelectionForeachFunc) (GtkTreeModel *model,
GtkTreePath *path,
GtkTreeIter *iter,
gpointer data);
struct _GtkTreeSelection
{
GObject parent;
GtkTreeSelectionPrivate *priv;
};
struct _GtkTreeSelectionClass
{
GObjectClass parent_class;
void (* changed) (GtkTreeSelection *selection);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkTreeStore GtkTreeStore;
typedef struct _GtkTreeStoreClass GtkTreeStoreClass;
typedef struct _GtkTreeStorePrivate GtkTreeStorePrivate;
struct _GtkTreeStore
{
GObject parent;
GtkTreeStorePrivate *priv;
};
struct _GtkTreeStoreClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkViewport GtkViewport;
typedef struct _GtkViewportPrivate GtkViewportPrivate;
typedef struct _GtkViewportClass GtkViewportClass;
struct _GtkViewport
{
GtkBin bin;
GtkViewportPrivate *priv;
};
struct _GtkViewportClass
{
GtkBinClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkVolumeButton GtkVolumeButton;
typedef struct _GtkVolumeButtonClass GtkVolumeButtonClass;
struct _GtkVolumeButton
{
GtkScaleButton parent;
};
struct _GtkVolumeButtonClass
{
GtkScaleButtonClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkWindowGroup
{
GObject parent_instance;
GtkWindowGroupPrivate *priv;
};
struct _GtkWindowGroupClass
{
GObjectClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkArrow GtkArrow;
typedef struct _GtkArrowPrivate GtkArrowPrivate;
typedef struct _GtkArrowClass GtkArrowClass;
struct _GtkArrow
{
GtkMisc misc;
GtkArrowPrivate *priv;
};
struct _GtkArrowClass
{
GtkMiscClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkAction GtkAction;
typedef struct _GtkActionClass GtkActionClass;
typedef struct _GtkActionPrivate GtkActionPrivate;
struct _GtkAction
{
GObject object;
GtkActionPrivate *private_data;
};
struct _GtkActionClass
{
GObjectClass parent_class;
void (* activate) (GtkAction *action);
GType menu_item_type;
GType toolbar_item_type;
GtkWidget *(* create_menu_item) (GtkAction *action);
GtkWidget *(* create_tool_item) (GtkAction *action);
void (* connect_proxy) (GtkAction *action,
GtkWidget *proxy);
void (* disconnect_proxy) (GtkAction *action,
GtkWidget *proxy);
GtkWidget *(* create_menu) (GtkAction *action);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkActivatable GtkActivatable;
typedef struct _GtkActivatableIface GtkActivatableIface;
struct _GtkActivatableIface
{
GTypeInterface g_iface;
void (* update) (GtkActivatable *activatable,
GtkAction *action,
const gchar *property_name);
void (* sync_action_properties) (GtkActivatable *activatable,
GtkAction *action);
};
typedef gchar * (*GtkTranslateFunc) (const gchar *path,
gpointer func_data);
typedef struct _GtkStockItem GtkStockItem;
struct _GtkStockItem
{
gchar *stock_id;
gchar *label;
GdkModifierType modifier;
guint keyval;
gchar *translation_domain;
};
typedef char * GtkStock;
typedef struct _GtkActionGroup GtkActionGroup;
typedef struct _GtkActionGroupPrivate GtkActionGroupPrivate;
typedef struct _GtkActionGroupClass GtkActionGroupClass;
typedef struct _GtkActionEntry GtkActionEntry;
typedef struct _GtkToggleActionEntry GtkToggleActionEntry;
typedef struct _GtkRadioActionEntry GtkRadioActionEntry;
struct _GtkActionGroup
{
GObject parent;
GtkActionGroupPrivate *priv;
};
struct _GtkActionGroupClass
{
GObjectClass parent_class;
GtkAction *(* get_action) (GtkActionGroup *action_group,
const gchar *action_name);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkActionEntry
{
const gchar *name;
const gchar *stock_id;
const gchar *label;
const gchar *accelerator;
const gchar *tooltip;
GCallback callback;
};
struct _GtkToggleActionEntry
{
const gchar *name;
const gchar *stock_id;
const gchar *label;
const gchar *accelerator;
const gchar *tooltip;
GCallback callback;
gboolean is_active;
};
struct _GtkRadioActionEntry
{
const gchar *name;
const gchar *stock_id;
const gchar *label;
const gchar *accelerator;
const gchar *tooltip;
gint value;
};
typedef struct _GtkAlignment GtkAlignment;
typedef struct _GtkAlignmentPrivate GtkAlignmentPrivate;
typedef struct _GtkAlignmentClass GtkAlignmentClass;
struct _GtkAlignment
{
GtkBin bin;
GtkAlignmentPrivate *priv;
};
struct _GtkAlignmentClass
{
GtkBinClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorSelection GtkColorSelection;
typedef struct _GtkColorSelectionPrivate GtkColorSelectionPrivate;
typedef struct _GtkColorSelectionClass GtkColorSelectionClass;
typedef void (* GtkColorSelectionChangePaletteFunc) (const GdkColor *colors,
gint n_colors);
typedef void (* GtkColorSelectionChangePaletteWithScreenFunc) (GdkScreen *screen,
const GdkColor *colors,
gint n_colors);
struct _GtkColorSelection
{
GtkBox parent_instance;
GtkColorSelectionPrivate *private_data;
};
struct _GtkColorSelectionClass
{
GtkBoxClass parent_class;
void (*color_changed) (GtkColorSelection *color_selection);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkColorSelectionDialog GtkColorSelectionDialog;
typedef struct _GtkColorSelectionDialogPrivate GtkColorSelectionDialogPrivate;
typedef struct _GtkColorSelectionDialogClass GtkColorSelectionDialogClass;
struct _GtkColorSelectionDialog
{
GtkDialog parent_instance;
GtkColorSelectionDialogPrivate *priv;
};
struct _GtkColorSelectionDialogClass
{
GtkDialogClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkFontSelection GtkFontSelection;
typedef struct _GtkFontSelectionPrivate GtkFontSelectionPrivate;
typedef struct _GtkFontSelectionClass GtkFontSelectionClass;
typedef struct _GtkFontSelectionDialog GtkFontSelectionDialog;
typedef struct _GtkFontSelectionDialogPrivate GtkFontSelectionDialogPrivate;
typedef struct _GtkFontSelectionDialogClass GtkFontSelectionDialogClass;
struct _GtkFontSelection
{
GtkBox parent_instance;
GtkFontSelectionPrivate *priv;
};
struct _GtkFontSelectionClass
{
GtkBoxClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkFontSelectionDialog
{
GtkDialog parent_instance;
GtkFontSelectionDialogPrivate *priv;
};
struct _GtkFontSelectionDialogClass
{
GtkDialogClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkHandleBox GtkHandleBox;
typedef struct _GtkHandleBoxPrivate GtkHandleBoxPrivate;
typedef struct _GtkHandleBoxClass GtkHandleBoxClass;
struct _GtkHandleBox
{
GtkBin bin;
GtkHandleBoxPrivate *priv;
};
struct _GtkHandleBoxClass
{
GtkBinClass parent_class;
void (*child_attached) (GtkHandleBox *handle_box,
GtkWidget *child);
void (*child_detached) (GtkHandleBox *handle_box,
GtkWidget *child);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkHButtonBox GtkHButtonBox;
typedef struct _GtkHButtonBoxClass GtkHButtonBoxClass;
struct _GtkHButtonBox
{
GtkButtonBox button_box;
};
struct _GtkHButtonBoxClass
{
GtkButtonBoxClass parent_class;
};
typedef struct _GtkHBox GtkHBox;
typedef struct _GtkHBoxClass GtkHBoxClass;
struct _GtkHBox
{
GtkBox box;
};
struct _GtkHBoxClass
{
GtkBoxClass parent_class;
};
typedef struct _GtkHPaned GtkHPaned;
typedef struct _GtkHPanedClass GtkHPanedClass;
struct _GtkHPaned
{
GtkPaned paned;
};
struct _GtkHPanedClass
{
GtkPanedClass parent_class;
};
typedef struct _GtkHSV GtkHSV;
typedef struct _GtkHSVPrivate GtkHSVPrivate;
typedef struct _GtkHSVClass GtkHSVClass;
struct _GtkHSV
{
GtkWidget parent_instance;
GtkHSVPrivate *priv;
};
struct _GtkHSVClass
{
GtkWidgetClass parent_class;
void (* changed) (GtkHSV *hsv);
void (* move) (GtkHSV *hsv,
GtkDirectionType type);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkHScale GtkHScale;
typedef struct _GtkHScaleClass GtkHScaleClass;
struct _GtkHScale
{
GtkScale scale;
};
struct _GtkHScaleClass
{
GtkScaleClass parent_class;
};
typedef struct _GtkHScrollbar GtkHScrollbar;
typedef struct _GtkHScrollbarClass GtkHScrollbarClass;
struct _GtkHScrollbar
{
GtkScrollbar scrollbar;
};
struct _GtkHScrollbarClass
{
GtkScrollbarClass parent_class;
};
typedef struct _GtkHSeparator GtkHSeparator;
typedef struct _GtkHSeparatorClass GtkHSeparatorClass;
struct _GtkHSeparator
{
GtkSeparator separator;
};
struct _GtkHSeparatorClass
{
GtkSeparatorClass parent_class;
};
typedef struct _GtkImageMenuItem GtkImageMenuItem;
typedef struct _GtkImageMenuItemPrivate GtkImageMenuItemPrivate;
typedef struct _GtkImageMenuItemClass GtkImageMenuItemClass;
struct _GtkImageMenuItem
{
GtkMenuItem menu_item;
GtkImageMenuItemPrivate *priv;
};
struct _GtkImageMenuItemClass
{
GtkMenuItemClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkNumerableIcon GtkNumerableIcon;
typedef struct _GtkNumerableIconClass GtkNumerableIconClass;
typedef struct _GtkNumerableIconPrivate GtkNumerableIconPrivate;
struct _GtkNumerableIcon {
GEmblemedIcon parent;
GtkNumerableIconPrivate *priv;
};
struct _GtkNumerableIconClass {
GEmblemedIconClass parent_class;
gpointer padding[16];
};
typedef struct _GtkToggleAction GtkToggleAction;
typedef struct _GtkToggleActionPrivate GtkToggleActionPrivate;
typedef struct _GtkToggleActionClass GtkToggleActionClass;
struct _GtkToggleAction
{
GtkAction parent;
GtkToggleActionPrivate *private_data;
};
struct _GtkToggleActionClass
{
GtkActionClass parent_class;
void (* toggled) (GtkToggleAction *action);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkRadioAction GtkRadioAction;
typedef struct _GtkRadioActionPrivate GtkRadioActionPrivate;
typedef struct _GtkRadioActionClass GtkRadioActionClass;
struct _GtkRadioAction
{
GtkToggleAction parent;
GtkRadioActionPrivate *private_data;
};
struct _GtkRadioActionClass
{
GtkToggleActionClass parent_class;
void (* changed) (GtkRadioAction *action, GtkRadioAction *current);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkRcContext GtkRcContext;
typedef struct _GtkRcStyleClass GtkRcStyleClass;
struct _GtkRcStyle
{
GObject parent_instance;
gchar *name;
gchar *bg_pixmap_name[5];
PangoFontDescription *font_desc;
GtkRcFlags color_flags[5];
GdkColor fg[5];
GdkColor bg[5];
GdkColor text[5];
GdkColor base[5];
gint xthickness;
gint ythickness;
GArray *rc_properties;
GSList *rc_style_lists;
GSList *icon_factories;
guint engine_specified : 1;
};
struct _GtkRcStyleClass
{
GObjectClass parent_class;
GtkRcStyle * (*create_rc_style) (GtkRcStyle *rc_style);
guint (*parse) (GtkRcStyle *rc_style,
GtkSettings *settings,
GScanner *scanner);
void (*merge) (GtkRcStyle *dest,
GtkRcStyle *src);
GtkStyle * (*create_style) (GtkRcStyle *rc_style);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkRcProperty
{
GQuark type_name;
GQuark property_name;
gchar *origin;
GValue value;
};
typedef struct _GtkRecentAction GtkRecentAction;
typedef struct _GtkRecentActionPrivate GtkRecentActionPrivate;
typedef struct _GtkRecentActionClass GtkRecentActionClass;
struct _GtkRecentAction
{
GtkAction parent_instance;
GtkRecentActionPrivate *priv;
};
struct _GtkRecentActionClass
{
GtkActionClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkStatusIcon GtkStatusIcon;
typedef struct _GtkStatusIconClass GtkStatusIconClass;
typedef struct _GtkStatusIconPrivate GtkStatusIconPrivate;
struct _GtkStatusIcon
{
GObject parent_instance;
GtkStatusIconPrivate *priv;
};
struct _GtkStatusIconClass
{
GObjectClass parent_class;
void (* activate) (GtkStatusIcon *status_icon);
void (* popup_menu) (GtkStatusIcon *status_icon,
guint button,
guint32 activate_time);
gboolean (* size_changed) (GtkStatusIcon *status_icon,
gint size);
gboolean (* button_press_event) (GtkStatusIcon *status_icon,
GdkEventButton *event);
gboolean (* button_release_event) (GtkStatusIcon *status_icon,
GdkEventButton *event);
gboolean (* scroll_event) (GtkStatusIcon *status_icon,
GdkEventScroll *event);
gboolean (* query_tooltip) (GtkStatusIcon *status_icon,
gint x,
gint y,
gboolean keyboard_mode,
GtkTooltip *tooltip);
void (*__gtk_reserved1) (void);
void (*__gtk_reserved2) (void);
void (*__gtk_reserved3) (void);
void (*__gtk_reserved4) (void);
};
typedef struct _GtkStyleClass GtkStyleClass;
typedef struct _GtkThemeEngine GtkThemeEngine;
typedef struct _GtkRcProperty GtkRcProperty;
struct _GtkStyle
{
GObject parent_instance;
GdkColor fg[5];
GdkColor bg[5];
GdkColor light[5];
GdkColor dark[5];
GdkColor mid[5];
GdkColor text[5];
GdkColor base[5];
GdkColor text_aa[5];
GdkColor black;
GdkColor white;
PangoFontDescription *font_desc;
gint xthickness;
gint ythickness;
cairo_pattern_t *background[5];
gint attach_count;
GdkVisual *visual;
PangoFontDescription *private_font_desc;
GtkRcStyle *rc_style;
GSList *styles;
GArray *property_cache;
GSList *icon_factories;
};
struct _GtkStyleClass
{
GObjectClass parent_class;
void (*realize) (GtkStyle *style);
void (*unrealize) (GtkStyle *style);
void (*copy) (GtkStyle *style,
GtkStyle *src);
GtkStyle *(*clone) (GtkStyle *style);
void (*init_from_rc) (GtkStyle *style,
GtkRcStyle *rc_style);
void (*set_background) (GtkStyle *style,
GdkWindow *window,
GtkStateType state_type);
GdkPixbuf * (* render_icon) (GtkStyle *style,
const GtkIconSource *source,
GtkTextDirection direction,
GtkStateType state,
GtkIconSize size,
GtkWidget *widget,
const gchar *detail);
void (*draw_hline) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkWidget *widget,
const gchar *detail,
gint x1,
gint x2,
gint y);
void (*draw_vline) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkWidget *widget,
const gchar *detail,
gint y1_,
gint y2_,
gint x);
void (*draw_shadow) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_arrow) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
GtkArrowType arrow_type,
gboolean fill,
gint x,
gint y,
gint width,
gint height);
void (*draw_diamond) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_box) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_flat_box) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_check) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_option) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_tab) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_shadow_gap) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height,
GtkPositionType gap_side,
gint gap_x,
gint gap_width);
void (*draw_box_gap) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height,
GtkPositionType gap_side,
gint gap_x,
gint gap_width);
void (*draw_extension) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height,
GtkPositionType gap_side);
void (*draw_focus) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height);
void (*draw_slider) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height,
GtkOrientation orientation);
void (*draw_handle) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkShadowType shadow_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
gint width,
gint height,
GtkOrientation orientation);
void (*draw_expander) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
GtkExpanderStyle expander_style);
void (*draw_layout) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
gboolean use_text,
GtkWidget *widget,
const gchar *detail,
gint x,
gint y,
PangoLayout *layout);
void (*draw_resize_grip) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkWidget *widget,
const gchar *detail,
GdkWindowEdge edge,
gint x,
gint y,
gint width,
gint height);
void (*draw_spinner) (GtkStyle *style,
cairo_t *cr,
GtkStateType state_type,
GtkWidget *widget,
const gchar *detail,
guint step,
gint x,
gint y,
gint width,
gint height);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
void (*_gtk_reserved5) (void);
void (*_gtk_reserved6) (void);
void (*_gtk_reserved7) (void);
void (*_gtk_reserved8) (void);
void (*_gtk_reserved9) (void);
void (*_gtk_reserved10) (void);
void (*_gtk_reserved11) (void);
};
typedef struct _GtkTable GtkTable;
typedef struct _GtkTablePrivate GtkTablePrivate;
typedef struct _GtkTableClass GtkTableClass;
typedef struct _GtkTableChild GtkTableChild;
typedef struct _GtkTableRowCol GtkTableRowCol;
struct _GtkTable
{
GtkContainer container;
GtkTablePrivate *priv;
};
struct _GtkTableClass
{
GtkContainerClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
struct _GtkTableChild
{
GtkWidget *widget;
guint16 left_attach;
guint16 right_attach;
guint16 top_attach;
guint16 bottom_attach;
guint16 xpadding;
guint16 ypadding;
guint xexpand : 1;
guint yexpand : 1;
guint xshrink : 1;
guint yshrink : 1;
guint xfill : 1;
guint yfill : 1;
};
struct _GtkTableRowCol
{
guint16 requisition;
guint16 allocation;
guint16 spacing;
guint need_expand : 1;
guint need_shrink : 1;
guint expand : 1;
guint shrink : 1;
guint empty : 1;
};
typedef struct _GtkTearoffMenuItem GtkTearoffMenuItem;
typedef struct _GtkTearoffMenuItemPrivate GtkTearoffMenuItemPrivate;
typedef struct _GtkTearoffMenuItemClass GtkTearoffMenuItemClass;
struct _GtkTearoffMenuItem
{
GtkMenuItem menu_item;
GtkTearoffMenuItemPrivate *priv;
};
struct _GtkTearoffMenuItemClass
{
GtkMenuItemClass parent_class;
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkThemingEngine GtkThemingEngine;
typedef struct GtkThemingEnginePrivate GtkThemingEnginePrivate;
typedef struct _GtkThemingEngineClass GtkThemingEngineClass;
struct _GtkThemingEngine
{
GObject parent_object;
GtkThemingEnginePrivate *priv;
};
struct _GtkThemingEngineClass
{
GObjectClass parent_class;
void (* render_line) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x0,
gdouble y0,
gdouble x1,
gdouble y1);
void (* render_background) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
void (* render_frame) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
void (* render_frame_gap) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height,
GtkPositionType gap_side,
gdouble xy0_gap,
gdouble xy1_gap);
void (* render_extension) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height,
GtkPositionType gap_side);
void (* render_check) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
void (* render_option) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
void (* render_arrow) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble angle,
gdouble x,
gdouble y,
gdouble size);
void (* render_expander) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
void (* render_focus) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
void (* render_layout) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
PangoLayout *layout);
void (* render_slider) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height,
GtkOrientation orientation);
void (* render_handle) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
void (* render_activity) (GtkThemingEngine *engine,
cairo_t *cr,
gdouble x,
gdouble y,
gdouble width,
gdouble height);
GdkPixbuf * (* render_icon_pixbuf) (GtkThemingEngine *engine,
const GtkIconSource *source,
GtkIconSize size);
void (* render_icon) (GtkThemingEngine *engine,
cairo_t *cr,
GdkPixbuf *pixbuf,
gdouble x,
gdouble y);
void (* render_icon_surface) (GtkThemingEngine *engine,
cairo_t *cr,
cairo_surface_t *surface,
gdouble x,
gdouble y);
gpointer padding[14];
};
typedef struct _GtkUIManager GtkUIManager;
typedef struct _GtkUIManagerClass GtkUIManagerClass;
typedef struct _GtkUIManagerPrivate GtkUIManagerPrivate;
struct _GtkUIManager {
GObject parent;
GtkUIManagerPrivate *private_data;
};
struct _GtkUIManagerClass {
GObjectClass parent_class;
void (* add_widget) (GtkUIManager *manager,
GtkWidget *widget);
void (* actions_changed) (GtkUIManager *manager);
void (* connect_proxy) (GtkUIManager *manager,
GtkAction *action,
GtkWidget *proxy);
void (* disconnect_proxy) (GtkUIManager *manager,
GtkAction *action,
GtkWidget *proxy);
void (* pre_activate) (GtkUIManager *manager,
GtkAction *action);
void (* post_activate) (GtkUIManager *manager,
GtkAction *action);
GtkWidget * (* get_widget) (GtkUIManager *manager,
const gchar *path);
GtkAction * (* get_action) (GtkUIManager *manager,
const gchar *path);
void (*_gtk_reserved1) (void);
void (*_gtk_reserved2) (void);
void (*_gtk_reserved3) (void);
void (*_gtk_reserved4) (void);
};
typedef struct _GtkVButtonBox GtkVButtonBox;
typedef struct _GtkVButtonBoxClass GtkVButtonBoxClass;
struct _GtkVButtonBox
{
GtkButtonBox button_box;
};
struct _GtkVButtonBoxClass
{
GtkButtonBoxClass parent_class;
};
typedef struct _GtkVBox GtkVBox;
typedef struct _GtkVBoxClass GtkVBoxClass;
struct _GtkVBox
{
GtkBox box;
};
struct _GtkVBoxClass
{
GtkBoxClass parent_class;
};
typedef struct _GtkVPaned GtkVPaned;
typedef struct _GtkVPanedClass GtkVPanedClass;
struct _GtkVPaned
{
GtkPaned paned;
};
struct _GtkVPanedClass
{
GtkPanedClass parent_class;
};
typedef struct _GtkVScale GtkVScale;
typedef struct _GtkVScaleClass GtkVScaleClass;
struct _GtkVScale
{
GtkScale scale;
};
struct _GtkVScaleClass
{
GtkScaleClass parent_class;
};
typedef struct _GtkVScrollbar GtkVScrollbar;
typedef struct _GtkVScrollbarClass GtkVScrollbarClass;
struct _GtkVScrollbar
{
GtkScrollbar scrollbar;
};
struct _GtkVScrollbarClass
{
GtkScrollbarClass parent_class;
};
typedef struct _GtkVSeparator GtkVSeparator;
typedef struct _GtkVSeparatorClass GtkVSeparatorClass;
typedef struct _GtkBoxLayout GtkBoxLayout;
typedef struct _GtkBuilderScope GtkBuilderScope;
typedef struct _GtkBuilderCScope GtkBuilderCScope;
typedef struct _GtkBuilderCScope GtkBuilderCScope;
typedef struct _GtkBuilderListItemFactory GtkBuilderListItemFactory;
typedef struct _GtkListItemFactory GtkListItemFactory;
typedef struct _GtkShortcutAction GtkShortcutAction;
typedef struct _GtkSnapshot GtkSnapshot;
typedef struct _GdkTexture GdkTexture;
typedef struct _GtkCenterBox GtkCenterBox;
typedef struct _GtkCenterLayout GtkCenterLayout;
typedef struct _GtkSelectionModel GtkSelectionModel;
typedef struct _GtkColumnView GtkColumnView;
typedef struct _GtkConstraint GtkConstraint;
typedef struct _GtkConstraintTarget GtkConstraintTarget;
typedef struct _GtkColumnViewColumn GtkColumnViewColumn;
typedef struct _GtkConstraintGuide GtkConstraintGuide;
typedef struct _GtkSorter GtkSorter;
typedef struct _GtkConstraintLayout GtkConstraintLayout;
typedef struct _GtkCustomFilter GtkCustomFilter;
typedef struct _GtkCustomSorter GtkCustomSorter;
typedef struct _GtkDirectoryList GtkDirectoryList;
typedef struct _GtkDragIcon GtkDragIcon;
typedef struct _GtkDragSource GtkDragSource;
typedef struct _GdkContentProvider GdkContentProvider;
typedef struct _GdkDrag GdkDrag;
typedef struct _GdkDrop GdkDrop;
typedef struct _GtkDropDown GtkDropDown;
typedef struct _GtkDropTarget GtkDropTarget;
typedef struct _GdkContentFormats GdkContentFormats;
typedef struct _GtkDropControllerMotion GtkDropControllerMotion;
typedef struct _GtkDropTargetAsync GtkDropTargetAsync;
typedef struct _GtkEditableLabel GtkEditableLabel;
typedef struct _GdkScrollUnit GdkScrollUnit;
typedef struct _GtkEventControllerFocus GtkEventControllerFocus;
typedef struct _GtkEveryFilter GtkEveryFilter;
typedef struct _GtkFilter GtkFilter;
typedef struct _GtkFilterListModel GtkFilterListModel;
typedef struct _GskTransform GskTransform;
typedef struct _GtkFixedLayoutChild GtkFixedLayoutChild;
typedef struct _GtkFlattenListModel GtkFlattenListModel;
typedef struct _GtkExpressionWatch GtkExpressionWatch;
typedef struct _GtkMnemonicTrigger GtkMnemonicTrigger;
typedef struct _GtkMultiFilter GtkMultiFilter;
typedef struct _GtkMultiSelection GtkMultiSelection;
typedef struct _GtkMultiSorter GtkMultiSorter;
typedef struct _GtkNamedAction GtkNamedAction;
typedef struct _GtkNoSelection GtkNoSelection;
typedef struct _GtkNotebookPage GtkNotebookPage;
typedef struct _GtkNumericSorter GtkNumericSorter;
typedef struct _GtkOverlayLayoutChild GtkOverlayLayoutChild;
typedef struct _GtkPageSetupUnixDialog GtkPageSetupUnixDialog;
typedef struct _GtkPasswordEntry GtkPasswordEntry;
typedef struct _GtkPicture GtkPicture;
typedef struct _GtkPopoverMenuBar GtkPopoverMenuBar;
typedef struct _GtkPrintJob GtkPrintJob;
typedef struct _GtkPrinter GtkPrinter;
typedef struct _GtkPrintUnixDialog GtkPrintUnixDialog;
typedef struct _GtkPrintBackend GtkPrintBackend;
typedef struct _GtkSelectionFilterModel GtkSelectionFilterModel;
typedef struct _GtkShortcut GtkShortcut;
typedef struct _GtkShortcutController GtkShortcutController;
typedef struct _GtkShortcutScope GtkShortcutScope;
typedef struct _GdkKeyMatch GdkKeyMatch;
typedef struct _GtkSignalAction GtkSignalAction;
typedef struct _GtkSingleSelection GtkSingleSelection;
typedef struct _GtkSliceListModel GtkSliceListModel;
typedef struct _graphene_rect_t graphene_rect_t;
typedef struct _graphene_point_t graphene_point_t;
typedef struct _GskColorStop GskColorStop;
typedef struct _GskRoundedRect GskRoundedRect;
typedef struct _GskRenderNode GskRenderNode;
typedef struct _graphene_size_t graphene_size_t;
typedef struct _GskBlendMode GskBlendMode;
typedef struct _graphene_matrix_t graphene_matrix_t;
typedef struct _graphene_vec4_t graphene_vec4_t;
typedef struct _GskGLShader GskGLShader;
typedef struct _GskShadow GskShadow;
typedef struct _graphene_vec3_t graphene_vec3_t;
typedef struct _graphene_point3d_t graphene_point3d_t;
typedef struct _GtkSortListModel GtkSortListModel;
typedef struct _GtkStackPage GtkStackPage;
typedef struct _GtkStringFilter GtkStringFilter;
typedef struct _GtkStringList GtkStringList;
typedef struct _GtkStringObject GtkStringObject;
typedef struct _GtkStringSorter GtkStringSorter;
typedef struct _GtkText GtkText;
typedef struct _GdkClipboard GdkClipboard;
typedef struct _GtkTreeExpander GtkTreeExpander;
typedef struct _GtkTreeListRow GtkTreeListRow;
typedef struct _GtkTreeListModel GtkTreeListModel;
typedef struct _GtkTreeListRowSorter GtkTreeListRowSorter;
typedef struct _GtkVideo GtkVideo;
typedef struct _GtkNative GtkNative;
typedef struct _GtkOverflow GtkOverflow;
typedef struct _GtkRoot GtkRoot;
typedef struct _GtkCssStyleChange GtkCssStyleChange;
typedef struct _GtkSystemSetting GtkSystemSetting;
typedef struct _GtkWidgetPaintable GtkWidgetPaintable;
typedef struct _GtkWindowControls GtkWindowControls;
typedef struct _GtkWindowHandle GtkWindowHandle;
typedef void (* GtkWidgetActionActivateFunc) (GtkWidget* widget,const char* action_name,GVariant* parameter);
typedef GListModel* (* GtkTreeListModelCreateModelFunc) (GObject* item,gpointer user_data);
typedef char* (* GtkScaleFormatValueFunc) (GtkScale* scale,double value,gpointer user_data);
typedef void (* GtkPrintJobCompleteFunc) (GtkPrintJob* print_job,gpointer user_data,const GError* error);
typedef void (* GtkCustomAllocateFunc) (GtkWidget* widget,int width,int height,int baseline);
typedef void (* GtkExpressionNotify) (gpointer user_data);
typedef void (* GtkDrawingAreaDrawFunc) (GtkDrawingArea* drawing_area,cairo_t* cr,int width,int height,gpointer user_data);
typedef GtkSizeRequestMode (* GtkCustomRequestModeFunc) (GtkWidget* widget);
typedef void (* GtkCustomMeasureFunc) (GtkWidget* widget,GtkOrientation orientation,int for_size,int* minimum,int* natural,int* minimum_baseline,int* natural_baseline);
typedef gboolean (* GtkCustomFilterFunc) (GObject* item,gpointer user_data);
typedef gboolean (*GtkShortcutFunc) (GtkWidget* widget, GVariant* args, gpointer user_data);
typedef GObject* (* GtkMapListModelMapFunc) (GObject* item,gpointer user_data);
typedef void (* GtkMenuButtonCreatePopupFunc) (GtkMenuButton* menu_button,gpointer user_data);
struct _GtkVSeparator
{
GtkSeparator separator;
};
struct _GtkVSeparatorClass
{
GtkSeparatorClass parent_class;
};
typedef GtkAccessible *GtkAccessible_autoptr; typedef GList *GtkAccessible_listautoptr; typedef GSList *GtkAccessible_slistautoptr; typedef GQueue *GtkAccessible_queueautoptr;
typedef GtkActionBar *GtkActionBar_autoptr; typedef GList *GtkActionBar_listautoptr; typedef GSList *GtkActionBar_slistautoptr; typedef GQueue *GtkActionBar_queueautoptr;
typedef GtkActionable *GtkActionable_autoptr; typedef GList *GtkActionable_listautoptr; typedef GSList *GtkActionable_slistautoptr; typedef GQueue *GtkActionable_queueautoptr;
typedef GtkAdjustment *GtkAdjustment_autoptr; typedef GList *GtkAdjustment_listautoptr; typedef GSList *GtkAdjustment_slistautoptr; typedef GQueue *GtkAdjustment_queueautoptr;
typedef GtkAppChooser *GtkAppChooser_autoptr; typedef GList *GtkAppChooser_listautoptr; typedef GSList *GtkAppChooser_slistautoptr; typedef GQueue *GtkAppChooser_queueautoptr;
typedef GtkAppChooserButton *GtkAppChooserButton_autoptr; typedef GList *GtkAppChooserButton_listautoptr; typedef GSList *GtkAppChooserButton_slistautoptr; typedef GQueue *GtkAppChooserButton_queueautoptr;
typedef GtkAppChooserDialog *GtkAppChooserDialog_autoptr; typedef GList *GtkAppChooserDialog_listautoptr; typedef GSList *GtkAppChooserDialog_slistautoptr; typedef GQueue *GtkAppChooserDialog_queueautoptr;
typedef GtkAppChooserWidget *GtkAppChooserWidget_autoptr; typedef GList *GtkAppChooserWidget_listautoptr; typedef GSList *GtkAppChooserWidget_slistautoptr; typedef GQueue *GtkAppChooserWidget_queueautoptr;
typedef GtkApplicationWindow *GtkApplicationWindow_autoptr; typedef GList *GtkApplicationWindow_listautoptr; typedef GSList *GtkApplicationWindow_slistautoptr; typedef GQueue *GtkApplicationWindow_queueautoptr;
typedef GtkAspectFrame *GtkAspectFrame_autoptr; typedef GList *GtkAspectFrame_listautoptr; typedef GSList *GtkAspectFrame_slistautoptr; typedef GQueue *GtkAspectFrame_queueautoptr;
typedef GtkAssistant *GtkAssistant_autoptr; typedef GList *GtkAssistant_listautoptr; typedef GSList *GtkAssistant_slistautoptr; typedef GQueue *GtkAssistant_queueautoptr;
typedef GtkBox *GtkBox_autoptr; typedef GList *GtkBox_listautoptr; typedef GSList *GtkBox_slistautoptr; typedef GQueue *GtkBox_queueautoptr;
typedef GtkBuildable *GtkBuildable_autoptr; typedef GList *GtkBuildable_listautoptr; typedef GSList *GtkBuildable_slistautoptr; typedef GQueue *GtkBuildable_queueautoptr;
typedef GtkBuilder *GtkBuilder_autoptr; typedef GList *GtkBuilder_listautoptr; typedef GSList *GtkBuilder_slistautoptr; typedef GQueue *GtkBuilder_queueautoptr;
typedef GtkButton *GtkButton_autoptr; typedef GList *GtkButton_listautoptr; typedef GSList *GtkButton_slistautoptr; typedef GQueue *GtkButton_queueautoptr;
typedef GtkButtonBox *GtkButtonBox_autoptr; typedef GList *GtkButtonBox_listautoptr; typedef GSList *GtkButtonBox_slistautoptr; typedef GQueue *GtkButtonBox_queueautoptr;
typedef GtkCalendar *GtkCalendar_autoptr; typedef GList *GtkCalendar_listautoptr; typedef GSList *GtkCalendar_slistautoptr; typedef GQueue *GtkCalendar_queueautoptr;
typedef GtkCellArea *GtkCellArea_autoptr; typedef GList *GtkCellArea_listautoptr; typedef GSList *GtkCellArea_slistautoptr; typedef GQueue *GtkCellArea_queueautoptr;
typedef GtkCellAreaBox *GtkCellAreaBox_autoptr; typedef GList *GtkCellAreaBox_listautoptr; typedef GSList *GtkCellAreaBox_slistautoptr; typedef GQueue *GtkCellAreaBox_queueautoptr;
typedef GtkCellAreaContext *GtkCellAreaContext_autoptr; typedef GList *GtkCellAreaContext_listautoptr; typedef GSList *GtkCellAreaContext_slistautoptr; typedef GQueue *GtkCellAreaContext_queueautoptr;
typedef GtkCellEditable *GtkCellEditable_autoptr; typedef GList *GtkCellEditable_listautoptr; typedef GSList *GtkCellEditable_slistautoptr; typedef GQueue *GtkCellEditable_queueautoptr;
typedef GtkCellLayout *GtkCellLayout_autoptr; typedef GList *GtkCellLayout_listautoptr; typedef GSList *GtkCellLayout_slistautoptr; typedef GQueue *GtkCellLayout_queueautoptr;
typedef GtkCellRenderer *GtkCellRenderer_autoptr; typedef GList *GtkCellRenderer_listautoptr; typedef GSList *GtkCellRenderer_slistautoptr; typedef GQueue *GtkCellRenderer_queueautoptr;
typedef GtkCellRendererAccel *GtkCellRendererAccel_autoptr; typedef GList *GtkCellRendererAccel_listautoptr; typedef GSList *GtkCellRendererAccel_slistautoptr; typedef GQueue *GtkCellRendererAccel_queueautoptr;
typedef GtkCellRendererCombo *GtkCellRendererCombo_autoptr; typedef GList *GtkCellRendererCombo_listautoptr; typedef GSList *GtkCellRendererCombo_slistautoptr; typedef GQueue *GtkCellRendererCombo_queueautoptr;
typedef GtkCellRendererPixbuf *GtkCellRendererPixbuf_autoptr; typedef GList *GtkCellRendererPixbuf_listautoptr; typedef GSList *GtkCellRendererPixbuf_slistautoptr; typedef GQueue *GtkCellRendererPixbuf_queueautoptr;
typedef GtkCellRendererProgress *GtkCellRendererProgress_autoptr; typedef GList *GtkCellRendererProgress_listautoptr; typedef GSList *GtkCellRendererProgress_slistautoptr; typedef GQueue *GtkCellRendererProgress_queueautoptr;
typedef GtkCellRendererSpin *GtkCellRendererSpin_autoptr; typedef GList *GtkCellRendererSpin_listautoptr; typedef GSList *GtkCellRendererSpin_slistautoptr; typedef GQueue *GtkCellRendererSpin_queueautoptr;
typedef GtkCellRendererSpinner *GtkCellRendererSpinner_autoptr; typedef GList *GtkCellRendererSpinner_listautoptr; typedef GSList *GtkCellRendererSpinner_slistautoptr; typedef GQueue *GtkCellRendererSpinner_queueautoptr;
typedef GtkCellRendererText *GtkCellRendererText_autoptr; typedef GList *GtkCellRendererText_listautoptr; typedef GSList *GtkCellRendererText_slistautoptr; typedef GQueue *GtkCellRendererText_queueautoptr;
typedef GtkCellRendererToggle *GtkCellRendererToggle_autoptr; typedef GList *GtkCellRendererToggle_listautoptr; typedef GSList *GtkCellRendererToggle_slistautoptr; typedef GQueue *GtkCellRendererToggle_queueautoptr;
typedef GtkCellView *GtkCellView_autoptr; typedef GList *GtkCellView_listautoptr; typedef GSList *GtkCellView_slistautoptr; typedef GQueue *GtkCellView_queueautoptr;
typedef GtkCheckButton *GtkCheckButton_autoptr; typedef GList *GtkCheckButton_listautoptr; typedef GSList *GtkCheckButton_slistautoptr; typedef GQueue *GtkCheckButton_queueautoptr;
typedef GtkCheckMenuItem *GtkCheckMenuItem_autoptr; typedef GList *GtkCheckMenuItem_listautoptr; typedef GSList *GtkCheckMenuItem_slistautoptr; typedef GQueue *GtkCheckMenuItem_queueautoptr;
typedef GtkClipboard *GtkClipboard_autoptr; typedef GList *GtkClipboard_listautoptr; typedef GSList *GtkClipboard_slistautoptr; typedef GQueue *GtkClipboard_queueautoptr;
typedef GtkColorButton *GtkColorButton_autoptr; typedef GList *GtkColorButton_listautoptr; typedef GSList *GtkColorButton_slistautoptr; typedef GQueue *GtkColorButton_queueautoptr;
typedef GtkColorChooser *GtkColorChooser_autoptr; typedef GList *GtkColorChooser_listautoptr; typedef GSList *GtkColorChooser_slistautoptr; typedef GQueue *GtkColorChooser_queueautoptr;
typedef GtkColorChooserDialog *GtkColorChooserDialog_autoptr; typedef GList *GtkColorChooserDialog_listautoptr; typedef GSList *GtkColorChooserDialog_slistautoptr; typedef GQueue *GtkColorChooserDialog_queueautoptr;
typedef GtkColorChooserWidget *GtkColorChooserWidget_autoptr; typedef GList *GtkColorChooserWidget_listautoptr; typedef GSList *GtkColorChooserWidget_slistautoptr; typedef GQueue *GtkColorChooserWidget_queueautoptr;
typedef GtkComboBox *GtkComboBox_autoptr; typedef GList *GtkComboBox_listautoptr; typedef GSList *GtkComboBox_slistautoptr; typedef GQueue *GtkComboBox_queueautoptr;
typedef GtkComboBoxText *GtkComboBoxText_autoptr; typedef GList *GtkComboBoxText_listautoptr; typedef GSList *GtkComboBoxText_slistautoptr; typedef GQueue *GtkComboBoxText_queueautoptr;
typedef GtkCssProvider *GtkCssProvider_autoptr; typedef GList *GtkCssProvider_listautoptr; typedef GSList *GtkCssProvider_slistautoptr; typedef GQueue *GtkCssProvider_queueautoptr;
typedef GtkDrawingArea *GtkDrawingArea_autoptr; typedef GList *GtkDrawingArea_listautoptr; typedef GSList *GtkDrawingArea_slistautoptr; typedef GQueue *GtkDrawingArea_queueautoptr;
typedef GtkEditable *GtkEditable_autoptr; typedef GList *GtkEditable_listautoptr; typedef GSList *GtkEditable_slistautoptr; typedef GQueue *GtkEditable_queueautoptr;
typedef GtkEntry *GtkEntry_autoptr; typedef GList *GtkEntry_listautoptr; typedef GSList *GtkEntry_slistautoptr; typedef GQueue *GtkEntry_queueautoptr;
typedef GtkEntryBuffer *GtkEntryBuffer_autoptr; typedef GList *GtkEntryBuffer_listautoptr; typedef GSList *GtkEntryBuffer_slistautoptr; typedef GQueue *GtkEntryBuffer_queueautoptr;
typedef GtkEntryCompletion *GtkEntryCompletion_autoptr; typedef GList *GtkEntryCompletion_listautoptr; typedef GSList *GtkEntryCompletion_slistautoptr; typedef GQueue *GtkEntryCompletion_queueautoptr;
typedef GtkEventBox *GtkEventBox_autoptr; typedef GList *GtkEventBox_listautoptr; typedef GSList *GtkEventBox_slistautoptr; typedef GQueue *GtkEventBox_queueautoptr;
typedef GtkEventController *GtkEventController_autoptr; typedef GList *GtkEventController_listautoptr; typedef GSList *GtkEventController_slistautoptr; typedef GQueue *GtkEventController_queueautoptr;
typedef GtkExpander *GtkExpander_autoptr; typedef GList *GtkExpander_listautoptr; typedef GSList *GtkExpander_slistautoptr; typedef GQueue *GtkExpander_queueautoptr;
typedef GtkFileChooserButton *GtkFileChooserButton_autoptr; typedef GList *GtkFileChooserButton_listautoptr; typedef GSList *GtkFileChooserButton_slistautoptr; typedef GQueue *GtkFileChooserButton_queueautoptr;
typedef GtkFileChooserDialog *GtkFileChooserDialog_autoptr; typedef GList *GtkFileChooserDialog_listautoptr; typedef GSList *GtkFileChooserDialog_slistautoptr; typedef GQueue *GtkFileChooserDialog_queueautoptr;
typedef GtkFileChooserWidget *GtkFileChooserWidget_autoptr; typedef GList *GtkFileChooserWidget_listautoptr; typedef GSList *GtkFileChooserWidget_slistautoptr; typedef GQueue *GtkFileChooserWidget_queueautoptr;
typedef GtkFileFilter *GtkFileFilter_autoptr; typedef GList *GtkFileFilter_listautoptr; typedef GSList *GtkFileFilter_slistautoptr; typedef GQueue *GtkFileFilter_queueautoptr;
typedef GtkFixed *GtkFixed_autoptr; typedef GList *GtkFixed_listautoptr; typedef GSList *GtkFixed_slistautoptr; typedef GQueue *GtkFixed_queueautoptr;
typedef GtkFlowBox *GtkFlowBox_autoptr; typedef GList *GtkFlowBox_listautoptr; typedef GSList *GtkFlowBox_slistautoptr; typedef GQueue *GtkFlowBox_queueautoptr;
typedef GtkFlowBoxChild *GtkFlowBoxChild_autoptr; typedef GList *GtkFlowBoxChild_listautoptr; typedef GSList *GtkFlowBoxChild_slistautoptr; typedef GQueue *GtkFlowBoxChild_queueautoptr;
typedef GtkFontButton *GtkFontButton_autoptr; typedef GList *GtkFontButton_listautoptr; typedef GSList *GtkFontButton_slistautoptr; typedef GQueue *GtkFontButton_queueautoptr;
typedef GtkFontChooser *GtkFontChooser_autoptr; typedef GList *GtkFontChooser_listautoptr; typedef GSList *GtkFontChooser_slistautoptr; typedef GQueue *GtkFontChooser_queueautoptr;
typedef GtkFontChooserDialog *GtkFontChooserDialog_autoptr; typedef GList *GtkFontChooserDialog_listautoptr; typedef GSList *GtkFontChooserDialog_slistautoptr; typedef GQueue *GtkFontChooserDialog_queueautoptr;
typedef GtkFontChooserWidget *GtkFontChooserWidget_autoptr; typedef GList *GtkFontChooserWidget_listautoptr; typedef GSList *GtkFontChooserWidget_slistautoptr; typedef GQueue *GtkFontChooserWidget_queueautoptr;
typedef GtkFrame *GtkFrame_autoptr; typedef GList *GtkFrame_listautoptr; typedef GSList *GtkFrame_slistautoptr; typedef GQueue *GtkFrame_queueautoptr;
typedef GtkGLArea *GtkGLArea_autoptr; typedef GList *GtkGLArea_listautoptr; typedef GSList *GtkGLArea_slistautoptr; typedef GQueue *GtkGLArea_queueautoptr;
typedef GtkGesture *GtkGesture_autoptr; typedef GList *GtkGesture_listautoptr; typedef GSList *GtkGesture_slistautoptr; typedef GQueue *GtkGesture_queueautoptr;
typedef GtkGestureDrag *GtkGestureDrag_autoptr; typedef GList *GtkGestureDrag_listautoptr; typedef GSList *GtkGestureDrag_slistautoptr; typedef GQueue *GtkGestureDrag_queueautoptr;
typedef GtkGestureLongPress *GtkGestureLongPress_autoptr; typedef GList *GtkGestureLongPress_listautoptr; typedef GSList *GtkGestureLongPress_slistautoptr; typedef GQueue *GtkGestureLongPress_queueautoptr;
typedef GtkGestureMultiPress *GtkGestureMultiPress_autoptr; typedef GList *GtkGestureMultiPress_listautoptr; typedef GSList *GtkGestureMultiPress_slistautoptr; typedef GQueue *GtkGestureMultiPress_queueautoptr;
typedef GtkGesturePan *GtkGesturePan_autoptr; typedef GList *GtkGesturePan_listautoptr; typedef GSList *GtkGesturePan_slistautoptr; typedef GQueue *GtkGesturePan_queueautoptr;
typedef GtkGestureRotate *GtkGestureRotate_autoptr; typedef GList *GtkGestureRotate_listautoptr; typedef GSList *GtkGestureRotate_slistautoptr; typedef GQueue *GtkGestureRotate_queueautoptr;
typedef GtkGestureSingle *GtkGestureSingle_autoptr; typedef GList *GtkGestureSingle_listautoptr; typedef GSList *GtkGestureSingle_slistautoptr; typedef GQueue *GtkGestureSingle_queueautoptr;
typedef GtkGestureSwipe *GtkGestureSwipe_autoptr; typedef GList *GtkGestureSwipe_listautoptr; typedef GSList *GtkGestureSwipe_slistautoptr; typedef GQueue *GtkGestureSwipe_queueautoptr;
typedef GtkGestureZoom *GtkGestureZoom_autoptr; typedef GList *GtkGestureZoom_listautoptr; typedef GSList *GtkGestureZoom_slistautoptr; typedef GQueue *GtkGestureZoom_queueautoptr;
typedef GtkGrid *GtkGrid_autoptr; typedef GList *GtkGrid_listautoptr; typedef GSList *GtkGrid_slistautoptr; typedef GQueue *GtkGrid_queueautoptr;
typedef GtkHeaderBar *GtkHeaderBar_autoptr; typedef GList *GtkHeaderBar_listautoptr; typedef GSList *GtkHeaderBar_slistautoptr; typedef GQueue *GtkHeaderBar_queueautoptr;
typedef GtkIMContext *GtkIMContext_autoptr; typedef GList *GtkIMContext_listautoptr; typedef GSList *GtkIMContext_slistautoptr; typedef GQueue *GtkIMContext_queueautoptr;
typedef GtkIMContextSimple *GtkIMContextSimple_autoptr; typedef GList *GtkIMContextSimple_listautoptr; typedef GSList *GtkIMContextSimple_slistautoptr; typedef GQueue *GtkIMContextSimple_queueautoptr;
typedef GtkIMMulticontext *GtkIMMulticontext_autoptr; typedef GList *GtkIMMulticontext_listautoptr; typedef GSList *GtkIMMulticontext_slistautoptr; typedef GQueue *GtkIMMulticontext_queueautoptr;
typedef GtkIconInfo *GtkIconInfo_autoptr; typedef GList *GtkIconInfo_listautoptr; typedef GSList *GtkIconInfo_slistautoptr; typedef GQueue *GtkIconInfo_queueautoptr;
typedef GtkIconTheme *GtkIconTheme_autoptr; typedef GList *GtkIconTheme_listautoptr; typedef GSList *GtkIconTheme_slistautoptr; typedef GQueue *GtkIconTheme_queueautoptr;
typedef GtkIconView *GtkIconView_autoptr; typedef GList *GtkIconView_listautoptr; typedef GSList *GtkIconView_slistautoptr; typedef GQueue *GtkIconView_queueautoptr;
typedef GtkImage *GtkImage_autoptr; typedef GList *GtkImage_listautoptr; typedef GSList *GtkImage_slistautoptr; typedef GQueue *GtkImage_queueautoptr;
typedef GtkInfoBar *GtkInfoBar_autoptr; typedef GList *GtkInfoBar_listautoptr; typedef GSList *GtkInfoBar_slistautoptr; typedef GQueue *GtkInfoBar_queueautoptr;
typedef GtkInvisible *GtkInvisible_autoptr; typedef GList *GtkInvisible_listautoptr; typedef GSList *GtkInvisible_slistautoptr; typedef GQueue *GtkInvisible_queueautoptr;
typedef GtkLayout *GtkLayout_autoptr; typedef GList *GtkLayout_listautoptr; typedef GSList *GtkLayout_slistautoptr; typedef GQueue *GtkLayout_queueautoptr;
typedef GtkLevelBar *GtkLevelBar_autoptr; typedef GList *GtkLevelBar_listautoptr; typedef GSList *GtkLevelBar_slistautoptr; typedef GQueue *GtkLevelBar_queueautoptr;
typedef GtkLinkButton *GtkLinkButton_autoptr; typedef GList *GtkLinkButton_listautoptr; typedef GSList *GtkLinkButton_slistautoptr; typedef GQueue *GtkLinkButton_queueautoptr;
typedef GtkListStore *GtkListStore_autoptr; typedef GList *GtkListStore_listautoptr; typedef GSList *GtkListStore_slistautoptr; typedef GQueue *GtkListStore_queueautoptr;
typedef GtkLockButton *GtkLockButton_autoptr; typedef GList *GtkLockButton_listautoptr; typedef GSList *GtkLockButton_slistautoptr; typedef GQueue *GtkLockButton_queueautoptr;
typedef GtkMenuBar *GtkMenuBar_autoptr; typedef GList *GtkMenuBar_listautoptr; typedef GSList *GtkMenuBar_slistautoptr; typedef GQueue *GtkMenuBar_queueautoptr;
typedef GtkMenuButton *GtkMenuButton_autoptr; typedef GList *GtkMenuButton_listautoptr; typedef GSList *GtkMenuButton_slistautoptr; typedef GQueue *GtkMenuButton_queueautoptr;
typedef GtkMenuItem *GtkMenuItem_autoptr; typedef GList *GtkMenuItem_listautoptr; typedef GSList *GtkMenuItem_slistautoptr; typedef GQueue *GtkMenuItem_queueautoptr;
typedef GtkMenuToolButton *GtkMenuToolButton_autoptr; typedef GList *GtkMenuToolButton_listautoptr; typedef GSList *GtkMenuToolButton_slistautoptr; typedef GQueue *GtkMenuToolButton_queueautoptr;
typedef GtkMessageDialog *GtkMessageDialog_autoptr; typedef GList *GtkMessageDialog_listautoptr; typedef GSList *GtkMessageDialog_slistautoptr; typedef GQueue *GtkMessageDialog_queueautoptr;
typedef GtkMountOperation *GtkMountOperation_autoptr; typedef GList *GtkMountOperation_listautoptr; typedef GSList *GtkMountOperation_slistautoptr; typedef GQueue *GtkMountOperation_queueautoptr;
typedef GtkNotebook *GtkNotebook_autoptr; typedef GList *GtkNotebook_listautoptr; typedef GSList *GtkNotebook_slistautoptr; typedef GQueue *GtkNotebook_queueautoptr;
typedef GtkOffscreenWindow *GtkOffscreenWindow_autoptr; typedef GList *GtkOffscreenWindow_listautoptr; typedef GSList *GtkOffscreenWindow_slistautoptr; typedef GQueue *GtkOffscreenWindow_queueautoptr;
typedef GtkOrientable *GtkOrientable_autoptr; typedef GList *GtkOrientable_listautoptr; typedef GSList *GtkOrientable_slistautoptr; typedef GQueue *GtkOrientable_queueautoptr;
typedef GtkOverlay *GtkOverlay_autoptr; typedef GList *GtkOverlay_listautoptr; typedef GSList *GtkOverlay_slistautoptr; typedef GQueue *GtkOverlay_queueautoptr;
typedef GtkPageSetup *GtkPageSetup_autoptr; typedef GList *GtkPageSetup_listautoptr; typedef GSList *GtkPageSetup_slistautoptr; typedef GQueue *GtkPageSetup_queueautoptr;
typedef GtkPaned *GtkPaned_autoptr; typedef GList *GtkPaned_listautoptr; typedef GSList *GtkPaned_slistautoptr; typedef GQueue *GtkPaned_queueautoptr;
typedef GtkPlacesSidebar *GtkPlacesSidebar_autoptr; typedef GList *GtkPlacesSidebar_listautoptr; typedef GSList *GtkPlacesSidebar_slistautoptr; typedef GQueue *GtkPlacesSidebar_queueautoptr;
typedef GtkPopover *GtkPopover_autoptr; typedef GList *GtkPopover_listautoptr; typedef GSList *GtkPopover_slistautoptr; typedef GQueue *GtkPopover_queueautoptr;
typedef GtkPopoverMenu *GtkPopoverMenu_autoptr; typedef GList *GtkPopoverMenu_listautoptr; typedef GSList *GtkPopoverMenu_slistautoptr; typedef GQueue *GtkPopoverMenu_queueautoptr;
typedef GtkPrintContext *GtkPrintContext_autoptr; typedef GList *GtkPrintContext_listautoptr; typedef GSList *GtkPrintContext_slistautoptr; typedef GQueue *GtkPrintContext_queueautoptr;
typedef GtkPrintOperation *GtkPrintOperation_autoptr; typedef GList *GtkPrintOperation_listautoptr; typedef GSList *GtkPrintOperation_slistautoptr; typedef GQueue *GtkPrintOperation_queueautoptr;
typedef GtkPrintOperationPreview *GtkPrintOperationPreview_autoptr; typedef GList *GtkPrintOperationPreview_listautoptr; typedef GSList *GtkPrintOperationPreview_slistautoptr; typedef GQueue *GtkPrintOperationPreview_queueautoptr;
typedef GtkPrintSettings *GtkPrintSettings_autoptr; typedef GList *GtkPrintSettings_listautoptr; typedef GSList *GtkPrintSettings_slistautoptr; typedef GQueue *GtkPrintSettings_queueautoptr;
typedef GtkProgressBar *GtkProgressBar_autoptr; typedef GList *GtkProgressBar_listautoptr; typedef GSList *GtkProgressBar_slistautoptr; typedef GQueue *GtkProgressBar_queueautoptr;
typedef GtkRadioButton *GtkRadioButton_autoptr; typedef GList *GtkRadioButton_listautoptr; typedef GSList *GtkRadioButton_slistautoptr; typedef GQueue *GtkRadioButton_queueautoptr;
typedef GtkRadioMenuItem *GtkRadioMenuItem_autoptr; typedef GList *GtkRadioMenuItem_listautoptr; typedef GSList *GtkRadioMenuItem_slistautoptr; typedef GQueue *GtkRadioMenuItem_queueautoptr;
typedef GtkRadioToolButton *GtkRadioToolButton_autoptr; typedef GList *GtkRadioToolButton_listautoptr; typedef GSList *GtkRadioToolButton_slistautoptr; typedef GQueue *GtkRadioToolButton_queueautoptr;
typedef GtkRange *GtkRange_autoptr; typedef GList *GtkRange_listautoptr; typedef GSList *GtkRange_slistautoptr; typedef GQueue *GtkRange_queueautoptr;
typedef GtkRcStyle *GtkRcStyle_autoptr; typedef GList *GtkRcStyle_listautoptr; typedef GSList *GtkRcStyle_slistautoptr; typedef GQueue *GtkRcStyle_queueautoptr;
typedef GtkRecentChooser *GtkRecentChooser_autoptr; typedef GList *GtkRecentChooser_listautoptr; typedef GSList *GtkRecentChooser_slistautoptr; typedef GQueue *GtkRecentChooser_queueautoptr;
typedef GtkRecentChooserDialog *GtkRecentChooserDialog_autoptr; typedef GList *GtkRecentChooserDialog_listautoptr; typedef GSList *GtkRecentChooserDialog_slistautoptr; typedef GQueue *GtkRecentChooserDialog_queueautoptr;
typedef GtkRecentChooserMenu *GtkRecentChooserMenu_autoptr; typedef GList *GtkRecentChooserMenu_listautoptr; typedef GSList *GtkRecentChooserMenu_slistautoptr; typedef GQueue *GtkRecentChooserMenu_queueautoptr;
typedef GtkRecentChooserWidget *GtkRecentChooserWidget_autoptr; typedef GList *GtkRecentChooserWidget_listautoptr; typedef GSList *GtkRecentChooserWidget_slistautoptr; typedef GQueue *GtkRecentChooserWidget_queueautoptr;
typedef GtkRecentFilter *GtkRecentFilter_autoptr; typedef GList *GtkRecentFilter_listautoptr; typedef GSList *GtkRecentFilter_slistautoptr; typedef GQueue *GtkRecentFilter_queueautoptr;
typedef GtkRecentManager *GtkRecentManager_autoptr; typedef GList *GtkRecentManager_listautoptr; typedef GSList *GtkRecentManager_slistautoptr; typedef GQueue *GtkRecentManager_queueautoptr;
typedef GtkRevealer *GtkRevealer_autoptr; typedef GList *GtkRevealer_listautoptr; typedef GSList *GtkRevealer_slistautoptr; typedef GQueue *GtkRevealer_queueautoptr;
typedef GtkScale *GtkScale_autoptr; typedef GList *GtkScale_listautoptr; typedef GSList *GtkScale_slistautoptr; typedef GQueue *GtkScale_queueautoptr;
typedef GtkScaleButton *GtkScaleButton_autoptr; typedef GList *GtkScaleButton_listautoptr; typedef GSList *GtkScaleButton_slistautoptr; typedef GQueue *GtkScaleButton_queueautoptr;
typedef GtkScrollable *GtkScrollable_autoptr; typedef GList *GtkScrollable_listautoptr; typedef GSList *GtkScrollable_slistautoptr; typedef GQueue *GtkScrollable_queueautoptr;
typedef GtkScrollbar *GtkScrollbar_autoptr; typedef GList *GtkScrollbar_listautoptr; typedef GSList *GtkScrollbar_slistautoptr; typedef GQueue *GtkScrollbar_queueautoptr;
typedef GtkScrolledWindow *GtkScrolledWindow_autoptr; typedef GList *GtkScrolledWindow_listautoptr; typedef GSList *GtkScrolledWindow_slistautoptr; typedef GQueue *GtkScrolledWindow_queueautoptr;
typedef GtkSearchBar *GtkSearchBar_autoptr; typedef GList *GtkSearchBar_listautoptr; typedef GSList *GtkSearchBar_slistautoptr; typedef GQueue *GtkSearchBar_queueautoptr;
typedef GtkSearchEntry *GtkSearchEntry_autoptr; typedef GList *GtkSearchEntry_listautoptr; typedef GSList *GtkSearchEntry_slistautoptr; typedef GQueue *GtkSearchEntry_queueautoptr;
typedef GtkSeparator *GtkSeparator_autoptr; typedef GList *GtkSeparator_listautoptr; typedef GSList *GtkSeparator_slistautoptr; typedef GQueue *GtkSeparator_queueautoptr;
typedef GtkSeparatorMenuItem *GtkSeparatorMenuItem_autoptr; typedef GList *GtkSeparatorMenuItem_listautoptr; typedef GSList *GtkSeparatorMenuItem_slistautoptr; typedef GQueue *GtkSeparatorMenuItem_queueautoptr;
typedef GtkSeparatorToolItem *GtkSeparatorToolItem_autoptr; typedef GList *GtkSeparatorToolItem_listautoptr; typedef GSList *GtkSeparatorToolItem_slistautoptr; typedef GQueue *GtkSeparatorToolItem_queueautoptr;
typedef GtkSettings *GtkSettings_autoptr; typedef GList *GtkSettings_listautoptr; typedef GSList *GtkSettings_slistautoptr; typedef GQueue *GtkSettings_queueautoptr;
typedef GtkStackSidebar *GtkStackSidebar_autoptr; typedef GList *GtkStackSidebar_listautoptr; typedef GSList *GtkStackSidebar_slistautoptr; typedef GQueue *GtkStackSidebar_queueautoptr;
typedef GtkSizeGroup *GtkSizeGroup_autoptr; typedef GList *GtkSizeGroup_listautoptr; typedef GSList *GtkSizeGroup_slistautoptr; typedef GQueue *GtkSizeGroup_queueautoptr;
typedef GtkSpinButton *GtkSpinButton_autoptr; typedef GList *GtkSpinButton_listautoptr; typedef GSList *GtkSpinButton_slistautoptr; typedef GQueue *GtkSpinButton_queueautoptr;
typedef GtkSpinner *GtkSpinner_autoptr; typedef GList *GtkSpinner_listautoptr; typedef GSList *GtkSpinner_slistautoptr; typedef GQueue *GtkSpinner_queueautoptr;
typedef GtkStack *GtkStack_autoptr; typedef GList *GtkStack_listautoptr; typedef GSList *GtkStack_slistautoptr; typedef GQueue *GtkStack_queueautoptr;
typedef GtkStackSwitcher *GtkStackSwitcher_autoptr; typedef GList *GtkStackSwitcher_listautoptr; typedef GSList *GtkStackSwitcher_slistautoptr; typedef GQueue *GtkStackSwitcher_queueautoptr;
typedef GtkStatusbar *GtkStatusbar_autoptr; typedef GList *GtkStatusbar_listautoptr; typedef GSList *GtkStatusbar_slistautoptr; typedef GQueue *GtkStatusbar_queueautoptr;
typedef GtkStyle *GtkStyle_autoptr; typedef GList *GtkStyle_listautoptr; typedef GSList *GtkStyle_slistautoptr; typedef GQueue *GtkStyle_queueautoptr;
typedef GtkStyleContext *GtkStyleContext_autoptr; typedef GList *GtkStyleContext_listautoptr; typedef GSList *GtkStyleContext_slistautoptr; typedef GQueue *GtkStyleContext_queueautoptr;
typedef GtkStyleProperties *GtkStyleProperties_autoptr; typedef GList *GtkStyleProperties_listautoptr; typedef GSList *GtkStyleProperties_slistautoptr; typedef GQueue *GtkStyleProperties_queueautoptr;
typedef GtkStyleProvider *GtkStyleProvider_autoptr; typedef GList *GtkStyleProvider_listautoptr; typedef GSList *GtkStyleProvider_slistautoptr; typedef GQueue *GtkStyleProvider_queueautoptr;
typedef GtkSwitch *GtkSwitch_autoptr; typedef GList *GtkSwitch_listautoptr; typedef GSList *GtkSwitch_slistautoptr; typedef GQueue *GtkSwitch_queueautoptr;
typedef GtkTextBuffer *GtkTextBuffer_autoptr; typedef GList *GtkTextBuffer_listautoptr; typedef GSList *GtkTextBuffer_slistautoptr; typedef GQueue *GtkTextBuffer_queueautoptr;
typedef GtkTextChildAnchor *GtkTextChildAnchor_autoptr; typedef GList *GtkTextChildAnchor_listautoptr; typedef GSList *GtkTextChildAnchor_slistautoptr; typedef GQueue *GtkTextChildAnchor_queueautoptr;
typedef GtkTextMark *GtkTextMark_autoptr; typedef GList *GtkTextMark_listautoptr; typedef GSList *GtkTextMark_slistautoptr; typedef GQueue *GtkTextMark_queueautoptr;
typedef GtkTextTag *GtkTextTag_autoptr; typedef GList *GtkTextTag_listautoptr; typedef GSList *GtkTextTag_slistautoptr; typedef GQueue *GtkTextTag_queueautoptr;
typedef GtkTextTagTable *GtkTextTagTable_autoptr; typedef GList *GtkTextTagTable_listautoptr; typedef GSList *GtkTextTagTable_slistautoptr; typedef GQueue *GtkTextTagTable_queueautoptr;
typedef GtkTextView *GtkTextView_autoptr; typedef GList *GtkTextView_listautoptr; typedef GSList *GtkTextView_slistautoptr; typedef GQueue *GtkTextView_queueautoptr;
typedef GtkToggleButton *GtkToggleButton_autoptr; typedef GList *GtkToggleButton_listautoptr; typedef GSList *GtkToggleButton_slistautoptr; typedef GQueue *GtkToggleButton_queueautoptr;
typedef GtkToggleToolButton *GtkToggleToolButton_autoptr; typedef GList *GtkToggleToolButton_listautoptr; typedef GSList *GtkToggleToolButton_slistautoptr; typedef GQueue *GtkToggleToolButton_queueautoptr;
typedef GtkToolButton *GtkToolButton_autoptr; typedef GList *GtkToolButton_listautoptr; typedef GSList *GtkToolButton_slistautoptr; typedef GQueue *GtkToolButton_queueautoptr;
typedef GtkToolItem *GtkToolItem_autoptr; typedef GList *GtkToolItem_listautoptr; typedef GSList *GtkToolItem_slistautoptr; typedef GQueue *GtkToolItem_queueautoptr;
typedef GtkToolItemGroup *GtkToolItemGroup_autoptr; typedef GList *GtkToolItemGroup_listautoptr; typedef GSList *GtkToolItemGroup_slistautoptr; typedef GQueue *GtkToolItemGroup_queueautoptr;
typedef GtkToolPalette *GtkToolPalette_autoptr; typedef GList *GtkToolPalette_listautoptr; typedef GSList *GtkToolPalette_slistautoptr; typedef GQueue *GtkToolPalette_queueautoptr;
typedef GtkToolShell *GtkToolShell_autoptr; typedef GList *GtkToolShell_listautoptr; typedef GSList *GtkToolShell_slistautoptr; typedef GQueue *GtkToolShell_queueautoptr;
typedef GtkToolbar *GtkToolbar_autoptr; typedef GList *GtkToolbar_listautoptr; typedef GSList *GtkToolbar_slistautoptr; typedef GQueue *GtkToolbar_queueautoptr;
typedef GtkTooltip *GtkTooltip_autoptr; typedef GList *GtkTooltip_listautoptr; typedef GSList *GtkTooltip_slistautoptr; typedef GQueue *GtkTooltip_queueautoptr;
typedef GtkTreeDragDest *GtkTreeDragDest_autoptr; typedef GList *GtkTreeDragDest_listautoptr; typedef GSList *GtkTreeDragDest_slistautoptr; typedef GQueue *GtkTreeDragDest_queueautoptr;
typedef GtkTreeDragSource *GtkTreeDragSource_autoptr; typedef GList *GtkTreeDragSource_listautoptr; typedef GSList *GtkTreeDragSource_slistautoptr; typedef GQueue *GtkTreeDragSource_queueautoptr;
typedef GtkTreeModel *GtkTreeModel_autoptr; typedef GList *GtkTreeModel_listautoptr; typedef GSList *GtkTreeModel_slistautoptr; typedef GQueue *GtkTreeModel_queueautoptr;
typedef GtkTreeModelFilter *GtkTreeModelFilter_autoptr; typedef GList *GtkTreeModelFilter_listautoptr; typedef GSList *GtkTreeModelFilter_slistautoptr; typedef GQueue *GtkTreeModelFilter_queueautoptr;
typedef GtkTreeModelSort *GtkTreeModelSort_autoptr; typedef GList *GtkTreeModelSort_listautoptr; typedef GSList *GtkTreeModelSort_slistautoptr; typedef GQueue *GtkTreeModelSort_queueautoptr;
typedef GtkTreeSelection *GtkTreeSelection_autoptr; typedef GList *GtkTreeSelection_listautoptr; typedef GSList *GtkTreeSelection_slistautoptr; typedef GQueue *GtkTreeSelection_queueautoptr;
typedef GtkTreeSortable *GtkTreeSortable_autoptr; typedef GList *GtkTreeSortable_listautoptr; typedef GSList *GtkTreeSortable_slistautoptr; typedef GQueue *GtkTreeSortable_queueautoptr;
typedef GtkTreeStore *GtkTreeStore_autoptr; typedef GList *GtkTreeStore_listautoptr; typedef GSList *GtkTreeStore_slistautoptr; typedef GQueue *GtkTreeStore_queueautoptr;
typedef GtkTreeView *GtkTreeView_autoptr; typedef GList *GtkTreeView_listautoptr; typedef GSList *GtkTreeView_slistautoptr; typedef GQueue *GtkTreeView_queueautoptr;
typedef GtkTreeViewColumn *GtkTreeViewColumn_autoptr; typedef GList *GtkTreeViewColumn_listautoptr; typedef GSList *GtkTreeViewColumn_slistautoptr; typedef GQueue *GtkTreeViewColumn_queueautoptr;
typedef GtkViewport *GtkViewport_autoptr; typedef GList *GtkViewport_listautoptr; typedef GSList *GtkViewport_slistautoptr; typedef GQueue *GtkViewport_queueautoptr;
typedef GtkVolumeButton *GtkVolumeButton_autoptr; typedef GList *GtkVolumeButton_listautoptr; typedef GSList *GtkVolumeButton_slistautoptr; typedef GQueue *GtkVolumeButton_queueautoptr;
typedef GtkPaperSize *GtkPaperSize_autoptr; typedef GList *GtkPaperSize_listautoptr; typedef GSList *GtkPaperSize_slistautoptr; typedef GQueue *GtkPaperSize_queueautoptr;
typedef GtkRecentInfo *GtkRecentInfo_autoptr; typedef GList *GtkRecentInfo_listautoptr; typedef GSList *GtkRecentInfo_slistautoptr; typedef GQueue *GtkRecentInfo_queueautoptr;
typedef GtkSelectionData *GtkSelectionData_autoptr; typedef GList *GtkSelectionData_listautoptr; typedef GSList *GtkSelectionData_slistautoptr; typedef GQueue *GtkSelectionData_queueautoptr;
typedef GtkTargetList *GtkTargetList_autoptr; typedef GList *GtkTargetList_listautoptr; typedef GSList *GtkTargetList_slistautoptr; typedef GQueue *GtkTargetList_queueautoptr;
typedef GtkTextAttributes *GtkTextAttributes_autoptr; typedef GList *GtkTextAttributes_listautoptr; typedef GSList *GtkTextAttributes_slistautoptr; typedef GQueue *GtkTextAttributes_queueautoptr;
typedef GtkTextIter *GtkTextIter_autoptr; typedef GList *GtkTextIter_listautoptr; typedef GSList *GtkTextIter_slistautoptr; typedef GQueue *GtkTextIter_queueautoptr;
typedef GtkTreeIter *GtkTreeIter_autoptr; typedef GList *GtkTreeIter_listautoptr; typedef GSList *GtkTreeIter_slistautoptr; typedef GQueue *GtkTreeIter_queueautoptr;
typedef GtkTreePath *GtkTreePath_autoptr; typedef GList *GtkTreePath_listautoptr; typedef GSList *GtkTreePath_slistautoptr; typedef GQueue *GtkTreePath_queueautoptr;
typedef GtkTreeRowReference *GtkTreeRowReference_autoptr; typedef GList *GtkTreeRowReference_listautoptr; typedef GSList *GtkTreeRowReference_slistautoptr; typedef GQueue *GtkTreeRowReference_queueautoptr;
typedef GtkWidgetPath *GtkWidgetPath_autoptr; typedef GList *GtkWidgetPath_listautoptr; typedef GSList *GtkWidgetPath_slistautoptr; typedef GQueue *GtkWidgetPath_queueautoptr;