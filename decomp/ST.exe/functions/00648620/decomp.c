#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 107 | 108 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00649B90 -> 00648620 @ 00649D4A

   [STPrototypeApplier] Propagated return.
   Evidence: 00648620 returns used as parameter 0 of FUN_006809b0 @ 00685CD5 | 00648620 returns used
   as parameter 2 of Library::Ourlib::MFAOBJ::mfAObjSave @ 00648960 */

byte * __cdecl BossDataPack(uint *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  InternalExceptionFrame local_4c;
  void *local_8;

  local_8 = (void *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    *param_4 = param_3 + 0x85U;
    puVar3 = Library::DKW::LIB::FUN_006aac10(param_3 + 0x85U);
    puVar8 = puVar3;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *param_1;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
    }
    *(byte *)puVar8 = (byte)*param_1;
    *(uint *)((int)puVar3 + 1) = *param_4;
    *(int *)((int)puVar3 + 0x4a) = param_3;
    *(byte *)((int)puVar3 + 5) = 0;
    uVar7 = *(uint *)((int)puVar3 + 0x4a);
    puVar8 = puVar3 + 0x21;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *param_2;
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(byte *)puVar8 = (byte)*param_2;
      param_2 = (uint *)((int)param_2 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    *(byte **)((int)puVar3 + 0x46) = (byte *)((int)(puVar3 + 0x21) + (-0x84 - (int)puVar3));
    g_currentExceptionFrame = local_4c.previous;
    return (byte *)puVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != (void *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss_d.cpp",0x6b,0,iVar2,"%s",
                             "BossDataPack");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_boss_d.cpp",0x6c);
  return (byte *)0x0;
}

