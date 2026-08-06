#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_00544150(void *this,int param_1,undefined4 *param_2,int param_3)

{
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(&DAT_008083de + param_1 * 4);
  *(int *)(param_3 + 0x1c) = param_1 + 0xa6ff;
  if (*(int *)(&DAT_008083de + param_1 * 4) != 0) {
    FUN_006e6000(this,3,1,param_2);
  }
  return;
}

