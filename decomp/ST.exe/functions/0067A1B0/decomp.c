#include "../../pseudocode_runtime.h"


void __thiscall FUN_0067a1b0(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;

  iVar3 = STField<int>(this,0x695);
  if (iVar3 != 0) {
    uVar1 = STField<uint>(iVar3,0xC);
    uVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((iVar3 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
          if (uVar4 < uVar1) {
            piVar2 = (int *)(STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C));
          }
          else {
            piVar2 = nullptr;
          }
          if (((piVar2[1] != 0) && ((undefined4 *)*piVar2 != nullptr)) && (param_1 != 0))
          {
            /* ST_CALLSITE[0067A201]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (*(code *)**(undefined4 **)*piVar2)(param_1);
          }
        }
        iVar3 = STField<int>(this,0x695);
        uVar4 = uVar4 + 1;
        uVar1 = STField<uint>(iVar3,0xC);
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}

