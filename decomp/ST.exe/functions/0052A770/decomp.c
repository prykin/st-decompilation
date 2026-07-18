
undefined4 __cdecl FUN_0052a770(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(short *)(param_1 + 0x14) == 0) {
    uVar1 = 6;
  }
  else if (*(short *)(param_1 + 0x14) == 2) {
    return 4;
  }
  return uVar1;
}

