#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00559110 -> 00553A70 @ 005592F3; /VisibleClassTy+0x4c */

void __cdecl FUN_00553a70(int param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  short *psVar1;

  if ((((param_3 != nullptr) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    thunk_FUN_00553390(param_1,param_2,param_3,param_4,param_5,0);
    psVar1 = &SHORT_007c88d4;
    do {
      thunk_FUN_00553910(*psVar1 + param_1,psVar1[1] + param_2,param_3,param_4,param_5);
      psVar1 = psVar1 + 2;
    } while ((int)psVar1 < 0x7c88f4);
  }
  return;
}

