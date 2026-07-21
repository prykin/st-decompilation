#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitData */

int __thiscall AiTactClassTy::InitData(AiTactClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AiTactClassTy *pAVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  DArrayTy **ppDVar8;
  int iVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  AnonShape_0068DC80_4419198B *local_1c;
  AiTactClassTy *local_18;
  uint local_14;
  AnonShape_GLOBAL_008489C4_F7BABFAC *local_10;
  AnonShape_0068DC80_4419198B *local_c;
  undefined4 *local_8;

  puVar10 = (undefined4 *)0x0;
  local_c = (AnonShape_0068DC80_4419198B *)0x0;
  local_10 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0;
  local_8 = (undefined4 *)0x0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  pAVar2 = local_18;
  if (iVar3 == 0) {
    if (local_18 != (AiTactClassTy *)0x0) {
      puVar10 = &local_18->field_0020;
    }
    puVar7 = param_1;
    for (iVar3 = 0x43; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    local_18->field_0020 = 0x38e;
    local_18->field_0038 = 1;
    ppDVar8 = &local_18->field_00A5;
    iVar3 = 8;
    do {
      if (*ppDVar8 != (DArrayTy *)0x0) {
        pDVar4 = (DArrayTy *)
                 FUN_006b0060((uint *)0x0,(uint *)((int)ppDVar8[1] + 0x10b + (int)param_1));
        *ppDVar8 = pDVar4;
      }
      ppDVar8 = ppDVar8 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pAVar2->field_00A5 == (DArrayTy *)0x0) {
      pDVar4 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,8,10);
      pAVar2->field_00A5 = pDVar4;
    }
    if (pAVar2->field_00B1 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x34,10);
      pAVar2->field_00B1 = puVar5;
    }
    if (pAVar2->field_00BD == (DArrayTy *)0x0) {
      pDVar4 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x4a,10);
      pAVar2->field_00BD = pDVar4;
    }
    if (pAVar2->field_00C9 == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,8,10);
      pAVar2->field_00C9 = puVar5;
    }
    iVar3 = 0;
    if (0 < pAVar2->field_0125) {
      pAVar2->field_00A5->count = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar9 = *(int *)((int)param_1 + 0x107) + 0x10b + (int)param_1;
      if (0 < pAVar2->field_0125) {
        do {
          *(undefined4 *)(iVar9 + 4) = pAVar2->field_0024;
          *(undefined4 *)(iVar9 + 0x77) = pAVar2->field_009D;
          *(undefined1 *)(iVar9 + 0x6a) = pAVar2->field_0088;
          STPlaySystemC::CreateGameObject(PTR_00802a38,900,&local_14,&local_c,iVar9,0);
          local_1c = local_c;
          local_20 = local_c->field_0018;
          Library::DKW::TBL::FUN_006ae1c0(&pAVar2->field_00A5->flags,&local_20);
          local_c->field_0284 = pAVar2;
          iVar9 = iVar9 + *(int *)(iVar9 + 0x14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < pAVar2->field_0125);
      }
      local_10 = thunk_FUN_00668180("__REPAIR_FLEET__",pAVar2->field_0039,0x8000,0,
                                    *(undefined1 *)&pAVar2->field_0024);
      local_8 = FltDataPack(local_10,&local_14);
      thunk_FUN_006686c0((int *)&local_10);
      local_8[1] = pAVar2->field_0024;
      *(undefined4 *)((int)local_8 + 0x77) = pAVar2->field_009D;
      *(undefined1 *)((int)local_8 + 0x6a) = pAVar2->field_0088;
      STPlaySystemC::CreateGameObject(PTR_00802a38,900,&local_14,&local_c,local_8,0);
      thunk_FUN_006686c0((int *)&local_8);
      local_1c = local_c;
      local_20 = local_c->field_0018;
      uVar6 = Library::DKW::TBL::FUN_006ae1c0(&pAVar2->field_00A5->flags,&local_20);
      pAVar2->field_00A1 = uVar6;
      local_c->field_0284 = pAVar2;
    }
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  thunk_FUN_0068e010((int)local_18);
  thunk_FUN_006686c0((int *)&local_8);
  thunk_FUN_006686c0((int *)&local_10);
  iVar9 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x61,0,iVar3,"%s",
                             "AiTactClassTy::InitData");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x62);
  return iVar3;
}

