#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RestoreGrpBData */

void __thiscall STGroupBoatC::RestoreGrpBData(STGroupBoatC *this,undefined4 *param_1)

{
  uint uVar1;
  uint *puVar3;
  int iVar3;
  byte *puVar4;
  DArrayTy *pDVar5;
  ushort *puVar6;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  byte *puVar11;
  short *psVar12;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  STGroupBoatC *local_8;

  local_c = param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  puVar3 = local_c;
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
  puVar11 = (byte *)(local_c + 0xc);
  puVar4 = (byte *)&local_8->field_0x69;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = (byte *)(puVar11 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  puVar11 = (byte *)(local_c + 0x14);
  puVar4 = (byte *)(&local_8->field_0089);
  for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = (byte *)(puVar11 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  uVar1 = local_c[0x29];
  local_8->field_00DD = (short)uVar1;
  local_8->field_00DF = (short)((uint)uVar1 >> 0x10);
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
  *(undefined4 *)&local_8->field_0xff = STField<undefined4>(local_c,0xc6);
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
  puVar11 = (byte *)((int)local_c + 0x10a);
  puVar4 = (byte *)&local_8->field_0137;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = (byte *)(puVar11 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar11;
  STField<undefined1>(puVar4,2) = STField<undefined1>(puVar11,2);
  uVar1 = STField<undefined4>(local_c,0x129);
  local_8->field_0156 = (short)uVar1;
  local_8->field_0158 = (short)((uint)uVar1 >> 0x10);
  local_8->field_015A = STField<undefined2>(local_c,0x12d);
  local_8->field_01C9 = ((undefined1 *)local_c)[0x69];
  local_8->field_015C = STField<undefined4>(local_c,0x12f);
  local_8->field_0164 = STField<undefined4>(local_c,0x13b);
  local_8->field_016C = STField<undefined2>(local_c,0x147);
  local_8->field_016E = STField<undefined2>(local_c,0x149);
  local_8->field_0170 = STField<undefined2>(local_c,0x14b);
  local_8->field_0172 = STField<undefined2>(local_c,0x14d);
  local_8->field_0174 = STField<undefined2>(local_c,0x14f);
  local_8->field_0176 = STField<undefined2>(local_c,0x151);
  local_8->field_0178 = STField<RecoveredRecordView_005EFAE0_855D930D *>(local_c,0x153);
  local_8->field_017C = STField<undefined2>(local_c,0x157);
  local_8->field_017E = STField<undefined2>(local_c,0x159);
  local_8->field_0180 = STField<undefined2>(local_c,0x15b);
  uVar1 = STField<undefined4>(local_c,0x15d);
  local_8->field_0182 = (short)uVar1;
  local_8->field_0184 = (short)((uint)uVar1 >> 0x10);
  local_8->field_0186 = STField<undefined4>(local_c,0x161);
  local_8->field_018A = STField<undefined2>(local_c,0x165);
  uVar1 = STField<undefined4>(local_c,0x167);
  local_8->field_018C = (short)uVar1;
  local_8->field_018E = (short)((uint)uVar1 >> 0x10);
  local_8->field_0190 = STField<undefined2>(local_c,0x16b);
  *(undefined4 *)&local_8->field_0x192 = STField<undefined4>(local_c,0x16d);
  local_8->field_0196 = STField<undefined2>(local_c,0x171);
  local_8->field_0198 = STField<undefined1>(local_c,0x173);
  local_8->field_0199 = local_c[0x5d];
  uVar1 = local_c[0x5e];
  local_8->field_019D = (short)uVar1;
  local_8->field_019F = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01A1 = *(undefined2 *)(local_c + 0x5f);
  local_8->field_01A3 = STField<undefined4>(local_c,0x17e);
  uVar1 = STField<undefined4>(local_c,0x182);
  local_8->field_01A7 = (short)uVar1;
  local_8->field_01A9 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x186);
  local_8->field_01AB = (short)uVar1;
  local_8->field_01AD = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x18a);
  local_8->field_01AF = (short)uVar1;
  local_8->field_01B1 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x18e);
  local_8->field_01B3 = (short)uVar1;
  local_8->field_01B5 = (short)((uint)uVar1 >> 0x10);
  local_8->field_01B7 = STField<undefined2>(local_c,0x192);
  uVar1 = local_c[0x65];
  local_8->field_01B9 = (short)uVar1;
  local_8->field_01BB = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01BD = *(short *)(local_c + 0x66);
  uVar1 = STField<undefined4>(local_c,0x19a);
  local_8->field_01BF = (short)uVar1;
  local_8->field_01C1 = (short)((uint)uVar1 >> 0x10);
  local_8->field_01C3 = STField<undefined2>(local_c,0x19e);
  local_8->field_01C5 = (RecoveredRecordView_005EFAE0_855D930D *)local_c[0x68];
  puVar11 = (byte *)((int)local_c + 0x1d5);
  puVar4 = (byte *)&local_8->field_0x1e2;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = (byte *)(puVar11 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  local_8->field_0212 = STField<undefined4>(local_c,0x205);
  local_8->field_0216 = STField<int>(local_c,0x209);
  local_8->field_021A = STField<int>(local_c,0x20d);
  *(undefined4 *)&local_8->field_0x222 = STField<undefined4>(local_c,0x219);
  local_8->field_0232 = STField<int>(local_c,0x235);
  local_8->field_0236 = STField<undefined4>(local_c,0x239);
  local_8->field_023A = STField<undefined4>(local_c,0x23d);
  local_8->field_023E = STField<int>(local_c,0x241);
  local_8->field_0242 = STField<int>(local_c,0x245);
  local_8->field_0246 = STField<undefined4>(local_c,0x249);
  local_8->field_024A = STField<undefined4>(local_c,0x24d);
  local_8->field_0252 = STField<short>(local_c,0x259);
  local_8->field_0254 = STField<short>(local_c,0x25b);
  local_8->field_0256 = STField<short>(local_c,0x25d);
  local_8->field_0258 = STField<short>(local_c,0x25f);
  local_8->field_025A = STField<short>(local_c,0x261);
  local_8->field_025C = STField<short>(local_c,0x263);
  local_8->field_025E = STField<int>(local_c,0x265);
  local_8->field_0262 = STField<undefined4>(local_c,0x269);
  local_8->field_026A = STField<short>(local_c,0x275);
  local_8->field_026C = STField<short>(local_c,0x277);
  local_8->field_026E = STField<short>(local_c,0x279);
  local_8->field_0270 = STField<short>(local_c,0x27b);
  local_8->field_0272 = STField<short>(local_c,0x27d);
  local_8->field_0274 = STField<short>(local_c,0x27f);
  psVar10 = (short *)((int)local_c + 0x281);
  psVar12 = &local_8->field_0276;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar10;
    psVar10 = psVar10 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar10;
  ((char *)psVar12)[1] = (char)psVar10[1];
  uVar1 = local_c[0xa8];
  local_8->field_0295 = (short)uVar1;
  local_8->field_0297 = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0299 = *(short *)(local_c + 0xa9);
  local_8->field_029B = STField<undefined4>(local_c,0x2a6);
  uVar1 = STField<undefined4>(local_c,0x2b2);
  local_8->field_02A3 = (short)uVar1;
  local_8->field_02A5 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x2a7 = STField<undefined4>(local_c,0x2b6);
  local_8->field_02AB = STField<undefined2>(local_c,0x2ba);
  uVar1 = local_c[0xaf];
  local_8->field_02AD = (short)uVar1;
  local_8->field_02AF = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02B1 = *(undefined2 *)(local_c + 0xb0);
  uVar1 = STField<undefined4>(local_c,0x2c2);
  local_8->field_02B3 = (short)uVar1;
  local_8->field_02B5 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x2b7 = STField<undefined4>(local_c,0x2c6);
  local_8->field_02BB = STField<undefined2>(local_c,0x2ca);
  uVar1 = local_c[0xb3];
  local_8->field_02BD = (short)uVar1;
  local_8->field_02BF = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02C1 = *(undefined2 *)(local_c + 0xb4);
  *(undefined4 *)&local_8->field_0x2c3 = STField<undefined4>(local_c,0x2d2);
  *(undefined4 *)&local_8->field_0x2c7 = STField<undefined4>(local_c,0x2d6);
  local_8->field_02CB = STField<undefined2>(local_c,0x2da);
  local_8->field_02CD = ((undefined1 *)local_c)[0xb7];
  local_8->field_02CE = STField<undefined4>(local_c,0x2dd);
  uVar1 = STField<undefined4>(local_c,0x2e1);
  local_8->field_02D2 = (short)uVar1;
  local_8->field_02D4 = (short)((uint)uVar1 >> 0x10);
  local_8->field_02D6 = STField<undefined2>(local_c,0x2e5);
  local_8->field_02D8 = STField<undefined4>(local_c,0x2e7);
  uVar1 = STField<undefined4>(local_c,0x2eb);
  local_8->field_02DC = (short)uVar1;
  local_8->field_02DE = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x2ef);
  local_8->field_02E0 = (short)uVar1;
  local_8->field_02E2 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x2f3);
  local_8->field_02E4 = (short)uVar1;
  local_8->field_02E6 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x2f7);
  local_8->field_02E8 = (short)uVar1;
  local_8->field_02EA = (short)((uint)uVar1 >> 0x10);
  local_8->field_02EC = STField<undefined2>(local_c,0x2fb);
  uVar1 = STField<undefined4>(local_c,0x2fd);
  local_8->field_02EE = (short)uVar1;
  local_8->field_02F0 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x2f2 = STField<undefined4>(local_c,0x301);
  local_8->field_02F6 = STField<undefined2>(local_c,0x305);
  uVar1 = STField<undefined4>(local_c,0x307);
  local_8->field_02F8 = (short)uVar1;
  local_8->field_02FA = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x30b);
  local_8->field_02FC = (short)uVar1;
  local_8->field_02FE = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x30f);
  local_8->field_0300 = (short)uVar1;
  local_8->field_0302 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x313);
  local_8->field_0304 = (short)uVar1;
  local_8->field_0306 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x308 = STField<undefined4>(local_c,0x317);
  local_8->field_030C = STField<undefined2>(local_c,0x31b);
  *(undefined4 *)&local_8->field_0x30e = STField<undefined4>(local_c,0x31d);
  if (local_c[7] == -1) {
    local_8->field_0059 = nullptr;
  }
  else {

    puVar4 = (byte *)(Library::DKW::LIB::MemAlloc(local_c[8]));
    local_8->field_0059 = puVar4;
    uVar9 = puVar3[8];
    puVar11 = (byte *)(puVar3[7] + (int)puVar3);
    memmove(puVar4, puVar11, uVar9); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar9 = 0;
  }
  if (STField<int>(puVar3,0xb2) == -1) {
    local_8->field_00EF = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0xb2) + (int)puVar3));
    local_8->field_00EF = pDVar5;
  }
  if (STField<int>(puVar3,0xca) == -1) {
    local_8->field_0103 = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0xca) + (int)puVar3));
    local_8->field_0103 = pDVar5;
  }
  if (STField<int>(puVar3,0xda) == -1) {
    local_8->field_010F = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0xda) + (int)puVar3));
    local_8->field_010F = pDVar5;
  }
  if (STField<int>(puVar3,0xf6) == -1) {
    local_8->field_0127 = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0xf6) + (int)puVar3));
    local_8->field_0127 = pDVar5;
  }
  if (STField<int>(puVar3,0x133) == -1) {
    local_8->field_0160 = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x133) + (int)puVar3));
    local_8->field_0160 = pDVar5;
  }
  if (STField<int>(puVar3,0x1a5) == -1) {
    local_8->field_01CA = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x1a5) + (int)puVar3));
    local_8->field_01CA = pDVar5;
  }
  if (STField<int>(puVar3,0x1ad) == -1) {
    local_8->field_01CE = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x1ad) + (int)puVar3));
    local_8->field_01CE = pDVar5;
  }
  if (STField<int>(puVar3,0x1b5) == -1) {
    local_8->field_01D2 = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x1b5) + (int)puVar3));
    local_8->field_01D2 = pDVar5;
  }
  if (STField<int>(puVar3,0x1bd) == -1) {
    local_8->field_01D6 = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x1bd) + (int)puVar3));
    local_8->field_01D6 = pDVar5;
  }
  if (STField<int>(puVar3,0x1c5) == -1) {
    local_8->field_01DA = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x1c5) + (int)puVar3));
    local_8->field_01DA = pDVar5;
  }
  if (STField<int>(puVar3,0x1cd) == -1) {
    local_8->field_01DE = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x1cd) + (int)puVar3));
    local_8->field_01DE = pDVar5;
  }
  if (STField<int>(puVar3,0x1fd) == -1) {
    local_8->field_020E = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x1fd) + (int)puVar3));
    local_8->field_020E = pDVar5;
  }
  if ((STField<int>(puVar3,0x211) == -1) ||
     (uVar9 = STField<uint>(puVar3,0x215), (int)uVar9 < 1)) {
    local_8->field_021E = nullptr;
  }
  else {
    /* ST_CALLSITE[004A7064]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar6 = Library::DKW::LIB::MemAlloc(uVar9);
    local_8->field_021E = puVar6;
    puVar11 = (byte *)((int)puVar3 + STField<int>(puVar3,0x211));
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar6 = *puVar11;
      puVar11 = (byte *)(puVar11 + 1);
      puVar6 = puVar6 + 2;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar11;
      puVar11 = (byte *)((int)puVar11 + 1);
      puVar6 = (ushort *)((int)puVar6 + 1);
    }
  }
  if (STField<int>(puVar3,0x21d) == -1) {
    local_8->field_0226 = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x21d) + (int)puVar3));
    local_8->field_0226 = pDVar5;
  }
  if (STField<int>(puVar3,0x225) == -1) {
    local_8->field_022A = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x225) + (int)puVar3));
    local_8->field_022A = pDVar5;
  }
  if (STField<int>(puVar3,0x22d) == -1) {
    local_8->field_022E = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x22d) + (int)puVar3));
    local_8->field_022E = pDVar5;
  }
  if (STField<int>(puVar3,0x251) == -1) {
    local_8->field_024E = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x251) + (int)puVar3));
    local_8->field_024E = pDVar5;
  }
  if (STField<int>(puVar3,0x26d) == -1) {
    local_8->field_0266 = nullptr;
  }
  else {
    pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x26d) + (int)puVar3));
    local_8->field_0266 = pDVar5;
  }
  if (STField<int>(puVar3,0x2aa) == -1) {
    local_8->field_029F = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  pDVar5 = FUN_006b0060(nullptr,(uint *)(STField<int>(puVar3,0x2aa) + (int)puVar3));
  local_8->field_029F = pDVar5;
  g_currentExceptionFrame = local_50.previous;
  return;
}

