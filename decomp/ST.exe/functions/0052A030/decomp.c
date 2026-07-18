
undefined4 __cdecl FUN_0052a030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    return 2;
  case 1:
    uVar1 = 1;
    break;
  case 2:
  case 3:
    return 0;
  }
  return uVar1;
}

