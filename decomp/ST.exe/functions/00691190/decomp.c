#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 140 | 141 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl TactDataPack(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  AnonShape_GLOBAL_008489C4_F7BABFAC *pAVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  bool bVar13;
  InternalExceptionFrame local_68;
  int *local_24;
  uint local_20;
  undefined4 *local_1c;
  int local_18;
  void *local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;

  local_8 = (undefined4 *)0x0;
  local_c = 0;
  local_14 = (void *)0x0;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar4 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar4 == 0) {
    iVar4 = 8;
    local_24 = (int *)((int)param_1 + 0x85);
    piVar7 = local_24;
    do {
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        iVar10 = *(int *)(iVar10 + 0xc) * *(int *)(iVar10 + 8) + 0x1c;
        local_c = local_c + iVar10;
        piVar7[2] = iVar10;
      }
      piVar7 = piVar7 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *param_2 = local_c + 0x10cU;
    puVar5 = Library::DKW::LIB::FUN_006aac10(local_c + 0x10cU);
    puVar9 = param_1;
    puVar11 = puVar5;
    for (iVar4 = 0x43; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    iVar10 = 0;
    puVar5[5] = *param_2;
    *(undefined1 *)(puVar5 + 6) = 0;
    puVar12 = (uint *)((int)puVar5 + 0x10b);
    iVar4 = local_18;
    local_8 = puVar5;
    do {
      puVar1 = *(uint **)(iVar10 + 0x85 + (int)puVar5);
      if (puVar1 != (uint *)0x0) {
        FUN_006affc0(puVar1,puVar12,&local_c);
        *(int *)(iVar10 + 0x89 + (int)local_8) = (int)puVar12 + (-0x10b - (int)local_8);
        iVar2 = *(int *)(iVar10 + 0x8d + (int)local_8);
        puVar12 = (uint *)((int)puVar12 + iVar2);
        iVar4 = iVar4 + iVar2;
        puVar5 = local_8;
        local_18 = iVar4;
      }
      iVar10 = iVar10 + 0xc;
    } while (iVar10 < 0x60);
    if (*(char *)(param_1 + 6) == '\x02') {
      *(int *)((int)puVar5 + 0x107) = iVar4;
      local_20 = 0;
      *(undefined2 *)((int)local_8 + 0x105) = 0;
      iVar10 = *local_24;
      puVar5 = local_8;
      if (0 < *(int *)(iVar10 + 0xc)) {
        bVar13 = *(int *)(iVar10 + 0xc) != 0;
        do {
          if (bVar13) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar10 = *(int *)(iVar10 + 8) * local_20 + *(int *)(iVar10 + 0x1c);
          }
          else {
            iVar10 = 0;
          }
          if (*(int *)(iVar10 + 4) == 0) {
            pAVar6 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0;
          }
          else {
            pAVar6 = (AnonShape_GLOBAL_008489C4_F7BABFAC *)(*(int *)(iVar10 + 4) + 0x20);
          }
          if (pAVar6 != (AnonShape_GLOBAL_008489C4_F7BABFAC *)0x0) {
            local_1c = FltDataPack(pAVar6,&local_10);
            local_8 = (undefined4 *)
                      Library::DKW::LIB::FUN_006acf50((int)local_8,local_8[5] + local_10);
            puVar5 = local_1c;
            puVar9 = (undefined4 *)(iVar4 + 0x10b + (int)local_8);
            for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar9 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            iVar4 = iVar4 + local_10;
            local_8[5] = local_8[5] + local_10;
            *(short *)((int)local_8 + 0x105) = *(short *)((int)local_8 + 0x105) + 1;
            local_18 = iVar4;
            if (local_1c != (undefined4 *)0x0) {
              FreeAndNull(&local_1c);
            }
          }
          local_20 = local_20 + 1;
          iVar10 = *local_24;
          bVar13 = local_20 < *(uint *)(iVar10 + 0xc);
          puVar5 = local_8;
        } while ((int)local_20 < (int)*(uint *)(iVar10 + 0xc));
      }
    }
    g_currentExceptionFrame = local_68.previous;
    *param_2 = puVar5[5];
    return puVar5;
  }
  g_currentExceptionFrame = local_68.previous;
  if (local_8 != (undefined4 *)0x0) {
    FreeAndNull(&local_8);
  }
  if (local_14 != (void *)0x0) {
    FreeAndNull(&local_14);
  }
  iVar10 = ReportDebugMessage(s_E____titans_ai_ai_tact_d_cpp_007d58fc,0x8c,0,iVar4,&DAT_007a4ccc,
                              s_TactDataPack_007d5920);
  if (iVar10 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_tact_d_cpp_007d58fc,0x8d);
    return (undefined4 *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

