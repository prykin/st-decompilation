#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void FUN_006a0c90(uint param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 uint param_7)

{
  uint uVar2;
  uint uVar1;
  uint local_EAX_138;
  uint uVar3;
  RecoveredRecord_006A2700_663AFE5D local_10;
  int local_8;

  if ((((-1 < param_3) && (param_3 < 6)) && (-1 < (int)param_4)) && ((int)param_4 < 5)) {
    STPiece<0,4>(local_10) = 0;
    STPiece<4,1>(local_10) = 0;
    local_10.field_0005 = 0;
    uVar2 = param_7;
    uVar3 = 0;
    if (param_6 == 1) {
      uVar2 = 0;
      uVar3 = param_7;
    }

    uVar1 = thunk_FUN_006a2bf0(param_6,param_3,param_4,uVar3,uVar2);
    STPiece<4,2>(local_10) = SUB42(uVar1,0);
    if ((param_5 == 1) || ((param_5 == 0xff && (param_3 == 0)))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }

    local_EAX_138 = thunk_FUN_006a29b0(param_3,param_4,param_7,param_6,uVar2);
    if (param_5 == 1) {
      STPiece<2,2>(local_10) = (short)local_EAX_138;
    }
    else {
      STPiece<0,2>(local_10) = (short)local_EAX_138;
    }
    thunk_FUN_006a2700(*(int **)(local_8 + 8),param_1,param_2,param_3 + -1 + param_4,param_1,param_2
                       ,&local_10,nullptr,0);
  }
  return;
}

