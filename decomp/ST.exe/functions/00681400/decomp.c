
undefined4 FUN_00681400(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0xdd;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if ((-1 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 3)) {
    if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 0;
    }
    return 1;
  }
  return 0;
}

