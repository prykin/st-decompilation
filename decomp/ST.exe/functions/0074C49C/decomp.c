#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0074C49C returns zeroed full register at 0074C4B9 @ 0074C4BC */

uint __thiscall FUN_0074c49c(void *this,undefined4 *param_1)

{
  FUN_00747f57(this,param_1);
  /* ST_CALLSITE[0074C4B6]: CALL dword ptr [EAX + 0x44] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*STField<int *>(this,0xd8) + 0x44))(0,param_1);
  return 0;
}

