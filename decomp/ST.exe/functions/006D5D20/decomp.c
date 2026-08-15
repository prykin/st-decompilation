#include "../../pseudocode_runtime.h"


void FUN_006d5d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

