
int FUN_00755330(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD exceptionCode;
  int local_c;
  int local_8;
  
  iVar1 = param_2;
  iVar3 = param_1;
  local_8 = -1;
  exceptionCode = FUN_006d4a40(param_1,param_2,&param_1);
  iVar4 = param_3;
  if (exceptionCode == 0) {
    local_8 = param_1;
    if (param_1 == 0) {
      return 0;
    }
    exceptionCode = FUN_006d4a40(iVar3,param_3,&local_8);
    iVar2 = param_1;
    while (exceptionCode == 0) {
      local_c = iVar2;
      if (iVar2 == iVar4) {
LAB_0075539f:
        exceptionCode = FUN_006d4aa0(iVar3,iVar1,local_8);
LAB_007553aa:
        if (exceptionCode == 0) {
          if (iVar1 == param_2) {
            return local_8;
          }
          return param_1;
        }
        break;
      }
      if (iVar2 == 0) {
        if (iVar4 == 0) goto LAB_0075539f;
        goto LAB_007553aa;
      }
      exceptionCode = FUN_006d4a40(iVar3,iVar2,&local_c);
      iVar1 = iVar2;
      iVar2 = local_c;
    }
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_FMM_C_fmldel_c_007f2d08,0x26);
  return -1;
}

