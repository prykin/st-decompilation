
void thunk_FUN_004f95b0(char *param_1,undefined4 param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_4c [17];
  uint *puStack_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  errorCode = __setjmp3(auStack_4c,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    puStack_8 = FUN_006b54f0((uint *)0x0,1,1);
    thunk_FUN_005411a0((int)puStack_8,param_1,s____s__007c221c);
    thunk_FUN_004f92b0((int *)&puStack_8,param_2);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x351,0,errorCode,
                             &DAT_007a4ccc,s_CPanelTy__OutText_str__time__007c2224);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x351);
  return;
}

