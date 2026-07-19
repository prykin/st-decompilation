
int FUN_006b1d50(uint param_1,uint *param_2,uint param_3,uint param_4,int *param_5,uint param_6,
                uint param_7,uint param_8,uint param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  uint local_c;
  int local_8;
  
  uVar1 = param_1;
  uVar5 = *(uint *)(param_1 + 0x1a0);
  puVar7 = (undefined4 *)(param_1 + 0x1a8);
  uVar2 = 0;
  local_8 = 0;
  param_1 = 0;
  puVar6 = (uint *)*puVar7;
  if ((int)uVar5 < 1) {
LAB_006b1da4:
    local_c = uVar5;
    if (*(int *)(uVar1 + 0x1a4) <= (int)uVar5) {
      iVar3 = FUN_006bfb50((uint *)*puVar7,(*(int *)(uVar1 + 0x1a4) + 10) * 0xd4);
      if (iVar3 == 0) {
        local_8 = -2;
        goto LAB_006b1fe2;
      }
      *(int *)(uVar1 + 0x1a8) = iVar3;
      param_1 = 0;
      puVar7 = (undefined4 *)(iVar3 + uVar5 * 0xd4);
      for (iVar4 = 0x212; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iVar3 = *(int *)(uVar1 + 0x1a8);
      if (0 < (int)local_c) {
        param_1 = local_c;
        uVar5 = local_c;
        do {
          *(int *)(*(int *)(uVar1 + 0x1b0) + *(int *)(iVar3 + 0x40) * 4) = iVar3;
          *(int *)(*(int *)(uVar1 + 0x1ac) + *(int *)(iVar3 + 0x48) * 4) = iVar3;
          iVar3 = iVar3 + 0xd4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      iVar3 = FUN_006bfb50(*(undefined4 **)(uVar1 + 0x1b0),*(int *)(uVar1 + 0x1a4) * 4 + 0x28);
      if (iVar3 == 0) {
        local_8 = -2;
        goto LAB_006b1fe2;
      }
      *(int *)(uVar1 + 0x1b0) = iVar3;
      iVar3 = FUN_006bfb50(*(undefined4 **)(uVar1 + 0x1ac),*(int *)(uVar1 + 0x1a4) * 4 + 0x28);
      if (iVar3 == 0) {
        local_8 = -2;
        goto LAB_006b1fe2;
      }
      *(int *)(uVar1 + 0x1ac) = iVar3;
      *(int *)(uVar1 + 0x1a4) = *(int *)(uVar1 + 0x1a4) + 10;
    }
    param_1 = *(uint *)(uVar1 + 0x1a0);
    *(uint *)(uVar1 + 0x1a0) = param_1 + 1;
    puVar6 = (uint *)(*(int *)(uVar1 + 0x1a8) + param_1 * 0xd4);
    *(uint **)(*(int *)(uVar1 + 0x1b0) + param_1 * 4) = puVar6;
    *(uint **)(*(int *)(uVar1 + 0x1ac) + param_1 * 4) = puVar6;
    puVar6[0x12] = param_1;
    puVar6[0x11] = 0x7fffffff;
  }
  else {
    do {
      if ((*puVar6 & 0x8001) == 0) break;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x35;
    } while ((int)uVar2 < (int)uVar5);
    param_1 = uVar2;
    if (((int)uVar5 <= (int)uVar2) || (param_1 = puVar6[0x10], (int)uVar5 <= (int)param_1))
    goto LAB_006b1da4;
    local_c = puVar6[0x12];
    uVar5 = puVar6[0x11];
    puVar8 = puVar6;
    for (iVar3 = 0x35; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar6[0x11] = uVar5;
    puVar6[0x12] = local_c;
  }
  puVar6[0x10] = param_1;
  puVar6[0x32] = param_4;
  puVar6[0x15] = param_9;
  puVar6[0x33] = (uint)param_5;
  puVar6[0x13] = 0xfffffffe;
  *puVar6 = param_6 & 0xff008010 | 0x8010;
  if (param_10 != 0) {
    *puVar6 = param_6 & 0xff008010 | 0x8210;
  }
  if ((param_5 != (int *)0x0) && ((param_6 & 0x60000000) != 0)) {
    if ((param_6 & 0x40000000) == 0) {
      local_88 = 0x7c;
      local_84 = 6;
      local_8 = (**(code **)(*param_5 + 0x58))(param_5,&local_88);
      if (local_8 != 0) goto LAB_006b1fe2;
    }
    else {
      local_7c = param_5[1];
      local_80 = param_5[2];
    }
    puVar6[0xe] = local_7c;
    puVar6[0xc] = local_7c;
    puVar6[8] = local_7c;
    puVar6[3] = local_7c;
    uVar5 = local_80 / param_4;
    puVar6[0xf] = uVar5;
    puVar6[0xd] = uVar5;
    puVar6[9] = uVar5;
    puVar6[4] = uVar5;
  }
  if (((int)param_7 < 1) || ((int)param_8 < 1)) {
    if (param_5 != (int *)0x0) {
      FUN_006cfbe0(puVar6);
    }
  }
  else {
    puVar6[0xe] = param_7;
    puVar6[0xf] = param_8;
  }
  if (-1 < (int)param_3) {
    FUN_006b2020(uVar1,param_1,param_3);
  }
LAB_006b1fe2:
  *param_2 = param_1;
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x322);
    return local_8;
  }
  return 0;
}

