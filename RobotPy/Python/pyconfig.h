/* pyconfig.h.in.  Generated from configure.in by autoheader.  */


#ifndef Py_PYCONFIG_H
#define Py_PYCONFIG_H


/* Define for AIX if your compiler is a genuine IBM xlC/xlC_r and you want
   support for AIX C++ shared extension modules. */
#undef AIX_GENUINE_CPLUSPLUS

/* Define this if you have AtheOS threads. */
#undef ATHEOS_THREADS

/* Define if you have the Mach cthreads package */
#undef C_THREADS

/* Define if C doubles are 64-bit IEEE 754 binary format, stored in ARM
   mixed-endian order (byte order 45670123) */
#undef DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754

/* Define if C doubles are 64-bit IEEE 754 binary format, stored with the most
   significant byte first */
#define DOUBLE_IS_BIG_ENDIAN_IEEE754 1

/* Define if C doubles are 64-bit IEEE 754 binary format, stored with the
   least significant byte first */
#undef DOUBLE_IS_LITTLE_ENDIAN_IEEE754

/* Define if --enable-ipv6 is specified */
#undef ENABLE_IPV6

/* Define if getpgrp() must be called as getpgrp(0). */
#undef GETPGRP_HAVE_ARG

/* Define if gettimeofday() does not have second (timezone) argument This is
   the case on Motorola V4 (R40V4.2) */
#undef GETTIMEOFDAY_NO_TZ

/* Define to 1 if you have the `acosh' function. */
#undef HAVE_ACOSH

/* struct addrinfo (netdb.h) */
#define HAVE_ADDRINFO 1

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define this if your time.h defines altzone. */
#undef HAVE_ALTZONE

/* Define to 1 if you have the `asinh' function. */
#undef HAVE_ASINH

/* Define to 1 if you have the <asm/types.h> header file. */
#undef HAVE_ASM_TYPES_H

/* Define to 1 if you have the `atanh' function. */
#undef HAVE_ATANH

/* Define if GCC supports __attribute__((format(PyArg_ParseTuple, 2, 3))) */
#undef HAVE_ATTRIBUTE_FORMAT_PARSETUPLE

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#undef HAVE_BIND_TEXTDOMAIN_CODESET

/* Define to 1 if you have the <bluetooth/bluetooth.h> header file. */
#undef HAVE_BLUETOOTH_BLUETOOTH_H

/* Define to 1 if you have the <bluetooth.h> header file. */
#undef HAVE_BLUETOOTH_H

/* Define if mbstowcs(NULL, "text", 0) does not return the number of wide
   chars that would be converted. */
#undef HAVE_BROKEN_MBSTOWCS

/* Define if nice() returns success/failure instead of the new priority. */
#undef HAVE_BROKEN_NICE

/* Define if poll() sets errno on invalid file descriptors. */
#undef HAVE_BROKEN_POLL

/* Define if the Posix semaphores do not work on your system */
#undef HAVE_BROKEN_POSIX_SEMAPHORES

/* Define if pthread_sigmask() does not work on your system. */
#undef HAVE_BROKEN_PTHREAD_SIGMASK

/* define to 1 if your sem_getvalue is broken. */
#undef HAVE_BROKEN_SEM_GETVALUE

/* Define this if you have the type _Bool. */
#undef HAVE_C99_BOOL

/* Define to 1 if you have the `chflags' function. */
#undef HAVE_CHFLAGS

/* Define to 1 if you have the `chown' function. */
#undef HAVE_CHOWN

/* Define if you have the 'chroot' function. */
#undef HAVE_CHROOT

/* Define to 1 if you have the `clock' function. */
#define HAVE_CLOCK 1

/* Define to 1 if you have the `confstr' function. */
#undef HAVE_CONFSTR

/* Define to 1 if you have the <conio.h> header file. */
#undef HAVE_CONIO_H

/* Define to 1 if you have the `copysign' function. */
#define HAVE_COPYSIGN 1

/* Define to 1 if you have the `ctermid' function. */
#undef HAVE_CTERMID

/* Define if you have the 'ctermid_r' function. */
#undef HAVE_CTERMID_R

/* Define to 1 if you have the <curses.h> header file. */
#undef HAVE_CURSES_H

/* Define if you have the 'is_term_resized' function. */
#undef HAVE_CURSES_IS_TERM_RESIZED

