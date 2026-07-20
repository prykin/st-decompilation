
undefined4 __fastcall FUN_004dcc80(int param_1)

{
  int iVar1;
  STJellyGunC *local_8;
  
  local_8 = (STJellyGunC *)0x0;
  if (*(int *)(param_1 + 0x4ec) != 0) {
    iVar1 = FUN_006e62d0(PTR_00802a38,*(int *)(param_1 + 0x4ec),(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_00617880(local_8);
    }
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  return 0;
}

