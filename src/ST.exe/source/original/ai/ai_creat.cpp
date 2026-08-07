#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_creat.cpp

// 00648AB0 LoadStrategData
#line 4 "decomp/ST.exe/functions/00648AB0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 41 | 55 | 58 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

ushort * __cdecl st::fn_00648AB0(int param_1,char *param_2,int *param_3)

{
  int iVar2;
  int iVar3;
  ushort *puVar4;
  InternalExceptionFrame local_50;
  ushort *local_c;
  ushort *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == nullptr)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x29);
    }
    local_c = st::fn_006F2D90((cMf32 *)param_1,param_2,1,0);
    if ((local_c != nullptr) && (local_8 = local_c, param_3 != nullptr)) {
      iVar2 = st::fn_006F2FB0(param_1,param_2,1);
      *param_3 = iVar2;
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x37,0,iVar2,"%s",
                             "LoadStrategData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00402E05((int *)&local_c);
  if ((local_8 != nullptr) && (local_8 != local_c)) {
    st::fn_006AB060(&local_8);
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\ai\\ai_creat.cpp",0x3a);
  return nullptr;
}

// 00648C10 StartStrateg
#line 4 "decomp/ST.exe/functions/00648C10/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 73 | 95 | 97 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00648FE0 -> 00648C10 @ 006492F0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0 */

void __cdecl st::fn_00648C10(AnonShape_00648C10_30A1BBFD *strategData,uint param_2)

{
  int errorCode;
  AiPlrClassTy *pAVar2;
  int iVar3;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_00648C10_30A1BBFD *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    if ((((g_playSystem_00802A38 == nullptr) ||
         (strategData == nullptr)) || (7 < param_2)) ||
       (7 < g_bulkInitializedRecords_008087C7[param_2].field_0022)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x49);
    }
    pAVar2 = st::fn_00401DC5((char)param_2);
    if (pAVar2 != nullptr) {
      st::fn_004015D2(param_2);
    }
    local_8 = strategData;
    *(uint *)((int)&strategData->field_0002 + 2) = param_2;
    strategData->field_0067 = (short)g_bulkInitializedRecords_008087C7[param_2].field_0024;
    strategData->field_0069 = (short)g_bulkInitializedRecords_008087C7[param_2].field_0028;
    strategData->field_006B = (short)g_bulkInitializedRecords_008087C7[param_2].field_002C;
    st::fn_006E6200
              (g_playSystem_00802A38,0x402,(undefined4 *)(param_2 + 0x29),nullptr,
               nullptr,strategData,0);
    if (local_c != 0) {
      st::fn_00402E05((int *)&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x5f,0,errorCode,"%s",
                             "StartStrateg");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c != 0) {
    st::fn_00402E05((int *)&local_8);
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_creat.cpp",0x61);
  return;
}

// 00648E70 CreateArbiter
#line 4 "decomp/ST.exe/functions/00648E70/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 130 | 141 | 143 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_00648E70(int param_1,char *param_2)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  ushort *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if ((g_playSystem_00802A38 == nullptr) || (param_1 == 0)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x82);
    }
    if ((param_2 == nullptr) || (*param_2 == '\0')) {
      param_2 = PTR_s_AIBOSS_0079d664;
    }
    local_8 = st::fn_006F2D90((cMf32 *)param_1,param_2,1,0);
    if (local_8 == nullptr) {
      local_8 = (ushort *)st::fn_004023DD();
    }
    st::fn_006E6200
              (g_playSystem_00802A38,0x403,(undefined4 *)0x28,nullptr,nullptr,local_8,0
              );
    st::fn_004020A4((int *)&local_8);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x8d,0,iVar2,"%s",
                             "CreateArbiter");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_004020A4((int *)&local_8);
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\ai\\ai_creat.cpp",0x8f);
  return iVar2;
}

