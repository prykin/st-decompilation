#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_004ad0e0(void *this,byte param_1)

{
  ushort *puVar1;

  if (((-1 < (char)param_1) && ((char)param_1 < ' ')) &&
     ((1 << (param_1 & 0x1f) & STField<uint>(this,0x1c)) != 0)) {
    puVar1 = (ushort *)(STField<int>(this,0x20) + 0xe + (char)param_1 * 0x24);
    *puVar1 = *puVar1 & 0xfff7;
    FUN_006e9dd0(STField<void *>(this,0x3c),STField<uint *>(this,0x18),(int)(char)param_1);
  }
  return;
}

