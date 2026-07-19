
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RestoreGrpBData */

void __thiscall STGroupBoatC::RestoreGrpBData(STGroupBoatC *this,undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  STGroupBoatC *local_8;
  
  local_c = param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x158b,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__RestoreGrpBData_007ac3f4);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x158c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8->field_003D = *local_c;
  local_8->field_0041 = local_c[1];
  local_8->field_0045 = local_c[2];
  local_8->field_0049 = local_c[3];
  local_8->field_004D = local_c[4];
  local_8->field_0051 = local_c[5];
  local_8->field_0055 = local_c[6];
  *(undefined4 *)&local_8->field_0x5d = local_c[9];
  *(undefined4 *)&local_8->field_0x61 = local_c[10];
  *(undefined4 *)&local_8->field_0x65 = local_c[0xb];
  puVar9 = local_c + 0xc;
  puVar4 = (undefined4 *)&local_8->field_0x69;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar9 = local_c + 0x14;
  puVar4 = (undefined4 *)&local_8->field_0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)&local_8->field_0xdd = local_c[0x29];
  *(undefined4 *)&local_8->field_0xe1 = local_c[0x2a];
  *(undefined2 *)&local_8->field_0xe5 = *(undefined2 *)(local_c + 0x2b);
  *(undefined4 *)&local_8->field_0xe7 = *(undefined4 *)((int)local_c + 0xae);
  *(undefined2 *)&local_8->field_0xf3 = *(undefined2 *)((int)local_c + 0xba);
  *(undefined2 *)&local_8->field_0xf5 = *(undefined2 *)(local_c + 0x2f);
  *(undefined2 *)&local_8->field_0xf7 = *(undefined2 *)((int)local_c + 0xbe);
  *(undefined2 *)&local_8->field_0xf9 = *(undefined2 *)(local_c + 0x30);
  *(undefined2 *)&local_8->field_0xfb = *(undefined2 *)((int)local_c + 0xc2);
  *(undefined2 *)&local_8->field_0xfd = *(undefined2 *)(local_c + 0x31);
  *(undefined4 *)&local_8->field_0xff = *(undefined4 *)((int)local_c + 0xc6);
  *(undefined4 *)&local_8->field_0x107 = *(undefined4 *)((int)local_c + 0xd2);
  *(undefined4 *)&local_8->field_0x10b = *(undefined4 *)((int)local_c + 0xd6);
  *(undefined2 *)&local_8->field_0x113 = *(undefined2 *)((int)local_c + 0xe2);
  *(undefined2 *)&local_8->field_0x115 = *(undefined2 *)(local_c + 0x39);
  *(undefined2 *)&local_8->field_0x117 = *(undefined2 *)((int)local_c + 0xe6);
  *(undefined2 *)&local_8->field_0x119 = *(undefined2 *)(local_c + 0x3a);
  *(undefined2 *)&local_8->field_0x11b = *(undefined2 *)((int)local_c + 0xea);
  *(undefined2 *)&local_8->field_0x11d = *(undefined2 *)(local_c + 0x3b);
  *(undefined4 *)&local_8->field_0x11f = *(undefined4 *)((int)local_c + 0xee);
  *(undefined4 *)&local_8->field_0x123 = *(undefined4 *)((int)local_c + 0xf2);
  *(undefined2 *)&local_8->field_0x12b = *(undefined2 *)((int)local_c + 0xfe);
  *(undefined2 *)&local_8->field_0x12d = *(undefined2 *)(local_c + 0x40);
  *(undefined2 *)&local_8->field_0x12f = *(undefined2 *)((int)local_c + 0x102);
  *(undefined2 *)&local_8->field_0x131 = *(undefined2 *)(local_c + 0x41);
  *(undefined2 *)&local_8->field_0x133 = *(undefined2 *)((int)local_c + 0x106);
  *(undefined2 *)&local_8->field_0x135 = *(undefined2 *)(local_c + 0x42);
  puVar9 = (undefined4 *)((int)local_c + 0x10a);
  puVar4 = (undefined4 *)&local_8->field_0x137;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar9;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar9 + 2);
  *(undefined4 *)&local_8->field_0x156 = *(undefined4 *)((int)local_c + 0x129);
  *(undefined2 *)&local_8->field_0x15a = *(undefined2 *)((int)local_c + 0x12d);
  local_8->field_0x1c9 = *(undefined1 *)(local_c + 0x69);
  *(undefined4 *)&local_8->field_0x15c = *(undefined4 *)((int)local_c + 0x12f);
  *(undefined4 *)&local_8->field_0x164 = *(undefined4 *)((int)local_c + 0x13b);
  *(undefined2 *)&local_8->field_0x16c = *(undefined2 *)((int)local_c + 0x147);
  *(undefined2 *)&local_8->field_0x16e = *(undefined2 *)((int)local_c + 0x149);
  *(undefined2 *)&local_8->field_0x170 = *(undefined2 *)((int)local_c + 0x14b);
  *(undefined2 *)&local_8->field_0x172 = *(undefined2 *)((int)local_c + 0x14d);
  *(undefined2 *)&local_8->field_0x174 = *(undefined2 *)((int)local_c + 0x14f);
  *(undefined2 *)&local_8->field_0x176 = *(undefined2 *)((int)local_c + 0x151);
  *(undefined4 *)&local_8->field_0x178 = *(undefined4 *)((int)local_c + 0x153);
  *(undefined2 *)&local_8->field_0x17c = *(undefined2 *)((int)local_c + 0x157);
  *(undefined2 *)&local_8->field_0x17e = *(undefined2 *)((int)local_c + 0x159);
  *(undefined2 *)&local_8->field_0x180 = *(undefined2 *)((int)local_c + 0x15b);
  *(undefined4 *)&local_8->field_0x182 = *(undefined4 *)((int)local_c + 0x15d);
  *(undefined4 *)&local_8->field_0x186 = *(undefined4 *)((int)local_c + 0x161);
  *(undefined2 *)&local_8->field_0x18a = *(undefined2 *)((int)local_c + 0x165);
  *(undefined4 *)&local_8->field_0x18c = *(undefined4 *)((int)local_c + 0x167);
  *(undefined2 *)&local_8->field_0x190 = *(undefined2 *)((int)local_c + 0x16b);
  *(undefined4 *)&local_8->field_0x192 = *(undefined4 *)((int)local_c + 0x16d);
  *(undefined2 *)&local_8->field_0x196 = *(undefined2 *)((int)local_c + 0x171);
  local_8->field_0x198 = *(undefined1 *)((int)local_c + 0x173);
  *(undefined4 *)&local_8->field_0x199 = local_c[0x5d];
  *(undefined4 *)&local_8->field_0x19d = local_c[0x5e];
  *(undefined2 *)&local_8->field_0x1a1 = *(undefined2 *)(local_c + 0x5f);
  *(undefined4 *)&local_8->field_0x1a3 = *(undefined4 *)((int)local_c + 0x17e);
  *(undefined4 *)&local_8->field_0x1a7 = *(undefined4 *)((int)local_c + 0x182);
  *(undefined4 *)&local_8->field_0x1ab = *(undefined4 *)((int)local_c + 0x186);
  *(undefined4 *)&local_8->field_0x1af = *(undefined4 *)((int)local_c + 0x18a);
  *(undefined4 *)&local_8->field_0x1b3 = *(undefined4 *)((int)local_c + 0x18e);
  *(undefined2 *)&local_8->field_0x1b7 = *(undefined2 *)((int)local_c + 0x192);
  *(undefined4 *)&local_8->field_0x1b9 = local_c[0x65];
  *(undefined2 *)&local_8->field_0x1bd = *(undefined2 *)(local_c + 0x66);
  *(undefined4 *)&local_8->field_0x1bf = *(undefined4 *)((int)local_c + 0x19a);
  *(undefined2 *)&local_8->field_0x1c3 = *(undefined2 *)((int)local_c + 0x19e);
  *(undefined4 *)&local_8->field_0x1c5 = local_c[0x68];
  puVar9 = (undefined4 *)((int)local_c + 0x1d5);
  puVar4 = (undefined4 *)&local_8->field_0x1e2;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)&local_8->field_0x212 = *(undefined4 *)((int)local_c + 0x205);
  *(undefined4 *)&local_8->field_0x216 = *(undefined4 *)((int)local_c + 0x209);
  *(undefined4 *)&local_8->field_0x21a = *(undefined4 *)((int)local_c + 0x20d);
  *(undefined4 *)&local_8->field_0x222 = *(undefined4 *)((int)local_c + 0x219);
  local_8->field_0232 = *(undefined4 *)((int)local_c + 0x235);
  local_8->field_0236 = *(undefined4 *)((int)local_c + 0x239);
  *(undefined4 *)&local_8->field_0x23a = *(undefined4 *)((int)local_c + 0x23d);
  local_8->field_023E = *(undefined4 *)((int)local_c + 0x241);
  local_8->field_0242 = *(undefined4 *)((int)local_c + 0x245);
  *(undefined4 *)&local_8->field_0x246 = *(undefined4 *)((int)local_c + 0x249);
  *(undefined4 *)&local_8->field_0x24a = *(undefined4 *)((int)local_c + 0x24d);
  *(undefined2 *)&local_8->field_0x252 = *(undefined2 *)((int)local_c + 0x259);
  *(undefined2 *)&local_8->field_0x254 = *(undefined2 *)((int)local_c + 0x25b);
  *(undefined2 *)&local_8->field_0x256 = *(undefined2 *)((int)local_c + 0x25d);
  *(undefined2 *)&local_8->field_0x258 = *(undefined2 *)((int)local_c + 0x25f);
  *(undefined2 *)&local_8->field_0x25a = *(undefined2 *)((int)local_c + 0x261);
  *(undefined2 *)&local_8->field_0x25c = *(undefined2 *)((int)local_c + 0x263);
  *(undefined4 *)&local_8->field_0x25e = *(undefined4 *)((int)local_c + 0x265);
  *(undefined4 *)&local_8->field_0x262 = *(undefined4 *)((int)local_c + 0x269);
  *(undefined2 *)&local_8->field_0x26a = *(undefined2 *)((int)local_c + 0x275);
  *(undefined2 *)&local_8->field_0x26c = *(undefined2 *)((int)local_c + 0x277);
  *(undefined2 *)&local_8->field_0x26e = *(undefined2 *)((int)local_c + 0x279);
  *(undefined2 *)&local_8->field_0x270 = *(undefined2 *)((int)local_c + 0x27b);
  *(undefined2 *)&local_8->field_0x272 = *(undefined2 *)((int)local_c + 0x27d);
  *(undefined2 *)&local_8->field_0x274 = *(undefined2 *)((int)local_c + 0x27f);
  puVar9 = (undefined4 *)((int)local_c + 0x281);
  puVar4 = (undefined4 *)&local_8->field_0x276;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar9;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar9 + 2);
  local_8->field_0295 = local_c[0xa8];
  local_8->field_0299 = *(undefined2 *)(local_c + 0xa9);
  local_8->field_029B = *(undefined4 *)((int)local_c + 0x2a6);
  local_8->field_02A3 = *(undefined4 *)((int)local_c + 0x2b2);
  local_8->field_02A7 = *(undefined4 *)((int)local_c + 0x2b6);
  local_8->field_02AB = *(undefined2 *)((int)local_c + 0x2ba);
  *(undefined4 *)&local_8->field_0x2ad = local_c[0xaf];
  *(undefined2 *)&local_8->field_0x2b1 = *(undefined2 *)(local_c + 0xb0);
  local_8->field_02B3 = *(undefined4 *)((int)local_c + 0x2c2);
  local_8->field_02B7 = *(undefined4 *)((int)local_c + 0x2c6);
  local_8->field_02BB = *(undefined2 *)((int)local_c + 0x2ca);
  local_8->field_02BD = local_c[0xb3];
  local_8->field_02C1 = *(undefined2 *)(local_c + 0xb4);
  local_8->field_02C3 = *(undefined4 *)((int)local_c + 0x2d2);
  local_8->field_02C7 = *(undefined4 *)((int)local_c + 0x2d6);
  local_8->field_02CB = *(undefined2 *)((int)local_c + 0x2da);
  local_8->field_02CD = *(undefined1 *)(local_c + 0xb7);
  local_8->field_02CE = *(undefined4 *)((int)local_c + 0x2dd);
  local_8->field_02D2 = *(undefined4 *)((int)local_c + 0x2e1);
  local_8->field_02D6 = *(undefined2 *)((int)local_c + 0x2e5);
  local_8->field_02D8 = *(undefined4 *)((int)local_c + 0x2e7);
  local_8->field_02DC = *(undefined4 *)((int)local_c + 0x2eb);
  local_8->field_02E0 = *(undefined4 *)((int)local_c + 0x2ef);
  local_8->field_02E4 = *(undefined4 *)((int)local_c + 0x2f3);
  local_8->field_02E8 = *(undefined4 *)((int)local_c + 0x2f7);
  local_8->field_02EC = *(undefined2 *)((int)local_c + 0x2fb);
  local_8->field_02EE = *(undefined4 *)((int)local_c + 0x2fd);
  local_8->field_02F2 = *(undefined4 *)((int)local_c + 0x301);
  local_8->field_02F6 = *(undefined2 *)((int)local_c + 0x305);
  local_8->field_02F8 = *(undefined4 *)((int)local_c + 0x307);
  local_8->field_02FC = *(undefined4 *)((int)local_c + 0x30b);
  local_8->field_0300 = *(undefined4 *)((int)local_c + 0x30f);
  local_8->field_0304 = *(undefined4 *)((int)local_c + 0x313);
  local_8->field_0308 = *(undefined4 *)((int)local_c + 0x317);
  local_8->field_030C = *(undefined2 *)((int)local_c + 0x31b);
  local_8->field_030E = *(undefined4 *)((int)local_c + 0x31d);
  if (local_c[7] == -1) {
    local_8->field_0059 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_c[8]);
    local_8->field_0059 = puVar4;
    uVar8 = puVar2[8];
    puVar9 = (undefined4 *)(puVar2[7] + (int)puVar2);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)((int)puVar2 + 0xb2) == -1) {
    *(undefined4 *)&local_8->field_0xef = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xb2) + (int)puVar2));
    *(undefined4 *)&local_8->field_0xef = uVar5;
  }
  if (*(int *)((int)puVar2 + 0xca) == -1) {
    *(undefined4 *)&local_8->field_0x103 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xca) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x103 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0xda) == -1) {
    *(undefined4 *)&local_8->field_0x10f = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xda) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x10f = uVar5;
  }
  if (*(int *)((int)puVar2 + 0xf6) == -1) {
    *(undefined4 *)&local_8->field_0x127 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xf6) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x127 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x133) == -1) {
    *(undefined4 *)&local_8->field_0x160 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x133) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x160 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1a5) == -1) {
    *(undefined4 *)&local_8->field_0x1ca = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1a5) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x1ca = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1ad) == -1) {
    *(undefined4 *)&local_8->field_0x1ce = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1ad) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x1ce = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1b5) == -1) {
    *(undefined4 *)&local_8->field_0x1d2 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1b5) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x1d2 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1bd) == -1) {
    *(undefined4 *)&local_8->field_0x1d6 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1bd) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x1d6 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1c5) == -1) {
    *(undefined4 *)&local_8->field_0x1da = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1c5) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x1da = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1cd) == -1) {
    *(undefined4 *)&local_8->field_0x1de = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1cd) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x1de = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1fd) == -1) {
    *(undefined4 *)&local_8->field_0x20e = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1fd) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x20e = uVar5;
  }
  if ((*(int *)((int)puVar2 + 0x211) == -1) ||
     (uVar8 = *(uint *)((int)puVar2 + 0x215), (int)uVar8 < 1)) {
    *(undefined4 *)&local_8->field_0x21e = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar8);
    *(undefined4 **)&local_8->field_0x21e = puVar4;
    puVar9 = (undefined4 *)((int)puVar2 + *(int *)((int)puVar2 + 0x211));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)((int)puVar2 + 0x21d) == -1) {
    local_8->field_0226 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x21d) + (int)puVar2));
    local_8->field_0226 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x225) == -1) {
    local_8->field_022A = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x225) + (int)puVar2));
    local_8->field_022A = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x22d) == -1) {
    local_8->field_022E = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x22d) + (int)puVar2));
    local_8->field_022E = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x251) == -1) {
    *(undefined4 *)&local_8->field_0x24e = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x251) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x24e = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x26d) == -1) {
    *(undefined4 *)&local_8->field_0x266 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x26d) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x266 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x2aa) == -1) {
    local_8->field_029F = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x2aa) + (int)puVar2));
  local_8->field_029F = uVar5;
  g_currentExceptionFrame = local_50.previous;
  return;
}

