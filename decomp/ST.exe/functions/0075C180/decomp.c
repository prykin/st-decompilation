
undefined4 FUN_0075c180(AnonShape_0075C180_8EED234B *param_1,undefined4 *param_2)

{
  AnonShape_0075C180_8EED234B *pAVar1;
  AnonShape_0075C180_8EED234B *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  AnonShape_0075C180_8EED234B *local_40;
  int local_3c;
  AnonShape_0075C180_8EED234B *local_38;
  int local_34;
  int local_30 [5];
  int *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  pAVar2 = param_1;
  local_18 = param_1->field_018A;
  local_c = param_1->field_01AA;
  if (((param_1->field_010C != 0) && (*(int *)(param_1->field_01AA + 0x28) == 0)) &&
     (iVar3 = FUN_0075c3b0((AnonShape_0075C3B0_6803BA0D *)param_1), iVar3 == 0)) {
    return 0;
  }
  iVar7 = local_c;
  local_38 = param_1;
  local_4c = *param_1->field_0010;
  local_10 = 0;
  local_48 = param_1->field_0010[1];
  local_44 = param_1->field_018E;
  pAVar1 = *(AnonShape_0075C180_8EED234B **)(local_c + 8);
  iVar3 = *(int *)(local_c + 0xc);
  local_34 = local_c + 0x10;
  piVar8 = (int *)(local_c + 0x14);
  piVar9 = local_30;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  if (0 < param_1->field_0152) {
    local_8 = (int *)&param_1->field_0x156;
    param_1 = pAVar1;
    do {
      local_1c = (int *)*param_2;
      local_14 = *local_8;
      iVar7 = *(int *)(iVar7 + 0x2c +
                      *(int *)(*(int *)(&pAVar2->field_0x13a + *local_8 * 4) + 0x14) * 4);
      if (iVar3 < 8) {
        iVar3 = FUN_0075b720(&local_4c,(uint)param_1,iVar3,0);
        if (iVar3 == 0) {
          return 0;
        }
        param_1 = local_40;
        iVar3 = local_3c;
        if (7 < local_3c) goto LAB_0075c271;
        iVar5 = 1;
LAB_0075c29e:
        uVar4 = FUN_0075b800(&local_4c,(uint)param_1,iVar3,iVar7,iVar5);
        if ((int)uVar4 < 0) {
          return 0;
        }
        param_1 = local_40;
        iVar3 = local_3c;
      }
      else {
LAB_0075c271:
        uVar4 = (int)param_1 >> ((char)iVar3 - 8U & 0x1f) & 0xff;
        iVar5 = *(int *)(iVar7 + 0xd4 + uVar4 * 4);
        if (iVar5 == 0) {
          iVar5 = 9;
          goto LAB_0075c29e;
        }
        iVar3 = iVar3 - iVar5;
        uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + iVar7);
      }
      uVar6 = 0;
      if (uVar4 != 0) {
        if (iVar3 < (int)uVar4) {
          iVar3 = FUN_0075b720(&local_4c,(uint)param_1,iVar3,uVar4);
          if (iVar3 == 0) {
            return 0;
          }
          param_1 = local_40;
          iVar3 = local_3c;
        }
        iVar3 = iVar3 - uVar4;
        uVar6 = (1 << ((byte)uVar4 & 0x1f)) - 1U & (int)param_1 >> ((byte)iVar3 & 0x1f);
        if ((int)uVar6 < *(int *)(&DAT_007a2054 + uVar4 * 4)) {
          uVar6 = *(int *)(&DAT_007a2094 + uVar4 * 4) + uVar6;
        }
      }
      iVar7 = local_30[local_14 + 1];
      local_30[local_14 + 1] = uVar6 + iVar7;
      param_2 = param_2 + 1;
      *local_1c = uVar6 + iVar7 << ((byte)local_18 & 0x1f);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      iVar7 = local_c;
      pAVar1 = param_1;
    } while (local_10 < pAVar2->field_0152);
  }
  param_1 = pAVar1;
  *pAVar2->field_0010 = local_4c;
  pAVar2->field_0010[1] = local_48;
  pAVar2->field_018E = local_44;
  *(AnonShape_0075C180_8EED234B **)(iVar7 + 8) = param_1;
  *(int *)(iVar7 + 0xc) = iVar3;
  iVar3 = *(int *)(iVar7 + 0x28);
  piVar8 = local_30;
  piVar9 = (int *)(iVar7 + 0x14);
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  *(int *)(iVar7 + 0x28) = iVar3 + -1;
  return 1;
}

