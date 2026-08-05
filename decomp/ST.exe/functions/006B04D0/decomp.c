#include "../../pseudocode_runtime.h"


undefined4 * FUN_006b04d0(uint param_1)

{
  int *piVar1;
  int *piVar3;

  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = thunk_FUN_006a3be0(param_1);
  if (piVar1 != nullptr) {
    piVar3 = piVar1;
    memset(piVar3, 0, param_1); /* compiler bulk-zero initialization */
    return piVar1;
  }
  return nullptr;
}

