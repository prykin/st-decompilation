#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 140 | 141 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 00691190 returns used as parameter 0 of FUN_006809b0 @ 00685B79 */

byte * __cdecl TactDataPack(undefined4 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  AnonShape_00691190_783A1B6D *pAVar3;
  AnonShape_GLOBAL_008489C4_F7BABFAC *pAVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  AnonShape_00691190_783A1B6D *pAVar10;
  uint *puVar11;
  byte *pbVar12;
  bool bVar13;
  InternalExceptionFrame local_68;
  int *local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  void *local_14;
  uint local_10;
  int local_c;
  AnonShape_00691190_783A1B6D *local_8;

  local_8 = (AnonShape_00691190_783A1B6D *)0x0;
  local_c = 0;
  local_14 = (void *)0x0;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar2 = 8;
    local_24 = (int *)((int)param_1 + 0x85);
    piVar6 = local_24;
    do {
      iVar9 = *piVar6;
      if (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 0xc) * *(int *)(iVar9 + 8) + 0x1c;
        local_c = local_c + iVar9;
        piVar6[2] = iVar9;
      }
      piVar6 = piVar6 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_2 = local_c + 0x10cU;
    pAVar3 = (AnonShape_00691190_783A1B6D *)Library::DKW::LIB::FUN_006aac10(local_c + 0x10cU);
    puVar8 = param_1;
    pAVar10 = pAVar3;
    for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      pAVar10 = (AnonShape_00691190_783A1B6D *)&pAVar10->field_0x4;
    }
    iVar9 = 0;
    pAVar3->field_0014 = *param_2;
    pAVar3->field_0x18 = 0;
    puVar11 = (uint *)&pAVar3[1].field_0x3;
    iVar2 = local_18;
    local_8 = pAVar3;
    do {
      if (*(uint **)(&pAVar3->field_0x85 + iVar9) != (uint *)0x0) {
        FUN_006affc0(*(uint **)(&pAVar3->field_0x85 + iVar9),puVar11,&local_c);
        *(int *)(&local_8->field_0x89 + iVar9) = (int)puVar11 + (-0x10b - (int)local_8);
        puVar11 = (uint *)((int)puVar11 + *(int *)(&local_8->field_0x8d + iVar9));
        iVar2 = iVar2 + *(int *)(&local_8->field_0x8d + iVar9);
        pAVar3 = local_8;
        local_18 = iVar2;
      }
      iVar9 = iVar9 + 0xc;
    } while (iVar9 < 0x60);
    if (*(char *)(param_1 + 6) == '\x02') {
      *(int *)&pAVar3->field_0x107 = iVar2;
      local_20 = 0;
      local_8->field_0105 = 0;
      iVar9 = *local_24;
      pAVar3 = local_8;
      if (0 < *(int *)(iVar9 + 0xc)) {
        bVar13 = *(int *)(iVar9 + 0xc) != 0;
        do {
          if (bVar13) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar9 = *(int *)(iVar9 + 8) * local_20 + *(int *)(iVar9 + 0x1c);
          }
          else {
            iVar9 = 0;
          }
          if (*(int *)(iVar9 + 4) == 0) {
            pAVar4 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0;
          }
          else {
            pAVar4 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)(*(int *)(iVar9 + 4) + 0x20);
          }
          if (pAVar4 != (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0) {
            local_1c = FltDataPack(pAVar4,&local_10);
            local_8 = (AnonShape_00691190_783A1B6D *)
                      Library::DKW::LIB::FUN_006acf50((int)local_8,local_8->field_0014 + local_10);
            pbVar5 = local_1c;
            pbVar12 = &local_8[1].field_0x3 + iVar2;
            for (uVar7 = local_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pbVar12 = *(undefined4 *)pbVar5;
              pbVar5 = pbVar5 + 4;
              pbVar12 = pbVar12 + 4;
            }
            for (uVar7 = local_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pbVar12 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              pbVar12 = pbVar12 + 1;
            }
            iVar2 = iVar2 + local_10;
            local_8->field_0014 = local_8->field_0014 + local_10;
            local_8->field_0105 = local_8->field_0105 + 1;
            local_18 = iVar2;
            if (local_1c != (byte *)0x0) {
              FreeAndNull(&local_1c);
            }
          }
          local_20 = local_20 + 1;
          iVar9 = *local_24;
          bVar13 = local_20 < *(uint *)(iVar9 + 0xc);
          pAVar3 = local_8;
        } while ((int)local_20 < (int)*(uint *)(iVar9 + 0xc));
      }
    }
    g_currentExceptionFrame = local_68.previous;
    *param_2 = pAVar3->field_0014;
    return (byte *)pAVar3;
  }
  g_currentExceptionFrame = local_68.previous;
  if (local_8 != (AnonShape_00691190_783A1B6D *)0x0) {
    FreeAndNull(&local_8);
  }
  if (local_14 != (void *)0x0) {
    FreeAndNull(&local_14);
  }
  iVar9 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact_d.cpp",0x8c,0,iVar2,"%s",
                             "TactDataPack");
  if (iVar9 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x8d);
    return (byte *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

