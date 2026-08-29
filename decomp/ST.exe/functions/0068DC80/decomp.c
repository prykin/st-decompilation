#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitData */

int __thiscall
AiTactClassTy::InitData(AiTactClassTy *this,RecoveredRecord_0068DC80_ED7BAEDA *param_1)

{
  AiTactClassTy *pAVar2;
  int local_EAX_45;
  DArrayTy *pAVar3;
  DArrayTy *pAVar3_mg1;
  DArrayTy *pDVar3;
  DArrayTy *pAVar5;
  int iVar3;
  int iVar9;
  int iVar4;
  RecoveredRecord_0068DC80_ED7BAEDA *pRVar5;
  AiTactClassTy_field_00A5DArray **ppAVar6;
  byte *puVar7;
  byte *puVar8;
  InternalExceptionFrame local_64;
  uint local_20;
  AnonShape_0068DC80_4419198B *local_1c;
  AiTactClassTy *local_18;
  uint local_14;
  AllocationRecord_006684E0 *local_10;
  AnonShape_0068DC80_4419198B *local_c;
  AllocationRecord_006684E0 *local_8;

  puVar8 = nullptr;
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
      puVar8 = (byte *)(&local_18->field_0020);
    }
    pRVar5 = param_1;
    memmove(puVar8, pRVar5, 0x10c); /* compiler REP MOVS byte copy */
    local_18->field_0020 = 0x38e;
    local_18->field_0038 = 1;
    ppAVar6 = &local_18->field_00A5;
    iVar4 = 8;
    do {
      if (*ppAVar6 != nullptr) {
        /* ST_CALLSITE[0068DCFE]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00A5DArray; source view only; no Ghidra override */
        pAVar3 = FUN_006b0060(nullptr,(uint *)(&param_1[1].field_0x0 + (int)ppAVar6[1]));
        *ppAVar6 = (AiTactClassTy_field_00A5DArray *)pAVar3;
      }
      ppAVar6 = ppAVar6 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (pAVar2->field_00A5 == nullptr) {
      /* ST_CALLSITE[0068DD1D]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00A5DArray; source view only; no Ghidra override */
      pAVar3_mg1 = Library::DKW::TBL::DArrayCreate(nullptr,10,8,10);
      pAVar2->field_00A5 = (AiTactClassTy_field_00A5DArray *)pAVar3_mg1;
    }
    if (pAVar2->field_00B1 == nullptr) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x34,10);
      pAVar2->field_00B1 = pDVar3;
    }
    if (pAVar2->field_00BD == nullptr) {
      /* ST_CALLSITE[0068DD57]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/AiTactClassTy_field_00BDDArray; source view only; no Ghidra override */
      pAVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x4a,10);
      pAVar2->field_00BD = (AiTactClassTy_field_00BDDArray *)pAVar5;
    }
    if (pAVar2->field_00C9 == nullptr) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,10,8,10);
      pAVar2->field_00C9 = pDVar3;
    }
    iVar4 = 0;
    if (0 < pAVar2->field_0125) {
      pAVar2->field_00A5->count = 0;
      puVar7 = &param_1[1].field_0x0 + param_1->field_0107;
      if (0 < pAVar2->field_0125) {
        do {
          *(undefined4 *)(puVar7 + 4) = pAVar2->field_0024;
          *(undefined4 *)(puVar7 + 0x77) = pAVar2->field_009D;
          puVar7[0x6a] = pAVar2->field_0088;
          /* ST_CALLSITE[0068DDDE]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
          STPlaySystemC::CreateGameObject(g_playSystem_00802A38,900,&local_14,&local_c,puVar7,0);
          local_1c = local_c;
          local_20 = local_c->field_0018;

          Library::DKW::TBL::DArrayAppend((DArrayTy *)pAVar2->field_00A5,&local_20);
          local_c->field_0284 = pAVar2;
          puVar7 = puVar7 + *(int *)(puVar7 + 0x14);
          iVar4 = iVar4 + 1;
        } while (iVar4 < pAVar2->field_0125);
      }
      local_10 = thunk_FUN_00668180("__REPAIR_FLEET__",pAVar2->field_0039,0x8000,0,
                                    (byte)pAVar2->field_0024);
      /* ST_CALLSITE[0068DE43]: CALL 0x004014c4; direct=004014C4 FltDataPack */
      local_8 = FltDataPack(local_10,&local_14);
      thunk_FUN_006686c0((int *)&local_10);
      *(undefined4 *)&local_8->field_0x4 = pAVar2->field_0024;
      *(undefined4 *)&local_8->field_0x77 = pAVar2->field_009D;
      local_8->field_0x6a = pAVar2->field_0088;
      /* ST_CALLSITE[0068DE91]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
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
  /* ST_CALLSITE[0068DEF4]: CALL 0x0040284c; direct=0040284C AiTactClassTy::sub_0068E010 */
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

