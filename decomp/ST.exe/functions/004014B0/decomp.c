
bool thunk_FUN_00680e50(void)

{
  int iVar1;
  
  iVar1 = DAT_008488b0;
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 4) {
    return false;
  }
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 5) {
    (&DAT_00811c90)[DAT_008488b0 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
    return false;
  }
  if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
    return false;
  }
  return -1 < (int)(&DAT_00811c8c)[iVar1 * 0xac5];
}

