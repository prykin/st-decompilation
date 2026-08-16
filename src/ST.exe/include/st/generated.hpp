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
    if constexpr (std::is_pointer_v<Source>)
        return reinterpret_cast<Target>(value);
    else
        return reinterpret_cast<Target>(static_cast<uintptr_t>(value));
}
template <typename Target, typename Source>
inline Target machine_word_boundary_cast(Source value) noexcept {
    static_assert(std::is_integral_v<Target>);
    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source>);
    if constexpr (std::is_pointer_v<Source>)
        return static_cast<Target>(reinterpret_cast<uintptr_t>(value));
    else
        return static_cast<Target>(value);
}
inline char *mutable_c_string(const char *value) noexcept {
    return const_cast<char *>(value);
}
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
}
