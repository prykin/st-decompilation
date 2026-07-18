
undefined4 __fastcall thunk_FUN_004c7460(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
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
    iStack_c = 0;
    iStack_10 = 0;
    iStack_14 = 0;
    iStack_8 = 0;
    if (iVar2 != 0) {
      if (iVar2 == 5) {
        iStack_8 = *(int *)((int)param_1 + 0x398);
        iStack_14 = *(int *)((int)param_1 + 0x39c);
        iStack_10 = *(int *)((int)param_1 + 0x3a0);
        iStack_c = *(int *)((int)param_1 + 0x3a4);
      }
      else {
        iVar2 = 100 - *(int *)((int)param_1 + 0x394);
        iVar3 = *(int *)((int)param_1 + 0x36d) + -1;
        iStack_8 = (iVar2 * *(int *)((int)param_1 + 0x398)) / 100 +
                   iVar3 * *(int *)((int)param_1 + 0x398);
        iStack_14 = (iVar2 * *(int *)((int)param_1 + 0x39c)) / 100 +
                    iVar3 * *(int *)((int)param_1 + 0x39c);
        iStack_10 = (iVar2 * *(int *)((int)param_1 + 0x3a0)) / 100 +
                    iVar3 * *(int *)((int)param_1 + 0x3a0);
        iStack_c = (iVar2 * *(int *)((int)param_1 + 0x3a4)) / 100 +
                   iVar3 * *(int *)((int)param_1 + 0x3a4);
      }
    }
    if ((*(int *)((int)param_1 + 0x3d4) != 0) && (iStack_18 = 0, 0 < *(int *)((int)param_1 + 0x3d4))
       ) {
      iVar2 = *(int *)((int)param_1 + 0x607);
      iVar3 = 0;
      do {
        thunk_FUN_004c7260(param_1,*(undefined4 *)(iVar3 + iVar2),*(int *)(iVar3 + 4 + iVar2),
                           &iStack_1c,&iStack_20,&iStack_24,&iStack_28);
        iVar2 = *(int *)((int)param_1 + 0x607);
        iVar1 = *(int *)(iVar3 + 8 + iVar2);
        iVar3 = iVar3 + 0x27;
        iStack_8 = iStack_8 + iVar1 * iStack_1c;
        iStack_14 = iStack_14 + iVar1 * iStack_20;
        iStack_10 = iStack_10 + iVar1 * iStack_24;
        iStack_c = iStack_c + iVar1 * iStack_28;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < *(int *)((int)param_1 + 0x3d4));
    }
    iVar2 = *(int *)((int)param_1 + 0x361);
    if (iVar2 == 0) {
      iVar2 = **(int **)((int)param_1 + 0x607);
    }
    if (*(int *)(&DAT_00794d70 + iVar2 * 4) != -1) {
      iVar1 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x24));
      iVar3 = iStack_8;
      if ((char)iVar1 == '\x03') {
        iVar3 = 0;
      }
      thunk_FUN_004d76e0(*(char *)((int)param_1 + 0x24),*(int *)(&DAT_00794d70 + iVar2 * 4),
                         *(int *)((int)param_1 + 0x18),iVar3,iStack_14,iStack_10,iStack_c);
    }
  }
  return 0;
}

