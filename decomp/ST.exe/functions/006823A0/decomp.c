#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006823E0 -> 006823A0 @ 006823FE; FUN_006823e0 parameter param_1 */

void __cdecl FUN_006823a0(short param_1,undefined2 param_2)

{
  byte local_c;
  short local_b;
  ushort local_9;
  local_c = 7;
  local_b = param_1;
  local_9 = param_2;
  thunk_FUN_00682370((undefined4 *)&local_c);
  return;
}

