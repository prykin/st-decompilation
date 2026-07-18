
void __fastcall thunk_FUN_00550190(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe4) + 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(int *)(param_1 + 0xe4) = iVar1;
  if ((iVar1 - *(int *)(param_1 + 0x34) == 6000) && (DAT_008016dc != (void *)0x0)) {
    thunk_FUN_00533b80(DAT_008016dc);
    return;
  }
  return;
}

