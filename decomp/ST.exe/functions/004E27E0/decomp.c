
undefined4 __fastcall FUN_004e27e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = param_1;
  if (*(uint *)((int)DAT_00802a38 + 0xe4) % 0x4b == 0) {
    piVar3 = (int *)(param_1 + 0x4d0);
    iVar2 = 2;
    do {
      if ((*piVar3 != 0) &&
         ((iVar1 = FUN_006e62d0(DAT_00802a38,*piVar3,&local_8), iVar1 != 0 ||
          (iVar1 = thunk_FUN_0045ff10(local_8), iVar1 != 4)))) {
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((((*(int *)(param_1 + 0x520) != 0) &&
       (iVar2 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\f'),
       iVar2 == *(int *)(*(int *)(param_1 + 0x1f5) + 0x1c4))) && (*(int *)(param_1 + 0x4d0) == 0))
     && (*(int *)(param_1 + 0x4f8) == 0)) {
    *(undefined4 *)(param_1 + 0x520) = 0;
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
  }
  return 0;
}

