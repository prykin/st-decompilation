#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 137 | 138 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 0065CD10 returns used as parameter 0 of FUN_006809b0 @ 00686342

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0065CD10.
   Evidence: exact 1183-byte source-parameter copy at 0065CE00..0065CE04 */

AllocationRecord_0065CD10 * __cdecl EventDataPack(AllocationRecord_0065CD10 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  AnonShape_0065CD10_CB9334E9 *pAVar3;
  AllocationRecord_0065CD10 *pAVar4;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  byte *puVar10;
  AnonShape_0065CD10_CB9334E9 *pAVar11;
  byte *puVar12;
  bool bVar13;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_0065CD10_CB9334E9 *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    uVar6 = 0;
    iVar2 = param_1->field_0462;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar13 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar13) {
          iVar2 = *(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        iVar7 = *(int *)(iVar2 + 0xf);
        if (iVar7 != 0) {
          iVar7 = *(int *)(iVar7 + 0xc) * *(int *)(iVar7 + 8) + 0x1c;
          *(int *)(iVar2 + 0x17) = iVar7;
          local_c = local_c + iVar7;
        }
        iVar2 = param_1->field_0462;
        uVar6 = uVar6 + 1;
        bVar13 = uVar6 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar2 + 0xc));
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(param_1->field_0462 + 0xc) * *(int *)(param_1->field_0462 + 8) + 0x1c;
    local_c = local_c + iVar2;
    param_1->field_046A = iVar2;
    iVar2 = FUN_006c87f0(param_1->field_0456);
    param_1->field_045E = iVar2;
    if (&param_1->field_046E == nullptr) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_1->field_046E * 5;
    }
    local_c = local_c + iVar2 + iVar7;
    *param_2 = local_c + 0x49fU;
    pAVar3 = Library::DKW::LIB::MemAllocClear(local_c + 0x49fU);
    pAVar4 = param_1;
    pAVar11 = pAVar3;
    memmove(pAVar11, pAVar4, 0x49e); /* compiler REP MOVS byte copy */
    pAVar11 = (AnonShape_0065CD10_CB9334E9 *)((byte *)pAVar11 + 0x49c);
    pAVar4 = (AllocationRecord_0065CD10 *)((byte *)pAVar4 + 0x49c);
    pAVar11->field_0x2 = *(undefined1 *)((int)&pAVar4->field_0001 + 1);
    uVar6 = 0;
    *(uint *)&pAVar3->field_0x1 = *param_2;
    pAVar3->field_0x5 = 0;
    iVar2 = *(int *)&pAVar3->field_0x462;
    puVar8 = (uint *)&pAVar3[1].field_0x1e;
    local_8 = pAVar3;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar13 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar13) {
          iVar2 = *(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (*(uint **)(iVar2 + 0xf) != nullptr) {
          FUN_006affc0(*(uint **)(iVar2 + 0xf),puVar8,&local_c);
          iVar7 = (int)puVar8 + (-0x49e - (int)local_8);
          puVar8 = (uint *)((int)puVar8 + *(int *)(iVar2 + 0x17));
          *(int *)(iVar2 + 0x13) = iVar7;
          pAVar3 = local_8;
        }
        iVar2 = *(int *)&pAVar3->field_0x462;
        uVar6 = uVar6 + 1;
        bVar13 = uVar6 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar2 + 0xc));
    }
    FUN_006affc0(*(uint **)&pAVar3->field_0x462,puVar8,&local_c);
    local_8->field_0466 = (int)puVar8 + (-0x49e - (int)local_8);
    puVar8 = (uint *)((int)puVar8 + local_8->field_046A);
    FUN_006c8840(local_8->field_0456,puVar8,&local_c);
    local_8->field_045A = (int)puVar8 + (-0x49e - (int)local_8);
    puVar9 = (undefined4 *)((int)puVar8 + local_8->field_045E);
    if (&param_1->field_046E == nullptr) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_1->field_046E * 5;
    }
    puVar10 = (byte *)(param_1->field_0476);
    puVar12 = (byte *)(puVar9);
    memmove(puVar12, puVar10, uVar6); /* compiler REP MOVS byte copy */
    local_8->field_047A = (undefined1 *)((int)puVar9 + (-0x49e - (int)local_8));
    local_8->field_0476 = 0;
    g_currentExceptionFrame = local_50.previous;
    return (AllocationRecord_0065CD10 *)local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_event_d.cpp",0x89,0,iVar2,"%s",
                             "EventDataPack");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x8a);
  return nullptr;
}

