#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::RestoreGObjData */

void __thiscall STAllPlayersC::RestoreGObjData(STAllPlayersC *this,undefined4 *param_1)

{
  AnonShape_00422210_9D5BEAD8 *pAVar2;
  int iVar3;
  byte *puVar4;
  undefined4 uVar5;
  AnonPointee_STAllPlayersC_018D *pAVar6;
  AnonPointee_STAllPlayersC_0191 *pAVar7;
  AnonPointee_STAllPlayersC_0195 *pAVar8;
  AnonPointee_STAllPlayersC_0199 *pAVar9;
  AnonPointee_STAllPlayersC_01A5 *pAVar10;
  AnonPointee_STAllPlayersC_01A9 *pAVar11;
  AnonPointee_STAllPlayersC_01AD *pAVar12;
  AnonPointee_STAllPlayersC_01B1 *pAVar13;
  AnonPointee_STAllPlayersC_01B5 *pAVar14;
  AnonPointee_STAllPlayersC_01B9 *pAVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  STAllPlayersC *pSVar20;
  byte *puVar21;
  int *piVar22;
  InternalExceptionFrame local_54;
  AnonShape_00422210_9D5BEAD8 *local_10;
  int local_c;
  STAllPlayersC *local_8;

  local_10 = (AnonShape_00422210_9D5BEAD8 *)param_1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pAVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xf0b,0,iVar3,"%s",
                                "STAllPlayersC::RestoreGObjData");
    if (iVar17 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0xf0c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_8->field_001C = *(undefined4 *)local_10;
  local_8->field_0030 = *(undefined2 *)&local_10->field_0x4;
  local_8->field_0032 = local_10->field_0006;
  puVar21 = (byte *)&local_10->field_0x8;
  puVar4 = (byte *)&local_8->field_0x34;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar21;
    puVar21 = (byte *)(puVar21 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar21;
  STField<undefined1>(puVar4,2) = STField<undefined1>(puVar21,2);
  puVar21 = (byte *)&local_10->field_0x67;
  puVar4 = (byte *)&local_8->field_0x93;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar21;
    puVar21 = (byte *)(puVar21 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar21;
  local_8->field_01CD = local_10->field_00D5;
  local_8->field_0101 = local_10->field_00D9;
  local_8->field_0105 = local_10->field_00DD;
  local_8->field_0109 = local_10->field_00E1;
  local_8->field_010D = local_10->field_00E5;
  local_8->field_0111 = local_10->field_00E9;
  local_8->field_0115 = local_10->field_00ED;
  local_8->field_0119 = local_10->field_00F1;
  local_8->field_01D1 = local_10->field_00F5;
  local_8->field_0215 = local_10->field_00F9;
  local_8->field_0219 = local_10->field_00FD;
  local_8->field_021D = local_10->field_0101;
  local_8->field_0221 = local_10->field_0105;
  local_8->field_0225 = local_10->field_0109;
  local_8->field_0229 = local_10->field_010D;
  if (local_10->field_0275 < 1) {
    local_8->field_0097 = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(local_10->field_0275));
    local_8->field_0097 = puVar4;
    uVar19 = pAVar2->field_0275;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x271 + (int)param_1);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if ((int)*(uint *)&pAVar2[1].field_0001 < 1) {
    local_8->field_009F = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2[1].field_0001));
    local_8->field_009F = puVar4;
    uVar19 = *(uint *)&pAVar2[1].field_0001;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x279 + (int)param_1);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x111 == -1) {
    local_8->field_011D = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x115));
    local_8->field_011D = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x115;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x111 + (int)param_1);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x119 == -1) {
    local_8->field_0121 = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x11d));
    local_8->field_0121 = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x11d;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x119 + (int)param_1);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x121 == -1) {
    local_8->field_0125 = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x125));
    local_8->field_0125 = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x125;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x121 + (int)param_1);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x129 == -1) {
    local_8->field_0129 = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x12d));
    local_8->field_0129 = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x12d;
    puVar21 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x129);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  puVar21 = (byte *)(&local_8->field_0135);
  piVar22 = (int *)&pAVar2->field_0x141;
  local_c = 2;
  do {
    if (piVar22[-4] == -1) {
      puVar21[-2] = 0;
    }
    else {
      uVar5 = FUN_006b0060(nullptr,(uint *)(piVar22[-4] + (int)param_1));
      puVar21[-2] = uVar5;
    }
    if (*piVar22 == -1) {
      *puVar21 = 0;
    }
    else {
      uVar5 = FUN_006b0060(nullptr,(uint *)(*piVar22 + (int)param_1));
      *puVar21 = uVar5;
    }
    piVar22 = piVar22 + 2;
    puVar21 = (byte *)(puVar21 + 1);
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar22 = (int *)&pAVar2->field_0x171;
  local_c = 4;
  puVar21 = (byte *)(&local_8->field_014D);
  do {
    if (piVar22[-8] == -1) {
      puVar21[-4] = 0;
    }
    else {
      uVar5 = FUN_006b0060(nullptr,(uint *)(piVar22[-8] + (int)param_1));
      puVar21[-4] = uVar5;
    }
    if (*piVar22 == -1) {
      *puVar21 = 0;
    }
    else {
      uVar5 = FUN_006b0060(nullptr,(uint *)(*piVar22 + (int)param_1));
      *puVar21 = uVar5;
    }
    piVar22 = piVar22 + 2;
    puVar21 = (byte *)(puVar21 + 1);
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar22 = (int *)&pAVar2->field_0x1b9;
  local_c = 5;
  puVar21 = (byte *)(&local_8->field_0171);
  do {
    if (piVar22[-10] == -1) {
      puVar21[-5] = 0;
    }
    else {
      uVar5 = FUN_006b0060(nullptr,(uint *)(piVar22[-10] + (int)param_1));
      puVar21[-5] = uVar5;
    }
    if (*piVar22 == -1) {
      *puVar21 = 0;
    }
    else {
      uVar5 = FUN_006b0060(nullptr,(uint *)(*piVar22 + (int)param_1));
      *puVar21 = uVar5;
    }
    piVar22 = piVar22 + 2;
    puVar21 = (byte *)(puVar21 + 1);
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x1e1 == -1) {
    local_8->field_0185 = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x1e5));
    local_8->field_0185 = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x1e5;
    puVar21 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x1e1);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x1e9 == -1) {
    local_8->field_0189 = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x1ed));
    local_8->field_0189 = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x1ed;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x1e9 + (int)param_1);
    memmove(puVar4, puVar21, uVar19); /* compiler REP MOVS byte copy */
    uVar18 = 0;
  }
  if (*(int *)&pAVar2->field_0x1f1 == -1) {
    local_8->field_018D = nullptr;
  }
  else {
    pAVar6 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x1f5);
    local_8->field_018D = pAVar6;
    uVar19 = *(uint *)&pAVar2->field_0x1f5;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x1f1 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar6->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar6 = (AnonPointee_STAllPlayersC_018D *)&pAVar6->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar6 = (AnonPointee_STAllPlayersC_018D *)((int)&pAVar6->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1f9 == -1) {
    local_8->field_0191 = nullptr;
  }
  else {
    pAVar7 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x1fd);
    local_8->field_0191 = pAVar7;
    uVar19 = *(uint *)&pAVar2->field_0x1fd;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x1f9 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar7->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar7 = (AnonPointee_STAllPlayersC_0191 *)&pAVar7->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar7 = (AnonPointee_STAllPlayersC_0191 *)((int)&pAVar7->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x201 == -1) {
    local_8->field_0195 = nullptr;
  }
  else {
    pAVar8 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x205);
    local_8->field_0195 = pAVar8;
    uVar19 = *(uint *)&pAVar2->field_0x205;
    puVar21 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x201);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar8->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar8 = (AnonPointee_STAllPlayersC_0195 *)&pAVar8->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar8->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar8 = (AnonPointee_STAllPlayersC_0195 *)((int)&pAVar8->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x209 == -1) {
    local_8->field_0199 = nullptr;
  }
  else {
    pAVar9 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x20d);
    local_8->field_0199 = pAVar9;
    uVar19 = *(uint *)&pAVar2->field_0x20d;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x209 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar9->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar9 = (AnonPointee_STAllPlayersC_0199 *)&pAVar9->field_0004;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar9->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar9 = (AnonPointee_STAllPlayersC_0199 *)((int)&pAVar9->field_0000 + 1);
    }
  }
  pSVar20 = local_8;
  if (*(int *)&pAVar2->field_0x211 == -1) {
    local_8->field_019D = 0;
  }
  else {
    uVar5 = FUN_006b0060(nullptr,(uint *)(*(int *)&pAVar2->field_0x211 + (int)param_1));
    pSVar20->field_019D = uVar5;
  }
  if (*(int *)&pAVar2->field_0x219 == -1) {
    pSVar20->field_01A1 = 0;
  }
  else {
    uVar5 = FUN_006b0060(nullptr,(uint *)(*(int *)&pAVar2->field_0x219 + (int)param_1));
    pSVar20->field_01A1 = uVar5;
  }
  if (*(int *)&pAVar2->field_0x221 == -1) {
    pSVar20->field_01A5 = nullptr;
  }
  else {
    pAVar10 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x225);
    local_8->field_01A5 = pAVar10;
    uVar19 = *(uint *)&pAVar2->field_0x225;
    puVar21 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x221);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar10->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar10 = (AnonPointee_STAllPlayersC_01A5 *)&pAVar10->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar10->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar10 = (AnonPointee_STAllPlayersC_01A5 *)((int)&pAVar10->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x229 == -1) {
    pSVar20->field_01A9 = nullptr;
  }
  else {
    pAVar11 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x22d);
    local_8->field_01A9 = pAVar11;
    uVar19 = *(uint *)&pAVar2->field_0x22d;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x229 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar11->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar11 = (AnonPointee_STAllPlayersC_01A9 *)&pAVar11->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar11->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar11 = (AnonPointee_STAllPlayersC_01A9 *)((int)&pAVar11->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x231 == -1) {
    pSVar20->field_01AD = nullptr;
  }
  else {
    pAVar12 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x235);
    local_8->field_01AD = pAVar12;
    uVar19 = *(uint *)&pAVar2->field_0x235;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x231 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar12->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar12 = (AnonPointee_STAllPlayersC_01AD *)&pAVar12->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar12->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar12 = (AnonPointee_STAllPlayersC_01AD *)((int)&pAVar12->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x239 == -1) {
    pSVar20->field_01B1 = nullptr;
  }
  else {
    pAVar13 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x23d);
    local_8->field_01B1 = pAVar13;
    uVar19 = *(uint *)&pAVar2->field_0x23d;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x239 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar13->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar13 = (AnonPointee_STAllPlayersC_01B1 *)&pAVar13->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar13->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar13 = (AnonPointee_STAllPlayersC_01B1 *)((int)&pAVar13->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x241 == -1) {
    pSVar20->field_01B5 = nullptr;
  }
  else {
    pAVar14 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x245);
    local_8->field_01B5 = pAVar14;
    uVar19 = *(uint *)&pAVar2->field_0x245;
    puVar21 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x241);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar14->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar14 = (AnonPointee_STAllPlayersC_01B5 *)&pAVar14->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar14->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar14 = (AnonPointee_STAllPlayersC_01B5 *)((int)&pAVar14->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x249 == -1) {
    pSVar20->field_01B9 = nullptr;
  }
  else {
    pAVar15 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x24d);
    local_8->field_01B9 = pAVar15;
    uVar19 = *(uint *)&pAVar2->field_0x24d;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x249 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      pAVar15->field_0000 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      pAVar15 = (AnonPointee_STAllPlayersC_01B9 *)&pAVar15->field_0004;
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)&pAVar15->field_0000 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      pAVar15 = (AnonPointee_STAllPlayersC_01B9 *)((int)&pAVar15->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x251 == -1) {
    pSVar20->field_01BD = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x255));
    local_8->field_01BD = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x255;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x251 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar4 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      puVar4 = (byte *)(puVar4 + 1);
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      puVar4 = (byte *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x259 == -1) {
    pSVar20->field_01C1 = nullptr;
  }
  else {
    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x25d));
    local_8->field_01C1 = puVar4;
    uVar19 = *(uint *)&pAVar2->field_0x25d;
    puVar21 = (byte *)(*(int *)&pAVar2->field_0x259 + (int)param_1);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar4 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      puVar4 = (byte *)(puVar4 + 1);
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      puVar4 = (byte *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x261 == -1) {
    pSVar20->field_01C5 = nullptr;
  }
  else {
    puVar16 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x265);
    local_8->field_01C5 = puVar16;
    uVar19 = *(uint *)&pAVar2->field_0x265;
    puVar21 = (byte *)((int)param_1 + *(int *)&pAVar2->field_0x261);
    for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)puVar16 = *puVar21;
      puVar21 = (byte *)(puVar21 + 1);
      puVar16 = puVar16 + 2;
    }
    for (uVar19 = uVar19 & 3; pSVar20 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar16 = *(undefined1 *)puVar21;
      puVar21 = (byte *)((int)puVar21 + 1);
      puVar16 = (ushort *)((int)puVar16 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x269 == -1) {
    pSVar20->field_01C9 = nullptr;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  puVar16 = Library::DKW::LIB::MemAlloc(*(uint *)&pAVar2->field_0x26d);
  local_8->field_01C9 = puVar16;
  uVar19 = *(uint *)&pAVar2->field_0x26d;
  puVar21 = (byte *)(*(int *)&pAVar2->field_0x269 + (int)param_1);
  for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined4 *)puVar16 = *puVar21;
    puVar21 = (byte *)(puVar21 + 1);
    puVar16 = puVar16 + 2;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined1 *)puVar16 = *(undefined1 *)puVar21;
    puVar21 = (byte *)((int)puVar21 + 1);
    puVar16 = (ushort *)((int)puVar16 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

