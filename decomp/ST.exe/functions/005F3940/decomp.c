
int FUN_005f3940(int param_1,int param_2,int param_3)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar4 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    param_2 = (short)(((short)(param_3 / 200) + sVar1) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    param_2 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((*(int *)(DAT_00807598 + 0x48) <= iVar4) && (iVar4 <= *(int *)(DAT_00807598 + 0x58))) &&
      (*(int *)(DAT_00807598 + 0x44) <= iVar5)) && (iVar5 <= *(int *)(DAT_00807598 + 0x54))) {
    iVar3 = FUN_006ddbd0();
    pvVar2 = DAT_00802a88;
    if (iVar3 == 0) {
      return 0;
    }
    if (DAT_00802a88 == (void *)0x0) {
      return iVar3;
    }
    if (DAT_0080874d == -1) {
      return iVar3;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return iVar3;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                       iVar4,iVar5,&param_3,&local_8);
    if (param_2 < 0) {
      return iVar3;
    }
    if (4 < param_2) {
      return iVar3;
    }
    if (param_3 < 0) {
      return iVar3;
    }
    if (*(int *)((int)pvVar2 + 0x30) <= param_3) {
      return iVar3;
    }
    local_8 = (&DAT_0079aed0)[param_2] + local_8;
    if (local_8 < 0) {
      return iVar3;
    }
    if (*(int *)((int)pvVar2 + 0x34) <= local_8) {
      return iVar3;
    }
    if (*(int *)((int)pvVar2 + 0x4c) == 0) {
      return iVar3;
    }
    if (*(char *)(local_8 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + param_3)
        != '\0') {
      return iVar3;
    }
  }
  return 0;
}

