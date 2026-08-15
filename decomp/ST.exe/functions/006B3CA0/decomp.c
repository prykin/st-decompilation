#include "../../pseudocode_runtime.h"


void FUN_006b3ca0(undefined4 param_1,int *param_2)

{
  if (param_2 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}

