
int FUN_006b89b0(byte *param_1,int param_2)

{
  int exceptionCode;
  int local_14 [4];
  
  exceptionCode = 0;
  if (((*(uint *)(param_1 + 4) & 0x8000) != 0) && ((*(uint *)(param_1 + 4) & 0x3000) != 0)) {
    exceptionCode = FUN_006b8f10(param_1,local_14);
    if (exceptionCode != 0) goto LAB_006b89fa;
    if (param_2 != 0) {
      exceptionCode = FUN_006b92b0((int *)param_1,local_14);
    }
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffcfff;
  if (exceptionCode == 0) {
    return 0;
  }
LAB_006b89fa:
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddcurs_c_007edc18,0x3f);
  return exceptionCode;
}

