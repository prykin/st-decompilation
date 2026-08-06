#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00553990 -> 00553910 @ 00553A23; FUN_00553990 parameter param_3 | 00553A70 -> 00553910
   @ 00553AC6; FUN_00553a70 parameter param_3

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_00553910(int param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  ushort uVar1;
  short sVar2;

  if ((((param_3 != nullptr) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    uVar1 = thunk_FUN_00553480(param_1,param_2,(int)param_3,param_4,param_5);
    sVar2 = thunk_FUN_005537d0(uVar1);
    thunk_FUN_00553410(param_1,param_2,(int)param_3,param_4,param_5,(byte)sVar2);
  }
  return;
}

