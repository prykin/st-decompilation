
void __thiscall TradePanelTy::DoneTradePanel(TradePanelTy *this)

{
  code *pcVar1;
  TradePanelTy *pTVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  TradePanelTy *pTStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pTStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar2 = pTStack_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (*(uint *)(pTStack_8 + 0x1c0) != 0) {
      FUN_006e56b0(*(void **)(pTStack_8 + 0xc),*(uint *)(pTStack_8 + 0x1c0));
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)(pTVar2 + 0x1c0) = 0;
    if (*(uint *)(pTVar2 + 0x1c4) != 0) {
      FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1c4));
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)(pTVar2 + 0x1c4) = 0;
    if (*(uint *)(pTVar2 + 0x1c8) != 0) {
      FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1c8));
      this_00 = extraout_ECX_02;
    }
    *(undefined4 *)(pTVar2 + 0x1c8) = 0;
    if (*(uint *)(pTVar2 + 0x1cc) != 0) {
      FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1cc));
      this_00 = extraout_ECX_03;
    }
    *(undefined4 *)(pTVar2 + 0x1cc) = 0;
    if (*(uint **)(pTVar2 + 0x1dd) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pTVar2 + 0x1dd));
      *(undefined4 *)(pTVar2 + 0x1dd) = 0;
    }
    *(undefined4 *)(pTVar2 + 0x1d9) = 0;
    *(undefined4 *)(pTVar2 + 0x1d5) = 0;
    *(undefined4 *)(pTVar2 + 0x1d1) = 0;
    DAT_00802a44 = 0;
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_tradecen_cpp_007c8624,0x67,0,errorCode,
                             &DAT_007a4ccc,s_TradePanelTy__DoneTradePanel_007c8694);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tradecen_cpp_007c8624,0x67);
  return;
}

