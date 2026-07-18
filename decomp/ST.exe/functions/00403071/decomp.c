
undefined4 thunk_FUN_004b7030(char param_1)

{
  if (*(byte **)(&DAT_007f57b2 + param_1 * 0xa62) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(&DAT_007f57b2 + param_1 * 0xa62));
    *(undefined4 *)(&DAT_007f57b2 + param_1 * 0xa62) = 0;
  }
  return 0;
}

