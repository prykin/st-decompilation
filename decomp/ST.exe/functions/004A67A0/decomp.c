
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
  local_8->field_005D = local_c[9];
  local_8->field_0061 = local_c[10];
  local_8->field_0065 = local_c[0xb];
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
  local_8->field_00E7 = *(undefined4 *)((int)local_c + 0xae);
  local_8->field_00F3 = *(undefined2 *)((int)local_c + 0xba);
  local_8->field_00F5 = *(undefined2 *)(local_c + 0x2f);
  local_8->field_00F7 = *(undefined2 *)((int)local_c + 0xbe);
  local_8->field_00F9 = *(undefined2 *)(local_c + 0x30);
  local_8->field_00FB = *(undefined2 *)((int)local_c + 0xc2);
  local_8->field_00FD = *(undefined2 *)(local_c + 0x31);
  local_8->field_00FF = *(undefined4 *)((int)local_c + 0xc6);
  local_8->field_0107 = *(undefined4 *)((int)local_c + 0xd2);
  local_8->field_010B = *(undefined4 *)((int)local_c + 0xd6);
  local_8->field_0113 = *(undefined2 *)((int)local_c + 0xe2);
  local_8->field_0115 = *(undefined2 *)(local_c + 0x39);
  local_8->field_0117 = *(undefined2 *)((int)local_c + 0xe6);
  local_8->field_0119 = *(undefined2 *)(local_c + 0x3a);
  local_8->field_011B = *(undefined2 *)((int)local_c + 0xea);
  local_8->field_011D = *(undefined2 *)(local_c + 0x3b);
  local_8->field_011F = *(undefined4 *)((int)local_c + 0xee);
  local_8->field_0123 = *(undefined4 *)((int)local_c + 0xf2);
  local_8->field_012B = *(undefined2 *)((int)local_c + 0xfe);
  local_8->field_012D = *(undefined2 *)(local_c + 0x40);
  local_8->field_012F = *(undefined2 *)((int)local_c + 0x102);
  local_8->field_0131 = *(undefined2 *)(local_c + 0x41);
  local_8->field_0133 = *(undefined2 *)((int)local_c + 0x106);
  local_8->field_0135 = *(undefined2 *)(local_c + 0x42);
  puVar9 = (undefined4 *)((int)local_c + 0x10a);
  puVar4 = (undefined4 *)&local_8->field_0137;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar9;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar9 + 2);
  *(undefined4 *)&local_8->field_0x156 = *(undefined4 *)((int)local_c + 0x129);
  local_8->field_015A = *(undefined2 *)((int)local_c + 0x12d);
  local_8->field_01C9 = *(undefined1 *)(local_c + 0x69);
  local_8->field_015C = *(undefined4 *)((int)local_c + 0x12f);
  local_8->field_0164 = *(undefined4 *)((int)local_c + 0x13b);
  local_8->field_016C = *(undefined2 *)((int)local_c + 0x147);
  local_8->field_016E = *(undefined2 *)((int)local_c + 0x149);
  local_8->field_0170 = *(undefined2 *)((int)local_c + 0x14b);
  local_8->field_0172 = *(undefined2 *)((int)local_c + 0x14d);
  local_8->field_0174 = *(undefined2 *)((int)local_c + 0x14f);
  local_8->field_0176 = *(undefined2 *)((int)local_c + 0x151);
  local_8->field_0178 = *(undefined4 *)((int)local_c + 0x153);
  local_8->field_017C = *(undefined2 *)((int)local_c + 0x157);
  local_8->field_017E = *(undefined2 *)((int)local_c + 0x159);
  local_8->field_0180 = *(undefined2 *)((int)local_c + 0x15b);
  local_8->field_0182 = *(undefined4 *)((int)local_c + 0x15d);
  local_8->field_0186 = *(undefined4 *)((int)local_c + 0x161);
  local_8->field_018A = *(undefined2 *)((int)local_c + 0x165);
  local_8->field_018C = *(undefined4 *)((int)local_c + 0x167);
  local_8->field_0190 = *(undefined2 *)((int)local_c + 0x16b);
  *(undefined4 *)&local_8->field_0x192 = *(undefined4 *)((int)local_c + 0x16d);
  *(undefined2 *)&local_8->field_0x196 = *(undefined2 *)((int)local_c + 0x171);
  local_8->field_0x198 = *(undefined1 *)((int)local_c + 0x173);
  local_8->field_0199 = local_c[0x5d];
  local_8->field_019D = local_c[0x5e];
  local_8->field_01A1 = *(undefined2 *)(local_c + 0x5f);
  local_8->field_01A3 = *(undefined4 *)((int)local_c + 0x17e);
  local_8->field_01A7 = *(undefined4 *)((int)local_c + 0x182);
  local_8->field_01AB = *(undefined4 *)((int)local_c + 0x186);
  local_8->field_01AF = *(undefined4 *)((int)local_c + 0x18a);
  local_8->field_01B3 = *(undefined4 *)((int)local_c + 0x18e);
  local_8->field_01B7 = *(undefined2 *)((int)local_c + 0x192);
  *(undefined4 *)&local_8->field_0x1b9 = local_c[0x65];
  local_8->field_01BD = *(undefined2 *)(local_c + 0x66);
  *(undefined4 *)&local_8->field_0x1bf = *(undefined4 *)((int)local_c + 0x19a);
  local_8->field_01C3 = *(undefined2 *)((int)local_c + 0x19e);
  local_8->field_01C5 = local_c[0x68];
  puVar9 = (undefined4 *)((int)local_c + 0x1d5);
  puVar4 = (undefined4 *)&local_8->field_0x1e2;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  local_8->field_0212 = *(undefined4 *)((int)local_c + 0x205);
  local_8->field_0216 = *(undefined4 *)((int)local_c + 0x209);
  local_8->field_021A = *(undefined4 *)((int)local_c + 0x20d);
  local_8->field_0222 = *(undefined4 *)((int)local_c + 0x219);
  local_8->field_0232 = *(undefined4 *)((int)local_c + 0x235);
  local_8->field_0236 = *(undefined4 *)((int)local_c + 0x239);
  local_8->field_023A = *(undefined4 *)((int)local_c + 0x23d);
  local_8->field_023E = *(undefined4 *)((int)local_c + 0x241);
  local_8->field_0242 = *(undefined4 *)((int)local_c + 0x245);
  local_8->field_0246 = *(undefined4 *)((int)local_c + 0x249);
  local_8->field_024A = *(undefined4 *)((int)local_c + 0x24d);
  local_8->field_0252 = *(undefined2 *)((int)local_c + 0x259);
  local_8->field_0254 = *(undefined2 *)((int)local_c + 0x25b);
  local_8->field_0256 = *(undefined2 *)((int)local_c + 0x25d);
  local_8->field_0258 = *(undefined2 *)((int)local_c + 0x25f);
  local_8->field_025A = *(undefined2 *)((int)local_c + 0x261);
  local_8->field_025C = *(undefined2 *)((int)local_c + 0x263);
  local_8->field_025E = *(undefined4 *)((int)local_c + 0x265);
  local_8->field_0262 = *(undefined4 *)((int)local_c + 0x269);
  local_8->field_026A = *(undefined2 *)((int)local_c + 0x275);
  local_8->field_026C = *(undefined2 *)((int)local_c + 0x277);
  local_8->field_026E = *(undefined2 *)((int)local_c + 0x279);
  local_8->field_0270 = *(undefined2 *)((int)local_c + 0x27b);
  local_8->field_0272 = *(undefined2 *)((int)local_c + 0x27d);
  local_8->field_0274 = *(undefined2 *)((int)local_c + 0x27f);
  puVar9 = (undefined4 *)((int)local_c + 0x281);
  puVar4 = (undefined4 *)&local_8->field_0276;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar9;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar9 + 2);
  *(undefined4 *)&local_8->field_0x295 = local_c[0xa8];
  local_8->field_0299 = *(undefined2 *)(local_c + 0xa9);
  local_8->field_029B = *(undefined4 *)((int)local_c + 0x2a6);
  *(undefined4 *)&local_8->field_0x2a3 = *(undefined4 *)((int)local_c + 0x2b2);
  *(undefined4 *)&local_8->field_0x2a7 = *(undefined4 *)((int)local_c + 0x2b6);
  *(undefined2 *)&local_8->field_0x2ab = *(undefined2 *)((int)local_c + 0x2ba);
  *(undefined4 *)&local_8->field_0x2ad = local_c[0xaf];
  local_8->field_02B1 = *(undefined2 *)(local_c + 0xb0);
  *(undefined4 *)&local_8->field_0x2b3 = *(undefined4 *)((int)local_c + 0x2c2);
  *(undefined4 *)&local_8->field_0x2b7 = *(undefined4 *)((int)local_c + 0x2c6);
  *(undefined2 *)&local_8->field_0x2bb = *(undefined2 *)((int)local_c + 0x2ca);
  *(undefined4 *)&local_8->field_0x2bd = local_c[0xb3];
  local_8->field_02C1 = *(undefined2 *)(local_c + 0xb4);
  *(undefined4 *)&local_8->field_0x2c3 = *(undefined4 *)((int)local_c + 0x2d2);
  *(undefined4 *)&local_8->field_0x2c7 = *(undefined4 *)((int)local_c + 0x2d6);
  *(undefined2 *)&local_8->field_0x2cb = *(undefined2 *)((int)local_c + 0x2da);
  local_8->field_0x2cd = *(undefined1 *)(local_c + 0xb7);
  local_8->field_02CE = *(undefined4 *)((int)local_c + 0x2dd);
  *(undefined4 *)&local_8->field_0x2d2 = *(undefined4 *)((int)local_c + 0x2e1);
  local_8->field_02D6 = *(undefined2 *)((int)local_c + 0x2e5);
  local_8->field_02D8 = *(undefined4 *)((int)local_c + 0x2e7);
  *(undefined4 *)&local_8->field_0x2dc = *(undefined4 *)((int)local_c + 0x2eb);
  *(undefined4 *)&local_8->field_0x2e0 = *(undefined4 *)((int)local_c + 0x2ef);
  *(undefined4 *)&local_8->field_0x2e4 = *(undefined4 *)((int)local_c + 0x2f3);
  *(undefined4 *)&local_8->field_0x2e8 = *(undefined4 *)((int)local_c + 0x2f7);
  local_8->field_02EC = *(undefined2 *)((int)local_c + 0x2fb);
  *(undefined4 *)&local_8->field_0x2ee = *(undefined4 *)((int)local_c + 0x2fd);
  *(undefined4 *)&local_8->field_0x2f2 = *(undefined4 *)((int)local_c + 0x301);
  *(undefined2 *)&local_8->field_0x2f6 = *(undefined2 *)((int)local_c + 0x305);
  *(undefined4 *)&local_8->field_0x2f8 = *(undefined4 *)((int)local_c + 0x307);
  *(undefined4 *)&local_8->field_0x2fc = *(undefined4 *)((int)local_c + 0x30b);
  *(undefined4 *)&local_8->field_0x300 = *(undefined4 *)((int)local_c + 0x30f);
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
    local_8->field_00EF = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xb2) + (int)puVar2));
    local_8->field_00EF = uVar5;
  }
  if (*(int *)((int)puVar2 + 0xca) == -1) {
    local_8->field_0103 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xca) + (int)puVar2));
    local_8->field_0103 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0xda) == -1) {
    local_8->field_010F = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xda) + (int)puVar2));
    local_8->field_010F = uVar5;
  }
  if (*(int *)((int)puVar2 + 0xf6) == -1) {
    local_8->field_0127 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xf6) + (int)puVar2));
    local_8->field_0127 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x133) == -1) {
    local_8->field_0160 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x133) + (int)puVar2));
    local_8->field_0160 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1a5) == -1) {
    local_8->field_01CA = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1a5) + (int)puVar2));
    local_8->field_01CA = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1ad) == -1) {
    local_8->field_01CE = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1ad) + (int)puVar2));
    local_8->field_01CE = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1b5) == -1) {
    local_8->field_01D2 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1b5) + (int)puVar2));
    local_8->field_01D2 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1bd) == -1) {
    local_8->field_01D6 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1bd) + (int)puVar2));
    local_8->field_01D6 = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1c5) == -1) {
    local_8->field_01DA = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1c5) + (int)puVar2));
    local_8->field_01DA = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1cd) == -1) {
    local_8->field_01DE = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1cd) + (int)puVar2));
    local_8->field_01DE = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x1fd) == -1) {
    local_8->field_020E = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1fd) + (int)puVar2));
    local_8->field_020E = uVar5;
  }
  if ((*(int *)((int)puVar2 + 0x211) == -1) ||
     (uVar8 = *(uint *)((int)puVar2 + 0x215), (int)uVar8 < 1)) {
    local_8->field_021E = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar8);
    local_8->field_021E = puVar4;
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
    local_8->field_024E = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x251) + (int)puVar2));
    local_8->field_024E = uVar5;
  }
  if (*(int *)((int)puVar2 + 0x26d) == -1) {
    local_8->field_0266 = 0;
  }
  else {
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x26d) + (int)puVar2));
    local_8->field_0266 = uVar5;
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

