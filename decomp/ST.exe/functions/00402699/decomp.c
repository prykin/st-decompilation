
undefined4 __fastcall thunk_FUN_004dd570(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\x0e');
  if (iVar1 == *(int *)(*(int *)(param_1 + 0x1f5) + 0x20c)) {
    if (*(int *)(param_1 + 0x4d0) == 1) {
      *(undefined4 *)(param_1 + 0x4d0) = 2;
    }
    else {
      if (*(int *)(param_1 + 0x4d0) != 3) goto LAB_004dd5bb;
      *(undefined4 *)(param_1 + 0x4d0) = 0;
    }
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
  }
LAB_004dd5bb:
  if ((DAT_008117a4 != (void *)0x0) && (*(int *)(param_1 + 0x4d0) == 0)) {
    iVar1 = thunk_FUN_0062e640(DAT_008117a4,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x4d8) == 0) {
        *(undefined4 *)(param_1 + 0x4d8) = 1;
        *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        return 0;
      }
      if (*(int *)(param_1 + 0x4dc) + 0x2eeU <= *(uint *)(DAT_00802a38 + 0xe4)) {
        iVar1 = thunk_FUN_0062e6b0(DAT_008117a4,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x18));
        *(uint *)(param_1 + 0x4d8) = (uint)(iVar1 == 0);
      }
    }
  }
  return 0;
}

