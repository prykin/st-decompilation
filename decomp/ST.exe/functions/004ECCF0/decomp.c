
undefined4 __fastcall FUN_004eccf0(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x4d4) + 0x19U <= *(uint *)(DAT_00802a38 + 0xe4)) &&
     (*(uint *)(param_1 + 0x4d4) = *(uint *)(DAT_00802a38 + 0xe4), *(int *)(param_1 + 0x4d0) < 5000)
     ) {
    lVar2 = FUN_006b12cc(0x19);
    iVar1 = (int)lVar2;
    lVar2 = FUN_006b12cc(0x1194);
    iVar1 = FUN_006b12a8((int)lVar2,iVar1);
    lVar2 = FUN_006b12cc(5000);
    iVar1 = FUN_006b12a8((int)lVar2,iVar1);
    iVar1 = FUN_006b1280(iVar1);
    iVar1 = *(int *)(param_1 + 0x4d0) + iVar1;
    *(int *)(param_1 + 0x4d0) = iVar1;
    if ((4999 < iVar1) &&
       (*(undefined4 *)(param_1 + 0x4d0) = 5000, *(int *)(param_1 + 0x5ac) == 0x73)) {
      thunk_FUN_004c2c10(param_1);
    }
  }
  return 0;
}

