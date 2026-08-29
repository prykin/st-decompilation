#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseTactByTitle */

int __thiscall AiPlrClassTy::CloseTactByTitle(AiPlrClassTy *this,byte *param_1)

{
  DArrayTy *pDVar1;
  AiPlrClassTy *pAVar3;
  int iVar4;
  uint index;
  uint *puVar4;
  int iVar5;
  int iVar6;
  AiTactClassTy *this_00;
  RecoveredRecordView_0068FD00_630BE91E *pRVar7;
  InternalExceptionFrame local_80;
  RecoveredRecordView_0068FD00_630BE91E local_3c [3];
  AiPlrClassTy *local_8;

  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_8 = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0xf1,0,iVar4,"%s",
                               "AiPlrClassTy::CloseTactByTitle");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_plr.cpp",0xf2);
      return iVar4;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }

  index = thunk_FUN_00678e00(local_8,param_1);
  if ((int)index < 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  pDVar1 = pAVar3->field_0695;
  if ((pDVar1 != nullptr) && ((int)index < (int)pDVar1->count)) {
    if (index < pDVar1->count) {
      puVar4 = DArrayAt<undefined4>(pDVar1, index);
    }
    else {
      puVar4 = nullptr;
    }
    if (puVar4[1] != 0) {
      this_00 = (AiTactClassTy *)*puVar4;
      goto LAB_00679378;
    }
  }
  this_00 = nullptr;
LAB_00679378:
  if (this_00 != nullptr) {
    pRVar7 = local_3c;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pRVar7 = 0;
      pRVar7 = (RecoveredRecordView_0068FD00_630BE91E *)&pRVar7->field_0x4;
    }
    STPiece<0,4>(local_3c[0]) = 0x71;
    if (&stack0x00000000 != (undefined1 *)0x3c) {
      /* ST_CALLSITE[0067939C]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
      AiTactClassTy::GetAiMess(this_00,local_3c);
    }
    /* ST_CALLSITE[006793AB]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
    STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,*(uint *)&this_00->field_0x8);

    DArrayRemoveAt(local_8->field_0695,index);
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

