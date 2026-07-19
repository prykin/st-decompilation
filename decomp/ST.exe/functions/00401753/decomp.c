
undefined4 __fastcall thunk_FUN_004e9050(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5ac) != 0x37) goto LAB_004e914a;
  uVar1 = thunk_FUN_004406c0(*(char *)(param_1 + 0x24));
  if ((uVar1 & 0xff) == 1) {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = 0x21;
LAB_004e9090:
    iVar2 = thunk_FUN_004e60d0(iVar2,iVar3);
    uVar1 = (uint)(iVar2 != 0);
  }
  else {
    if ((uVar1 & 0xff) == 2) {
      iVar2 = *(int *)(param_1 + 0x24);
      iVar3 = 0x8c;
      goto LAB_004e9090;
    }
    uVar1 = 0;
  }
  if ((*(int *)(param_1 + 0x4d0) < 100) &&
     ((uint)(&DAT_0079a9fc)[uVar1] / 100 + *(int *)(param_1 + 0x4d4) <=
      *(uint *)((int)DAT_00802a38 + 0xe4))) {
    iVar2 = *(int *)(param_1 + 0x4d0) + 1;
    *(uint *)(param_1 + 0x4d4) = *(uint *)((int)DAT_00802a38 + 0xe4);
    *(int *)(param_1 + 0x4d0) = iVar2;
    if ((99 < iVar2) && (*(int *)(param_1 + 0x4f4) == 0)) {
      *(undefined4 *)(param_1 + 0x4f4) = 1;
      TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,1);
    }
  }
  if ((*(int *)(param_1 + 0x4d0) < 100) && (*(int *)(param_1 + 0x4f4) != 0)) {
    iVar2 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\f');
    if (iVar2 == *(int *)(*(int *)(param_1 + 0x1f5) + 0x1c4)) {
      *(undefined4 *)(param_1 + 0x4f4) = 0;
      TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,1);
    }
  }
LAB_004e914a:
  if (((*(int *)(param_1 + 0x5ac) == 0x6c) && (*(int *)(param_1 + 0x61b) != 0)) &&
     (*(int *)(param_1 + 0x4fc) == 0)) {
    iVar2 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x4f8),(int *)0x0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x4f8) = 0;
      *(undefined4 *)(param_1 + 0x61b) = 0;
    }
  }
  return 0;
}

