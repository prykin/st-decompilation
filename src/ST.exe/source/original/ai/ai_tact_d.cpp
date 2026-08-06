#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_tact_d.cpp

// 00690E90 FUN_00690e90
#line 1 "decomp/ST.exe/functions/00690E90/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 33 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00690E90 -> 0072E340 @ 00690EF8 */

undefined4 * __cdecl st::fn_00690E90(char *source,undefined2 param_2,undefined2 param_3)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_00690E90_9F986EB9 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = st::fn_006AAC10(0x10c);
    *(undefined4 *)local_8 = 0x38e;
    *(undefined4 *)&local_8->field_0x14 = 0x10c;
    *(undefined1 *)((int)&local_8->field_0017 + 1) = 2;
    st::fn_0072E340(&local_8->field_0x1b,source,0x3f);
    local_8->field_0019 = param_2;
    *(undefined2 *)&local_8->field_0x5c = param_3;
    if (local_8->field_0085 == 0) {
      pDVar1 = st::fn_006AE290(nullptr,10,8,10);
      local_8->field_0085 = pDVar1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00402E00((int *)&local_8);
  st::fn_006A5E40(exceptionCode,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x21);
  return nullptr;
}

// 00690FC0 FUN_00690fc0
#line 1 "decomp/ST.exe/functions/00690FC0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 81 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00690FC0.
   Evidence: exact 268-byte source-parameter copy at 00691012 */

AllocationRecord_00690FC0 * __cdecl st::fn_00690FC0(AllocationRecord_00690FC0 *param_1)

