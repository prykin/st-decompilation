#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 137 | 138 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl EventDataPack(AnonShape_0065CD10_BA40DE58 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  AnonShape_0065CD10_CB9334E9 *pAVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  AnonShape_0065CD10_BA40DE58 *pAVar9;
  undefined4 *puVar10;
  AnonShape_0065CD10_CB9334E9 *pAVar11;
  undefined4 *puVar12;
  bool bVar13;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_0065CD10_CB9334E9 *local_8;

  local_8 = (AnonShape_0065CD10_CB9334E9 *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    uVar5 = 0;
    iVar2 = param_1->field_0462;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar13 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar13) {
          iVar2 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        iVar6 = *(int *)(iVar2 + 0xf);
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 0xc) * *(int *)(iVar6 + 8) + 0x1c;
          *(int *)(iVar2 + 0x17) = iVar6;
          local_c = local_c + iVar6;
        }
        iVar2 = param_1->field_0462;
        uVar5 = uVar5 + 1;
        bVar13 = uVar5 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar5 < (int)*(uint *)(iVar2 + 0xc));
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(param_1->field_0462 + 0xc) * *(int *)(param_1->field_0462 + 8) + 0x1c;
    local_c = local_c + iVar2;
    param_1->field_046A = iVar2;
    iVar2 = FUN_006c87f0(param_1->field_0456);
    param_1->field_045E = iVar2;
    if (&param_1->field_046E == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_1->field_046E * 5;
    }
    local_c = local_c + iVar2 + iVar6;
    *param_2 = local_c + 0x49fU;
    pAVar3 = (AnonShape_0065CD10_CB9334E9 *)Library::DKW::LIB::FUN_006aac10(local_c + 0x49fU);
    pAVar9 = param_1;
    pAVar11 = pAVar3;
    for (iVar2 = 0x127; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar11 = *(undefined4 *)pAVar9;
      pAVar9 = (AnonShape_0065CD10_BA40DE58 *)&pAVar9->field_0x4;
      pAVar11 = (AnonShape_0065CD10_CB9334E9 *)&pAVar11->field_0x4;
    }
    *(undefined2 *)pAVar11 = *(undefined2 *)pAVar9;
    pAVar11->field_0x2 = pAVar9->field_0x2;
    uVar5 = 0;
    *(uint *)&pAVar3->field_0x1 = *param_2;
    pAVar3->field_0x5 = 0;
    iVar2 = *(int *)&pAVar3->field_0x462;
    puVar7 = (uint *)&pAVar3[1].field_0x1e;
    local_8 = pAVar3;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar13 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar13) {
          iVar2 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (*(uint **)(iVar2 + 0xf) != (uint *)0x0) {
          FUN_006affc0(*(uint **)(iVar2 + 0xf),puVar7,&local_c);
          iVar6 = (int)puVar7 + (-0x49e - (int)local_8);
          puVar7 = (uint *)((int)puVar7 + *(int *)(iVar2 + 0x17));
          *(int *)(iVar2 + 0x13) = iVar6;
          pAVar3 = local_8;
        }
        iVar2 = *(int *)&pAVar3->field_0x462;
        uVar5 = uVar5 + 1;
        bVar13 = uVar5 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar5 < (int)*(uint *)(iVar2 + 0xc));
    }
    FUN_006affc0(*(uint **)&pAVar3->field_0x462,puVar7,&local_c);
    local_8->field_0466 = (int)puVar7 + (-0x49e - (int)local_8);
    puVar7 = (uint *)((int)puVar7 + local_8->field_046A);
    FUN_006c8840(local_8->field_0456,puVar7,&local_c);
    local_8->field_045A = (int)puVar7 + (-0x49e - (int)local_8);
    puVar8 = (undefined4 *)((int)puVar7 + local_8->field_045E);
    if (&param_1->field_046E == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1->field_046E * 5;
    }
    puVar10 = param_1->field_0476;
    puVar12 = puVar8;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    local_8->field_047A = (undefined1 *)((int)puVar8 + (-0x49e - (int)local_8));
    local_8->field_0476 = 0;
    g_currentExceptionFrame = local_50.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (AnonShape_0065CD10_CB9334E9 *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar6 = ReportDebugMessage(s_E____titans_ai_ai_event_d_cpp_007d2b4c,0x89,0,iVar2,&DAT_007a4ccc,
                             s_EventDataPack_007d2b70);
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_event_d_cpp_007d2b4c,0x8a);
  return (undefined4 *)0x0;
}

