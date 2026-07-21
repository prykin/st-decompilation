#include "../../pseudocode_runtime.h"


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
  int *piVar8;
  AnonPointee_STGroupBoatC_021E *pAVar9;
  undefined4 *puVar10;
  int *piVar11;
  InternalExceptionFrame local_5c;
  undefined4 *local_18;
  STGroupBoatC *local_14;
  int local_10;
  AnonPointee_STGroupBoatC_021E *local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1495,0,iVar3,"%s",
                               "STGroupBoatC::SaveGrpBData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x1496);
    return local_18;
  }
  *param_1 = 0x321;
  if ((int *)local_14->field_0059 != (int *)0x0) {
    iVar3 = *(int *)local_14->field_0059 * 0x10;
    local_8 = iVar3 + 0xc;
    *param_1 = iVar3 + 0x32d;
  }
  if ((uint *)local_14->field_00EF != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_00EF,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0103 != (DArrayTy *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020(&pSVar2->field_0103->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_010F != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_010F,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_0127 != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_0127,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0160 != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)FUN_006b0020(pSVar2->field_0160,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_0168 != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_0168,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_01CA != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_01CA,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_01CE != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_01CE,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x1d2 != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020(*(uint **)&pSVar2->field_0x1d2,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_01D6 != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_01D6,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_01DA != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_01DA,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_01DE != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_01DE,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_020E != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_020E,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  *param_1 = *param_1 + pSVar2->field_021A * 8;
  if ((uint *)pSVar2->field_0226 != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_0226,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_022A != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_022A,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_022E != (AnonPointee_STGroupBoatC_022E *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_022E,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_024E != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_024E,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_0266 != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)pSVar2->field_0266,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (*(uint **)&pSVar2->field_0x29f != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020(*(uint **)&pSVar2->field_0x29f,(int *)&local_8);
    FreeAndNull(&local_c);
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
  puVar4[9] = local_14->field_005D;
  puVar4[10] = local_14->field_0061;
  puVar4[0xb] = local_14->field_0065;
  puVar6 = (undefined4 *)&local_14->field_0x69;
  puVar10 = puVar4 + 0xc;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar6 = &local_14->field_0089;
  puVar10 = puVar4 + 0x14;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4[0x29] = *(undefined4 *)&local_14->field_0xdd;
  puVar4[0x2a] = *(undefined4 *)&local_14->field_0xe1;
  *(undefined2 *)(puVar4 + 0x2b) = local_14->field_00E5;
  *(undefined4 *)((int)puVar4 + 0xae) = local_14->field_00E7;
  *(short *)((int)puVar4 + 0xba) = local_14->field_00F3;
  *(short *)(puVar4 + 0x2f) = local_14->field_00F5;
  *(short *)((int)puVar4 + 0xbe) = local_14->field_00F7;
  *(short *)(puVar4 + 0x30) = local_14->field_00F9;
  *(short *)((int)puVar4 + 0xc2) = local_14->field_00FB;
  *(short *)(puVar4 + 0x31) = local_14->field_00FD;
  *(undefined4 *)((int)puVar4 + 0xc6) = local_14->field_00FF;
  *(undefined4 *)((int)puVar4 + 0xd2) = local_14->field_0107;
  *(undefined4 *)((int)puVar4 + 0xd6) = local_14->field_010B;
  *(undefined2 *)((int)puVar4 + 0xe2) = local_14->field_0113;
  *(undefined2 *)(puVar4 + 0x39) = local_14->field_0115;
  *(undefined2 *)((int)puVar4 + 0xe6) = local_14->field_0117;
  *(undefined2 *)(puVar4 + 0x3a) = local_14->field_0119;
  *(undefined2 *)((int)puVar4 + 0xea) = local_14->field_011B;
  *(undefined2 *)(puVar4 + 0x3b) = local_14->field_011D;
  *(undefined4 *)((int)puVar4 + 0xee) = local_14->field_011F;
  *(undefined4 *)((int)puVar4 + 0xf2) = local_14->field_0123;
  *(undefined2 *)((int)puVar4 + 0xfe) = local_14->field_012B;
  *(undefined2 *)(puVar4 + 0x40) = local_14->field_012D;
  *(undefined2 *)((int)puVar4 + 0x102) = local_14->field_012F;
  *(undefined2 *)(puVar4 + 0x41) = local_14->field_0131;
  *(undefined2 *)((int)puVar4 + 0x106) = local_14->field_0133;
  *(undefined2 *)(puVar4 + 0x42) = local_14->field_0135;
  puVar6 = (undefined4 *)&local_14->field_0137;
  puVar10 = (undefined4 *)((int)puVar4 + 0x10a);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar10 + 2) = *(undefined1 *)((int)puVar6 + 2);
  *(undefined4 *)((int)puVar4 + 0x129) = *(undefined4 *)&local_14->field_0x156;
  *(undefined2 *)((int)puVar4 + 0x12d) = local_14->field_015A;
  *(undefined1 *)(puVar4 + 0x69) = local_14->field_01C9;
  *(undefined4 *)((int)puVar4 + 0x12f) = local_14->field_015C;
  *(undefined4 *)((int)puVar4 + 0x13b) = local_14->field_0164;
  *(undefined2 *)((int)puVar4 + 0x147) = local_14->field_016C;
  *(undefined2 *)((int)puVar4 + 0x149) = local_14->field_016E;
  *(undefined2 *)((int)puVar4 + 0x14b) = local_14->field_0170;
  *(undefined2 *)((int)puVar4 + 0x14d) = local_14->field_0172;
  *(undefined2 *)((int)puVar4 + 0x14f) = local_14->field_0174;
  *(undefined2 *)((int)puVar4 + 0x151) = local_14->field_0176;
  *(undefined4 *)((int)puVar4 + 0x153) = local_14->field_0178;
  *(undefined2 *)((int)puVar4 + 0x157) = local_14->field_017C;
  *(undefined2 *)((int)puVar4 + 0x159) = local_14->field_017E;
  *(undefined2 *)((int)puVar4 + 0x15b) = local_14->field_0180;
  *(undefined4 *)((int)puVar4 + 0x15d) = local_14->field_0182;
  *(undefined4 *)((int)puVar4 + 0x161) = local_14->field_0186;
  *(undefined2 *)((int)puVar4 + 0x165) = local_14->field_018A;
  *(undefined4 *)((int)puVar4 + 0x167) = local_14->field_018C;
  *(undefined2 *)((int)puVar4 + 0x16b) = local_14->field_0190;
  *(undefined4 *)((int)puVar4 + 0x16d) = *(undefined4 *)&local_14->field_0x192;
  *(undefined2 *)((int)puVar4 + 0x171) = local_14->field_0196;
  *(undefined1 *)((int)puVar4 + 0x173) = local_14->field_0198;
  puVar4[0x5d] = local_14->field_0199;
  puVar4[0x5e] = local_14->field_019D;
  *(undefined2 *)(puVar4 + 0x5f) = local_14->field_01A1;
  *(undefined4 *)((int)puVar4 + 0x17e) = local_14->field_01A3;
  *(undefined4 *)((int)puVar4 + 0x182) = local_14->field_01A7;
  *(undefined4 *)((int)puVar4 + 0x186) = local_14->field_01AB;
  *(undefined4 *)((int)puVar4 + 0x18a) = local_14->field_01AF;
  *(undefined4 *)((int)puVar4 + 0x18e) = local_14->field_01B3;
  *(undefined2 *)((int)puVar4 + 0x192) = local_14->field_01B7;
  puVar4[0x65] = *(undefined4 *)&local_14->field_0x1b9;
  *(undefined2 *)(puVar4 + 0x66) = local_14->field_01BD;
  *(undefined4 *)((int)puVar4 + 0x19a) = *(undefined4 *)&local_14->field_0x1bf;
  *(undefined2 *)((int)puVar4 + 0x19e) = local_14->field_01C3;
  puVar4[0x68] = local_14->field_01C5;
  puVar6 = (undefined4 *)&local_14->field_0x1e2;
  puVar10 = (undefined4 *)((int)puVar4 + 0x1d5);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)((int)puVar4 + 0x205) = local_14->field_0212;
  *(undefined4 *)((int)puVar4 + 0x209) = local_14->field_0216;
  *(int *)((int)puVar4 + 0x20d) = local_14->field_021A;
  *(undefined4 *)((int)puVar4 + 0x219) = *(undefined4 *)&local_14->field_0x222;
  *(int *)((int)puVar4 + 0x235) = local_14->field_0232;
  *(undefined4 *)((int)puVar4 + 0x239) = local_14->field_0236;
  *(undefined4 *)((int)puVar4 + 0x23d) = local_14->field_023A;
  *(int *)((int)puVar4 + 0x241) = local_14->field_023E;
  *(int *)((int)puVar4 + 0x245) = local_14->field_0242;
  *(undefined4 *)((int)puVar4 + 0x249) = local_14->field_0246;
  *(undefined4 *)((int)puVar4 + 0x24d) = local_14->field_024A;
  *(undefined2 *)((int)puVar4 + 0x259) = local_14->field_0252;
  *(undefined2 *)((int)puVar4 + 0x25b) = local_14->field_0254;
  *(undefined2 *)((int)puVar4 + 0x25d) = local_14->field_0256;
  *(short *)((int)puVar4 + 0x25f) = local_14->field_0258;
  *(short *)((int)puVar4 + 0x261) = local_14->field_025A;
  *(short *)((int)puVar4 + 0x263) = local_14->field_025C;
  *(undefined4 *)((int)puVar4 + 0x265) = local_14->field_025E;
  *(undefined4 *)((int)puVar4 + 0x269) = local_14->field_0262;
  *(undefined2 *)((int)puVar4 + 0x275) = local_14->field_026A;
  *(undefined2 *)((int)puVar4 + 0x277) = local_14->field_026C;
  *(undefined2 *)((int)puVar4 + 0x279) = local_14->field_026E;
  *(short *)((int)puVar4 + 0x27b) = local_14->field_0270;
  *(short *)((int)puVar4 + 0x27d) = local_14->field_0272;
  *(short *)((int)puVar4 + 0x27f) = local_14->field_0274;
  puVar6 = (undefined4 *)&local_14->field_0276;
  puVar10 = (undefined4 *)((int)puVar4 + 0x281);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar10 + 2) = *(undefined1 *)((int)puVar6 + 2);
  puVar4[0xa8] = *(undefined4 *)&local_14->field_0x295;
  *(undefined2 *)(puVar4 + 0xa9) = local_14->field_0299;
  *(undefined4 *)((int)puVar4 + 0x2a6) = local_14->field_029B;
  *(undefined4 *)((int)puVar4 + 0x2b2) = *(undefined4 *)&local_14->field_0x2a3;
  *(undefined4 *)((int)puVar4 + 0x2b6) = *(undefined4 *)&local_14->field_0x2a7;
  *(undefined2 *)((int)puVar4 + 0x2ba) = local_14->field_02AB;
  puVar4[0xaf] = *(undefined4 *)&local_14->field_0x2ad;
  *(undefined2 *)(puVar4 + 0xb0) = local_14->field_02B1;
  *(undefined4 *)((int)puVar4 + 0x2c2) = *(undefined4 *)&local_14->field_0x2b3;
  *(undefined4 *)((int)puVar4 + 0x2c6) = *(undefined4 *)&local_14->field_0x2b7;
  *(undefined2 *)((int)puVar4 + 0x2ca) = *(undefined2 *)&local_14->field_0x2bb;
  puVar4[0xb3] = *(undefined4 *)&local_14->field_0x2bd;
  *(undefined2 *)(puVar4 + 0xb4) = local_14->field_02C1;
  *(undefined4 *)((int)puVar4 + 0x2d2) = *(undefined4 *)&local_14->field_0x2c3;
  *(undefined4 *)((int)puVar4 + 0x2d6) = *(undefined4 *)&local_14->field_0x2c7;
  *(undefined2 *)((int)puVar4 + 0x2da) = local_14->field_02CB;
  *(undefined1 *)(puVar4 + 0xb7) = local_14->field_02CD;
  *(undefined4 *)((int)puVar4 + 0x2dd) = local_14->field_02CE;
  *(undefined4 *)((int)puVar4 + 0x2e1) = *(undefined4 *)&local_14->field_0x2d2;
  *(undefined2 *)((int)puVar4 + 0x2e5) = local_14->field_02D6;
  *(undefined4 *)((int)puVar4 + 0x2e7) = local_14->field_02D8;
  *(undefined4 *)((int)puVar4 + 0x2eb) = *(undefined4 *)&local_14->field_0x2dc;
  *(undefined4 *)((int)puVar4 + 0x2ef) = *(undefined4 *)&local_14->field_0x2e0;
  *(undefined4 *)((int)puVar4 + 0x2f3) = *(undefined4 *)&local_14->field_0x2e4;
  *(undefined4 *)((int)puVar4 + 0x2f7) = *(undefined4 *)&local_14->field_0x2e8;
  *(undefined2 *)((int)puVar4 + 0x2fb) = local_14->field_02EC;
  *(undefined4 *)((int)puVar4 + 0x2fd) = *(undefined4 *)&local_14->field_0x2ee;
  *(undefined4 *)((int)puVar4 + 0x301) = *(undefined4 *)&local_14->field_0x2f2;
  *(undefined2 *)((int)puVar4 + 0x305) = local_14->field_02F6;
  *(undefined4 *)((int)puVar4 + 0x307) = *(undefined4 *)&local_14->field_0x2f8;
  *(undefined4 *)((int)puVar4 + 0x30b) = *(undefined4 *)&local_14->field_0x2fc;
  *(undefined4 *)((int)puVar4 + 0x30f) = *(undefined4 *)&local_14->field_0x300;
  *(undefined4 *)((int)puVar4 + 0x313) = *(undefined4 *)&local_14->field_0x304;
  *(undefined4 *)((int)puVar4 + 0x317) = *(undefined4 *)&local_14->field_0x308;
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
    piVar11 = (int *)((int)puVar4 + 0x321);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar11 = (char)*piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      piVar11 = (int *)((int)piVar11 + 1);
    }
    puVar4[7] = 0x321;
    puVar4[8] = local_8;
  }
  local_10 = local_8 + 0x321;
  local_18 = puVar4;
  if ((uint *)local_14->field_00EF == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xb2) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xb6) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_00EF,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0xb2) = local_10;
    *(uint *)((int)puVar4 + 0xb6) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0103 == (DArrayTy *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xca) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xce) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020(&local_14->field_0103->flags,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0xca) = local_10;
    *(uint *)((int)puVar4 + 0xce) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_010F == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xda) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xde) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_010F,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0xda) = local_10;
    *(uint *)((int)puVar4 + 0xde) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_0127 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0xf6) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xfa) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_0127,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0xf6) = local_10;
    *(uint *)((int)puVar4 + 0xfa) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0160 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x133) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x137) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)FUN_006b0020(local_14->field_0160,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x133) = local_10;
    *(uint *)((int)puVar4 + 0x137) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_0168 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x13f) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x143) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_0168,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x13f) = local_10;
    *(uint *)((int)puVar4 + 0x143) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_01CA == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1a5) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1a9) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_01CA,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x1a5) = local_10;
    *(uint *)((int)puVar4 + 0x1a9) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_01CE == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1ad) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1b1) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_01CE,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x1ad) = local_10;
    *(uint *)((int)puVar4 + 0x1b1) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x1d2 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1b5) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1b9) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020(*(uint **)&local_14->field_0x1d2,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x1b5) = local_10;
    *(uint *)((int)puVar4 + 0x1b9) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_01D6 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1bd) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1c1) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_01D6,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x1bd) = local_10;
    *(uint *)((int)puVar4 + 0x1c1) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_01DA == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1c5) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1c9) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_01DA,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x1c5) = local_10;
    *(uint *)((int)puVar4 + 0x1c9) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_01DE == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1cd) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x1d1) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_01DE,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x1cd) = local_10;
    *(uint *)((int)puVar4 + 0x1d1) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_020E == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x1fd) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x201) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_020E,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x1fd) = local_10;
    *(uint *)((int)puVar4 + 0x201) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  local_c = local_14->field_021E;
  if (local_c == (AnonPointee_STGroupBoatC_021E *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x211) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x215) = 0;
  }
  else {
    local_8 = local_14->field_021A << 3;
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (iVar3 = (local_14->field_021A & 0x1fffffffU) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
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
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_0226,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x21d) = local_10;
    *(uint *)((int)puVar4 + 0x221) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_022A == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x225) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x229) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_022A,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x225) = local_10;
    *(uint *)((int)puVar4 + 0x229) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_022E == (AnonPointee_STGroupBoatC_022E *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x22d) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x231) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_022E,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x22d) = local_10;
    *(uint *)((int)puVar4 + 0x231) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_024E == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x251) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x255) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_024E,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x251) = local_10;
    *(uint *)((int)puVar4 + 0x255) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_0266 == (uint *)0x0) {
    local_8 = 0;
    *(undefined4 *)((int)puVar4 + 0x26d) = 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x271) = 0;
  }
  else {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020((uint *)local_14->field_0266,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x26d) = local_10;
    *(uint *)((int)puVar4 + 0x271) = local_8;
    FreeAndNull(&local_c);
  }
  local_10 = local_10 + local_8;
  if (*(uint **)&local_14->field_0x29f != (uint *)0x0) {
    local_c = (AnonPointee_STGroupBoatC_021E *)
              FUN_006b0020(*(uint **)&local_14->field_0x29f,(int *)&local_8);
    pAVar9 = local_c;
    puVar6 = (undefined4 *)(local_10 + (int)puVar4);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)&pAVar9->field_0004;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)&pAVar9->field_0000;
      pAVar9 = (AnonPointee_STGroupBoatC_021E *)((int)&pAVar9->field_0000 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)((int)puVar4 + 0x2aa) = local_10;
    *(uint *)((int)puVar4 + 0x2ae) = local_8;
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_5c.previous;
    return puVar4;
  }
  *(undefined4 *)((int)puVar4 + 0x2aa) = 0xffffffff;
  *(undefined4 *)((int)puVar4 + 0x2ae) = 0;
  g_currentExceptionFrame = local_5c.previous;
  return puVar4;
}

