#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::SetPanel */

undefined4 __thiscall ProdPanelTy::SetPanel(ProdPanelTy *this,char param_1)

{
  code *pcVar1;
  ProdPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  if (this->field_0194 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8->field_0194 = param_1;
    if (param_1 == '\0') {
      if ((g_cPanel_00801688 != (CPanelTy *)0x0) && (g_cPanel_00801688->field_023F == CASE_1)) {
        CPanelTy::ShiftControls(g_cPanel_00801688,local_8->field_0195,1);
      }
      iVar2 = 0;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(local_8->field_0000 + 0x1c))();
      iVar2 = 1;
    }
    SwitchPanel(this_00,iVar2);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x1eb,0,iVar2,&DAT_007a4ccc,
                             s_ProdPanelTy__SetPanel_007c7a60);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x1eb);
  return 1;
}

