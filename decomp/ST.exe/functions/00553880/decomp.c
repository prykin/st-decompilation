#include "../../pseudocode_runtime.h"


bool __cdecl FUN_00553880(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  undefined4 uVar2;

  if ((((param_3 != 0) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    uVar2 = thunk_FUN_00553480(param_1,param_2,param_3,param_4,param_5);
    uVar1 = thunk_FUN_00553840((short)uVar2);
    return uVar1 == *(byte *)(param_2 * param_4 + param_1 + param_3);
  }
  return true;
}

