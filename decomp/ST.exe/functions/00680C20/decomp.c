
undefined4 FUN_00680c20(void)

{
  if (*(int *)(&DAT_00811ae8 + DAT_008488b0 * 0x2b14) != 1) {
    return 0;
  }
  if (*(int *)(&DAT_00811c7c + DAT_008488b0 * 0x2b14) < 1) {
    (&DAT_00811c80)[DAT_008488b0 * 0xac5] = 0;
  }
  return 1;
}

