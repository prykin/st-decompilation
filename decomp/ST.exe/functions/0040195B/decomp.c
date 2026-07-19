
void __thiscall CPanelTy::OutText(CPanelTy *this,char *param_1,undefined4 param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_4c [16];
  CPanelTy *pCStack_c;
  uint *puStack_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  pCStack_c = this;
  errorCode = Library::MSVCRT::__setjmp3(auStack_4c,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    puStack_8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    thunk_FUN_005411a0((int)puStack_8,param_1,s____s__007c221c);
    OutText(pCStack_c,(int *)&puStack_8,param_2);
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