/* Define if you have the 'resizeterm' function. */
#undef HAVE_CURSES_RESIZETERM

/* Define if you have the 'resize_term' function. */
#undef HAVE_CURSES_RESIZE_TERM

/* Define to 1 if you have the declaration of `isfinite', and to 0 if you
   don't. */
#define HAVE_DECL_ISFINITE 0

/* Define to 1 if you have the declaration of `isinf', and to 0 if you don't.
   */
#define HAVE_DECL_ISINF 0

/* Define to 1 if you have the declaration of `isnan', and to 0 if you don't.
   */
#define HAVE_DECL_ISNAN 0

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
#define HAVE_DECL_TZNAME 0

/* Define to 1 if you have the device macros. */
#undef HAVE_DEVICE_MACROS

/* Define if we have /dev/ptc. */
#undef HAVE_DEV_PTC

/* Define if we have /dev/ptmx. */
#undef HAVE_DEV_PTMX

/* Define to 1 if you have the <direct.h> header file. */
#undef HAVE_DIRECT_H

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the `dlopen' function. */
#undef HAVE_DLOPEN

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Defined when any dynamic module loading is enabled. */
#define HAVE_DYNAMIC_LOADING 1

/* Define if you have the 'epoll' functions. */
#undef HAVE_EPOLL

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `execv' function. */
#undef HAVE_EXECV

/* Define to 1 if you have the `expm1' function. */
#undef HAVE_EXPM1

/* Define if you have the 'fchdir' function. */
#undef HAVE_FCHDIR

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fchown' function. */
#undef HAVE_FCHOWN

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if you have the 'fdatasync' function. */
#define HAVE_FDATASYNC 1

/* Define to 1 if you have the `finite' function. */
#undef HAVE_FINITE

/* Define if you have the 'flock' function. */
#undef HAVE_FLOCK

/* Define to 1 if you have the `fork' function. */
#undef HAVE_FORK

/* Define to 1 if you have the `forkpty' function. */
#undef HAVE_FORKPTY

/* Define to 1 if you have the `fpathconf' function. */
#define HAVE_FPATHCONF 1

/* Define to 1 if you have the `fseek64' function. */
#undef HAVE_FSEEK64

/* Define to 1 if you have the `fseeko' function. */
#undef HAVE_FSEEKO

/* Define to 1 if you have the `fstatvfs' function. */
#undef HAVE_FSTATVFS

/* Define if you have the 'fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `ftell64' function. */
#undef HAVE_FTELL64

/* Define to 1 if you have the `ftello' function. */
#undef HAVE_FTELLO

/* Define to 1 if you have the `ftime' function. */
#undef HAVE_FTIME

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `gai_strerror' function. */
#undef HAVE_GAI_STRERROR

/* Define if we can use gcc inline assembler to get and set x87 control word
   */
#undef HAVE_GCC_ASM_FOR_X87

/* Define if you have the getaddrinfo function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define this if you have flockfile(), getc_unlocked(), and funlockfile() */
#undef HAVE_GETC_UNLOCKED

/* Define to 1 if you have the `getgroups' function. */
#undef HAVE_GETGROUPS

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define this if you have some version of gethostbyname_r() */
#undef HAVE_GETHOSTBYNAME_R

/* Define this if you have the 3-arg version of gethostbyname_r(). */
#undef HAVE_GETHOSTBYNAME_R_3_ARG

/* Define this if you have the 5-arg version of gethostbyname_r(). */
#undef HAVE_GETHOSTBYNAME_R_5_ARG

/* Define this if you have the 6-arg version of gethostbyname_r(). */
#undef HAVE_GETHOSTBYNAME_R_6_ARG

/* Define to 1 if you have the `getitimer' function. */
#undef HAVE_GETITIMER

/* Define to 1 if you have the `getloadavg' function. */
#undef HAVE_GETLOADAVG

/* Define to 1 if you have the `getlogin' function. */
#undef HAVE_GETLOGIN

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define if you have the 'getpagesize' function. */
#undef HAVE_GETPAGESIZE

/* Define to 1 if you have the `getpeername' function. */
#define HAVE_GETPEERNAME 1

/* Define to 1 if you have the `getpgid' function. */
#undef HAVE_GETPGID

