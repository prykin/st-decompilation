
int FUN_006ce8c0(int param_1,HDC param_2)

{
  HDC pHVar1;
  int exceptionCode;
  
  pHVar1 = param_2;
  if ((param_2 != (HDC)0x0) && (*(int *)(param_1 + 0x47c) != 0)) {
    SelectPalette(param_2,*(HPALETTE *)(param_1 + 0x4b8),1);
    param_2 = (HDC)0x0;
    do {
      exceptionCode =
           (**(code **)(**(int **)(param_1 + 0x480) + 0x68))(*(int **)(param_1 + 0x480),pHVar1);
      if (exceptionCode == 0) break;
      if (exceptionCode == -0x7789fe3e) {
        FUN_006cec40(param_1);
      }
      else if (exceptionCode != -0x7789fde4) break;
      param_2 = (HDC)((int)&param_2->unused + 1);
    } while (param_2 < (HDC)0x9c40);
    *(undefined4 *)(param_1 + 0x47c) = 0;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (*(int *)(param_1 + 0x508) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddgetdc_c_007ee18c,0x4b);
      return exceptionCode;
    }
  }
  return 0;
}

