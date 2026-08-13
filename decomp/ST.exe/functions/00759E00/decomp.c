#include "../../pseudocode_runtime.h"


void FUN_00759e00(int *param_1)

{
  if (*param_1 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  *param_1 = 0;
  param_1[3] = 0;
  return;
}

