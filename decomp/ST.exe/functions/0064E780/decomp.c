
undefined4 __cdecl FUN_0064e780(short *param_1)

{
  if (*param_1 < 1) {
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else if ((char)param_1[0x68] != '\b') {
    return 0;
  }
  return 1;
}

