
undefined4 __fastcall thunk_FUN_004dc260(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\x0e');
  if (iVar2 == *(int *)(*(int *)(param_1 + 0x1f5) + 0x20c)) {
    if (*(int *)(param_1 + 0x4d0) == 2) {
      *(undefined4 *)(param_1 + 0x4d0) = 1;
      *(undefined4 *)(param_1 + 0x261) = 1;
      thunk_FUN_004cabb0(0);
    }
    else if (*(int *)(param_1 + 0x4d0) == 3) {
      *(undefined4 *)(param_1 + 0x4d0) = 0;
      *(undefined4 *)(param_1 + 0x261) = 0;
      thunk_FUN_004cabb0(0);
    }
  }
  if (*(int *)(param_1 + 0x4d0) == 0) {
    if ((*(int *)(param_1 + 0x4d8) + 0xfU <= *(uint *)(DAT_00802a38 + 0xe4)) &&
       (*(int *)(param_1 + 0x4d4) < 200)) {
      *(uint *)(param_1 + 0x4d8) = *(uint *)(DAT_00802a38 + 0xe4);
      iVar2 = *(int *)(param_1 + 0x4d4) + 2;
      *(int *)(param_1 + 0x4d4) = iVar2;
      if (199 < iVar2) {
        *(undefined4 *)(param_1 + 0x4d4) = 200;
      }
    }
    uVar1 = *(uint *)(DAT_00802a38 + 0xe4);
    iVar2 = thunk_FUN_004e8230(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x235),0);
    if (((uint)(iVar2 + *(int *)(param_1 + 0x271)) <= uVar1) && (199 < *(int *)(param_1 + 0x4d4))) {
      *(uint *)(param_1 + 0x271) = uVar1;
      thunk_FUN_004c3c00(0,0);
      if (*(int *)(param_1 + 0x28d) != 0) {
        *(undefined4 *)(param_1 + 0x4d0) = 2;
        thunk_FUN_004cabb0(0);
        return 0;
      }
    }
  }
  else if (*(int *)(param_1 + 0x4d0) == 1) {
    if (*(int *)(param_1 + 0x4d4) < 1) {
      *(undefined4 *)(param_1 + 0x4d0) = 3;
      *(undefined4 *)(param_1 + 0x4d4) = 0;
      *(undefined4 *)(param_1 + 0x261) = 0;
      thunk_FUN_004cabb0(0);
      return 0;
    }
    if (*(int *)(param_1 + 0x295) + 0x465U <= *(uint *)(DAT_00802a38 + 0xe4)) {
      *(undefined4 *)(param_1 + 0x4d0) = 3;
      *(undefined4 *)(param_1 + 0x261) = 0;
      thunk_FUN_004cabb0(0);
    }
  }
  return 0;
}

