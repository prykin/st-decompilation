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
  byte *pbVar3;
  AnonShape_GLOBAL_008489C4_F7BABFAC *pAVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_68;
  int *local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  void *local_14;
  uint local_10;
  int local_c;
  byte *local_8;

  local_8 = (byte *)0x0;
  local_c = 0;
  local_14 = (void *)0x0;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar2 = 8;
    local_24 = (int *)((int)param_1 + 0x85);
    piVar5 = local_24;
    do {
      iVar8 = *piVar5;
      if (iVar8 != 0) {
        iVar8 = *(int *)(iVar8 + 0xc) * *(int *)(iVar8 + 8) + 0x1c;
        local_c = local_c + iVar8;
        piVar5[2] = iVar8;
      }
      piVar5 = piVar5 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_2 = local_c + 0x10cU;
    pbVar3 = (byte *)Library::DKW::LIB::FUN_006aac10(local_c + 0x10cU);
    puVar7 = param_1;
    pbVar10 = pbVar3;
    for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pbVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      pbVar10 = pbVar10 + 4;
    }
    iVar8 = 0;
    *(uint *)(pbVar3 + 0x14) = *param_2;
    pbVar3[0x18] = 0;
    puVar9 = (uint *)(pbVar3 + 0x10b);
    iVar2 = local_18;
    local_8 = pbVar3;
    do {
      if (*(uint **)(pbVar3 + iVar8 + 0x85) != (uint *)0x0) {
        FUN_006affc0(*(uint **)(pbVar3 + iVar8 + 0x85),puVar9,&local_c);
        *(int *)(local_8 + iVar8 + 0x89) = (int)puVar9 + (-0x10b - (int)local_8);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar9 = (uint *)((int)puVar9 + *(int *)(local_8 + iVar8 + 0x8d));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar2 = iVar2 + *(int *)(local_8 + iVar8 + 0x8d);
        pbVar3 = local_8;
        local_18 = iVar2;
      }
      iVar8 = iVar8 + 0xc;
    } while (iVar8 < 0x60);
    if (*(char *)(param_1 + 6) == '\x02') {
      *(int *)(pbVar3 + 0x107) = iVar2;
      local_20 = 0;
      local_8[0x105] = 0;
      local_8[0x106] = 0;
      iVar8 = *local_24;
      pbVar3 = local_8;
      if (0 < *(int *)(iVar8 + 0xc)) {
        bVar11 = *(int *)(iVar8 + 0xc) != 0;
        do {
          if (bVar11) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar8 = *(int *)(iVar8 + 8) * local_20 + *(int *)(iVar8 + 0x1c);
          }
          else {
            iVar8 = 0;
          }
          if (*(int *)(iVar8 + 4) == 0) {
            pAVar4 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0;
          }
          else {
            pAVar4 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)(*(int *)(iVar8 + 4) + 0x20);
          }
          if (pAVar4 != (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0) {
            local_1c = FltDataPack(pAVar4,&local_10);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_8 = (byte *)Library::DKW::LIB::FUN_006acf50
                                        ((int)local_8,*(int *)(local_8 + 0x14) + local_10);
            pbVar3 = local_1c;
            pbVar10 = local_8 + iVar2 + 0x10b;
            for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar3;
              pbVar3 = pbVar3 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pbVar10 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              pbVar10 = pbVar10 + 1;
            }
            iVar2 = iVar2 + local_10;
            *(uint *)(local_8 + 0x14) = *(int *)(local_8 + 0x14) + local_10;
            *(short *)(local_8 + 0x105) = *(short *)(local_8 + 0x105) + 1;
            local_18 = iVar2;
            if (local_1c != (byte *)0x0) {
              FreeAndNull(&local_1c);
            }
          }
          local_20 = local_20 + 1;
          iVar8 = *local_24;
          bVar11 = local_20 < *(uint *)(iVar8 + 0xc);
          pbVar3 = local_8;
        } while ((int)local_20 < (int)*(uint *)(iVar8 + 0xc));
      }
    }
    g_currentExceptionFrame = local_68.previous;
    *param_2 = *(uint *)(pbVar3 + 0x14);
    return pbVar3;
  }
  g_currentExceptionFrame = local_68.previous;
  if (local_8 != (byte *)0x0) {
    FreeAndNull(&local_8);
  }
  if (local_14 != (void *)0x0) {
    FreeAndNull(&local_14);
  }
  iVar8 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact_d.cpp",0x8c,0,iVar2,"%s",
                             "TactDataPack");
  if (iVar8 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x8d);
    return (byte *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

