#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_boss_d.cpp

// 00648400 FUN_00648400
#line 4 "decomp/ST.exe/functions/00648400/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 32 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00649EB0 -> 00648400 @ 00649EF8

   [STPrototypeApplier] Propagated return.
   Evidence: 00648400 returns stored into global 008489B4 @ 00685C3F */

AllocationRecord_00648620 * __cdecl st::fn_00648400(char *text,undefined4 param_2)

{
  int exceptionCode;
  AllocationRecord_0065CD10 *pAVar1;
  InternalExceptionFrame local_4c;
  AnonShape_00648400_5C076F88 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = static_cast<AnonShape_00648400_5C076F88 *>(st::fn_006AAC10(0x85));
    local_8->field_0001 = 0x85;
    local_8->field_0005 = 2;
    st::fn_0072E340(reinterpret_cast<char *>(&local_8->field_0x6),text,0x3f);
    pAVar1 = st::fn_004015E1(text);
    local_8->field_004E = reinterpret_cast<undefined4 *>(pAVar1);
    local_8->field_0052 = param_2;
    g_currentExceptionFrame = local_4c.previous;
    return (AllocationRecord_00648620 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_004020A4(reinterpret_cast<int *>(&local_8));
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x20);
  return nullptr;
}

// 00648530 FUN_00648530
#line 4 "decomp/ST.exe/functions/00648530/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 69 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00648780 -> 00648530 @ 006487F3

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00648530.
   Evidence: exact 133-byte source-parameter copy at 0064857D..0064857F */

AllocationRecord_00648530 * __cdecl st::fn_00648530(AllocationRecord_00648530 *param_1)

{
  int iVar1;
  AllocationRecord_0065CB00 *pAVar1;
  AllocationRecord_00648530 *pAVar3;
  AnonShape_00648530_D39EB612 *pAVar4;
  InternalExceptionFrame local_4c;
  AnonShape_00648530_D39EB612 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = static_cast<AnonShape_00648530_D39EB612 *>(st::fn_006AAC10(0x85));
    pAVar3 = param_1;
    pAVar4 = local_8;
    memmove(pAVar4, pAVar3, 0x85); /* compiler REP MOVS byte copy */
    local_8->field_0001 = 0x85;
    local_8->field_0005 = 2;
    pAVar1 = st::fn_00403BF2(reinterpret_cast<AllocationRecord_0065CB00 *>((&param_1->field_0x84 + local_8->field_0046)));
    local_8->field_004E = reinterpret_cast<undefined4 *>(pAVar1);
    g_currentExceptionFrame = local_4c.previous;
    return (AllocationRecord_00648530 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_004020A4(reinterpret_cast<int *>(&local_8));
  st::fn_006A5E40(iVar1,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x45);
  return nullptr;
}

// 00648620 BossDataPack
#line 4 "decomp/ST.exe/functions/00648620/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 107 | 108 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00649B90 -> 00648620 @ 00649D4A

   [STPrototypeApplier] Propagated return.
   Evidence: 00648620 returns used as parameter 0 of FUN_006809b0 @ 00685CD5 | 00648620 returns used
   as parameter 2 of Library::Ourlib::MFAOBJ::mfAObjSave @ 00648960

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00648620.
   Evidence: exact 133-byte source-parameter copy at 00648676..0064867B */

AllocationRecord_00648620 * __cdecl
st::fn_00648620(AllocationRecord_00648620 *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  int iVar2;
  AllocationRecord_00648620 *pAVar2;
  int iVar4;
  AllocationRecord_00648620 *pAVar3;
  uint uVar7;
  byte *puVar8;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    *param_4 = param_3 + 0x85U;
    pAVar2 = static_cast<AllocationRecord_00648620 *>(st::fn_006AAC10(param_3 + 0x85U));
    pAVar3 = pAVar2;
    memmove(pAVar3, param_1, 0x85); /* compiler REP MOVS byte copy */
    pAVar2->field_0001 = *param_4;
    pAVar2->field_004A = param_3;
    pAVar2->field_0005 = 0;
    uVar7 = pAVar2->field_004A;
    puVar8 = reinterpret_cast<byte *>(&pAVar2->field_0x84);
    memmove(puVar8, param_2, uVar7); /* compiler REP MOVS byte copy */
    pAVar2->field_0046 = st::machine_word_boundary_cast<undefined4>(&pAVar2->field_0x84 + (-0x84 - (int)pAVar2));
    g_currentExceptionFrame = local_4c.previous;
    return pAVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != 0) {
    st::fn_006AB060(&local_8);
  }
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x6b,0,iVar2,st::mutable_c_string("%s"),
                             "BossDataPack");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x6c);
  return nullptr;
}

