#include "../../pseudocode_runtime.h"


int __thiscall FUN_00679d60(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  void *this_00;
  uint *puVar3;
  byte *pbVar4;
  int iVar6;
  int iVar5;
  byte *pbVar7;
  bool bVar8;

  if ((param_1 == nullptr) || (param_2 == nullptr)) {
LAB_00679e18:
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(STField<int>(this,0x695) + 0xc);
joined_r0x00679d8c:
    do {
      do {
        do {
          uVar2 = uVar2 - 1;
          if ((int)uVar2 < 0) goto LAB_00679e18;
          iVar6 = STField<int>(this,0x695);
        } while (((iVar6 == 0) || ((int)uVar2 < 0)) || ((int)STField<uint>(iVar6,0xC) <= (int)uVar2));
        if (uVar2 < STField<uint>(iVar6,0xC)) {
          puVar3 = (undefined4 *)(STField<int>(iVar6,0x8) * uVar2 + STField<int>(iVar6,0x1C));
        }
        else {
          puVar3 = nullptr;
        }
      } while ((puVar3[1] == 0) || (this_00 = (void *)*puVar3, this_00 == nullptr));
      if (*param_2 != 0) {
        pbVar7 = (byte *)((int)this_00 + 0x3b);
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00679df3:
            iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00679df8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00679df3;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00679df8:
        if (iVar6 != 0) goto joined_r0x00679d8c;
      }
      iVar5 = thunk_FUN_0068e3c0(this_00,param_1);
    } while (iVar5 == 0);
  }
  return iVar5;
}

