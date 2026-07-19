
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SwitchOptPanelOff */

void __thiscall OptPanelTy::SwitchOptPanelOff(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *this_00;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  OptPanelTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  this_00 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0172 == 1) || (local_8->field_0172 == 3)) {
      local_8->field_0x1aa = 0;
      local_8->field_0x1a9 = 0;
      local_8->field_0x1a4 = 1;
      SetOptControls(local_8);
      if (this_00->field_0172 == 1) {
        ShiftControls(this_00,0);
      }
      this_00->field_0172 = 4;
      thunk_FUN_005252c0(CASE_B0);
    }
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x139,0,errorCode,
                             &DAT_007a4ccc,s_OptPanelTy__SwitchOptPanelOff_007c7200);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x139);
  return;
}

