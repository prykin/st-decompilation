#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_00584c50(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 **ppuVar3;
  undefined4 *local_40 [8];
  uint local_20 [3];
  ushort local_14;
  ushort local_12;
  if (param_1 != nullptr) {
    memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_14 = STField<undefined2>(this,0x284);
    local_20[0] = DAT_007e656c;
    local_12 = STField<undefined2>(this,0x280);
    local_20[2] = STField<undefined4>(this,0x25c);
    local_40[2] = (undefined4 *)param_1[2];
    ppuVar3 = local_40;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar3 = nullptr;
      ppuVar3 = ppuVar3 + 1;
    }
    local_40[5] = local_20;
    local_20[1] = 0xa3;
    local_40[3] = (undefined4 *)0x2;
    local_40[4] = (undefined4 *)0x110;
    /* ST_CALLSITE[00584CC9]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*param_1)(local_40);
  }
  return;
}

