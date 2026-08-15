#include "../../pseudocode_runtime.h"


void FUN_00543410(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

