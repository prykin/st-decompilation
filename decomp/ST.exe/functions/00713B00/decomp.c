
int FUN_00713b00(uint *param_1,void *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int param_6,int param_7,uint param_8,uint param_9,int param_10,int param_11,
                int param_12,undefined4 param_13)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar10;
  undefined4 local_9c [18];
  undefined4 local_54;
  undefined4 local_50 [16];
  uint local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  if ((param_1 != (uint *)0x0) && ((char)*param_1 == '\0')) {
    return 0;
  }
  if (param_2 != (void *)0x0) {
    FUN_007108b0(local_9c);
  }
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar7 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0xa23,0,iVar4,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    if (param_2 != (void *)0x0) {
      FUN_00710f00();
    }
    if (local_c[0x22] != 0) {
      FUN_006ab060(local_c + 0x22);
    }
    if (local_c[0x2a] != 0) {
      FUN_006ab060(local_c + 0x2a);
    }
    if (local_c[0x16] != 0) {
      FUN_006ab060(local_c + 0x16);
    }
    if (param_2 != (void *)0x0) {
      FUN_007109f0(param_2,local_9c);
    }
    FUN_006a5e40(iVar4,0,0x7f0190,0xa2a);
    if (-1 < iVar4) {
      return -1;
    }
    return iVar4;
  }
  if ((param_1 == (uint *)0x0) || (param_2 == (void *)0x0)) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x9ed);
  }
  *(undefined4 *)((int)param_2 + 0x7e) = 1;
  *(undefined2 *)((int)param_2 + 0x9e) = 0;
  *(undefined1 *)((int)param_2 + 0x9e) = DAT_007cc854;
  *local_c = param_2;
  local_c[0x16] = 0;
  local_c[3] = 0;
  local_c[1] = 0;
  iVar4 = FUN_007114c0(param_2,param_1);
  local_c[2] = iVar4 + 3;
  local_c[0x1d] = param_8;
  local_c[0x1b] = param_8;
  local_c[0x28] = param_13;
  local_c[0x1e] = param_9;
  local_c[0x1c] = param_9;
  local_c[0x1f] = 0xffffffff;
  local_c[0x22] = 0;
  local_c[0x24] = 0;
  local_c[0x23] = 0;
  local_c[0x21] = 0;
  local_c[0x20] = 0;
  local_c[0x2a] = 0;
  local_c[0x2c] = 0;
  local_c[0x2b] = 0;
  local_c[0x25] = param_10;
  if (param_11 < 0) {
    param_11 = param_10 + 1;
  }
  local_c[0x26] = param_11;
  if (param_12 < 0) {
    param_12 = param_10 + -1;
  }
  local_c[0x27] = param_12;
  iVar4 = FUN_00711370(param_2,param_1);
  local_c[0x19] = iVar4;
  iVar4 = FUN_007113e0(param_2,param_1);
  local_c[0x1a] = iVar4;
  if (param_3 == 0) {
    iVar4 = (((int)param_8 < 1) - 1 & param_8) + local_c[0x19];
    if (param_6 < iVar4) {
      param_6 = iVar4;
    }
    if (*(int *)((int)param_2 + 0xa0) != 0) {
      FUN_00710790((int)param_2);
    }
    local_10 = ((int)param_9 < 1) - 1 & param_9;
    if (param_7 < (int)(*(int *)((int)param_2 + 0x8a) + local_10)) {
      if (*(int *)((int)param_2 + 0xa0) != 0) {
        FUN_00710790((int)param_2);
      }
      param_7 = *(int *)((int)param_2 + 0x8a) + local_10;
    }
    puVar5 = FUN_00710ba0(0,0,0,0,param_6,param_7,1);
    uVar8 = puVar5[5];
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)((int)puVar5 + 0xe) * puVar5[1] + 0x1f >> 3 & 0x1ffffffc) *
              puVar5[2];
    }
    local_5 = *(undefined1 *)(local_c + 0x28);
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar5);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar4 = FUN_00711470(param_1);
    puVar5 = FUN_006aac10(iVar4 * 4 + 3);
    local_c[0x2a] = puVar5;
  }
  else {
    FUN_00710a90(param_3,0,param_4,param_5,param_6,param_7);
  }
  piVar1 = local_c + 0x17;
  piVar2 = local_c + 0x18;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *(int *)((int)param_2 + 0x68);
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)((int)param_2 + 0x6c);
  }
  if ((int)local_c[0x1c] < 0) {
    local_c[0x1c] = (*piVar2 - local_c[0x1a]) / 2;
  }
  if ((int)local_c[0x1c] < 0) {
    local_c[0x1c] = 0;
  }
  local_c[0x29] = local_c[0x1c];
  iVar4 = local_c[0x1b];
  if (((iVar4 == -5) || (iVar4 == -6)) || (iVar4 == -7)) {
    local_c[0x1b] = iVar4 + 3;
  }
  if ((int)local_c[0x1b] < -7) {
    local_c[0x1b] = 0xffffffff;
  }
  if (local_c[0x1b] == -1) {
    local_c[0x1b] = (*piVar1 - local_c[0x19]) / 2;
  }
  puVar5 = FUN_006aac10(local_c[2] * 2 + 10);
  local_c[0x22] = puVar5;
  FUN_007108b0(local_c + 4);
  uVar8 = 0xffffffff;
  puVar6 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    uVar9 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while ((char)uVar9 != '\0');
  puVar6 = (uint *)FUN_006aac70(~uVar8);
  uVar8 = 0xffffffff;
  local_c[0x16] = puVar6;
  puVar10 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    uVar9 = *puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
  } while ((char)uVar9 != '\0');
  for (uVar9 = ~uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar8 = ~uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(char *)puVar6 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  local_c[0x24] = local_c[0x16];
  local_c[0x23] = local_c[0x16];
  iVar4 = local_c[2];
  FUN_007109f0(param_2,local_9c);
  DAT_00858df8 = (undefined4 *)local_54;
  return iVar4;
}

