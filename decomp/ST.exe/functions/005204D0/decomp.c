
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::DoneInfocPanel */

void __thiscall InfocPanelTy::DoneInfocPanel(InfocPanelTy *this)

{
  code *pcVar1;
  InfocPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pIVar2 = local_8;
  if (errorCode == 0) {
    this_00 = extraout_ECX;
    if (local_8->field_03D0 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_03D0);
      this_00 = extraout_ECX_00;
    }
    pIVar2->field_03D0 = 0;
    if (pIVar2->field_03D5 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pIVar2->field_03D5);
      pIVar2->field_03D5 = (ccFntTy *)0x0;
    }
    pIVar2->field_03CC = 0;
    pIVar2->field_03C8 = 0;
    pIVar2->field_03C4 = 0;
    DAT_00801698 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x4f,0,errorCode,
                             &DAT_007a4ccc,s_InfocPanelTy__DoneInfocPanel_007c3f2c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x4f);
  return;
}

