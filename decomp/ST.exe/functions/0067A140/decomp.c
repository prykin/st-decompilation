#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0067A140 returns literal 65535 at 0067A162 @ 0067A168 */

uint __thiscall FUN_0067a140(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;

  puVar1 = (undefined4 *)thunk_FUN_00678d90(this,param_1);
  if ((puVar1 != nullptr) && (param_2 != 0)) {
    /* ST_CALLSITE[0067A15C]: CALL dword ptr [EDX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)*puVar1)(param_2);
    return uVar2;
  }
  return 0xffff;
}

