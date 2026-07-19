
void __thiscall FSGSTy::CreateCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  FSGSTy *pFStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pFStack_8 = this;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  pFVar2 = pFStack_8;
  if (errorCode == 0) {
    switch(pFStack_8[0x1a5f]) {
    case (FSGSTy)0x2:
      LoginCtrls(pFStack_8);
      pFVar2[0x1a62] = (FSGSTy)0x1;
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x3:
      LicCtrls(pFStack_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x4:
      NewIDCtrls(pFStack_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x5:
      PswCtrls(pFStack_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x6:
      ChatCtrls(pFStack_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x7:
      NewGameCtrls(pFStack_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x8:
      JoinGameCtrls(pFStack_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x9:
      LadderCtrls(pFStack_8);
      break;
    case (FSGSTy)0xa:
      InfoCtrls(pFStack_8,unaff_ESI);
      g_currentExceptionFrame = pIVar4;
      return;
    }
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x582,0,errorCode,
                             &DAT_007a4ccc,s_FSGSTy__CreateCtrls_007cc2cc);
  if (iVar3 == 0) {
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x582);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

