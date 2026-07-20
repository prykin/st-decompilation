
undefined4 __fastcall FUN_004b9920(AnonShape_004B9920_1D6BF5BA *param_1)

{
  int iVar1;
  
  iVar1 = param_1->field_05AC;
  if ((iVar1 == 0x34) || (iVar1 == 0x5b)) {
    thunk_FUN_004de030((int)param_1);
  }
  else if (iVar1 == 0x48) {
    thunk_FUN_004df950((int)param_1);
  }
  else if (iVar1 == 100) {
    thunk_FUN_004e4480((int)param_1);
  }
  else if (iVar1 == 0x62) {
    thunk_FUN_004e28d0((int)param_1);
  }
  else if (iVar1 == 0x6e) {
    thunk_FUN_004dd2b0((int)param_1);
  }
  else if (iVar1 == 0x4d) {
    thunk_FUN_004def50((int)param_1);
  }
  else if (iVar1 == 0x43) {
    thunk_FUN_004df100((int)param_1);
  }
  else if (iVar1 == 0x73) {
    thunk_FUN_004ecac0((int)param_1);
  }
  else if (iVar1 == 0x3a) {
    thunk_FUN_004d96b0();
  }
  else if (iVar1 == 0x65) {
    thunk_FUN_004e48f0((int)param_1);
  }
  else if ((iVar1 == 0x3b) || (iVar1 == 0x60)) {
    thunk_FUN_004dfe90((int)param_1);
  }
  if (param_1->field_05AC == 0x5c) {
    *(undefined4 *)&g_playerRuntime[param_1->field_0024].field_0x9ca = 1;
  }
  return 0;
}

