
undefined4 __fastcall FUN_004c5f30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x4d0) == 0) {
    local_8 = thunk_FUN_004e81b0(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x235),0);
    local_8 = *(int *)(param_1 + 0x5b0) - local_8;
    if (local_8 < 0) {
      local_8 = 0;
    }
    iVar1 = thunk_FUN_004e81b0(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x235),0);
    iVar1 = *(int *)(param_1 + 0x5b4) - iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar2 = thunk_FUN_004e81b0(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x235),0);
    iVar2 = iVar2 + *(int *)(param_1 + 0x5b0);
    if (DAT_007fb240 <= iVar2) {
      iVar2 = DAT_007fb240 + -1;
    }
    iVar3 = thunk_FUN_004e81b0(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x235),0);
    iVar3 = iVar3 + *(int *)(param_1 + 0x5b4);
    if (DAT_007fb242 <= iVar3) {
      iVar3 = DAT_007fb242 + -1;
    }
    iVar1 = thunk_FUN_00581120(local_8,iVar1,iVar2,iVar3,5,*(undefined4 *)(param_1 + 0x24),
                               *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x2d1) = 5;
    return 0;
  }
  return 0;
}

