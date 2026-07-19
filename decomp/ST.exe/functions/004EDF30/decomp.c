
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::ShiftControls */

void __thiscall BehPanelTy::ShiftControls(BehPanelTy *this,int param_1)

{
  code *pcVar1;
  BehPanelTy *this_00;
  short sVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  BehPanelTy *local_8;
  
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
    this_00 = local_8;
    if (errorCode == 0) {
      if (*(int *)(local_8 + 0x1be) != 0) {
        FUN_006e6080(local_8,2,*(int *)(local_8 + 0x1be),(undefined4 *)(local_8 + 0x18));
      }
      if (*(int *)(this_00 + 0x1c2) != 0) {
        FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1c2),(undefined4 *)(this_00 + 0x18));
      }
      if (*(int *)(this_00 + 0x1c6) != 0) {
        FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1c6),(undefined4 *)(this_00 + 0x18));
      }
      if (*(int *)(this_00 + 0x1ca) != 0) {
        FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1ca),(undefined4 *)(this_00 + 0x18));
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0x87,0,errorCode,
                               &DAT_007a4ccc,s_BehPanelTy__ShiftControls_007c1738);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0x87);
  }
  return;
}

