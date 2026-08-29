#pragma once

#include "st/recovered_types.hpp"
#include "st/recovered_globals.hpp"
#include "st/recovered_imports.hpp"
#include "st/recovered_functions.hpp"

// Ghidra exposes the x86 ECX receiver as an explicit parameter.
// The token macro keeps that ABI parameter source-compatible with C++.
#define this st_this

namespace st {
// Exact C-to-C++ compatibility boundary.  Ghidra emits neutral C
// pointer views where the address-stable callee prototype already
// proves the concrete pointee type.  This changes no image bits.
template <typename Target, typename Source>
inline Target pointer_boundary_cast(Source value) noexcept {
    static_assert(std::is_pointer_v<Target>);
    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source>);
    if constexpr (std::is_pointer_v<Source>) {
        using TargetPointee = std::remove_pointer_t<Target>;
        using SourcePointee = std::remove_pointer_t<Source>;
        if constexpr (std::is_same_v<
                std::remove_const_t<TargetPointee>,
                std::remove_const_t<SourcePointee>>)
            return const_cast<Target>(value);
        else if constexpr (std::is_const_v<SourcePointee> &&
                           !std::is_const_v<TargetPointee>) {
            using MutableSource = std::add_pointer_t<
                std::remove_const_t<SourcePointee>>;
            return reinterpret_cast<Target>(
                const_cast<MutableSource>(value));
        }
        else
            return reinterpret_cast<Target>(value);
    }
    else
        return reinterpret_cast<Target>(static_cast<uintptr_t>(value));
}
template <typename Target, typename Source>
inline Target machine_word_boundary_cast(Source value) noexcept {
    static_assert(std::is_integral_v<Target>);
    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source> || std::is_null_pointer_v<Source>);
    if constexpr (std::is_null_pointer_v<Source>)
        return static_cast<Target>(0);
    else if constexpr (std::is_pointer_v<Source>)
        return static_cast<Target>(reinterpret_cast<uintptr_t>(value));
    else
        return static_cast<Target>(value);
}
template <typename Target, typename Source>
inline Target storage_bit_cast(const Source &value) noexcept {
    static_assert(sizeof(Target) == sizeof(Source));
    static_assert(std::is_trivially_copyable_v<Target>);
    static_assert(std::is_trivially_copyable_v<Source>);
    Target result{};
    ::memcpy(&result, &value, sizeof(result));
    return result;
}
template <typename Target, typename Source>
inline Target function_address_boundary_cast(Source value) noexcept {
    static_assert(std::is_pointer_v<Target>);
    static_assert(std::is_pointer_v<Source>);
    return reinterpret_cast<Target>(value);
}
inline char *mutable_c_string(const char *value) noexcept {
    return const_cast<char *>(value);
}
inline STMessageArg message_arg_u32(uint32_t value) noexcept {
    STMessageArg result{};
    result.u32 = value;
    return result;
}
inline STMessageArg message_arg_i32(int32_t value) noexcept {
    STMessageArg result{};
    result.i32 = value;
    return result;
}
template <typename T>
inline STMessageArg message_arg_pointer(T *value) noexcept {
    STMessageArg result{};
    result.ptr = const_cast<void *>(static_cast<const void *>(value));
    return result;
}
// Ghidra p-code exposes CPUID result tuples through a synthetic
// pointer-returning intrinsic.  The source port must provide it.
int *pcode_cpuid_info(uint leaf);
// Exact per-instruction HighFunction call override exported from
// Ghidra.  The physical vtable member can retain a shorter/base
// declaration while this boundary exposes the proven call ABI.
template <typename Target, typename Source>
inline Target exact_indirect_callee(Source value) noexcept {
    static_assert(std::is_pointer_v<Target>);
    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source>);
    if constexpr (std::is_pointer_v<Source>)
        return reinterpret_cast<Target>(value);
    else
        return reinterpret_cast<Target>(static_cast<uintptr_t>(value));
}
// Exact direct-call result override for a physical declaration
// whose shared return remains void.  The selected function type
// comes from the address-local machine callsite marker.
template <typename Target, typename Source>
inline Target exact_call_result_callee(Source value) noexcept {
    static_assert(std::is_pointer_v<Target>);
    static_assert(std::is_pointer_v<Source>);
    return reinterpret_cast<Target>(value);
}
}
