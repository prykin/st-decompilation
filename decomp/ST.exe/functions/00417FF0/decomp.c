#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=13, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00583E30 -> 00417FF0 @ 00583F9C; literal 6 at 00583F98 | 0058E570 -> 00417FF0 @
   0058E6D9; literal 10 at 0058E6D5 | 0058E570 -> 00417FF0 @ 0058EA1E; literal 8 at 0058EA18 */

void __thiscall FUN_00417ff0(void *this,byte param_1)

{
  STField<byte>(this,0x61) = param_1;
  return;
}

