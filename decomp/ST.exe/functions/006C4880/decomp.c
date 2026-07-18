
LPBITMAPINFO FUN_006c4880(int param_1,int param_2,int param_3,int param_4,UINT param_5,uint param_6)

{
  int iVar1;
  LPBITMAPINFO ptVar2;
  int *piVar3;
  HDC *ppHVar4;
  undefined4 local_58;
  undefined4 local_54 [16];
  HPALETTE local_14;
  LPBITMAPINFO local_10;
  int local_c;
  HDC local_8;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    local_10 = (LPBITMAPINFO)0x0;
    if (*(int *)(param_1 + 0x508) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    piVar3 = *(int **)(param_1 + 0x40);
    ppHVar4 = &local_8;
    iVar1 = (**(code **)(*piVar3 + 0x44))();
    ptVar2 = (LPBITMAPINFO)0x0;
    local_c = iVar1;
    if (iVar1 == 0) {
      local_14 = SelectPalette(local_8,*(HPALETTE *)(param_1 + 0x4b4),1);
      local_58 = DAT_00858df8;
      DAT_00858df8 = &local_58;
      iVar1 = __setjmp3(local_54,0,piVar3,ppHVar4);
      if (iVar1 == 0) {
        local_10 = FUN_006d7550(local_8,param_2,param_3,param_4,param_5,param_6,
                                *(HPALETTE *)(param_1 + 0x4b4));
        iVar1 = local_c;
      }
      local_c = iVar1;
      iVar1 = local_c;
      DAT_00858df8 = (undefined4 *)local_58;
      SelectPalette(local_8,local_14,1);
      (**(code **)(**(int **)(param_1 + 0x40) + 0x68))(*(int **)(param_1 + 0x40),local_8);
      ptVar2 = local_10;
    }
    if (*(int *)(param_1 + 0x508) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (iVar1 != 0) {
      FUN_006a5e40(iVar1,DAT_007ed77c,0x7edf0c,0x24);
    }
    return ptVar2;
  }
  return (LPBITMAPINFO)0x0;
}

