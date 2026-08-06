#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RestoreGrpBData */

void __thiscall STGroupBoatC::RestoreGrpBData(STGroupBoatC *this,undefined4 *param_1)

{
  undefined4 *puVar2;
  int iVar3;
  byte *puVar3;
  DArrayTy *pDVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *puVar10;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  STGroupBoatC *local_8;

  local_c = param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  puVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x158b,0,iVar3,"%s",
                               "STGroupBoatC::RestoreGrpBData");
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x158c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
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
  puVar10 = (byte *)(local_c + 0xc);
  puVar3 = (byte *)&local_8->field_0x69;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  puVar10 = (byte *)(local_c + 0x14);
  puVar3 = (byte *)(&local_8->field_0089);
  for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  *(undefined4 *)&local_8->field_0xdd = local_c[0x29];
  *(undefined4 *)&local_8->field_0xe1 = local_c[0x2a];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00E5 = *(undefined2 *)(local_c + 0x2b);
  local_8->field_00E7 = STField<undefined4>(local_c,0xae);
  local_8->field_00F3 = STField<short>(local_c,0xba);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F5 = *(short *)(local_c + 0x2f);
  local_8->field_00F7 = STField<short>(local_c,0xbe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F9 = *(short *)(local_c + 0x30);
  local_8->field_00FB = STField<short>(local_c,0xc2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00FD = *(short *)(local_c + 0x31);
  local_8->field_00FF = STField<undefined4>(local_c,0xc6);
  local_8->field_0107 = STField<undefined4>(local_c,0xd2);
  local_8->field_010B = STField<undefined4>(local_c,0xd6);
  local_8->field_0113 = STField<undefined2>(local_c,0xe2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0115 = *(undefined2 *)(local_c + 0x39);
  local_8->field_0117 = STField<undefined2>(local_c,0xe6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0119 = *(undefined2 *)(local_c + 0x3a);
  local_8->field_011B = STField<undefined2>(local_c,0xea);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_011D = *(undefined2 *)(local_c + 0x3b);
  local_8->field_011F = STField<undefined4>(local_c,0xee);
  local_8->field_0123 = STField<undefined4>(local_c,0xf2);
  local_8->field_012B = STField<undefined2>(local_c,0xfe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_012D = *(undefined2 *)(local_c + 0x40);
  local_8->field_012F = STField<undefined2>(local_c,0x102);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0131 = *(undefined2 *)(local_c + 0x41);
  local_8->field_0133 = STField<undefined2>(local_c,0x106);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0135 = *(undefined2 *)(local_c + 0x42);
  puVar10 = (byte *)((int)local_c + 0x10a);
  puVar3 = (byte *)&local_8->field_0137;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar10;
  STField<undefined1>(puVar3,2) = STField<undefined1>(puVar10,2);
  *(undefined4 *)&local_8->field_0x156 = STField<undefined4>(local_c,0x129);
  local_8->field_015A = STField<undefined2>(local_c,0x12d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01C9 = *(undefined1 *)(local_c + 0x69);
  local_8->field_015C = STField<undefined4>(local_c,0x12f);
  local_8->field_0164 = STField<undefined4>(local_c,0x13b);
  local_8->field_016C = STField<undefined2>(local_c,0x147);
  *(undefined2 *)&local_8->field_0x16e = STField<undefined2>(local_c,0x149);
  *(undefined2 *)&local_8->field_0x170 = STField<undefined2>(local_c,0x14b);
  local_8->field_0172 = STField<undefined2>(local_c,0x14d);
  local_8->field_0174 = STField<undefined2>(local_c,0x14f);
  local_8->field_0176 = STField<undefined2>(local_c,0x151);
  local_8->field_0178 = STField<AnonShape_005EFAE0_B406B78B *>(local_c,0x153);
  *(undefined2 *)&local_8->field_0x17c = STField<undefined2>(local_c,0x157);
  *(undefined2 *)&local_8->field_0x17e = STField<undefined2>(local_c,0x159);
  local_8->field_0180 = STField<undefined2>(local_c,0x15b);
  local_8->field_0182 = STField<undefined4>(local_c,0x15d);
  local_8->field_0186 = STField<undefined4>(local_c,0x161);
  local_8->field_018A = STField<undefined2>(local_c,0x165);
  local_8->field_018C = STField<undefined4>(local_c,0x167);
  local_8->field_0190 = STField<undefined2>(local_c,0x16b);
  *(undefined4 *)&local_8->field_0x192 = STField<undefined4>(local_c,0x16d);
  local_8->field_0196 = STField<undefined2>(local_c,0x171);
  local_8->field_0198 = STField<undefined1>(local_c,0x173);
  local_8->field_0199 = local_c[0x5d];
  local_8->field_019D = local_c[0x5e];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01A1 = *(undefined2 *)(local_c + 0x5f);
  local_8->field_01A3 = STField<undefined4>(local_c,0x17e);
  local_8->field_01A7 = STField<undefined4>(local_c,0x182);
  local_8->field_01AB = STField<undefined4>(local_c,0x186);
  local_8->field_01AF = STField<undefined4>(local_c,0x18a);
  local_8->field_01B3 = STField<undefined4>(local_c,0x18e);
  local_8->field_01B7 = STField<undefined2>(local_c,0x192);
  *(undefined4 *)&local_8->field_0x1b9 = local_c[0x65];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01BD = *(undefined2 *)(local_c + 0x66);
  *(undefined4 *)&local_8->field_0x1bf = STField<undefined4>(local_c,0x19a);
  local_8->field_01C3 = STField<undefined2>(local_c,0x19e);
  local_8->field_01C5 = (AnonShape_005EFAE0_B406B78B *)local_c[0x68];
  puVar10 = (byte *)((int)local_c + 0x1d5);
  puVar3 = (byte *)&local_8->field_0x1e2;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  local_8->field_0212 = STField<undefined4>(local_c,0x205);
  local_8->field_0216 = STField<undefined4>(local_c,0x209);
  local_8->field_021A = STField<int>(local_c,0x20d);
  *(undefined4 *)&local_8->field_0x222 = STField<undefined4>(local_c,0x219);
  local_8->field_0232 = STField<int>(local_c,0x235);
  local_8->field_0236 = STField<undefined4>(local_c,0x239);
  local_8->field_023A = STField<undefined4>(local_c,0x23d);
  local_8->field_023E = STField<int>(local_c,0x241);
  local_8->field_0242 = STField<int>(local_c,0x245);
  local_8->field_0246 = STField<undefined4>(local_c,0x249);
  local_8->field_024A = STField<undefined4>(local_c,0x24d);
  local_8->field_0252 = STField<undefined2>(local_c,0x259);
  local_8->field_0254 = STField<undefined2>(local_c,0x25b);
  local_8->field_0256 = STField<undefined2>(local_c,0x25d);
  local_8->field_0258 = STField<short>(local_c,0x25f);
  local_8->field_025A = STField<short>(local_c,0x261);
  local_8->field_025C = STField<short>(local_c,0x263);
  local_8->field_025E = STField<int>(local_c,0x265);
  local_8->field_0262 = STField<undefined4>(local_c,0x269);
  local_8->field_026A = STField<undefined2>(local_c,0x275);
  local_8->field_026C = STField<undefined2>(local_c,0x277);
  local_8->field_026E = STField<undefined2>(local_c,0x279);
  local_8->field_0270 = STField<short>(local_c,0x27b);
  local_8->field_0272 = STField<short>(local_c,0x27d);
  local_8->field_0274 = STField<short>(local_c,0x27f);
  puVar10 = (byte *)((int)local_c + 0x281);
  puVar3 = (byte *)&local_8->field_0276;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar10;
  STField<undefined1>(puVar3,2) = STField<undefined1>(puVar10,2);
  *(undefined4 *)&local_8->field_0x295 = local_c[0xa8];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0299 = *(undefined2 *)(local_c + 0xa9);
  local_8->field_029B = STField<undefined4>(local_c,0x2a6);
  *(undefined4 *)&local_8->field_0x2a3 = STField<undefined4>(local_c,0x2b2);
  *(undefined4 *)&local_8->field_0x2a7 = STField<undefined4>(local_c,0x2b6);
  local_8->field_02AB = STField<undefined2>(local_c,0x2ba);
  *(undefined4 *)&local_8->field_0x2ad = local_c[0xaf];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02B1 = *(undefined2 *)(local_c + 0xb0);
  *(undefined4 *)&local_8->field_0x2b3 = STField<undefined4>(local_c,0x2c2);
  *(undefined4 *)&local_8->field_0x2b7 = STField<undefined4>(local_c,0x2c6);
  *(undefined2 *)&local_8->field_0x2bb = STField<undefined2>(local_c,0x2ca);
  *(undefined4 *)&local_8->field_0x2bd = local_c[0xb3];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02C1 = *(undefined2 *)(local_c + 0xb4);
  *(undefined4 *)&local_8->field_0x2c3 = STField<undefined4>(local_c,0x2d2);
  *(undefined4 *)&local_8->field_0x2c7 = STField<undefined4>(local_c,0x2d6);
  local_8->field_02CB = STField<undefined2>(local_c,0x2da);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02CD = *(undefined1 *)(local_c + 0xb7);
  local_8->field_02CE = STField<undefined4>(local_c,0x2dd);
  *(undefined4 *)&local_8->field_0x2d2 = STField<undefined4>(local_c,0x2e1);
  local_8->field_02D6 = STField<undefined2>(local_c,0x2e5);
  local_8->field_02D8 = STField<undefined4>(local_c,0x2e7);
  *(undefined4 *)&local_8->field_0x2dc = STField<undefined4>(local_c,0x2eb);
  *(undefined4 *)&local_8->field_0x2e0 = STField<undefined4>(local_c,0x2ef);
  *(undefined4 *)&local_8->field_0x2e4 = STField<undefined4>(local_c,0x2f3);
  *(undefined4 *)&local_8->field_0x2e8 = STField<undefined4>(local_c,0x2f7);
  local_8->field_02EC = STField<undefined2>(local_c,0x2fb);
  *(undefined4 *)&local_8->field_0x2ee = STField<undefined4>(local_c,0x2fd);
  *(undefined4 *)&local_8->field_0x2f2 = STField<undefined4>(local_c,0x301);
  local_8->field_02F6 = STField<undefined2>(local_c,0x305);
  *(undefined4 *)&local_8->field_0x2f8 = STField<undefined4>(local_c,0x307);
  *(undefined4 *)&local_8->field_0x2fc = STField<undefined4>(local_c,0x30b);
  *(undefined4 *)&local_8->field_0x300 = STField<undefined4>(local_c,0x30f);
  *(undefined4 *)&local_8->field_0x304 = STField<undefined4>(local_c,0x313);
  *(undefined4 *)&local_8->field_0x308 = STField<undefined4>(local_c,0x317);
  local_8->field_030C = STField<undefined2>(local_c,0x31b);
  local_8->field_030E = STField<undefined4>(local_c,0x31d);
  if (local_c[7] == -1) {
    local_8->field_0059 = nullptr;
  }
  else {
    puVar3 = (byte *)(Library::DKW::LIB::MemAlloc(local_c[8]));
    local_8->field_0059 = puVar3;
    uVar9 = puVar2[8];
    puVar10 = (byte *)(puVar2[7] + (int)puVar2);
    memmove(puVar3, puVar10, uVar9); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar9 = 0;
  }
  if (STField<int>(puVar2,0xb2) == -1) {
    local_8->field_00EF = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0xb2) + (int)puVar2));
    local_8->field_00EF = pDVar4;
  }
  if (STField<int>(puVar2,0xca) == -1) {
    local_8->field_0103 = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0xca) + (int)puVar2));
    local_8->field_0103 = pDVar4;
  }
  if (STField<int>(puVar2,0xda) == -1) {
    local_8->field_010F = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0xda) + (int)puVar2));
    local_8->field_010F = pDVar4;
  }
  if (STField<int>(puVar2,0xf6) == -1) {
    local_8->field_0127 = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0xf6) + (int)puVar2));
    local_8->field_0127 = pDVar4;
  }
  if (STField<int>(puVar2,0x133) == -1) {
    local_8->field_0160 = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x133) + (int)puVar2));
    local_8->field_0160 = pDVar4;
  }
  if (STField<int>(puVar2,0x1a5) == -1) {
    local_8->field_01CA = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x1a5) + (int)puVar2));
    local_8->field_01CA = pDVar4;
  }
  if (STField<int>(puVar2,0x1ad) == -1) {
    local_8->field_01CE = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x1ad) + (int)puVar2));
    local_8->field_01CE = pDVar4;
  }
  if (STField<int>(puVar2,0x1b5) == -1) {
    *(undefined4 *)&local_8->field_0x1d2 = 0;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x1b5) + (int)puVar2));
    *(DArrayTy **)&local_8->field_0x1d2 = pDVar4;
  }
  if (STField<int>(puVar2,0x1bd) == -1) {
    local_8->field_01D6 = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x1bd) + (int)puVar2));
    local_8->field_01D6 = pDVar4;
  }
  if (STField<int>(puVar2,0x1c5) == -1) {
    local_8->field_01DA = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x1c5) + (int)puVar2));
    local_8->field_01DA = pDVar4;
  }
  if (STField<int>(puVar2,0x1cd) == -1) {
    local_8->field_01DE = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x1cd) + (int)puVar2));
    local_8->field_01DE = pDVar4;
  }
  if (STField<int>(puVar2,0x1fd) == -1) {
    local_8->field_020E = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x1fd) + (int)puVar2));
    local_8->field_020E = pDVar4;
  }
  if ((STField<int>(puVar2,0x211) == -1) ||
     (uVar9 = STField<uint>(puVar2,0x215), (int)uVar9 < 1)) {
    local_8->field_021E = nullptr;
  }
  else {
    puVar5 = Library::DKW::LIB::MemAlloc(uVar9);
    local_8->field_021E = puVar5;
    puVar10 = (byte *)((int)puVar2 + STField<int>(puVar2,0x211));
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar5 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar5 = puVar5 + 2;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
      puVar10 = (byte *)((int)puVar10 + 1);
      puVar5 = (ushort *)((int)puVar5 + 1);
    }
  }
  if (STField<int>(puVar2,0x21d) == -1) {
    local_8->field_0226 = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x21d) + (int)puVar2));
    local_8->field_0226 = pDVar4;
  }
  if (STField<int>(puVar2,0x225) == -1) {
    local_8->field_022A = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x225) + (int)puVar2));
    local_8->field_022A = pDVar4;
  }
  if (STField<int>(puVar2,0x22d) == -1) {
    local_8->field_022E = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x22d) + (int)puVar2));
    local_8->field_022E = pDVar4;
  }
  if (STField<int>(puVar2,0x251) == -1) {
    local_8->field_024E = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x251) + (int)puVar2));
    local_8->field_024E = pDVar4;
  }
  if (STField<int>(puVar2,0x26d) == -1) {
    local_8->field_0266 = nullptr;
  }
  else {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x26d) + (int)puVar2));
    local_8->field_0266 = pDVar4;
  }
  if (STField<int>(puVar2,0x2aa) == -1) {
    *(undefined4 *)&local_8->field_0x29f = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  pDVar4 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar2,0x2aa) + (int)puVar2));
  *(DArrayTy **)&local_8->field_0x29f = pDVar4;
  g_currentExceptionFrame = local_50.previous;
  return;
}

