#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseAllTact */

int __thiscall AiPlrClassTy::CloseAllTact(AiPlrClassTy *this)

{
  uint index;
  DArrayTy *pDVar1;
  code *pcVar2;
  AiPlrClassTy *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  AiTactClassTy *this_00;
  AnonShape_0068FD00_A5257008 *pAVar7;
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
    iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x10e,0,iVar4,"%s",
                               "AiPlrClassTy::CloseAllTact");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_plr.cpp",0x10f);
    return iVar4;
  }
  if (local_8->field_0695 == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr.cpp",0xfd);
  }
  pAVar7 = local_3c;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar7 = 0;
    pAVar7 = (AnonShape_0068FD00_A5257008 *)&pAVar7->field_0x4;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_3c[0]._0_4_ = 0x71;
  index = pAVar3->field_0695->count;
  do {
    index = index - 1;
    if ((int)index < 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pDVar1 = pAVar3->field_0695;
    if (((pDVar1 == (DArrayTy *)0x0) || ((int)index < 0)) || ((int)pDVar1->count <= (int)index)) {
LAB_00679519:
      this_00 = (AiTactClassTy *)0x0;
    }
    else {
      if (index < pDVar1->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, index) (runtime stride) */
        puVar5 = (undefined4 *)(pDVar1->elementSize * index + (int)pDVar1->data);
      }
      else {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5[1] == 0) goto LAB_00679519;
      this_00 = (AiTactClassTy *)*puVar5;
    }
    if (this_00 != (AiTactClassTy *)0x0) {
      if (&stack0x00000000 != (undefined1 *)0x3c) {
        AiTactClassTy::GetAiMess(this_00,local_3c);
      }
      thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)&this_00->field_0x8);
      DArrayRemoveAt(pAVar3->field_0695,index);
    }
  } while( true );
}