/* Define to 1 if you have the `getpgrp' function. */
#undef HAVE_GETPGRP

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getpriority' function. */
#undef HAVE_GETPRIORITY

/* Define to 1 if you have the `getpwent' function. */
#undef HAVE_GETPWENT

/* Define to 1 if you have the `getsid' function. */
#undef HAVE_GETSID

/* Define to 1 if you have the `getspent' function. */
#undef HAVE_GETSPENT

/* Define to 1 if you have the `getspnam' function. */
#undef HAVE_GETSPNAM

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the `getwd' function. */
#define HAVE_GETWD 1

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H

/* Define if you have the 'hstrerror' function. */
#undef HAVE_HSTRERROR

/* Define to 1 if you have the `hypot' function. */
#undef HAVE_HYPOT

/* Define to 1 if you have the <ieeefp.h> header file. */
#undef HAVE_IEEEFP_H

/* Define if you have the 'inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define if you have the 'inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the <io.h> header file. */
#undef HAVE_IO_H

/* Define to 1 if you have the `kill' function. */
#define HAVE_KILL 1

/* Define to 1 if you have the `killpg' function. */
#undef HAVE_KILLPG

/* Define if you have the 'kqueue' functions. */
#undef HAVE_KQUEUE

/* Define to 1 if you have the <langinfo.h> header file. */
#undef HAVE_LANGINFO_H

/* Defined to enable large file support when an off_t is bigger than a long
   and long long is available and at least as big as an off_t. You may need to
   add some flags for configuration and compilation to enable this mode. (For
   Solaris and Linux, the necessary defines are already defined.) */
#undef HAVE_LARGEFILE_SUPPORT

/* Define to 1 if you have the `lchflags' function. */
#undef HAVE_LCHFLAGS

/* Define to 1 if you have the `lchmod' function. */
#undef HAVE_LCHMOD

/* Define to 1 if you have the `lchown' function. */
#undef HAVE_LCHOWN

/* Define to 1 if you have the `dl' library (-ldl). */
#undef HAVE_LIBDL

/* Define to 1 if you have the `dld' library (-ldld). */
#undef HAVE_LIBDLD

/* Define to 1 if you have the `ieee' library (-lieee). */
#undef HAVE_LIBIEEE

/* Define to 1 if you have the <libintl.h> header file. */
#undef HAVE_LIBINTL_H

/* Define if you have the readline library (-lreadline). */
#undef HAVE_LIBREADLINE

/* Define to 1 if you have the `resolv' library (-lresolv). */
#undef HAVE_LIBRESOLV

/* Define to 1 if you have the <libutil.h> header file. */
#undef HAVE_LIBUTIL_H

/* Define if you have the 'link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the <linux/netlink.h> header file. */
#undef HAVE_LINUX_NETLINK_H

/* Define to 1 if you have the <linux/tipc.h> header file. */
#undef HAVE_LINUX_TIPC_H

/* Define to 1 if you have the `log1p' function. */
#undef HAVE_LOG1P

/* Define this if you have the type long double. */
#undef HAVE_LONG_DOUBLE

/* Define this if you have the type long long. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the `lstat' function. */
#undef HAVE_LSTAT

/* Define this if you have the makedev macro. */
#undef HAVE_MAKEDEV

/* Define to 1 if you have the `mbrtowc' function. */
#undef HAVE_MBRTOWC

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mkfifo' function. */
#undef HAVE_MKFIFO

/* Define to 1 if you have the `mknod' function. */
#undef HAVE_MKNOD

/* Define to 1 if you have the `mktime' function. */
#undef HAVE_MKTIME

/* Define to 1 if you have the `mremap' function. */
#undef HAVE_MREMAP

/* Define to 1 if you have the <ncurses.h> header file. */
#undef HAVE_NCURSES_H

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the <netpacket/packet.h> header file. */
#undef HAVE_NETPACKET_PACKET_H

/* Define to 1 if you have the `nice' function. */
#undef HAVE_NICE

/* Define to 1 if you have the `openpty' function. */
#undef HAVE_OPENPTY

/* Define if compiling using MacOS X 10.5 SDK or later. */
#undef HAVE_OSX105_SDK

/* Define to 1 if you have the `pathconf' function. */
#define HAVE_PATHCONF 1

/* Define to 1 if you have the `pause' function. */
#undef HAVE_PAUSE

