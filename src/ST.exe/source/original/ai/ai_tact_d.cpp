#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_tact_d.cpp

// 00690E90 FUN_00690e90
#line 4 "decomp/ST.exe/functions/00690E90/decomp.c"
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
    local_8 = static_cast<AnonShape_00690E90_9F986EB9 *>(st::fn_006AAC10(0x10c));
    *(undefined4 *)local_8 = 0x38e;
    *(undefined4 *)&local_8->field_0x14 = 0x10c;
    STField<undefined1>(local_8,0x18) = 2;
    st::fn_0072E340((char *)&local_8->field_0x1b,source,0x3f);
    local_8->field_0019 = param_2;
    *(undefined2 *)&local_8->field_0x5c = param_3;
    if (local_8->field_0085 == 0) {
      pDVar1 = st::fn_006AE290(nullptr,10,8,10);
      local_8->field_0085 = st::machine_word_boundary_cast<undefined4>(pDVar1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00402E00((int *)&local_8);
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact_d.cpp"),0x21);
  return nullptr;
}

// 00690FC0 FUN_00690fc0
#line 4 "decomp/ST.exe/functions/00690FC0/decomp.c"
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
  AllocationRecord_00690FC0 *pAVar1;
  DArrayTy *pDVar2;
  AllocationRecord_00668330 *pAVar3;
  int iVar4;
  AllocationRecord_00690FC0 *pAVar5;
  AllocationRecord_00668330 *pAVar6;
  AllocationRecord_00690FC0 *pAVar7;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  byte *local_c;
  AnonShape_00690FC0_955C4112 *local_8;

  local_8 = nullptr;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    pAVar1 = static_cast<AllocationRecord_00690FC0 *>(st::fn_006AAC10(0x10c));
    pAVar5 = param_1;
    pAVar7 = pAVar1;
    memmove(pAVar7, pAVar5, 0x10c); /* compiler REP MOVS byte copy */
    iVar4 = 0;
    pAVar1->field_0014 = 0x10c;
    pAVar1->field_0018 = 2;
    local_8 = (AnonShape_00690FC0_955C4112 *)pAVar1;
    do {
      if (STObjectAtByteOffset(pAVar1, iVar4).field_0085 != 0) {
        pDVar2 = st::fn_006B0060(nullptr,
                              (uint *)(&param_1->field_0x10b + *(int *)(&pAVar1->field_0x89 + iVar4)
                                      ));
        *(DArrayTy **)((int)&local_8->field_0085 + iVar4) = pDVar2;
        pAVar1 = (AllocationRecord_00690FC0 *)local_8;
      }
      iVar4 = iVar4 + 0xc;
    } while (iVar4 < 0x60);
    if (pAVar1->field_0085 == 0) {
      pDVar2 = st::fn_006AE290(nullptr,10,8,10);
      local_8->field_0085 = &pDVar2->flags;
      pAVar1 = (AllocationRecord_00690FC0 *)local_8;
    }
    if (0 < (short)pAVar1->field_0105) {
      *(undefined4 *)(pAVar1->field_0085 + 0xc) = 0;
      pAVar6 = (AllocationRecord_00668330 *)(&param_1->field_0x10b + *(int *)&param_1->field_0x107);
      iVar4 = 0;
      pAVar1 = (AllocationRecord_00690FC0 *)local_8;
      if (0 < local_8->field_0105) {
        do {
          local_10 = 0;
          local_c = nullptr;
          pAVar3 = st::fn_00402CA7(pAVar6);
          if (pAVar3 == nullptr) {
            local_c = nullptr;
          }
          else {
            local_c = &pAVar3[-1].field_0x240;
          }
          st::fn_006AE1C0((DArrayTy *)local_8->field_0085,&local_10);
          pAVar6 = (AllocationRecord_00668330 *)(&pAVar6->field_0x0 + pAVar6->field_0014);
          iVar4 = iVar4 + 1;
          pAVar1 = (AllocationRecord_00690FC0 *)local_8;
        } while (iVar4 < local_8->field_0105);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return pAVar1;
  }
  g_currentExceptionFrame = local_54.previous;
  st::fn_00402E00((int *)&local_8);
  st::fn_006A5E40(iVar1,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact_d.cpp"),0x51);
  return nullptr;
}

// 00691190 TactDataPack
#line 4 "decomp/ST.exe/functions/00691190/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 140 | 141 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 00691190 returns used as parameter 0 of FUN_006809b0 @ 00685B79 */

byte * __cdecl st::fn_00691190(undefined4 *param_1,uint *param_2)

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
  iVar2 = st::fn_0072D7F0(local_68.jumpBuffer,0);
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
    pAVar2 = static_cast<AnonShape_00691190_783A1B6D *>(st::fn_006AAC10(local_c + 0x10cU));
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
        st::fn_006AFFC0(*(uint **)(&pAVar2->field_0x85 + iVar10),puVar12,&local_c);
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
            local_1c = st::fn_004014C4(pAVar3,&local_10);
            local_8 = static_cast<AnonShape_00691190_783A1B6D *>(st::fn_006ACF50(local_8,st::machine_word_boundary_cast<uint>(local_8->field_0014 + local_10)));
            pAVar3 = local_1c;
            puVar8 = (byte *)(&local_8[1].field_0x3 + iVar7);
            memmove(puVar8, pAVar3, local_10); /* compiler REP MOVS byte copy */
            iVar7 = iVar7 + local_10;
            local_8->field_0014 = st::machine_word_boundary_cast<uint>(local_8->field_0014 + local_10);
            local_8->field_0105 = local_8->field_0105 + 1;
            local_18 = iVar7;
            if (local_1c != nullptr) {
              st::fn_006AB060(&local_1c);
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
    st::fn_006AB060(&local_8);
  }
  if (local_14 != 0) {
    st::fn_006AB060(&local_14);
  }
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_tact_d.cpp"),0x8c,0,iVar2,st::mutable_c_string("%s"),
                             "TactDataPack");
  if (iVar9 == 0) {
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_tact_d.cpp"),0x8d);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

