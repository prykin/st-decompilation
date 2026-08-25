#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=29, used=0), and
   decompilation contains no value return

   [STUtilityFunctionApplier] sentinel_bitset128_builder: clears one 128-bit output set, then
   consumes a sentinel-terminated variadic list of bit indexes and sets each corresponding bit; the
   128-entry loop cap is a corruption guard rather than a fixed source argument count
   Evidence: body pattern verified */

void __cdecl BuildBitSet128(uint *bits,...)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar2 = (int *)&stack0x00000008;
  *bits = 0;
  bits[1] = 0;
  bits[2] = 0;
  bits[3] = 0;
  do {
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      return;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    bits[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] =
         bits[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)iVar1 & 0x1f);
  } while (iVar3 < 0x80);
  return;
}

