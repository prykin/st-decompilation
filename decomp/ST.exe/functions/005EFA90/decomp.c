#include "../../pseudocode_runtime.h"


void __thiscall FUN_005efa90(void *this,undefined4 param_1)

{
  STField<int>(this,0x2e5) = STField<int>(this,0x2e5) + -1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)this + 0xac))(param_1);
  return;
}

