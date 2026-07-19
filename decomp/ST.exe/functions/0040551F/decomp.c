
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
  InternalExceptionFrame IStack_54;
  undefined4 *puStack_10;
  int iStack_c;
  STAllPlayersC *pSStack_8;
  
  puStack_10 = param_1;
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pSStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar10 = puStack_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = IStack_54.previous;
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
  *(undefined4 *)(pSStack_8 + 0x1c) = *puStack_10;
  *(undefined2 *)(pSStack_8 + 0x30) = *(undefined2 *)(puStack_10 + 1);
  *(undefined2 *)(pSStack_8 + 0x32) = *(undefined2 *)((int)puStack_10 + 6);
  puVar5 = puStack_10 + 2;
  pSVar9 = pSStack_8 + 0x34;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    pSVar9 = pSVar9 + 4;
  }
  *(undefined2 *)pSVar9 = *(undefined2 *)puVar5;
  pSVar9[2] = *(STAllPlayersC *)((int)puVar5 + 2);
  puVar5 = (undefined4 *)((int)puStack_10 + 0x67);
  pSVar9 = pSStack_8 + 0x93;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    pSVar9 = pSVar9 + 4;
  }
  *(undefined2 *)pSVar9 = *(undefined2 *)puVar5;
  *(undefined4 *)(pSStack_8 + 0x1cd) = *(undefined4 *)((int)puStack_10 + 0xd5);
  *(undefined4 *)(pSStack_8 + 0x101) = *(undefined4 *)((int)puStack_10 + 0xd9);
  *(undefined4 *)(pSStack_8 + 0x105) = *(undefined4 *)((int)puStack_10 + 0xdd);
  *(undefined4 *)(pSStack_8 + 0x109) = *(undefined4 *)((int)puStack_10 + 0xe1);
  *(undefined4 *)(pSStack_8 + 0x10d) = *(undefined4 *)((int)puStack_10 + 0xe5);
  *(undefined4 *)(pSStack_8 + 0x111) = *(undefined4 *)((int)puStack_10 + 0xe9);
  *(undefined4 *)(pSStack_8 + 0x115) = *(undefined4 *)((int)puStack_10 + 0xed);
  *(undefined4 *)(pSStack_8 + 0x119) = *(undefined4 *)((int)puStack_10 + 0xf1);
  *(undefined4 *)(pSStack_8 + 0x1d1) = *(undefined4 *)((int)puStack_10 + 0xf5);
  *(undefined4 *)(pSStack_8 + 0x215) = *(undefined4 *)((int)puStack_10 + 0xf9);
  *(undefined4 *)(pSStack_8 + 0x219) = *(undefined4 *)((int)puStack_10 + 0xfd);
  *(undefined4 *)(pSStack_8 + 0x21d) = *(undefined4 *)((int)puStack_10 + 0x101);
  *(undefined4 *)(pSStack_8 + 0x221) = *(undefined4 *)((int)puStack_10 + 0x105);
  *(undefined4 *)(pSStack_8 + 0x225) = *(undefined4 *)((int)puStack_10 + 0x109);
  *(undefined4 *)(pSStack_8 + 0x229) = *(undefined4 *)((int)puStack_10 + 0x10d);
  if (*(int *)((int)puStack_10 + 0x275) < 1) {
    *(undefined4 *)(pSStack_8 + 0x97) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puStack_10 + 0x275));
    *(undefined4 **)(pSStack_8 + 0x97) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x9f) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x27d));
    *(undefined4 **)(pSStack_8 + 0x9f) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x11d) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x115));
    *(undefined4 **)(pSStack_8 + 0x11d) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x121) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x11d));
    *(undefined4 **)(pSStack_8 + 0x121) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x125) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x125));
    *(undefined4 **)(pSStack_8 + 0x125) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x129) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x12d));
    *(undefined4 **)(pSStack_8 + 0x129) = puVar3;
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
  pSVar9 = pSStack_8 + 0x135;
  piVar11 = (int *)((int)puVar10 + 0x141);
  iStack_c = 2;
  do {
    if (piVar11[-4] == -1) {
      *(undefined4 *)(pSVar9 + -8) = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-4] + (int)param_1));
      *(undefined4 *)(pSVar9 + -8) = uVar4;
    }
    if (*piVar11 == -1) {
      *(undefined4 *)pSVar9 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *(undefined4 *)pSVar9 = uVar4;
    }
    piVar11 = piVar11 + 2;
    pSVar9 = pSVar9 + 4;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  piVar11 = (int *)((int)puVar10 + 0x171);
  iStack_c = 4;
  pSVar9 = pSStack_8 + 0x14d;
  do {
    if (piVar11[-8] == -1) {
      *(undefined4 *)(pSVar9 + -0x10) = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-8] + (int)param_1));
      *(undefined4 *)(pSVar9 + -0x10) = uVar4;
    }
    if (*piVar11 == -1) {
      *(undefined4 *)pSVar9 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *(undefined4 *)pSVar9 = uVar4;
    }
    piVar11 = piVar11 + 2;
    pSVar9 = pSVar9 + 4;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  piVar11 = (int *)((int)puVar10 + 0x1b9);
  iStack_c = 5;
  pSVar9 = pSStack_8 + 0x171;
  do {
    if (piVar11[-10] == -1) {
      *(undefined4 *)(pSVar9 + -0x14) = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar11[-10] + (int)param_1));
      *(undefined4 *)(pSVar9 + -0x14) = uVar4;
    }
    if (*piVar11 == -1) {
      *(undefined4 *)pSVar9 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar11 + (int)param_1));
      *(undefined4 *)pSVar9 = uVar4;
    }
    piVar11 = piVar11 + 2;
    pSVar9 = pSVar9 + 4;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  if (*(int *)((int)puVar10 + 0x1e1) == -1) {
    *(undefined4 *)(pSStack_8 + 0x185) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1e5));
    *(undefined4 **)(pSStack_8 + 0x185) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x189) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1ed));
    *(undefined4 **)(pSStack_8 + 0x189) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x18d) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1f5));
    *(undefined4 **)(pSStack_8 + 0x18d) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x191) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x1fd));
    *(undefined4 **)(pSStack_8 + 0x191) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x195) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x205));
    *(undefined4 **)(pSStack_8 + 0x195) = puVar3;
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
    *(undefined4 *)(pSStack_8 + 0x199) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x20d));
    *(undefined4 **)(pSStack_8 + 0x199) = puVar3;
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
  pSVar9 = pSStack_8;
  if (*(int *)((int)puVar10 + 0x211) == -1) {
    *(undefined4 *)(pSStack_8 + 0x19d) = 0;
  }
  else {
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar10 + 0x211) + (int)param_1));
    *(undefined4 *)(pSVar9 + 0x19d) = uVar4;
  }
  if (*(int *)((int)puVar10 + 0x219) == -1) {
    *(undefined4 *)(pSVar9 + 0x1a1) = 0;
  }
  else {
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar10 + 0x219) + (int)param_1));
    *(undefined4 *)(pSVar9 + 0x1a1) = uVar4;
  }
  if (*(int *)((int)puVar10 + 0x221) == -1) {
    *(undefined4 *)(pSVar9 + 0x1a5) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x225));
    *(undefined4 **)(pSStack_8 + 0x1a5) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x225);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x221));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x229) == -1) {
    *(undefined4 *)(pSVar9 + 0x1a9) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x22d));
    *(undefined4 **)(pSStack_8 + 0x1a9) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x22d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x229) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x231) == -1) {
    *(undefined4 *)(pSVar9 + 0x1ad) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x235));
    *(undefined4 **)(pSStack_8 + 0x1ad) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x235);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x231) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x239) == -1) {
    *(undefined4 *)(pSVar9 + 0x1b1) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x23d));
    *(undefined4 **)(pSStack_8 + 0x1b1) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x23d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x239) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x241) == -1) {
    *(undefined4 *)(pSVar9 + 0x1b5) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x245));
    *(undefined4 **)(pSStack_8 + 0x1b5) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x245);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x241));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x249) == -1) {
    *(undefined4 *)(pSVar9 + 0x1b9) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x24d));
    *(undefined4 **)(pSStack_8 + 0x1b9) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x24d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x249) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x251) == -1) {
    *(undefined4 *)(pSVar9 + 0x1bd) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x255));
    *(undefined4 **)(pSStack_8 + 0x1bd) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x255);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x251) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x259) == -1) {
    *(undefined4 *)(pSVar9 + 0x1c1) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x25d));
    *(undefined4 **)(pSStack_8 + 0x1c1) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x25d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar10 + 0x259) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x261) == -1) {
    *(undefined4 *)(pSVar9 + 0x1c5) = 0;
  }
  else {
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x265));
    *(undefined4 **)(pSStack_8 + 0x1c5) = puVar3;
    uVar8 = *(uint *)((int)puVar10 + 0x265);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar10 + 0x261));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; pSVar9 = pSStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar10 + 0x269) == -1) {
    *(undefined4 *)(pSVar9 + 0x1c9) = 0;
    g_currentExceptionFrame = IStack_54.previous;
    return;
  }
  puVar5 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)puVar10 + 0x26d));
  *(undefined4 **)(pSStack_8 + 0x1c9) = puVar5;
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
  g_currentExceptionFrame = IStack_54.previous;
  return;
}

