
void __thiscall IntercomPanelTy::DoneIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  IntercomPanelTy *pIStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pIStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pIVar2 = pIStack_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (*(byte **)(pIStack_8 + 0x198) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pIStack_8 + 0x198));
      *(undefined4 *)(pIVar2 + 0x198) = 0;
      this_00 = extraout_ECX_00;
    }
    if (*(uint *)(pIVar2 + 0x1a0) != 0) {
      FUN_006e56b0(*(void **)(pIVar2 + 0xc),*(uint *)(pIVar2 + 0x1a0));
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)(pIVar2 + 0x1a0) = 0;
    DAT_0080169c = 0;
    if (*(uint **)(pIVar2 + 0x180) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pIVar2 + 0x180));
      *(undefined4 *)(pIVar2 + 0x180) = 0;
    }
    if (*(int *)(pIVar2 + 0x184) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pIVar2 + 0x184));
    }
    if (*(int *)(pIVar2 + 0x19c) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pIVar2 + 0x19c));
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x4a,0,errorCode,
                             &DAT_007a4ccc,s_IntercomPanelTy__DoneIntercomPan_007c40b0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x4a);
  return;
}

