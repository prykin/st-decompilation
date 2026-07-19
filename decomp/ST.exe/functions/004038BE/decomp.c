
void __thiscall PlayPanelTy::ShiftControls(PlayPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PlayPanelTy *pPVar5;
  PlayPanelTy *pPVar6;
  InternalExceptionFrame IStack_54;
  PlayPanelTy *pPStack_10;
  int iStack_c;
  PlayPanelTy *pPStack_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    *(int *)(this + 0x5c) = param_1;
    pPVar5 = this + 0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pPVar5 = 0;
      pPVar5 = pPVar5 + 4;
    }
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    IStack_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_54;
    pPStack_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pPVar5 = pPStack_10;
    if (iVar4 == 0) {
      if (*(int *)(pPStack_10 + 0x17c) != 0) {
        FUN_006e6080(pPStack_10,2,*(int *)(pPStack_10 + 0x17c),(undefined4 *)(pPStack_10 + 0x18));
      }
      pPVar6 = pPVar5 + 0x181;
      iStack_c = 8;
      do {
        iVar4 = 2;
        pPStack_8 = pPVar6;
        do {
          if (*(int *)pPVar6 != 0) {
            FUN_006e6080(pPVar5,2,*(int *)pPVar6,(undefined4 *)(pPVar5 + 0x18));
          }
          pPVar6 = pPVar6 + 0x20;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pPVar6 = pPStack_8 + 4;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
      pPStack_8 = pPVar6;
      if (*(int *)(pPVar5 + 0x1c5) != 0) {
        FUN_006e6080(pPVar5,2,*(int *)(pPVar5 + 0x1c5),(undefined4 *)(pPVar5 + 0x18));
      }
      if (*(int *)(pPVar5 + 0x1c1) != 0) {
        FUN_006e6080(pPVar5,2,*(int *)(pPVar5 + 0x1c1),(undefined4 *)(pPVar5 + 0x18));
      }
      g_currentExceptionFrame = IStack_54.previous;
      return;
    }
    g_currentExceptionFrame = IStack_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0xfe,0,iVar4,&DAT_007a4ccc,
                               s_PlayPanelTy__ShiftControls_007c7668);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_playpan_cpp_007c7574,0xfe);
  }
  return;
}

