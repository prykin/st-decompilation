
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateCtrls */

void __thiscall FSGSTy::CreateCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  FSGSTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  pFVar2 = local_8;
  if (errorCode == 0) {
    switch(local_8[0x1a5f]) {
    case (FSGSTy)0x2:
      LoginCtrls(local_8);
      pFVar2[0x1a62] = (FSGSTy)0x1;
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x3:
      LicCtrls(local_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x4:
      NewIDCtrls(local_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x5:
      PswCtrls(local_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x6:
      ChatCtrls(local_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x7:
      NewGameCtrls(local_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x8:
      JoinGameCtrls(local_8);
      g_currentExceptionFrame = pIVar4;
      return;
    case (FSGSTy)0x9:
      LadderCtrls(local_8);
      break;
    case (FSGSTy)0xa:
      InfoCtrls(local_8,unaff_ESI);
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

