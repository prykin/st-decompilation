
undefined4 __fastcall FUN_004cc040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    uVar1 = thunk_FUN_004d08e0();
    return uVar1;
  case 0x45:
    uVar1 = thunk_FUN_004eaf60(param_1);
    return uVar1;
  case 0x4e:
    uVar1 = thunk_FUN_004da230(param_1);
    return uVar1;
  case 0x52:
  case 0x5f:
    uVar1 = thunk_FUN_004ec6c0();
    return uVar1;
  case 0x69:
    uVar1 = thunk_FUN_004dd240();
    break;
  case 0x70:
    uVar1 = thunk_FUN_004d95a0(param_1);
    return uVar1;
  case 0x72:
    uVar1 = thunk_FUN_004ed430(param_1);
    return uVar1;
  }
  return uVar1;
}

