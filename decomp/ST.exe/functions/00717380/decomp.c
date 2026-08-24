#include "../../pseudocode_runtime.h"


void __fastcall FUN_00717380(AnonShape_00717380_FEFD061B *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int *local_8;

  if (param_1->field_0466 != 0) {
    iVar9 = 10000;
    iVar10 = *STField<int *>(param_1,0x4D6);
    param_1->field_04DE = 0;
    iVar6 = 0;
    if (0 < param_1->field_04CE) {
      local_8 = (int *)param_1->field_04D6;
      do {
        uVar1 = (param_1->field_02F0 * iVar10) / 100 - *local_8;
        uVar7 = (int)uVar1 >> 0x1f;
        iVar2 = (uVar1 ^ uVar7) - uVar7;
        if (iVar2 < iVar9) {
          param_1->field_04DE = iVar6;
          iVar9 = iVar2;
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 + 1;
      } while (iVar6 < param_1->field_04CE);
    }
    iVar9 = param_1->field_04DE * 4;
    iVar10 = *(int *)(iVar9 + param_1->field_04D6);
    if ((param_1->field_04E2 != iVar10) ||
       (param_1->field_04E6 != *(int *)(param_1->field_04DA + iVar9))) {
      param_1->field_04E2 = iVar10;
      iVar10 = 0;
      param_1->field_04E6 = *(undefined4 *)(param_1->field_04DA + iVar9);
      do {
        FreeAndNull((void *)(iVar10 + param_1->field_0472));
        iVar10 = iVar10 + 4;
      } while (iVar10 < 0x140);
      iVar10 = param_1->field_04D2;
      iVar9 = 0;
      if (0 < iVar10) {
        do {
          uVar3 = FUN_007175d0(*(byte **)(param_1->field_04CA +
                                         (param_1->field_04DE * iVar10 + iVar9) * 4),
                               param_1->field_04E2,param_1->field_04E6,0x18);
          iVar9 = iVar9 + 1;
          *(undefined4 *)(param_1->field_0472 + -4 + iVar9 * 4) = uVar3;
          iVar10 = param_1->field_04D2;
        } while (iVar9 < iVar10);
      }
      iVar10 = param_1->field_04D2;
      iVar9 = 0;
      if (0 < iVar10) {
        iVar6 = 0x40;
        do {
          pbVar4 = FUN_00717620(*(byte **)(param_1->field_04CA +
                                          (param_1->field_04DE * iVar10 + iVar9) * 4),
                                param_1->field_04E2,param_1->field_04E6,0x18,0x10);
          iVar9 = iVar9 + 1;
          *(byte **)(iVar6 + param_1->field_0472) = pbVar4;
          iVar10 = param_1->field_04D2;
          iVar6 = iVar6 + 4;
        } while (iVar9 < iVar10);
      }
      iVar10 = param_1->field_04D2;
      iVar9 = 0;
      if (0 < iVar10) {
        iVar6 = 0x80;
        do {
          uVar3 = FUN_007175d0(*(byte **)(param_1->field_04C6 +
                                         (param_1->field_04DE * iVar10 + iVar9) * 4),
                               param_1->field_04E2,param_1->field_04E6,0x10);
          iVar9 = iVar9 + 1;
          *(undefined4 *)(iVar6 + param_1->field_0472) = uVar3;
          iVar10 = param_1->field_04D2;
          iVar6 = iVar6 + 4;
        } while (iVar9 < iVar10);
      }
      pbVar8 = &DAT_007f0554;
      iVar10 = 0xc0;
      do {
        iVar9 = param_1->field_04DE * param_1->field_04D2;
        pbVar5 = FUN_00717680(*(int *)(param_1->field_04CA + ((uint)*pbVar8 + iVar9) * 4),
                              *(byte **)(param_1->field_04C6 + ((uint)pbVar8[1] + iVar9) * 4),
                              param_1->field_04E2,param_1->field_04E6,0x18,0x10);
        iVar9 = iVar10 + 4;
        pbVar8 = pbVar8 + 2;
        *(byte **)(iVar10 + param_1->field_0472) = pbVar5;
        iVar10 = iVar9;
      } while (iVar9 < 0x140);
    }
  }
  return;
}

