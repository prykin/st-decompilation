
undefined4 __fastcall FUN_004cbe10(int *param_1)

{
  switch(param_1[0x16b]) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    thunk_FUN_004d08c0();
    break;
  case 0x45:
    thunk_FUN_004ead90(param_1);
    break;
  case 0x4e:
    thunk_FUN_004d9fe0(param_1);
    break;
  case 0x52:
  case 0x5f:
    thunk_FUN_004ec400((int)param_1);
    break;
  case 0x69:
    thunk_FUN_004dd070(param_1);
    break;
  case 0x70:
    thunk_FUN_004d9350(param_1);
    break;
  case 0x72:
    thunk_FUN_004ed210(param_1);
  }
  thunk_FUN_004ac9e0(*(void **)((int)param_1 + 0x5ff),*(int *)(DAT_00802a38 + 0xe4));
  return 0;
}

