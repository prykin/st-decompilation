
int FUN_006bab60(int param_1,undefined4 param_2)

{
  int exceptionCode;
  uint uVar1;
  undefined4 local_68 [20];
  undefined4 local_18;
  
  if (((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100) && (*(int *)(param_1 + 0x40) != 0)) {
    local_68[0] = 100;
    local_18 = param_2;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    uVar1 = 0;
    while( true ) {
      exceptionCode =
           (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                     (*(int **)(param_1 + 0x40),0,0,0,0x1000400,local_68);
      if (exceptionCode == 0) break;
      if (exceptionCode == -0x7789fe3e) {
        FUN_006cec40(param_1);
      }
      else {
        if (((exceptionCode != -0x7789ff60) && (exceptionCode != -0x7789fe52)) || (uVar1 != 0))
        break;
        Sleep(2);
      }
      uVar1 = uVar1 + 1;
      if (1 < uVar1) break;
    }
    if ((exceptionCode == -0x7789ff60) || (exceptionCode == -0x7789fe52)) {
      exceptionCode = 0;
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddx_c_007edc48,0x30d);
      return exceptionCode;
    }
  }
  return 0;
}

