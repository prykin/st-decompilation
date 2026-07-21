#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::RestoreGObjData */

void __thiscall STAllPlayersC::RestoreGObjData(STAllPlayersC *this,undefined4 *param_1)

{
  code *pcVar1;
  AnonShape_00422210_9D5BEAD8 *pAVar2;
  int iVar3;
  undefined4 *puVar4;
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
  int iVar16;
  uint uVar17;
  uint uVar18;
  STAllPlayersC *pSVar19;
  undefined4 *puVar20;
  int *piVar21;
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
    iVar16 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xf0b,0,iVar3,"%s",
                                "STAllPlayersC::RestoreGObjData");
    if (iVar16 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0xf0c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_8->field_001C = *(undefined4 *)local_10;
  local_8->field_0030 = *(undefined2 *)&local_10->field_0x4;
  local_8->field_0032 = local_10->field_0006;
  puVar20 = (undefined4 *)&local_10->field_0x8;
  puVar4 = (undefined4 *)&local_8->field_0x34;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar20;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar20 + 2);
  puVar20 = (undefined4 *)&local_10->field_0x67;
  puVar4 = (undefined4 *)&local_8->field_0x93;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar20;
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
    local_8->field_0097 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_10->field_0275);
    local_8->field_0097 = puVar4;
    uVar18 = pAVar2->field_0275;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x271 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2[1].field_0001 < 1) {
    local_8->field_009F = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2[1].field_0001);
    local_8->field_009F = puVar4;
    uVar18 = *(uint *)&pAVar2[1].field_0001;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x279 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x111 == -1) {
    local_8->field_011D = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x115);
    local_8->field_011D = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x115;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x111 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x119 == -1) {
    local_8->field_0121 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x11d);
    local_8->field_0121 = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x11d;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x119 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x121 == -1) {
    local_8->field_0125 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x125);
    local_8->field_0125 = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x125;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x121 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x129 == -1) {
    local_8->field_0129 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x12d);
    local_8->field_0129 = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x12d;
    puVar20 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x129);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  puVar20 = &local_8->field_0135;
  piVar21 = (int *)&pAVar2->field_0x141;
  local_c = 2;
  do {
    if (piVar21[-4] == -1) {
      puVar20[-2] = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(piVar21[-4] + (int)param_1));
      puVar20[-2] = uVar5;
    }
    if (*piVar21 == -1) {
      *puVar20 = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*piVar21 + (int)param_1));
      *puVar20 = uVar5;
    }
    piVar21 = piVar21 + 2;
    puVar20 = puVar20 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar21 = (int *)&pAVar2->field_0x171;
  local_c = 4;
  puVar20 = &local_8->field_014D;
  do {
    if (piVar21[-8] == -1) {
      puVar20[-4] = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(piVar21[-8] + (int)param_1));
      puVar20[-4] = uVar5;
    }
    if (*piVar21 == -1) {
      *puVar20 = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*piVar21 + (int)param_1));
      *puVar20 = uVar5;
    }
    piVar21 = piVar21 + 2;
    puVar20 = puVar20 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar21 = (int *)&pAVar2->field_0x1b9;
  local_c = 5;
  puVar20 = &local_8->field_0171;
  do {
    if (piVar21[-10] == -1) {
      puVar20[-5] = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(piVar21[-10] + (int)param_1));
      puVar20[-5] = uVar5;
    }
    if (*piVar21 == -1) {
      *puVar20 = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*piVar21 + (int)param_1));
      *puVar20 = uVar5;
    }
    piVar21 = piVar21 + 2;
    puVar20 = puVar20 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x1e1 == -1) {
    local_8->field_0185 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1e5);
    local_8->field_0185 = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x1e5;
    puVar20 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x1e1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1e9 == -1) {
    local_8->field_0189 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1ed);
    local_8->field_0189 = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x1ed;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x1e9 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1f1 == -1) {
    local_8->field_018D = (AnonPointee_STAllPlayersC_018D *)0x0;
  }
  else {
    pAVar6 = (AnonPointee_STAllPlayersC_018D *)
             Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1f5);
    local_8->field_018D = pAVar6;
    uVar18 = *(uint *)&pAVar2->field_0x1f5;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x1f1 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar6->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar6 = (AnonPointee_STAllPlayersC_018D *)&pAVar6->field_0004;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar6 = (AnonPointee_STAllPlayersC_018D *)((int)&pAVar6->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1f9 == -1) {
    local_8->field_0191 = (AnonPointee_STAllPlayersC_0191 *)0x0;
  }
  else {
    pAVar7 = (AnonPointee_STAllPlayersC_0191 *)
             Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1fd);
    local_8->field_0191 = pAVar7;
    uVar18 = *(uint *)&pAVar2->field_0x1fd;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x1f9 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar7->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar7 = (AnonPointee_STAllPlayersC_0191 *)&pAVar7->field_0004;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar7 = (AnonPointee_STAllPlayersC_0191 *)((int)&pAVar7->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x201 == -1) {
    local_8->field_0195 = (AnonPointee_STAllPlayersC_0195 *)0x0;
  }
  else {
    pAVar8 = (AnonPointee_STAllPlayersC_0195 *)
             Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x205);
    local_8->field_0195 = pAVar8;
    uVar18 = *(uint *)&pAVar2->field_0x205;
    puVar20 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x201);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar8->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar8 = (AnonPointee_STAllPlayersC_0195 *)&pAVar8->field_0004;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar8->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar8 = (AnonPointee_STAllPlayersC_0195 *)((int)&pAVar8->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x209 == -1) {
    local_8->field_0199 = (AnonPointee_STAllPlayersC_0199 *)0x0;
  }
  else {
    pAVar9 = (AnonPointee_STAllPlayersC_0199 *)
             Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x20d);
    local_8->field_0199 = pAVar9;
    uVar18 = *(uint *)&pAVar2->field_0x20d;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x209 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar9->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar9 = (AnonPointee_STAllPlayersC_0199 *)&pAVar9->field_0004;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar9->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar9 = (AnonPointee_STAllPlayersC_0199 *)((int)&pAVar9->field_0000 + 1);
    }
  }
  pSVar19 = local_8;
  if (*(int *)&pAVar2->field_0x211 == -1) {
    local_8->field_019D = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)&pAVar2->field_0x211 + (int)param_1));
    pSVar19->field_019D = uVar5;
  }
  if (*(int *)&pAVar2->field_0x219 == -1) {
    pSVar19->field_01A1 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)&pAVar2->field_0x219 + (int)param_1));
    pSVar19->field_01A1 = uVar5;
  }
  if (*(int *)&pAVar2->field_0x221 == -1) {
    pSVar19->field_01A5 = (AnonPointee_STAllPlayersC_01A5 *)0x0;
  }
  else {
    pAVar10 = (AnonPointee_STAllPlayersC_01A5 *)
              Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x225);
    local_8->field_01A5 = pAVar10;
    uVar18 = *(uint *)&pAVar2->field_0x225;
    puVar20 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x221);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar10->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar10 = (AnonPointee_STAllPlayersC_01A5 *)&pAVar10->field_0004;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar10->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar10 = (AnonPointee_STAllPlayersC_01A5 *)((int)&pAVar10->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x229 == -1) {
    pSVar19->field_01A9 = (AnonPointee_STAllPlayersC_01A9 *)0x0;
  }
  else {
    pAVar11 = (AnonPointee_STAllPlayersC_01A9 *)
              Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x22d);
    local_8->field_01A9 = pAVar11;
    uVar18 = *(uint *)&pAVar2->field_0x22d;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x229 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar11->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar11 = (AnonPointee_STAllPlayersC_01A9 *)&pAVar11->field_0004;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar11->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar11 = (AnonPointee_STAllPlayersC_01A9 *)((int)&pAVar11->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x231 == -1) {
    pSVar19->field_01AD = (AnonPointee_STAllPlayersC_01AD *)0x0;
  }
  else {
    pAVar12 = (AnonPointee_STAllPlayersC_01AD *)
              Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x235);
    local_8->field_01AD = pAVar12;
    uVar18 = *(uint *)&pAVar2->field_0x235;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x231 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar12->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar12 = (AnonPointee_STAllPlayersC_01AD *)&pAVar12->field_0004;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar12->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar12 = (AnonPointee_STAllPlayersC_01AD *)((int)&pAVar12->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x239 == -1) {
    pSVar19->field_01B1 = (AnonPointee_STAllPlayersC_01B1 *)0x0;
  }
  else {
    pAVar13 = (AnonPointee_STAllPlayersC_01B1 *)
              Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x23d);
    local_8->field_01B1 = pAVar13;
    uVar18 = *(uint *)&pAVar2->field_0x23d;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x239 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar13->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar13 = (AnonPointee_STAllPlayersC_01B1 *)&pAVar13->field_0004;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar13->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar13 = (AnonPointee_STAllPlayersC_01B1 *)((int)&pAVar13->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x241 == -1) {
    pSVar19->field_01B5 = (AnonPointee_STAllPlayersC_01B5 *)0x0;
  }
  else {
    pAVar14 = (AnonPointee_STAllPlayersC_01B5 *)
              Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x245);
    local_8->field_01B5 = pAVar14;
    uVar18 = *(uint *)&pAVar2->field_0x245;
    puVar20 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x241);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar14->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar14 = (AnonPointee_STAllPlayersC_01B5 *)&pAVar14->field_0004;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar14->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar14 = (AnonPointee_STAllPlayersC_01B5 *)((int)&pAVar14->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x249 == -1) {
    pSVar19->field_01B9 = (AnonPointee_STAllPlayersC_01B9 *)0x0;
  }
  else {
    pAVar15 = (AnonPointee_STAllPlayersC_01B9 *)
              Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x24d);
    local_8->field_01B9 = pAVar15;
    uVar18 = *(uint *)&pAVar2->field_0x24d;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x249 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      pAVar15->field_0000 = *puVar20;
      puVar20 = puVar20 + 1;
      pAVar15 = (AnonPointee_STAllPlayersC_01B9 *)&pAVar15->field_0004;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)&pAVar15->field_0000 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      pAVar15 = (AnonPointee_STAllPlayersC_01B9 *)((int)&pAVar15->field_0000 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x251 == -1) {
    pSVar19->field_01BD = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x255);
    local_8->field_01BD = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x255;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x251 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x259 == -1) {
    pSVar19->field_01C1 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x25d);
    local_8->field_01C1 = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x25d;
    puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x259 + (int)param_1);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x261 == -1) {
    pSVar19->field_01C5 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x265);
    local_8->field_01C5 = puVar4;
    uVar18 = *(uint *)&pAVar2->field_0x265;
    puVar20 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x261);
    for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar4 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar18 = uVar18 & 3; pSVar19 = local_8, uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
      puVar20 = (undefined4 *)((int)puVar20 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x269 == -1) {
    pSVar19->field_01C9 = 0;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x26d);
  local_8->field_01C9 = puVar4;
  uVar18 = *(uint *)&pAVar2->field_0x26d;
  puVar20 = (undefined4 *)(*(int *)&pAVar2->field_0x269 + (int)param_1);
  for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar4 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar20;
    puVar20 = (undefined4 *)((int)puVar20 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

