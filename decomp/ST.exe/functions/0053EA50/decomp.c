
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::ShiftControls */

void __thiscall SpecPanelTy::ShiftControls(SpecPanelTy *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;
  
  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    puVar5 = (undefined4 *)&this->field_0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (*(int *)&local_8->field_0x17c != 0) {
        FUN_006e6080(local_8,2,*(int *)&local_8->field_0x17c,(undefined4 *)&local_8->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x134,0,iVar4,&DAT_007a4ccc
                               ,s_SpecPanelTy__ShiftControls_007c79a0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x134);
  }
  return;
}

