
void __thiscall OptPanelTy::PreInitOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
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
  pOVar2 = pOStack_8;
  if (errorCode == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(pOStack_8 + 0x4c));
    *(int *)(pOVar2 + 0x44) = *(int *)(pOVar2 + 0x50) - *(int *)(pOVar2 + 0x48);
    *(int *)(pOVar2 + 0x174) = *(int *)(pOVar2 + 0x48) + *(int *)(pOVar2 + 0x50);
    g_currentExceptionFrame = pIVar4;
    return;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x37,0,errorCode,
                             &DAT_007a4ccc,s_OptPanelTy__PreInitOptPanel_007c70c8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x37);
  return;
}

