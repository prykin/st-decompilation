#ifndef ST_PSEUDOCODE_RUNTIME_H
#define ST_PSEUDOCODE_RUNTIME_H

/* Standalone corpus code has no debugger continuation path. */
#include <stdlib.h>
#include <string.h>
#if defined(_MSC_VER)
__declspec(noreturn) static __inline void STDebugBreak(void) { abort(); }
#else
static inline __attribute__((noreturn)) void STDebugBreak(void) { abort(); }
#endif

#endif
