#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::InitData */

int __thiscall AiPlrClassTy::InitData(AiPlrClassTy *this,undefined4 *param_1)

{
  AiPlrClassTy *pAVar2;
  int iVar3;
  DArrayTy *local_EAX_159;
  AiPlrClassTy_field_06A1DArray *pAVar3;
  DArrayTy *pDVar4;
  DArrayTy *pDVar5;
  byte *puVar6;
  int iVar7;
  int iVar8;
  uint uVar10;
  uint uVar11;
  AiPlrClassTy_field_06A1DArray **ppAVar12;
  byte *puVar13;
  bool bVar14;
  InternalExceptionFrame local_50;
  AiPlrClassTy *local_c;
  DArrayTy **local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pAVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c == nullptr) {
      puVar13 = nullptr;
    }
    else {
      puVar13 = (byte *)(&local_c->field_05D3);
    }
    puVar6 = (byte *)(param_1);
    for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar6;
      puVar6 = (byte *)(puVar6 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar6;
    STField<undefined1>(puVar13,2) = STField<undefined1>(puVar6,2);
    local_c->field_05D3 = 0x398;
    local_c->field_05EB = 1;
    AiEventClassTy::InitData
              ((AiEventClassTy *)&local_c->vtable_at_1c,
               (int *)(local_c->field_06D1 + 0x12a + (int)param_1));
    ppAVar12 = (AiPlrClassTy_field_06A1DArray **)&pAVar2->field_0695;
    iVar8 = 5;
    local_8 = (DArrayTy **)ppAVar12;
    do {
      if ((DArrayTy *)*ppAVar12 != nullptr) {
        local_EAX_159 = FUN_006b0060(nullptr,(uint *)((int)ppAVar12[1] + 0x12a + (int)param_1));
        *ppAVar12 = (AiPlrClassTy_field_06A1DArray *)local_EAX_159;
      }
      ppAVar12 = ppAVar12 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (pAVar2->field_06A1 == nullptr) {
      pAVar3 = (AiPlrClassTy_field_06A1DArray *)
               Library::DKW::TBL::DArrayCreate(nullptr,10,0x12,5);
      pAVar2->field_06A1 = pAVar3;
    }
    if (pAVar2->field_06AD == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x1c,5);
      pAVar2->field_06AD = pDVar4;
    }
    uVar11 = 0;
    pDVar5 = *local_8;
    if (0 < (int)pDVar5->count) {
      bVar14 = pDVar5->count != 0;
      do {
        if (bVar14) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          puVar13 = (byte *)((int)pDVar5->data + pDVar5->elementSize * uVar11);
        }
        else {
          puVar13 = nullptr;
        }
        if (puVar13[1] == 0) {
          iVar8 = puVar13[2];
          puVar6 = (byte *)(Library::DKW::LIB::MemAllocClear(puVar13[3]));
          uVar10 = puVar13[3];
          *puVar13 = puVar6;
          puVar13 = (byte *)(iVar8 + 0x12a + (int)param_1);
          memmove(puVar6, puVar13, uVar10); /* compiler REP MOVS byte copy */
        }
        uVar11 = uVar11 + 1;
        pDVar5 = *local_8;
        bVar14 = uVar11 < pDVar5->count;
      } while ((int)uVar11 < (int)pDVar5->count);
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

