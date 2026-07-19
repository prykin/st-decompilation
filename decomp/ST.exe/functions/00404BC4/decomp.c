
undefined4 __thiscall
STAllPlayersC::UnRegisterTorpedo(STAllPlayersC *this,short param_1,int param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  errorCode = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  if (errorCode == 0) {
    if (DAT_007fa130 != (uint *)0x0) {
      FUN_006acc70((int)DAT_007fa130,(int)param_1,&iStack_8);
      if (iStack_8 != param_2) {
        RaiseInternalException
                  (-0x5001fffe,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x883);
      }
      iStack_8 = 0;
      Library::DKW::TBL::FUN_006ae140(DAT_007fa130,(int)param_1,&iStack_8);
      DAT_007fa134 = DAT_007fa134 + -1;
    }
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x888,0,errorCode,
                             &DAT_007a4ccc,s_STAllPlayersC__UnRegisterTorpedo_007a6790);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x889);
  return 0xffffffff;
}

