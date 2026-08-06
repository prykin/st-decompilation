#pragma once

#include "st/recovered_types.hpp"
#include "st/recovered_globals.hpp"
#include "st/recovered_imports.hpp"
#include "st/recovered_functions.hpp"

// Ghidra exposes the x86 ECX receiver as an explicit parameter.
// The token macro keeps that ABI parameter source-compatible with C++.
#define this st_this
