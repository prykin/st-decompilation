#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00690330(void *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  iVar1 = STField<int>(this,0xa5);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)STField<uint>(iVar1,0xC))) {
    if (param_1 < STField<uint>(iVar1,0xC)) {
      iVar1 = STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C);
    }
    else {
      iVar1 = 0;
    }
    if (*(undefined4 **)(iVar1 + 4) != nullptr) {
      /* ST_CALLSITE[00690369]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar2 = (**(code **)**(undefined4 **)(iVar1 + 4))(param_2);
      return uVar2;
    }
  }
  return 0xffff;
}

