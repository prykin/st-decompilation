#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00423D80 -> 006ACC70 @ 00423DA9 | 0042B7D0 -> 00423D80 @ 0042B85E;
   STAllPlayersC::AddObjsToGroup parameter groupContent */

undefined4 __thiscall FUN_00423d80(void *this,DArrayTy *groupContent)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint index;
  uint uVar4;
  uint local_c;
  uint local_8;
  uVar1 = groupContent->count;
  local_8 = 0;
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
    index = 0;
    do {
      DArrayGetElement(groupContent,index,&local_c);
      /* ST_CALLSITE[00423DB6]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
      iVar2 = STStructuralVirtualCall<undefined4>(this, 0x4, local_c);
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

