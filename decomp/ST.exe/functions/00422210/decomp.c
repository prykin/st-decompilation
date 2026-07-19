
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::RestoreGObjData */

void __thiscall STAllPlayersC::RestoreGObjData(STAllPlayersC *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  STAllPlayersC *pSVar9;
  undefined4 *puVar10;
  void *unaff_EDI;
  int *piVar11;
  InternalExceptionFrame local_54;
  undefined4 *local_10;
  int local_c;
  STAllPlayersC *local_8;
  
  local_10 = param_1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar10 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xf0b,0,iVar2,&DAT_007a4ccc,
                               s_STAllPlayersC__RestoreGObjData_007a507c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xf0c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8->field_001C = *local_10;
  local_8->field_0030 = *(undefined2 *)(local_10 + 1);
  local_8->field_0032 = *(undefined2 *)((int)local_10 + 6);
  puVar5 = local_10 + 2;
  puVar3 = (undefined4 *)&local_8->field_0x34;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar5;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar5 + 2);
  puVar5 = (undefined4 *)((int)local_10 + 0x67);
  puVar3 = (undefined4 *)&local_8->field_0x93;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar5;
  local_8->field_01CD = *(undefined4 *)((int)local_10 + 0xd5);
  local_8->field_0101 = *(undefined4 *)((int)local_10 + 0xd9);
  local_8->field_0105 = *(undefined4 *)((int)local_10 + 0xdd);
  local_8->field_0109 = *(undefined4 *)((int)local_10 + 0xe1);
  local_8->field_010D = *(undefined4 *)((int)local_10 + 0xe5);
  local_8->field_0111 = *(undefined4 *)((int)local_10 + 0xe9);
  local_8->field_0115 = *(undefined4 *)((int)local_10 + 0xed);
  local_8->field_0119 = *(undefined4 *)((int)local_10 + 0xf1);
  local_8->field_01D1 = *(undefined4 *)((int)local_10 + 0xf5);
  local_8->field_0215 = *(undefined4 *)((int)local_10 + 0xf9);
  local_8->field_0219 = *(undefined4 *)((int)local_10 + 0xfd);
  local_8->field_021D = *(undefined4 *)((int)local_10 + 0x101);
  local_8->field_0221 = *(undefined4 *)((int)local_10 + 0x105);
  local_8->field_0225 = *(undefined4 *)((int)local_10 + 0x109);
  local_8->field_0229 = *(undefined4 *)((int)local_10 + 0x10d);
  if (*(int *)((int)local_10 + 0x275) < 1) {
    local_8->field_0097 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)local_10 + 0x275));
    local_8->field_0097 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x275);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x271) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x27d) < 1) {
    local_8->field_009F = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x27d));
    local_8->field_009F = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x27d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x279) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x111) == -1) {
    local_8->field_011D = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x115));
    local_8->field_011D = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x115);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x111) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x119) == -1) {
    local_8->field_0121 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x11d));
    local_8->field_0121 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x11d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x119) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x121) == -1) {
    local_8->field_0125 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x125));
    local_8->field_0125 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x125);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x121) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x129) == -1) {
    local_8->field_0129 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x12d));
    local_8->field_0129 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x12d);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x129));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  puVar5 = &local_8->field_0135;
  piVar11 = (int *)((int)puVar10 + 0x141);
  local_c = 2;
  do {
    if (piVar11[-4] == -1) {
      puVar5[-2] = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-4] + (int)param_1));
      puVar5[-2] = uVar4;
    }
    if (*piVar11 == -1) {
      *puVar5 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *puVar5 = uVar4;
    }
    piVar11 = piVar11 + 2;
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar11 = (int *)((int)puVar10 + 0x171);
  local_c = 4;
  puVar5 = &local_8->field_014D;
  do {
    if (piVar11[-8] == -1) {
      puVar5[-4] = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-8] + (int)param_1));
      puVar5[-4] = uVar4;
    }
    if (*piVar11 == -1) {
      *puVar5 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *puVar5 = uVar4;
    }
    piVar11 = piVar11 + 2;
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar11 = (int *)((int)puVar10 + 0x1b9);
  local_c = 5;
  puVar5 = &local_8->field_0171;
  do {
    if (piVar11[-10] == -1) {
      puVar5[-5] = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-10] + (int)param_1));
      puVar5[-5] = uVar4;
    }
    if (*piVar11 == -1) {
      *puVar5 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *puVar5 = uVar4;
    }
    piVar11 = piVar11 + 2;
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)((int)puVar10 + 0x1e1) == -1) {
    local_8->field_0185 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1e5));
    local_8->field_0185 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x1e5);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x1e1));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x1e9) == -1) {
    local_8->field_0189 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1ed));
    local_8->field_0189 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x1ed);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x1e9) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x1f1) == -1) {
    local_8->field_018D = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1f5));
    local_8->field_018D = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x1f5);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x1f1) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x1f9) == -1) {
    local_8->field_0191 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1fd));
    local_8->field_0191 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x1fd);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x1f9) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x201) == -1) {
    local_8->field_0195 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x205));
    local_8->field_0195 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x205);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x201));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x209) == -1) {
    local_8->field_0199 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x20d));
    local_8->field_0199 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x20d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x209) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  pSVar9 = local_8;
  if (*(int *)((int)puVar10 + 0x211) == -1) {
    local_8->field_019D = 0;
  }
  else {
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar10 + 0x211) + (int)param_1));
    pSVar9->field_019D = uVar4;
  }
  if (*(int *)((int)puVar10 + 0x219) == -1) {
    pSVar9->field_01A1 = 0;
  }
  else {
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar10 + 0x219) + (int)param_1));
    pSVar9->field_01A1 = uVar4;
  }
  if (*(int *)((int)puVar10 + 0x221) == -1) {
    pSVar9->field_01A5 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x225));
    local_8->field_01A5 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x225);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x221));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x229) == -1) {
    pSVar9->field_01A9 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x22d));
    local_8->field_01A9 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x22d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x229) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x231) == -1) {
    pSVar9->field_01AD = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x235));
    local_8->field_01AD = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x235);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x231) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x239) == -1) {
    pSVar9->field_01B1 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x23d));
    local_8->field_01B1 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x23d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x239) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x241) == -1) {
    pSVar9->field_01B5 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x245));
    local_8->field_01B5 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x245);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x241));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x249) == -1) {
    pSVar9->field_01B9 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x24d));
    local_8->field_01B9 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x24d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x249) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x251) == -1) {
    pSVar9->field_01BD = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x255));
    local_8->field_01BD = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x255);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x251) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x259) == -1) {
    pSVar9->field_01C1 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x25d));
    local_8->field_01C1 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x25d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x259) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x261) == -1) {
    pSVar9->field_01C5 = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x265));
    local_8->field_01C5 = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x265);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x261));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x269) == -1) {
    pSVar9->field_01C9 = 0;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  puVar5 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x26d));
  local_8->field_01C9 = puVar5;
  uVar8 = *(uint *)((int)puVar10 + 0x26d);
  puVar10 = (undefined4 *)(*(int *)((int)puVar10 + 0x269) + (int)param_1);
  for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar5 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

