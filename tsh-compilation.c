typedef long jmp_buf[8];
typedef unsigned int ml_size_t;
typedef int ml_off_t;
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef unsigned long size_t;
typedef int bool;
inline void __attribute__((noreturn,always_inline))__ABORT(){
 asm("xor %esp,%esp\nxor %ebp,%ebp\nret");
 __builtin_unreachable();
}
typedef struct _text_match { char *pos; int len; } text_match;
typedef int FILE;
typedef union { FILE *F; int i, fd;} mfl_union;
typedef struct { int quot; int rem; } div_t;
typedef struct { long int quot; long int rem; } ldiv_t;
typedef void (*sighandler_t)(int);
typedef void (functionp)(void);
typedef struct {
  int tz_minuteswest;
  int tz_dsttime;
} timezone;
typedef unsigned long fd_mask;
typedef struct {
 unsigned long fds_bits[1024 / 8 / sizeof(long)];
} fd_set;
typedef __builtin_va_list va_list;
enum EPOLL_EVENTS { __EPOLL_DUMMY };
typedef union epoll_data {
    void *ptr;
     int fd;
    int u32;
    long u64;
} epoll_data_t;
struct epoll_event {
    int events;
     epoll_data_t data;
} __attribute__ ((__packed__));
typedef long time_t;
typedef long suseconds_t;
typedef unsigned useconds_t;
struct timeval { time_t tv_sec; suseconds_t tv_usec; };
struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};
typedef unsigned char uchar;
typedef int wchar_t;
typedef long double double_t;
typedef float float_t;
typedef struct { long long __ll; long double __ld; } max_align_t;
typedef struct { union { int __i[14]; volatile int __vi[14]; unsigned long __s[7]; } __u; } pthread_attr_t;
typedef struct { union { int __i[10]; volatile int __vi[10]; volatile void *volatile __p[5]; } __u; } pthread_mutex_t;
typedef struct { union { int __i[10]; volatile int __vi[10]; volatile void *volatile __p[5]; } __u; } mtx_t;
typedef struct { union { int __i[12]; volatile int __vi[12]; void *__p[6]; } __u; } pthread_cond_t;
typedef struct { union { int __i[12]; volatile int __vi[12]; void *__p[6]; } __u; } cnd_t;
typedef struct { union { int __i[14]; volatile int __vi[14]; void *__p[7]; } __u; } pthread_rwlock_t;
typedef struct { union { int __i[8]; volatile int __vi[8]; void *__p[4]; } __u; } pthread_barrier_t;
typedef unsigned long uintptr_t;
typedef long ptrdiff_t;
typedef long ssize_t;
typedef long intptr_t;
typedef long regoff_t;
typedef long register_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;
typedef signed long intmax_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef unsigned long u_int64_t;
typedef unsigned long uintmax_t;
typedef unsigned mode_t;
typedef unsigned long nlink_t;
typedef long off_t;
typedef unsigned long ino_t;
typedef unsigned long dev_t;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
typedef unsigned wint_t;
typedef unsigned long wctype_t;
typedef void * timer_t;
typedef int clockid_t;
typedef long clock_t;
struct timespec { time_t tv_sec; long tv_nsec; };
typedef int pid_t;
typedef unsigned id_t;
typedef unsigned uid_t;
typedef unsigned gid_t;
typedef int key_t;
typedef struct __mbstate_t { unsigned __opaque1, __opaque2; } mbstate_t;
typedef struct __locale_struct * locale_t;
struct iovec { void *iov_base; long iov_len; };
typedef unsigned socklen_t;
typedef unsigned short sa_family_t;
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
struct stat {
  dev_t st_dev;
  ino_t st_ino;
  nlink_t st_nlink;
  mode_t st_mode;
  uid_t st_uid;
  gid_t st_gid;
  unsigned int __pad0;
  dev_t st_rdev;
  off_t st_size;
  blksize_t st_blksize;
  blkcnt_t st_blocks;
  struct timespec st_atime;
  struct timespec st_mtime;
  struct timespec st_ctime;
  long __unused[3];
};
int isalnum_l(int, locale_t);
int isalpha_l(int, locale_t);
int isblank_l(int, locale_t);
int iscntrl_l(int, locale_t);
int isdigit_l(int, locale_t);
int isgraph_l(int, locale_t);
int islower_l(int, locale_t);
int isprint_l(int, locale_t);
int ispunct_l(int, locale_t);
int isspace_l(int, locale_t);
int isupper_l(int, locale_t);
int isxdigit_l(int, locale_t);
int tolower_l(int, locale_t);
int toupper_l(int, locale_t);
typedef int8_t int_fast8_t;
typedef int64_t int_fast64_t;
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_fast8_t;
typedef uint64_t uint_fast64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned u_int32_t;
typedef char *caddr_t;
typedef unsigned char u_char;
typedef unsigned short u_short, ushort;
typedef unsigned u_int, uint;
typedef unsigned long u_long, ulong;
typedef long long quad_t;
typedef unsigned long long u_quad_t;
struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
struct oldold_utsname {
        char sysname[9];
        char nodename[9];
        char release[9];
        char version[9];
        char machine[9];
};
struct old_utsname {
        char sysname[65];
        char nodename[65];
        char release[65];
        char version[65];
        char machine[65];
};
struct new_utsname {
        char sysname[64 + 1];
        char nodename[64 + 1];
        char release[64 + 1];
        char version[64 + 1];
        char machine[64 + 1];
        char domainname[64 + 1];
};
typedef long __band_t;
typedef union sigval {
  int sival_int;
  void *sival_ptr;
} sigval_t;
typedef struct siginfo {
  int32_t si_signo;
  int32_t si_errno;
  int32_t si_code;
  union {
    char __pad[128 - 2*sizeof(int) - sizeof(long)];
    struct {
      pid_t _pid;
      uid_t _uid;
    } _kill;
    struct {
      uint32_t _timer1;
      uint32_t _timer2;
    } _timer;
    struct {
      pid_t _pid;
      uid_t _uid;
      sigval_t _sigval;
    } _rt;
    struct {
      pid_t _pid;
      uid_t _uid;
      int32_t _status;
      clock_t _utime;
      clock_t _stime;
    } _sigchld;
    struct {
      void *_addr;
    } _sigfault;
    struct {
      __band_t _band;
      int32_t _fd;
    } _sigpoll;
  } _sifields;
} siginfo_t;
typedef struct __sigset_t { unsigned long sig; } sigset_t;
struct sigaction {
  void (*sa_handler)(int);
  unsigned long sa_flags;
  void (*restorer)(void);
  sigset_t sa_mask;
};
struct prctl_mm_map {
 uint64_t start_code;
 uint64_t end_code;
 uint64_t start_data;
 uint64_t end_data;
 uint64_t start_brk;
 uint64_t brk;
 uint64_t start_stack;
 uint64_t arg_start;
 uint64_t arg_end;
 uint64_t env_start;
 uint64_t env_end;
 uint64_t *auxv;
 uint32_t auxv_size;
 uint32_t exe_fd;
};
struct tms
  {
    clock_t tms_utime;
    clock_t tms_stime;
    clock_t tms_cutime;
    clock_t tms_cstime;
  };
