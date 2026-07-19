
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ShiftControls */

void __thiscall HelpPanelTy::ShiftControls(HelpPanelTy *this,int param_1)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    puVar6 = (undefined4 *)&this->field_0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar4 == 0) {
      if (*(int *)&local_8->field_0x17c != 0) {
        FUN_006e6080(local_8,2,*(int *)&local_8->field_0x17c,(undefined4 *)&local_8->field_0x18);
      }
      piVar5 = (int *)&this_00->field_0x180;
      iVar4 = 7;
      do {
        if (*piVar5 != 0) {
          FUN_006e6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x18);
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (*(int *)&this_00->field_0x19c != 0) {
        FUN_006e6080(this_00,2,*(int *)&this_00->field_0x19c,(undefined4 *)&this_00->field_0x18);
        puVar6 = (undefined4 *)&this_00->field_0x18;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xf2,0,iVar4,&DAT_007a4ccc,
                               s_HelpPanelTy__ShiftControls_007c3958);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xf2);
  }
  return;
}

