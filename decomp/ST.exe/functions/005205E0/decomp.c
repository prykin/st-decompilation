
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::ShiftControls */

void __thiscall InfocPanelTy::ShiftControls(InfocPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;
  
  if (param_1 != *(int *)(this + 0x5c)) {
    local_8 = this;
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar2 = (short)*(undefined4 *)(this + 0x174);
    *(undefined4 *)(this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)(this + 0x2e) = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      if (*(int *)(local_8 + 0x3d0) != 0) {
        FUN_006e6080(local_8,2,*(int *)(local_8 + 0x3d0),(undefined4 *)(local_8 + 0x18));
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x5c,0,errorCode,
                               &DAT_007a4ccc,s_InfocPanelTy__ShiftControls_007c3f50);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x5c);
  }
  return;
}

