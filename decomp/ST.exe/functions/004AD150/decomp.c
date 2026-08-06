#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall FUN_004ad150(void *this,char param_1)

{
  byte *pbVar1;

  if (-1 < STField<int>(this,0xc)) {
    pbVar1 = (byte *)(STField<int>(this,0x20) + 0xf + param_1 * 0x24);
    *pbVar1 = *pbVar1 | 1;
    FUN_006e93c0(STField<void *>(this,0x3c),STField<uint>(this,0x18),(int)param_1,
                 STField<uint>(this,0xc));
  }
  return;
}

