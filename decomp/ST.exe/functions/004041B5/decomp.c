
void __thiscall PopUpTy::OutStr(PopUpTy *this,uint param_1)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  uint *puVar6;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  PopUpTy *pPStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pPStack_8 = this;
  iVar3 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_8;
  if (iVar3 == 0) {
    uVar5 = param_1 & 0xff;
    ccFntTy::SetSurf(*(ccFntTy **)(pPStack_8 + 0x94),*(int *)(pPStack_8 + 0x90),0,0,uVar5 * 0x13,
                     *(int *)(*(int *)(pPStack_8 + 0x90) + 4),0x13);
    iVar3 = *(int *)(pPVar2 + 0x98);
    if ((int)uVar5 < *(int *)(iVar3 + 8)) {
      puVar6 = *(uint **)(*(int *)(iVar3 + 0x14) + uVar5 * 4);
    }
    else {
      puVar6 = (uint *)0x0;
    }
    ccFntTy::WrStr(*(ccFntTy **)(pPVar2 + 0x94),puVar6,0,0,0);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x2d,0,iVar3,&DAT_007a4ccc,
                             s_PopUpTy__OutStr_007c6fbc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x2d);
  return;
}

