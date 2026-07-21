#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::InitData */

int __thiscall AiPlrClassTy::InitData(AiPlrClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AiPlrClassTy *pAVar2;
  int iVar3;
  DArrayTy *pDVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  DArrayTy **ppDVar10;
  undefined4 *puVar11;
  bool bVar12;
  InternalExceptionFrame local_50;
  AiPlrClassTy *local_c;
  DArrayTy **local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pAVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c == (AiPlrClassTy *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = &local_c->field_05D3;
    }
    puVar5 = param_1;
    for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar11 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar5 + 2);
    local_c->field_05D3 = 0x398;
    local_c->field_05EB = 1;
    AiEventClassTy::InitData
              ((AiEventClassTy *)&local_c->field_001C,
               (int *)(local_c->field_06D1 + 0x12a + (int)param_1));
    ppDVar10 = &pAVar2->field_0695;
    iVar3 = 5;
    local_8 = ppDVar10;
    do {
      if (*ppDVar10 != (DArrayTy *)0x0) {
        pDVar4 = (DArrayTy *)
                 FUN_006b0060((uint *)0x0,(uint *)((int)ppDVar10[1] + 0x12a + (int)param_1));
        *ppDVar10 = pDVar4;
      }
      ppDVar10 = ppDVar10 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pAVar2->field_06A1 == (DArrayTy *)0x0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x12,5);
      pAVar2->field_06A1 = pDVar4;
    }
    if (pAVar2->field_06AD == (uint *)0x0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1c,5);
      pAVar2->field_06AD = &pDVar4->flags;
    }
    uVar9 = 0;
    pDVar4 = *local_8;
    if (0 < (int)pDVar4->count) {
      bVar12 = pDVar4->count != 0;
      do {
        if (bVar12) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar9) (runtime stride) */
          puVar11 = (undefined4 *)(pDVar4->elementSize * uVar9 + (int)pDVar4->data);
        }
        else {
          puVar11 = (undefined4 *)0x0;
        }
        if (puVar11[1] == 0) {
          iVar3 = puVar11[2];
          puVar5 = Library::DKW::LIB::FUN_006aac10(puVar11[3]);
          uVar8 = puVar11[3];
          *puVar11 = puVar5;
          puVar11 = (undefined4 *)(iVar3 + 0x12a + (int)param_1);
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar5 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar5 = puVar5 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar5 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
        }
        uVar9 = uVar9 + 1;
        pDVar4 = *local_8;
        bVar12 = uVar9 < pDVar4->count;
      } while ((int)uVar9 < (int)pDVar4->count);
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  thunk_FUN_00678ba0((int)local_c);
  iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x3c,0,iVar3,"%s",
                             "AiPlrClassTy::InitData");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_plr.cpp",0x3d);
  return iVar3;
}

