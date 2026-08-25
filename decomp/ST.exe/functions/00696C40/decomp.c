#include "../../pseudocode_runtime.h"


int __thiscall FUN_00696c40(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int local_8;

  iVar1 = STField<int>(this,0x5853);
  iVar2 = 0;
  local_8 = 0;
  if (param_1 < STField<uint>(iVar1,0xC)) {
    iVar3 = STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C);
    if ((iVar3 != 0) && (iVar3 = STField<int>(iVar3,0x19), iVar3 != 0)) {
      uVar6 = 0;
      if (0 < STField<int>(iVar3,0xC)) {
        bVar7 = STField<int>(iVar3,0xC) != 0;
        do {
          if (bVar7) {
            puVar4 = (uint *)(STField<int>(iVar3,0x8) * uVar6 + STField<int>(iVar3,0x1C));
          }
          else {
            puVar4 = nullptr;
          }
          if ((((*puVar4 < STField<uint>(iVar1,0xC)) &&
               (piVar5 = (int *)(*puVar4 * STField<int>(iVar1,0x8) + STField<int>(iVar1,0x1C)),
               piVar5 != nullptr)) && (*piVar5 == param_2)) && (uVar6 != param_3)) {
            local_8 = local_8 + 1;
          }
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < STField<uint>(iVar3,0xC);
          iVar2 = local_8;
        } while ((int)uVar6 < (int)STField<uint>(iVar3,0xC));
      }
    }
  }
  return iVar2;
}

