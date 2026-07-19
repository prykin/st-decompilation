
int FUN_006b2220(int *param_1,uint *param_2,uint param_3,uint param_4,undefined4 *param_5,
                int *param_6,uint param_7,uint param_8)

{
  int exceptionCode;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar1;
  undefined4 local_48 [16];
  int local_8;
  
  exceptionCode =
       FUN_006b1d50((uint)param_1,param_2,param_3,(uint)param_5,(int *)0x0,0x4000000,0xffffffff,
                    0xffffffff,0,1);
  pIVar1 = g_currentExceptionFrame;
  if ((exceptionCode == 0) && (param_6 != (int *)0x0)) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    local_8 = exceptionCode;
    exceptionCode = __setjmp3(local_48,0,unaff_ESI,pIVar1);
    if (exceptionCode == 0) {
      FUN_006b2930(param_1,*param_2,param_4,param_5,param_6,0x4000000,param_7,param_8);
      g_currentExceptionFrame = pIVar1;
      return local_8;
    }
    g_currentExceptionFrame = pIVar1;
    FUN_006b3bb0(param_1,*param_2);
    RaiseInternalException(exceptionCode,0,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x33e);
  }
  return exceptionCode;
}

