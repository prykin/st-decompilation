
undefined4 __fastcall FUN_004c7460(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)((int)param_1 + 0x361);
  if ((iVar2 == 0) && (*(int *)((int)param_1 + 0x3d4) == 0)) {
    if (*(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x365) * 4) != -1) {
      thunk_FUN_004d7570(*(char *)((int)param_1 + 0x24),
                         *(int *)(&DAT_00794d70 + *(int *)((int)param_1 + 0x365) * 4),
                         *(int *)((int)param_1 + 0x18));
      return 0;
    }
  }
  else {
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_8 = 0;
    if (iVar2 != 0) {
      if (iVar2 == 5) {
        local_8 = *(int *)((int)param_1 + 0x398);
        local_14 = *(int *)((int)param_1 + 0x39c);
        local_10 = *(int *)((int)param_1 + 0x3a0);
        local_c = *(int *)((int)param_1 + 0x3a4);
      }
      else {
        iVar2 = 100 - *(int *)((int)param_1 + 0x394);
        iVar3 = *(int *)((int)param_1 + 0x36d) + -1;
        local_8 = (iVar2 * *(int *)((int)param_1 + 0x398)) / 100 +
                  iVar3 * *(int *)((int)param_1 + 0x398);
        local_14 = (iVar2 * *(int *)((int)param_1 + 0x39c)) / 100 +
                   iVar3 * *(int *)((int)param_1 + 0x39c);
        local_10 = (iVar2 * *(int *)((int)param_1 + 0x3a0)) / 100 +
                   iVar3 * *(int *)((int)param_1 + 0x3a0);
        local_c = (iVar2 * *(int *)((int)param_1 + 0x3a4)) / 100 +
                  iVar3 * *(int *)((int)param_1 + 0x3a4);
      }
    }
    if ((*(int *)((int)param_1 + 0x3d4) != 0) && (local_18 = 0, 0 < *(int *)((int)param_1 + 0x3d4)))
    {
      iVar2 = *(int *)((int)param_1 + 0x607);
      iVar3 = 0;
      do {
        thunk_FUN_004c7260(param_1,*(undefined4 *)(iVar3 + iVar2),*(int *)(iVar3 + 4 + iVar2),
                           &local_1c,&local_20,&local_24,&local_28);
        iVar2 = *(int *)((int)param_1 + 0x607);
        iVar1 = *(int *)(iVar3 + 8 + iVar2);
        iVar3 = iVar3 + 0x27;
        local_8 = local_8 + iVar1 * local_1c;
        local_14 = local_14 + iVar1 * local_20;
        local_10 = local_10 + iVar1 * local_24;
        local_c = local_c + iVar1 * local_28;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)((int)param_1 + 0x3d4));
    }
    iVar2 = *(int *)((int)param_1 + 0x361);
    if (iVar2 == 0) {
      iVar2 = **(int **)((int)param_1 + 0x607);
    }
    if (*(int *)(&DAT_00794d70 + iVar2 * 4) != -1) {
      iVar1 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x24));
      iVar3 = local_8;
      if ((char)iVar1 == '\x03') {
        iVar3 = 0;
      }
      thunk_FUN_004d76e0(*(char *)((int)param_1 + 0x24),*(int *)(&DAT_00794d70 + iVar2 * 4),
                         *(int *)((int)param_1 + 0x18),iVar3,local_14,local_10,local_c);
    }
  }
  return 0;
}

