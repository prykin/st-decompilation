#ifndef ST_PSEUDOCODE_RUNTIME_H
#define ST_PSEUDOCODE_RUNTIME_H

/* Standalone corpus code has no debugger continuation path. */
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#if defined(__cplusplus)
#include <cmath>
#include <type_traits>
template <size_t Bytes>
struct STUnsignedBytes {
    uint8_t bytes[Bytes]{};
    STUnsignedBytes() = default;
    template <typename Value> STUnsignedBytes(Value value) {
        uint64_t raw = static_cast<uint64_t>(value);
        for (size_t index = 0; index < Bytes; ++index)
            bytes[index] = static_cast<uint8_t>(raw >> (index * 8));
    }
    operator uint64_t() const {
        uint64_t raw = 0;
        for (size_t index = 0; index < Bytes; ++index)
            raw |= uint64_t(bytes[index]) << (index * 8);
        return raw;
    }
};
using undefined = uint8_t;
using undefined1 = uint8_t;
using undefined2 = uint16_t;
using undefined3 = STUnsignedBytes<3>;
using undefined4 = uint32_t;
using undefined6 = STUnsignedBytes<6>;
using undefined8 = uint64_t;
static_assert(sizeof(undefined3) == 3);
static_assert(sizeof(undefined6) == 6);
using byte = uint8_t;
using ushort = uint16_t;
using uint = uint32_t;
using ulong = uint32_t;
using int3 = int32_t;   /* logical signed 24-bit value */
using uint3 = uint32_t; /* logical unsigned 24-bit value */
using float10 = long double;
using unkbyte10 = long double; /* unresolved x87 register value */
using longlong = int64_t;
using ulonglong = uint64_t;
using code = uintptr_t(...);
#endif
#if !defined(_MSC_VER)
#ifndef __thiscall
#define __thiscall
#endif
#ifndef __stdcall
#define __stdcall
#endif
#ifndef __cdecl
#define __cdecl
#endif
#ifndef __fastcall
#define __fastcall
#endif
#endif
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
template <size_t Bytes>
using STUnsigned = std::conditional_t<(Bytes <= 1), uint8_t,
    std::conditional_t<(Bytes <= 2), uint16_t,
    std::conditional_t<(Bytes <= 4), uint32_t, uint64_t>>>;
