
undefined4 * FUN_004a4f10(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_5c;
  undefined4 local_58 [16];
  undefined4 *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  iVar5 = local_14;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1495,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    FUN_006a5e40(iVar2,0,0x7abe3c,0x1496);
    return local_18;
  }
  *param_1 = 0x321;
  if (*(int **)(local_14 + 0x59) != (int *)0x0) {
    iVar2 = **(int **)(local_14 + 0x59) * 0x10;
    local_8 = iVar2 + 0xc;
    *param_1 = iVar2 + 0x32d;
  }
  if (*(uint **)(local_14 + 0xef) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0xef),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x103) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x103),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x10f) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x10f),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x127) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x127),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x160) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x160),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x168) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x168),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x1ca) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x1ca),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x1ce) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x1ce),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x1d2) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x1d2),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x1d6) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x1d6),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x1da) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x1da),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x1de) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x1de),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x20e) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x20e),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  *param_1 = *param_1 + *(int *)(iVar5 + 0x21a) * 8;
  if (*(uint **)(iVar5 + 0x226) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x226),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x22a) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x22a),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x22e) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x22e),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x24e) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x24e),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x266) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x266),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)(iVar5 + 0x29f) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x29f),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar3 = (undefined4 *)FUN_006aac70(*param_1);
  *puVar3 = *(undefined4 *)(local_14 + 0x3d);
  puVar3[1] = *(undefined4 *)(local_14 + 0x41);
  puVar3[2] = *(undefined4 *)(local_14 + 0x45);
  puVar3[3] = *(undefined4 *)(local_14 + 0x49);
  puVar3[4] = *(undefined4 *)(local_14 + 0x4d);
  puVar3[5] = *(undefined4 *)(local_14 + 0x51);
  puVar3[6] = *(undefined4 *)(local_14 + 0x55);
  puVar3[9] = *(undefined4 *)(local_14 + 0x5d);
  puVar3[10] = *(undefined4 *)(local_14 + 0x61);
  puVar3[0xb] = *(undefined4 *)(local_14 + 0x65);
  puVar4 = (undefined4 *)(local_14 + 0x69);
  puVar9 = puVar3 + 0xc;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar4 = (undefined4 *)(local_14 + 0x89);
  puVar9 = puVar3 + 0x14;
  for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar3[0x29] = *(undefined4 *)(local_14 + 0xdd);
  puVar3[0x2a] = *(undefined4 *)(local_14 + 0xe1);
  *(undefined2 *)(puVar3 + 0x2b) = *(undefined2 *)(local_14 + 0xe5);
  *(undefined4 *)((int)puVar3 + 0xae) = *(undefined4 *)(local_14 + 0xe7);
  *(undefined2 *)((int)puVar3 + 0xba) = *(undefined2 *)(local_14 + 0xf3);
  *(undefined2 *)(puVar3 + 0x2f) = *(undefined2 *)(local_14 + 0xf5);
  *(undefined2 *)((int)puVar3 + 0xbe) = *(undefined2 *)(local_14 + 0xf7);
  *(undefined2 *)(puVar3 + 0x30) = *(undefined2 *)(local_14 + 0xf9);
  *(undefined2 *)((int)puVar3 + 0xc2) = *(undefined2 *)(local_14 + 0xfb);
  *(undefined2 *)(puVar3 + 0x31) = *(undefined2 *)(local_14 + 0xfd);
  *(undefined4 *)((int)puVar3 + 0xc6) = *(undefined4 *)(local_14 + 0xff);
  *(undefined4 *)((int)puVar3 + 0xd2) = *(undefined4 *)(local_14 + 0x107);
  *(undefined4 *)((int)puVar3 + 0xd6) = *(undefined4 *)(local_14 + 0x10b);
  *(undefined2 *)((int)puVar3 + 0xe2) = *(undefined2 *)(local_14 + 0x113);
  *(undefined2 *)(puVar3 + 0x39) = *(undefined2 *)(local_14 + 0x115);
  *(undefined2 *)((int)puVar3 + 0xe6) = *(undefined2 *)(local_14 + 0x117);
  *(undefined2 *)(puVar3 + 0x3a) = *(undefined2 *)(local_14 + 0x119);
  *(undefined2 *)((int)puVar3 + 0xea) = *(undefined2 *)(local_14 + 0x11b);
  *(undefined2 *)(puVar3 + 0x3b) = *(undefined2 *)(local_14 + 0x11d);
  *(undefined4 *)((int)puVar3 + 0xee) = *(undefined4 *)(local_14 + 0x11f);
  *(undefined4 *)((int)puVar3 + 0xf2) = *(undefined4 *)(local_14 + 0x123);
  *(undefined2 *)((int)puVar3 + 0xfe) = *(undefined2 *)(local_14 + 299);
  *(undefined2 *)(puVar3 + 0x40) = *(undefined2 *)(local_14 + 0x12d);
  *(undefined2 *)((int)puVar3 + 0x102) = *(undefined2 *)(local_14 + 0x12f);
  *(undefined2 *)(puVar3 + 0x41) = *(undefined2 *)(local_14 + 0x131);
  *(undefined2 *)((int)puVar3 + 0x106) = *(undefined2 *)(local_14 + 0x133);
  *(undefined2 *)(puVar3 + 0x42) = *(undefined2 *)(local_14 + 0x135);
  puVar4 = (undefined4 *)(local_14 + 0x137);
  puVar9 = (undefined4 *)((int)puVar3 + 0x10a);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar4;
  *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)puVar4 + 2);
  *(undefined4 *)((int)puVar3 + 0x129) = *(undefined4 *)(local_14 + 0x156);
  *(undefined2 *)((int)puVar3 + 0x12d) = *(undefined2 *)(local_14 + 0x15a);
  *(undefined1 *)(puVar3 + 0x69) = *(undefined1 *)(local_14 + 0x1c9);
  *(undefined4 *)((int)puVar3 + 0x12f) = *(undefined4 *)(local_14 + 0x15c);
  *(undefined4 *)((int)puVar3 + 0x13b) = *(undefined4 *)(local_14 + 0x164);
  *(undefined2 *)((int)puVar3 + 0x147) = *(undefined2 *)(local_14 + 0x16c);
  *(undefined2 *)((int)puVar3 + 0x149) = *(undefined2 *)(local_14 + 0x16e);
  *(undefined2 *)((int)puVar3 + 0x14b) = *(undefined2 *)(local_14 + 0x170);
  *(undefined2 *)((int)puVar3 + 0x14d) = *(undefined2 *)(local_14 + 0x172);
  *(undefined2 *)((int)puVar3 + 0x14f) = *(undefined2 *)(local_14 + 0x174);
  *(undefined2 *)((int)puVar3 + 0x151) = *(undefined2 *)(local_14 + 0x176);
  *(undefined4 *)((int)puVar3 + 0x153) = *(undefined4 *)(local_14 + 0x178);
  *(undefined2 *)((int)puVar3 + 0x157) = *(undefined2 *)(local_14 + 0x17c);
  *(undefined2 *)((int)puVar3 + 0x159) = *(undefined2 *)(local_14 + 0x17e);
  *(undefined2 *)((int)puVar3 + 0x15b) = *(undefined2 *)(local_14 + 0x180);
  *(undefined4 *)((int)puVar3 + 0x15d) = *(undefined4 *)(local_14 + 0x182);
  *(undefined4 *)((int)puVar3 + 0x161) = *(undefined4 *)(local_14 + 0x186);
  *(undefined2 *)((int)puVar3 + 0x165) = *(undefined2 *)(local_14 + 0x18a);
  *(undefined4 *)((int)puVar3 + 0x167) = *(undefined4 *)(local_14 + 0x18c);
  *(undefined2 *)((int)puVar3 + 0x16b) = *(undefined2 *)(local_14 + 400);
  *(undefined4 *)((int)puVar3 + 0x16d) = *(undefined4 *)(local_14 + 0x192);
  *(undefined2 *)((int)puVar3 + 0x171) = *(undefined2 *)(local_14 + 0x196);
  *(undefined1 *)((int)puVar3 + 0x173) = *(undefined1 *)(local_14 + 0x198);
  puVar3[0x5d] = *(undefined4 *)(local_14 + 0x199);
  puVar3[0x5e] = *(undefined4 *)(local_14 + 0x19d);
  *(undefined2 *)(puVar3 + 0x5f) = *(undefined2 *)(local_14 + 0x1a1);
  *(undefined4 *)((int)puVar3 + 0x17e) = *(undefined4 *)(local_14 + 0x1a3);
  *(undefined4 *)((int)puVar3 + 0x182) = *(undefined4 *)(local_14 + 0x1a7);
  *(undefined4 *)((int)puVar3 + 0x186) = *(undefined4 *)(local_14 + 0x1ab);
  *(undefined4 *)((int)puVar3 + 0x18a) = *(undefined4 *)(local_14 + 0x1af);
  *(undefined4 *)((int)puVar3 + 0x18e) = *(undefined4 *)(local_14 + 0x1b3);
  *(undefined2 *)((int)puVar3 + 0x192) = *(undefined2 *)(local_14 + 0x1b7);
  puVar3[0x65] = *(undefined4 *)(local_14 + 0x1b9);
  *(undefined2 *)(puVar3 + 0x66) = *(undefined2 *)(local_14 + 0x1bd);
  *(undefined4 *)((int)puVar3 + 0x19a) = *(undefined4 *)(local_14 + 0x1bf);
  *(undefined2 *)((int)puVar3 + 0x19e) = *(undefined2 *)(local_14 + 0x1c3);
  puVar3[0x68] = *(undefined4 *)(local_14 + 0x1c5);
  puVar4 = (undefined4 *)(local_14 + 0x1e2);
  puVar9 = (undefined4 *)((int)puVar3 + 0x1d5);
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)((int)puVar3 + 0x205) = *(undefined4 *)(local_14 + 0x212);
  *(undefined4 *)((int)puVar3 + 0x209) = *(undefined4 *)(local_14 + 0x216);
  *(undefined4 *)((int)puVar3 + 0x20d) = *(undefined4 *)(local_14 + 0x21a);
  *(undefined4 *)((int)puVar3 + 0x219) = *(undefined4 *)(local_14 + 0x222);
  *(undefined4 *)((int)puVar3 + 0x235) = *(undefined4 *)(local_14 + 0x232);
  *(undefined4 *)((int)puVar3 + 0x239) = *(undefined4 *)(local_14 + 0x236);
  *(undefined4 *)((int)puVar3 + 0x23d) = *(undefined4 *)(local_14 + 0x23a);
  *(undefined4 *)((int)puVar3 + 0x241) = *(undefined4 *)(local_14 + 0x23e);
  *(undefined4 *)((int)puVar3 + 0x245) = *(undefined4 *)(local_14 + 0x242);
  *(undefined4 *)((int)puVar3 + 0x249) = *(undefined4 *)(local_14 + 0x246);
  *(undefined4 *)((int)puVar3 + 0x24d) = *(undefined4 *)(local_14 + 0x24a);
  *(undefined2 *)((int)puVar3 + 0x259) = *(undefined2 *)(local_14 + 0x252);
  *(undefined2 *)((int)puVar3 + 0x25b) = *(undefined2 *)(local_14 + 0x254);
  *(undefined2 *)((int)puVar3 + 0x25d) = *(undefined2 *)(local_14 + 0x256);
  *(undefined2 *)((int)puVar3 + 0x25f) = *(undefined2 *)(local_14 + 600);
  *(undefined2 *)((int)puVar3 + 0x261) = *(undefined2 *)(local_14 + 0x25a);
  *(undefined2 *)((int)puVar3 + 0x263) = *(undefined2 *)(local_14 + 0x25c);
  *(undefined4 *)((int)puVar3 + 0x265) = *(undefined4 *)(local_14 + 0x25e);
  *(undefined4 *)((int)puVar3 + 0x269) = *(undefined4 *)(local_14 + 0x262);
  *(undefined2 *)((int)puVar3 + 0x275) = *(undefined2 *)(local_14 + 0x26a);
  *(undefined2 *)((int)puVar3 + 0x277) = *(undefined2 *)(local_14 + 0x26c);
  *(undefined2 *)((int)puVar3 + 0x279) = *(undefined2 *)(local_14 + 0x26e);
  *(undefined2 *)((int)puVar3 + 0x27b) = *(undefined2 *)(local_14 + 0x270);
  *(undefined2 *)((int)puVar3 + 0x27d) = *(undefined2 *)(local_14 + 0x272);
  *(undefined2 *)((int)puVar3 + 0x27f) = *(undefined2 *)(local_14 + 0x274);
  puVar4 = (undefined4 *)(local_14 + 0x276);
  puVar9 = (undefined4 *)((int)puVar3 + 0x281);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar4;
  *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)puVar4 + 2);
  puVar3[0xa8] = *(undefined4 *)(local_14 + 0x295);
  *(undefined2 *)(puVar3 + 0xa9) = *(undefined2 *)(local_14 + 0x299);
  *(undefined4 *)((int)puVar3 + 0x2a6) = *(undefined4 *)(local_14 + 0x29b);
  *(undefined4 *)((int)puVar3 + 0x2b2) = *(undefined4 *)(local_14 + 0x2a3);
  *(undefined4 *)((int)puVar3 + 0x2b6) = *(undefined4 *)(local_14 + 0x2a7);
  *(undefined2 *)((int)puVar3 + 0x2ba) = *(undefined2 *)(local_14 + 0x2ab);
  puVar3[0xaf] = *(undefined4 *)(local_14 + 0x2ad);
  *(undefined2 *)(puVar3 + 0xb0) = *(undefined2 *)(local_14 + 0x2b1);
  *(undefined4 *)((int)puVar3 + 0x2c2) = *(undefined4 *)(local_14 + 0x2b3);
  *(undefined4 *)((int)puVar3 + 0x2c6) = *(undefined4 *)(local_14 + 0x2b7);
  *(undefined2 *)((int)puVar3 + 0x2ca) = *(undefined2 *)(local_14 + 699);
  puVar3[0xb3] = *(undefined4 *)(local_14 + 0x2bd);
  *(undefined2 *)(puVar3 + 0xb4) = *(undefined2 *)(local_14 + 0x2c1);
  *(undefined4 *)((int)puVar3 + 0x2d2) = *(undefined4 *)(local_14 + 0x2c3);
  *(undefined4 *)((int)puVar3 + 0x2d6) = *(undefined4 *)(local_14 + 0x2c7);
  *(undefined2 *)((int)puVar3 + 0x2da) = *(undefined2 *)(local_14 + 0x2cb);
  *(undefined1 *)(puVar3 + 0xb7) = *(undefined1 *)(local_14 + 0x2cd);
  *(undefined4 *)((int)puVar3 + 0x2dd) = *(undefined4 *)(local_14 + 0x2ce);
  *(undefined4 *)((int)puVar3 + 0x2e1) = *(undefined4 *)(local_14 + 0x2d2);
  *(undefined2 *)((int)puVar3 + 0x2e5) = *(undefined2 *)(local_14 + 0x2d6);
  *(undefined4 *)((int)puVar3 + 0x2e7) = *(undefined4 *)(local_14 + 0x2d8);
  *(undefined4 *)((int)puVar3 + 0x2eb) = *(undefined4 *)(local_14 + 0x2dc);
  *(undefined4 *)((int)puVar3 + 0x2ef) = *(undefined4 *)(local_14 + 0x2e0);
  *(undefined4 *)((int)puVar3 + 0x2f3) = *(undefined4 *)(local_14 + 0x2e4);
  *(undefined4 *)((int)puVar3 + 0x2f7) = *(undefined4 *)(local_14 + 0x2e8);
  *(undefined2 *)((int)puVar3 + 0x2fb) = *(undefined2 *)(local_14 + 0x2ec);
  *(undefined4 *)((int)puVar3 + 0x2fd) = *(undefined4 *)(local_14 + 0x2ee);
  *(undefined4 *)((int)puVar3 + 0x301) = *(undefined4 *)(local_14 + 0x2f2);
  *(undefined2 *)((int)puVar3 + 0x305) = *(undefined2 *)(local_14 + 0x2f6);
  *(undefined4 *)((int)puVar3 + 0x307) = *(undefined4 *)(local_14 + 0x2f8);
  *(undefined4 *)((int)puVar3 + 0x30b) = *(undefined4 *)(local_14 + 0x2fc);
  *(undefined4 *)((int)puVar3 + 0x30f) = *(undefined4 *)(local_14 + 0x300);
  *(undefined4 *)((int)puVar3 + 0x313) = *(undefined4 *)(local_14 + 0x304);
  *(undefined4 *)((int)puVar3 + 0x317) = *(undefined4 *)(local_14 + 0x308);
  *(undefined2 *)((int)puVar3 + 0x31b) = *(undefined2 *)(local_14 + 0x30c);
  *(undefined4 *)((int)puVar3 + 0x31d) = *(undefined4 *)(local_14 + 0x30e);
  piVar7 = *(int **)(local_14 + 0x59);
  if (piVar7 == (int *)0x0) {
    local_8 = 0;
    puVar3[7] = 0xffffffff;
    puVar3[8] = 0;
  }
  else {
    local_8 = *piVar7 * 0x10 + 0xc;
    piVar8 = (int *)((int)puVar3 + 0x321);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)piVar8 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
    puVar3[7] = 0x321;
    puVar3[8] = local_8;
  }
  local_10 = local_8 + 0x321;
  local_18 = puVar3;
  if (*(uint **)(local_14 + 0xef) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0xb2) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0xb6) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0xef),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0xb2) = local_10;
    *(uint *)((int)puVar3 + 0xb6) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x103) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0xca) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0xce) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x103),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0xca) = local_10;
    *(uint *)((int)puVar3 + 0xce) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x10f) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0xda) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0xde) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x10f),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0xda) = local_10;
    *(uint *)((int)puVar3 + 0xde) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x127) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0xf6) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0xfa) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x127),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0xf6) = local_10;
    *(uint *)((int)puVar3 + 0xfa) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x160) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x133) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x137) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x160),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x133) = local_10;
    *(uint *)((int)puVar3 + 0x137) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x168) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x13f) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x143) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x168),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x13f) = local_10;
    *(uint *)((int)puVar3 + 0x143) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x1ca) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x1a5) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x1a9) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x1ca),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x1a5) = local_10;
    *(uint *)((int)puVar3 + 0x1a9) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x1ce) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x1ad) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x1b1) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x1ce),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x1ad) = local_10;
    *(uint *)((int)puVar3 + 0x1b1) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x1d2) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x1b5) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x1b9) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x1d2),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x1b5) = local_10;
    *(uint *)((int)puVar3 + 0x1b9) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x1d6) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x1bd) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x1c1) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x1d6),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x1bd) = local_10;
    *(uint *)((int)puVar3 + 0x1c1) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x1da) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x1c5) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x1c9) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x1da),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x1c5) = local_10;
    *(uint *)((int)puVar3 + 0x1c9) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x1de) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x1cd) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x1d1) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x1de),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x1cd) = local_10;
    *(uint *)((int)puVar3 + 0x1d1) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x20e) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x1fd) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x201) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x20e),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x1fd) = local_10;
    *(uint *)((int)puVar3 + 0x201) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  local_c = *(undefined4 **)(local_14 + 0x21e);
  if (local_c == (undefined4 *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x211) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x215) = 0;
  }
  else {
    local_8 = *(uint *)(local_14 + 0x21a) << 3;
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (iVar5 = (*(uint *)(local_14 + 0x21a) & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x211) = local_10;
    *(uint *)((int)puVar3 + 0x215) = local_8;
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x226) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x21d) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x221) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x226),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x21d) = local_10;
    *(uint *)((int)puVar3 + 0x221) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x22a) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x225) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x229) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x22a),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x225) = local_10;
    *(uint *)((int)puVar3 + 0x229) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x22e) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x22d) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x231) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x22e),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x22d) = local_10;
    *(uint *)((int)puVar3 + 0x231) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x24e) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x251) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x255) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x24e),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x251) = local_10;
    *(uint *)((int)puVar3 + 0x255) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x266) == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar3 + 0x26d) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x271) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x266),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x26d) = local_10;
    *(uint *)((int)puVar3 + 0x271) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)(local_14 + 0x29f) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(local_14 + 0x29f),(int *)&local_8);
    puVar4 = local_c;
    puVar9 = (undefined4 *)(local_10 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(int *)((int)puVar3 + 0x2aa) = local_10;
    *(uint *)((int)puVar3 + 0x2ae) = local_8;
    FUN_006ab060(&local_c);
    DAT_00858df8 = (undefined4 *)local_5c;
    return puVar3;
  }
  *(undefined4 *)((int)puVar3 + 0x2aa) = 0xffffffff;
  *(undefined4 *)((int)puVar3 + 0x2ae) = 0;
  DAT_00858df8 = (undefined4 *)local_5c;
  return puVar3;
}

