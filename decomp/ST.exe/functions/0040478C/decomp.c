
int __thiscall STTorpC::IsDangerous(STTorpC *this,int param_1,uint *param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 unaff_ESI;
  uint uVar3;
  void *unaff_EDI;
  InternalExceptionFrame IStack_5c;
  int iStack_18;
  int iStack_14;
  STTorpC *pSStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_c = *(int *)(*(int *)(this + 0x241) + 0xc);
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  pSStack_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar2 = iStack_c;
  if (errorCode == 0) {
    if (iStack_c == 0) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x466)
      ;
    }
    uVar3 = 0;
    iStack_8 = 0;
    *param_2 = 0xffffffff;
    if (0 < iVar2) {
      while (FUN_006acc70(*(int *)(pSStack_10 + 0x241),uVar3,&iStack_18), iStack_18 != param_1) {
        uVar3 = uVar3 + 1;
        if (iVar2 <= (int)uVar3) {
          g_currentExceptionFrame = IStack_5c.previous;
          return iStack_8;
        }
      }
      iStack_8 = (iStack_14 != 1) + 1;
      *param_2 = uVar3;
    }
    g_currentExceptionFrame = IStack_5c.previous;
    return iStack_8;
  }
  g_currentExceptionFrame = IStack_5c.previous;
  if (errorCode != -0x5001fff7) {
    iVar2 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x471,0,errorCode,
                               &DAT_007a4ccc,s_STTorpC__IsDangerous_007d25e4);
    if (iVar2 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x472);
      return -1;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  *param_2 = 0xffffffff;
  return 0;
}

