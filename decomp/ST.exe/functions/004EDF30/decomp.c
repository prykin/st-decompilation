
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
  
  if (param_1 != this->field_005C) {
    local_8 = this;
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)&this->field_0x2e = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (errorCode == 0) {
      if (local_8->field_01BE != 0) {
        FUN_006e6080(local_8,2,local_8->field_01BE,(undefined4 *)&local_8->field_0x18);
      }
      if (this_00->field_01C2 != 0) {
        FUN_006e6080(this_00,2,this_00->field_01C2,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01C6 != 0) {
        FUN_006e6080(this_00,2,this_00->field_01C6,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01CA != 0) {
        FUN_006e6080(this_00,2,this_00->field_01CA,(undefined4 *)&this_00->field_0x18);
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

