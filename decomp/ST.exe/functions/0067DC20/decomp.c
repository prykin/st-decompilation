#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 319 | 342 | 344 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067DC20 parameter used as this of cMf32::RecMemFree @ 0067DDB2 | 0067DC20 parameter
   used as this of cMf32::RecNameGetNext @ 0067DDBA */

uint * __cdecl _CreateStgListByRoot(cMf32 *param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  int iVar6;
  char *pcVar3;
  int iVar5;
  uint *puVar4;
  int iVar7;
  uint uVar8;
  undefined1 *_Source;
  char *pcVar11;
  undefined1 local_2ec [516];
  char local_e8 [64];
  char local_a8 [12];
  char local_9c [36];
  char local_78 [32];
  uint local_58;
  int local_54;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  AnonShape_0067DC20_B265FC02 *local_8;
  char *pcVar3_mg0;

  memset((void *)local_2ec, 0, 0x201); /* compiler bulk-zero initialization */
  iVar7 = 0;
  local_c = nullptr;
  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0x156,0,iVar6,"%s",
                               "_CreateStgListByRoot");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x158);
    return nullptr;
  }
  if (param_1 == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr_d.cpp",0x13f);
  }
  local_c = Library::DKW::TBL::DArrayCreate(nullptr,5,0x98,5);
  uVar8 = 0xffffffff;
  do {
    pcVar3_mg0 = param_3;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar3_mg0 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar3_mg0;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  local_2ec[0] = 0xc;
  pcVar3 = pcVar3_mg0 + -uVar8;
  pcVar11 = local_2ec + 1;
  memmove(pcVar11, pcVar3, uVar8); /* compiler REP MOVS byte copy */
  cMf32::ToBeg(param_1,FUN_006f2d10,local_2ec);
  pcVar3 = (char *)cMf32::RecNameGetNext(param_1);
  while (pcVar3 != nullptr) {
    local_8 = (AnonShape_0067DC20_B265FC02 *)Library::Ourlib::MFAOBJ::mfAObjLoad(param_1,pcVar3,0,1);
    uVar8 = *(uint *)&local_8[1].field_0x7e;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (local_8 != nullptr) {
      if (((param_2 == 0) || (param_2 == local_8->field_0019)) && ((param_4 & uVar8) != 0)) {
        _Source = &local_8->field_0x1b;
        pcVar11 = local_e8;
        for (iVar7 = 0x26; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar11[0] = '\0';
          pcVar11[1] = '\0';
          pcVar11[2] = '\0';
          pcVar11[3] = '\0';
          pcVar11 = pcVar11 + 4;
        }
        Library::MSVCRT::_strncpy(local_e8,_Source,0x3f);
        Library::MSVCRT::_strncpy(local_a8,&local_8->field_0x5b,0xb);
        Library::MSVCRT::_strncpy(local_9c,pcVar3,0x1f);
        Library::MSVCRT::_strncpy(local_78,PTR_s_OBJECTIVES_0079d718,0x1f);
        local_54 = (int)local_8->field_0019;
        local_58 = uVar8;
        Library::DKW::TBL::DArrayAppend(local_c,local_e8);
      }
      cMf32::RecMemFree(param_1,(uint *)&local_8);
    }
    pcVar3 = (char *)cMf32::RecNameGetNext(param_1);
  }
  g_currentExceptionFrame = local_50.previous;
  return &local_c->flags;
}

