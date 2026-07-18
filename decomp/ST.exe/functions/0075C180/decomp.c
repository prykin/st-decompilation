
undefined4 FUN_0075c180(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30 [5];
  int *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  uVar1 = param_1;
  local_18 = *(undefined4 *)(param_1 + 0x18a);
  local_c = *(int *)(param_1 + 0x1aa);
  if (((*(int *)(param_1 + 0x10c) != 0) && (*(int *)(*(int *)(param_1 + 0x1aa) + 0x28) == 0)) &&
     (iVar2 = FUN_0075c3b0(param_1), iVar2 == 0)) {
    return 0;
  }
  iVar6 = local_c;
  local_38 = param_1;
  local_4c = **(undefined4 **)(param_1 + 0x10);
  local_10 = 0;
  local_48 = (*(undefined4 **)(param_1 + 0x10))[1];
  local_44 = *(undefined4 *)(param_1 + 0x18e);
  uVar3 = *(uint *)(local_c + 8);
  iVar2 = *(int *)(local_c + 0xc);
  local_34 = local_c + 0x10;
  piVar7 = (int *)(local_c + 0x14);
  piVar8 = local_30;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  if (0 < *(int *)(param_1 + 0x152)) {
    local_8 = (int *)(param_1 + 0x156);
    param_1 = uVar3;
    do {
      local_1c = (int *)*param_2;
      local_14 = *local_8;
      iVar6 = *(int *)(iVar6 + 0x2c + *(int *)(*(int *)(uVar1 + 0x13a + *local_8 * 4) + 0x14) * 4);
      if (iVar2 < 8) {
        iVar2 = FUN_0075b720(&local_4c,param_1,iVar2,0);
        if (iVar2 == 0) {
          return 0;
        }
        param_1 = local_40;
        iVar2 = local_3c;
        if (7 < local_3c) goto LAB_0075c271;
        iVar4 = 1;
LAB_0075c29e:
        uVar3 = FUN_0075b800(&local_4c,param_1,iVar2,iVar6,iVar4);
        if ((int)uVar3 < 0) {
          return 0;
        }
        param_1 = local_40;
        iVar2 = local_3c;
      }
      else {
LAB_0075c271:
        uVar3 = (int)param_1 >> ((char)iVar2 - 8U & 0x1f) & 0xff;
        iVar4 = *(int *)(iVar6 + 0xd4 + uVar3 * 4);
        if (iVar4 == 0) {
          iVar4 = 9;
          goto LAB_0075c29e;
        }
        iVar2 = iVar2 - iVar4;
        uVar3 = (uint)*(byte *)(uVar3 + 0x4d4 + iVar6);
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        if (iVar2 < (int)uVar3) {
          iVar2 = FUN_0075b720(&local_4c,param_1,iVar2,uVar3);
          if (iVar2 == 0) {
            return 0;
          }
          param_1 = local_40;
          iVar2 = local_3c;
        }
        iVar2 = iVar2 - uVar3;
        uVar5 = (1 << ((byte)uVar3 & 0x1f)) - 1U & (int)param_1 >> ((byte)iVar2 & 0x1f);
        if ((int)uVar5 < *(int *)(&DAT_007a2054 + uVar3 * 4)) {
          uVar5 = *(int *)(&DAT_007a2094 + uVar3 * 4) + uVar5;
        }
      }
      iVar6 = local_30[local_14 + 1];
      local_30[local_14 + 1] = uVar5 + iVar6;
      param_2 = param_2 + 1;
      *local_1c = uVar5 + iVar6 << ((byte)local_18 & 0x1f);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      iVar6 = local_c;
      uVar3 = param_1;
    } while (local_10 < *(int *)(uVar1 + 0x152));
  }
  param_1 = uVar3;
  **(undefined4 **)(uVar1 + 0x10) = local_4c;
  *(undefined4 *)(*(int *)(uVar1 + 0x10) + 4) = local_48;
  *(undefined4 *)(uVar1 + 0x18e) = local_44;
  *(uint *)(iVar6 + 8) = param_1;
  *(int *)(iVar6 + 0xc) = iVar2;
  iVar2 = *(int *)(iVar6 + 0x28);
  piVar7 = local_30;
  piVar8 = (int *)(iVar6 + 0x14);
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  *(int *)(iVar6 + 0x28) = iVar2 + -1;
  return 1;
}

