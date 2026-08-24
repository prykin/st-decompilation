#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006903A0 returns literal 65535 at 006903BE @ 006903C4 */

uint __thiscall FUN_006903a0(void *this,int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;

  puVar1 = (undefined4 *)thunk_FUN_0068e190(this,param_1);
  if (puVar1 != nullptr) {
    /* ST_CALLSITE[006903B8]: CALL dword ptr [EDX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)*puVar1)(param_2);
    return uVar2;
  }
  return 0xffff;
}