// 00648FE0 CreateAi
#line 4 "decomp/ST.exe/functions/00648FE0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 157 | 266 | 268 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00648FE0(void)

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
  iVar3 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x10a,0,iVar3,"%s",
                                "CreateAi");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_creat.cpp",0x10c);
    return;
  }
  if (g_playSystem_00802A38 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x9d);
  }
  if (DAT_0080879c == 0) {
    switch(_DAT_008087a0 & 0xff) {
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
          st::fn_00401794();
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
          st::fn_006AB060(&DAT_0080ed12);
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
    st::fn_00403F2B((int)local_c,(char *)&DAT_00809960);
    local_1c = 0;
    local_18 = g_bulkInitializedRecords_008087C7;
    do {
      pBVar10 = local_18;
      uVar3 = local_1c;
      if (((local_18->field_0022 != 0xff) && (local_18->field_0021 != 0)) &&
         ((*(char *)local_18 == '\x01' || (DAT_0080879c != 0)))) {
        if (DAT_0080879c == 0) {
          switch(_DAT_008087a0 & 0xff) {
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
            pcVar7 = st::fn_006F2C00(PTR_s_STRATEG_0079d668,1,local_1c);
            goto LAB_00649255;
          }
        }
        else {
          iVar13 = 2;
          pcVar7 = PTR_s_AIPLAYER_0079d660;
          uVar4 = local_1c;
LAB_00649255:
          local_10 = st::fn_006F2C00(pcVar7,iVar13,uVar4);
        }
        if ((local_10 != nullptr) &&
           (local_8 = (AnonShape_00648C10_30A1BBFD *)
                      st::fn_004012AD((int)pcVar6,local_10,nullptr),
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
          st::fn_004018A7(local_8,uVar3);
          st::fn_006AB060(&local_8);
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

// 006494C0 CreatePlrDataForWS
#line 4 "decomp/ST.exe/functions/006494C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 307 | 313 | 314 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * st::fn_006494C0(void)

{
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
  iVar3 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    st::fn_00401537((int *)&local_10);
    st::fn_00402E05((int *)&local_8);
    st::fn_00402E05((int *)&local_c);
    iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x139,0,iVar3,"%s",
                               "CreatePlrDataForWS");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_creat.cpp",0x13a);
    return nullptr;
  }
  memset(local_34, 0, 0x18); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(&stack0xfffffb6c, 0, 0x318); /* compiler bulk-zero initialization */
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
  pcVar8 = "WS_Opponent_00.stg";
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
            st::fn_00404403(local_17c,(AnonShape_00683C70_22193481 *)&stack0xfffffb6c,&local_1c,
                               local_34,nullptr);
  if (local_8 != nullptr) {
    local_10 = st::fn_00401EBF(*(AllocationRecord_0065CD10 **)&local_8->field_0x106,&local_14);
    local_c = st::fn_00405204(local_8,(undefined4 *)local_10,local_14,&local_18);
    st::fn_00401537((int *)&local_10);
    st::fn_00402E05((int *)&local_8);
    g_currentExceptionFrame = local_78.previous;
    return (undefined4 *)local_c;
  }
  st::fn_006A5E40
            (local_34[0],g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x133);
  g_currentExceptionFrame = local_78.previous;
  return (undefined4 *)local_c;
}

// 00649790 CreatePlrDataForBO
#line 4 "decomp/ST.exe/functions/00649790/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 353 | 359 | 360 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * st::fn_00649790(void)

{
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
  iVar3 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    st::fn_00401537((int *)&local_10);
    st::fn_00402E05((int *)&local_8);
    st::fn_00402E05((int *)&local_c);
    iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x167,0,iVar3,"%s",
                               "CreatePlrDataForBO");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_creat.cpp",0x168);
    return nullptr;
  }
  memset(local_34, 0, 0x18); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(&stack0xfffffb6c, 0, 0x318); /* compiler bulk-zero initialization */
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
            st::fn_00404403(local_17c,(AnonShape_00683C70_22193481 *)&stack0xfffffb6c,&local_1c,
                               local_34,nullptr);
  if (local_8 != nullptr) {
    local_10 = st::fn_00401EBF(*(AllocationRecord_0065CD10 **)&local_8->field_0x106,&local_14);
    local_c = st::fn_00405204(local_8,(undefined4 *)local_10,local_14,&local_18);
    st::fn_00401537((int *)&local_10);
    st::fn_00402E05((int *)&local_8);
    g_currentExceptionFrame = local_78.previous;
    return (undefined4 *)local_c;
  }
  st::fn_006A5E40
            (local_34[0],g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x161);
  g_currentExceptionFrame = local_78.previous;
  return (undefined4 *)local_c;
}

// 00649A60 CreatePlrData
#line 4 "decomp/ST.exe/functions/00649A60/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 373 | 376 | 377 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl st::fn_00649A60(int param_1)

{
  int errorCode;
  undefined4 *puVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x178,0,errorCode,
                               "%s","CreatePlrData");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_creat.cpp",0x179);
    return nullptr;
  }
  if (g_bulkInitializedRecords_008087C7[param_1].field_0021 != 1) {
    if (g_bulkInitializedRecords_008087C7[param_1].field_0021 != 2) {
      st::fn_006A5E40
                (-5,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x175);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    }
    puVar2 = st::fn_0040412E();
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  puVar2 = st::fn_0040380F();
  g_currentExceptionFrame = local_4c.previous;
  return puVar2;
}

// 00649B90 CreateBossData
#line 4 "decomp/ST.exe/functions/00649B90/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 417 | 423 | 424 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * st::fn_00649B90(void)

{
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
  AllocationRecord_00648620 *local_c;
  AllocationRecord_00648620 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_10 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar3 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    st::fn_00401537((int *)&local_10);
    st::fn_004020A4((int *)&local_8);
    st::fn_004020A4((int *)&local_c);
    iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x1a7,0,iVar3,"%s",
                               "CreateBossData");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\ai\\ai_creat.cpp",0x1a8);
    return nullptr;
  }
  memset(local_34, 0, 0x18); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(&stack0xfffffb6c, 0, 0x318); /* compiler bulk-zero initialization */
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
  pcVar11 = &stack0xfffffb6c;
  memmove(pcVar11, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  st::fn_006B78C0(&stack0xfffffb6c,&stack0xfffffb6c);
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
  pcVar8 = "Arbiter_battle.arb";
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
  local_8 = (AllocationRecord_00648620 *)
            st::fn_00404403(local_17c,(AnonShape_00683C70_22193481 *)&stack0xfffffb6c,&local_1c,
                               local_34,nullptr);
  if (local_8 != nullptr) {
    local_10 = st::fn_00401EBF(*(AllocationRecord_0065CD10 **)&local_8->field_0x4e,&local_14);
    local_c = st::fn_00405A24(local_8,(undefined4 *)local_10,local_14,&local_18);
    st::fn_00401537((int *)&local_10);
    st::fn_004020A4((int *)&local_8);
    g_currentExceptionFrame = local_78.previous;
    return (undefined4 *)local_c;
  }
  st::fn_006A5E40
            (local_34[0],g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x1a1);
  g_currentExceptionFrame = local_78.previous;
  return (undefined4 *)local_c;
}

// 00649EB0 CreateDefaultBossData
#line 4 "decomp/ST.exe/functions/00649EB0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 449 | 450 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * st::fn_00649EB0(void)

{
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  AllocationRecord_0065CD10 *local_10;
  AllocationRecord_00648620 *local_c;
  AllocationRecord_00648620 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_10 = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = st::fn_0040117C("Default Arbiter",1);
    local_10 = st::fn_00401EBF(*(AllocationRecord_0065CD10 **)&local_8->field_0x4e,&local_14);
    local_c = st::fn_00405A24(local_8,(undefined4 *)local_10,local_14,&local_18);
    st::fn_00401537((int *)&local_10);
    st::fn_004020A4((int *)&local_8);
    g_currentExceptionFrame = local_5c.previous;
    return (undefined4 *)local_c;
  }
  g_currentExceptionFrame = local_5c.previous;
  st::fn_00401537((int *)&local_10);
  st::fn_004020A4((int *)&local_8);
  st::fn_004020A4((int *)&local_c);
  iVar2 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_creat.cpp",0x1c1,0,errorCode,"%s",
                             "CreateDefaultBossData");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_creat.cpp",0x1c2);
  return nullptr;
}

