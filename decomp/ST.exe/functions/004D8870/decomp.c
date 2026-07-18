
undefined4 FUN_004d8870(char param_1)

{
  if (param_1 == 0xff) {
    return 0;
  }
  return *(undefined4 *)((int)&DAT_007f4e3f + param_1 * 0xa62);
}

