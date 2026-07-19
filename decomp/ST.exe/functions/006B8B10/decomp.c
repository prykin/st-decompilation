
int FUN_006b8b10(int *param_1)

{
  int iVar1;
  int exceptionCode;
  
  exceptionCode = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if ((*(uint *)(iVar1 + 0xc) & 0x100) == 0) {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    if (((param_1[1] & 0x8000U) != 0) &&
       (((param_1[1] & 0x4000U) == 0 || (exceptionCode = FUN_006b8e30(param_1), exceptionCode == 0))
       )) {
      param_1[1] = param_1[1] & 0xffff6fff;
      exceptionCode = FUN_006b92b0(param_1,param_1 + 4);
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (exceptionCode == 0) {
      return 0;
    }
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddcurs_c_007edc18,0xef);
    return exceptionCode;
  }
  return 0;
}

