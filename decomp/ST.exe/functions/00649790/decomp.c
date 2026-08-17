#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 353 | 359 | 360 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * CreatePlrDataForBO(void)

{
  byte stack_bytes_neg_494[0x318]; /* exact EBP-relative stack object */
  char cVar1;
  int iVar3;
  int iVar4;
  undefined4 *puVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar10;
  char *pcVar11;
  char local_390 [532];
  char local_17c [260];
  InternalExceptionFrame local_78;
  int local_34 [6];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  AllocationRecord_0065CD10 *local_10;
  AllocationRecord_0067D3B0 *local_c;
  AllocationRecord_0067D3B0 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_10 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    thunk_FUN_0065d0f0((int *)&local_10);
    thunk_FUN_0067d160((int *)&local_8);
    thunk_FUN_0067d160((int *)&local_c);
    iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_creat.cpp",0x167,0,iVar3,"%s",
                               "CreatePlrDataForBO");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_creat.cpp",0x168);
    return nullptr;
  }
  memset(local_34, 0, 0x18); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(stack_bytes_neg_494, 0, 0x318); /* compiler bulk-zero initialization */
  uVar6 = 0xffffffff;
  pcVar8 = &CHAR_00h_00807680;
  do {
    pcVar11 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar11 + -uVar6;
  pcVar11 = local_390;
  memmove(pcVar11, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar8 = PTR_DAT_0079d65c;
  do {
    pcVar11 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar8 = local_390;
  do {
    pcVar10 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar8 = pcVar11 + -uVar6;
  pcVar11 = pcVar10 + -1;
  memmove(pcVar11, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar8 = &CHAR_00h_00807680;
  do {
    pcVar11 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar11 + -uVar6;
  pcVar11 = local_17c;
  memmove(pcVar11, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar8 = PTR_DAT_0079d65c;
  do {
    pcVar11 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar8 = local_17c;
  do {
    pcVar10 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar8 = pcVar11 + -uVar6;
  pcVar11 = pcVar10 + -1;
  memmove(pcVar11, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar8 = "BO_Opponent_00.stg";
  do {
    pcVar11 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar8 = local_17c;
  do {
    pcVar10 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar8 = pcVar11 + -uVar6;
  pcVar11 = pcVar10 + -1;
  memmove(pcVar11, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  local_8 = (AllocationRecord_0067D3B0 *)
            thunk_FUN_00683c70(local_17c,(AnonShape_00683C70_22193481 *)stack_bytes_neg_494,&local_1c,
                               local_34,nullptr);
  if (local_8 != nullptr) {
    /* ST_CALLSITE[006498F3]: CALL 0x00401ebf; direct=00401EBF EventDataPack */
    local_10 = EventDataPack(*(AllocationRecord_0065CD10 **)&local_8->field_0x106,&local_14);
    /* ST_CALLSITE[00649908]: CALL 0x00405204; direct=00405204 PlrDataPack */
    local_c = PlrDataPack(local_8,(undefined4 *)local_10,local_14,&local_18);
    thunk_FUN_0065d0f0((int *)&local_10);
    thunk_FUN_0067d160((int *)&local_8);
    g_currentExceptionFrame = local_78.previous;
    return (undefined4 *)local_c;
  }
  RaiseInternalException
            (local_34[0],g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x161);
  g_currentExceptionFrame = local_78.previous;
  return (undefined4 *)local_c;
}

