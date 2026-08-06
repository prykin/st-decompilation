#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005B0BA0 -> 005B6350 @ 005B1838 | 005C8A40 -> 005B6350 @ 005C9D64

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00593040 -> 005B6350 @ 005934EB; zeroed full register at 005934CA | 005B0BA0 ->
   005B6350 @ 005B1AA1; zeroed full register at 005B1A67 | 005E84D0 -> 005B6350 @ 005E8DC7;
   zero-filled partial register load at 005E8DB9

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=30, used=0), and
   decompilation contains no value return */

void __thiscall FUN_005b6350(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  STField<undefined1>(this,0x1a5a) = 0xc;
  STField<undefined4>(this,0x188d) = STField<undefined4>(this,8);
  *(undefined4 *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xcd + (int)this) = 2;
  *(undefined4 *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xd1 + (int)this) = param_1;
  *(uint *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xd5 + (int)this) = param_2;
  *(uint *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xd9 + (int)this) = param_3;
  return;
}