/* Define to 1 if you have the `plock' function. */
#undef HAVE_PLOCK

/* Define to 1 if you have the `poll' function. */
#undef HAVE_POLL

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the <process.h> header file. */
#undef HAVE_PROCESS_H

/* Define if your compiler supports function prototype */
#define HAVE_PROTOTYPES 1

/* Define if you have GNU PTH threads. */
#undef HAVE_PTH

/* Defined for Solaris 2.6 bug in pthread header. */
#undef HAVE_PTHREAD_DESTRUCTOR

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `pthread_init' function. */
#undef HAVE_PTHREAD_INIT

/* Define to 1 if you have the `pthread_sigmask' function. */
#define HAVE_PTHREAD_SIGMASK 1

/* Define to 1 if you have the <pty.h> header file. */
#undef HAVE_PTY_H

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `readlink' function. */
#undef HAVE_READLINK

/* Define to 1 if you have the `realpath' function. */
#undef HAVE_REALPATH

/* Define if you have readline 2.1 */
#undef HAVE_RL_CALLBACK

/* Define if you can turn off readline's signal handling. */
#undef HAVE_RL_CATCH_SIGNAL

/* Define if you have readline 2.2 */
#undef HAVE_RL_COMPLETION_APPEND_CHARACTER

/* Define if you have readline 4.0 */
#undef HAVE_RL_COMPLETION_DISPLAY_MATCHES_HOOK

/* Define if you have readline 4.2 */
#undef HAVE_RL_COMPLETION_MATCHES

/* Define if you have rl_completion_suppress_append */
#undef HAVE_RL_COMPLETION_SUPPRESS_APPEND

/* Define if you have readline 4.0 */
#undef HAVE_RL_PRE_INPUT_HOOK

/* Define to 1 if you have the `round' function. */
#undef HAVE_ROUND

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `sem_getvalue' function. */
#define HAVE_SEM_GETVALUE 1

/* Define to 1 if you have the `sem_open' function. */
#define HAVE_SEM_OPEN 1

/* Define to 1 if you have the `sem_timedwait' function. */
#undef HAVE_SEM_TIMEDWAIT

/* Define to 1 if you have the `sem_unlink' function. */
#define HAVE_SEM_UNLINK 1

/* Define to 1 if you have the `setegid' function. */
#undef HAVE_SETEGID

/* Define to 1 if you have the `seteuid' function. */
#undef HAVE_SETEUID

/* Define to 1 if you have the `setgid' function. */
#undef HAVE_SETGID

/* Define if you have the 'setgroups' function. */
#undef HAVE_SETGROUPS

/* Define to 1 if you have the `setitimer' function. */
#undef HAVE_SETITIMER

/* Define to 1 if you have the `setlocale' function. */
#undef HAVE_SETLOCALE

/* Define to 1 if you have the `setpgid' function. */
#undef HAVE_SETPGID

/* Define to 1 if you have the `setpgrp' function. */
#undef HAVE_SETPGRP

/* Define to 1 if you have the `setregid' function. */
#undef HAVE_SETREGID

/* Define to 1 if you have the `setreuid' function. */
#undef HAVE_SETREUID

/* Define to 1 if you have the `setsid' function. */
#undef HAVE_SETSID

/* Define to 1 if you have the `setuid' function. */
#undef HAVE_SETUID

/* Define to 1 if you have the `setvbuf' function. */
#undef HAVE_SETVBUF

/* Define to 1 if you have the <shadow.h> header file. */
#undef HAVE_SHADOW_H

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `siginterrupt' function. */
#undef HAVE_SIGINTERRUPT

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigrelse' function. */
#undef HAVE_SIGRELSE

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if sockaddr has sa_len member */
#define HAVE_SOCKADDR_SA_LEN 1

/* struct sockaddr_storage (sys/socket.h) */
#define HAVE_SOCKADDR_STORAGE 1

/* Define if you have the 'socketpair' function. */
#undef HAVE_SOCKETPAIR

/* Define if your compiler provides ssize_t */
#define HAVE_SSIZE_T 1

/* Define to 1 if you have the `statvfs' function. */
#undef HAVE_STATVFS

/* Define if you have struct stat.st_mtim.tv_nsec */
#undef HAVE_STAT_TV_NSEC

