
bool __fastcall thunk_FUN_004d6f70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_004d6df0(param_1);
  iVar2 = thunk_FUN_004e41c0(param_1[9]);
  if (iVar2 < iVar1) {
    iVar1 = thunk_FUN_004e41c0(param_1[9]);
  }
  thunk_FUN_004e4330(param_1[9],iVar1);
  thunk_FUN_004d6eb0(param_1,iVar1);
  if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
    thunk_FUN_004d8b70((char)param_1[9]);
  }
  iVar1 = (**(code **)(*param_1 + 0xc4))();
  return 99 < iVar1;
}

