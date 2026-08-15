#include "../../pseudocode_runtime.h"


undefined4 FUN_0074b8a6(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 4))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

