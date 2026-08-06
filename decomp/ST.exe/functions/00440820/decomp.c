#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042F2B0 -> 00440820 @ 0042FF76; STAllPlayersC::UnRegisterObject parameter param_1 */

void FUN_00440820(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = 0;
  do {
    thunk_FUN_004407a0((char)iVar1,param_1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

