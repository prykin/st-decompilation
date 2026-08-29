#include "../../pseudocode_runtime.h"


void __cdecl
FUN_006a2920(int *param_1,uint param_2,int param_3,int param_4,int param_5,undefined *param_6,
            undefined4 param_7)

{
  ulonglong local_c;
  thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(RecoveredRecord_006A1370_30F34641 *)&local_c);
  if ((STPiece<4,4>(local_c) & 0x4000) == 0) {

    thunk_FUN_006a1c80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }

  thunk_FUN_006a36e0(param_1,param_2,param_3,param_4,param_6,param_7);
  return;
}

