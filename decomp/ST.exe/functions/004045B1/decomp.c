
undefined4 thunk_FUN_00680ee0(void)

{
  int iVar1;
  
  iVar1 = DAT_008488b0;
  if ((*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) == 1) &&
     (0 < *(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14))) {
    if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 2) {
      (&DAT_00811c84)[DAT_008488b0 * 0xac5] = 10;
    }
    if ((0 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 4)) {
      if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
        (&DAT_00811c84)[iVar1 * 0xac5] = 0;
      }
      if (0x13 < (int)(&DAT_00811c84)[iVar1 * 0xac5]) {
        (&DAT_00811c84)[iVar1 * 0xac5] = 0x14;
      }
      return 1;
    }
  }
  return 0;
}