/* Define if you have struct stat.st_mtimensec */
#undef HAVE_STAT_TV_NSEC2

/* Define if your compiler supports variable length function prototypes (e.g.
   void fprintf(FILE *, char *, ...);) *and* <stdarg.h> */
#define HAVE_STDARG_PROTOTYPES 1

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
#undef HAVE_STRLCPY

/* Define to 1 if you have the <stropts.h> header file. */
#undef HAVE_STROPTS_H

/* Define to 1 if `st_birthtime' is member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BIRTHTIME

/* Define to 1 if `st_blksize' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if `st_blocks' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLOCKS 1

/* Define to 1 if `st_flags' is member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_FLAGS

/* Define to 1 if `st_gen' is member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_GEN

/* Define to 1 if `st_rdev' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define to 1 if `tm_zone' is member of `struct tm'. */
#undef HAVE_STRUCT_TM_TM_ZONE

/* Define to 1 if your `struct stat' has `st_blocks'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLOCKS' instead. */
#define HAVE_ST_BLOCKS 1

/* Define if you have the 'symlink' function. */
#undef HAVE_SYMLINK

/* Define to 1 if you have the `sysconf' function. */
#undef HAVE_SYSCONF

/* Define to 1 if you have the <sysexits.h> header file. */
#undef HAVE_SYSEXITS_H

/* Define to 1 if you have the <sys/audioio.h> header file. */
#undef HAVE_SYS_AUDIOIO_H

/* Define to 1 if you have the <sys/bsdtty.h> header file. */
#undef HAVE_SYS_BSDTTY_H

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/epoll.h> header file. */
#undef HAVE_SYS_EPOLL_H

/* Define to 1 if you have the <sys/event.h> header file. */
#undef HAVE_SYS_EVENT_H

/* Define to 1 if you have the <sys/file.h> header file. */
#undef HAVE_SYS_FILE_H

/* Define to 1 if you have the <sys/loadavg.h> header file. */
#undef HAVE_SYS_LOADAVG_H

/* Define to 1 if you have the <sys/lock.h> header file. */
#undef HAVE_SYS_LOCK_H

/* Define to 1 if you have the <sys/mkdev.h> header file. */
#undef HAVE_SYS_MKDEV_H

/* Define to 1 if you have the <sys/modem.h> header file. */
#undef HAVE_SYS_MODEM_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H

/* Define to 1 if you have the <sys/poll.h> header file. */
#undef HAVE_SYS_POLL_H

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#undef HAVE_SYS_STATVFS_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/termio.h> header file. */
#undef HAVE_SYS_TERMIO_H

/* Define to 1 if you have the <sys/times.h> header file. */
#undef HAVE_SYS_TIMES_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#undef HAVE_SYS_UTSNAME_H

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tcgetpgrp' function. */
#undef HAVE_TCGETPGRP

/* Define to 1 if you have the `tcsetpgrp' function. */
#undef HAVE_TCSETPGRP

/* Define to 1 if you have the `tempnam' function. */
#define HAVE_TEMPNAM 1

/* Define to 1 if you have the <termios.h> header file. */
#undef HAVE_TERMIOS_H

/* Define to 1 if you have the <term.h> header file. */
#undef HAVE_TERM_H

/* Define to 1 if you have the <thread.h> header file. */
#undef HAVE_THREAD_H

/* Define to 1 if you have the `timegm' function. */
#undef HAVE_TIMEGM

/* Define to 1 if you have the `times' function. */
#undef HAVE_TIMES

/* Define to 1 if you have the `tmpfile' function. */
#define HAVE_TMPFILE 1

/* Define to 1 if you have the `tmpnam' function. */
#define HAVE_TMPNAM 1

/* Define to 1 if you have the `tmpnam_r' function. */
#undef HAVE_TMPNAM_R

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#undef HAVE_TM_ZONE

/* Define to 1 if you have the `truncate' function. */
#undef HAVE_TRUNCATE

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
#undef HAVE_TZNAME

/* Define this if you have tcl and TCL_UTF_MAX==6 */
#undef HAVE_UCS4_TCL

/* Define to 1 if the system has the type `uintptr_t'. */
#undef HAVE_UINTPTR_T

#define HAVE_UINT32_T 1
#define HAVE_UINT64_T 1
#define HAVE_INT32_T 1
#define HAVE_INT64_T 1

