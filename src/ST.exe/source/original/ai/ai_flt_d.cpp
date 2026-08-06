#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_flt_d.cpp

// 00668180 FUN_00668180
#line 4 "decomp/ST.exe/functions/00668180/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 42 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0068DC80 -> 00668180 @ 0068DE36

   [STPrototypeApplier] Propagated return.
   Evidence: 00668180 returns stored into global 008489C4 @ 00685E0A

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064E300 -> 00668180 @ 0064E399; FUN_0064e300 parameter param_3 | 00683C70 -> 00668180
   @ 00685E05; unproven partial register write at 00685DF5 | 0068DC80 -> 00668180 @ 0068DE36;
   unproven partial register write at 0068DE24

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00683C70 -> 00668180 @ 00685E05; unproven partial register write at 00685DED | 0068DC80
   -> 00668180 @ 0068DE36; literal 32768 at 0068DE2B

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0064E300 -> 00668180 @ 0064E399; FUN_0064e300 parameter param_5 | 00683C70 -> 00668180
   @ 00685E05; unproven partial register write at 00685DE5 | 0068DC80 -> 00668180 @ 0068DE36;
   literal 0 at 0068DE29

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00683C70 -> 00668180 @ 00685E05; unproven partial register write at 00685DDF | 0068DC80
   -> 00668180 @ 0068DE36; unproven partial register write at 0068DE21 */

AnonShape_GLOBAL_008489C4_F7BABFAC * __cdecl
st::fn_00668180(char *text,ushort param_2,ushort param_3,ushort param_4,byte param_5)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_00668180_E8377840 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = st::fn_006AAC10(0x260);
    *(undefined4 *)local_8 = 900;
    *(undefined4 *)&local_8->field_0x14 = 0x260;
    local_8->field_0x18 = 2;
    st::fn_0072E340(&local_8->field_0x1b,text,0x3f);
    local_8->field_0019 = param_2;
    local_8->field_005B = param_3;
    local_8->field_005F = param_4;
    local_8->field_0061 = param_5;
    local_8->field_023F = 0x3fffffff;
    if (local_8->field_01EB == 0) {
      pDVar1 = st::fn_006AE290(nullptr,10,0x2c,10);
      local_8->field_01EB = pDVar1;
    }
    if (local_8->field_0203 == 0) {
      pDVar1 = st::fn_006AE290(nullptr,10,0x14,10);
      local_8->field_0203 = pDVar1;
    }
    if (local_8->field_020F == 0) {
      pDVar1 = st::fn_006AE290(nullptr,10,0xc,10);
      local_8->field_020F = pDVar1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return (AnonShape_GLOBAL_008489C4_F7BABFAC *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00405BCD((int *)&local_8);
  st::fn_006A5E40(exceptionCode,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x2a);
  return nullptr;
}

// 00668330 FUN_00668330
#line 4 "decomp/ST.exe/functions/00668330/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 78 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00668330.
   Evidence: exact 608-byte source-parameter copy at 00668382 */

AllocationRecord_00668330 * __cdecl st::fn_00668330(AllocationRecord_00668330 *param_1)

{
  int iVar1;
  AllocationRecord_00668330 *pAVar2;
  undefined4 uVar3;
  DArrayTy *pDVar4;
  AllocationRecord_00668330 *pAVar5;
  AllocationRecord_00668330 *pAVar6;
  InternalExceptionFrame local_4c;
  AnonShape_00668330_F270680B *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    pAVar2 = st::fn_006AAC10(0x260);
    pAVar5 = param_1;
    pAVar6 = pAVar2;
    memmove(pAVar6, pAVar5, 0x260); /* compiler REP MOVS byte copy */
    iVar1 = 0;
    pAVar2->field_0014 = 0x260;
    pAVar2->field_0018 = 2;
    local_8 = (AnonShape_00668330_F270680B *)pAVar2;
    do {
      if (*(int *)((int)&pAVar2->field_01EB + iVar1) != 0) {
        uVar3 = st::fn_006B0060(nullptr,
                             (uint *)(&param_1->field_0x25f + *(int *)(&pAVar2->field_0x1ef + iVar1)
                                     ));
        *(undefined4 *)((int)&local_8->field_01EB + iVar1) = uVar3;
        pAVar2 = (AllocationRecord_00668330 *)local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x54);
    if (pAVar2->field_01EB == 0) {
      pDVar4 = st::fn_006AE290(nullptr,10,0x2c,10);
      local_8->field_01EB = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00668330 *)local_8;
    }
    if (pAVar2->field_0203 == 0) {
      pDVar4 = st::fn_006AE290(nullptr,10,0x14,10);
      local_8->field_0203 = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00668330 *)local_8;
    }
    if (pAVar2->field_020F == 0) {
      pDVar4 = st::fn_006AE290(nullptr,10,0xc,10);
      local_8->field_020F = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00668330 *)local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00405BCD((int *)&local_8);
  st::fn_006A5E40(iVar1,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x4e);
  return nullptr;
}

// 006684E0 FltDataPack
#line 4 "decomp/ST.exe/functions/006684E0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 117 | 118 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 006684E0 @ 0068608A

   [STPrototypeApplier] Propagated return.
   Evidence: 006684E0 returns used as parameter 0 of FUN_006809b0 @ 006860A4

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_006684E0.
   Evidence: exact 608-byte source-parameter copy at 00668565 */

AllocationRecord_006684E0 * __cdecl st::fn_006684E0(AllocationRecord_006684E0 *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar3;
  AllocationRecord_006684E0 *pAVar4;
  int iVar5;
  uint **ppuVar6;
  AllocationRecord_006684E0 *pAVar7;
  uint *puVar8;
  InternalExceptionFrame local_50;
  int local_c;
  AllocationRecord_006684E0 *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 == 0) {
    iVar3 = 7;
    ppuVar6 = &param_1->field_01EB;
    do {
      puVar8 = *ppuVar6;
      if (puVar8 != nullptr) {
        iVar5 = puVar8[3] * puVar8[2] + 0x1c;
        local_c = local_c + iVar5;
        ppuVar6[2] = (uint *)iVar5;
      }
      ppuVar6 = ppuVar6 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *param_2 = local_c + 0x260U;
    pAVar4 = st::fn_006AAC10(local_c + 0x260U);
    pAVar7 = pAVar4;
    memmove(pAVar7, param_1, 0x260); /* compiler REP MOVS byte copy */
    iVar3 = 0;
    pAVar4->field_0014 = *param_2;
    pAVar4->field_0018 = 0;
    puVar8 = (uint *)&pAVar4->field_0x25f;
    local_8 = pAVar4;
    do {
      puVar1 = *(uint **)((int)&pAVar4->field_01EB + iVar3);
      if (puVar1 != nullptr) {
        st::fn_006AFFC0(puVar1,puVar8,&local_c);
        *(int *)(&local_8->field_0x1ef + iVar3) = (int)puVar8 + (-0x25f - (int)local_8);
        puVar8 = (uint *)((int)puVar8 + *(int *)(&local_8->field_0x1f3 + iVar3));
        pAVar4 = local_8;
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 < 0x54);
    g_currentExceptionFrame = local_50.previous;
    return pAVar4;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  iVar5 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt_d.cpp",0x75,0,iVar3,"%s",
                             "FltDataPack");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x76);
  return nullptr;
}

