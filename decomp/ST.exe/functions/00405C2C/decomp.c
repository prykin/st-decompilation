
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_004ec400(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4d0) == 4) {
    if (*(int *)(param_1 + 0x514) + 1U <= *(uint *)(DAT_00802a38 + 0xe4)) {
      iVar3 = *(int *)(param_1 + 0x504) + 3;
      *(uint *)(param_1 + 0x514) = *(uint *)(DAT_00802a38 + 0xe4);
      *(int *)(param_1 + 0x510) = *(int *)(param_1 + 0x510) + 1;
      *(int *)(param_1 + 0x504) = iVar3;
      thunk_FUN_004ad3c0(*(void **)(param_1 + 0x5ff),
                         (float)*(int *)(param_1 + 0x4fc) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(param_1 + 0x500) * _DAT_007904f8 * _DAT_007904f0,
                         (float)iVar3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    }
  }
  if ((*(int *)(param_1 + 0x4d0) == 6) &&
     (*(int *)(param_1 + 0x514) + 1U <= *(uint *)(DAT_00802a38 + 0xe4))) {
    *(uint *)(param_1 + 0x514) = *(uint *)(DAT_00802a38 + 0xe4);
    *(int *)(param_1 + 0x510) = *(int *)(param_1 + 0x510) + 1;
    iVar1 = *(int *)(param_1 + 0x4fc);
    iVar2 = *(int *)(param_1 + 0x5b0) * 0xc9;
    iVar3 = iVar2 + 0xdc;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + 0xdc) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      *(int *)(param_1 + 0x4fc) = iVar1 + iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x5b4) * 0xc9;
    iVar1 = *(int *)(param_1 + 0x500);
    iVar3 = iVar2 + 100;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + 100) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      *(int *)(param_1 + 0x500) = iVar1 + iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x5b8) * 0xc9;
    iVar1 = *(int *)(param_1 + 0x504);
    iVar3 = iVar2 + -0x28;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + -0x28) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      *(int *)(param_1 + 0x504) = iVar1 + iVar2;
    }
    thunk_FUN_004ad3c0(*(void **)(param_1 + 0x5ff),
                       (float)*(int *)(param_1 + 0x4fc) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(param_1 + 0x500) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(param_1 + 0x504) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
  }
  return 0;
}

