#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Maps\gen_map.cpp
   CGenerate::CteateField */

undefined4 __thiscall
CGenerate::CteateField
          (CGenerate *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6)

{
  code *pcVar1;
  CGenerate *pCVar2;
  int iVar3;
  DArrayTy *pDVar4;
  undefined4 uVar5;
  int iVar6;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  CGenerate *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = param_1 * param_2;
    local_8->field_582F = iVar3;
    local_8->field_5833 = param_1;
    local_8->field_583F = 0;
    local_8->field_5843 = param_4;
    local_8->field_5837 = iVar3 / param_1;
    local_8->field_583B = param_5;
    local_8->field_5847 = param_3;
    iVar3 = Library::DKW::LIB::FUN_006aac70(iVar3);
    pCVar2->field_584B = iVar3;
    iVar3 = Library::DKW::LIB::FUN_006aac70
                      (pCVar2->field_582F * ((-(uint)(param_6 != 0) & 7) + 1) * 2);
    pCVar2->field_584F = iVar3;
    pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1d,10);
    pCVar2->field_5853 = &pDVar4->flags;
    g_currentExceptionFrame = local_50.previous;
    if (((pCVar2->field_584B == 0) || (pCVar2->field_584F == 0)) ||
       (uVar5 = 1, pCVar2->field_5853 == (uint *)0x0)) {
      return local_c;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Maps\\gen_map.cpp",0x330,0,iVar3,"%s",
                               "CGenerate::CteateField");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Maps\\gen_map.cpp",0x332);
    uVar5 = 0xffff;
  }
  return uVar5;
}

