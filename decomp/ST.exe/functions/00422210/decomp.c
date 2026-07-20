
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
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  STAllPlayersC *pSVar9;
  undefined4 *puVar10;
  void *unaff_EDI;
  int *piVar11;
  InternalExceptionFrame local_54;
  AnonShape_00422210_9D5BEAD8 *local_10;
  int local_c;
  STAllPlayersC *local_8;
  
  local_10 = (AnonShape_00422210_9D5BEAD8 *)param_1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xf0b,0,iVar3,&DAT_007a4ccc,
                               s_STAllPlayersC__RestoreGObjData_007a507c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xf0c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8->field_001C = *(undefined4 *)local_10;
  local_8->field_0030 = *(undefined2 *)&local_10->field_0x4;
  local_8->field_0032 = local_10->field_0006;
  puVar10 = (undefined4 *)&local_10->field_0x8;
  puVar4 = (undefined4 *)&local_8->field_0x34;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar10;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar10 + 2);
  puVar10 = (undefined4 *)&local_10->field_0x67;
  puVar4 = (undefined4 *)&local_8->field_0x93;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar10;
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
    uVar8 = pAVar2->field_0275;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x271 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2[1].field_0001 < 1) {
    local_8->field_009F = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2[1].field_0001);
    local_8->field_009F = puVar4;
    uVar8 = *(uint *)&pAVar2[1].field_0001;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x279 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x111 == -1) {
    local_8->field_011D = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x115);
    local_8->field_011D = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x115;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x111 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x119 == -1) {
    local_8->field_0121 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x11d);
    local_8->field_0121 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x11d;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x119 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x121 == -1) {
    local_8->field_0125 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x125);
    local_8->field_0125 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x125;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x121 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x129 == -1) {
    local_8->field_0129 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x12d);
    local_8->field_0129 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x12d;
    puVar10 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x129);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  puVar10 = &local_8->field_0135;
  piVar11 = (int *)&pAVar2->field_0x141;
  local_c = 2;
  do {
    if (piVar11[-4] == -1) {
      puVar10[-2] = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-4] + (int)param_1));
      puVar10[-2] = uVar5;
    }
    if (*piVar11 == -1) {
      *puVar10 = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *puVar10 = uVar5;
    }
    piVar11 = piVar11 + 2;
    puVar10 = puVar10 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar11 = (int *)&pAVar2->field_0x171;
  local_c = 4;
  puVar10 = &local_8->field_014D;
  do {
    if (piVar11[-8] == -1) {
      puVar10[-4] = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-8] + (int)param_1));
      puVar10[-4] = uVar5;
    }
    if (*piVar11 == -1) {
      *puVar10 = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *puVar10 = uVar5;
    }
    piVar11 = piVar11 + 2;
    puVar10 = puVar10 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar11 = (int *)&pAVar2->field_0x1b9;
  local_c = 5;
  puVar10 = &local_8->field_0171;
  do {
    if (piVar11[-10] == -1) {
      puVar10[-5] = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-10] + (int)param_1));
      puVar10[-5] = uVar5;
    }
    if (*piVar11 == -1) {
      *puVar10 = 0;
    }
    else {
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *puVar10 = uVar5;
    }
    piVar11 = piVar11 + 2;
    puVar10 = puVar10 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x1e1 == -1) {
    local_8->field_0185 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1e5);
    local_8->field_0185 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x1e5;
    puVar10 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x1e1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1e9 == -1) {
    local_8->field_0189 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1ed);
    local_8->field_0189 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x1ed;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x1e9 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1f1 == -1) {
    local_8->field_018D = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1f5);
    local_8->field_018D = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x1f5;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x1f1 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x1f9 == -1) {
    local_8->field_0191 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x1fd);
    local_8->field_0191 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x1fd;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x1f9 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x201 == -1) {
    local_8->field_0195 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x205);
    local_8->field_0195 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x205;
    puVar10 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x201);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x209 == -1) {
    local_8->field_0199 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x20d);
    local_8->field_0199 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x20d;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x209 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  pSVar9 = local_8;
  if (*(int *)&pAVar2->field_0x211 == -1) {
    local_8->field_019D = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)&pAVar2->field_0x211 + (int)param_1));
    pSVar9->field_019D = uVar5;
  }
  if (*(int *)&pAVar2->field_0x219 == -1) {
    pSVar9->field_01A1 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)&pAVar2->field_0x219 + (int)param_1));
    pSVar9->field_01A1 = uVar5;
  }
  if (*(int *)&pAVar2->field_0x221 == -1) {
    pSVar9->field_01A5 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x225);
    local_8->field_01A5 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x225;
    puVar10 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x221);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x229 == -1) {
    pSVar9->field_01A9 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x22d);
    local_8->field_01A9 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x22d;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x229 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x231 == -1) {
    pSVar9->field_01AD = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x235);
    local_8->field_01AD = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x235;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x231 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x239 == -1) {
    pSVar9->field_01B1 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x23d);
    local_8->field_01B1 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x23d;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x239 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x241 == -1) {
    pSVar9->field_01B5 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x245);
    local_8->field_01B5 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x245;
    puVar10 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x241);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x249 == -1) {
    pSVar9->field_01B9 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x24d);
    local_8->field_01B9 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x24d;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x249 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x251 == -1) {
    pSVar9->field_01BD = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x255);
    local_8->field_01BD = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x255;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x251 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x259 == -1) {
    pSVar9->field_01C1 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x25d);
    local_8->field_01C1 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x25d;
    puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x259 + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x261 == -1) {
    pSVar9->field_01C5 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x265);
    local_8->field_01C5 = puVar4;
    uVar8 = *(uint *)&pAVar2->field_0x265;
    puVar10 = (undefined4 *)((int)param_1 + *(int *)&pAVar2->field_0x261);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)&pAVar2->field_0x269 == -1) {
    pSVar9->field_01C9 = 0;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)&pAVar2->field_0x26d);
  local_8->field_01C9 = puVar4;
  uVar8 = *(uint *)&pAVar2->field_0x26d;
  puVar10 = (undefined4 *)(*(int *)&pAVar2->field_0x269 + (int)param_1);
  for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar4 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

