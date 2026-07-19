
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::SwitchPausePanel */

void __thiscall PausePanelTy::SwitchPausePanel(PausePanelTy *this,int param_1)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  Global_sub_005252C0_param_1Enum GVar4;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x54,0,errorCode,
                               &DAT_007a4ccc,s_PausePanelTy__SwitchPausePanel_007c7508);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_pause_cpp_007c7490,0x54);
    return;
  }
  switch(local_8->field_0172) {
  case 1:
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    ShiftControls(local_8,0);
switchD_005395f3_caseD_3:
    if (param_1 == 0) {
      pPVar2->field_0172 = 4;
      GVar4 = CASE_B0;
LAB_0053962f:
      thunk_FUN_005252c0(GVar4);
    }
switchD_005395f3_default:
    g_currentExceptionFrame = local_4c.previous;
    return;
  case 2:
  case 4:
    if (param_1 == 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    local_8->field_0172 = 3;
    GVar4 = CASE_AF;
    goto LAB_0053962f;
  case 3:
    goto switchD_005395f3_caseD_3;
  default:
    goto switchD_005395f3_default;
  }
}

