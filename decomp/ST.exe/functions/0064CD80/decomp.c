#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::InitData */

int __thiscall AiEventClassTy::InitData(AiEventClassTy *this,int *param_1)

{
  code *pcVar1;
  AiEventClassTy *pAVar2;
  int iVar3;
  DArrayTy *pDVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  void *pvVar13;
  int *piVar14;
  bool bVar15;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8 == (AiEventClassTy *)0x0) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14 = (int *)&local_8->field_008C;
    }
    piVar10 = param_1;
    for (iVar3 = 0x127; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar14 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
    }
    *(short *)piVar14 = (short)*piVar10;
    *(undefined1 *)((int)piVar14 + 2) = *(undefined1 *)((int)piVar10 + 2);
    local_8->field_0091 = 1;
    pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,5,5);
    pAVar2->field_05B3 = &pDVar4->flags;
    uVar11 = 0;
    do {
      Library::DKW::TBL::FUN_006b6020(pAVar2->field_05B3,uVar11,&DAT_008016a0);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 4);
    if (pAVar2->field_008C == '\0') {
      pAVar2->field_0088 = DAT_00808754;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (*(code *)pAVar2->field_0000->field_0018)();
      uVar11 = iVar3 * 2 + 2;
      pAVar2->field_00D2 = uVar11;
      if (0x18 < uVar11) {
        pAVar2->field_00D2 = 3;
      }
    }
    else {
      pAVar2->field_0088 = pAVar2->field_00DA;
    }
    iVar3 = pAVar2->field_0506;
    puVar12 = &pAVar2->field_04FA;
    if (puVar12 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar12 * 5;
    }
    puVar5 = Library::DKW::LIB::FUN_006aac10(uVar11);
    pAVar2->field_0502 = puVar5;
    if (puVar12 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar12 * 5;
    }
    puVar12 = (undefined4 *)(iVar3 + 0x49e + (int)param_1);
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    pDVar4 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(pAVar2->field_04F2 + 0x49e + (int)param_1));
    pAVar2->field_04EE = pDVar4;
    puVar6 = Library::DKW::TBL::FUN_006c8680
                       ((uint *)0x0,(uint *)(pAVar2->field_04E6 + 0x49e + (int)param_1));
    pAVar2->field_04E2 = puVar6;
    pDVar4 = pAVar2->field_04EE;
    uVar11 = 0;
    if (0 < (int)pDVar4->count) {
      bVar15 = pDVar4->count != 0;
      do {
        if (bVar15) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar11) (runtime stride) */
          pvVar13 = (void *)(pDVar4->elementSize * uVar11 + (int)pDVar4->data);
        }
        else {
          pvVar13 = (void *)0x0;
        }
        if (*(int *)((int)pvVar13 + 0xf) != 0) {
          uVar7 = FUN_006b0060((uint *)0x0,
                               (uint *)(*(int *)((int)pvVar13 + 0x13) + 0x49e + (int)param_1));
          *(undefined4 *)((int)pvVar13 + 0xf) = uVar7;
        }
        pDVar4 = pAVar2->field_04EE;
        uVar11 = uVar11 + 1;
        bVar15 = uVar11 < pDVar4->count;
      } while ((int)uVar11 < (int)pDVar4->count);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  FUN_00402e14((int)local_8);
  iVar8 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0x50,0,iVar3,"%s",
                             "AiEventClassTy::InitData");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0x51);
  return iVar3;
}

