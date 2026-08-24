#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00583E30 -> 00418010 @ 00583FA5; literal 5 at 00583FA1 | 0058E570 -> 00418010 @
   0058E6E2; literal 8 at 0058E6DE | 0058E570 -> 00418010 @ 0058EA27; literal 6 at 0058EA23 |
   0058F030 -> 00418010 @ 0058F0D7; literal 6 at 0058F0D3 | 0058F030 -> 00418010 @ 0058F12B; literal
   6 at 0058F127

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_00418010(void *this,byte param_1)

{
  STField<byte>(this,0x62) = param_1;
  return;
}