#define PY_UINT32_T uint32_t
#define PY_UINT64_T uint64_t
#define PY_INT32_T int32_t
#define PY_INT64_T int64_t

/* Define to 1 if you have the `uname' function. */
#undef HAVE_UNAME

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#undef HAVE_UNSETENV

/* Define if you have a useable wchar_t type defined in wchar.h; useable means
   wchar_t must be an unsigned type with at least 16 bits. (see
   Include/unicodeobject.h). */
#define HAVE_USABLE_WCHAR_T 1

/* Define to 1 if you have the `utimes' function. */
#undef HAVE_UTIMES

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the `wait3' function. */
#undef HAVE_WAIT3

/* Define to 1 if you have the `wait4' function. */
#undef HAVE_WAIT4

/* Define to 1 if you have the `waitpid' function. */
#undef HAVE_WAITPID

/* Define if the compiler provides a wchar.h header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the `wcscoll' function. */
#undef HAVE_WCSCOLL

/* Define to 1 if you have the `wcsftime' function. */
#undef HAVE_WCSFTIME

/* Define to 1 if you have the `wcsxfrm' function. */
#undef HAVE_WCSXFRM

/* Define if tzset() actually switches the local timezone in a meaningful way.
   */
#undef HAVE_WORKING_TZSET

/* Define if the zlib library has inflateCopy */
#undef HAVE_ZLIB_COPY

/* Define to 1 if you have the `_getpty' function. */
#undef HAVE__GETPTY

/* Define if you are using Mach cthreads directly under /include */
#undef HURD_C_THREADS

/* Define if you are using Mach cthreads under mach / */
#undef MACH_C_THREADS

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
#undef MAJOR_IN_MKDEV

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
#undef MAJOR_IN_SYSMACROS

/* Define if mvwdelch in curses.h is an expression. */
#undef MVWDELCH_IS_EXPRESSION

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#define PACKAGE_NAME "python"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "python 3.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "python-3.1.2"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.1.2"

/* Define if POSIX semaphores aren't enabled on your system */
#undef POSIX_SEMAPHORES_NOT_ENABLED

/* Defined if PTHREAD_SCOPE_SYSTEM supported. */
#undef PTHREAD_SYSTEM_SCHED_SUPPORTED

/* Define as the preferred size in bits of long digits */
#define PYLONG_BITS_IN_DIGIT 15

/* Define to printf format modifier for Py_ssize_t */
#define PY_FORMAT_SIZE_T ""

/* Define as the integral type used for Unicode representation. */
#define PY_UNICODE_TYPE unsigned short

/* Define if you want to build an interpreter with many run-time checks. */
#undef Py_DEBUG

/* Defined if Python is built as a shared library. */
#undef Py_ENABLE_SHARED

/* Define as the size of the unicode type. */
#define Py_UNICODE_SIZE 2

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define if setpgrp() must be called as setpgrp(0, 0). */
#undef SETPGRP_HAVE_ARG

/* Define this to be extension of shared libraries (including the dot!). */
#undef SHLIB_EXT

/* Define if i>>j for signed int i does not extend the sign bit when i < 0 */
#undef SIGNED_RIGHT_SHIFT_ZERO_FILLS

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

#include <stdio.h>
/* The size of `fpos_t', as computed by sizeof. */
#define SIZEOF_FPOS_T sizeof(fpos_t)

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long double', as computed by sizeof. */
#undef SIZEOF_LONG_DOUBLE

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The number of bytes in an off_t. */
#define SIZEOF_OFF_T SIZEOF_LONG

/* The size of `pid_t', as computed by sizeof. */
#define SIZEOF_PID_T SIZEOF_INT

/* The number of bytes in a pthread_t. */
#define SIZEOF_PTHREAD_T SIZEOF_LONG

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T SIZEOF_INT

/* The number of bytes in a time_t. */
#define SIZEOF_TIME_T SIZEOF_LONG

/* The size of `uintptr_t', as computed by sizeof. */
#define SIZEOF_UINTPTR_T 4

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 2

