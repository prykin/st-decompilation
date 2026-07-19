
void __thiscall OptPanelTy::Notification(OptPanelTy *this,char param_1,OptPanelTy param_2)

{
  short sVar1;
  code *pcVar2;
  OptPanelTy *this_00;
  int errorCode;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_48 [16];
  OptPanelTy *pOStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pOStack_8 = this;
  errorCode = __setjmp3(auStack_48,0,unaff_ESI,pIVar4);
  this_00 = pOStack_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar4;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x4a6,0,errorCode,
                               &DAT_007a4ccc,s_OptPanelTy__Notification_007c7314);
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x4a6);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1 == '\n') {
    *(undefined4 *)(pOStack_8 + 0x1a5) = 0x4271;
    pOStack_8[0x1ac] = param_2;
  }
  else if (param_1 == '\v') {
    *(undefined4 *)(pOStack_8 + 0x1a5) = 0x4270;
  }
  else {
    if (param_1 != '\f') {
      g_currentExceptionFrame = pIVar4;
      return;
    }
    *(undefined4 *)(pOStack_8 + 0x1a5) = 0x4276;
  }
  pOStack_8[0x1ab] = (OptPanelTy)param_1;
  *(undefined4 *)(pOStack_8 + 0x1a0) = 0;
  pOStack_8[0x1a9] = (OptPanelTy)0x0;
  pOStack_8[0x1a4] = (OptPanelTy)0xb;
  SetOptControls(pOStack_8);
  sVar1 = *(short *)(this_00 + 0x172);
  if ((sVar1 == 2) || (sVar1 == 4)) {
    SwitchOptPanel(this_00,-1);
  }
  g_currentExceptionFrame = pIVar4;
  return;
}

