
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::ShiftControls */

void __thiscall FrmPanelTy::ShiftControls(FrmPanelTy *this,int param_1)

{
  code *pcVar1;
  FrmPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;
  
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
      iVar3 = 8;
      piVar5 = &local_8->field_01B3;
      do {
        if (*piVar5 != 0) {
          FUN_006e6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x18);
        }
        piVar5 = piVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar5 = &this_00->field_01D3;
      iVar3 = 4;
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
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x5e,0,iVar3,&DAT_007a4ccc
                               ,s_FrmPanelTy__ShiftControls_007c2a8c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0x5e);
  }
  return;
}

