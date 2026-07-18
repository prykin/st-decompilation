
int FUN_006ce8c0(int param_1,HDC param_2)

{
  HDC pHVar1;
  int iVar2;
  
  pHVar1 = param_2;
  if ((param_2 != (HDC)0x0) && (*(int *)(param_1 + 0x47c) != 0)) {
    SelectPalette(param_2,*(HPALETTE *)(param_1 + 0x4b8),1);
    param_2 = (HDC)0x0;
    do {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x480) + 0x68))(*(int **)(param_1 + 0x480),pHVar1);
      if (iVar2 == 0) break;
      if (iVar2 == -0x7789fe3e) {
        FUN_006cec40(param_1);
      }
      else if (iVar2 != -0x7789fde4) break;
      param_2 = (HDC)((int)&param_2->unused + 1);
    } while (param_2 < (HDC)0x9c40);
    *(undefined4 *)(param_1 + 0x47c) = 0;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (*(int *)(param_1 + 0x508) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee18c,0x4b);
      return iVar2;
    }
  }
  return 0;
}

