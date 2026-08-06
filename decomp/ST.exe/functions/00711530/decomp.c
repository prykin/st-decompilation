#include "../../pseudocode_runtime.h"


int __thiscall FUN_00711530(void *this,int *param_1)

{
  int *piVar1;
  int iVar3;
  int iVar2;
  int iVar4;

  iVar4 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  iVar3 = *param_1;
  while (iVar3 != 0) {
    iVar2 = FUN_00711110(this,(char *)*param_1);
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = *piVar1;
  }
  return iVar4;
}

