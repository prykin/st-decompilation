#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553990 -> 00553390 @ 005539F2; FUN_00553990 parameter param_3 | 00553D40 -> 00553390
   @ 00553D6C; FUN_00553d40 parameter param_1 | 00553DB0 -> 00553390 @ 00553DDC; FUN_00553db0
   parameter param_1 */

void __cdecl FUN_00553390(int param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  if ((((param_3 != nullptr) && (-1 < param_1)) && (param_1 < param_4)) &&
     (((-1 < param_2 && (param_2 < param_5)) && ((-1 < param_6 && (param_6 < 0x10)))))) {
    param_3[param_2 * param_4 + param_1] = (byte)param_6;
    if (DAT_00802a50 != nullptr) {
      /* ST_CALLSITE[005533DB]: CALL EDX */
      (*DAT_00802a50)(param_1,param_2,param_3);
    }
  }
  return;
}

