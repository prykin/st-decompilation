#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBRLife */

void __thiscall CPanelTy::PaintBRLife(CPanelTy *this,int param_1)

{
  byte bVar1;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar3 = local_c;
  if (iVar4 == 0) {
    FUN_006b4170(local_c->field_018C,0,param_1 + 0x35,0x70,7,0x21,0);
    bVar1 = pCVar3->field_0BC8;
    cVar7 = (char)(((uint)bVar1 * 0x21) / 100);
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar7));
    if ((bVar1 != 0) && (cVar7 == '\0')) {
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
    }
    if (bVar1 < 0x46) {
      iVar4 = (-(uint)(bVar1 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = local_8 & 0xff;

    Library::DKW::WGR::FUN_006b55f0
              (pCVar3->field_018C,0,param_1 + 0x36,0x91 - uVar5,
               (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar3->field_028A,0,iVar4,
               *(int *)&((RecoveredRecordView_006B84D0_87AF9D9B *)pCVar3->field_028A)->field_0x8 -
               uVar5,5,uVar5);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x40,0,iVar4,"%s",
                             "CPanelTy::PaintBRLife");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x40);
  return;
}

