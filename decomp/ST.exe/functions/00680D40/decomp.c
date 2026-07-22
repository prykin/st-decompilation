
undefined4 FUN_00680d40(void)

{
  int iVar1;
  char *pcVar2;

  iVar1 = DAT_008488b0;
  if ((0 < *(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14)) &&
     (0 < *(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14))) {
    if (*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) < 2) {
      pcVar2 = thunk_FUN_0067eea0(PTR_s___EMPTY___0079d734);
      (&DAT_00811af0)[iVar1 * 0xac5] = pcVar2;
    }
    if (*(int *)(&DAT_00811c7c + iVar1 * 0x2b14) < 2) {
      (&DAT_00811c84)[iVar1 * 0xac5] = 0xffffffff;
    }
    if ((0 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 4)) {
      return 1;
    }
  }
  return 0;
}

