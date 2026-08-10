#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074e232(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  if (param_2 != nullptr) {
    iVar3 = 0;
    piVar2 = param_2;
    do {
      piVar2 = (int *)piVar2[1];
      iVar3 = iVar3 + 1;
    } while (piVar2 != nullptr);
    if ((undefined4 *)*param_3 != nullptr) {
      *(undefined4 *)*param_3 = param_1[1];
    }
    if (param_1[1] != 0) {
      *(int *)(param_1[1] + 4) = *param_3;
    }
    if (param_3[1] == 0) {
      param_3[1] = param_1[1];
    }
    iVar1 = *param_2;
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      *param_1 = 0;
    }
    *param_3 = (int)param_2;
    if (param_1[1] != 0) {
      *(undefined4 *)(param_1[1] + 4) = 0;
    }
    *param_2 = 0;
    param_1[2] = param_1[2] - iVar3;
    param_3[2] = param_3[2] + iVar3;
  }
  return 1;
}

