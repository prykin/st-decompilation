
void __fastcall FUN_00402e14(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x8c;
  }
  thunk_FUN_0065d030(iVar1);
  if (*(byte **)(param_1 + 0x5b3) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(param_1 + 0x5b3));
    *(undefined4 *)(param_1 + 0x5b3) = 0;
  }
  return;
}

