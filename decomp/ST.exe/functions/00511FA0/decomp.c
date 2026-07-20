
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SetPanel */

undefined4 __thiscall HelpPanelTy::SetPanel(HelpPanelTy *this,char param_1)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  HelpPanelTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  if (this->field_01A0 == param_1) {
    return 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  this_00 = local_8;
  if (errorCode == 0) {
    local_8->field_01A0 = param_1;
    if (param_1 != '\0') {
      if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
      }
      if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
      }
      if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
      }
      if (DAT_00801698 != (int *)0x0) {
        (**(code **)(*DAT_00801698 + 0x1c))(0);
      }
      if (DAT_00802a44 != (void *)0x0) {
        thunk_FUN_00552160(DAT_00802a44,'\0','\0');
      }
      if (DAT_00801678 != (int *)0x0) {
        (**(code **)(*DAT_00801678 + 0x1c))(0);
      }
      if (DAT_008016ec != (int *)0x0) {
        (**(code **)(*DAT_008016ec + 0x1c))(0);
      }
      if (DAT_00802a48 != (int *)0x0) {
        (**(code **)(*DAT_00802a48 + 0x1c))(0);
      }
      if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
      }
      if (DAT_0080168c != (int *)0x0) {
        (**(code **)(*DAT_0080168c + 0x1c))(0);
      }
      if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
        PlayPanelTy::SetPanel(g_playPanel_008016E4,'\0');
      }
      if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
        OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
      }
      SwitchOptPanel(this_00,1);
      g_currentExceptionFrame = pIVar4;
      return 1;
    }
    if ((g_cPanel_00801688 != (CPanelTy *)0x0) && (g_cPanel_00801688->field_023F == CASE_1)) {
      CPanelTy::ShiftControls(g_cPanel_00801688,1);
    }
    SwitchOptPanel(this_00,0);
    g_currentExceptionFrame = pIVar4;
    return 1;
  }
  g_currentExceptionFrame = pIVar4;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x12e,0,errorCode,
                             &DAT_007a4ccc,s_HelpPanelTy__SetPanel_007c399c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x12e);
  return 1;
}

