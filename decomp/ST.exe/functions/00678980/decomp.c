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
  AiPlrClassTy_field_06A1DArray *pAVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  AiPlrClassTy_field_06A1DArray **ppAVar11;
  undefined4 *puVar12;
  bool bVar13;
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
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = &local_c->field_05D3;
    }
    puVar6 = param_1;
    for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = *(undefined2 *)puVar6;
    *(undefined1 *)((int)puVar12 + 2) = *(undefined1 *)((int)puVar6 + 2);
    local_c->field_05D3 = 0x398;
    local_c->field_05EB = 1;
    AiEventClassTy::InitData
              ((AiEventClassTy *)&local_c->vtable_at_1c,
               (int *)(local_c->field_06D1 + 0x12a + (int)param_1));
    ppAVar11 = (AiPlrClassTy_field_06A1DArray **)&pAVar2->field_0695;
    iVar3 = 5;
    local_8 = (DArrayTy **)ppAVar11;
    do {
      if ((DArrayTy *)*ppAVar11 != (DArrayTy *)0x0) {
        pDVar4 = (DArrayTy *)
                 FUN_006b0060((uint *)0x0,(uint *)((int)ppAVar11[1] + 0x12a + (int)param_1));
        *ppAVar11 = (AiPlrClassTy_field_06A1DArray *)pDVar4;
      }
      ppAVar11 = ppAVar11 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pAVar2->field_06A1 == (AiPlrClassTy_field_06A1DArray *)0x0) {
      pAVar5 = (AiPlrClassTy_field_06A1DArray *)
               Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x12,5);
      pAVar2->field_06A1 = pAVar5;
    }
    if (pAVar2->field_06AD == (DArrayTy *)0x0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1c,5);
      pAVar2->field_06AD = pDVar4;
    }
    uVar10 = 0;
    pDVar4 = *local_8;
    if (0 < (int)pDVar4->count) {
      bVar13 = pDVar4->count != 0;
      do {
        if (bVar13) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          puVar12 = (undefined4 *)((int)pDVar4->data + pDVar4->elementSize * uVar10);
        }
        else {
          puVar12 = (undefined4 *)0x0;
        }
        if (puVar12[1] == 0) {
          iVar3 = puVar12[2];
          puVar6 = Library::DKW::LIB::FUN_006aac10(puVar12[3]);
          uVar9 = puVar12[3];
          *puVar12 = puVar6;
          puVar12 = (undefined4 *)(iVar3 + 0x12a + (int)param_1);
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar6 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
        }
        uVar10 = uVar10 + 1;
        pDVar4 = *local_8;
        bVar13 = uVar10 < pDVar4->count;
      } while ((int)uVar10 < (int)pDVar4->count);
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  thunk_FUN_00678ba0(local_c);
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x3c,0,iVar3,"%s",
                             "AiPlrClassTy::InitData");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_plr.cpp",0x3d);
  return iVar3;
}

