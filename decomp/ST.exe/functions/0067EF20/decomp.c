#include "../../pseudocode_runtime.h"


undefined4 FUN_0067ef20(byte *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  iVar1 = thunk_FUN_0067edb0(param_1);
  if (-1 < iVar1) {
    if (param_2 != nullptr) {
      *param_2 = iVar1;
    }
    uVar2 = thunk_FUN_0067ee70(iVar1);
    return uVar2;
  }
  return 0;
}