{
  int iVar1;
  AllocationRecord_00690FC0 *pAVar2;
  undefined4 uVar3;
  DArrayTy *pDVar4;
  AllocationRecord_00668330 *pAVar5;
  AllocationRecord_00690FC0 *pAVar6;
  AllocationRecord_00668330 *pAVar7;
  AllocationRecord_00690FC0 *pAVar8;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined1 *local_c;
  AnonShape_00690FC0_955C4112 *local_8;

  local_8 = nullptr;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    pAVar2 = st::fn_006AAC10(0x10c);
    pAVar6 = param_1;
    pAVar8 = pAVar2;
    memmove(pAVar8, pAVar6, 0x10c); /* compiler REP MOVS byte copy */
    iVar1 = 0;
    pAVar2->field_0014 = 0x10c;
    pAVar2->field_0018 = 2;
    local_8 = (AnonShape_00690FC0_955C4112 *)pAVar2;
    do {
      if (*(int *)((int)&pAVar2->field_0085 + iVar1) != 0) {
        uVar3 = st::fn_006B0060(nullptr,
                             (uint *)(&param_1->field_0x10b + *(int *)(&pAVar2->field_0x89 + iVar1))
                            );
        *(undefined4 *)((int)&local_8->field_0085 + iVar1) = uVar3;
        pAVar2 = (AllocationRecord_00690FC0 *)local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x60);
    if (pAVar2->field_0085 == 0) {
      pDVar4 = st::fn_006AE290(nullptr,10,8,10);
      local_8->field_0085 = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00690FC0 *)local_8;
    }
    if (0 < (short)pAVar2->field_0105) {
      *(undefined4 *)(pAVar2->field_0085 + 0xc) = 0;
      pAVar7 = (AllocationRecord_00668330 *)(&param_1->field_0x10b + *(int *)&param_1->field_0x107);
      iVar1 = 0;
      pAVar2 = (AllocationRecord_00690FC0 *)local_8;
      if (0 < local_8->field_0105) {
        do {
          local_10 = 0;
          local_c = nullptr;
          pAVar5 = st::fn_00402CA7(pAVar7);
          if (pAVar5 == nullptr) {
            local_c = nullptr;
          }
          else {
            local_c = &pAVar5[-1].field_0x240;
          }
          st::fn_006AE1C0((DArrayTy *)local_8->field_0085,&local_10);
          pAVar7 = (AllocationRecord_00668330 *)(&pAVar7->field_0x0 + pAVar7->field_0014);
          iVar1 = iVar1 + 1;
          pAVar2 = (AllocationRecord_00690FC0 *)local_8;
        } while (iVar1 < local_8->field_0105);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return pAVar2;
  }
  g_currentExceptionFrame = local_54.previous;
  st::fn_00402E00((int *)&local_8);
  st::fn_006A5E40(iVar1,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x51);
  return nullptr;
}

// 00691190 TactDataPack
#line 1 "decomp/ST.exe/functions/00691190/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 140 | 141 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 00691190 returns used as parameter 0 of FUN_006809b0 @ 00685B79 */

byte * __cdecl st::fn_00691190(undefined4 *param_1,uint *param_2)

{
  int iVar2;
  AnonShape_00691190_783A1B6D *pAVar3;
  AllocationRecord_006684E0 *pAVar4;
  byte *pbVar5;
  int *piVar6;
  byte *puVar8;
  int iVar9;
  AnonShape_00691190_783A1B6D *pAVar10;
  uint *puVar11;
  bool bVar12;
  InternalExceptionFrame local_68;
  int *local_24;
  uint local_20;
  AllocationRecord_006684E0 *local_1c;
  int local_18;
  void *local_14;
  uint local_10;
  int local_c;
  AnonShape_00691190_783A1B6D *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_14 = nullptr;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar2 = st::fn_0072D7F0(local_68.jumpBuffer,0);
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
    pAVar3 = st::fn_006AAC10(local_c + 0x10cU);
    puVar8 = (byte *)(param_1);
    pAVar10 = pAVar3;
    for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar10 = *puVar8;
      puVar8 = (byte *)(puVar8 + 1);
      pAVar10 = (AnonShape_00691190_783A1B6D *)&pAVar10->field_0x4;
    }
    iVar9 = 0;
    pAVar3->field_0014 = *param_2;
    pAVar3->field_0x18 = 0;
    puVar11 = (uint *)&pAVar3[1].field_0x3;
    iVar2 = local_18;
    local_8 = pAVar3;
    do {
      if (*(uint **)(&pAVar3->field_0x85 + iVar9) != nullptr) {
        st::fn_006AFFC0(*(uint **)(&pAVar3->field_0x85 + iVar9),puVar11,&local_c);
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
        bVar12 = *(int *)(iVar9 + 0xc) != 0;
        do {
          if (bVar12) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar9 = *(int *)(iVar9 + 8) * local_20 + *(int *)(iVar9 + 0x1c);
          }
          else {
            iVar9 = 0;
          }
          if (*(int *)(iVar9 + 4) == 0) {
            pAVar4 = nullptr;
          }
          else {
            pAVar4 = (AllocationRecord_006684E0 *)(*(int *)(iVar9 + 4) + 0x20);
          }
          if (pAVar4 != nullptr) {
            local_1c = st::fn_004014C4(pAVar4,&local_10);
            local_8 = st::fn_006ACF50(local_8,local_8->field_0014 + local_10);
            pAVar4 = local_1c;
            puVar8 = (byte *)(&local_8[1].field_0x3 + iVar2);
            memmove(puVar8, pAVar4, local_10); /* compiler REP MOVS byte copy */
            iVar2 = iVar2 + local_10;
            local_8->field_0014 = local_8->field_0014 + local_10;
            local_8->field_0105 = local_8->field_0105 + 1;
            local_18 = iVar2;
            if (local_1c != nullptr) {
              st::fn_006AB060(&local_1c);
            }
          }
          local_20 = local_20 + 1;
          iVar9 = *local_24;
          bVar12 = local_20 < *(uint *)(iVar9 + 0xc);
          pAVar3 = local_8;
        } while ((int)local_20 < (int)*(uint *)(iVar9 + 0xc));
      }
    }
    g_currentExceptionFrame = local_68.previous;
    *param_2 = pAVar3->field_0014;
    return (byte *)pAVar3;
  }
  g_currentExceptionFrame = local_68.previous;
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  if (local_14 != nullptr) {
    st::fn_006AB060(&local_14);
  }
  iVar9 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_tact_d.cpp",0x8c,0,iVar2,"%s",
                             "TactDataPack");
  if (iVar9 == 0) {
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x8d);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

