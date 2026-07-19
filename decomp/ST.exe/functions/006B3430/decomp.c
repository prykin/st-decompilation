
int FUN_006b3430(int *param_1,uint param_2)

{
  uint *puVar1;
  int exceptionCode;
  
  if (param_2 < (uint)param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar1 & 0x8030) == 0x8000) {
      if ((*puVar1 & 0x80000) == 0) {
        exceptionCode = FUN_006b3120((uint *)param_1,puVar1);
      }
      else {
        EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        exceptionCode = FUN_006b3120((uint *)param_1,puVar1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
      }
      if (exceptionCode != 0) {
        RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x67a);
        return exceptionCode;
      }
    }
  }
  return 0;
}

