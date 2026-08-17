#include "../../pseudocode_runtime.h"


void __thiscall
FUN_006e5670(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  /* ST_CALLSITE[006E5687]: CALL dword ptr [EAX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)this + 8))(param_1,param_2,param_3,0,param_4);
  return;
}

