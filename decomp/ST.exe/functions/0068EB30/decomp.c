#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::PrepareToSave */

int __thiscall
AiTactClassTy::PrepareToSave(AiTactClassTy *this,AnonShape_0068EB30_4F4B480A *param_1,short param_2)

{
  short sVar1;
  code *pcVar2;
  AiTactClassTy *pAVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  AiTactClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar4 == 0) {
    *(undefined4 *)&param_1->field_0x2c = 0;
    if (*(short *)&param_1->field_0xc == -1) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = thunk_FUN_0068e220(local_8,*(short *)&param_1->field_0xc);
    }
    *(uint *)&param_1->field_0x30 = uVar5;
    sVar1 = pAVar3->field_007C;
    *(undefined4 *)&param_1->field_0x34 = 0xffffffff;
    param_1->field_0006 = param_1->field_0006 + (param_2 + (sVar1 + 1) * 0x14) * 0x32;
    param_1->field_003A = pAVar3->field_012C;
    Library::DKW::TBL::FUN_006ae1c0(&pAVar3->field_00BD->flags,(undefined4 *)param_1);
    thunk_FUN_00676c40(pAVar3->field_00BD,&LAB_0040242d);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x1a2,0,iVar4,"%s",
                             "AiTactClassTy::PrepareToSave");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_tact.cpp",0x1a3);
  return iVar4;
}

