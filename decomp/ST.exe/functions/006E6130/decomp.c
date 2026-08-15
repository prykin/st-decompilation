#include "../../pseudocode_runtime.h"


void __thiscall FUN_006e6130(void *this,undefined4 param_1,undefined4 param_2)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)this + 0xc))(param_1,0,0,param_2);
  return;
}

