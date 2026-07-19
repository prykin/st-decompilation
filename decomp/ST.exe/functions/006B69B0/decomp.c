
int FUN_006b69b0(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                )

{
  int exceptionCode;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  exceptionCode = __setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (exceptionCode == 0) {
    FUN_006b6350(param_1,&DAT_0079ec98,param_2);
    FUN_006b6750((undefined4 *)*param_1,param_3,param_4,param_5);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  FUN_006b7740((int *)*param_1);
  *param_1 = 0;
  RaiseInternalException(exceptionCode,0,s_E__DKW_DDX_C_dplay2_cpp_007edbc4,0x250);
  return exceptionCode;
}

