
void __thiscall TradePanelTy::DoneTradePanel(TradePanelTy *this)

{
  code *pcVar1;
  TradePanelTy *pTVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  TradePanelTy *pTStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pTStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pTVar2 = pTStack_8;
  if (iVar3 == 0) {
    if (*(uint *)(pTStack_8 + 0x1c0) != 0) {
      FUN_006e56b0(*(void **)(pTStack_8 + 0xc),*(uint *)(pTStack_8 + 0x1c0));
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
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0x67,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c8624,0x67);
  return;
}

