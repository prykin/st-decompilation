
undefined4 __fastcall thunk_FUN_004b9920(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5ac);
  if ((iVar1 == 0x34) || (iVar1 == 0x5b)) {
    thunk_FUN_004de030(param_1);
  }
  else if (iVar1 == 0x48) {
    thunk_FUN_004df950(param_1);
  }
  else if (iVar1 == 100) {
    thunk_FUN_004e4480(param_1);
  }
  else if (iVar1 == 0x62) {
    thunk_FUN_004e28d0(param_1);
  }
  else if (iVar1 == 0x6e) {
    thunk_FUN_004dd2b0(param_1);
  }
  else if (iVar1 == 0x4d) {
    thunk_FUN_004def50(param_1);
  }
  else if (iVar1 == 0x43) {
    thunk_FUN_004df100(param_1);
  }
  else if (iVar1 == 0x73) {
    thunk_FUN_004ecac0(param_1);
  }
  else if (iVar1 == 0x3a) {
    thunk_FUN_004d96b0();
  }
  else if (iVar1 == 0x65) {
    thunk_FUN_004e48f0(param_1);
  }
  else if ((iVar1 == 0x3b) || (iVar1 == 0x60)) {
    thunk_FUN_004dfe90(param_1);
  }
  if (*(int *)(param_1 + 0x5ac) == 0x5c) {
    *(undefined4 *)(&DAT_007f57ea + *(int *)(param_1 + 0x24) * 0xa62) = 1;
  }
  return 0;
}

