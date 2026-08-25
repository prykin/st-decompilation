#include "../../pseudocode_runtime.h"


undefined4 FUN_0074dec2(int *param_1)

{
  int iVar1;
  uint uVar2;
  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_1 = STField<int>(iVar1,0x4);
    uVar2 = STField<undefined4>(iVar1,0x8);
  }
  return uVar2;
}

