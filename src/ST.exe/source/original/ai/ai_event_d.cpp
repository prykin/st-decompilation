#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_event_d.cpp

// 0065C9E0 FUN_0065c9e0
#line 4 "decomp/ST.exe/functions/0065C9E0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 33 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065C9E0 -> 0072E340 @ 0065CA3B */

undefined4 * __cdecl st::fn_0065C9E0(char *source)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_0065C9E0_147DDF60 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = st::fn_006AAC10(0x49f);
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    st::fn_0072E340(&local_8->field_0x6,source,0x3f);
    pDVar1 = st::fn_006B54F0(nullptr,5,5);
    local_8->field_0456 = &pDVar1->flags;
    pDVar1 = st::fn_006AE290(nullptr,5,0x1b,5);
    local_8->field_0462 = &pDVar1->flags;
    st::fn_00405295((int *)&local_8[1].field_0x6,10);
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00401537((int *)&local_8);
  st::fn_006A5E40(exceptionCode,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x21);
  return nullptr;
}

// 0065CB00 FUN_0065cb00
#line 4 "decomp/ST.exe/functions/0065CB00/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0065CB00.
   Evidence: exact 1183-byte source-parameter copy at 0065CB52..0065CB56 */

AllocationRecord_0065CB00 * __cdecl st::fn_0065CB00(AllocationRecord_0065CB00 *param_1)

{
  int iVar1;
  byte *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  AllocationRecord_0065CB00 *pAVar5;
  uint uVar7;
  AnonShape_0065CB00_C527AFF0 *pAVar8;
  byte *puVar9;
  bool bVar10;
  InternalExceptionFrame local_4c;
  AnonShape_0065CB00_C527AFF0 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = st::fn_006AAC10(0x49f);
    pAVar5 = param_1;
    pAVar8 = local_8;
    memmove(pAVar8, pAVar5, 0x49e); /* compiler REP MOVS byte copy */
    pAVar8 = (AnonShape_0065CB00_C527AFF0 *)((byte *)pAVar8 + 0x49c);
    pAVar5 = (AllocationRecord_0065CB00 *)((byte *)pAVar5 + 0x49c);
    *(undefined1 *)((int)&pAVar8->field_0001 + 1) = *(undefined1 *)((int)&pAVar5->field_0001 + 1);
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    iVar1 = local_8->field_047A;
    if (&local_8->field_046E == nullptr) {
      uVar7 = 0;
    }
    else {
      uVar7 = local_8->field_046E * 5;
    }
    puVar2 = (byte *)(st::fn_006AAC10(uVar7));
    local_8->field_0476 = puVar2;
    if (&local_8->field_046E == nullptr) {
      uVar7 = 0;
    }
    else {
      uVar7 = local_8->field_046E * 5;
    }
    puVar2 = (byte *)(&param_1->field_0x49e + iVar1);
    puVar9 = (byte *)(local_8->field_0476);
    memmove(puVar9, puVar2, uVar7); /* compiler REP MOVS byte copy */
    uVar3 = st::fn_006B0060(nullptr,(uint *)(&param_1->field_0x49e + local_8->field_0466));
    local_8->field_0462 = uVar3;
    puVar4 = st::fn_006C8680
                       (nullptr,(uint *)(&param_1->field_0x49e + local_8->field_045A));
    uVar7 = 0;
    local_8->field_0456 = puVar4;
    iVar1 = local_8->field_0462;
    pAVar5 = (AllocationRecord_0065CB00 *)local_8;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar10 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar10) {
          iVar1 = *(int *)(iVar1 + 8) * uVar7 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(iVar1 + 0xf) != 0) {
          uVar3 = st::fn_006B0060(nullptr,(uint *)(&param_1->field_0x49e + *(int *)(iVar1 + 0x13)));
          *(undefined4 *)(iVar1 + 0xf) = uVar3;
          pAVar5 = (AllocationRecord_0065CB00 *)local_8;
        }
        iVar1 = pAVar5->field_0462;
        uVar7 = uVar7 + 1;
        bVar10 = uVar7 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar7 < (int)*(uint *)(iVar1 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar5;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00401537((int *)&local_8);
  st::fn_006A5E40(iVar1,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x4c);
  return nullptr;
}

// 0065CD10 EventDataPack
#line 4 "decomp/ST.exe/functions/0065CD10/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 137 | 138 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 0065CD10 returns used as parameter 0 of FUN_006809b0 @ 00686342

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0065CD10.
   Evidence: exact 1183-byte source-parameter copy at 0065CE00..0065CE04 */

AllocationRecord_0065CD10 * __cdecl st::fn_0065CD10(AllocationRecord_0065CD10 *param_1,uint *param_2)

{
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
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
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
    iVar2 = st::fn_006C87F0(param_1->field_0456);
    param_1->field_045E = iVar2;
    if (&param_1->field_046E == nullptr) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_1->field_046E * 5;
    }
    local_c = local_c + iVar2 + iVar7;
    *param_2 = local_c + 0x49fU;
    pAVar3 = st::fn_006AAC10(local_c + 0x49fU);
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
          st::fn_006AFFC0(*(uint **)(iVar2 + 0xf),puVar8,&local_c);
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
    st::fn_006AFFC0(*(uint **)&pAVar3->field_0x462,puVar8,&local_c);
    local_8->field_0466 = (int)puVar8 + (-0x49e - (int)local_8);
    puVar8 = (uint *)((int)puVar8 + local_8->field_046A);
    st::fn_006C8840(local_8->field_0456,puVar8,&local_c);
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
    st::fn_006AB060(&local_8);
  }
  iVar7 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_event_d.cpp",0x89,0,iVar2,"%s",
                             "EventDataPack");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x8a);
  return nullptr;
}

// 0065D120 FUN_0065d120
#line 4 "decomp/ST.exe/functions/0065D120/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 183 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 0065D120 returns stored into global 008489CC @ 00685EC8 */

AnonShape_GLOBAL_008489CC_CDF8C3F4 * st::fn_0065D120(void)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_GLOBAL_008489CC_CDF8C3F4 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = st::fn_006AAC10(0x1b);
    *(undefined1 *)local_8 = 0;
    local_8->field_0009 = 0xffff;
    pDVar1 = st::fn_006AE290(nullptr,5,2,5);
    local_8->field_000F = pDVar1;
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00402FE0((int *)&local_8);
  st::fn_006A5E40(exceptionCode,0,"E:\\__titans\\ai\\ai_event_d.cpp",0xb7);
  return nullptr;
}