struct inotify_event {
 int wd;
 uint32_t mask, cookie, len;
 char name[];
};
typedef long long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;
typedef int sig_atomic_t;
typedef void (*__sighandler_t) (int);
typedef __sighandler_t sig_t;
typedef unsigned long __u64;
typedef unsigned int __u32;
typedef signed long __s64;
typedef signed int __s32;
typedef unsigned short __u16;
typedef signed short __s16;
struct statx_timestamp{
  int64_t tv_sec;
  uint32_t tv_nsec;
  int32_t __statx_timestamp_pad1[1];
};
struct statx{
  uint32_t stx_mask;
  uint32_t stx_blksize;
  uint64_t stx_attributes;
  uint32_t stx_nlink;
  uint32_t stx_uid;
  uint32_t stx_gid;
  uint16_t stx_mode;
  uint16_t __statx_pad1[1];
  uint64_t stx_ino;
  uint64_t stx_size;
  uint64_t stx_blocks;
  uint64_t stx_attributes_mask;
  struct statx_timestamp stx_atime;
  struct statx_timestamp stx_btime;
  struct statx_timestamp stx_ctime;
  struct statx_timestamp stx_mtime;
  uint32_t stx_rdev_major;
  uint32_t stx_rdev_minor;
  uint32_t stx_dev_major;
  uint32_t stx_dev_minor;
  uint64_t __statx_pad2[14];
};
enum fsconfig_command {
 FSCONFIG_SET_FLAG = 0,
 FSCONFIG_SET_STRING = 1,
 FSCONFIG_SET_BINARY = 2,
 FSCONFIG_SET_PATH = 3,
 FSCONFIG_SET_PATH_EMPTY = 4,
 FSCONFIG_SET_FD = 5,
 FSCONFIG_CMD_CREATE = 6,
 FSCONFIG_CMD_RECONFIGURE = 7,
};
struct seccomp_data {
 int nr;
 __u32 arch;
 __u64 instruction_pointer;
 __u64 args[6];
};
struct seccomp_notif_sizes {
 __u16 seccomp_notif;
 __u16 seccomp_notif_resp;
 __u16 seccomp_data;
};
struct seccomp_notif {
 __u64 id;
 __u32 pid;
 __u32 flags;
 struct seccomp_data data;
};
struct seccomp_notif_resp {
 __u64 id;
 __s64 val;
 __s32 error;
 __u32 flags;
};
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 __kernel_long_t ru_maxrss;
 __kernel_long_t ru_ixrss;
 __kernel_long_t ru_idrss;
 __kernel_long_t ru_isrss;
 __kernel_long_t ru_minflt;
 __kernel_long_t ru_majflt;
 __kernel_long_t ru_nswap;
 __kernel_long_t ru_inblock;
 __kernel_long_t ru_oublock;
 __kernel_long_t ru_msgsnd;
 __kernel_long_t ru_msgrcv;
 __kernel_long_t ru_nsignals;
 __kernel_long_t ru_nvcsw;
 __kernel_long_t ru_nivcsw;
};
struct rlimit {
 __kernel_ulong_t rlim_cur;
 __kernel_ulong_t rlim_max;
};
typedef unsigned long rlim_t;
struct rlimit64 {
 __u64 rlim_cur;
 __u64 rlim_max;
};
struct udiv_t { unsigned int quot, rem; };
extern int errno;
struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long __tm_gmtoff;
 const char *__tm_zone;
};
struct __dirstream{
 off_t tell;
 int fd;
 int buf_pos;
 int buf_end;
 int align;
 char buf[0];
};
typedef struct __dirstream DIR;
struct dirent {
 ino_t d_ino;
 off_t d_off;
 unsigned short d_reclen;
 char d_name[];
};
typedef struct {char c;} __guarded_memory;
typedef unsigned int index_t;
typedef unsigned int brk_data_t;
struct ml_malloc_area{
 void *pos;
 unsigned short int size;
 unsigned short int free;
 unsigned short int freegaps;
 unsigned short int largestfree;
};
struct ml_malloc_def;
struct ml_malloc_freearray{
  unsigned int pos;
  unsigned int largestfree;
  unsigned int data[0];
  unsigned int size;
  unsigned int freegaps;
  unsigned int _data[];
};
struct ml_malloc_def{
 struct ml_malloc_area *area;
 struct ml_malloc_freestorage* free;
 void* (*find_free)(struct ml_malloc_def*,int size);
 int (*resize_area)(struct ml_malloc_area*,int size);
 int (*check_area)(struct ml_malloc_area*);
 const int movposfactor;
 const int typesize;
 const int btval,btfree,btprevfree,bttop;
};
typedef struct ml_malloc_area ml_malloc_area_t;
static void ml_ewriteui(unsigned int);
static void ewriteui(unsigned int i){
 ml_ewriteui(i);
}
static void __attribute__((noreturn))__ERR(int errnum, const char* func );
static inline void __attribute__((noreturn,always_inline))exit(int ret){
 asm("jmp __exit"::"D"(ret));
 __builtin_unreachable();
}
typedef struct {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
} tm;
typedef struct {
  time_t actime;
  time_t modtime;
} utimbuf;
typedef struct {
  int errno;
  int sysret;
  int srand;
  int pstream;
  int mbufsize;
  int _intbufsize;
  int align[1];
  char **environ;
  unsigned long brk;
  unsigned long brk_start;
  void *appdata;
  int stream[16];
} __globals_shadow;
typedef struct {
 union {
  char __pmlgl[sizeof(__globals_shadow)];
  struct {
  int errno;
  int sysret;
  int srand;
  int pstream;
  int *stacktop ; char **environ ; unsigned long brk ; unsigned long brk_start ;
  void *_globalappdata;
  int *stream;
  int _stream[16];
  };};
} minilib_globals;
static volatile void __attribute__((noipa,cold)) optimization_fence(void*p,...){}
static inline __seg_fs minilib_globals* __attribute__((always_inline))mlgl(){
 return(0);
}
extern void volatile __attribute__((naked,noipa,cold)) opt_fence(void*p,...);
asm(".global opt_fence\nopt_fence:\nretq");
struct stat;
struct timeval;
struct timezone;
typedef unsigned long u64;
typedef unsigned int u32;
typedef long aio_context_t;
typedef long key_serial_t;
typedef long loff_t;
typedef long qid_t;
typedef long mqd_t;
typedef long stack_t;
typedef long umode_t;
typedef long cap_user_data_t;
typedef long cap_user_header_t;
typedef long semun_u;
struct sockaddr;
struct iovcc;
struct rusage;
struct file_handle;
struct utimbuf;
struct sched_attr;
struct sched_param;
struct itimerspec;
struct kexec_segment;
struct task_struct;
struct msghdr;
struct iocb;
struct io_event;
struct linux_dirent64;
struct pt_regs;
struct perf_event_attr;
struct __sysctl_args;
struct timex;
struct msgbuf;
struct pollfd;
struct getcpu_cache;
struct bpf_attr;
struct shmid_ds;
struct epoll_event;
struct mq_attr;
struct poll_fd;
struct mq_attr;
struct sembuf;
struct statfs;
struct sysinfo;
struct rlimit;
struct ustat;
struct itimerval;
struct linux_dirent;
struct robust_list_head;
struct sigevent;
struct siginfo;
struct bpf_attr;
struct msqid_ds;
struct rlimit64;
struct sigaction;
struct mmsghdr;
struct msqid_ds;

























































