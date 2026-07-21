
void __fastcall FUN_00717380(AnonShape_00717380_FEFD061B *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *local_8;
  
  if (param_1->field_0466 != 0) {
    iVar8 = 10000;
    iVar9 = *(int *)param_1->field_04D6;
    param_1->field_04DE = 0;
    iVar6 = 0;
    if (0 < param_1->field_04CE) {
      local_8 = (int *)param_1->field_04D6;
      do {
        uVar1 = (param_1->field_02F0 * iVar9) / 100 - *local_8;
        uVar7 = (int)uVar1 >> 0x1f;
        iVar2 = (uVar1 ^ uVar7) - uVar7;
        if (iVar2 < iVar8) {
          param_1->field_04DE = iVar6;
          iVar8 = iVar2;
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 + 1;
      } while (iVar6 < param_1->field_04CE);
    }
    iVar8 = param_1->field_04DE * 4;
    iVar9 = *(int *)(iVar8 + param_1->field_04D6);
    if ((param_1->field_04E2 != iVar9) ||
       (param_1->field_04E6 != *(int *)(param_1->field_04DA + iVar8))) {
      param_1->field_04E2 = iVar9;
      iVar9 = 0;
      param_1->field_04E6 = *(undefined4 *)(param_1->field_04DA + iVar8);
      do {
        FreeAndNull((void **)(iVar9 + param_1->field_0472));
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x140);
      iVar9 = param_1->field_04D2;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          uVar3 = FUN_007175d0(*(byte **)(param_1->field_04CA +
                                         (param_1->field_04DE * iVar9 + iVar8) * 4),
                               param_1->field_04E2,param_1->field_04E6,0x18);
          iVar8 = iVar8 + 1;
          *(undefined4 *)(param_1->field_0472 + -4 + iVar8 * 4) = uVar3;
          iVar9 = param_1->field_04D2;
        } while (iVar8 < iVar9);
      }
      iVar9 = param_1->field_04D2;
      iVar8 = 0;
      if (0 < iVar9) {
        iVar6 = 0x40;
        do {
          pbVar4 = FUN_00717620(*(byte **)(param_1->field_04CA +
                                          (param_1->field_04DE * iVar9 + iVar8) * 4),
                                param_1->field_04E2,param_1->field_04E6,0x18,0x10);
          iVar8 = iVar8 + 1;
          *(byte **)(iVar6 + param_1->field_0472) = pbVar4;
          iVar9 = param_1->field_04D2;
          iVar6 = iVar6 + 4;
        } while (iVar8 < iVar9);
      }
      iVar9 = param_1->field_04D2;
      iVar8 = 0;
      if (0 < iVar9) {
        iVar6 = 0x80;
        do {
          uVar3 = FUN_007175d0(*(byte **)(param_1->field_04C6 +
                                         (param_1->field_04DE * iVar9 + iVar8) * 4),
                               param_1->field_04E2,param_1->field_04E6,0x10);
          iVar8 = iVar8 + 1;
          *(undefined4 *)(iVar6 + param_1->field_0472) = uVar3;
          iVar9 = param_1->field_04D2;
          iVar6 = iVar6 + 4;
        } while (iVar8 < iVar9);
      }
      pbVar4 = &DAT_007f0554;
      iVar9 = 0xc0;
      do {
        iVar8 = param_1->field_04DE * param_1->field_04D2;
        pbVar5 = FUN_00717680(*(int *)(param_1->field_04CA + ((uint)*pbVar4 + iVar8) * 4),
                              *(byte **)(param_1->field_04C6 + ((uint)pbVar4[1] + iVar8) * 4),
                              param_1->field_04E2,param_1->field_04E6,0x18,0x10);
        iVar8 = iVar9 + 4;
        pbVar4 = pbVar4 + 2;
        *(byte **)(iVar9 + param_1->field_0472) = pbVar5;
        iVar9 = iVar8;
      } while (iVar8 < 0x140);
    }
  }
  return;
}

