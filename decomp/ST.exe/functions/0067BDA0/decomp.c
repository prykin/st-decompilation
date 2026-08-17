#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0067BDA0 parameter used as this of STFishC::sub_004162B0 @ 0067BDB6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl FUN_0067bda0(short *param_1,STFishC *objPtr)

{
  short local_c [2];
  short local_8 [2];

  /* ST_CALLSITE[0067BDB6]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  STFishC::sub_004162B0(objPtr,local_8,local_c,(short *)((int)&objPtr + 2));
  *param_1 = local_8[0] + -1;
  param_1[2] = 0;
  param_1[1] = local_c[0] + -1;
  param_1[3] = 3;
  param_1[4] = 3;
  param_1[5] = 5;
  thunk_FUN_006756d0(param_1,param_1 + 1,param_1 + 3,param_1 + 4);
  return;
}

