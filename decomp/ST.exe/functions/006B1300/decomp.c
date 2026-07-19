
int FUN_006b1300(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int exceptionCode;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  int local_8;
  
  local_8 = 0;
  puVar1 = FUN_006aac10(0x238);
  *param_1 = (int)puVar1;
  pIVar2 = g_currentExceptionFrame;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = __setjmp3(local_48,0,unaff_ESI,pIVar2);
  if (exceptionCode == 0) {
    puVar1 = FUN_006aac10(0x658);
    *(undefined4 **)(*param_1 + 0x1bc) = puVar1;
    puVar1 = FUN_006aac10(0x658);
    *(undefined4 **)(*param_1 + 0x1c0) = puVar1;
    FUN_006b1680((int *)*param_1,param_2);
    g_currentExceptionFrame = pIVar2;
    exceptionCode = local_8;
  }
  else {
    g_currentExceptionFrame = pIVar2;
    local_8 = exceptionCode;
    FUN_006ab060(param_1);
  }
  if (exceptionCode != 0) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x5c);
    return exceptionCode;
  }
  return 0;
}

