#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseAllTact */

int __thiscall AiPlrClassTy::CloseAllTact(AiPlrClassTy *this)

{
  uint uVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  AiPlrClassTy *pAVar4;
  int iVar5;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  pAVar4 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x10e,0,iVar5,&DAT_007a4ccc,
                               s_AiPlrClassTy__CloseAllTact_007d2ed4);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x10f);
    return iVar5;
  }
  if (local_8->field_0695 == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_cpp_007d2e4c,0xfd);
  }
  pAVar8 = local_3c;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pAVar8 = 0;
    pAVar8 = (AnonShape_0068FD00_A5257008 *)&pAVar8->field_0x4;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_3c[0]._0_4_ = 0x71;
  uVar1 = pAVar4->field_0695->count;
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pDVar2 = pAVar4->field_0695;
    if (((pDVar2 == (DArrayTy *)0x0) || ((int)uVar1 < 0)) || ((int)pDVar2->count <= (int)uVar1)) {
LAB_00679519:
      this_00 = (AiTactClassTy *)0x0;
    }
    else {
      if (uVar1 < pDVar2->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar1) (runtime stride) */
        puVar6 = (undefined4 *)(pDVar2->elementSize * uVar1 + (int)pDVar2->data);
      }
      else {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6[1] == 0) goto LAB_00679519;
      this_00 = (AiTactClassTy *)*puVar6;
    }
    if (this_00 != (AiTactClassTy *)0x0) {
      if (&stack0x00000000 != (undefined1 *)0x3c) {
        AiTactClassTy::GetAiMess(this_00,local_3c);
      }
      thunk_FUN_0054cf70(PTR_00802a38,*(uint *)&this_00->field_0x8);
      FUN_006b0c70(pAVar4->field_0695,uVar1);
    }
  } while( true );
}

