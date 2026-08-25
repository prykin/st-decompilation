#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_event_d.cpp

// 0065C9E0 FUN_0065c9e0
#line 4 "decomp/ST.exe/functions/0065C9E0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 33 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065C9E0 -> 0072E340 @ 0065CA3B

   [STPrototypeApplier] Propagated return.
   Evidence: 0065C9E0 returns stored into global 008489BC @ 00686295 */

AllocationRecord_0065CD10 * __cdecl st::fn_0065C9E0(char *source)

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
    local_8 = static_cast<AnonShape_0065C9E0_147DDF60 *>(st::fn_006AAC10(0x49f));
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    st::fn_0072E340((char *)&local_8->field_0x6,source,0x3f);
    pDVar1 = st::fn_006B54F0(nullptr,5,5);
    local_8->field_0456 = &pDVar1->flags;
    pDVar1 = st::fn_006AE290(nullptr,5,0x1b,5);
    local_8->field_0462 = &pDVar1->flags;
    st::fn_00405295((int *)&local_8[1].field_0x6,10);
    g_currentExceptionFrame = local_4c.previous;
    return (AllocationRecord_0065CD10 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00401537((int *)&local_8);
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event_d.cpp"),0x21);
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
  byte *puVar1;
  DArrayTy *pDVar2;
  uint *puVar3;
  AllocationRecord_0065CB00 *pAVar4;
  int iVar5;
  uint uVar7;
  AnonShape_0065CB00_C527AFF0 *pAVar8;
  byte *puVar9;
  bool bVar10;
  InternalExceptionFrame local_4c;
  AnonShape_0065CB00_C527AFF0 *local_8;
  AllocationRecord_0065CB00 *pAVar4_mg0;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = static_cast<AnonShape_0065CB00_C527AFF0 *>(st::fn_006AAC10(0x49f));
    pAVar4_mg0 = param_1;
    pAVar8 = local_8;
    memmove(pAVar8, pAVar4_mg0, 0x49e); /* compiler REP MOVS byte copy */
    pAVar8 = (AnonShape_0065CB00_C527AFF0 *)((byte *)pAVar8 + 0x49c);
    pAVar4_mg0 = (AllocationRecord_0065CB00 *)((byte *)pAVar4_mg0 + 0x49c);
    STField<undefined1>(pAVar8,0x2) =
         STField<undefined1>(pAVar4_mg0,0x2);
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    iVar5 = local_8->field_047A;
    if (&local_8->field_046E == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = st::machine_word_boundary_cast<uint>(local_8->field_046E * 5);
    }
    puVar1 = (byte *)(st::fn_006AAC10(uVar7));
    local_8->field_0476 = st::pointer_boundary_cast<undefined4 *>(puVar1);
    if (&local_8->field_046E == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = st::machine_word_boundary_cast<uint>(local_8->field_046E * 5);
    }
    puVar1 = (byte *)(&param_1->field_0x49e + iVar5);
    puVar9 = (byte *)(local_8->field_0476);
    memmove(puVar9, puVar1, uVar7); /* compiler REP MOVS byte copy */
    pDVar2 = st::fn_006B0060(nullptr,(uint *)(&param_1->field_0x49e + local_8->field_0466));
    local_8->field_0462 = st::machine_word_boundary_cast<undefined4>(pDVar2);
    puVar3 = st::fn_006C8680
                       (nullptr,(uint *)(&param_1->field_0x49e + local_8->field_045A));
    uVar7 = 0;
    local_8->field_0456 = puVar3;
    iVar5 = local_8->field_0462;
    pAVar4 = (AllocationRecord_0065CB00 *)local_8;
    if (0 < STField<int>(iVar5,0xC)) {
      bVar10 = STField<int>(iVar5,0xC) != 0;
      do {
        if (bVar10) {
          iVar5 = STField<int>(iVar5,0x8) * uVar7 + STField<int>(iVar5,0x1C);
        }
        else {
          iVar5 = 0;
        }
        if (STField<int>(iVar5,0xF) != 0) {
          pDVar2 = st::fn_006B0060(nullptr,(uint *)(&param_1->field_0x49e + STField<int>(iVar5,0x13))
                               );
          *(DArrayTy **)(iVar5 + 0xf) = pDVar2;
          pAVar4 = (AllocationRecord_0065CB00 *)local_8;
        }
        iVar5 = pAVar4->field_0462;
        uVar7 = uVar7 + 1;
        bVar10 = uVar7 < STField<uint>(iVar5,0xC);
      } while ((int)uVar7 < (int)STField<uint>(iVar5,0xC));
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00401537((int *)&local_8);
  st::fn_006A5E40(iVar1,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event_d.cpp"),0x4c);
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
  local_EAX_39 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (local_EAX_39 == 0) {
    uVar7 = 0;
    iVar3 = param_1->field_0462;
    if (0 < STField<int>(iVar3,0xC)) {
      bVar14 = STField<int>(iVar3,0xC) != 0;
      do {
        if (bVar14) {
          iVar3 = STField<int>(iVar3,0x8) * uVar7 + STField<int>(iVar3,0x1C);
        }
        else {
          iVar3 = 0;
        }
        iVar8 = STField<int>(iVar3,0xF);
        if (iVar8 != 0) {
          iVar8 = STField<int>(iVar8,0xC) * STField<int>(iVar8,0x8) + 0x1c;
          STField<int>(iVar3,0x17) = iVar8;
          local_c = local_c + iVar8;
        }
        iVar3 = param_1->field_0462;
        uVar7 = uVar7 + 1;
        bVar14 = uVar7 < STField<uint>(iVar3,0xC);
      } while ((int)uVar7 < (int)STField<uint>(iVar3,0xC));
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1->field_0462 + 0xc) * *(int *)(param_1->field_0462 + 8) + 0x1c;
    local_c = local_c + iVar3;
    param_1->field_046A = iVar3;
    iVar2 = st::fn_006C87F0((DArrayTy *)param_1->field_0456);
    param_1->field_045E = iVar2;
    if (&param_1->field_046E == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = st::machine_word_boundary_cast<int>(param_1->field_046E * 5);
    }
    local_c = local_c + iVar2 + iVar3;
    *param_2 = local_c + 0x49fU;
    pAVar4 = static_cast<AnonShape_0065CD10_CB9334E9 *>(st::fn_006AAC10(local_c + 0x49fU));
    pAVar5 = param_1;
    pAVar12 = pAVar4;
    memmove(pAVar12, pAVar5, 0x49e); /* compiler REP MOVS byte copy */
    pAVar12 = (AnonShape_0065CD10_CB9334E9 *)((byte *)pAVar12 + 0x49c);
    pAVar5 = (AllocationRecord_0065CD10 *)((byte *)pAVar5 + 0x49c);
    pAVar12->field_0x2 = STField<undefined1>(pAVar5,0x2);
    uVar7 = 0;
    *(uint *)&pAVar4->field_0x1 = *param_2;
    pAVar4->field_0x5 = 0;
    iVar3 = *(int *)&pAVar4->field_0x462;
    puVar9 = (uint *)&pAVar4[1].field_0x1e;
    local_8 = pAVar4;
    if (0 < STField<int>(iVar3,0xC)) {
      bVar14 = STField<int>(iVar3,0xC) != 0;
      do {
        if (bVar14) {
          iVar3 = STField<int>(iVar3,0x8) * uVar7 + STField<int>(iVar3,0x1C);
        }
        else {
          iVar3 = 0;
        }
        if (*(uint **)(iVar3 + 0xf) != nullptr) {
          st::fn_006AFFC0(*(uint **)(iVar3 + 0xf),puVar9,&local_c);
          iVar8 = (int)puVar9 + (-0x49e - (int)local_8);
          puVar9 = (uint *)((int)puVar9 + STField<int>(iVar3,0x17));
          STField<int>(iVar3,0x13) = iVar8;
          pAVar4 = local_8;
        }
        iVar3 = *(int *)&pAVar4->field_0x462;
        uVar7 = uVar7 + 1;
        bVar14 = uVar7 < STField<uint>(iVar3,0xC);
      } while ((int)uVar7 < (int)STField<uint>(iVar3,0xC));
    }
    st::fn_006AFFC0(*(uint **)&pAVar4->field_0x462,puVar9,&local_c);
    local_8->field_0466 = (int)puVar9 + (-0x49e - (int)local_8);
    puVar9 = (uint *)((int)puVar9 + local_8->field_046A);
    st::fn_006C8840(local_8->field_0456,puVar9,&local_c);
    local_8->field_045A = (int)puVar9 + (-0x49e - (int)local_8);
    puVar10 = (undefined4 *)((int)puVar9 + local_8->field_045E);
    if (&param_1->field_046E == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = st::machine_word_boundary_cast<uint>(param_1->field_046E * 5);
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
    st::fn_006AB060(&local_8);
  }
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_event_d.cpp"),0x89,0,local_EAX_39,
                             st::mutable_c_string("%s"),"EventDataPack");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_39,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event_d.cpp"),0x8a);
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
    local_8 = static_cast<AnonShape_GLOBAL_008489CC_CDF8C3F4 *>(st::fn_006AAC10(0x1b));
    *(undefined1 *)local_8 = 0;
    local_8->field_0009 = 0xffff;
    pDVar1 = st::fn_006AE290(nullptr,5,2,5);
    local_8->field_000F = pDVar1;
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00402FE0((int *)&local_8);
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_event_d.cpp"),0xb7);
  return nullptr;
}

