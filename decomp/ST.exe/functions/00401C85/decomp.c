
undefined4 __fastcall thunk_FUN_004c5eb0(int param_1)

{
  int iVar1;
  int iStack_8;
  
  if (*(uint *)(param_1 + 0x4d4) <= *(uint *)((int)DAT_00802a38 + 0xe4)) {
    iStack_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x4d0),&iStack_8);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2cd) = *(undefined4 *)(iStack_8 + 0x20f);
    }
    *(int *)(param_1 + 0x4d4) = *(int *)((int)DAT_00802a38 + 0xe4) + 0x7d;
  }
  return 0;
}

