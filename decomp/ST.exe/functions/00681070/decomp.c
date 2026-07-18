
undefined4 FUN_00681070(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if ((*(int *)(&DAT_00811ae8 + iVar2) == 1) && (1 < *(int *)(&DAT_00811c7c + iVar2))) {
    if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
      (&DAT_00811c88)[DAT_008488b0 * 0xac5] = 10;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 8;
    }
    if ((0 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 4)) {
      if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
        (&DAT_00811c88)[iVar1 * 0xac5] = 0;
      }
      if (0x13 < (int)(&DAT_00811c88)[iVar1 * 0xac5]) {
        (&DAT_00811c88)[iVar1 * 0xac5] = 0x14;
      }
      return 1;
    }
  }
  return 0;
}

