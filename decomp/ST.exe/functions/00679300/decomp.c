#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseTactByTitle */

int __thiscall AiPlrClassTy::CloseTactByTitle(AiPlrClassTy *this,byte *param_1)

{
  DArrayTy *pDVar1;
  code *pcVar2;
  AiPlrClassTy *pAVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  AiTactClassTy *this_00;
  AnonShape_0068FD00_A5257008 *pAVar8;
  InternalExceptionFrame local_80;
  AnonShape_0068FD00_A5257008 local_3c [3];
  AiPlrClassTy *local_8;

  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0xf1,0,iVar4,&DAT_007a4ccc,
                               s_AiPlrClassTy__CloseTactByTitle_007d2eac);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0xf2);
      return iVar4;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar5 = thunk_FUN_00678e00(local_8,param_1);
  if ((int)uVar5 < 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  pDVar1 = pAVar3->field_0695;
  if ((pDVar1 != (DArrayTy *)0x0) && ((int)uVar5 < (int)pDVar1->count)) {
    if (uVar5 < pDVar1->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar5) (runtime stride) */
      puVar6 = (undefined4 *)(pDVar1->elementSize * uVar5 + (int)pDVar1->data);
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6[1] != 0) {
      this_00 = (AiTactClassTy *)*puVar6;
      goto LAB_00679378;
    }
  }
  this_00 = (AiTactClassTy *)0x0;
LAB_00679378:
  if (this_00 != (AiTactClassTy *)0x0) {
    pAVar8 = local_3c;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pAVar8 = 0;
      pAVar8 = (AnonShape_0068FD00_A5257008 *)&pAVar8->field_0x4;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_3c[0]._0_4_ = 0x71;
    if (&stack0x00000000 != (undefined1 *)0x3c) {
      AiTactClassTy::GetAiMess(this_00,local_3c);
    }
    thunk_FUN_0054cf70(PTR_00802a38,*(uint *)&this_00->field_0x8);
    FUN_006b0c70(local_8->field_0695,uVar5);
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

