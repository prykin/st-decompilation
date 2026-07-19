
void __thiscall PausePanelTy::SwitchPausePanel(PausePanelTy *this,int param_1)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  PausePanelTy *pPStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pPStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x54,0,iVar3,&DAT_007a4ccc,
                               s_PausePanelTy__SwitchPausePanel_007c7508);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_pause_cpp_007c7490,0x54);
    return;
  }
  switch(*(undefined2 *)(pPStack_8 + 0x172)) {
  case 1:
    if (param_1 != 0) {
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    ShiftControls(pPStack_8,0);
switchD_005395f3_caseD_3:
    if (param_1 == 0) {
      *(undefined2 *)(pPVar2 + 0x172) = 4;
      iVar3 = 0xb0;
LAB_0053962f:
      thunk_FUN_005252c0(iVar3);
    }
switchD_005395f3_default:
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  case 2:
  case 4:
    if (param_1 == 0) {
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    *(undefined2 *)(pPStack_8 + 0x172) = 3;
    iVar3 = 0xaf;
    goto LAB_0053962f;
  case 3:
    goto switchD_005395f3_caseD_3;
  default:
    goto switchD_005395f3_default;
  }
}

