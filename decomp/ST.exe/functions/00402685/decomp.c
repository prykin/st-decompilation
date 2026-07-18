
undefined4 thunk_FUN_004d8b30(char param_1,undefined4 param_2)

{
  if (param_1 == 0xff) {
    return 0;
  }
  *(undefined4 *)((int)&DAT_007f4e47 + param_1 * 0xa62) = param_2;
  return param_2;
}

