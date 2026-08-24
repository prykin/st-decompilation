#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SaveGrpBData */

undefined4 * __thiscall STGroupBoatC::SaveGrpBData(STGroupBoatC *this,int *param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  int iVar5;
  uint *puVar6;
  int iVar4;
  byte *puVar7;
  uint uVar8;
  short *psVar9;
  int *piVar10;
  ushort *puVar11;
  byte *puVar12;
  short *psVar13;
  int *piVar14;
  InternalExceptionFrame local_5c;
  undefined4 *local_18;
  STGroupBoatC *local_14;
  int local_10;
  ushort *local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1495,0,iVar3,"%s",
                               "STGroupBoatC::SaveGrpBData");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x1496);
    return local_18;
  }
  *param_1 = 0x321;
  if (local_14->field_0059 != nullptr) {
    iVar5 = *STField<int *>(local_14,0x59) * 0x10;
    local_8 = iVar5 + 0xc;
    *param_1 = iVar5 + 0x32d;
  }
  if (local_14->field_00EF != nullptr) {
    local_c = FUN_006b0020(&local_14->field_00EF->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0103 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_0103->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_010F != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_010F->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0127 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_0127->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0160 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_0160->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0168 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_0168->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01CA != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_01CA->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01CE != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_01CE->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01D2 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_01D2->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01D6 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_01D6->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01DA != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_01DA->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01DE != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_01DE->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_020E != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_020E->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  *param_1 = *param_1 + pSVar2->field_021A * 8;
  if (pSVar2->field_0226 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_0226->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_022A != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_022A->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_022E != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_022E->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_024E != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_024E->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0266 != nullptr) {
    local_c = FUN_006b0020(&pSVar2->field_0266->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_029F != nullptr) {
    local_c = FUN_006b0020((uint *)pSVar2->field_029F,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar6 = Library::DKW::LIB::MemAlloc(*param_1);
  *puVar6 = local_14->field_003D;
  puVar6[1] = local_14->field_0041;
  puVar6[2] = local_14->field_0045;
  puVar6[3] = local_14->field_0049;
  puVar6[4] = local_14->field_004D;
  puVar6[5] = local_14->field_0051;
  puVar6[6] = local_14->field_0055;
  puVar6[9] = local_14->field_005D;
  puVar6[10] = local_14->field_0061;
  puVar6[0xb] = local_14->field_0065;
  puVar7 = (byte *)&local_14->field_0x69;
  puVar12 = (byte *)(puVar6 + 0xc);
  memmove(puVar12, puVar7, 0x20); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  puVar7 = (byte *)(&local_14->field_0089);
  puVar12 = (byte *)(puVar6 + 0x14);
  memmove(puVar12, puVar7, 0x54); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  puVar6[0x29] = *(undefined4 *)&local_14->field_00DD;
  puVar6[0x2a] = *(undefined4 *)&local_14->field_0xe1;
  *(undefined2 *)(puVar6 + 0x2b) = local_14->field_00E5;
  STField<undefined4>(puVar6,0xae) = local_14->field_00E7;
  STField<short>(puVar6,0xba) = local_14->field_00F3;
  *(short *)(puVar6 + 0x2f) = local_14->field_00F5;
  STField<short>(puVar6,0xbe) = local_14->field_00F7;
  *(short *)(puVar6 + 0x30) = local_14->field_00F9;
  STField<short>(puVar6,0xc2) = local_14->field_00FB;
  *(short *)(puVar6 + 0x31) = local_14->field_00FD;
  STField<undefined4>(puVar6,0xc6) = *(undefined4 *)&local_14->field_0xff;
  STField<undefined4>(puVar6,0xd2) = local_14->field_0107;
  STField<undefined4>(puVar6,0xd6) = local_14->field_010B;
  STField<undefined2>(puVar6,0xe2) = local_14->field_0113;
  *(undefined2 *)(puVar6 + 0x39) = local_14->field_0115;
  STField<undefined2>(puVar6,0xe6) = local_14->field_0117;
  *(undefined2 *)(puVar6 + 0x3a) = local_14->field_0119;
  STField<undefined2>(puVar6,0xea) = local_14->field_011B;
  *(undefined2 *)(puVar6 + 0x3b) = local_14->field_011D;
  STField<undefined4>(puVar6,0xee) = local_14->field_011F;
  STField<undefined4>(puVar6,0xf2) = local_14->field_0123;
  STField<undefined2>(puVar6,0xfe) = local_14->field_012B;
  *(undefined2 *)(puVar6 + 0x40) = local_14->field_012D;
  STField<undefined2>(puVar6,0x102) = local_14->field_012F;
  *(undefined2 *)(puVar6 + 0x41) = local_14->field_0131;
  STField<undefined2>(puVar6,0x106) = local_14->field_0133;
  *(undefined2 *)(puVar6 + 0x42) = local_14->field_0135;
  puVar7 = (byte *)&local_14->field_0137;
  puVar12 = (byte *)((int)puVar6 + 0x10a);
  memmove(puVar12, puVar7, 0x1f); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  STField<undefined4>(puVar6,0x129) = *(undefined4 *)&local_14->field_0156;
  STField<undefined2>(puVar6,0x12d) = local_14->field_015A;
  ((undefined1 *)puVar6)[0x69] = local_14->field_01C9;
  STField<undefined4>(puVar6,0x12f) = local_14->field_015C;
  STField<undefined4>(puVar6,0x13b) = local_14->field_0164;
  STField<undefined2>(puVar6,0x147) = local_14->field_016C;
  STField<undefined2>(puVar6,0x149) = local_14->field_016E;
  STField<undefined2>(puVar6,0x14b) = local_14->field_0170;
  STField<undefined2>(puVar6,0x14d) = local_14->field_0172;
  STField<undefined2>(puVar6,0x14f) = local_14->field_0174;
  STField<undefined2>(puVar6,0x151) = local_14->field_0176;
  STField<AnonShape_005EFAE0_B406B78B *>(puVar6,0x153) = local_14->field_0178;
  STField<undefined2>(puVar6,0x157) = local_14->field_017C;
  STField<undefined2>(puVar6,0x159) = local_14->field_017E;
  STField<undefined2>(puVar6,0x15b) = local_14->field_0180;
  STField<undefined4>(puVar6,0x15d) = *(undefined4 *)&local_14->field_0182;
  STField<undefined4>(puVar6,0x161) = local_14->field_0186;
  STField<undefined2>(puVar6,0x165) = local_14->field_018A;
  STField<undefined4>(puVar6,0x167) = *(undefined4 *)&local_14->field_018C;
  STField<undefined2>(puVar6,0x16b) = local_14->field_0190;
  STField<undefined4>(puVar6,0x16d) = *(undefined4 *)&local_14->field_0x192;
  STField<undefined2>(puVar6,0x171) = local_14->field_0196;
  STField<undefined1>(puVar6,0x173) = local_14->field_0198;
  puVar6[0x5d] = local_14->field_0199;
  puVar6[0x5e] = *(undefined4 *)&local_14->field_019D;
  *(undefined2 *)(puVar6 + 0x5f) = local_14->field_01A1;
  STField<undefined4>(puVar6,0x17e) = local_14->field_01A3;
  STField<undefined4>(puVar6,0x182) = *(undefined4 *)&local_14->field_01A7;
  STField<undefined4>(puVar6,0x186) = *(undefined4 *)&local_14->field_01AB;
  STField<undefined4>(puVar6,0x18a) = *(undefined4 *)&local_14->field_01AF;
  STField<undefined4>(puVar6,0x18e) = *(undefined4 *)&local_14->field_01B3;
  STField<undefined2>(puVar6,0x192) = local_14->field_01B7;
  puVar6[0x65] = *(undefined4 *)&local_14->field_01B9;
  *(short *)(puVar6 + 0x66) = local_14->field_01BD;
  STField<undefined4>(puVar6,0x19a) = *(undefined4 *)&local_14->field_01BF;
  STField<undefined2>(puVar6,0x19e) = local_14->field_01C3;
  puVar6[0x68] = local_14->field_01C5;
  puVar7 = (byte *)&local_14->field_0x1e2;
  puVar12 = (byte *)((int)puVar6 + 0x1d5);
  memmove(puVar12, puVar7, 0x28); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  STField<undefined4>(puVar6,0x205) = local_14->field_0212;
  STField<undefined4>(puVar6,0x209) = local_14->field_0216;
  STField<int>(puVar6,0x20d) = local_14->field_021A;
  STField<undefined4>(puVar6,0x219) = *(undefined4 *)&local_14->field_0x222;
  STField<int>(puVar6,0x235) = local_14->field_0232;
  STField<undefined4>(puVar6,0x239) = local_14->field_0236;
  STField<undefined4>(puVar6,0x23d) = local_14->field_023A;
  STField<int>(puVar6,0x241) = local_14->field_023E;
  STField<int>(puVar6,0x245) = local_14->field_0242;
  STField<undefined4>(puVar6,0x249) = local_14->field_0246;
  STField<undefined4>(puVar6,0x24d) = local_14->field_024A;
  STField<short>(puVar6,0x259) = local_14->field_0252;
  STField<short>(puVar6,0x25b) = local_14->field_0254;
  STField<short>(puVar6,0x25d) = local_14->field_0256;
  STField<short>(puVar6,0x25f) = local_14->field_0258;
  STField<short>(puVar6,0x261) = local_14->field_025A;
  STField<short>(puVar6,0x263) = local_14->field_025C;
  STField<int>(puVar6,0x265) = local_14->field_025E;
  STField<undefined4>(puVar6,0x269) = local_14->field_0262;
  STField<short>(puVar6,0x275) = local_14->field_026A;
  STField<short>(puVar6,0x277) = local_14->field_026C;
  STField<short>(puVar6,0x279) = local_14->field_026E;
  STField<short>(puVar6,0x27b) = local_14->field_0270;
  STField<short>(puVar6,0x27d) = local_14->field_0272;
  STField<short>(puVar6,0x27f) = local_14->field_0274;
  psVar9 = &local_14->field_0276;
  psVar13 = (short *)((int)puVar6 + 0x281);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar13 = psVar13 + 2;
  }
  *psVar13 = *psVar9;
  ((char *)psVar13)[1] = (char)psVar9[1];
  puVar6[0xa8] = *(undefined4 *)&local_14->field_0295;
  *(short *)(puVar6 + 0xa9) = local_14->field_0299;
  STField<undefined4>(puVar6,0x2a6) = local_14->field_029B;
  STField<undefined4>(puVar6,0x2b2) = *(undefined4 *)&local_14->field_02A3;
  STField<undefined4>(puVar6,0x2b6) = *(undefined4 *)&local_14->field_0x2a7;
  STField<undefined2>(puVar6,0x2ba) = local_14->field_02AB;
  puVar6[0xaf] = *(undefined4 *)&local_14->field_02AD;
  *(undefined2 *)(puVar6 + 0xb0) = local_14->field_02B1;
  STField<undefined4>(puVar6,0x2c2) = *(undefined4 *)&local_14->field_02B3;
  STField<undefined4>(puVar6,0x2c6) = *(undefined4 *)&local_14->field_0x2b7;
  STField<undefined2>(puVar6,0x2ca) = local_14->field_02BB;
  puVar6[0xb3] = *(undefined4 *)&local_14->field_02BD;
  *(undefined2 *)(puVar6 + 0xb4) = local_14->field_02C1;
  STField<undefined4>(puVar6,0x2d2) = *(undefined4 *)&local_14->field_0x2c3;
  STField<undefined4>(puVar6,0x2d6) = *(undefined4 *)&local_14->field_0x2c7;
  STField<undefined2>(puVar6,0x2da) = local_14->field_02CB;
  ((undefined1 *)puVar6)[0xb7] = local_14->field_02CD;
  STField<undefined4>(puVar6,0x2dd) = local_14->field_02CE;
  STField<undefined4>(puVar6,0x2e1) = *(undefined4 *)&local_14->field_02D2;
  STField<undefined2>(puVar6,0x2e5) = local_14->field_02D6;
  STField<undefined4>(puVar6,0x2e7) = local_14->field_02D8;
  STField<undefined4>(puVar6,0x2eb) = *(undefined4 *)&local_14->field_02DC;
  STField<undefined4>(puVar6,0x2ef) = *(undefined4 *)&local_14->field_02E0;
  STField<undefined4>(puVar6,0x2f3) = *(undefined4 *)&local_14->field_02E4;
  STField<undefined4>(puVar6,0x2f7) = *(undefined4 *)&local_14->field_02E8;
  STField<undefined2>(puVar6,0x2fb) = local_14->field_02EC;
  STField<undefined4>(puVar6,0x2fd) = *(undefined4 *)&local_14->field_02EE;
  STField<undefined4>(puVar6,0x301) = *(undefined4 *)&local_14->field_0x2f2;
  STField<undefined2>(puVar6,0x305) = local_14->field_02F6;
  STField<undefined4>(puVar6,0x307) = *(undefined4 *)&local_14->field_02F8;
  STField<undefined4>(puVar6,0x30b) = *(undefined4 *)&local_14->field_02FC;
  STField<undefined4>(puVar6,0x30f) = *(undefined4 *)&local_14->field_0300;
  STField<undefined4>(puVar6,0x313) = *(undefined4 *)&local_14->field_0304;
  STField<undefined4>(puVar6,0x317) = *(undefined4 *)&local_14->field_0x308;
  STField<undefined2>(puVar6,0x31b) = local_14->field_030C;
  STField<undefined4>(puVar6,0x31d) = *(undefined4 *)&local_14->field_0x30e;
  piVar10 = local_14->field_0059;
  if (piVar10 == nullptr) {
    local_8 = 0;
    puVar6[7] = 0xffffffff;
    puVar6[8] = 0;
  }
  else {
    local_8 = *piVar10 * 0x10 + 0xc;
    piVar14 = (int *)((int)puVar6 + 0x321);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *piVar14 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)piVar14 = (char)*piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      piVar14 = (int *)((int)piVar14 + 1);
    }
    puVar6[7] = 0x321;
    puVar6[8] = local_8;
  }
  local_10 = local_8 + 0x321;
  local_18 = puVar6;
  if (local_14->field_00EF == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xb2) = 0xffffffff;
    STField<undefined4>(puVar6,0xb6) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_00EF->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xb2) = local_10;
    STField<uint>(puVar6,0xb6) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0103 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xca) = 0xffffffff;
    STField<undefined4>(puVar6,0xce) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_0103->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xca) = local_10;
    STField<uint>(puVar6,0xce) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_010F == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xda) = 0xffffffff;
    STField<undefined4>(puVar6,0xde) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_010F->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xda) = local_10;
    STField<uint>(puVar6,0xde) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0127 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xf6) = 0xffffffff;
    STField<undefined4>(puVar6,0xfa) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_0127->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xf6) = local_10;
    STField<uint>(puVar6,0xfa) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0160 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x133) = 0xffffffff;
    STField<undefined4>(puVar6,0x137) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_0160->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x133) = local_10;
    STField<uint>(puVar6,0x137) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0168 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x13f) = 0xffffffff;
    STField<undefined4>(puVar6,0x143) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_0168->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x13f) = local_10;
    STField<uint>(puVar6,0x143) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01CA == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1a5) = 0xffffffff;
    STField<undefined4>(puVar6,0x1a9) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_01CA->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1a5) = local_10;
    STField<uint>(puVar6,0x1a9) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01CE == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1ad) = 0xffffffff;
    STField<undefined4>(puVar6,0x1b1) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_01CE->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1ad) = local_10;
    STField<uint>(puVar6,0x1b1) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01D2 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1b5) = 0xffffffff;
    STField<undefined4>(puVar6,0x1b9) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_01D2->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1b5) = local_10;
    STField<uint>(puVar6,0x1b9) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01D6 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1bd) = 0xffffffff;
    STField<undefined4>(puVar6,0x1c1) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_01D6->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1bd) = local_10;
    STField<uint>(puVar6,0x1c1) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01DA == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1c5) = 0xffffffff;
    STField<undefined4>(puVar6,0x1c9) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_01DA->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1c5) = local_10;
    STField<uint>(puVar6,0x1c9) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01DE == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1cd) = 0xffffffff;
    STField<undefined4>(puVar6,0x1d1) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_01DE->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1cd) = local_10;
    STField<uint>(puVar6,0x1d1) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_020E == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1fd) = 0xffffffff;
    STField<undefined4>(puVar6,0x201) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_020E->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1fd) = local_10;
    STField<uint>(puVar6,0x201) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  local_c = local_14->field_021E;
  if (local_c == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x211) = 0xffffffff;
    STField<undefined4>(puVar6,0x215) = 0;
  }
  else {
    local_8 = local_14->field_021A << 3;
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (iVar5 = (local_14->field_021A & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x211) = local_10;
    STField<uint>(puVar6,0x215) = local_8;
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0226 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x21d) = 0xffffffff;
    STField<undefined4>(puVar6,0x221) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_0226->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x21d) = local_10;
    STField<uint>(puVar6,0x221) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_022A == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x225) = 0xffffffff;
    STField<undefined4>(puVar6,0x229) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_022A->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x225) = local_10;
    STField<uint>(puVar6,0x229) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_022E == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x22d) = 0xffffffff;
    STField<undefined4>(puVar6,0x231) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_022E->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x22d) = local_10;
    STField<uint>(puVar6,0x231) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_024E == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x251) = 0xffffffff;
    STField<undefined4>(puVar6,0x255) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_024E->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x251) = local_10;
    STField<uint>(puVar6,0x255) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0266 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x26d) = 0xffffffff;
    STField<undefined4>(puVar6,0x271) = 0;
  }
  else {
    local_c = FUN_006b0020(&local_14->field_0266->flags,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x26d) = local_10;
    STField<uint>(puVar6,0x271) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_029F != nullptr) {
    local_c = FUN_006b0020((uint *)local_14->field_029F,(int *)&local_8);
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = (byte *)(puVar7 + 1);
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x2aa) = local_10;
    STField<uint>(puVar6,0x2ae) = local_8;
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_5c.previous;
    return puVar6;
  }
  STField<undefined4>(puVar6,0x2aa) = 0xffffffff;
  STField<undefined4>(puVar6,0x2ae) = 0;
  g_currentExceptionFrame = local_5c.previous;
  return puVar6;
}

