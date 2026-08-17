#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 157 | 266 | 268 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateAi(void)

{
  char cVar1;
  int iVar3;
  char *pcVar7;
  int iVar12;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  cMf32 *pcVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  BulkInitializedRecord_008087C7 *pBVar10;
  char *pcVar11;
  int iVar13;
  InternalExceptionFrame local_64;
  char *local_20;
  uint local_1c;
  BulkInitializedRecord_008087C7 *local_18;
  int local_14;
  char *local_10;
  cMf32 *local_c;
  AnonShape_00648C10_30A1BBFD *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_10 = nullptr;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\ai\\ai_creat.cpp",0x10a,0,iVar3,"%s",
                                "CreateAi");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_creat.cpp",0x10c);
    return;
  }
  if (g_playSystem_00802A38 == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x9d);
  }
  if (DAT_0080879c == 0) {
    switch(DAT_008087a0 & 0xff) {
    case 1:
    case 4:
    case 6:
    case 7:
    case 0xd:
    case 0xe:
    case 0x13:
      local_c = g_cMf32_0080675C;
      break;
    case 3:
    case 8:
      if (DAT_0080ed12 == nullptr) {
        if (DAT_0080c52a != 0) {
          thunk_FUN_006766c0();
        }
      }
      else {
        DAT_0080c52a = *DAT_0080ed12;
        piVar7 = DAT_0080ed12 + 0x101;
        piVar9 = (int *)&g_packedRecords_A62x8[DAT_0080874d].field_0x2eb;
        memmove(piVar9, piVar7, 0x14); /* compiler REP MOVS byte copy */
        iVar13 = 0;
        piVar7 = DAT_0080ed12 + 0x106;
        piVar9 = &g_packedRecords_A62x8[DAT_0080874d].field376_0x2ff;
        memmove(piVar9, piVar7, 0x14); /* compiler REP MOVS byte copy */
        iVar13 = 0;
        piVar7 = DAT_0080ed12 + 0x10b;
        piVar9 = &g_packedRecords_A62x8[DAT_0080874d].field410_0x327;
        memmove(piVar9, piVar7, 0x26c); /* compiler REP MOVS byte copy */
        iVar13 = 0;
        piVar7 = DAT_0080ed12 + 0x1a6;
        piVar9 = &g_packedRecords_A62x8[DAT_0080874d].field1024_0x593;
        memmove(piVar9, piVar7, 0x1a8); /* compiler REP MOVS byte copy */
        iVar13 = 0;
        piVar7 = DAT_0080ed12 + 0x210;
        piVar9 = (int *)&g_packedRecords_A62x8[DAT_0080874d].field1445_0x73b;
        memmove(piVar9, piVar7, 0x9b); /* compiler REP MOVS byte copy */
        if (DAT_0080ed12 != nullptr) {
          FreeAndNull(&DAT_0080ed12);
          local_c = g_cMf32_00806754;
          break;
        }
      }
    case 2:
    case 5:
    case 0xf:
      local_c = g_cMf32_00806754;
    }
  }
  else {
    local_c = g_cMf32_00806754;
  }
  pcVar6 = local_c;
  if (local_c != nullptr) {
    /* ST_CALLSITE[006491C4]: CALL 0x00403f2b; direct=00403F2B CreateArbiter */
    CreateArbiter((int)local_c,&DAT_00809960);
    local_1c = 0;
    local_18 = g_bulkInitializedRecords_008087C7;
    do {
      pBVar10 = local_18;
      uVar3 = local_1c;
      if (((local_18->field_0022 != 0xff) && (local_18->field_0021 != 0)) &&
         ((*(char *)local_18 == '\x01' || (DAT_0080879c != 0)))) {
        if (DAT_0080879c == 0) {
          switch(DAT_008087a0 & 0xff) {
          case 1:
          case 2:
          case 4:
          case 5:
          case 6:
          case 7:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x13:
            local_10 = &local_18->field_0x1;
            break;
          case 3:
          case 8:
            uVar4 = 0;
            iVar13 = 3;
            pcVar7 = FUN_006f2c00(PTR_s_STRATEG_0079d668,1,local_1c);
            goto LAB_00649255;
          }
        }
        else {
          iVar13 = 2;
          pcVar7 = PTR_s_AIPLAYER_0079d660;
          uVar4 = local_1c;
LAB_00649255:
          local_10 = FUN_006f2c00(pcVar7,iVar13,uVar4);
        }
        if ((local_10 != nullptr) &&
           (local_8 = (AnonShape_00648C10_30A1BBFD *)
                      /* ST_CALLSITE[00649271]: CALL 0x004012ad; direct=004012AD LoadStrategData */
                      LoadStrategData((int)pcVar6,local_10,nullptr),
           local_8 != nullptr)) {
          local_14 = 0;
          if (DAT_00808aaf != 0) {
            pcVar5 = &DAT_00808af6;
            do {
              if ((pcVar5[-2] == pBVar10->field_0022) && (*pcVar5 == '\0')) {
                uVar3 = 0xffffffff;
                local_20 = pcVar5 + -0x46;
                pcVar8 = &local_8->field_0x1b;
                do {
                  pcVar11 = pcVar8;
                  if (uVar3 == 0) break;
                  uVar3 = uVar3 - 1;
                  pcVar11 = pcVar8 + 1;
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar11;
                } while (cVar1 != '\0');
                uVar3 = ~uVar3;
                pcVar8 = pcVar11 + -uVar3;
                pcVar11 = local_20;
                memmove(pcVar11, pcVar8, uVar3); /* compiler REP MOVS byte copy */
              }
              local_14 = local_14 + 1;
              pcVar5 = pcVar5 + 0x9c;
              uVar3 = local_1c;
              pBVar10 = local_18;
            } while (local_14 < (int)(uint)DAT_00808aaf);
          }
          /* ST_CALLSITE[006492F0]: CALL 0x004018a7; direct=004018A7 StartStrateg */
          StartStrateg(local_8,uVar3);
          FreeAndNull(&local_8);
        }
      }
      local_18 = pBVar10 + 1;
      local_1c = uVar3 + 1;
      pcVar6 = local_c;
    } while ((int)local_18 < 0x808a4f);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

