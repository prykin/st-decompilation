#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
FUN_006a2700(int *param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
            ushort *param_7,undefined *param_8,undefined4 param_9)

{
  if ((STField<byte>(param_7,5) & 0x40) == 0) {
    thunk_FUN_006a21f0(param_1,param_5,param_6,param_4,param_7,param_8,param_9);
    return;
  }
  thunk_FUN_006a34e0(param_1,param_2,param_3,param_5,param_6,param_4,param_7,param_8,param_9);
  return;
}

