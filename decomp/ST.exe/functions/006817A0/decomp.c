
undefined4 FUN_006817a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_008488b0;
  uVar2 = 1;
  iVar3 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar3) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 1;
  }
  if (*(int *)(&DAT_00811c7c + iVar3) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
  }
  if (((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) || (2 < (int)(&DAT_00811c80)[iVar1 * 0xac5])) {
    uVar2 = 0;
  }
  else {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 1;
    }
    if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
    }
    if ((int)(&DAT_00811c90)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c90)[iVar1 * 0xac5] = 1;
    }
    if (*(int *)(&DAT_00811c94 + iVar1 * 0x158a) < 0) {
      *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

