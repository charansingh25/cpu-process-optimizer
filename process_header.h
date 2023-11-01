#include <time.h>

/// process information
typedef struct proc_t {
    int tid;               // task id
    char cmd[16];          // name
    float pcpu;            // %CPU during sampling
    unsigned long utime;   // time in user mode
    unsigned long stime;   // time in kernel mode
    unsigned long vm_rss;  // resident set size (in kB)
} proc_t;