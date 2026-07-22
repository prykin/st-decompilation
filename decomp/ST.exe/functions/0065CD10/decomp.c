#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 137 | 138 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 0065CD10 returns used as parameter 0 of FUN_006809b0 @ 00686342 */

byte * __cdecl EventDataPack(AnonShape_0065CD10_BA40DE58 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  AnonShape_0065CD10_CB9334E9 *pAVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  AnonShape_0065CD10_BA40DE58 *pAVar10;
  undefined4 *puVar11;
  AnonShape_0065CD10_CB9334E9 *pAVar12;
  undefined4 *puVar13;
  bool bVar14;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_0065CD10_CB9334E9 *local_8;

  local_8 = (AnonShape_0065CD10_CB9334E9 *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    uVar6 = 0;
    iVar2 = param_1->field_0462;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar14 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar14) {
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
        bVar14 = uVar6 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar2 + 0xc));
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(param_1->field_0462 + 0xc) * *(int *)(param_1->field_0462 + 8) + 0x1c;
    local_c = local_c + iVar2;
    param_1->field_046A = iVar2;
    iVar2 = FUN_006c87f0(param_1->field_0456);
    param_1->field_045E = iVar2;
    if (&param_1->field_046E == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_1->field_046E * 5;
    }
    local_c = local_c + iVar2 + iVar7;
    *param_2 = local_c + 0x49fU;
    pAVar3 = (AnonShape_0065CD10_CB9334E9 *)Library::DKW::LIB::FUN_006aac10(local_c + 0x49fU);
    pAVar10 = param_1;
    pAVar12 = pAVar3;
    for (iVar2 = 0x127; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar12 = *(undefined4 *)pAVar10;
      pAVar10 = (AnonShape_0065CD10_BA40DE58 *)&pAVar10->field_0x4;
      pAVar12 = (AnonShape_0065CD10_CB9334E9 *)&pAVar12->field_0x4;
    }
    *(undefined2 *)pAVar12 = *(undefined2 *)pAVar10;
    pAVar12->field_0x2 = pAVar10->field_0x2;
    uVar6 = 0;
    *(uint *)&pAVar3->field_0x1 = *param_2;
    pAVar3->field_0x5 = 0;
    iVar2 = *(int *)&pAVar3->field_0x462;
    puVar8 = (uint *)&pAVar3[1].field_0x1e;
    local_8 = pAVar3;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar14 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar14) {
          iVar2 = *(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (*(uint **)(iVar2 + 0xf) != (uint *)0x0) {
          FUN_006affc0(*(uint **)(iVar2 + 0xf),puVar8,&local_c);
          iVar7 = (int)puVar8 + (-0x49e - (int)local_8);
          puVar8 = (uint *)((int)puVar8 + *(int *)(iVar2 + 0x17));
          *(int *)(iVar2 + 0x13) = iVar7;
          pAVar3 = local_8;
        }
        iVar2 = *(int *)&pAVar3->field_0x462;
        uVar6 = uVar6 + 1;
        bVar14 = uVar6 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar2 + 0xc));
    }
    FUN_006affc0(*(uint **)&pAVar3->field_0x462,puVar8,&local_c);
    local_8->field_0466 = (int)puVar8 + (-0x49e - (int)local_8);
    puVar8 = (uint *)((int)puVar8 + local_8->field_046A);
    FUN_006c8840(local_8->field_0456,puVar8,&local_c);
    local_8->field_045A = (int)puVar8 + (-0x49e - (int)local_8);
    puVar9 = (undefined4 *)((int)puVar8 + local_8->field_045E);
    if (&param_1->field_046E == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_1->field_046E * 5;
    }
    puVar11 = param_1->field_0476;
    puVar13 = puVar9;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    local_8->field_047A = (undefined1 *)((int)puVar9 + (-0x49e - (int)local_8));
    local_8->field_0476 = 0;
    g_currentExceptionFrame = local_50.previous;
    return (byte *)local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (AnonShape_0065CD10_CB9334E9 *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_event_d.cpp",0x89,0,iVar2,"%s",
                             "EventDataPack");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x8a);
  return (byte *)0x0;
}

