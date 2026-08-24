#include "../../pseudocode_runtime.h"


void FUN_006d25a0(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  puVar2 = param_1;
  param_1 = (undefined4 *)*param_1;
  while (param_1 != nullptr) {
    puVar1 = (undefined4 *)*param_1;
    FreeAndNull(&param_1);
    param_1 = puVar1;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}

