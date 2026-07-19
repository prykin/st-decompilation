
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::DoneTradePanel */

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
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar2 = local_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (local_8->field_01C0 != 0) {
      FUN_006e56b0((void *)local_8->field_000C,local_8->field_01C0);
      this_00 = extraout_ECX_00;
    }
    pTVar2->field_01C0 = 0;
    if (pTVar2->field_01C4 != 0) {
      FUN_006e56b0((void *)pTVar2->field_000C,pTVar2->field_01C4);
      this_00 = extraout_ECX_01;
    }
    pTVar2->field_01C4 = 0;
    if (pTVar2->field_01C8 != 0) {
      FUN_006e56b0((void *)pTVar2->field_000C,pTVar2->field_01C8);
      this_00 = extraout_ECX_02;
    }
    pTVar2->field_01C8 = 0;
    if (pTVar2->field_01CC != 0) {
      FUN_006e56b0((void *)pTVar2->field_000C,pTVar2->field_01CC);
      this_00 = extraout_ECX_03;
    }
    pTVar2->field_01CC = 0;
    if (pTVar2->field_01DD != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pTVar2->field_01DD);
      pTVar2->field_01DD = (ccFntTy *)0x0;
    }
    pTVar2->field_01D9 = 0;
    pTVar2->field_01D5 = 0;
    pTVar2->field_01D1 = 0;
    DAT_00802a44 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
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

