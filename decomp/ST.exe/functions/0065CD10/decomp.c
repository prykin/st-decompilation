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
  int local_EAX_39;
  int iVar3;
  int iVar2;
  AnonShape_0065CD10_CB9334E9 *pAVar4;
  int iVar7;
  AllocationRecord_0065CD10 *pAVar5;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte *puVar11;
  AnonShape_0065CD10_CB9334E9 *pAVar12;
  byte *puVar13;
  bool bVar14;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_0065CD10_CB9334E9 *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_39 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (local_EAX_39 == 0) {
    uVar7 = 0;
    iVar3 = param_1->field_0462;
    if (0 < *(int *)(iVar3 + 0xc)) {
      bVar14 = *(int *)(iVar3 + 0xc) != 0;
      do {
        if (bVar14) {
          iVar3 = *(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        iVar8 = *(int *)(iVar3 + 0xf);
        if (iVar8 != 0) {
          iVar8 = *(int *)(iVar8 + 0xc) * *(int *)(iVar8 + 8) + 0x1c;
          *(int *)(iVar3 + 0x17) = iVar8;
          local_c = local_c + iVar8;
        }
        iVar3 = param_1->field_0462;
        uVar7 = uVar7 + 1;
        bVar14 = uVar7 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar7 < (int)*(uint *)(iVar3 + 0xc));
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1->field_0462 + 0xc) * *(int *)(param_1->field_0462 + 8) + 0x1c;
    local_c = local_c + iVar3;
    param_1->field_046A = iVar3;
    iVar2 = FUN_006c87f0((DArrayTy *)param_1->field_0456);
    param_1->field_045E = iVar2;
    if (&param_1->field_046E == nullptr) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1->field_046E * 5;
    }
    local_c = local_c + iVar2 + iVar3;
    *param_2 = local_c + 0x49fU;
    pAVar4 = Library::DKW::LIB::MemAllocClear(local_c + 0x49fU);
    pAVar5 = param_1;
    pAVar12 = pAVar4;
    memmove(pAVar12, pAVar5, 0x49e); /* compiler REP MOVS byte copy */
    pAVar12 = (AnonShape_0065CD10_CB9334E9 *)((byte *)pAVar12 + 0x49c);
    pAVar5 = (AllocationRecord_0065CD10 *)((byte *)pAVar5 + 0x49c);
    pAVar12->field_0x2 = *(undefined1 *)((int)&pAVar5->field_0001 + 1);
    uVar7 = 0;
    *(uint *)&pAVar4->field_0x1 = *param_2;
    pAVar4->field_0x5 = 0;
    iVar3 = *(int *)&pAVar4->field_0x462;
    puVar9 = (uint *)&pAVar4[1].field_0x1e;
    local_8 = pAVar4;
    if (0 < *(int *)(iVar3 + 0xc)) {
      bVar14 = *(int *)(iVar3 + 0xc) != 0;
      do {
        if (bVar14) {
          iVar3 = *(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (*(uint **)(iVar3 + 0xf) != nullptr) {
          FUN_006affc0(*(uint **)(iVar3 + 0xf),puVar9,&local_c);
          iVar8 = (int)puVar9 + (-0x49e - (int)local_8);
          puVar9 = (uint *)((int)puVar9 + *(int *)(iVar3 + 0x17));
          *(int *)(iVar3 + 0x13) = iVar8;
          pAVar4 = local_8;
        }
        iVar3 = *(int *)&pAVar4->field_0x462;
        uVar7 = uVar7 + 1;
        bVar14 = uVar7 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar7 < (int)*(uint *)(iVar3 + 0xc));
    }
    FUN_006affc0(*(uint **)&pAVar4->field_0x462,puVar9,&local_c);
    local_8->field_0466 = (int)puVar9 + (-0x49e - (int)local_8);
    puVar9 = (uint *)((int)puVar9 + local_8->field_046A);
    FUN_006c8840(local_8->field_0456,puVar9,&local_c);
    local_8->field_045A = (int)puVar9 + (-0x49e - (int)local_8);
    puVar10 = (undefined4 *)((int)puVar9 + local_8->field_045E);
    if (&param_1->field_046E == nullptr) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_1->field_046E * 5;
    }
    puVar11 = (byte *)(param_1->field_0476);
    puVar13 = (byte *)(puVar10);
    memmove(puVar13, puVar11, uVar7); /* compiler REP MOVS byte copy */
    local_8->field_047A = (undefined1 *)((int)puVar10 + (-0x49e - (int)local_8));
    local_8->field_0476 = 0;
    g_currentExceptionFrame = local_50.previous;
    return (AllocationRecord_0065CD10 *)local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_event_d.cpp",0x89,0,local_EAX_39,
                             "%s","EventDataPack");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_39,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x8a);
  return nullptr;
}

