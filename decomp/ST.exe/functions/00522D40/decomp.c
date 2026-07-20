
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::SwitchIntercomPanel */

void __thiscall IntercomPanelTy::SwitchIntercomPanel(IntercomPanelTy *this,undefined1 param_1)

{
  short sVar1;
  code *pcVar2;
  IntercomPanelTy *pIVar3;
  int errorCode;
  int iVar4;
  void *unaff_ESI;
  Global_sub_005252C0_param_1Enum GVar5;
  InternalExceptionFrame *pIVar6;
  undefined4 local_48 [16];
  IntercomPanelTy *local_8;
  
  pIVar6 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar6);
  pIVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar6;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_intercom_cpp_007c401c,0x13b,0,errorCode,
                               &DAT_007a4ccc,s_IntercomPanelTy__SwitchIntercomP_007c4174);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_intercom_cpp_007c401c,0x13b);
    return;
  }
  sVar1 = local_8->field_0172;
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      local_8->field_0172 = 3;
      *(undefined1 *)(local_8 + 1) = param_1;
      GVar5 = CASE_AF;
      goto LAB_00522dd6;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = pIVar6;
      return;
    }
  }
  local_8->field_0172 = 4;
  if (local_8->field_01A0 != 0) {
    StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_01A0);
  }
  pIVar3->field_01A0 = 0;
  GVar5 = CASE_B0;
LAB_00522dd6:
  thunk_FUN_005252c0(GVar5);
  g_currentExceptionFrame = pIVar6;
  return;
}

