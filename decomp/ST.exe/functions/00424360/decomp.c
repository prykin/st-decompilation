#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::RestoreGrpData */

void __thiscall STGroupC::RestoreGrpData(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  AnonShape_00424360_8159BFF1 *pAVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  InternalExceptionFrame local_50;
  STGroupC *local_c;
  AnonShape_00424360_8159BFF1 *local_8;

  local_8 = (AnonShape_00424360_8159BFF1 *)param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pAVar3 = local_8;
  pSVar2 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x1d5,0,iVar4,"%s",
                               "STGroupC::RestoreGrpData");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\tc_grp.cpp",0x1d6);
    return;
  }
  local_c->field_0020 = local_8->field_0014;
  local_c->field_0024 = local_8->field_0004;
  local_c->field_0025 = local_8->field_0018;
  local_c->field_0027 = local_8->field_001A;
  local_c->field_0031 = local_8->field_002C;
  local_c->field_0035 = local_8->field_0030;
  local_c->field_0039 = local_8->field_0034;
  if (local_8->field_001C == -1) {
    local_c->field_0029 = (uint *)0x0;
  }
  else {
    puVar5 = FUN_006b00c0((uint *)0x0,(uint *)(&local_8->field_0x0 + local_8->field_001C),
                          thunk_FUN_00423e30);
    pSVar2->field_0029 = puVar5;
  }
  iVar4 = *(int *)&pAVar3->field_0x24;
  if (iVar4 != -1) {
    puVar5 = FUN_006b00c0((uint *)0x0,(uint *)(&pAVar3->field_0x0 + iVar4),thunk_FUN_00423e30);
    pSVar2->field_002D = puVar5;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  pSVar2->field_002D = (uint *)0x0;
  g_currentExceptionFrame = local_50.previous;
  return;
}

