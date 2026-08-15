#include "../../pseudocode_runtime.h"


void FUN_006d4fd0(int *param_1)

{
  if (param_1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0xc))(1);
  }
  return;
}

