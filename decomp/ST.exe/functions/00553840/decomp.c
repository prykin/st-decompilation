
short __cdecl FUN_00553840(short param_1)

{
  short sVar1;

  if (param_1 == 0) {
    return 0xf;
  }
  sVar1 = 0;
  do {
    if (param_1 == (&DAT_007c8884)[sVar1]) {
      return sVar1;
    }
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0xf);
  return -1;
}

