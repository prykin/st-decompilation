#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
FUN_006a0da0(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  RecoveredRecord_006A2700_663AFE5D local_c;

  if (param_5 == 0) {
    STPiece<0,4>(local_c) = 0;
    STPiece<4,1>(local_c) = 0;
    local_c.field_0005 = 0;

    uVar1 = thunk_FUN_006a29b0(0,1,param_6,2,0);
    STPiece<0,2>(local_c) = (short)uVar1;

    uVar1 = thunk_FUN_006a2bf0(2,0,1,param_6,param_6);
    STPiece<4,2>(local_c) = SUB42(uVar1,0);
    thunk_FUN_006a2700(STField<int *>(this,8),param_1,param_2,0,param_3,param_4,&local_c,
                       nullptr,0);
  }
  return;
}