/* The size of `_Bool', as computed by sizeof. */
#undef SIZEOF__BOOL

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/select.h> and <sys/time.h>
   (which you can't on SCO ODT 3.0). */
#define SYS_SELECT_WITH_SYS_TIME 1

/* Define if tanh(-0.) is -0., or if platform doesn't have signed zeros */
#undef TANH_PRESERVES_ZERO_SIGN

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#undef TIME_WITH_SYS_TIME

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* Define if you want to use computed gotos in ceval.c. */
#define USE_COMPUTED_GOTOS 1

/* Define if a va_list is an array of some kind */
#undef VA_LIST_IS_ARRAY

/* Define if you want SIGFPE handled (see Include/pyfpe.h). */
#undef WANT_SIGFPE_HANDLER

/* Define if you want wctype.h functions to be used instead of the one
   supplied by Python itself. (see Include/unicodectype.h). */
#undef WANT_WCTYPE_FUNCTIONS

/* Define if WINDOW in curses.h offers a field _flags. */
#undef WINDOW_HAS_FLAGS

/* Define if you want documentation strings in extension modules */
#undef WITH_DOC_STRINGS

/* Define if you want to use the new-style (Openstep, Rhapsody, MacOS) dynamic
   linker (dyld) instead of the old-style (NextStep) dynamic linker (rld).
   Dyld is necessary to support frameworks. */
#undef WITH_DYLD

/* Define to 1 if libintl is needed for locale functions. */
#undef WITH_LIBINTL

/* Define if you want to produce an OpenStep/Rhapsody framework (shared
   library plus accessory files). */
#undef WITH_NEXT_FRAMEWORK

/* Define if you want to compile in Python-specific mallocs */
#undef WITH_PYMALLOC

/* Define if you want to compile in rudimentary thread support */
#define WITH_THREAD 1

/* Define to profile with the Pentium timestamp counter */
#undef WITH_TSC

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
#define WORDS_BIGENDIAN 1

/* Define if arithmetic is subject to x87-style double rounding issue */
#undef X87_DOUBLE_ROUNDING

/* Define to 1 if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif

/* Define on OpenBSD to activate all library features */
#undef _BSD_SOURCE

/* Define on Irix to enable u_int */
#undef _BSD_TYPES

/* Define on Darwin to activate all library features */
#undef _DARWIN_C_SOURCE

/* This must be set to 64 on some systems to enable large file support. */
#undef _FILE_OFFSET_BITS

/* Define on Linux to activate all library features */
#undef _GNU_SOURCE

/* This must be defined on some systems to enable large file support. */
#undef _LARGEFILE_SOURCE

/* Define on NetBSD to activate all library features */
#undef _NETBSD_SOURCE

/* Define _OSF_SOURCE to get the makedev macro. */
#undef _OSF_SOURCE

/* Define to activate features from IEEE Stds 1003.1-2001 */
#undef _POSIX_C_SOURCE

/* Define if you have POSIX threads, and your system does not define that. */
#undef _POSIX_THREADS

/* Define to force use of thread-safe errno, h_errno, and other functions */
#undef _REENTRANT

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef was allowed, the
   #define below would cause a syntax error. */
#undef _UINT32_T

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef was allowed, the
   #define below would cause a syntax error. */
#undef _UINT64_T

/* Define to the level of X/Open that your system supports */
#undef _XOPEN_SOURCE

/* Define to activate Unix95-and-earlier features */
#undef _XOPEN_SOURCE_EXTENDED

/* Define on FreeBSD to activate all library features */
#undef __BSD_VISIBLE

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
# undef __CHAR_UNSIGNED__
#endif

/* Defined on Solaris to see additional function prototypes. */
#undef __EXTENSIONS__

/* Define to 'long' if <time.h> doesn't define. */
#undef clock_t

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
#undef int32_t

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
#undef int64_t

/* Define to `int' if <sys/types.h> does not define. */
#undef mode_t

/* Define to `long int' if <sys/types.h> does not define. */
#undef off_t

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define to empty if the keyword does not work. */
#undef signed

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define to `int' if <sys/socket.h> does not define. */
#undef socklen_t

/* Define to `int' if <sys/types.h> doesn't define. */
#undef uid_t

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
#undef uint32_t

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
#undef uint64_t

/* Define to empty if the keyword does not work. */
#undef volatile


/* Define the macros needed if on a UnixWare 7.x system. */
#if defined(__USLC__) && defined(__SCO_VERSION__)
#define STRICT_SYSV_CURSES /* Don't use ncurses extensions */
#endif

#endif /*Py_PYCONFIG_H*/
