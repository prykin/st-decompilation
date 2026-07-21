#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PutToSHlp */

void __thiscall HelpPanelTy::PutToSHlp(HelpPanelTy *this,int param_1)

{
  dword dVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_58;
  HelpPanelTy_field_01A1State local_14;
  undefined4 local_13;
  undefined4 local_f;
  HelpPanelTy *local_8;

  local_14 = this->field_01A1;
  local_13 = this->field_01A3;
  local_f = this->field_01A7;
  if (this->field_01CB != (DArrayTy *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    pHVar3 = local_8;
    if (iVar4 == 0) {
      iVar4 = local_8->field_01CF;
      while (-1 < iVar4) {
        dVar1 = pHVar3->field_01CB->count;
        if ((int)(dVar1 - 1) <= iVar4) break;
        FUN_006b0c70(pHVar3->field_01CB,dVar1 - 1);
        iVar4 = pHVar3->field_01CF;
      }
      uVar6 = pHVar3->field_01CF + 1;
      pHVar3->field_01CF = uVar6;
      Library::DKW::TBL::FUN_006ae140(&pHVar3->field_01CB->flags,uVar6,(undefined4 *)&local_14);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x27c,0,iVar4,&DAT_007a4ccc
                               ,s_HelpPanelTy__PutToSHlp_007c3a48);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x27c);
  }
  return;
}

