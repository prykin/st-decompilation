
void __thiscall PlayPanelTy::SwitchOptPanel(PlayPanelTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  PlayPanelTy *pPVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  PlayPanelTy *pPStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pPStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar3 = pPStack_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = IStack_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0xcb,0,errorCode,
                               &DAT_007a4ccc,s_PlayPanelTy__SwitchOptPanel_007c7628);
    if (iVar4 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Andrey_playpan_cpp_007c7574,0xcb);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  sVar1 = *(short *)(pPStack_8 + 0x172);
  if (sVar1 == 1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    ShiftControls(pPStack_8,0);
  }
  else {
    if (sVar1 == 2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      }
      *(undefined2 *)(pPStack_8 + 0x172) = 3;
      thunk_FUN_005252c0(0xaf);
      if (DAT_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = IStack_4c.previous;
        return;
      }
      CPanelTy::ShiftControls(DAT_00801688,0);
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    *(undefined2 *)(pPVar3 + 0x172) = 4;
    thunk_FUN_005252c0(0xb0);
  }
  g_currentExceptionFrame = IStack_4c.previous;
  return;
}

