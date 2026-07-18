
undefined4 * thunk_FUN_004210e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  void *unaff_EDI;
  undefined4 uStack_6c;
  undefined4 auStack_68 [16];
  uint *puStack_28;
  int iStack_24;
  uint *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  uint uStack_8;
  
  uStack_6c = DAT_00858df8;
  DAT_00858df8 = &uStack_6c;
  iVar2 = __setjmp3(auStack_68,0,unaff_EDI,unaff_ESI);
  iVar5 = iStack_14;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_6c;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xe46,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined4 *)(*pcVar1)();
      return puVar3;
    }
    FUN_006a5e40(iVar2,0,0x7a4e0c,0xe47);
    return puStack_c;
  }
  *param_1 = 0x281;
  iVar2 = *(int *)(iStack_14 + 0x9b) * 8 + 0x281;
  *param_1 = iVar2;
  uStack_8 = *(int *)(iStack_14 + 0xa3) * 0x48;
  iVar2 = uStack_8 + iVar2;
  *param_1 = iVar2;
  if (*(int *)(iStack_14 + 0x1cd) == 1) {
    *param_1 = iVar2 + 0x124;
    iVar4 = *(int *)(iStack_14 + 0x20);
    if (iVar4 == 0x14) {
      puVar3 = (undefined4 *)(iStack_14 + 0x171);
      puStack_20 = (uint *)0x5;
      do {
        puStack_c = (undefined4 *)FUN_006b0020((uint *)puVar3[-5],(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        *param_1 = *param_1 + uStack_8;
        puStack_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        iVar2 = *param_1;
        puVar3 = puVar3 + 1;
        puStack_20 = (uint *)((int)puStack_20 + -1);
        *param_1 = iVar2 + uStack_8;
      } while (puStack_20 != (uint *)0x0);
      iVar2 = iVar2 + uStack_8 + 0x4bc;
      puStack_20 = (uint *)0x0;
    }
    else if (iVar4 == 0x1ae) {
      iVar2 = iVar2 + 0x146;
    }
    else {
      if (iVar4 != 1000) goto LAB_004212f3;
      puVar3 = (undefined4 *)(iStack_14 + 0x135);
      puStack_20 = (uint *)0x2;
      do {
        puStack_c = (undefined4 *)FUN_006b0020((uint *)puVar3[-2],(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        *param_1 = *param_1 + uStack_8;
        puStack_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        puVar3 = puVar3 + 1;
        puStack_20 = (uint *)((int)puStack_20 + -1);
        *param_1 = *param_1 + uStack_8;
      } while (puStack_20 != (uint *)0x0);
      puVar3 = (undefined4 *)(iVar5 + 0x14d);
      puStack_20 = (uint *)0x4;
      do {
        puStack_c = (undefined4 *)FUN_006b0020((uint *)puVar3[-4],(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        *param_1 = *param_1 + uStack_8;
        puStack_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&uStack_8);
        FUN_006ab060(&puStack_c);
        iVar2 = *param_1;
        puVar3 = puVar3 + 1;
        *param_1 = iVar2 + uStack_8;
        puStack_20 = (uint *)((int)puStack_20 + -1);
      } while (puStack_20 != (uint *)0x0);
      *param_1 = iVar2 + uStack_8 + 0x272;
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x19d),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      *param_1 = *param_1 + uStack_8;
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x1a1),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      iVar2 = *param_1 + uStack_8 + 0x2e;
    }
    *param_1 = iVar2;
  }
LAB_004212f3:
  puStack_18 = (undefined4 *)FUN_006aac70(*param_1);
  *(int *)((int)puStack_18 + 0x111) = -1;
  *(undefined4 *)((int)puStack_18 + 0x115) = 0;
  *(undefined4 *)((int)puStack_18 + 0x119) = 0xffffffff;
  iVar2 = 2;
  *(undefined4 *)((int)puStack_18 + 0x11d) = 0;
  *(undefined4 *)((int)puStack_18 + 0x121) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x125) = 0;
  *(undefined4 *)((int)puStack_18 + 0x129) = 0xffffffff;
  *(undefined4 *)((int)puStack_18 + 0x12d) = 0;
  puStack_20 = (uint *)((int)puStack_18 + 0x135);
  puVar8 = puStack_20;
  do {
    puVar8[-1] = 0xffffffff;
    *puVar8 = 0;
    puVar8[3] = 0xffffffff;
    puVar8[4] = 0;
    puVar8 = puVar8 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = (undefined4 *)((int)puStack_18 + 0x155);
  iVar2 = 4;
  do {
    puVar3[-1] = 0xffffffff;
    *puVar3 = 0;
    puVar3[7] = 0xffffffff;
    puVar3[8] = 0;
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puStack_28 = (uint *)((int)puStack_18 + 0x195);
  iVar2 = 5;
  puVar8 = puStack_28;
  do {
    puVar8[-1] = 0xffffffff;
    *puVar8 = 0;
    puVar8[9] = 0xffffffff;
    puVar8[10] = 0;
    puVar8 = puVar8 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
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
  *puStack_18 = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined2 *)(puStack_18 + 1) = *(undefined2 *)(iVar5 + 0x30);
  *(undefined2 *)((int)puStack_18 + 6) = *(undefined2 *)(iVar5 + 0x32);
  puVar3 = (undefined4 *)(iVar5 + 0x34);
  puVar10 = puStack_18 + 2;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar3;
  *(undefined1 *)((int)puVar10 + 2) = *(undefined1 *)((int)puVar3 + 2);
  puVar3 = (undefined4 *)(iVar5 + 0x93);
  puVar10 = (undefined4 *)((int)puStack_18 + 0x67);
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar3;
  *(undefined4 *)((int)puStack_18 + 0xd5) = *(undefined4 *)(iVar5 + 0x1cd);
  *(undefined4 *)((int)puStack_18 + 0xd9) = *(undefined4 *)(iVar5 + 0x101);
  *(undefined4 *)((int)puStack_18 + 0xdd) = *(undefined4 *)(iVar5 + 0x105);
  *(undefined4 *)((int)puStack_18 + 0xe1) = *(undefined4 *)(iVar5 + 0x109);
  *(undefined4 *)((int)puStack_18 + 0xe5) = *(undefined4 *)(iVar5 + 0x10d);
  *(undefined4 *)((int)puStack_18 + 0xe9) = *(undefined4 *)(iVar5 + 0x111);
  *(undefined4 *)((int)puStack_18 + 0xed) = *(undefined4 *)(iVar5 + 0x115);
  *(undefined4 *)((int)puStack_18 + 0xf1) = *(undefined4 *)(iVar5 + 0x119);
  *(undefined4 *)((int)puStack_18 + 0xf5) = *(undefined4 *)(iVar5 + 0x1d1);
  *(undefined4 *)((int)puStack_18 + 0xf9) = *(undefined4 *)(iVar5 + 0x215);
  *(undefined4 *)((int)puStack_18 + 0xfd) = *(undefined4 *)(iVar5 + 0x219);
  *(undefined4 *)((int)puStack_18 + 0x101) = *(undefined4 *)(iVar5 + 0x21d);
  *(undefined4 *)((int)puStack_18 + 0x105) = *(undefined4 *)(iVar5 + 0x221);
  *(undefined4 *)((int)puStack_18 + 0x109) = *(undefined4 *)(iVar5 + 0x225);
  *(undefined4 *)((int)puStack_18 + 0x10d) = 0;
  iVar2 = *(uint *)(iVar5 + 0x9b) * 8;
  puVar3 = *(undefined4 **)(iVar5 + 0x97);
  puVar10 = (undefined4 *)((int)puStack_18 + 0x281);
  for (iVar4 = (*(uint *)(iVar5 + 0x9b) & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *(undefined4 *)((int)puStack_18 + 0x271) = 0x281;
  *(int *)((int)puStack_18 + 0x275) = iVar2;
  iVar2 = iVar2 + 0x281;
  iVar5 = *(int *)(iStack_14 + 0xa3) * 0x48;
  puVar3 = *(undefined4 **)(iStack_14 + 0x9f);
  puVar10 = (undefined4 *)(iVar2 + (int)puStack_18);
  for (iVar4 = (*(int *)(iStack_14 + 0xa3) * 9 & 0x1fffffffU) << 1; iVar4 != 0; iVar4 = iVar4 + -1)
  {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *(int *)((int)puStack_18 + 0x279) = iVar2;
  *(int *)((int)puStack_18 + 0x27d) = iVar5;
  puStack_c = puStack_18;
  if (*(int *)(iStack_14 + 0x1cd) == 1) {
    iVar2 = iVar2 + iVar5;
    puVar3 = *(undefined4 **)(iStack_14 + 0x11d);
    puVar10 = (undefined4 *)((int)puStack_18 + iVar2);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar3;
    *(int *)((int)puStack_18 + 0x111) = iVar2;
    *(undefined4 *)((int)puStack_18 + 0x115) = 0x36;
    puVar3 = *(undefined4 **)(iStack_14 + 0x121);
    puVar10 = (undefined4 *)((int)puStack_18 + iVar2 + 0x36);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar3;
    *(int *)((int)puStack_18 + 0x119) = iVar2 + 0x36;
    *(undefined4 *)((int)puStack_18 + 0x11d) = 0x36;
    puVar3 = *(undefined4 **)(iStack_14 + 0x125);
    puVar10 = (undefined4 *)((int)puStack_18 + iVar2 + 0x6c);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(int *)((int)puStack_18 + 0x121) = iVar2 + 0x6c;
    *(undefined4 *)((int)puStack_18 + 0x125) = 0x5c;
    uVar9 = iVar2 + 200;
    uStack_8 = 0x5c;
    puVar3 = *(undefined4 **)(iStack_14 + 0x129);
    puVar10 = (undefined4 *)((int)puStack_18 + uVar9);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(uint *)((int)puStack_18 + 0x129) = uVar9;
    *(undefined4 *)((int)puStack_18 + 0x12d) = 0x5c;
    iVar5 = *(int *)(iStack_14 + 0x20);
    if (iVar5 == 0x14) {
      puStack_1c = (undefined4 *)(iStack_14 + 0x171);
      iStack_24 = 5;
      puStack_20 = puStack_28;
      do {
        uVar9 = uVar9 + uStack_8;
        puStack_10 = (undefined4 *)FUN_006b0020((uint *)puStack_1c[-5],(int *)&uStack_8);
        puVar3 = puStack_10;
        puVar10 = (undefined4 *)(uVar9 + (int)puStack_c);
        for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puStack_20[-1] = uVar9;
        *puStack_20 = uStack_8;
        FUN_006ab060(&puStack_10);
        uVar9 = uVar9 + uStack_8;
        puStack_10 = (undefined4 *)FUN_006b0020((uint *)*puStack_1c,(int *)&uStack_8);
        puVar8 = puStack_20;
        puVar3 = puStack_10;
        puVar10 = (undefined4 *)(uVar9 + (int)puStack_c);
        for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puStack_20[9] = uVar9;
        puStack_20[10] = uStack_8;
        FUN_006ab060(&puStack_10);
        puStack_1c = puStack_1c + 1;
        puStack_20 = puVar8 + 2;
        iStack_24 = iStack_24 + -1;
      } while (iStack_24 != 0);
      iVar2 = uVar9 + uStack_8;
      puVar3 = *(undefined4 **)(iStack_14 + 0x195);
      puVar10 = (undefined4 *)((int)puStack_c + iVar2);
      *puVar10 = *puVar3;
      puVar10[1] = puVar3[1];
      puVar10[2] = puVar3[2];
      puVar10[3] = puVar3[3];
      *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar3 + 4);
      *(undefined1 *)((int)puVar10 + 0x12) = *(undefined1 *)((int)puVar3 + 0x12);
      *(int *)((int)puStack_18 + 0x201) = iVar2;
      *(undefined4 *)((int)puStack_18 + 0x205) = 0x13;
      puVar3 = *(undefined4 **)(iStack_14 + 0x199);
      puVar10 = (undefined4 *)((int)puStack_c + iVar2 + 0x13);
      *puVar10 = *puVar3;
      puVar10[1] = puVar3[1];
      puVar10[2] = puVar3[2];
      puVar10[3] = puVar3[3];
      *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar3 + 4);
      *(undefined1 *)((int)puVar10 + 0x12) = *(undefined1 *)((int)puVar3 + 0x12);
      *(int *)((int)puStack_18 + 0x209) = iVar2 + 0x13;
      *(undefined4 *)((int)puStack_18 + 0x20d) = 0x13;
      puVar3 = *(undefined4 **)(iStack_14 + 0x1ad);
      puVar10 = (undefined4 *)((int)puStack_c + iVar2 + 0x26);
      *puVar10 = *puVar3;
      puVar10[1] = puVar3[1];
      *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar3 + 2);
      *(undefined1 *)((int)puVar10 + 10) = *(undefined1 *)((int)puVar3 + 10);
      *(int *)((int)puStack_18 + 0x231) = iVar2 + 0x26;
      *(undefined4 *)((int)puStack_18 + 0x235) = 0xb;
      puVar3 = *(undefined4 **)(iStack_14 + 0x1b1);
      puVar10 = (undefined4 *)((int)puStack_c + iVar2 + 0x31);
      *puVar10 = *puVar3;
      puVar10[1] = puVar3[1];
      *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar3 + 2);
      *(undefined1 *)((int)puVar10 + 10) = *(undefined1 *)((int)puVar3 + 10);
      *(int *)((int)puStack_18 + 0x239) = iVar2 + 0x31;
      *(undefined4 *)((int)puStack_18 + 0x23d) = 0xb;
      puVar3 = *(undefined4 **)(iStack_14 + 0x1bd);
      puVar10 = (undefined4 *)((int)puStack_c + iVar2 + 0x3c);
      for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar10 = puVar10 + 1;
      }
      *(int *)((int)puStack_18 + 0x251) = iVar2 + 0x3c;
      *(undefined4 *)((int)puStack_18 + 0x255) = 0x240;
      puVar3 = *(undefined4 **)(iStack_14 + 0x1c1);
      puVar10 = (undefined4 *)(iVar2 + 0x27c + (int)puStack_c);
      for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar10 = puVar10 + 1;
      }
      *(int *)((int)puStack_18 + 0x259) = iVar2 + 0x27c;
      *(undefined4 *)((int)puStack_18 + 0x25d) = 0x240;
    }
    else {
      if (iVar5 == 0x1ae) {
        puVar3 = *(undefined4 **)(iStack_14 + 0x1ad);
        puVar10 = (undefined4 *)((int)puStack_18 + iVar2 + 0x124);
        *puVar10 = *puVar3;
        puVar10[1] = puVar3[1];
        *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar3 + 2);
        *(undefined1 *)((int)puVar10 + 10) = *(undefined1 *)((int)puVar3 + 10);
        *(int *)((int)puStack_18 + 0x231) = iVar2 + 0x124;
        *(undefined4 *)((int)puStack_18 + 0x235) = 0xb;
        puVar3 = *(undefined4 **)(iStack_14 + 0x1b1);
        puVar10 = (undefined4 *)((int)puStack_18 + iVar2 + 0x12f);
        *puVar10 = *puVar3;
        puVar10[1] = puVar3[1];
        *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar3 + 2);
        *(undefined1 *)((int)puVar10 + 10) = *(undefined1 *)((int)puVar3 + 10);
        *(int *)((int)puStack_18 + 0x239) = iVar2 + 0x12f;
        *(undefined4 *)((int)puStack_18 + 0x23d) = 0xb;
        puVar3 = *(undefined4 **)(iStack_14 + 0x1c5);
        puVar10 = (undefined4 *)((int)puStack_18 + iVar2 + 0x13a);
        *puVar10 = *puVar3;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar3 + 1);
        *(int *)((int)puStack_18 + 0x261) = iVar2 + 0x13a;
        *(undefined4 *)((int)puStack_18 + 0x265) = 6;
        puVar3 = *(undefined4 **)(iStack_14 + 0x1c9);
        puVar10 = (undefined4 *)((int)puStack_18 + iVar2 + 0x140);
        *puVar10 = *puVar3;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar3 + 1);
        *(int *)((int)puStack_18 + 0x269) = iVar2 + 0x140;
        *(undefined4 *)((int)puStack_18 + 0x26d) = 6;
        DAT_00858df8 = (undefined4 *)uStack_6c;
        return puStack_18;
      }
      if (iVar5 == 1000) {
        puStack_1c = (undefined4 *)(iStack_14 + 0x135);
        iStack_24 = 2;
        do {
          uVar9 = uVar9 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020((uint *)puStack_1c[-2],(int *)&uStack_8);
          puVar3 = puStack_10;
          puVar10 = (undefined4 *)(uVar9 + (int)puStack_c);
          for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          puStack_20[-1] = uVar9;
          *puStack_20 = uStack_8;
          FUN_006ab060(&puStack_10);
          uVar9 = uVar9 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020((uint *)*puStack_1c,(int *)&uStack_8);
          puVar8 = puStack_20;
          puVar3 = puStack_10;
          puVar10 = (undefined4 *)(uVar9 + (int)puStack_c);
          for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          puStack_20[3] = uVar9;
          puStack_20[4] = uStack_8;
          FUN_006ab060(&puStack_10);
          puStack_1c = puStack_1c + 1;
          puStack_20 = puVar8 + 2;
          iStack_24 = iStack_24 + -1;
        } while (iStack_24 != 0);
        puStack_1c = (undefined4 *)(iStack_14 + 0x14d);
        puStack_20 = (uint *)((int)puStack_18 + 0x155);
        iStack_24 = 4;
        do {
          uVar9 = uVar9 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020((uint *)puStack_1c[-4],(int *)&uStack_8);
          puVar3 = puStack_10;
          puVar10 = (undefined4 *)(uVar9 + (int)puStack_c);
          for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          puStack_20[-1] = uVar9;
          *puStack_20 = uStack_8;
          FUN_006ab060(&puStack_10);
          uVar9 = uVar9 + uStack_8;
          puStack_10 = (undefined4 *)FUN_006b0020((uint *)*puStack_1c,(int *)&uStack_8);
          puVar8 = puStack_20;
          puVar3 = puStack_10;
          puVar10 = (undefined4 *)(uVar9 + (int)puStack_c);
          for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          puStack_20[7] = uVar9;
          puStack_20[8] = uStack_8;
          FUN_006ab060(&puStack_10);
          puStack_1c = puStack_1c + 1;
          puStack_20 = puVar8 + 2;
          iStack_24 = iStack_24 + -1;
        } while (iStack_24 != 0);
        iVar2 = uVar9 + uStack_8;
        puVar3 = *(undefined4 **)(iStack_14 + 0x185);
        puVar10 = (undefined4 *)(iVar2 + (int)puStack_c);
        for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
        *(int *)((int)puStack_18 + 0x1e1) = iVar2;
        *(undefined4 *)((int)puStack_18 + 0x1e5) = 0x129;
        puVar3 = *(undefined4 **)(iStack_14 + 0x189);
        puVar10 = (undefined4 *)((int)puStack_c + iVar2 + 0x129);
        for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
        *(int *)((int)puStack_18 + 0x1e9) = iVar2 + 0x129;
        *(undefined4 *)((int)puStack_18 + 0x1ed) = 0x129;
        puVar3 = *(undefined4 **)(iStack_14 + 0x18d);
        puVar10 = (undefined4 *)((int)puStack_c + iVar2 + 0x252);
        *puVar10 = *puVar3;
        puVar10[1] = puVar3[1];
        puVar10[2] = puVar3[2];
        puVar10[3] = puVar3[3];
        *(int *)((int)puStack_18 + 0x1f1) = iVar2 + 0x252;
        *(undefined4 *)((int)puStack_18 + 0x1f5) = 0x10;
        puVar3 = *(undefined4 **)(iStack_14 + 0x191);
        uStack_8 = 0x10;
        puVar10 = (undefined4 *)((int)puStack_c + iVar2 + 0x262);
        *puVar10 = *puVar3;
        puVar10[1] = puVar3[1];
        puVar10[2] = puVar3[2];
        puVar10[3] = puVar3[3];
        *(int *)((int)puStack_18 + 0x1f9) = iVar2 + 0x262;
        *(undefined4 *)((int)puStack_18 + 0x1fd) = 0x10;
        iVar2 = iVar2 + 0x272;
        puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)(iStack_14 + 0x19d),(int *)&uStack_8);
        puVar3 = puStack_10;
        puVar10 = (undefined4 *)(iVar2 + (int)puStack_c);
        for (uVar9 = uStack_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar9 = uStack_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(int *)((int)puStack_18 + 0x211) = iVar2;
        *(uint *)((int)puStack_18 + 0x215) = uStack_8;
        FUN_006ab060(&puStack_10);
        iVar2 = iVar2 + uStack_8;
        puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)(iStack_14 + 0x1a1),(int *)&uStack_8);
        puVar3 = puStack_18;
        puVar10 = puStack_10;
        puVar7 = (undefined4 *)(iVar2 + (int)puStack_c);
        for (uVar9 = uStack_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar9 = uStack_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(int *)((int)puStack_18 + 0x219) = iVar2;
        *(uint *)((int)puStack_18 + 0x21d) = uStack_8;
        FUN_006ab060(&puStack_10);
        iVar2 = iVar2 + uStack_8;
        puVar7 = (undefined4 *)((int)puStack_c + iVar2);
        puVar10 = *(undefined4 **)(iStack_14 + 0x1a5);
        *puVar7 = *puVar10;
        puVar7[1] = puVar10[1];
        puVar7[2] = puVar10[2];
        *(int *)((int)puVar3 + 0x221) = iVar2;
        *(undefined4 *)((int)puVar3 + 0x225) = 0xc;
        puVar10 = *(undefined4 **)(iStack_14 + 0x1a9);
        puVar7 = (undefined4 *)((int)puStack_c + iVar2 + 0xc);
        *puVar7 = *puVar10;
        puVar7[1] = puVar10[1];
        puVar7[2] = puVar10[2];
        *(int *)((int)puVar3 + 0x229) = iVar2 + 0xc;
        *(undefined4 *)((int)puVar3 + 0x22d) = 0xc;
        puVar10 = *(undefined4 **)(iStack_14 + 0x1b5);
        puVar7 = (undefined4 *)((int)puStack_c + iVar2 + 0x18);
        *puVar7 = *puVar10;
        puVar7[1] = puVar10[1];
        *(undefined2 *)(puVar7 + 2) = *(undefined2 *)(puVar10 + 2);
        *(undefined1 *)((int)puVar7 + 10) = *(undefined1 *)((int)puVar10 + 10);
        *(int *)((int)puVar3 + 0x241) = iVar2 + 0x18;
        *(undefined4 *)((int)puVar3 + 0x245) = 0xb;
        puVar7 = *(undefined4 **)(iStack_14 + 0x1b9);
        puVar10 = (undefined4 *)(iVar2 + 0x23 + (int)puStack_c);
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar7 + 2);
        *(undefined1 *)((int)puVar10 + 10) = *(undefined1 *)((int)puVar7 + 10);
        *(int *)((int)puVar3 + 0x249) = iVar2 + 0x23;
        *(undefined4 *)((int)puVar3 + 0x24d) = 0xb;
        DAT_00858df8 = (undefined4 *)uStack_6c;
        return puStack_c;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_6c;
  return puStack_c;
}

