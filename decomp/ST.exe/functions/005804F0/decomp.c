#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004E0040 -> 005804F0 @ 004E0114; zero-filled partial register load at 004E0108 |
   004E0250 -> 005804F0 @ 004E030B; zero-filled partial register load at 004E02FF

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005804F0 -> 00580FF0 @ 0058053D

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_005804f0(void *this,undefined4 param_1,ushort param_2,ushort param_3)

{
  uint uVar1;

  STField<undefined4>(this,0x269) = param_1;
  uVar1 = STField<uint>(this,0x255);
  STField<undefined4>(this,0x25d) = 1;
  if ((0xdb < uVar1) && ((uVar1 < 0xdf || (uVar1 == 0xe0)))) {
    if (0x14 < g_playSystem_00802A38->field_00E4) {
      thunk_FUN_00580ff0(param_2,param_3);
    }
    thunk_FUN_005803c0();
  }
  return;
}

