
void __thiscall
CPanelTy::PaintDamageXY
          (CPanelTy *this,int param_1,int param_2,int param_3,uint param_4,UINT param_5)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame IStack_4c;
  CPanelTy *pCStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pCStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (iVar3 == 0) {
    ccFntTy::SetSurf(*(ccFntTy **)(pCStack_8 + 0x1b8),param_1,0,param_2,param_3,0x30,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 5;
    iVar5 = -1;
    iVar3 = 0;
    puVar4 = (uint *)FUN_006b0140(param_5,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    wsprintfA((LPSTR)(pCVar2 + 0x1e1),&DAT_007c1aa4,param_4 & 0xff);
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1bc),param_1,0,param_2 + 0xc,param_3 + 10,0x14,0xf);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1bc),(uint *)(pCVar2 + 0x1e1),-3,-1,1,-1,-1);
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),param_1,0,param_2 + 0x22,param_3 + 0xd,10,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 5;
    iVar5 = -1;
    iVar3 = -1;
    puVar4 = (uint *)FUN_006b0140(0x36b2,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0xa3,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintDamageXY_007c1a88);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0xa3);
  return;
}

