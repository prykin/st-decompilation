
undefined4 __fastcall FUN_004dcbf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  if (*(uint *)(param_1 + 0x4f0) <= *(uint *)((int)DAT_00802a38 + 0xe4)) {
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x4ec),&local_8);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_00617eb0(local_8);
      *(undefined4 *)(param_1 + 0x2cd) = uVar2;
    }
    *(int *)(param_1 + 0x4f0) = *(int *)((int)DAT_00802a38 + 0xe4) + 0x19;
  }
  return 0;
}

