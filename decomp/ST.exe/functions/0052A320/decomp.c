
undefined4 __cdecl FUN_0052a320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  switch(*(undefined2 *)(param_1 + 0x14)) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    return 3;
  }
  return uVar1;
}

