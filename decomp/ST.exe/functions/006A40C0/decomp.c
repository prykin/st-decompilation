#include "../../pseudocode_runtime.h"


undefined4 * __cdecl FUN_006a40c0(int param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int *piVar4;

  piVar1 = thunk_FUN_006a3c10(param_1 * param_2,param_3,param_4,param_5);
  if ((piVar1 != nullptr) && (piVar4 = (int *)((int)piVar1 + param_1 * param_2), piVar1 < piVar4)
     ) {
    uVar2 = (int)piVar4 - (int)piVar1;
    piVar4 = piVar1;
    memset(piVar4, 0, uVar2); /* compiler bulk-zero initialization */
    return piVar1;
  }
  return piVar1;
}

