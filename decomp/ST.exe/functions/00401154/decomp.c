
undefined4 __fastcall thunk_FUN_004e3880(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 5;
  *(int *)(param_1 + 0x4e8) = *(int *)(DAT_00802a38 + 0xe4) + 0x271;
  iVar1 = thunk_FUN_004ab880(0xb,DAT_0080678c,(byte *)s_sha_ani1_007bfa20,0x1d);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7bf9f8,0x18);
  }
  return 0;
}

