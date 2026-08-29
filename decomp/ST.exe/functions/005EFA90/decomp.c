#include "../../pseudocode_runtime.h"


void __thiscall FUN_005efa90(void *this,undefined4 param_1)

{
  STField<int>(this,0x2e5) = STField<int>(this,0x2e5) + -1;
  /* ST_CALLSITE[005EFAA6]: CALL dword ptr [EAX + 0xac]; [STIndirectCallsiteApplier] exact slot 0xAC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)this + 0xac))(param_1);
  return;
}

