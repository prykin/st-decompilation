
void __thiscall PausePanelTy::ShiftControls(PausePanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PausePanelTy *pPVar5;
  InternalExceptionFrame IStack_4c;
  PausePanelTy *pPStack_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pPVar5 = this + 0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pPVar5 = 0;
      pPVar5 = pPVar5 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2c) = sVar2;
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    pPStack_8 = this;
    iVar4 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (*(int *)(pPStack_8 + 0x184) != 0) {
        FUN_006e6080(pPStack_8,2,*(int *)(pPStack_8 + 0x184),(undefined4 *)(pPStack_8 + 0x18));
      }
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x68,0,iVar4,&DAT_007a4ccc,
                               s_PausePanelTy__ShiftControls_007c7530);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_pause_cpp_007c7490,0x68);
  }
  return;
}

