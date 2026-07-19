
int FUN_007552d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  DWORD exceptionCode;
  
  iVar1 = param_2;
  exceptionCode = FUN_006d4a40(param_1,param_2,&param_2);
  iVar2 = param_3;
  if (exceptionCode == 0) {
    exceptionCode = FUN_006d4aa0(param_1,param_3,param_2);
    if (exceptionCode == 0) {
      exceptionCode = FUN_006d4aa0(param_1,iVar1,iVar2);
      if (exceptionCode == 0) {
        return iVar2;
      }
    }
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_FMM_C_fmlins_c_007f2cf0,0x1b);
  return -1;
}

