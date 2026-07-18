
undefined4 * __thiscall STAllPlayersC::SaveGObjData(STAllPlayersC *this,int *param_1)

{
  code *pcVar1;
  STAllPlayersC *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  void *unaff_EDI;
  STAllPlayersC *pSVar12;
  undefined4 uStack_6c;
  undefined4 auStack_68 [16];
  uint *puStack_28;
  int iStack_24;
  uint *puStack_20;
  STAllPlayersC *pSStack_1c;
  undefined4 *puStack_18;
  STAllPlayersC *pSStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  uint uStack_8;
  
  uStack_6c = DAT_00858df8;
  DAT_00858df8 = &uStack_6c;
  pSStack_14 = this;
  iVar3 = __setjmp3(auStack_68,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_14;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_6c;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xe46,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    FUN_006a5e40(iVar3,0,0x7a4e0c,0xe47);
    return puStack_c;
  }
  *param_1 = 0x281;
  iVar3 = *(int *)(pSStack_14 + 0x9b) * 8 + 0x281;
  *param_1 = iVar3;
  uStack_8 = *(int *)(pSStack_14 + 0xa3) * 0x48;
  iVar3 = uStack_8 + iVar3;
  *param_1 = iVar3;
  if (*(int *)(pSStack_14 + 0x1cd) == 1) {
    *param_1 = iVar3 + 0x124;
    iVar5 = *(int *)(pSStack_14 + 0x20);
    if (iVar5 == 0x14) {
      pSVar12 = pSStack_14 + 0x171;
      puStack_20 = (uint *)0x5;
      do {
        puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar12 + -0x14),(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        *param_1 = *param_1 + uStack_8;
        puStack_c = (undefined4 *)FUN_006b0020(*(uint **)pSVar12,(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        iVar3 = *param_1;
        pSVar12 = pSVar12 + 4;
        puStack_20 = (uint *)((int)puStack_20 + -1);
        *param_1 = iVar3 + uStack_8;
      } while (puStack_20 != (uint *)0x0);
      iVar3 = iVar3 + uStack_8 + 0x4bc;
      puStack_20 = (uint *)0x0;
    }
    else if (iVar5 == 0x1ae) {
      iVar3 = iVar3 + 0x146;
    }
    else {
      if (iVar5 != 1000) goto LAB_004212f3;
      pSVar12 = pSStack_14 + 0x135;
      puStack_20 = (uint *)0x2;
      do {
        puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar12 + -8),(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        *param_1 = *param_1 + uStack_8;
        puStack_c = (undefined4 *)FUN_006b0020(*(uint **)pSVar12,(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        pSVar12 = pSVar12 + 4;
        puStack_20 = (uint *)((int)puStack_20 + -1);
        *param_1 = *param_1 + uStack_8;
      } while (puStack_20 != (uint *)0x0);
      pSVar12 = pSVar2 + 0x14d;
      puStack_20 = (uint *)0x4;
      do {
        puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar12 + -0x10),(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        *param_1 = *param_1 + uStack_8;
        puStack_c = (undefined4 *)FUN_006b0020(*(uint **)pSVar12,(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        iVar3 = *param_1;
        pSVar12 = pSVar12 + 4;
        *param_1 = iVar3 + uStack_8;
        puStack_20 = (uint *)((int)puStack_20 + -1);
      } while (puStack_20 != (uint *)0x0);
      *param_1 = iVar3 + uStack_8 + 0x272;
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar2 + 0x19d),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      *param_1 = *param_1 + uStack_8;
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar2 + 0x1a1),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      iVar3 = *param_1 + uStack_8 + 0x2e;
    }
    *param_1 = iVar3;
  }
LAB_004212f3:
  puStack_18 = (undefined4 *)FUN_006aac70(*param_1);
  *(int *)((int)puStack_18 + 0x111) = -1;
  *(undefined4 *)((int)puStack_18 + 0x115) = 0;
  *(undefined4 *)((int)puStack_18 + 0x119) = 0xffffffff;
  iVar3 = 2;
  *(undefined4 *)((int)puStack_18 + 0x11d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x121) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x125) = 0;
  *(undefined4 *)((int)puStack_18 + 0x129) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x12d) = 0;
  puStack_20 = (uint *)((int)puStack_18 + 0x135);
  puVar9 = puStack_20;
  do {
    puVar9[-1] = 0xffffffff;
    *puVar9 = 0;
    puVar9[3] = 0xffffffff;
    puVar9[4] = 0;
    puVar9 = puVar9 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = (undefined4 *)((int)puStack_18 + 0x155);
  iVar3 = 4;
  do {
    puVar4[-1] = 0xffffffff;
    *puVar4 = 0;
    puVar4[7] = 0xffffffff;
    puVar4[8] = 0;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puStack_28 = (uint *)((int)puStack_18 + 0x195);
  iVar3 = 5;
  puVar9 = puStack_28;
  do {
    puVar9[-1] = 0xffffffff;
    *puVar9 = 0;
    puVar9[9] = 0xffffffff;
    puVar9[10] = 0;
    puVar9 = puVar9 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)puStack_18 + 0x1e1) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x1e5) = 0;
  *(undefined4 *)((int)puStack_18 + 0x1e9) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x1ed) = 0;
  *(undefined4 *)((int)puStack_18 + 0x1f1) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x1f5) = 0;
  *(undefined4 *)((int)puStack_18 + 0x1f9) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x1fd) = 0;
  *(undefined4 *)((int)puStack_18 + 0x201) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x205) = 0;
  *(undefined4 *)((int)puStack_18 + 0x209) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x20d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x211) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x215) = 0;
  *(undefined4 *)((int)puStack_18 + 0x219) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x21d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x221) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x225) = 0;
  *(undefined4 *)((int)puStack_18 + 0x229) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x22d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x231) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x235) = 0;
  *(undefined4 *)((int)puStack_18 + 0x239) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x23d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x241) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x245) = 0;
  *(undefined4 *)((int)puStack_18 + 0x249) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x24d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x251) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x259) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x255) = 0;
  *(undefined4 *)((int)puStack_18 + 0x25d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x261) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x269) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x265) = 0;
  *(undefined4 *)((int)puStack_18 + 0x26d) = 0;
  *puStack_18 = *(undefined4 *)(pSVar2 + 0x1c);
  *(undefined2 *)(puStack_18 + 1) = *(undefined2 *)(pSVar2 + 0x30);
  *(undefined2 *)((int)puStack_18 + 6) = *(undefined2 *)(pSVar2 + 0x32);
  pSVar12 = pSVar2 + 0x34;
  puVar4 = puStack_18 + 2;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)pSVar12;
    pSVar12 = pSVar12 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pSVar12;
  *(STAllPlayersC *)((int)puVar4 + 2) = pSVar12[2];
  pSVar12 = pSVar2 + 0x93;
  puVar4 = (undefined4 *)((int)puStack_18 + 0x67);
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)pSVar12;
    pSVar12 = pSVar12 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pSVar12;
  *(undefined4 *)((int)puStack_18 + 0xd5) = *(undefined4 *)(pSVar2 + 0x1cd);
  *(undefined4 *)((int)puStack_18 + 0xd9) = *(undefined4 *)(pSVar2 + 0x101);
  *(undefined4 *)((int)puStack_18 + 0xdd) = *(undefined4 *)(pSVar2 + 0x105);
  *(undefined4 *)((int)puStack_18 + 0xe1) = *(undefined4 *)(pSVar2 + 0x109);
  *(undefined4 *)((int)puStack_18 + 0xe5) = *(undefined4 *)(pSVar2 + 0x10d);
  *(undefined4 *)((int)puStack_18 + 0xe9) = *(undefined4 *)(pSVar2 + 0x111);
  *(undefined4 *)((int)puStack_18 + 0xed) = *(undefined4 *)(pSVar2 + 0x115);
  *(undefined4 *)((int)puStack_18 + 0xf1) = *(undefined4 *)(pSVar2 + 0x119);
  *(undefined4 *)((int)puStack_18 + 0xf5) = *(undefined4 *)(pSVar2 + 0x1d1);
  *(undefined4 *)((int)puStack_18 + 0xf9) = *(undefined4 *)(pSVar2 + 0x215);
  *(undefined4 *)((int)puStack_18 + 0xfd) = *(undefined4 *)(pSVar2 + 0x219);
  *(undefined4 *)((int)puStack_18 + 0x101) = *(undefined4 *)(pSVar2 + 0x21d);
  *(undefined4 *)((int)puStack_18 + 0x105) = *(undefined4 *)(pSVar2 + 0x221);
  *(undefined4 *)((int)puStack_18 + 0x109) = *(undefined4 *)(pSVar2 + 0x225);
  *(undefined4 *)((int)puStack_18 + 0x10d) = 0;
  iVar3 = *(uint *)(pSVar2 + 0x9b) * 8;
  puVar4 = *(undefined4 **)(pSVar2 + 0x97);
  puVar11 = (undefined4 *)((int)puStack_18 + 0x281);
  for (iVar5 = (*(uint *)(pSVar2 + 0x9b) & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  *(undefined4 *)((int)puStack_18 + 0x271) = 0x281;
  *(int *)((int)puStack_18 + 0x275) = iVar3;
  iVar3 = iVar3 + 0x281;
  iVar5 = *(int *)(pSStack_14 + 0xa3) * 0x48;
  puVar4 = *(undefined4 **)(pSStack_14 + 0x9f);
  puVar11 = (undefined4 *)(iVar3 + (int)puStack_18);
  for (iVar6 = (*(int *)(pSStack_14 + 0xa3) * 9 & 0x1fffffffU) << 1; iVar6 != 0; iVar6 = iVar6 + -1)
  {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  *(int *)((int)puStack_18 + 0x279) = iVar3;
  *(int *)((int)puStack_18 + 0x27d) = iVar5;
  puStack_c = puStack_18;
  if (*(int *)(pSStack_14 + 0x1cd) == 1) {
    iVar3 = iVar3 + iVar5;
    puVar4 = *(undefined4 **)(pSStack_14 + 0x11d);
    puVar11 = (undefined4 *)((int)puStack_18 + iVar3);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
    *(int *)((int)puStack_18 + 0x111) = iVar3;
    *(undefined4 *)((int)puStack_18 + 0x115) = 0x36;
    puVar4 = *(undefined4 **)(pSStack_14 + 0x121);
    puVar11 = (undefined4 *)((int)puStack_18 + iVar3 + 0x36);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
    *(int *)((int)puStack_18 + 0x119) = iVar3 + 0x36;
    *(undefined4 *)((int)puStack_18 + 0x11d) = 0x36;
    puVar4 = *(undefined4 **)(pSStack_14 + 0x125);
    puVar11 = (undefined4 *)((int)puStack_18 + iVar3 + 0x6c);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(int *)((int)puStack_18 + 0x121) = iVar3 + 0x6c;
    *(undefined4 *)((int)puStack_18 + 0x125) = 0x5c;
    uVar10 = iVar3 + 200;
    uStack_8 = 0x5c;
    puVar4 = *(undefined4 **)(pSStack_14 + 0x129);
    puVar11 = (undefined4 *)((int)puStack_18 + uVar10);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(uint *)((int)puStack_18 + 0x129) = uVar10;
    *(undefined4 *)((int)puStack_18 + 0x12d) = 0x5c;
    iVar5 = *(int *)(pSStack_14 + 0x20);
    if (iVar5 == 0x14) {
      pSStack_1c = pSStack_14 + 0x171;
      iStack_24 = 5;
      puStack_20 = puStack_28;
      do {
        uVar10 = uVar10 + uStack_8;
        puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_1c + -0x14),(int *)&uStack_8);
        puVar4 = puStack_10;
        puVar11 = (undefined4 *)(uVar10 + (int)puStack_c);
        for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puStack_20[-1] = uVar10;
        *puStack_20 = uStack_8;
        FUN_006ab060(&puStack_10);
        uVar10 = uVar10 + uStack_8;
        puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)pSStack_1c,(int *)&uStack_8);
        puVar9 = puStack_20;
        puVar4 = puStack_10;
        puVar11 = (undefined4 *)(uVar10 + (int)puStack_c);
        for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puStack_20[9] = uVar10;
        puStack_20[10] = uStack_8;
        FUN_006ab060(&puStack_10);
        pSStack_1c = pSStack_1c + 4;
        puStack_20 = puVar9 + 2;
        iStack_24 = iStack_24 + -1;
      } while (iStack_24 != 0);
      iVar5 = uVar10 + uStack_8;
      puVar4 = *(undefined4 **)(pSStack_14 + 0x195);
      puVar11 = (undefined4 *)((int)puStack_c + iVar5);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      puVar11[2] = puVar4[2];
      puVar11[3] = puVar4[3];
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar4 + 4);
      *(undefined1 *)((int)puVar11 + 0x12) = *(undefined1 *)((int)puVar4 + 0x12);
      *(int *)((int)puStack_18 + 0x201) = iVar5;
      *(undefined4 *)((int)puStack_18 + 0x205) = 0x13;
      puVar4 = *(undefined4 **)(pSStack_14 + 0x199);
      puVar11 = (undefined4 *)((int)puStack_c + iVar5 + 0x13);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      puVar11[2] = puVar4[2];
      puVar11[3] = puVar4[3];
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar4 + 4);
      *(undefined1 *)((int)puVar11 + 0x12) = *(undefined1 *)((int)puVar4 + 0x12);
      *(int *)((int)puStack_18 + 0x209) = iVar5 + 0x13;
      *(undefined4 *)((int)puStack_18 + 0x20d) = 0x13;
      puVar4 = *(undefined4 **)(pSStack_14 + 0x1ad);
      puVar11 = (undefined4 *)((int)puStack_c + iVar5 + 0x26);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
      *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
      *(int *)((int)puStack_18 + 0x231) = iVar5 + 0x26;
      *(undefined4 *)((int)puStack_18 + 0x235) = 0xb;
      puVar4 = *(undefined4 **)(pSStack_14 + 0x1b1);
      puVar11 = (undefined4 *)((int)puStack_c + iVar5 + 0x31);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
      *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
      *(int *)((int)puStack_18 + 0x239) = iVar5 + 0x31;
      *(undefined4 *)((int)puStack_18 + 0x23d) = 0xb;
      puVar4 = *(undefined4 **)(pSStack_14 + 0x1bd);
      puVar11 = (undefined4 *)((int)puStack_c + iVar5 + 0x3c);
      for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      *(int *)((int)puStack_18 + 0x251) = iVar5 + 0x3c;
      *(undefined4 *)((int)puStack_18 + 0x255) = 0x240;
      puVar4 = *(undefined4 **)(pSStack_14 + 0x1c1);
      puVar11 = (undefined4 *)(iVar5 + 0x27c + (int)puStack_c);
      for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      *(int *)((int)puStack_18 + 0x259) = iVar5 + 0x27c;
      *(undefined4 *)((int)puStack_18 + 0x25d) = 0x240;
    }
    else {
      if (iVar5 == 0x1ae) {
        puVar4 = *(undefined4 **)(pSStack_14 + 0x1ad);
        puVar11 = (undefined4 *)((int)puStack_18 + iVar3 + 0x124);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
        *(int *)((int)puStack_18 + 0x231) = iVar3 + 0x124;
        *(undefined4 *)((int)puStack_18 + 0x235) = 0xb;
        puVar4 = *(undefined4 **)(pSStack_14 + 0x1b1);
        puVar11 = (undefined4 *)((int)puStack_18 + iVar3 + 0x12f);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
        *(int *)((int)puStack_18 + 0x239) = iVar3 + 0x12f;
        *(undefined4 *)((int)puStack_18 + 0x23d) = 0xb;
        puVar4 = *(undefined4 **)(pSStack_14 + 0x1c5);
        puVar11 = (undefined4 *)((int)puStack_18 + iVar3 + 0x13a);
        *puVar11 = *puVar4;
        *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar4 + 1);
        *(int *)((int)puStack_18 + 0x261) = iVar3 + 0x13a;
        *(undefined4 *)((int)puStack_18 + 0x265) = 6;
        puVar4 = *(undefined4 **)(pSStack_14 + 0x1c9);
        puVar11 = (undefined4 *)((int)puStack_18 + iVar3 + 0x140);
        *puVar11 = *puVar4;
        *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar4 + 1);
        *(int *)((int)puStack_18 + 0x269) = iVar3 + 0x140;
        *(undefined4 *)((int)puStack_18 + 0x26d) = 6;
        DAT_00858df8 = (undefined4 *)uStack_6c;
        return puStack_18;
      }
      if (iVar5 == 1000) {
        pSStack_1c = pSStack_14 + 0x135;
        iStack_24 = 2;
        do {
          uVar10 = uVar10 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_1c + -8),(int *)&uStack_8);
          puVar4 = puStack_10;
          puVar11 = (undefined4 *)(uVar10 + (int)puStack_c);
          for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puStack_20[-1] = uVar10;
          *puStack_20 = uStack_8;
          FUN_006ab060(&puStack_10);
          uVar10 = uVar10 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)pSStack_1c,(int *)&uStack_8);
          puVar9 = puStack_20;
          puVar4 = puStack_10;
          puVar11 = (undefined4 *)(uVar10 + (int)puStack_c);
          for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puStack_20[3] = uVar10;
          puStack_20[4] = uStack_8;
          FUN_006ab060(&puStack_10);
          pSStack_1c = pSStack_1c + 4;
          puStack_20 = puVar9 + 2;
          iStack_24 = iStack_24 + -1;
        } while (iStack_24 != 0);
        pSStack_1c = pSStack_14 + 0x14d;
        puStack_20 = (uint *)((int)puStack_18 + 0x155);
        iStack_24 = 4;
        do {
          uVar10 = uVar10 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_1c + -0x10),(int *)&uStack_8);
          puVar4 = puStack_10;
          puVar11 = (undefined4 *)(uVar10 + (int)puStack_c);
          for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puStack_20[-1] = uVar10;
          *puStack_20 = uStack_8;
          FUN_006ab060(&puStack_10);
          uVar10 = uVar10 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)pSStack_1c,(int *)&uStack_8);
          puVar9 = puStack_20;
          puVar4 = puStack_10;
          puVar11 = (undefined4 *)(uVar10 + (int)puStack_c);
          for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puStack_20[7] = uVar10;
          puStack_20[8] = uStack_8;
          FUN_006ab060(&puStack_10);
          pSStack_1c = pSStack_1c + 4;
          puStack_20 = puVar9 + 2;
          iStack_24 = iStack_24 + -1;
        } while (iStack_24 != 0);
        iVar5 = uVar10 + uStack_8;
        puVar4 = *(undefined4 **)(pSStack_14 + 0x185);
        puVar11 = (undefined4 *)(iVar5 + (int)puStack_c);
        for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
        *(int *)((int)puStack_18 + 0x1e1) = iVar5;
        *(undefined4 *)((int)puStack_18 + 0x1e5) = 0x129;
        puVar4 = *(undefined4 **)(pSStack_14 + 0x189);
        puVar11 = (undefined4 *)((int)puStack_c + iVar5 + 0x129);
        for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
        *(int *)((int)puStack_18 + 0x1e9) = iVar5 + 0x129;
        *(undefined4 *)((int)puStack_18 + 0x1ed) = 0x129;
        puVar4 = *(undefined4 **)(pSStack_14 + 0x18d);
        puVar11 = (undefined4 *)((int)puStack_c + iVar5 + 0x252);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        puVar11[2] = puVar4[2];
        puVar11[3] = puVar4[3];
        *(int *)((int)puStack_18 + 0x1f1) = iVar5 + 0x252;
        *(undefined4 *)((int)puStack_18 + 0x1f5) = 0x10;
        puVar4 = *(undefined4 **)(pSStack_14 + 0x191);
        uStack_8 = 0x10;
        puVar11 = (undefined4 *)((int)puStack_c + iVar5 + 0x262);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        puVar11[2] = puVar4[2];
        puVar11[3] = puVar4[3];
        *(int *)((int)puStack_18 + 0x1f9) = iVar5 + 0x262;
        *(undefined4 *)((int)puStack_18 + 0x1fd) = 0x10;
        iVar5 = iVar5 + 0x272;
        puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_14 + 0x19d),(int *)&uStack_8);
        puVar4 = puStack_10;
        puVar11 = (undefined4 *)(iVar5 + (int)puStack_c);
        for (uVar10 = uStack_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar10 = uStack_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(int *)((int)puStack_18 + 0x211) = iVar5;
        *(uint *)((int)puStack_18 + 0x215) = uStack_8;
        FUN_006ab060(&puStack_10);
        iVar5 = iVar5 + uStack_8;
        puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_14 + 0x1a1),(int *)&uStack_8);
        puVar4 = puStack_18;
        puVar11 = puStack_10;
        puVar8 = (undefined4 *)(iVar5 + (int)puStack_c);
        for (uVar10 = uStack_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar10 = uStack_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(int *)((int)puStack_18 + 0x219) = iVar5;
        *(uint *)((int)puStack_18 + 0x21d) = uStack_8;
        FUN_006ab060(&puStack_10);
        iVar5 = iVar5 + uStack_8;
        puVar8 = (undefined4 *)((int)puStack_c + iVar5);
        puVar11 = *(undefined4 **)(pSStack_14 + 0x1a5);
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        *(int *)((int)puVar4 + 0x221) = iVar5;
        *(undefined4 *)((int)puVar4 + 0x225) = 0xc;
        puVar11 = *(undefined4 **)(pSStack_14 + 0x1a9);
        puVar8 = (undefined4 *)((int)puStack_c + iVar5 + 0xc);
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        *(int *)((int)puVar4 + 0x229) = iVar5 + 0xc;
        *(undefined4 *)((int)puVar4 + 0x22d) = 0xc;
        puVar11 = *(undefined4 **)(pSStack_14 + 0x1b5);
        puVar8 = (undefined4 *)((int)puStack_c + iVar5 + 0x18);
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar11 + 2);
        *(undefined1 *)((int)puVar8 + 10) = *(undefined1 *)((int)puVar11 + 10);
        *(int *)((int)puVar4 + 0x241) = iVar5 + 0x18;
        *(undefined4 *)((int)puVar4 + 0x245) = 0xb;
        puVar8 = *(undefined4 **)(pSStack_14 + 0x1b9);
        puVar11 = (undefined4 *)(iVar5 + 0x23 + (int)puStack_c);
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar8 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar8 + 10);
        *(int *)((int)puVar4 + 0x249) = iVar5 + 0x23;
        *(undefined4 *)((int)puVar4 + 0x24d) = 0xb;
        DAT_00858df8 = (undefined4 *)uStack_6c;
        return puStack_c;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_6c;
  return puStack_c;
}