template <typename Value>
static inline uint64_t STRawWord(Value value) {
    using Plain = std::remove_cv_t<std::remove_reference_t<Value>>;
    if constexpr (std::is_pointer_v<Plain>)
        return static_cast<uint64_t>(reinterpret_cast<uintptr_t>(value));
    else return static_cast<uint64_t>(value);
}
template <size_t Bytes>
static constexpr uint64_t STByteMask() {
    if constexpr (Bytes >= 8) return UINT64_MAX;
    else return (uint64_t{1} << (Bytes * 8)) - 1;
}
template <size_t HighBytes, size_t LowBytes, typename High, typename Low>
static inline STUnsigned<HighBytes + LowBytes> STConcat(High high, Low low) {
    uint64_t value = ((STRawWord(high) & STByteMask<HighBytes>()) <<
        (LowBytes * 8)) | (STRawWord(low) & STByteMask<LowBytes>());
    return static_cast<STUnsigned<HighBytes + LowBytes>>(value);
}
template <size_t ResultBytes, typename Value, typename Offset>
static inline STUnsigned<ResultBytes> STSubpiece(Value value, Offset offset) {
    return static_cast<STUnsigned<ResultBytes>>(
        (STRawWord(value) >> (static_cast<unsigned>(offset) * 8)) &
        STByteMask<ResultBytes>());
}
template <typename Value>
static inline int32_t STSignExtend24(Value value) {
    uint32_t raw = static_cast<uint32_t>(STRawWord(value)) & 0x00ffffffu;
    return static_cast<int32_t>(raw << 8) >> 8;
}
template <typename Value>
static inline long double fsin(Value value) {
    return std::sin(static_cast<long double>(value));
}
template <typename Value>
static inline long double fcos(Value value) {
    return std::cos(static_cast<long double>(value));
}
template <typename Left, typename Right>
static inline long double fpatan(Left left, Right right) {
    return std::atan2(static_cast<long double>(left),
        static_cast<long double>(right));
}
template <typename Word, typename Left, typename Right>
static inline bool STCarry(Left left, Right right) {
    Word a = static_cast<Word>(left), b = static_cast<Word>(right);
    return static_cast<Word>(a + b) < a;
}
template <typename Word, typename Left, typename Right>
static inline bool STSignedCarry(Left left, Right right) {
    using Unsigned = std::make_unsigned_t<Word>;
    Unsigned a = static_cast<Unsigned>(static_cast<Word>(left));
    Unsigned b = static_cast<Unsigned>(static_cast<Word>(right));
    Unsigned result = a + b, sign = Unsigned{1} << (sizeof(Word) * 8 - 1);
    return ((~(a ^ b) & (a ^ result)) & sign) != 0;
}
template <typename Word, typename Left, typename Right>
static inline bool STSignedBorrow(Left left, Right right) {
    using Unsigned = std::make_unsigned_t<Word>;
    Unsigned a = static_cast<Unsigned>(static_cast<Word>(left));
    Unsigned b = static_cast<Unsigned>(static_cast<Word>(right));
    Unsigned result = a - b, sign = Unsigned{1} << (sizeof(Word) * 8 - 1);
    return (((a ^ b) & (a ^ result)) & sign) != 0;
}
template <size_t Offset, size_t Width, typename Value>
class STPieceProxy {
public:
    explicit STPieceProxy(Value &value) : value_(&value) {}
    operator STUnsigned<Width>() const {
        const volatile uint8_t *bytes = reinterpret_cast<const volatile uint8_t *>(value_);
        uint64_t result = 0;
        for (size_t index = 0; index < Width; ++index)
            result |= uint64_t(bytes[Offset + index]) << (index * 8);
        return static_cast<STUnsigned<Width>>(result);
    }
    template <typename Source> STPieceProxy &operator=(Source source) {
        volatile uint8_t *bytes = reinterpret_cast<volatile uint8_t *>(value_);
        uint64_t raw = STRawWord(source);
        for (size_t index = 0; index < Width; ++index)
            bytes[Offset + index] = static_cast<uint8_t>(raw >> (index * 8));
        return *this;
    }
private:
    Value *value_;
};
template <size_t Offset, size_t Width, typename Value>
static inline STPieceProxy<Offset, Width, Value> STPiece(Value &value) {
    return STPieceProxy<Offset, Width, Value>(value);
}
template <size_t Offset, size_t Width, size_t Count>
static inline STUnsigned<Width> STLiteralPiece(const char (&literal)[Count]) {
    static_assert(Offset + Width <= Count, "literal piece exceeds storage");
    uint64_t result = 0;
    for (size_t index = 0; index < Width; ++index)
        result |= uint64_t(uint8_t(literal[Offset + index])) << (index * 8);
    return static_cast<STUnsigned<Width>>(result);
}
template <typename Field, typename Base>
static inline Field &STField(Base base, size_t byteOffset) {
    uintptr_t address;
    using Plain = std::remove_cv_t<std::remove_reference_t<Base>>;
    if constexpr (std::is_pointer_v<Plain>)
        address = reinterpret_cast<uintptr_t>(base);
    else address = static_cast<uintptr_t>(base);
    return *reinterpret_cast<Field *>(address + byteOffset);
}
#define CONCAT11(high, low) STConcat<1, 1>((high), (low))
#define CONCAT12(high, low) STConcat<1, 2>((high), (low))
#define CONCAT13(high, low) STConcat<1, 3>((high), (low))
#define CONCAT21(high, low) STConcat<2, 1>((high), (low))
#define CONCAT22(high, low) STConcat<2, 2>((high), (low))
#define CONCAT26(high, low) STConcat<2, 6>((high), (low))
#define CONCAT31(high, low) STConcat<3, 1>((high), (low))
#define CONCAT44(high, low) STConcat<4, 4>((high), (low))
#define SUB21(value, offset) STSubpiece<1>((value), (offset))
#define SUB41(value, offset) STSubpiece<1>((value), (offset))
#define SUB42(value, offset) STSubpiece<2>((value), (offset))
#define SUB43(value, offset) STSubpiece<3>((value), (offset))
#define SUB84(value, offset) STSubpiece<4>((value), (offset))
#define SEXT24(value) STSignExtend24((value))
#define CARRY4(left, right) STCarry<uint32_t>((left), (right))
#define SCARRY4(left, right) STSignedCarry<int32_t>((left), (right))
#define SBORROW4(left, right) STSignedBorrow<int32_t>((left), (right))
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
