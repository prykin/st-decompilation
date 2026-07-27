#ifndef ST_PSEUDOCODE_RUNTIME_H
#define ST_PSEUDOCODE_RUNTIME_H

/* Standalone corpus code has no debugger continuation path. */
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
static inline uint32_t STPackTagged24(uint32_t tag, uint32_t value) {
    return (value & 0x00ffffffu) | ((tag & 0xffu) << 24);
}
#if defined(_MSC_VER)
__declspec(noreturn) static __inline void STDebugBreak(void) { abort(); }
#else
static inline __attribute__((noreturn)) void STDebugBreak(void) { abort(); }
#endif

#endif
