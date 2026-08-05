#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 117 | 118 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 006684E0 @ 0068608A

   [STPrototypeApplier] Propagated return.
   Evidence: 006684E0 returns used as parameter 0 of FUN_006809b0 @ 006860A4

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_006684E0.
   Evidence: exact 608-byte source-parameter copy at 00668565 */

AllocationRecord_006684E0 * __cdecl FltDataPack(AllocationRecord_006684E0 *param_1,uint *param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  AllocationRecord_006684E0 *pAVar4;
  int iVar5;
  uint **ppuVar6;
  AllocationRecord_006684E0 *pAVar7;
  uint *puVar8;
  InternalExceptionFrame local_50;
  int local_c;
  AllocationRecord_006684E0 *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 == 0) {
    iVar3 = 7;
    ppuVar6 = &param_1->field_01EB;
    do {
      puVar8 = *ppuVar6;
      if (puVar8 != nullptr) {
        iVar5 = puVar8[3] * puVar8[2] + 0x1c;
        local_c = local_c + iVar5;
        ppuVar6[2] = (uint *)iVar5;
      }
      ppuVar6 = ppuVar6 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *param_2 = local_c + 0x260U;
    pAVar4 = Library::DKW::LIB::MemAllocClear(local_c + 0x260U);
    pAVar7 = pAVar4;
    memmove(pAVar7, param_1, 0x260); /* compiler REP MOVS byte copy */
    iVar3 = 0;
    pAVar4->field_0014 = *param_2;
    pAVar4->field_0018 = 0;
    puVar8 = (uint *)&pAVar4->field_0x25f;
    local_8 = pAVar4;
    do {
      puVar1 = *(uint **)((int)&pAVar4->field_01EB + iVar3);
      if (puVar1 != nullptr) {
        FUN_006affc0(puVar1,puVar8,&local_c);
        *(int *)(&local_8->field_0x1ef + iVar3) = (int)puVar8 + (-0x25f - (int)local_8);
        puVar8 = (uint *)((int)puVar8 + *(int *)(&local_8->field_0x1f3 + iVar3));
        pAVar4 = local_8;
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 < 0x54);
    g_currentExceptionFrame = local_50.previous;
    return pAVar4;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt_d.cpp",0x75,0,iVar3,"%s",
                             "FltDataPack");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x76);
  return nullptr;
}

