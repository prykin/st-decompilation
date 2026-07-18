
undefined4 __cdecl FUN_0058cfe0(int param_1)

{
  DAT_00811720 = DAT_00811720 + 1;
  DAT_00811718 = (undefined4 *)FUN_006acf50(DAT_00811718,DAT_00811720 * 4);
  DAT_0081171c = (undefined4 *)FUN_006acf50(DAT_0081171c,DAT_00811720 * 4);
  if ((DAT_00811718 != (undefined4 *)0x0) && (DAT_0081171c != (undefined4 *)0x0)) {
    *(undefined4 *)((int)DAT_00811718 + -4 + DAT_00811720 * 4) = *(undefined4 *)(param_1 + 0x18);
    *(int *)((int)DAT_0081171c + -4 + DAT_00811720 * 4) = param_1;
    return 1;
  }
  return 0;
}

