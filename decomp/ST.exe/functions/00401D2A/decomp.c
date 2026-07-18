
undefined4 __cdecl thunk_FUN_00645d30(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = thunk_FUN_004406c0((char)param_1);
  uVar1 = uVar1 & 0xff;
  switch(param_2) {
  case 0x96:
  case 0x97:
  case 0x98:
    if (uVar1 == 1) {
      uVar2 = thunk_FUN_004e60d0(param_1,6);
      return uVar2;
    }
    if (uVar1 == 2) {
      uVar2 = thunk_FUN_004e60d0(param_1,0x83);
      return uVar2;
    }
    break;
  default:
    break;
  case 0x9a:
    if (uVar1 == 2) {
      uVar2 = thunk_FUN_004e60d0(param_1,0x93);
      return uVar2;
    }
    break;
  case 0x9f:
  case 0xa0:
    if (uVar1 == 1) {
      uVar2 = thunk_FUN_004e60d0(param_1,0x97);
      return uVar2;
    }
    break;
  case 0xac:
    if (uVar1 == 2) {
      uVar2 = thunk_FUN_004e60d0(param_1,0x95);
      return uVar2;
    }
    break;
  case 0xad:
    if (uVar1 == 3) {
      uVar2 = thunk_FUN_004e60d0(param_1,0x7d);
      return uVar2;
    }
    break;
  case 0xb0:
  case 0xb6:
  case 0xb7:
  case 0xb9:
  case 0xba:
  case 0xbf:
    if (uVar1 == 3) {
      uVar2 = thunk_FUN_004e60d0(param_1,0x7a);
      return uVar2;
    }
    break;
  case 0xb8:
    if (uVar1 == 3) {
      uVar2 = thunk_FUN_004e60d0(param_1,0x76);
      return uVar2;
    }
  }
  return 0;
}

