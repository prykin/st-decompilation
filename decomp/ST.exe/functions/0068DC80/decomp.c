#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitData */

int __thiscall AiTactClassTy::InitData(AiTactClassTy *this,undefined4 *param_1)

{
  AiTactClassTy *pAVar2;
  int local_EAX_45;
  AiTactClassTy_field_00A5DArray *pAVar3;
  DArrayTy *pDVar4;
  AiTactClassTy_field_00BDDArray *pAVar5;
  int iVar3;
  int iVar9;
  int iVar6;
  byte *puVar7;
  AiTactClassTy_field_00A5DArray **ppAVar8;
  int iVar10;
  byte *puVar11;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  AnonShape_0068DC80_4419198B *local_1c;
  AiTactClassTy *local_18;
  uint local_14;
  AllocationRecord_006684E0 *local_10;
  AnonShape_0068DC80_4419198B *local_c;
  AllocationRecord_006684E0 *local_8;

  puVar11 = nullptr;
  local_c = nullptr;
  local_10 = nullptr;
  local_8 = nullptr;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_18 = this;
  local_EAX_45 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  pAVar2 = local_18;
  if (local_EAX_45 == 0) {
    if (local_18 != nullptr) {
      puVar11 = (byte *)(&local_18->field_0020);
    }
    puVar7 = (byte *)(param_1);
    memmove(puVar11, puVar7, 0x10c); /* compiler REP MOVS byte copy */
    local_18->field_0020 = 0x38e;
    local_18->field_0038 = 1;
    ppAVar8 = &local_18->field_00A5;
    iVar6 = 8;
    do {
      if (*ppAVar8 != nullptr) {
        pAVar3 = (AiTactClassTy_field_00A5DArray *)
                 FUN_006b0060(nullptr,(uint *)((int)ppAVar8[1] + 0x10b + (int)param_1));
        *ppAVar8 = pAVar3;
      }
      ppAVar8 = ppAVar8 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (pAVar2->field_00A5 == nullptr) {
      pAVar3 = (AiTactClassTy_field_00A5DArray *)
               Library::DKW::TBL::DArrayCreate(nullptr,10,8,10);
      pAVar2->field_00A5 = pAVar3;
    }
    if (pAVar2->field_00B1 == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x34,10);
      pAVar2->field_00B1 = pDVar4;
    }
    if (pAVar2->field_00BD == nullptr) {
      pAVar5 = (AiTactClassTy_field_00BDDArray *)
               Library::DKW::TBL::DArrayCreate(nullptr,10,0x4a,10);
      pAVar2->field_00BD = pAVar5;
    }
    if (pAVar2->field_00C9 == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,8,10);
      pAVar2->field_00C9 = pDVar4;
    }
    iVar6 = 0;
    if (0 < pAVar2->field_0125) {
      pAVar2->field_00A5->count = 0;
      iVar10 = STField<int>(param_1,0x107) + 0x10b + (int)param_1;
      if (0 < pAVar2->field_0125) {
        do {
          *(undefined4 *)(iVar10 + 4) = pAVar2->field_0024;
          *(undefined4 *)(iVar10 + 0x77) = pAVar2->field_009D;
          *(undefined1 *)(iVar10 + 0x6a) = pAVar2->field_0088;
          STPlaySystemC::CreateGameObject(g_playSystem_00802A38,900,&local_14,&local_c,iVar10,0);
          local_1c = local_c;
          local_20 = local_c->field_0018;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)pAVar2->field_00A5,&local_20);
          local_c->field_0284 = pAVar2;
          iVar10 = iVar10 + *(int *)(iVar10 + 0x14);
          iVar6 = iVar6 + 1;
        } while (iVar6 < pAVar2->field_0125);
      }
      local_10 = thunk_FUN_00668180("__REPAIR_FLEET__",pAVar2->field_0039,0x8000,0,
                                    *(byte *)&pAVar2->field_0024);
      local_8 = FltDataPack(local_10,&local_14);
      thunk_FUN_006686c0((int *)&local_10);
      *(undefined4 *)&local_8->field_0x4 = pAVar2->field_0024;
      *(undefined4 *)&local_8->field_0x77 = pAVar2->field_009D;
      local_8->field_0x6a = pAVar2->field_0088;
      STPlaySystemC::CreateGameObject(g_playSystem_00802A38,900,&local_14,&local_c,local_8,0);
      thunk_FUN_006686c0((int *)&local_8);
      local_1c = local_c;
      local_20 = local_c->field_0018;
      iVar3 = Library::DKW::TBL::DArrayAppend((DArrayTy *)pAVar2->field_00A5,&local_20);
      pAVar2->field_00A1 = iVar3;
      local_c->field_0284 = pAVar2;
    }
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  sub_0068E010(local_18);
  thunk_FUN_006686c0((int *)&local_8);
  thunk_FUN_006686c0((int *)&local_10);
  iVar9 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x61,0,local_EAX_45,"%s"
                             ,"AiTactClassTy::InitData");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_45,0,"E:\\__titans\\ai\\ai_tact.cpp",0x62);
  return local_EAX_45;
}

