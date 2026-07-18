
undefined4 __cdecl thunk_FUN_005293f0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 10000;
  switch(param_1) {
  case 0xdc:
  case 0xe1:
    uVar1 = 0x271f;
    break;
  case 0xdd:
    return 0x271d;
  case 0xde:
    return 0x271e;
  case 0xdf:
    return 0x2720;
  case 0xe0:
  case 0xe3:
    return 0x2730;
  case 0xe2:
    return 0x2731;
  }
  return uVar1;
}

