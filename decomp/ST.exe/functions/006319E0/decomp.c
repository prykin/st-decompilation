#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006319e0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;

  uVar2 = 0;
  iVar3 = STField<int>(this,0x69);
  if (iVar3 != 0) {
    uVar1 = STField<uint>(iVar3,0xC);
    if (((param_1 < uVar1) &&
        (puVar5 = (undefined4 *)(STField<int>(iVar3,0x8) * param_1 + STField<int>(iVar3,0x1C)),
        puVar5 != nullptr)) && (puVar5[2] == param_2)) {
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      return 1;
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (((bVar6) &&
            (puVar5 = (undefined4 *)(STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C)),
            puVar5 != nullptr)) && (puVar5[2] == param_2)) {
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          uVar2 = 1;
        }
        iVar3 = STField<int>(this,0x69);
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < STField<uint>(iVar3,0xC);
      } while ((int)uVar4 < (int)STField<uint>(iVar3,0xC));
    }
  }
  return uVar2;
}

