
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
    if (*(uint *)&local_8[1].field_0x4 != 0) {
      FUN_006e56b0(*(void **)&local_8->field_0xc,*(uint *)&local_8[1].field_0x4);
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)&pTVar2[1].field_0x4 = 0;
    if (*(uint *)&pTVar2[1].field_0x8 != 0) {
      FUN_006e56b0(*(void **)&pTVar2->field_0xc,*(uint *)&pTVar2[1].field_0x8);
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)&pTVar2[1].field_0x8 = 0;
    if (*(uint *)&pTVar2[1].field_0xc != 0) {
      FUN_006e56b0(*(void **)&pTVar2->field_0xc,*(uint *)&pTVar2[1].field_0xc);
      this_00 = extraout_ECX_02;
    }
    *(undefined4 *)&pTVar2[1].field_0xc = 0;
    if (*(uint *)&pTVar2[1].field_0x10 != 0) {
      FUN_006e56b0(*(void **)&pTVar2->field_0xc,*(uint *)&pTVar2[1].field_0x10);
      this_00 = extraout_ECX_03;
    }
    *(undefined4 *)&pTVar2[1].field_0x10 = 0;
    if (*(uint **)&pTVar2[1].field_0x21 != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pTVar2[1].field_0x21);
      *(undefined4 *)&pTVar2[1].field_0x21 = 0;
    }
    *(undefined4 *)&pTVar2[1].field_0x1d = 0;
    *(undefined4 *)&pTVar2[1].field_0x19 = 0;
    *(undefined4 *)&pTVar2[1].field_0x15 = 0;
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

