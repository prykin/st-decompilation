
bool FUN_00681d20(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_008488b0;
  iVar2 = DAT_008488b0 * 0x2b14;
  if (0 < *(int *)(&DAT_00811ae8 + iVar2)) {
    if (*(int *)(&DAT_00811c7c + iVar2) < 1) {
      (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 2) {
      (&DAT_00811c84)[iVar1 * 0xac5] = 2;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 3) {
      (&DAT_00811c88)[iVar1 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 4) {
      (&DAT_00811c8c)[iVar1 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 5) {
      (&DAT_00811c90)[iVar1 * 0xac5] = 0;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 6) {
      *(undefined4 *)(&DAT_00811c94 + iVar1 * 0x158a) = 800;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 7) {
      *(undefined4 *)(&DAT_00811c98 + iVar1 * 0x158a) = 600;
    }
    if (*(int *)(&DAT_00811c7c + iVar2) < 8) {
      *(undefined4 *)(&DAT_00811c9c + iVar2) = 0;
    }
    if ((((-1 < (int)(&DAT_00811c80)[iVar1 * 0xac5]) && ((int)(&DAT_00811c80)[iVar1 * 0xac5] < 2))
        && (-1 < (int)(&DAT_00811c84)[iVar1 * 0xac5])) &&
       ((((int)(&DAT_00811c84)[iVar1 * 0xac5] < 3 && (-1 < (int)(&DAT_00811c88)[iVar1 * 0xac5])) &&
        (((int)(&DAT_00811c88)[iVar1 * 0xac5] < 3 && (0 < *(int *)(&DAT_00811c94 + iVar1 * 0x158a)))
        )))) {
      return 0 < *(int *)(&DAT_00811c98 + iVar1 * 0x158a);
    }
  }
  return false;
}

