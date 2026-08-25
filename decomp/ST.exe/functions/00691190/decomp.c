#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 140 | 141 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 00691190 returns used as parameter 0 of FUN_006809b0 @ 00685B79 */

byte * __cdecl TactDataPack(undefined4 *param_1,uint *param_2)

{
  int iVar2;
  AnonShape_00691190_783A1B6D *pAVar2;
  AllocationRecord_006684E0 *pAVar3;
  int iVar9;
  byte *pbVar4;
  int *piVar5;
  int iVar7;
  byte *puVar8;
  int iVar10;
  AnonShape_00691190_783A1B6D *pAVar11;
  uint *puVar12;
  bool bVar13;
  InternalExceptionFrame local_68;
  int *local_24;
  uint local_20;
  AllocationRecord_006684E0 *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  AnonShape_00691190_783A1B6D *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_14 = 0;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar7 = 8;
    local_24 = (int *)((int)param_1 + 0x85);
    piVar5 = local_24;
    do {
      iVar10 = *piVar5;
      if (iVar10 != 0) {
        iVar10 = STField<int>(iVar10,0xC) * STField<int>(iVar10,0x8) + 0x1c;
        local_c = local_c + iVar10;
        piVar5[2] = iVar10;
      }
      piVar5 = piVar5 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *param_2 = local_c + 0x10cU;
    pAVar2 = Library::DKW::LIB::MemAllocClear(local_c + 0x10cU);
    puVar8 = (byte *)(param_1);
    pAVar11 = pAVar2;
    for (iVar7 = 0x43; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pAVar11 = *puVar8;
      puVar8 = (byte *)(puVar8 + 1);
      pAVar11 = (AnonShape_00691190_783A1B6D *)&pAVar11->field_0x4;
    }
    iVar10 = 0;
    pAVar2->field_0014 = *param_2;
    pAVar2->field_0x18 = 0;
    puVar12 = (uint *)&pAVar2[1].field_0x3;
    iVar7 = local_18;
    local_8 = pAVar2;
    do {
      if (*(uint **)(&pAVar2->field_0x85 + iVar10) != nullptr) {
        FUN_006affc0(*(uint **)(&pAVar2->field_0x85 + iVar10),puVar12,&local_c);
        *(int *)(&local_8->field_0x89 + iVar10) = (int)puVar12 + (-0x10b - (int)local_8);
        puVar12 = (uint *)((int)puVar12 + *(int *)(&local_8->field_0x8d + iVar10));
        iVar7 = iVar7 + *(int *)(&local_8->field_0x8d + iVar10);
        pAVar2 = local_8;
        local_18 = iVar7;
      }
      iVar10 = iVar10 + 0xc;
    } while (iVar10 < 0x60);
    if (((char *)param_1)[6] == '\x02') {
      *(int *)&pAVar2->field_0x107 = iVar7;
      local_20 = 0;
      local_8->field_0105 = 0;
      iVar10 = *local_24;
      pAVar2 = local_8;
      if (0 < STField<int>(iVar10,0xC)) {
        bVar13 = STField<int>(iVar10,0xC) != 0;
        do {
          if (bVar13) {
            iVar10 = STField<int>(iVar10,0x8) * local_20 + STField<int>(iVar10,0x1C);
          }
          else {
            iVar10 = 0;
          }
          if (STField<int>(iVar10,0x4) == 0) {
            pAVar3 = nullptr;
          }
          else {
            pAVar3 = (AllocationRecord_006684E0 *)(STField<int>(iVar10,0x4) + 0x20);
          }
          if (pAVar3 != nullptr) {
            /* ST_CALLSITE[006912DC]: CALL 0x004014c4; direct=004014C4 FltDataPack */
            local_1c = FltDataPack(pAVar3,&local_10);
            local_8 = Library::DKW::LIB::MemRealloc(local_8,local_8->field_0014 + local_10);
            pAVar3 = local_1c;
            puVar8 = (byte *)(&local_8[1].field_0x3 + iVar7);
            memmove(puVar8, pAVar3, local_10); /* compiler REP MOVS byte copy */
            iVar7 = iVar7 + local_10;
            local_8->field_0014 = local_8->field_0014 + local_10;
            local_8->field_0105 = local_8->field_0105 + 1;
            local_18 = iVar7;
            if (local_1c != nullptr) {
              FreeAndNull(&local_1c);
            }
          }
          local_20 = local_20 + 1;
          iVar10 = *local_24;
          bVar13 = local_20 < STField<uint>(iVar10,0xC);
          pAVar2 = local_8;
        } while ((int)local_20 < (int)STField<uint>(iVar10,0xC));
      }
    }
    g_currentExceptionFrame = local_68.previous;
    *param_2 = pAVar2->field_0014;
    return (byte *)pAVar2;
  }
  g_currentExceptionFrame = local_68.previous;
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  if (local_14 != 0) {
    FreeAndNull(&local_14);
  }
  iVar9 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact_d.cpp",0x8c,0,iVar2,"%s",
                             "TactDataPack");
  if (iVar9 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x8d);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

