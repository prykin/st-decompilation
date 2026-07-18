
undefined4 __fastcall thunk_FUN_004dfb00(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4d0) < 500) {
    uVar1 = thunk_FUN_004df910(param_1);
    if (uVar1 / 100 + *(int *)(param_1 + 0x4d4) <= *(uint *)(DAT_00802a38 + 0xe4)) {
      iVar2 = *(int *)(param_1 + 0x4d0) + 5;
      *(int *)(param_1 + 0x4d0) = iVar2;
      if (500 < iVar2) {
        *(undefined4 *)(param_1 + 0x4d0) = 500;
      }
      *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
  }
  return 0;
}

