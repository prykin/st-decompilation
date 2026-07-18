
int FUN_006b6d50(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  undefined4 local_60;
  undefined4 local_5c [16];
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  iVar5 = 0;
  *param_1 = 0;
  local_14 = (int *)0x0;
  local_8 = (int *)0x0;
  local_18 = (int *)0x0;
  local_10 = (int *)0x0;
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar1 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  piVar3 = local_14;
  if (iVar1 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    FUN_006b7740(local_14);
    piVar2 = local_18;
    goto LAB_006b700a;
  }
  iVar1 = Ordinal_4(0,&local_8,0,0,0);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x2bf);
  }
  local_c = 0;
  iVar1 = (**(code **)(*local_8 + 0x20))(local_8,0,0,&local_c);
  if (iVar1 != -0x7788ffe2) {
    if (iVar1 == 0) {
      iVar1 = -5;
    }
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x2c5);
  }
  local_1c = 0;
  piVar2 = (int *)FUN_006aac70(local_c);
  *piVar2 = local_c;
  local_18 = piVar2;
  iVar1 = (**(code **)(*local_8 + 0x20))(local_8,0,piVar2,&local_c);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x2ce);
  }
  piVar3 = piVar2 + 4;
  *(int *)(piVar2[2] + 0x28) = param_2;
  iVar1 = _strncmp((char *)piVar3,"",0x10);
  if (iVar1 == 0) {
    iVar5 = 1;
  }
  else {
    iVar1 = _strncmp((char *)piVar3,&DAT_0079ec98,0x10);
    if (iVar1 == 0) {
      iVar5 = 2;
    }
    else {
      iVar1 = _strncmp((char *)piVar3,&DAT_0079ec88,0x10);
      if (iVar1 == 0) {
        iVar5 = 3;
      }
      else {
        iVar1 = _strncmp((char *)piVar3,&DAT_0079ec78,0x10);
        if (iVar1 == 0) {
          iVar5 = 4;
        }
      }
    }
  }
  if (((iVar5 == 0) || (iVar5 == 1)) || (DAT_00854ec4 != 0)) {
    *(uint *)(piVar2[2] + 4) = *(uint *)(piVar2[2] + 4) | 0x2000;
  }
  iVar1 = (**(code **)(*local_8 + 0x30))(local_8,0,0,piVar2);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x2de);
  }
  iVar1 = (**(code **)(*local_8 + 0xc))(local_8,0,&local_10,0);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x2e1);
  }
  piVar3 = FUN_006aac10(0x54);
  local_14 = piVar3;
  iVar1 = (**(code **)*local_10)(local_10,&DAT_0079ecc8,piVar3);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x2e5);
  }
  piVar3[10] = iVar5;
  iVar1 = piVar2[2];
  piVar3[2] = *(int *)(iVar1 + 0x18);
  piVar3[3] = *(int *)(iVar1 + 0x1c);
  piVar3[4] = *(int *)(iVar1 + 0x20);
  piVar3[5] = *(int *)(iVar1 + 0x24);
  FUN_006b64b0(piVar3);
  FUN_006a5e90((undefined4 *)piVar3[0xd]);
  pcVar4 = FUN_006c49b0(*(char **)(piVar2[3] + 8));
  piVar3[0xd] = (int)pcVar4;
  piVar3[0xf] = param_2;
  if ((*(byte *)(piVar2 + 1) & 2) == 0) {
    iVar1 = FUN_006b6970(piVar3);
    if (iVar1 != 0) {
      uVar6 = 0x2f3;
      goto LAB_006b6fe0;
    }
  }
  else {
    piVar3[1] = piVar3[1] | 1;
    iVar1 = FUN_006b6830(piVar3);
    if (iVar1 != 0) {
      uVar6 = 0x2f0;
LAB_006b6fe0:
      FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,uVar6);
    }
  }
  DAT_00858df8 = (undefined4 *)local_60;
  iVar1 = local_1c;
LAB_006b700a:
  FUN_006a5e90(piVar2);
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (iVar1 == 0) {
    *param_1 = piVar3;
    return 0;
  }
  if (iVar1 != -0x7788fbd2) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7edbc4,0x309);
  }
  return iVar1;
}

