#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 107 | 108 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00649B90 -> 00648620 @ 00649D4A

   [STPrototypeApplier] Propagated return.
   Evidence: 00648620 returns used as parameter 0 of FUN_006809b0 @ 00685CD5 | 00648620 returns used
   as parameter 2 of Library::Ourlib::MFAOBJ::mfAObjSave @ 00648960

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00648620.
   Evidence: exact 133-byte source-parameter copy at 00648676..0064867B */

AllocationRecord_00648620 * __cdecl
BossDataPack(AllocationRecord_00648620 *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  AllocationRecord_00648620 *pAVar3;
  int iVar4;
  AllocationRecord_00648620 *pAVar5;
  uint uVar7;
  byte *puVar8;
  InternalExceptionFrame local_4c;
  void *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    *param_4 = param_3 + 0x85U;
    pAVar3 = Library::DKW::LIB::MemAllocClear(param_3 + 0x85U);
    pAVar5 = pAVar3;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar5 = *(undefined4 *)param_1;
      param_1 = (AllocationRecord_00648620 *)((int)&param_1->field_0001 + 3);
      pAVar5 = (AllocationRecord_00648620 *)((int)&pAVar5->field_0001 + 3);
    }
    *(undefined1 *)pAVar5 = *(undefined1 *)param_1;
    pAVar3->field_0001 = *param_4;
    pAVar3->field_004A = param_3;
    pAVar3->field_0005 = 0;
    uVar7 = pAVar3->field_004A;
    puVar8 = (byte *)&pAVar3->field_0x84;
    memmove(puVar8, param_2, uVar7); /* compiler REP MOVS byte copy */
    pAVar3->field_0046 = &pAVar3->field_0x84 + (-0x84 - (int)pAVar3);
    g_currentExceptionFrame = local_4c.previous;
    return pAVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss_d.cpp",0x6b,0,iVar2,"%s",
                             "BossDataPack");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_boss_d.cpp",0x6c);
  return nullptr;
}

