
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::GetMessage */

undefined4 __thiscall UpgPanelTy::GetMessage(UpgPanelTy *this,int param_1)

{
  code *pcVar1;
  UpgPanelTy *this_00;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  UpgPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x68,0,errorCode,
                               &DAT_007a4ccc,s_UpgPanelTy__GetMessage_007c8868);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_upginfo_cpp_007c87b8,0x68);
    return 0xffff;
  }
  SpecPanelTy::GetMessage((SpecPanelTy *)local_8,param_1);
  if (*(int *)(param_1 + 0x10) == 2) {
    InitUpgPanel(this_00);
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    DoneUpgPanel(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

