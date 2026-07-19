
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::UpdateObjectives */

void __thiscall OptPanelTy::UpdateObjectives(OptPanelTy *this)

{
  code *pcVar1;
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
  if (errorCode == 0) {
    PrepMissObj(local_8);
    if (DAT_00801690 != (void *)0x0) {
      thunk_FUN_00515180(DAT_00801690,'\a');
    }
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x800,0,errorCode,
                             &DAT_007a4ccc,s_OptPanelTy__UpdateObjectives_007c736c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x800);
  return;
}

