
void FUN_00422210(undefined4 *param_1)

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
  undefined4 *puVar9;
  void *unaff_EDI;
  int *piVar10;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  local_10 = param_1;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  puVar9 = local_10;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xf0b,0,iVar2,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar2,0,0x7a4e0c,0xf0c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)(local_8 + 0x1c) = *local_10;
  *(undefined2 *)(local_8 + 0x30) = *(undefined2 *)(local_10 + 1);
  *(undefined2 *)(local_8 + 0x32) = *(undefined2 *)((int)local_10 + 6);
  puVar5 = local_10 + 2;
  puVar3 = (undefined4 *)(local_8 + 0x34);
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar5;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar5 + 2);
  puVar5 = (undefined4 *)((int)local_10 + 0x67);
  puVar3 = (undefined4 *)(local_8 + 0x93);
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar5;
  *(undefined4 *)(local_8 + 0x1cd) = *(undefined4 *)((int)local_10 + 0xd5);
  *(undefined4 *)(local_8 + 0x101) = *(undefined4 *)((int)local_10 + 0xd9);
  *(undefined4 *)(local_8 + 0x105) = *(undefined4 *)((int)local_10 + 0xdd);
  *(undefined4 *)(local_8 + 0x109) = *(undefined4 *)((int)local_10 + 0xe1);
  *(undefined4 *)(local_8 + 0x10d) = *(undefined4 *)((int)local_10 + 0xe5);
  *(undefined4 *)(local_8 + 0x111) = *(undefined4 *)((int)local_10 + 0xe9);
  *(undefined4 *)(local_8 + 0x115) = *(undefined4 *)((int)local_10 + 0xed);
  *(undefined4 *)(local_8 + 0x119) = *(undefined4 *)((int)local_10 + 0xf1);
  *(undefined4 *)(local_8 + 0x1d1) = *(undefined4 *)((int)local_10 + 0xf5);
  *(undefined4 *)(local_8 + 0x215) = *(undefined4 *)((int)local_10 + 0xf9);
  *(undefined4 *)(local_8 + 0x219) = *(undefined4 *)((int)local_10 + 0xfd);
  *(undefined4 *)(local_8 + 0x21d) = *(undefined4 *)((int)local_10 + 0x101);
  *(undefined4 *)(local_8 + 0x221) = *(undefined4 *)((int)local_10 + 0x105);
  *(undefined4 *)(local_8 + 0x225) = *(undefined4 *)((int)local_10 + 0x109);
  *(undefined4 *)(local_8 + 0x229) = *(undefined4 *)((int)local_10 + 0x10d);
  if (*(int *)((int)local_10 + 0x275) < 1) {
    *(undefined4 *)(local_8 + 0x97) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)local_10 + 0x275));
    *(undefined4 **)(local_8 + 0x97) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x275);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x271) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x27d) < 1) {
    *(undefined4 *)(local_8 + 0x9f) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x27d));
    *(undefined4 **)(local_8 + 0x9f) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x27d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x279) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x111) == -1) {
    *(undefined4 *)(local_8 + 0x11d) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x115));
    *(undefined4 **)(local_8 + 0x11d) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x115);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x111) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x119) == -1) {
    *(undefined4 *)(local_8 + 0x121) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x11d));
    *(undefined4 **)(local_8 + 0x121) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x11d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x119) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x121) == -1) {
    *(undefined4 *)(local_8 + 0x125) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x125));
    *(undefined4 **)(local_8 + 0x125) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x125);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x121) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x129) == -1) {
    *(undefined4 *)(local_8 + 0x129) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x12d));
    *(undefined4 **)(local_8 + 0x129) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x12d);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar9 + 0x129));
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
  puVar5 = (undefined4 *)(local_8 + 0x135);
  piVar10 = (int *)((int)puVar9 + 0x141);
  local_c = 2;
  do {
    if (piVar10[-4] == -1) {
      puVar5[-2] = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar10[-4] + (int)param_1));
      puVar5[-2] = uVar4;
    }
    if (*piVar10 == -1) {
      *puVar5 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar10 + (int)param_1));
      *puVar5 = uVar4;
    }
    piVar10 = piVar10 + 2;
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar10 = (int *)((int)puVar9 + 0x171);
  local_c = 4;
  puVar5 = (undefined4 *)(local_8 + 0x14d);
  do {
    if (piVar10[-8] == -1) {
      puVar5[-4] = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar10[-8] + (int)param_1));
      puVar5[-4] = uVar4;
    }
    if (*piVar10 == -1) {
      *puVar5 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar10 + (int)param_1));
      *puVar5 = uVar4;
    }
    piVar10 = piVar10 + 2;
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar10 = (int *)((int)puVar9 + 0x1b9);
  local_c = 5;
  puVar5 = (undefined4 *)(local_8 + 0x171);
  do {
    if (piVar10[-10] == -1) {
      puVar5[-5] = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(piVar10[-10] + (int)param_1));
      puVar5[-5] = uVar4;
    }
    if (*piVar10 == -1) {
      *puVar5 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*piVar10 + (int)param_1));
      *puVar5 = uVar4;
    }
    piVar10 = piVar10 + 2;
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)((int)puVar9 + 0x1e1) == -1) {
    *(undefined4 *)(local_8 + 0x185) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x1e5));
    *(undefined4 **)(local_8 + 0x185) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x1e5);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar9 + 0x1e1));
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
  if (*(int *)((int)puVar9 + 0x1e9) == -1) {
    *(undefined4 *)(local_8 + 0x189) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x1ed));
    *(undefined4 **)(local_8 + 0x189) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x1ed);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x1e9) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x1f1) == -1) {
    *(undefined4 *)(local_8 + 0x18d) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x1f5));
    *(undefined4 **)(local_8 + 0x18d) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x1f5);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x1f1) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x1f9) == -1) {
    *(undefined4 *)(local_8 + 0x191) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x1fd));
    *(undefined4 **)(local_8 + 0x191) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x1fd);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x1f9) + (int)param_1);
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
  if (*(int *)((int)puVar9 + 0x201) == -1) {
    *(undefined4 *)(local_8 + 0x195) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x205));
    *(undefined4 **)(local_8 + 0x195) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x205);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar9 + 0x201));
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
  if (*(int *)((int)puVar9 + 0x209) == -1) {
    *(undefined4 *)(local_8 + 0x199) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x20d));
    *(undefined4 **)(local_8 + 0x199) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x20d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x209) + (int)param_1);
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
  iVar2 = local_8;
  if (*(int *)((int)puVar9 + 0x211) == -1) {
    *(undefined4 *)(local_8 + 0x19d) = 0;
  }
  else {
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar9 + 0x211) + (int)param_1));
    *(undefined4 *)(iVar2 + 0x19d) = uVar4;
  }
  if (*(int *)((int)puVar9 + 0x219) == -1) {
    *(undefined4 *)(iVar2 + 0x1a1) = 0;
  }
  else {
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar9 + 0x219) + (int)param_1));
    *(undefined4 *)(iVar2 + 0x1a1) = uVar4;
  }
  if (*(int *)((int)puVar9 + 0x221) == -1) {
    *(undefined4 *)(iVar2 + 0x1a5) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x225));
    *(undefined4 **)(local_8 + 0x1a5) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x225);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar9 + 0x221));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x229) == -1) {
    *(undefined4 *)(iVar2 + 0x1a9) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x22d));
    *(undefined4 **)(local_8 + 0x1a9) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x22d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x229) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x231) == -1) {
    *(undefined4 *)(iVar2 + 0x1ad) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x235));
    *(undefined4 **)(local_8 + 0x1ad) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x235);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x231) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x239) == -1) {
    *(undefined4 *)(iVar2 + 0x1b1) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x23d));
    *(undefined4 **)(local_8 + 0x1b1) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x23d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x239) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x241) == -1) {
    *(undefined4 *)(iVar2 + 0x1b5) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x245));
    *(undefined4 **)(local_8 + 0x1b5) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x245);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar9 + 0x241));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x249) == -1) {
    *(undefined4 *)(iVar2 + 0x1b9) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x24d));
    *(undefined4 **)(local_8 + 0x1b9) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x24d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x249) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x251) == -1) {
    *(undefined4 *)(iVar2 + 0x1bd) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x255));
    *(undefined4 **)(local_8 + 0x1bd) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x255);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x251) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x259) == -1) {
    *(undefined4 *)(iVar2 + 0x1c1) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x25d));
    *(undefined4 **)(local_8 + 0x1c1) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x25d);
    puVar5 = (undefined4 *)(*(int *)((int)puVar9 + 0x259) + (int)param_1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x261) == -1) {
    *(undefined4 *)(iVar2 + 0x1c5) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x265));
    *(undefined4 **)(local_8 + 0x1c5) = puVar3;
    uVar8 = *(uint *)((int)puVar9 + 0x265);
    puVar5 = (undefined4 *)((int)param_1 + *(int *)((int)puVar9 + 0x261));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar2 = local_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(int *)((int)puVar9 + 0x269) == -1) {
    *(undefined4 *)(iVar2 + 0x1c9) = 0;
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  puVar5 = (undefined4 *)FUN_006aac70(*(int *)((int)puVar9 + 0x26d));
  *(undefined4 **)(local_8 + 0x1c9) = puVar5;
  uVar8 = *(uint *)((int)puVar9 + 0x26d);
  puVar9 = (undefined4 *)(*(int *)((int)puVar9 + 0x269) + (int)param_1);
  for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar5 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return;
}

