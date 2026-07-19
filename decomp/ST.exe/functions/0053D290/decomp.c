
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::ShiftControls */

void __thiscall SAMPanelTy::ShiftControls(SAMPanelTy *this,int param_1)

{
  code *pcVar1;
  SAMPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;
  
  if (param_1 != this->field_005C) {
    local_8 = this;
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar3 == 0) {
      iVar3 = 7;
      piVar5 = &local_8->field_01B5;
      do {
        if (*piVar5 != 0) {
          FUN_006e6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x18);
        }
        piVar5 = piVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_setamine_cpp_007c7798,0x46,0,iVar3,&DAT_007a4ccc
                               ,s_SAMPanelTy__ShiftControls_007c781c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_setamine_cpp_007c7798,0x46);
  }
  return;
}