;






















































#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wint-conversion"
static inline int volatile __attribute__((always_inline)) getpeername( int a1, struct sockaddr *a2, int *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 52 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setgid( gid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 106 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) readahead( int a1, loff_t a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 187 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) ftruncate( unsigned int a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 77 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setreuid( uid_t a1, uid_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 113 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) stat( const char* a1, struct stat* a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 4 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) fcntl( unsigned int a1, unsigned int a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 72 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) fsync( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 74 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) nanosleep( struct timespec *a1, struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 35 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))reboot( int a1, int a2, unsigned int a3, void *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 169 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) pipe( int *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 22 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))prctl( int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 157 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) inotify_init1( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 294 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))rt_sigaction( int a1, const struct sigaction *a2, struct sigaction *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 13 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) fchmod( unsigned int a1, mode_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 91 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getsockname( int a1, struct sockaddr *a2, int *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 51 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))recvfrom( int a1, void *a2, long a3, unsigned a4, struct sockaddr *a5, unsigned int *a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 45 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) times( struct tms *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 100 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) msync( void* a1, long a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 26 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) fstat( int a1, struct stat* a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 5 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) connect( int a1, struct sockaddr *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 42 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) rename( const char* a1, const char* a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 82 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) listen( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 50 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))fstatat( int a1, const char *a2, struct stat *a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 262 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))epoll_ctl( int a1, int a2, int a3, struct epoll_event *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 233 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) lseek( unsigned int a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 8 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) chroot( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 161 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) socket( int a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 41 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) inotify_add_watch( int a1, const char *a2, u32 a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 254 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) write( int a1, const void *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 1 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))wait4( pid_t a1, int *a2, int a3, struct rusage *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 61 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getrandom( char *a1, long a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 318 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))utimensat( int a1, const char *a2, struct timespec *a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 280 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))splice( int a1, loff_t *a2, int a3, loff_t *a4, long a5, unsigned int a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 275 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) rmdir( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 84 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) umask( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 95 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) symlink( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 88 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) time( unsigned int *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 201 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) inotify_init( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 253 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))epoll_wait( int a1, struct epoll_event *a2, int a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 232 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) accept( int a1, struct sockaddr *a2, int *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 43 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getgid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 104 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) lstat( const char* a1, struct stat* a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 6 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) execve( const char *a1, char* const* a2, char* const* a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 59 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) pivot_root( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 155 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sendto( int a1, void *a2, long a3, unsigned a4, struct sockaddr *a5, int a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 44 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sync( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 162 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))mount( char *a1, char *a2, char *a3, unsigned long a4, void *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 165 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) munmap( void* a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 11 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) flock( unsigned int a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 73 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) fchdir( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 81 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getpid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 39 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) umount2( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 166 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) geteuid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 107 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getuid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 102 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getegid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 108 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setrlimit( unsigned int a1, struct rlimit *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 160 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) gettimeofday( struct timeval *a1, struct timezone *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 96 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setitimer( int a1, struct itimerval *a2, struct itimerval *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 38 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))execveat( int a1, const char *a2, char* const* a3, char* const* a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 322 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))clone( int a1, unsigned long a2, void *a3, void *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 56 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) readlink( const char *a1, char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 89 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setgroups( int a1, gid_t *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 116 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) fork( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 57 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) timerfd_gettime( int a1, struct itimerspec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 287 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) fchown( unsigned int a1, uid_t a2, gid_t a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 93 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) mknod( const char *a1, umode_t a2, unsigned a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 133 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) uname( struct new_utsname *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 63 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) dup3( int a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 292 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) unlink( const char* a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 87 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getsid( pid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 124 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) kill( pid_t a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 62 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) epoll_create( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 213 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) utime( const char *a1, struct utimbuf *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 132 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sendfile( int a1, int a2, off_t *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 40 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))epoll_pwait( int a1, struct epoll_event *a2, int a3, int a4, const sigset_t *a5, long a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 281 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) clock_gettime( const clockid_t a1, struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 228 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))rt_sigprocmask( int a1, sigset_t *a2, sigset_t *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 14 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) mkdir( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 83 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) mprotect( void *a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 10 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setresuid( uid_t *a1, uid_t *a2, uid_t *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 117 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))setsockopt( int a1, int a2, int a3, const void *a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 54 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) access( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 21 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) rt_sigsuspend( const sigset_t *a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 130 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); } ;
static int volatile __attribute__((noinline))statx( int a1, const char *a2, int a3, unsigned int a4, struct statx *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 332 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) rt_sigreturn( unsigned long a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 15 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) chown( const char *a1, uid_t a2, gid_t a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 92 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) inotify_rm_watch( int a1, __s32 a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 255 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) link( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 86 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) chmod( const char *a1, mode_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 90 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setsid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 112 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) vhangup( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 153 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) close( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 3 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) dup( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 32 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) timerfd_create( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 283 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) clock_settime( const clockid_t a1, const struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 227 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))getsockopt( int a1, int a2, int a3, char *a4, int *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 55 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setpgid( pid_t a1, pid_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 109 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) dup2( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 33 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) read( int a1, void *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 0 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) arch_prctl( int a1, void *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 158 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getresuid( uid_t *a1, uid_t *a2, uid_t *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 118 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) setuid( uid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 105 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))timerfd_settime( int a1, int a2, const struct itimerspec *a3, struct itimerspec *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 286 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getitimer( int a1, struct itimerval *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 36 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) settimeofday( struct timeval *a1, struct timezone *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 164 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getppid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 110 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getrlimit( unsigned int a1, struct rlimit *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 97 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) chdir( const char* a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 80 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) vfork( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 58 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) bind( int a1, struct sockaddr *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 49 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getpgrp( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 111 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getrusage( int a1, struct rusage *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 98 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) memfd_create( const char *a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 319 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) getdents( unsigned int a1, struct dirent *a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 78 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sysinfo( struct sysinfo *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 99 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_ioprio_get( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 252 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_gettid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 186 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_request_key( const char *a1, const char *a2, const char *a3, key_serial_t a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 249 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getuid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 102 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setfsgid( gid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 123 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_unshare( unsigned long a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 272 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_setparam( pid_t a1, struct sched_param *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 142 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_personality( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 135 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_rename( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 82 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_clone( unsigned long a1, unsigned long a2, void *a3, void *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 56 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_chdir( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 80 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_bind( int a1, struct sockaddr *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 49 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_readahead( int a1, loff_t a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 187 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_shutdown( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 48 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getpgrp( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 111 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setgroups( int a1, gid_t *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 116 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fchmod( unsigned int a1, mode_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 91 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_unlink( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 87 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_faccessat( int a1, const char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 269 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_lchown( const char *a1, uid_t a2, gid_t a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 94 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_rt_sigqueueinfo( pid_t a1, int a2, siginfo_t *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 129 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_msgsnd( int a1, struct msgbuf *a2, long a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 69 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_tee( int a1, int a2, long a3, unsigned int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 276 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_sendfile( int a1, int a2, off_t *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 40 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fanotify_init( unsigned int a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 300 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_clock_adjtime( clockid_t a1, struct timex *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 305 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_setscheduler( pid_t a1, int a2, struct sched_param *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 144 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_renameat( int a1, const char *a2, int a3, const char *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 264 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_swapoff( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 168 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_get_mempolicy( int *a1, unsigned long *a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 239 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getresuid( uid_t *a1, uid_t *a2, uid_t *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 118 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_swapon( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 167 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fdatasync( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 75 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fchmodat( int a1, const char *a2, mode_t a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 268 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_iopl( unsigned int a1, struct pt_regs *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 172 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_unlinkat( int a1, const char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 263 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sethostname( char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 170 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_splice( int a1, loff_t *a2, int a3, loff_t *a4, long a5, unsigned int a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 275 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_writev( unsigned long a1, const struct iovec *a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 20 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_newfstatat( int a1, const char *a2, struct stat *a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 262 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sendmsg( int a1, struct msghdr *a2, unsigned a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 46 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_rt_sigsuspend( sigset_t *a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 130 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setfsuid( uid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 122 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getresgid( gid_t *a1, gid_t *a2, gid_t *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 120 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getitimer( int a1, struct itimerval *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 36 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_utime( char *a1, struct utimbuf *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 132 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getpid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 39 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_rt_sigprocmask( int a1, sigset_t *a2, sigset_t *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 14 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fstat( unsigned int a1, struct stat *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 5 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_vmsplice( int a1, const struct iovec *a2, unsigned long a3, unsigned int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 278 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_wait4( pid_t a1, int *a2, int a3, struct rusage *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 61 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_timer_gettime( timer_t a1, struct itimerspec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 224 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_waitid( int a1, pid_t a2, struct siginfo *a3, int a4, struct rusage *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 247 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_acct( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 163 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_yield( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 24 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_mq_timedsend( mqd_t a1, const char *a2, long a3, unsigned int a4, const struct timespec *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 242 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_syslog( int a1, char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 103 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_mq_open( const char *a1, int a2, mode_t a3, struct mq_attr *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 240 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setsid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 112 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_timer_delete( timer_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 226 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_flock( unsigned int a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 73 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_move_pages( pid_t a1, unsigned long a2, const void *a3, const int *a4, int *a5, int a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 279 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_alarm( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 37 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_poll( struct poll_fd *a1, unsigned int a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 7 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setgid( gid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 106 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getpeername( int a1, struct sockaddr *a2, int *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 52 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_get_robust_list( int a1, struct robust_list_head **a2, long *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 274 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_fallocate( long a1, long a2, loff_t a3, loff_t a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 285 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_renameat2( int a1, const char *a2, int a3, const char *a4, unsigned int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 316 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_truncate( const char *a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 76 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_futex( u32 *a1, int a2, u32 a3, struct timespec *a4, u32 *a5, u32 a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 202 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_epoll_create1( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 291 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_pread64( unsigned long a1, char *a2, long a3, loff_t a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 17 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_ioprio_set( int a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 251 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_eventfd( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 284 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_open_by_handle_at( int a1, const char *a2, struct file_handle *a3, int *a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 304 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_io_cancel( aio_context_t a1, struct iocb *a2, struct io_event *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 210 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_epoll_pwait( int a1, struct epoll_event *a2, int a3, int a4, const sigset_t *a5, long a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 281 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_arch_prctl( struct task_struct *a1, int a2, unsigned long *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 158 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_init_module( void *a1, unsigned long a2, const char *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 175 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mknod( const char *a1, umode_t a2, unsigned a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 133 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_epoll_create( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 213 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_memfd_create( const char *a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 319 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_clock_getres( const clockid_t a1, struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 229 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_semget( key_t a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 64 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getegid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 108 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_kill( pid_t a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 62 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mq_notify( mqd_t a1, const struct sigevent *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 244 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mincore( unsigned long a1, long a2, unsigned char *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 27 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mq_unlink( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 241 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_close( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 3 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_epoll_ctl( int a1, int a2, int a3, struct epoll_event *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 233 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_mknodat( int a1, const char *a2, int a3, unsigned a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 259 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_gettimeofday( struct timeval *a1, struct timezone *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 96 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_getxattr( const char *a1, const char *a2, void *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 191 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_signalfd( int a1, sigset_t *a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 282 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_symlink( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 88 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_pwritev( unsigned long a1, const struct iovec *a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 296 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_signalfd4( int a1, sigset_t *a2, long a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 289 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_lookup_dcookie( u64 a1, long a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 212 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_setaffinity( pid_t a1, unsigned int a2, unsigned long *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 203 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fsync( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 74 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_io_submit( aio_context_t a1, long a2, struct iocb **a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 209 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_vfork( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 58 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_clock_gettime( const clockid_t a1, struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 228 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_adjtimex( struct timex *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 159 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_timer_create( const clockid_t a1, struct sigevent *a2, timer_t *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 222 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_shmdt( char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 67 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_semtimedop( int a1, struct sembuf *a2, unsigned a3, const struct timespec *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 220 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_mbind( unsigned long a1, unsigned long a2, unsigned long a3, unsigned long *a4, unsigned long a5, unsigned a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 237 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setpgid( pid_t a1, pid_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 109 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_readlinkat( int a1, const char *a2, char *a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 267 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_shmctl( int a1, int a2, struct shmid_ds *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 31 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_recvmmsg( int a1, struct msghdr *a2, unsigned int a3, unsigned int a4, struct timespec *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 299 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_lgetxattr( const char *a1, const char *a2, void *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 192 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_rt_sigpending( sigset_t *a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 127 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_timer_getoverrun( timer_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 225 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getppid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 110 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_name_to_handle_at( int a1, const char *a2, struct file_handle *a3, int *a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 303 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_kexec_load( unsigned long a1, unsigned long a2, struct kexec_segment *a3, unsigned long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 246 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_pipe( int *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 22 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_readv( unsigned long a1, const struct iovec *a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 19 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getcwd( char *a1, unsigned long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 79 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_reboot( int a1, int a2, unsigned int a3, void *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 169 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_remap_file_pages( unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 216 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setdomainname( char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 171 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_shmget( key_t a1, long a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 29 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_sync_file_range( long a1, loff_t a2, loff_t a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 277 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_io_destroy( aio_context_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 207 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_process_vm_writev( pid_t a1, const struct iovec *a2, unsigned long a3, const struct iovcc *a4, unsigned long a5, unsigned long a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 311 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getrlimit( unsigned int a1, struct rlimit *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 97 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_semop( int a1, struct sembuf *a2, unsigned a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 65 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fork( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 57 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_sched_getattr( pid_t a1, struct sched_attr *a2, unsigned int a3, unsigned int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 315 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getcpu( unsigned *a1, unsigned *a2, struct getcpu_cache *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 309 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_madvise( unsigned long a1, long a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 28 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_connect( int a1, struct sockaddr *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 42 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_kexec_file_load( int a1, int a2, unsigned long a3, const char *a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 320 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_semctl( int a1, int a2, int a3, semun_u a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 66 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fremovexattr( int a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 199 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setpriority( int a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 141 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_lsetxattr( const char *a1, const char *a2, const void *a3, long a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 189 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_setsockopt( int a1, int a2, int a3, char *a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 54 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_utimes( char *a1, struct timeval *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 235 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_set_tid_address( int *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 218 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_llistxattr( const char *a1, char *a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 195 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_chown( const char *a1, uid_t a2, gid_t a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 92 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_set_robust_list( struct robust_list_head *a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 273 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getgid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 104 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_rt_sigtimedwait( const sigset_t *a1, siginfo_t *a2, const struct timespec *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 128 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_prctl( int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 157 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_fgetxattr( int a1, const char *a2, void *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 193 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_mount( char *a1, char *a2, char *a3, unsigned long a4, void *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 165 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_recvmsg( int a1, struct msghdr *a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 47 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_shmat( int a1, char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 30 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_uname( struct old_utsname *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 63 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_migrate_pages( pid_t a1, unsigned long a2, const unsigned long *a3, const unsigned long *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 256 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_msync( unsigned long a1, long a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 26 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_get_priority_min( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 147 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_ioperm( unsigned long a1, unsigned long a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 173 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_rt_tgsigqueueinfo( pid_t a1, pid_t a2, int a3, siginfo_t *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 297 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_readlink( const char *a1, char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 89 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setitimer( int a1, struct itimerval *a2, struct itimerval *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 38 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_preadv( unsigned long a1, const struct iovec *a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 295 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_modify_ldt( int a1, void *a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 154 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_rmdir( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 84 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_lremovexattr( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 198 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_tkill( pid_t a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 200 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_ppoll( struct pollfd *a1, unsigned int a2, struct timespec *a3, const sigset_t *a4, long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 271 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setresgid( gid_t a1, gid_t a2, gid_t a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 119 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_pipe2( int *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 293 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mkdirat( int a1, const char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 258 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_fsetxattr( int a1, const char *a2, const void *a3, long a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 190 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getsid( pid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 124 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_flistxattr( int a1, char *a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 196 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_accept4( int a1, struct sockaddr *a2, int *a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 288 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_socket( int a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 41 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_rr_get_interval( pid_t a1, struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 148 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setregid( gid_t a1, gid_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 114 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_umount2( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 166 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_listen( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 50 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_timerfd_gettime( int a1, struct itimerspec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 287 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_timer_settime( timer_t a1, int a2, const struct itimerspec *a3, struct itimerspec *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 223 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_msgctl( int a1, int a2, struct msqid_ds *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 71 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_syncfs( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 306 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_execve( const char *a1, const char *const a2, const char *const a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 59 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_chroot( const char *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 161 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_getscheduler( pid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 145 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_chmod( const char *a1, mode_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 90 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_io_getevents( aio_context_t a1, long a2, long a3, struct io_event *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 208 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_stat( const char *a1, struct stat *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 4 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_ftruncate( unsigned int a1, unsigned long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 77 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_eventfd2( unsigned int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 290 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_lseek( unsigned int a1, off_t a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 8 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_prlimit64( pid_t a1, unsigned int a2, const struct rlimit64 *a3, struct rlimit64 *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 302 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mq_getsetattr( mqd_t a1, const struct mq_attr *a2, struct mq_attr *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 245 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_fanotify_mark( long a1, long a2, __u64 a3, long a4, long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 301 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_io_setup( unsigned a1, aio_context_t *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 206 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setresuid( uid_t *a1, uid_t *a2, uid_t *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 117 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_futimesat( int a1, const char *a2, struct timeval *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 261 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_set_mempolicy( int a1, unsigned long *a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 238 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fcntl( unsigned int a1, unsigned int a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 72 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_timerfd_settime( int a1, int a2, const struct itimerspec *a3, struct itimerspec *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 286 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_geteuid( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 107 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_mremap( unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 25 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_msgget( key_t a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 68 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_getparam( pid_t a1, struct sched_param *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 143 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_socketpair( int a1, int a2, int a3, int *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 53 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_rt_sigreturn( unsigned long a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 15 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getdents( unsigned int a1, struct linux_dirent *a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 78 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_read( unsigned int a1, char *a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 0 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_fadvise64( int a1, loff_t a2, long a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 221 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setuid( uid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 105 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getgroups( int a1, gid_t *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 115 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sync( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 162 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getsockname( int a1, struct sockaddr *a2, int *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 51 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_munmap( unsigned long a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 11 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_inotify_init( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 253 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_statfs( const char *a1, struct statfs *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 137 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setreuid( uid_t a1, uid_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 113 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_umask( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 95 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_rt_sigaction( int a1, const struct sigaction *a2, struct sigaction *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 13 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_symlinkat( const char *a1, int a2, const char *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 266 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_listxattr( const char *a1, char *a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 194 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_capset( cap_user_header_t a1, const cap_user_data_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 126 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getrusage( int a1, struct rusage *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 98 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getpriority( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 140 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_keyctl( int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 250 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_utimensat( int a1, const char *a2, struct timespec *a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 280 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_tgkill( pid_t a1, pid_t a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 234 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_setattr( pid_t a1, struct sched_attr *a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 314 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_times( struct sysinfo *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 100 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setrlimit( unsigned int a1, struct rlimit *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 160 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getdents64( unsigned int a1, struct linux_dirent64 *a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 217 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_perf_event_open( struct perf_event_attr *a1, pid_t a2, int a3, int a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 298 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_write( unsigned int a1, const char *a2, long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 1 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mlockall( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 151 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_sendmmsg( int a1, struct mmsghdr *a2, unsigned int a3, unsigned int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 307 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_inotify_init1( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 294 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_sendto( int a1, void *a2, long a3, unsigned a4, struct sockaddr *a5, int a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 44 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_lstat( const char *a1, struct stat *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 6 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_removexattr( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 197 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_get_priority_max( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 146 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_getsockopt( int a1, int a2, int a3, char *a4, int *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 55 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_clock_nanosleep( const clockid_t a1, int a2, const struct timespec *a3, struct timespec *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 230 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_seccomp( unsigned int a1, unsigned int a2, const char *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 317 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_process_vm_readv( pid_t a1, const struct iovec *a2, unsigned long a3, const struct iovec *a4, unsigned long a5, unsigned long a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 310 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fchdir( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 81 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_nanosleep( struct timespec *a1, struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 35 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fstatfs( unsigned int a1, struct statfs *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 138 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_access( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 21 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_capget( cap_user_header_t a1, cap_user_data_t a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 125 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sysfs( int a1, unsigned long a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 139 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_epoll_wait( int a1, struct epoll_event *a2, int a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 232 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_dup3( unsigned int a1, unsigned int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 292 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_inotify_add_watch( int a1, const char *a2, u32 a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 254 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_munlock( unsigned long a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 150 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_time( time_t *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 201 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mkdir( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 83 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_kcmp( pid_t a1, pid_t a2, int a3, unsigned long a4, unsigned long a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 312 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_msgrcv( int a1, struct msgbuf *a2, long a3, long a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 70 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sigaltstack( const stack_t *a1, stack_t *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 131 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_timerfd_create( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 283 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_clock_settime( const clockid_t a1, const struct timespec *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 227 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_inotify_rm_watch( int a1, __s32 a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 255 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_sched_getaffinity( pid_t a1, unsigned int a2, unsigned long *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 204 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_pwrite64( unsigned int a1, const char *a2, long a3, loff_t a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 18 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_ustat( unsigned a1, struct ustat *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 136 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mprotect( unsigned long a1, long a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 10 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_delete_module( const char *a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 176 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_accept( int a1, struct sockaddr *a2, int *a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 43 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_dup2( unsigned int a1, unsigned int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 33 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys__sysctl( struct __sysctl_args *a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 156 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_add_key( const char *a1, const char *a2, const void *a3, long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 248 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_ioctl( unsigned int a1, unsigned int a2, unsigned long a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 16 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getpgid( pid_t a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 121 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_fchown( unsigned int a1, uid_t a2, gid_t a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 93 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_finit_module( int a1, const char *a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 313 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_mq_timedreceive( mqd_t a1, char *a2, long a3, unsigned int *a4, const struct timespec *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 243 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_vhangup( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 153 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_setns( int a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 308 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_mlock( unsigned long a1, long a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 149 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_creat( const char *a1, int a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 85 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_quotactl( unsigned int a1, const char *a2, qid_t a3, void *a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 179 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_openat( int a1, const char *a2, int a3, int a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 257 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_recvfrom( int a1, void *a2, long a3, unsigned a4, struct sockaddr *a5, int *a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 45 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_mmap( unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 9 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static int volatile __attribute__((noinline))sys_pselect6( int a1, fd_set *a2, fd_set *a3, fd_set *a4, struct timespec *a5, void *a6 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; register long int r9 asm("r9")=a6; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 270 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8,(void*)r9);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_pivot_root( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 155 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_pause( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 34 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_getrandom( char *a1, long a2, unsigned int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 318 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_link( const char *a1, const char *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 86 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_select( int a1, fd_set *a2, fd_set *a3, fd_set *a4, struct timeval *a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 23 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_open( const char *a1, int a2, int a3 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 2 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_setxattr( const char *a1, const char *a2, const void *a3, long a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 188 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_munlockall( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 152 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_ptrace( long a1, long a2, unsigned long a3, unsigned long a4 ){ int sysret; register long int r10 asm("r10")= a4; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 101 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r10) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_dup( unsigned int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 32 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_linkat( int a1, const char *a2, int a3, const char *a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 265 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_exit_group( int a1 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 231 | 0 ) | 0 ) ) , "D" (a1) : "memory","rcx", "r11" ); return( sysret ); }
static int volatile __attribute__((noinline))sys_fchownat( int a1, const char *a2, uid_t a3, gid_t a4, int a5 ){ int sysret; register long int r10 asm("r10")= a4; register long int r8 asm("r8")= a5 ; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 260 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) , "r" (r8) : "memory","rcx", "r11" ); asm volatile("jmp 1f\n");opt_fence((void*)r10,(void*)r8);asm volatile("1:\n"); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_restart_syscall( ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 219 | 0 ) | 0 ) ) : "memory","rcx", "r11" ); return( sysret ); }
static inline int volatile __attribute__((always_inline)) sys_settimeofday( struct timeval *a1, struct timezone *a2 ){ int sysret; asm volatile ("syscall" : "=a" (sysret) : "a" ( (( 164 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) : "memory","rcx", "r11" ); return( sysret ); }
#pragma GCC diagnostic pop
static int nwrite(int fd, const char *buf, int len);
static int strncmp(const char*c1,const char*c2,ml_size_t len);
static int execvpe(const char *file, char *const argv[], char *const envp[]);
char* getenv(const char* name);
static int rwfd(const int syscallnumber, int fd, char *buf, int len);
static int _strcmp(const char *s1, const char *s2, ml_size_t n);
static int volatile open( const char *s, int flags, ... );
char* fgets(char *buf, int size, FILE* F);
static int nread(int fd, char *buf, int len);
static ml_size_t strlen(const char*str);
static int strcmp(const char*c1,const char*c2);
int where(const char *name,char *buf);
static inline int fgetc(FILE *F);
static void ml_ewriteui(unsigned int ui);
static int volatile creat( const char *s, int mode );
static inline int execvp(const char *file, char *const argv[]);
char *getcwd( char* buf, long size );
pid_t wait(int *wstatus);
int ml_getcwd( char* buf, int size );
int putenv( char *string );
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
static inline int __attribute__((always_inline)) fflush( FILE *F ){
  return(0);
}
int snprintf( char *buf, long size, const char *fmt, ... );
static inline int __attribute__((always_inline))fileno( FILE *F ){
  if ( F==(int*)0 )
    return ( 0 );
  if ( F==(int*)1 )
    return(1);
  if ( F==(int*)2 )
     return(2);
  return( (F==0) ? 0 : (*F & 0x3fffff) );
}
static inline long fwrite(const void *ptr, long size, long nmemb, FILE *f){
  const void *p = ptr;
  int a;
  for ( a = 0; a<nmemb; a++ ){
    if ( nwrite( fileno(f), p, size ) != size ){
      *f = *f | 0x400000;
      return(a);
    }
    p = p + size;
  }
  return(a);
}
static inline long fread(void *ptr, long size, long nmemb, FILE *f){
  void *p = ptr;
  int a;
  for ( a = 0; a<nmemb; a++ ){
    if ( nread( fileno(f), p, size ) != size ){
      *f = *f | 0x800000 ;
      return(a);
    }
    p = p + size;
  }
  return(a);
}
static inline int feof(FILE *f){
  if ( f && (*f & 0xc00000) )
    return(1);
  return(0);
}
static inline int ferror(FILE *f){
  if ( *f & 0xc00000 )
    return(1);
  return(0);
}
static inline void clearerr(FILE *f){
  *f = *f & 0x3fffff;
}
static inline void clearerror(FILE *f){
  *f = *f & 0x3fffff;
}
static void setbuf(FILE *stream, char *buf){
}
static int setvbuf(FILE *stream, char *buf, int mode, long size){
  return(0);
}
static int fwriten( const char *buf, ml_size_t len, FILE *F){
 return( fwrite( buf, len, 1, F ) );
}
static int freadn( char *buf, ml_size_t len, FILE *F){
 return( fread( buf, len, 1, F ) );
}
       
void __attribute__((naked,noreturn))_start(){
__asm__ volatile("#.global _start\n#_start:\n xorl %ebp, %ebp\n	popq %rdi\n	movq %rsp,%rsi\n	movq %rdi,%rax\n	leaq  8(%rsi,%rdi,8),%rdx\n"
 "call _startup\n"
 "xor %esp,%esp\nret"
 );
};
static void setmlgl(minilib_globals* ml){
 arch_prctl(0x1002,ml);
}
minilib_globals __mlgl;
int main();
void __attribute__((noreturn))_startup(int argc, char **argv, char **envp ){
setmlgl(&__mlgl);
minilib_globals *pmlgl = &__mlgl;
 int a = 0;
 int i = 0;
 pmlgl->stream = pmlgl->_stream;
for (; i<3; i++ )
 mlgl()->stream[i]=i;
mlgl()->pstream = i;
mlgl()->environ = envp;
int ret = 0;
mlgl()->stacktop = &ret;
asm("jmp 1f");
goto __NOOPT;
__NOOPT2:
asm("1:");
 ret = main(argc,argv,envp);
__NOOPT:
 asm volatile (".global __exit\n__exit:\nmovq $60,%%rax\nsyscall\n"::"D"(ret));
 opt_fence((void*)pmlgl);
 goto __NOOPT2;
}
pid_t wait(int *wstatus){
 return(wait4(-1,wstatus,0,0));
}
pid_t waitpid(pid_t pid, int *wstatus, int options){
 return(wait4(pid,wstatus,options,0));
}
static int _strcmp(const char *s1, const char *s2, ml_size_t n){
 do {
  if (*s1 != *s2++)
   return (*(unsigned char *)s1 - *(unsigned char *)--s2);
  if (*s1++ == 0)
   break;
 } while (--n != 0);
 return (0);
}
static int strcmp(const char*c1,const char*c2){
 return( _strcmp(c1,c2,-1) );
}
static int strncmp(const char*c1,const char*c2,ml_size_t len){
 if ( len==0 )
  return(0);
 return(_strcmp(c1,c2,len) );
}
static int volatile open( const char *s, int flags, ... ){
  int ret;
  va_list args;
  __builtin_va_start(args,flags);
  int mode = __builtin_va_arg(args,int);
  __builtin_va_end(args);
  asm volatile ("syscall" : "=a" (ret) : "a" ( (2 | 0 ) ) , "D" ((unsigned long int)s), "S" (flags), "d" (mode) : "memory","rcx", "r11" );
  return(ret);
}
static int execvpe(const char *file, char *const argv[], char *const envp[]){
  if ( file[0] == 0 || file[0] == '.' || file[0] == '/' )
    return( execve( file, argv, envp ) );
  char buf[4096];
  if ( where( file, buf ))
    return( execve( buf, argv, envp ) );
  return(-1);
};
char* fgets(char *buf, int size, FILE* F){
 char *ret = buf;
 *buf = (char)fgetc(F);
 if ( feof( F ) )
  return(0);
 if ( *buf == '\n' )
  size=0;
 buf++;
 while( --size >0 ){
  *buf = (char)fgetc(F);
  if ( feof( F ) ){
   *buf = 0;
   return(ret);
  }
  if ( *buf == '\n' )
   size=0;
  buf++;
 }
 *buf = 0;
 return(ret);
}
static void ml_ewriteui(unsigned int ui){
 unsigned int _ewriteui( unsigned int i, int digit){
  if ( digit*10 < i )
   i = _ewriteui(i,digit*10);
  char c = '0' + i/digit;
  i -= i/digit * digit;
  write(1,&c,1);
  return(i);
 }
 _ewriteui(ui,1);
}
static int volatile creat( const char *s, int mode ){
  return(open( s, 00000100|00000001|00001000, mode) );
}
static inline int execvp(const char *file, char *const argv[]){
  return( execvpe( file, argv, mlgl()->environ ) );
};
static int rwfd(const int syscallnumber, int fd, char *buf, int len){
 char *b = buf;
 char *e = buf+len;
 int ret;
 do {
  asm volatile ("syscall" : "=a" (ret) : "a" ( (syscallnumber | 0 ) ) , "D" (fd), "S" (b), "d" ((e-b)) : "memory","rcx", "r11" );
  if ( ret <= 0 ){
   if ( ret == -11 || ret == -12 || ret == -4 )
    continue;
   return( b-buf ? b-buf : ret );
  }
  b+=ret;
 } while ( b < e );
 return( len );
}
char *getcwd( char* buf, long size ){
 int ret = sys_getcwd( buf, size );
 if ( ret<0 ){
  return(0);
 }
 return(buf);
}
static ml_size_t strlen(const char*str){
 if ( !str )
  return(0);
 unsigned int a;
 asm volatile( R"(
	xor %%ecx, %%ecx
	dec %%ecx
	xor %%eax,%%eax	
	repne scasb	
	neg %%ecx	
	sub $2,%%ecx
 )" : "=c"(a), "+D"(str): : "eax","cc" );
 return (a);
}
char* getenv(const char* name){
  int b;
  for ( int a=0; mlgl()->environ[a]; a++ ){
    for ( b = 0; mlgl()->environ[a][b] == name[b]; b++ ){}
    if ( ( mlgl()->environ[a][b] == '=' ) && (name[b]==0) ){
      return( &mlgl()->environ[a][b+1] );
    }
  }
  return(0);
}
static int nwrite(int fd, const char *buf, int len){
 return(rwfd(1 | 0,fd,(char*)buf,len));
}
static int nread(int fd, char *buf, int len){
 return(rwfd(0 | 0,fd,buf,len));
}
int ml_getcwd( char* buf, int size ){
 int ret = sys_getcwd( buf, size );
 return(ret);
}
int putenv( char *string ){
 char **envp;
 int pos=0;
 for ( ; string[pos]!=0 && string[pos] != '='; pos ++ );
 if ( ! pos || ! string[pos] )
  { return(-22); };
 for ( envp=mlgl()->environ; *envp; envp++ ) {
  if ( strncmp((char*)*envp, (char*)string, pos) == 0 ) {
   *envp=string;
   return(0);
  }
 }
 *envp=string;
 envp++;
 *envp=0;
 return(0);
}
int where(const char *name,char *buf){
 char *path = getenv("PATH");
 if ( !path ){
  path = "/bin:/usr/bin:/sbin:/usr/sbin:/usr/local/bin:/local/bin";
 }
 char *lastpath = path;
 while ( *path ) {
  path++;
  if ( *path == ':' || *path == 0 ){
   char *p = buf;
   for ( char *c= lastpath; c != path; (*p++ = *c++) );
   *p++ = '/';
   for ( const char *c = name; (*p++ = *c++); );
   if ( access( buf, 4 | 1 ) == 0 ){
    return( 1 );
   }
   lastpath = path + 1;
  }
 }
 return(0);
}
static inline int fgetc(FILE *F){
  unsigned long int buf = 0;
  if ( read(fileno(F), &buf, 1 ) == 0 ){
   (*F |= 0x800000 );
   return( (-1) );
  }
  return((int)buf);
}
static void prompt() {
 char buf[4096];
 char *p = getenv("USER");
 if ( p ){
  write(2,"\033[1;32m",sizeof("\033[1;32m"));
  write(2,p,strlen(p));
  write(2," ",sizeof(" "));
 }
 int l = ml_getcwd(buf,4096);
 write(2,"\033[1;34m",sizeof("\033[1;34m"));
 write(2, buf,l );
 write(2,"\033[1;33m" " $ " "\033[0;38;40m",sizeof("\033[1;33m" " $ " "\033[0;38;40m"));
}
static void _err(int retval, int fatal) {
  if (retval < 0) {
    write(2, "?\n", 2);
    if (fatal) {
      exit(1);
    }
  }
}
static int is_delim(int c) { return c == 0 || c == '|'; }
static int is_redir(int c) { return c == '>' || c == '<'; }
static int is_blank(int c) { return c == ' ' || c == '\t' || c == '\n'; }
static int is_special(int c) {
  return is_delim(c) || is_redir(c) || is_blank(c);
}
static void run(char *c, int t) {
  char *redir_stdin = 0;
  char *redir_stdout = 0;
  int pipefds[2] = {0, 0};
  int outfd = 0;
  char *v[99] = {0};
  char **u;
  u = &v[98];
  for (;;) {
    c--;
    if (is_delim(*c)) {
      break;
    }
    if (!is_special(*c)) {
      c++;
      *c = 0;
      for (; !is_special(*--c);) {
      }
      *--u = ++c;
    }
    if (is_redir(*c)) {
      if (*c == '<') {
        redir_stdin = *u;
      } else {
        redir_stdout = *u;
      }
      if (u - v != 98) {
        u++;
      }
    }
  }
  if (u - v == 98) {
    return;
  }
typedef struct _cmd{
 char *command;
 void *label;
} cmd;
 cmd table[] = { {"q", &&cmd_exit }, { "cd", &&cmd_cd }, { "exit", &&cmd_exit }, { "help", &&cmd_help },
      { "export", &&cmd_export },
       { 0,0 } };
 for ( cmd *c = table; c->label; c++ )
  if ( !strcmp( c->command, *u ) )
    goto *c->label;
   goto CONT;
cmd_cd:
 if ( !u[1] )
  _err(chdir(getenv("HOME")),0);
 else
  _err(chdir(u[1]),0);
 return;
cmd_help:
 write(2,"tinysh - a shell with pipes, and redirection. <|> \n" "q, exit to exit\n",sizeof("tinysh - a shell with pipes, and redirection. <|> \n" "q, exit to exit\n"));
 return;
cmd_exit:
 write(2,"Bye\n",sizeof("Bye\n"));
  exit(0);
cmd_export:
 *u = "env";
CONT:
  if (*c) {
    pipe(pipefds);
    outfd = pipefds[1];
  }
  int pid = fork();
  if (pid) {
    _err(pid,01);
    if (outfd) {
      run(c, outfd);
      close(outfd);
      close(pipefds[0]);
    }
    wait(0);
    return;
  }
  if (outfd) {
    dup2(pipefds[0], 0);
    close(pipefds[0]);
    close(outfd);
  }
  if (redir_stdin) {
    close(0);
    _err(open(redir_stdin, 0),01);
  }
  if (t) {
    dup2(t, 1);
    close(t);
  }
  if (redir_stdout) {
    close(1);
    _err(creat(redir_stdout, 438),01);
  }
  _err(execvp(*u, u),01);
}
int main() {
  for (;;) {
    prompt();
    char q[512] = {0};
    char *c = q;
    if (fgets(c + 1, sizeof(q) - 1, (int*)0) == 0) {
      exit(0);
    }
    while (*++c);
    run(c, 0);
  }
}
