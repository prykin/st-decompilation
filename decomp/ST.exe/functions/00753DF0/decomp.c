
uint FUN_00753df0(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  int exceptionCode;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 == 1) && (local_8 = FUN_00755a80(param_1,param_4), local_8 == 0xffffffff)) {
    return 0xffffffff;
  }
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  exceptionCode = __setjmp3(local_4c,0,unaff_ESI,pIVar2);
  uVar1 = local_8;
  if (exceptionCode != 0) {
    g_currentExceptionFrame = pIVar2;
    if (param_2 == 1) {
      FUN_00753ce0(local_c,local_8);
    }
    RaiseInternalException(exceptionCode,0,s_E__DKW_FMM_C_fmrecput_c_007f2c88,0x15);
    return 0xffffffff;
  }
  FUN_006d4860(local_c,local_8,param_3,param_4);
  g_currentExceptionFrame = pIVar2;
  return uVar1;
}

