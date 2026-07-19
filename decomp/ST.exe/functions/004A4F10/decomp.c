
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SaveGrpBData */

undefined4 * __thiscall STGroupBoatC::SaveGrpBData(STGroupBoatC *this,int *param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_5c;
  undefined4 *local_18;
  STGroupBoatC *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1495,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__SaveGrpBData_007ac3d4);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (undefined4 *)(*pcVar1)();
      return puVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1496);
    return local_18;
  }
  *param_1 = 0x321;
  if ((int *)local_14->field_0059 != (int *)0x0) {
    iVar3 = *(int *)local_14->field_0059 * 0x10;
    local_8 = iVar3 + 0xc;
    *param_1 = iVar3 + 0x32d;
  }
  if (*(uint **)&local_14->field_0xef != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0xef,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x103 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x103,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x10f != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x10f,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x127 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x127,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x160 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x160,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x168 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x168,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x1ca != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x1ca,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x1ce != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x1ce,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x1d2 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x1d2,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x1d6 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x1d6,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x1da != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x1da,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x1de != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x1de,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x20e != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x20e,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  *param_1 = *param_1 + *(int *)&pSVar2->field_0x21a * 8;
  if ((uint *)pSVar2->field_0226 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar2->field_0226,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_022A != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar2->field_022A,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_022E != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar2->field_022E,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x24e != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x24e,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x266 != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&pSVar2->field_0x266,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_029F != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar2->field_029F,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*param_1);
  *puVar4 = local_14->field_003D;
  puVar4[1] = local_14->field_0041;
  puVar4[2] = local_14->field_0045;
  puVar4[3] = local_14->field_0049;
  puVar4[4] = local_14->field_004D;
  puVar4[5] = local_14->field_0051;
  puVar4[6] = local_14->field_0055;
  puVar4[9] = *(undefined4 *)&local_14->field_0x5d;
  puVar4[10] = *(undefined4 *)&local_14->field_0x61;
  puVar4[0xb] = *(undefined4 *)&local_14->field_0x65;
  puVar6 = (undefined4 *)&local_14->field_0x69;
  puVar10 = puVar4 + 0xc;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar6 = (undefined4 *)&local_14->field_0x89;
  puVar10 = puVar4 + 0x14;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4[0x29] = *(undefined4 *)&local_14->field_0xdd;
  puVar4[0x2a] = *(undefined4 *)&local_14->field_0xe1;
  *(undefined2 *)(puVar4 + 0x2b) = *(undefined2 *)&local_14->field_0xe5;
  *(undefined4 *)((int)puVar4 + 0xae) = *(undefined4 *)&local_14->field_0xe7;
  *(undefined2 *)((int)puVar4 + 0xba) = *(undefined2 *)&local_14->field_0xf3;
  *(undefined2 *)(puVar4 + 0x2f) = *(undefined2 *)&local_14->field_0xf5;
  *(undefined2 *)((int)puVar4 + 0xbe) = *(undefined2 *)&local_14->field_0xf7;
  *(undefined2 *)(puVar4 + 0x30) = *(undefined2 *)&local_14->field_0xf9;
  *(undefined2 *)((int)puVar4 + 0xc2) = *(undefined2 *)&local_14->field_0xfb;
  *(undefined2 *)(puVar4 + 0x31) = *(undefined2 *)&local_14->field_0xfd;
  *(undefined4 *)((int)puVar4 + 0xc6) = *(undefined4 *)&local_14->field_0xff;
  *(undefined4 *)((int)puVar4 + 0xd2) = *(undefined4 *)&local_14->field_0x107;
  *(undefined4 *)((int)puVar4 + 0xd6) = *(undefined4 *)&local_14->field_0x10b;
  *(undefined2 *)((int)puVar4 + 0xe2) = *(undefined2 *)&local_14->field_0x113;
  *(undefined2 *)(puVar4 + 0x39) = *(undefined2 *)&local_14->field_0x115;
  *(undefined2 *)((int)puVar4 + 0xe6) = *(undefined2 *)&local_14->field_0x117;
  *(undefined2 *)(puVar4 + 0x3a) = *(undefined2 *)&local_14->field_0x119;
  *(undefined2 *)((int)puVar4 + 0xea) = *(undefined2 *)&local_14->field_0x11b;
  *(undefined2 *)(puVar4 + 0x3b) = *(undefined2 *)&local_14->field_0x11d;
  *(undefined4 *)((int)puVar4 + 0xee) = *(undefined4 *)&local_14->field_0x11f;
  *(undefined4 *)((int)puVar4 + 0xf2) = *(undefined4 *)&local_14->field_0x123;
  *(undefined2 *)((int)puVar4 + 0xfe) = *(undefined2 *)&local_14->field_0x12b;
  *(undefined2 *)(puVar4 + 0x40) = *(undefined2 *)&local_14->field_0x12d;
  *(undefined2 *)((int)puVar4 + 0x102) = *(undefined2 *)&local_14->field_0x12f;
  *(undefined2 *)(puVar4 + 0x41) = *(undefined2 *)&local_14->field_0x131;
  *(undefined2 *)((int)puVar4 + 0x106) = *(undefined2 *)&local_14->field_0x133;
  *(undefined2 *)(puVar4 + 0x42) = *(undefined2 *)&local_14->field_0x135;
  puVar6 = (undefined4 *)&local_14->field_0x137;
  puVar10 = (undefined4 *)((int)puVar4 + 0x10a);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar10 + 2) = *(undefined1 *)((int)puVar6 + 2);
  *(undefined4 *)((int)puVar4 + 0x129) = *(undefined4 *)&local_14->field_0x156;
  *(undefined2 *)((int)puVar4 + 0x12d) = *(undefined2 *)&local_14->field_0x15a;
  *(undefined1 *)(puVar4 + 0x69) = local_14->field_0x1c9;
  *(undefined4 *)((int)puVar4 + 0x12f) = *(undefined4 *)&local_14->field_0x15c;
  *(undefined4 *)((int)puVar4 + 0x13b) = *(undefined4 *)&local_14->field_0x164;
  *(undefined2 *)((int)puVar4 + 0x147) = *(undefined2 *)&local_14->field_0x16c;
  *(undefined2 *)((int)puVar4 + 0x149) = *(undefined2 *)&local_14->field_0x16e;
  *(undefined2 *)((int)puVar4 + 0x14b) = *(undefined2 *)&local_14->field_0x170;
  *(undefined2 *)((int)puVar4 + 0x14d) = *(undefined2 *)&local_14->field_0x172;
  *(undefined2 *)((int)puVar4 + 0x14f) = *(undefined2 *)&local_14->field_0x174;
  *(undefined2 *)((int)puVar4 + 0x151) = *(undefined2 *)&local_14->field_0x176;
  *(undefined4 *)((int)puVar4 + 0x153) = *(undefined4 *)&local_14->field_0x178;
  *(undefined2 *)((int)puVar4 + 0x157) = *(undefined2 *)&local_14->field_0x17c;
  *(undefined2 *)((int)puVar4 + 0x159) = *(undefined2 *)&local_14->field_0x17e;
  *(undefined2 *)((int)puVar4 + 0x15b) = *(undefined2 *)&local_14->field_0x180;
  *(undefined4 *)((int)puVar4 + 0x15d) = *(undefined4 *)&local_14->field_0x182;
  *(undefined4 *)((int)puVar4 + 0x161) = *(undefined4 *)&local_14->field_0x186;
  *(undefined2 *)((int)puVar4 + 0x165) = *(undefined2 *)&local_14->field_0x18a;
  *(undefined4 *)((int)puVar4 + 0x167) = *(undefined4 *)&local_14->field_0x18c;
  *(undefined2 *)((int)puVar4 + 0x16b) = *(undefined2 *)&local_14->field_0x190;
  *(undefined4 *)((int)puVar4 + 0x16d) = *(undefined4 *)&local_14->field_0x192;
  *(undefined2 *)((int)puVar4 + 0x171) = *(undefined2 *)&local_14->field_0x196;
  *(undefined1 *)((int)puVar4 + 0x173) = local_14->field_0x198;
  puVar4[0x5d] = *(undefined4 *)&local_14->field_0x199;
  puVar4[0x5e] = *(undefined4 *)&local_14->field_0x19d;
  *(undefined2 *)(puVar4 + 0x5f) = *(undefined2 *)&local_14->field_0x1a1;
  *(undefined4 *)((int)puVar4 + 0x17e) = *(undefined4 *)&local_14->field_0x1a3;
  *(undefined4 *)((int)puVar4 + 0x182) = *(undefined4 *)&local_14->field_0x1a7;
  *(undefined4 *)((int)puVar4 + 0x186) = *(undefined4 *)&local_14->field_0x1ab;
  *(undefined4 *)((int)puVar4 + 0x18a) = *(undefined4 *)&local_14->field_0x1af;
  *(undefined4 *)((int)puVar4 + 0x18e) = *(undefined4 *)&local_14->field_0x1b3;
  *(undefined2 *)((int)puVar4 + 0x192) = *(undefined2 *)&local_14->field_0x1b7;
  puVar4[0x65] = *(undefined4 *)&local_14->field_0x1b9;
  *(undefined2 *)(puVar4 + 0x66) = *(undefined2 *)&local_14->field_0x1bd;
  *(undefined4 *)((int)puVar4 + 0x19a) = *(undefined4 *)&local_14->field_0x1bf;
  *(undefined2 *)((int)puVar4 + 0x19e) = *(undefined2 *)&local_14->field_0x1c3;
  puVar4[0x68] = *(undefined4 *)&local_14->field_0x1c5;
  puVar6 = (undefined4 *)&local_14->field_0x1e2;
  puVar10 = (undefined4 *)((int)puVar4 + 0x1d5);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)((int)puVar4 + 0x205) = *(undefined4 *)&local_14->field_0x212;
  *(undefined4 *)((int)puVar4 + 0x209) = *(undefined4 *)&local_14->field_0x216;
  *(undefined4 *)((int)puVar4 + 0x20d) = *(undefined4 *)&local_14->field_0x21a;
  *(undefined4 *)((int)puVar4 + 0x219) = *(undefined4 *)&local_14->field_0x222;
  *(undefined4 *)((int)puVar4 + 0x235) = local_14->field_0232;
  *(undefined4 *)((int)puVar4 + 0x239) = local_14->field_0236;
  *(undefined4 *)((int)puVar4 + 0x23d) = *(undefined4 *)&local_14->field_0x23a;
  *(undefined4 *)((int)puVar4 + 0x241) = local_14->field_023E;
  *(undefined4 *)((int)puVar4 + 0x245) = local_14->field_0242;
  *(undefined4 *)((int)puVar4 + 0x249) = *(undefined4 *)&local_14->field_0x246;
  *(undefined4 *)((int)puVar4 + 0x24d) = *(undefined4 *)&local_14->field_0x24a;
  *(undefined2 *)((int)puVar4 + 0x259) = *(undefined2 *)&local_14->field_0x252;
  *(undefined2 *)((int)puVar4 + 0x25b) = *(undefined2 *)&local_14->field_0x254;
  *(undefined2 *)((int)puVar4 + 0x25d) = *(undefined2 *)&local_14->field_0x256;
  *(undefined2 *)((int)puVar4 + 0x25f) = *(undefined2 *)&local_14->field_0x258;
  *(undefined2 *)((int)puVar4 + 0x261) = *(undefined2 *)&local_14->field_0x25a;
  *(undefined2 *)((int)puVar4 + 0x263) = *(undefined2 *)&local_14->field_0x25c;
  *(undefined4 *)((int)puVar4 + 0x265) = *(undefined4 *)&local_14->field_0x25e;
  *(undefined4 *)((int)puVar4 + 0x269) = *(undefined4 *)&local_14->field_0x262;
  *(undefined2 *)((int)puVar4 + 0x275) = *(undefined2 *)&local_14->field_0x26a;
  *(undefined2 *)((int)puVar4 + 0x277) = *(undefined2 *)&local_14->field_0x26c;
  *(undefined2 *)((int)puVar4 + 0x279) = *(undefined2 *)&local_14->field_0x26e;
  *(undefined2 *)((int)puVar4 + 0x27b) = *(undefined2 *)&local_14->field_0x270;
  *(undefined2 *)((int)puVar4 + 0x27d) = *(undefined2 *)&local_14->field_0x272;
  *(undefined2 *)((int)puVar4 + 0x27f) = *(undefined2 *)&local_14->field_0x274;
  puVar6 = (undefined4 *)&local_14->field_0x276;
  puVar10 = (undefined4 *)((int)puVar4 + 0x281);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar10 + 2) = *(undefined1 *)((int)puVar6 + 2);
  puVar4[0xa8] = local_14->field_0295;
  *(undefined2 *)(puVar4 + 0xa9) = local_14->field_0299;
  *(undefined4 *)((int)puVar4 + 0x2a6) = local_14->field_029B;
  *(undefined4 *)((int)puVar4 + 0x2b2) = local_14->field_02A3;
  *(undefined4 *)((int)puVar4 + 0x2b6) = local_14->field_02A7;
  *(undefined2 *)((int)puVar4 + 0x2ba) = local_14->field_02AB;
  puVar4[0xaf] = *(undefined4 *)&local_14->field_0x2ad;
  *(undefined2 *)(puVar4 + 0xb0) = *(undefined2 *)&local_14->field_0x2b1;
  *(undefined4 *)((int)puVar4 + 0x2c2) = local_14->field_02B3;
  *(undefined4 *)((int)puVar4 + 0x2c6) = local_14->field_02B7;
  *(undefined2 *)((int)puVar4 + 0x2ca) = local_14->field_02BB;
  puVar4[0xb3] = local_14->field_02BD;
  *(undefined2 *)(puVar4 + 0xb4) = local_14->field_02C1;
  *(undefined4 *)((int)puVar4 + 0x2d2) = local_14->field_02C3;
  *(undefined4 *)((int)puVar4 + 0x2d6) = local_14->field_02C7;
  *(undefined2 *)((int)puVar4 + 0x2da) = local_14->field_02CB;
  *(undefined1 *)(puVar4 + 0xb7) = local_14->field_02CD;
  *(undefined4 *)((int)puVar4 + 0x2dd) = local_14->field_02CE;
  *(undefined4 *)((int)puVar4 + 0x2e1) = local_14->field_02D2;
  *(undefined2 *)((int)puVar4 + 0x2e5) = local_14->field_02D6;
  *(undefined4 *)((int)puVar4 + 0x2e7) = local_14->field_02D8;
  *(undefined4 *)((int)puVar4 + 0x2eb) = local_14->field_02DC;
  *(undefined4 *)((int)puVar4 + 0x2ef) = local_14->field_02E0;
  *(undefined4 *)((int)puVar4 + 0x2f3) = local_14->field_02E4;
  *(undefined4 *)((int)puVar4 + 0x2f7) = local_14->field_02E8;
  *(undefined2 *)((int)puVar4 + 0x2fb) = local_14->field_02EC;
  *(undefined4 *)((int)puVar4 + 0x2fd) = local_14->field_02EE;
  *(undefined4 *)((int)puVar4 + 0x301) = local_14->field_02F2;
  *(undefined2 *)((int)puVar4 + 0x305) = local_14->field_02F6;
  *(undefined4 *)((int)puVar4 + 0x307) = local_14->field_02F8;
  *(undefined4 *)((int)puVar4 + 0x30b) = local_14->field_02FC;
  *(undefined4 *)((int)puVar4 + 0x30f) = local_14->field_0300;
  *(undefined4 *)((int)puVar4 + 0x313) = local_14->field_0304;
  *(undefined4 *)((int)puVar4 + 0x317) = local_14->field_0308;
  *(undefined2 *)((int)puVar4 + 0x31b) = local_14->field_030C;
  *(undefined4 *)((int)puVar4 + 0x31d) = local_14->field_030E;
  piVar8 = (int *)local_14->field_0059;
  if (piVar8 == (int *)0x0) {
    local_8 = 0;
    puVar4[7] = 0xffffffff;
    puVar4[8] = 0;
  }
  else {
    local_8 = *piVar8 * 0x10 + 0xc;
    piVar9 = (int *)((int)puVar4 + 0x321);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar9 = (char)*piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      piVar9 = (int *)((int)piVar9 + 1);
    }
    puVar4[7] = 0x321;
    puVar4[8] = local_8;
  }
  local_10 = local_8 + 0x321;
  local_18 = puVar4;
  if (*(uint **)&local_14->field_0xef == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xb2) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xb6) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0xef,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0xb2) = local_10;
    *(uint *)((int)puVar4 + 0xb6) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x103 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xca) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xce) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x103,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0xca) = local_10;
    *(uint *)((int)puVar4 + 0xce) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x10f == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xda) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xde) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x10f,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0xda) = local_10;
    *(uint *)((int)puVar4 + 0xde) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x127 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xf6) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xfa) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x127,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0xf6) = local_10;
    *(uint *)((int)puVar4 + 0xfa) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x160 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x133) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x137) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x160,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x133) = local_10;
    *(uint *)((int)puVar4 + 0x137) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x168 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x13f) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x143) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x168,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x13f) = local_10;
    *(uint *)((int)puVar4 + 0x143) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x1ca == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1a5) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1a9) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x1ca,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x1a5) = local_10;
    *(uint *)((int)puVar4 + 0x1a9) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x1ce == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1ad) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1b1) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x1ce,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x1ad) = local_10;
    *(uint *)((int)puVar4 + 0x1b1) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x1d2 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1b5) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1b9) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x1d2,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x1b5) = local_10;
    *(uint *)((int)puVar4 + 0x1b9) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x1d6 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1bd) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1c1) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x1d6,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x1bd) = local_10;
    *(uint *)((int)puVar4 + 0x1c1) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x1da == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1c5) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1c9) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x1da,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x1c5) = local_10;
    *(uint *)((int)puVar4 + 0x1c9) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x1de == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1cd) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1d1) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x1de,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x1cd) = local_10;
    *(uint *)((int)puVar4 + 0x1d1) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x20e == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1fd) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x201) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x20e,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x1fd) = local_10;
    *(uint *)((int)puVar4 + 0x201) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  local_c = *(undefined4 **)&local_14->field_0x21e;
  if (local_c == (undefined4 *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x211) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x215) = 0;
  }
  else {
    local_8 = *(uint *)&local_14->field_0x21a << 3;
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (iVar3 = (*(uint *)&local_14->field_0x21a & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1
        ) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x211) = local_10;
    *(uint *)((int)puVar4 + 0x215) = local_8;
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_0226 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x21d) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x221) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020((uint *)local_14->field_0226,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x21d) = local_10;
    *(uint *)((int)puVar4 + 0x221) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_022A == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x225) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x229) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020((uint *)local_14->field_022A,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x225) = local_10;
    *(uint *)((int)puVar4 + 0x229) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_022E == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x22d) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x231) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020((uint *)local_14->field_022E,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x22d) = local_10;
    *(uint *)((int)puVar4 + 0x231) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x24e == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x251) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x255) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x24e,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x251) = local_10;
    *(uint *)((int)puVar4 + 0x255) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x266 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x26d) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x271) = 0;
  }
  else {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)&local_14->field_0x266,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x26d) = local_10;
    *(uint *)((int)puVar4 + 0x271) = local_8;
    FUN_006ab060(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_029F != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)local_14->field_029F,(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)puVar4 + 0x2aa) = local_10;
    *(uint *)((int)puVar4 + 0x2ae) = local_8;
    FUN_006ab060(&local_c);
    g_currentExceptionFrame = local_5c.previous;
    return puVar4;
  }
  *(undefined4 *)((int)puVar4 + 0x2aa) = 0xffffffff;
  *(undefined4 *)((int)puVar4 + 0x2ae) = 0;
  g_currentExceptionFrame = local_5c.previous;
  return puVar4;
}

