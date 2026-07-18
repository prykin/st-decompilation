
undefined4 __fastcall FUN_004c2d40(int param_1)

{
  int iVar1;
  int local_8;
  
  if (*(int *)(param_1 + 0x408) != 0) {
    local_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x40c),&local_8);
    if (iVar1 == 0) {
      thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_8 + 8));
      *(undefined4 *)(param_1 + 0x40c) = 0;
      *(undefined4 *)(param_1 + 0x408) = 0;
    }
    *(undefined4 *)(param_1 + 0x408) = 0;
  }
  return 0;
}

