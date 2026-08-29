#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0067a0c0(void *this,uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  iVar1 = STField<int>(this,0x695);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)STField<uint>(iVar1,0xC))) {
    if (param_1 < STField<uint>(iVar1,0xC)) {
      piVar2 = (int *)(STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C));
    }
    else {
      piVar2 = nullptr;
    }
    if (((piVar2[1] != 0) && ((undefined4 *)*piVar2 != nullptr)) && (param_2 != 0)) {
      /* ST_CALLSITE[0067A103]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar3 = (*(code *)**(undefined4 **)*piVar2)(param_2);
      return uVar3;
    }
  }
  return 0xffff;
}

