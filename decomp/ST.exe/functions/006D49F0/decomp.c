
DWORD FUN_006d49f0(int param_1,DWORD param_2,undefined4 *param_3,uint param_4)

{
  DWORD exceptionCode;
  
  exceptionCode = FUN_006d4930(param_1,param_2,param_3,param_4);
  if (exceptionCode != 0) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x18e);
    return exceptionCode;
  }
  return 0;
}

