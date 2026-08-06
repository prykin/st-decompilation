#include "../../pseudocode_runtime.h"


void FUN_006c14f0(int *param_1)

{
  undefined4 *puVar1;

  for (puVar1 = (undefined4 *)*param_1; puVar1 != nullptr; puVar1 = (undefined4 *)*puVar1)
  {
    if (puVar1[1] != 0) {
      FreeAndNull(puVar1 + 1);
    }
    FreeAndNull(puVar1 + 2);
  }
  FUN_006b9890(param_1);
  return;
}

