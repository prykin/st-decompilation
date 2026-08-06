#include "../../pseudocode_runtime.h"


int __thiscall FUN_00711580(void *this,int *param_1)

{
  char *resourceString;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  if (param_1 == nullptr) {
    return 0;
  }
  resourceString = (char *)*param_1;
  iVar1 = 0;
  if (resourceString != nullptr) {
    do {
      iVar3 = iVar1;
      iVar1 = FUN_007111c0(this,resourceString);
      param_1 = param_1 + 1;
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar3 + 1;
      resourceString = (char *)*param_1;
    } while (resourceString != nullptr);
    if (iVar1 != 0) {
      iVar2 = iVar2 + STField<int>(this,0x5c) * iVar3;
    }
  }
  return iVar2;
}

