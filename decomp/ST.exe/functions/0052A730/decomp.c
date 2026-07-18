
undefined4 __cdecl FUN_0052a730(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (*(short *)(param_1 + 0x14) == 0) {
    uVar1 = 9;
  }
  else if (*(short *)(param_1 + 0x14) == 2) {
    return 8;
  }
  return uVar1;
}

