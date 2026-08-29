#include "st/generated.hpp"
// Generated translation unit: source/original/ai/Ai_lex.cpp

// 00672B60 FUN_00672b60
#line 4 "decomp/ST.exe/functions/00672B60/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\Ai_lex.c
   Diagnostic line evidence: 231 | 253 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006736F0 -> 00672B60 @ 00673B35 */

int st::fn_00672B60(char *param_1,RecoveredGlobalRecordView_0081194C *param_2)

{
  char cVar1;
  int *piVar2;
  int exceptionCode;
  char *pcVar3_mg0;
  char *pcVar3_mg1;
  char *pcVar3_mg2;
  uint uVar3;
  byte *pbVar5;
  byte *pbVar6;
  InternalExceptionFrame local_60;
  int *local_1c;
  int local_18;
  short *local_14;
  short *local_10;
  short *local_c;
  byte *local_8;
  char *pcVar3_mg3;

  local_c = nullptr;
  local_10 = nullptr;
  local_14 = nullptr;
  local_8 = nullptr;
  if (DAT_00811958 == 0) {
    DAT_00857540 = 0;
    DAT_00811908 = 0;
    DAT_007d2d24 = 0x600;
  }

  local_1c = static_cast<int *>(st::fn_006AAC10(0x30));
  if (local_1c == nullptr) {
    return -2;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;

  exceptionCode = st::fn_0072D7F0(local_60.jumpBuffer,0);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_60.previous;
    st::fn_006A5E90(local_c);
    st::fn_006A5E90(local_10);
    st::fn_006A5E90(local_14);
    if (PTR_0085753c == nullptr) {
      st::fn_006A5E90(reinterpret_cast<short *>(local_8));
    }
    piVar2 = local_1c;
    st::fn_006A5E90((short *)local_1c[6]);
    st::fn_006A5E90((short *)piVar2[0xb]);
    st::fn_006A5E90((short *)piVar2[7]);
    st::fn_006A5E90(reinterpret_cast<short *>(piVar2));
    st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\Ai_lex.c"),0xfd);
    return exceptionCode;
  }
  if (PTR_0085755c == nullptr) {

    local_c = static_cast<short *>(st::fn_006AAC70(0x401));
    *(char *)local_c = '\0';
  }
  if (PTR_00857528 == nullptr) {

    local_10 = static_cast<short *>(st::fn_006AAC70(0x401));
    *(char *)local_10 = '\0';
  }
  if (PTR_00811948 == nullptr) {

    local_14 = static_cast<short *>(st::fn_006AAC70(0x401));
    *(char *)local_14 = '\0';
  }
  if (PTR_0085753c == nullptr) {

    local_8 = (byte *)st::fn_006AAC70(0x105);
    *local_8 = 0;
  }
  else {
    local_8 = PTR_0085753c;
  }
  piVar2 = local_1c;
  local_1c[1] = DAT_00857560;
  local_1c[2] = (int)PTR_0081194c;
  pcVar3_mg0 = st::fn_006C49B0(PTR_00857528);
  piVar2[6] = (int)pcVar3_mg0;
  pcVar3_mg1 = st::fn_006C49B0(PTR_00811948);
  piVar2[0xb] = (int)pcVar3_mg1;
  pcVar3_mg2 = st::fn_006C49B0(reinterpret_cast<char *>(PTR_0085753c));
  piVar2[7] = (int)pcVar3_mg2;
  PTR_0081194c = param_2;
  local_18 = 0;
  if (param_1 != nullptr) {
    /* ST_CALLSITE[00672C93]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    local_18 = (**(code **)param_2)(param_1);
    if (local_18 == 0) {
      st::fn_006A5E40
                (-10,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\Ai_lex.c"),0xe7);
    }
    else {
      uVar3 = 0xffffffff;
      do {
        pcVar3_mg3 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar3_mg3 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar3_mg3;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pbVar5 = reinterpret_cast<byte *>((pcVar3_mg3 + -uVar3));
      pbVar6 = local_8;
      memmove(pbVar6, pbVar5, uVar3); /* compiler REP MOVS byte copy */
    }
  }
  if (PTR_0085755c == nullptr) {
    PTR_0085755c = reinterpret_cast<char *>(local_c);
  }
  if (PTR_00857528 == nullptr) {
    PTR_00857528 = reinterpret_cast<char *>(local_10);
  }
  if (PTR_00811948 == nullptr) {
    PTR_00811948 = reinterpret_cast<char *>(local_14);
  }
  if (PTR_0085753c == nullptr) {
    PTR_0085753c = local_8;
  }
  DAT_00857560 = local_18;
  g_currentExceptionFrame = local_60.previous;
  piVar2[9] = (int)PTR_00857548;
  piVar2[10] = DAT_0085754c;
  piVar2[8] = DAT_00857554;
  piVar2[3] = DAT_007d2d24;
  piVar2[4] = DAT_007d2d18;
  piVar2[5] = DAT_00811954;
  *piVar2 = 0;
  DAT_007d2d24 = DAT_007d2d24 & 0xffffff6d | 1;
  DAT_00811914 = 1;
  DAT_00857558 = 0;
  DAT_00857554 = 0;
  DAT_0081190c = 0;
  DAT_00811954 = DAT_007d2d18;
  DAT_007d2d18 = 0x84e;
  *piVar2 = (int)DAT_00811958;
  DAT_00811958 = st::machine_word_boundary_cast<undefined4>(piVar2);
  return 0;
}
