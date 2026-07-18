
undefined4 __fastcall thunk_FUN_004dcc80(int param_1)

{
  int iVar1;
  void *pvStack_8;
  
  pvStack_8 = (void *)0x0;
  if (*(int *)(param_1 + 0x4ec) != 0) {
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x4ec),(int *)&pvStack_8);
    if (iVar1 == 0) {
      thunk_FUN_00617880(pvStack_8);
    }
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  return 0;
}

