
int __fastcall FUN_0060dd70(int param_1)

{
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x1e9);
  sVar1 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar6 = *(int *)(param_1 + 0x1ed);
  sVar1 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                        (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
  }
  iVar4 = *(int *)(param_1 + 0x1f1);
  sVar1 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    local_8 = (short)(((short)(iVar4 / 200) + sVar1) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(iVar4 / 200) + sVar1) -
                          (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
  }
  iVar4 = *(int *)(param_1 + 0x24c);
  if ((((*(int *)(DAT_00807598 + 0x48) <= iVar4 + iVar5) &&
       (iVar5 - iVar4 <= *(int *)(DAT_00807598 + 0x58))) &&
      (*(int *)(DAT_00807598 + 0x44) <= iVar4 + iVar6)) &&
     (iVar6 - iVar4 <= *(int *)(DAT_00807598 + 0x54))) {
    local_14 = FUN_006ddbd0();
    pvVar2 = DAT_00802a88;
    if (local_14 == 0) {
      return 0;
    }
    if (DAT_00802a88 == (void *)0x0) {
      return local_14;
    }
    iVar4 = *(int *)(param_1 + 0x24c);
    local_18 = iVar6 - iVar4;
    if (local_18 < 0) {
      local_18 = 0;
    }
    local_c = iVar5 - iVar4;
    if (local_c < 0) {
      local_c = 0;
    }
    local_1c = iVar4 + 1 + iVar6;
    if (DAT_007fb242 < local_1c) {
      local_1c = (int)DAT_007fb242;
    }
    local_10 = iVar4 + 1 + iVar5;
    if (DAT_007fb240 < local_10) {
      local_10 = (int)DAT_007fb240;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar5,iVar6,&local_20
                       ,&local_24);
    iVar6 = local_8;
    iVar5 = local_18;
    pvVar3 = DAT_00802a88;
    if (local_8 < 0) {
      return local_14;
    }
    if (4 < local_8) {
      return local_14;
    }
    if (local_20 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar2 + 0x30) <= local_20) {
      return local_14;
    }
    iVar4 = (&DAT_0079aed0)[local_8] + local_24;
    if (iVar4 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar2 + 0x34) <= iVar4) {
      return local_14;
    }
    if (*(int *)((int)pvVar2 + 0x4c) == 0) {
      return local_14;
    }
    if (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + local_20) !=
        '\0') {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_c,local_18,
                       &local_24,&local_20);
    pvVar2 = DAT_00802a88;
    if (local_24 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar3 + 0x30) <= local_24) {
      return local_14;
    }
    iVar6 = (&DAT_0079aed0)[iVar6] + local_20;
    if (iVar6 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar3 + 0x34) <= iVar6) {
      return local_14;
    }
    if (*(int *)((int)pvVar3 + 0x4c) == 0) {
      return local_14;
    }
    if (*(char *)(iVar6 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) + local_24) !=
        '\0') {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_10,iVar5,
                       &local_24,&local_20);
    iVar6 = local_8;
    iVar5 = local_1c;
    pvVar3 = DAT_00802a88;
    if (local_24 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar2 + 0x30) <= local_24) {
      return local_14;
    }
    iVar4 = (&DAT_0079aed0)[local_8] + local_20;
    if (iVar4 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar2 + 0x34) <= iVar4) {
      return local_14;
    }
    if (*(int *)((int)pvVar2 + 0x4c) == 0) {
      return local_14;
    }
    if (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + local_24) !=
        '\0') {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (*(int *)((int)DAT_00802a88 + 0xf8) == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_c,local_1c,
                       &local_24,&local_20);
    if (local_24 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar3 + 0x30) <= local_24) {
      return local_14;
    }
    local_20 = (&DAT_0079aed0)[iVar6] + local_20;
    if (local_20 < 0) {
      return local_14;
    }
    if (*(int *)((int)pvVar3 + 0x34) <= local_20) {
      return local_14;
    }
    if (*(int *)((int)pvVar3 + 0x4c) == 0) {
      return local_14;
    }
    if (*(char *)(local_20 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) + local_24)
        != '\0') {
      return local_14;
    }
    iVar5 = thunk_FUN_005f1d80(DAT_00802a88,local_10,iVar5,local_8);
    if (iVar5 == 1) {
      return local_14;
    }
  }
  return 0;
}

