
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::DoneTradePanel */

void __thiscall TradePanelTy::DoneTradePanel(TradePanelTy *this)

{
  code *pcVar1;
  TradePanelTy *pTVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar2 = local_8;
  if (errorCode == 0) {
    if (*(uint *)(local_8 + 0x1c0) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x1c0));
    }
    *(undefined4 *)(pTVar2 + 0x1c0) = 0;
    if (*(uint *)(pTVar2 + 0x1c4) != 0) {
      FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1c4));
    }
    *(undefined4 *)(pTVar2 + 0x1c4) = 0;
    if (*(uint *)(pTVar2 + 0x1c8) != 0) {
      FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1c8));
    }
    *(undefined4 *)(pTVar2 + 0x1c8) = 0;
    if (*(uint *)(pTVar2 + 0x1cc) != 0) {
      FUN_006e56b0(*(void **)(pTVar2 + 0xc),*(uint *)(pTVar2 + 0x1cc));
    }
    *(undefined4 *)(pTVar2 + 0x1cc) = 0;
    if (*(uint **)(pTVar2 + 0x1dd) != (uint *)0x0) {
      FUN_00710560(*(uint **)(pTVar2 + 0x1dd));
      *(undefined4 *)(pTVar2 + 0x1dd) = 0;
    }
    *(undefined4 *)(pTVar2 + 0x1d9) = 0;
    *(undefined4 *)(pTVar2 + 0x1d5) = 0;
    *(undefined4 *)(pTVar2 + 0x1d1) = 0;
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

