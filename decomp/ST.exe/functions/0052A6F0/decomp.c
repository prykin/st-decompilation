
undefined4 __cdecl FUN_0052a6f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x14) == 0) {
    uVar1 = 2;
  }
  else if (*(short *)(param_1 + 0x14) == 2) {
    return 1;
  }
  return uVar1;
}

