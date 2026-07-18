
undefined4 FUN_006819a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 7;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 5) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 7;
  }
  if (*(int *)(&DAT_00811c7c + iVar2) < 6) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 5;
  }
  if ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c80)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c84)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c84)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c88)[iVar1 * 0xac5] < 0) {
    (&DAT_00811c88)[iVar1 * 0xac5] = 0;
  }
  if ((int)(&DAT_00811c8c)[iVar1 * 0xac5] < 1) {
    (&DAT_00811c8c)[iVar1 * 0xac5] = 7;
  }
  if ((int)(&DAT_00811c90)[iVar1 * 0xac5] < 1) {
    (&DAT_00811c90)[iVar1 * 0xac5] = 7;
  }
  if (*(int *)(&DAT_00811c94 + iVar1 * 0x158a) < 1) {
    *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 5;
  }
  return 1;
}

