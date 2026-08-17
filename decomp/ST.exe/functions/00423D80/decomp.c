#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00423D80 -> 006ACC70 @ 00423DA9 | 0042B7D0 -> 00423D80 @ 0042B85E;
   STAllPlayersC::AddObjsToGroup parameter groupContent */

undefined4 __thiscall FUN_00423d80(void *this,DArrayTy *groupContent)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint index;
  uint uVar4;
  undefined4 local_c;
  undefined4 local_8;

  uVar1 = groupContent->count;
  local_8 = 0;
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
    index = 0;
    do {
      DArrayGetElement(groupContent,index,&local_c);
      /* ST_CALLSITE[00423DB6]: CALL dword ptr [EDX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*(int *)this + 4))(local_c);
      if (iVar2 == 0) {
        local_8 = 1;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
      uVar3 = local_8;
    } while (index < uVar1);
  }
  return uVar3;
}

