#ifndef ST_PSEUDOCODE_RUNTIME_H
#define ST_PSEUDOCODE_RUNTIME_H

/* Standalone corpus code has no debugger continuation path. */
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
static inline uint32_t STPackTagged24(uint32_t tag, uint32_t value) {
    return (value & 0x00ffffffu) | ((tag & 0xffu) << 24);
}
static inline uint32_t STReplaceLowByte(uint32_t original, uint8_t low) {
    return (original & 0xffffff00u) | (uint32_t)low;
}
static inline uint32_t STReplaceLowWord(uint32_t original, uint16_t low) {
    return (original & 0xffff0000u) | (uint32_t)low;
}
static inline uint16_t STReplaceLowByte16(uint16_t original, uint8_t low) {
    return (uint16_t)((original & 0xff00u) | (uint16_t)low);
}
#if defined(__cplusplus)
template <typename Element, typename Array>
static inline Element *DArrayAt(Array *array, uint32_t index) {
    return reinterpret_cast<Element *>(
        reinterpret_cast<uint8_t *>(array->data) + array->elementSize * index);
}
template <typename Record, size_t Count, typename Index>
static inline uintptr_t STRecordByteAddress(Record (&records)[Count], Index index,
        uint32_t byteOffset) {
    return reinterpret_cast<uintptr_t>(
        &records[static_cast<int>(index)]) + byteOffset;
}
template <typename Grid, typename X, typename Y, typename Z>
static inline auto &STGridAt3D(Grid &grid, X x, Y y, Z z) {
    return grid.cells[static_cast<int>(x) +
        static_cast<int>(grid.sizeX) * static_cast<int>(y) +
        static_cast<int>(grid.planeStride) * static_cast<int>(z)];
}
#endif
#if defined(_MSC_VER)
__declspec(noreturn) static __inline void STDebugBreak(void) { abort(); }
#else
static inline __attribute__((noreturn)) void STDebugBreak(void) { abort(); }
#endif

#endif
