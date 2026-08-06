#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004D11D0 -> 00417A00 @ 004D12CE; literal 0 at 004D12CA | 0057BF60 -> 00417A00 @
   0057C144; literal 1 at 0057C140 | 00583270 -> 00417A00 @ 00583552; literal 1 at 00583530 |
   0058D7C0 -> 00417A00 @ 0058DA1D; literal 1 at 0058DA0D */

void __thiscall FUN_00417a00(void *this,byte param_1)

{
  STField<byte>(this,0x8e) = param_1;
  return;
}

