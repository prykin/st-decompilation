#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00620ce0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0xe9);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = STField<int>(iVar5,0xC), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(STField<int>(iVar5,0x8) * uVar6 + STField<int>(iVar5,0x1C));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = STField<uint>(iVar5,0xC);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = STField<int>(iVar5,0x8) * uVar8 + STField<int>(iVar5,0x1C);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = STField<undefined4>(iVar5,0x8);
      *param_2 = STField<undefined4>(iVar5,0xC);
    }
  }
  return uVar3;
}

