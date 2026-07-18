
undefined4 __cdecl thunk_FUN_00529fe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    uVar1 = 2;
    break;
  case 1:
  case 3:
    return 0;
  case 2:
    return 1;
  }
  return uVar1;
}