// 00648780 LoadBossEdit
#line 4 "decomp/ST.exe/functions/00648780/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 127 | 134 | 136 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl st::fn_00648780(int param_1,char *param_2)

{
  int errorCode;
  int iVar2;
  uint *puVar3;
  InternalExceptionFrame local_50;
  AllocationRecord_00648530 *local_c;
  AllocationRecord_00648530 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x7f);
    }
    /* ST_CALLSITE[006487E3]: CALL 0x006f2d90; direct=006F2D90 Library::Ourlib::MFAOBJ::mfAObjLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00648530; signature=__cdecl;pointer:/SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00648530;pointer:/cMf32;pointer:/char;/byte;/int [STUtilityFunctionApplier] heterogeneous_payload_consumer_view; target=006F2D90; signature=__cdecl;pointer:/SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00648530;pointer:/cMf32;pointer:/char;/byte;/int */
    local_8 = reinterpret_cast<AllocationRecord_00648530 *>(st::fn_006F2D90(st::storage_bit_cast<cMf32 *>(param_1),param_2,1,0));
    if (local_8 != nullptr) {
      local_c = st::fn_00404C28(local_8);
      st::fn_004020A4(reinterpret_cast<int *>(&local_8));
    }
    g_currentExceptionFrame = local_50.previous;
    return (undefined4 *)local_c;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x86,0,errorCode,st::mutable_c_string("%s"),
                             "LoadBossEdit");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_004020A4(reinterpret_cast<int *>(&local_8));
  st::fn_004020A4(reinterpret_cast<int *>(&local_c));
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x88);
  return nullptr;
}

// 006488C0 SaveBossEdit
#line 4 "decomp/ST.exe/functions/006488C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 156 | 163 | 166 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_006488C0(int param_1,char *param_2,AllocationRecord_00648620 *param_3,char param_4)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_58;
  uint local_14;
  uint local_10;
  AllocationRecord_0065CD10 *local_c;
  AllocationRecord_00648620 *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;

  iVar2 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar2 == 0) {
    if (((param_1 == 0) || (param_2 == nullptr)) || (param_3->field_0005 != '\x02')) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0x9c);
    }
    /* ST_CALLSITE[0064892F]: CALL 0x00401ebf; direct=00401EBF EventDataPack; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
    local_c = st::fn_00401EBF(*(AllocationRecord_0065CD10 **)&param_3->field_0x4e,&local_14);
    /* ST_CALLSITE[00648941]: CALL 0x00405a24; direct=00405A24 BossDataPack */
    local_8 = st::fn_00405A24(param_3,reinterpret_cast<undefined4 *>(local_c),local_14,&local_10);
    st::fn_00401537(reinterpret_cast<int *>(&local_c));

    st::fn_006F3110(param_1,param_2,reinterpret_cast<byte *>(local_8),local_10,param_4);
    st::fn_004020A4(reinterpret_cast<int *>(&local_8));
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0xa3,0,iVar2,st::mutable_c_string("%s"),
                             "SaveBossEdit");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00401537(reinterpret_cast<int *>(&local_c));
  st::fn_004020A4(reinterpret_cast<int *>(&local_8));
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss_d.cpp"),0xa6);
  return iVar2;
}
