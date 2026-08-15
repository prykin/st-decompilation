#include "../../pseudocode_runtime.h"


void FUN_006c2140(undefined4 param_1)

{
  if (DAT_008568bc != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*DAT_008568bc + 0x2c))(DAT_008568bc,param_1,0);
  }
  return;
}

