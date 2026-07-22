#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RestoreGrpBData */

void __thiscall STGroupBoatC::RestoreGrpBData(STGroupBoatC *this,undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  DArrayTy *pDVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
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
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x158b,0,iVar3,"%s",
                               "STGroupBoatC::RestoreGrpBData");
    if (iVar8 == 0) {
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
  puVar11 = local_c + 0xc;
  puVar4 = (undefined4 *)&local_8->field_0x69;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar11 = local_c + 0x14;
  puVar4 = &local_8->field_0089;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)&local_8->field_0xdd = local_c[0x29];
  *(undefined4 *)&local_8->field_0xe1 = local_c[0x2a];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00E5 = *(undefined2 *)(local_c + 0x2b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00E7 = *(undefined4 *)((int)local_c + 0xae);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F3 = *(short *)((int)local_c + 0xba);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F5 = *(short *)(local_c + 0x2f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F7 = *(short *)((int)local_c + 0xbe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F9 = *(short *)(local_c + 0x30);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00FB = *(short *)((int)local_c + 0xc2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00FD = *(short *)(local_c + 0x31);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00FF = *(undefined4 *)((int)local_c + 0xc6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0107 = *(undefined4 *)((int)local_c + 0xd2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_010B = *(undefined4 *)((int)local_c + 0xd6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0113 = *(undefined2 *)((int)local_c + 0xe2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0115 = *(undefined2 *)(local_c + 0x39);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0117 = *(undefined2 *)((int)local_c + 0xe6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0119 = *(undefined2 *)(local_c + 0x3a);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_011B = *(undefined2 *)((int)local_c + 0xea);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_011D = *(undefined2 *)(local_c + 0x3b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_011F = *(undefined4 *)((int)local_c + 0xee);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0123 = *(undefined4 *)((int)local_c + 0xf2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_012B = *(undefined2 *)((int)local_c + 0xfe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_012D = *(undefined2 *)(local_c + 0x40);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_012F = *(undefined2 *)((int)local_c + 0x102);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0131 = *(undefined2 *)(local_c + 0x41);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0133 = *(undefined2 *)((int)local_c + 0x106);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0135 = *(undefined2 *)(local_c + 0x42);
  puVar11 = (undefined4 *)((int)local_c + 0x10a);
  puVar4 = (undefined4 *)&local_8->field_0137;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar11;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar11 + 2);
  *(undefined4 *)&local_8->field_0x156 = *(undefined4 *)((int)local_c + 0x129);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_015A = *(undefined2 *)((int)local_c + 0x12d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01C9 = *(undefined1 *)(local_c + 0x69);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_015C = *(undefined4 *)((int)local_c + 0x12f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0164 = *(undefined4 *)((int)local_c + 0x13b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_016C = *(undefined2 *)((int)local_c + 0x147);
  *(undefined2 *)&local_8->field_0x16e = *(undefined2 *)((int)local_c + 0x149);
  *(undefined2 *)&local_8->field_0x170 = *(undefined2 *)((int)local_c + 0x14b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0172 = *(undefined2 *)((int)local_c + 0x14d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0174 = *(undefined2 *)((int)local_c + 0x14f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0176 = *(undefined2 *)((int)local_c + 0x151);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0178 = *(undefined4 *)((int)local_c + 0x153);
  *(undefined2 *)&local_8->field_0x17c = *(undefined2 *)((int)local_c + 0x157);
  *(undefined2 *)&local_8->field_0x17e = *(undefined2 *)((int)local_c + 0x159);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0180 = *(undefined2 *)((int)local_c + 0x15b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0182 = *(undefined4 *)((int)local_c + 0x15d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0186 = *(undefined4 *)((int)local_c + 0x161);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_018A = *(undefined2 *)((int)local_c + 0x165);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_018C = *(undefined4 *)((int)local_c + 0x167);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0190 = *(undefined2 *)((int)local_c + 0x16b);
  *(undefined4 *)&local_8->field_0x192 = *(undefined4 *)((int)local_c + 0x16d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0196 = *(undefined2 *)((int)local_c + 0x171);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0198 = *(undefined1 *)((int)local_c + 0x173);
  local_8->field_0199 = local_c[0x5d];
  local_8->field_019D = local_c[0x5e];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01A1 = *(undefined2 *)(local_c + 0x5f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01A3 = *(undefined4 *)((int)local_c + 0x17e);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01A7 = *(undefined4 *)((int)local_c + 0x182);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01AB = *(undefined4 *)((int)local_c + 0x186);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01AF = *(undefined4 *)((int)local_c + 0x18a);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01B3 = *(undefined4 *)((int)local_c + 0x18e);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01B7 = *(undefined2 *)((int)local_c + 0x192);
  *(undefined4 *)&local_8->field_0x1b9 = local_c[0x65];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01BD = *(undefined2 *)(local_c + 0x66);
  *(undefined4 *)&local_8->field_0x1bf = *(undefined4 *)((int)local_c + 0x19a);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01C3 = *(undefined2 *)((int)local_c + 0x19e);
  local_8->field_01C5 = local_c[0x68];
  puVar11 = (undefined4 *)((int)local_c + 0x1d5);
  puVar4 = (undefined4 *)&local_8->field_0x1e2;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0212 = *(undefined4 *)((int)local_c + 0x205);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0216 = *(undefined4 *)((int)local_c + 0x209);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_021A = *(int *)((int)local_c + 0x20d);
  *(undefined4 *)&local_8->field_0x222 = *(undefined4 *)((int)local_c + 0x219);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0232 = *(int *)((int)local_c + 0x235);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0236 = *(undefined4 *)((int)local_c + 0x239);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_023A = *(undefined4 *)((int)local_c + 0x23d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_023E = *(int *)((int)local_c + 0x241);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0242 = *(int *)((int)local_c + 0x245);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0246 = *(undefined4 *)((int)local_c + 0x249);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_024A = *(undefined4 *)((int)local_c + 0x24d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0252 = *(undefined2 *)((int)local_c + 0x259);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0254 = *(undefined2 *)((int)local_c + 0x25b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0256 = *(undefined2 *)((int)local_c + 0x25d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0258 = *(short *)((int)local_c + 0x25f);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_025A = *(short *)((int)local_c + 0x261);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_025C = *(short *)((int)local_c + 0x263);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_025E = *(undefined4 *)((int)local_c + 0x265);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0262 = *(undefined4 *)((int)local_c + 0x269);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_026A = *(undefined2 *)((int)local_c + 0x275);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_026C = *(undefined2 *)((int)local_c + 0x277);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_026E = *(undefined2 *)((int)local_c + 0x279);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0270 = *(short *)((int)local_c + 0x27b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0272 = *(short *)((int)local_c + 0x27d);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0274 = *(short *)((int)local_c + 0x27f);
  puVar11 = (undefined4 *)((int)local_c + 0x281);
  puVar4 = (undefined4 *)&local_8->field_0276;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar11;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar11 + 2);
  *(undefined4 *)&local_8->field_0x295 = local_c[0xa8];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0299 = *(undefined2 *)(local_c + 0xa9);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_029B = *(undefined4 *)((int)local_c + 0x2a6);
  *(undefined4 *)&local_8->field_0x2a3 = *(undefined4 *)((int)local_c + 0x2b2);
  *(undefined4 *)&local_8->field_0x2a7 = *(undefined4 *)((int)local_c + 0x2b6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02AB = *(undefined2 *)((int)local_c + 0x2ba);
  *(undefined4 *)&local_8->field_0x2ad = local_c[0xaf];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02B1 = *(undefined2 *)(local_c + 0xb0);
  *(undefined4 *)&local_8->field_0x2b3 = *(undefined4 *)((int)local_c + 0x2c2);
  *(undefined4 *)&local_8->field_0x2b7 = *(undefined4 *)((int)local_c + 0x2c6);
  *(undefined2 *)&local_8->field_0x2bb = *(undefined2 *)((int)local_c + 0x2ca);
  *(undefined4 *)&local_8->field_0x2bd = local_c[0xb3];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02C1 = *(undefined2 *)(local_c + 0xb4);
  *(undefined4 *)&local_8->field_0x2c3 = *(undefined4 *)((int)local_c + 0x2d2);
  *(undefined4 *)&local_8->field_0x2c7 = *(undefined4 *)((int)local_c + 0x2d6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02CB = *(undefined2 *)((int)local_c + 0x2da);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02CD = *(undefined1 *)(local_c + 0xb7);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02CE = *(undefined4 *)((int)local_c + 0x2dd);
  *(undefined4 *)&local_8->field_0x2d2 = *(undefined4 *)((int)local_c + 0x2e1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02D6 = *(undefined2 *)((int)local_c + 0x2e5);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02D8 = *(undefined4 *)((int)local_c + 0x2e7);
  *(undefined4 *)&local_8->field_0x2dc = *(undefined4 *)((int)local_c + 0x2eb);
  *(undefined4 *)&local_8->field_0x2e0 = *(undefined4 *)((int)local_c + 0x2ef);
  *(undefined4 *)&local_8->field_0x2e4 = *(undefined4 *)((int)local_c + 0x2f3);
  *(undefined4 *)&local_8->field_0x2e8 = *(undefined4 *)((int)local_c + 0x2f7);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02EC = *(undefined2 *)((int)local_c + 0x2fb);
  *(undefined4 *)&local_8->field_0x2ee = *(undefined4 *)((int)local_c + 0x2fd);
  *(undefined4 *)&local_8->field_0x2f2 = *(undefined4 *)((int)local_c + 0x301);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02F6 = *(undefined2 *)((int)local_c + 0x305);
  *(undefined4 *)&local_8->field_0x2f8 = *(undefined4 *)((int)local_c + 0x307);
  *(undefined4 *)&local_8->field_0x2fc = *(undefined4 *)((int)local_c + 0x30b);
  *(undefined4 *)&local_8->field_0x300 = *(undefined4 *)((int)local_c + 0x30f);
  *(undefined4 *)&local_8->field_0x304 = *(undefined4 *)((int)local_c + 0x313);
  *(undefined4 *)&local_8->field_0x308 = *(undefined4 *)((int)local_c + 0x317);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_030C = *(undefined2 *)((int)local_c + 0x31b);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_030E = *(undefined4 *)((int)local_c + 0x31d);
  if (local_c[7] == -1) {
    local_8->field_0059 = 0;
  }
  else {
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_c[8]);
    local_8->field_0059 = puVar4;
    uVar10 = puVar2[8];
    puVar11 = (undefined4 *)(puVar2[7] + (int)puVar2);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar4 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (*(int *)((int)puVar2 + 0xb2) == -1) {
    local_8->field_00EF = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xb2) + (int)puVar2));
    local_8->field_00EF = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0xca) == -1) {
    local_8->field_0103 = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xca) + (int)puVar2));
    local_8->field_0103 = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0xda) == -1) {
    local_8->field_010F = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xda) + (int)puVar2));
    local_8->field_010F = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0xf6) == -1) {
    local_8->field_0127 = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0xf6) + (int)puVar2));
    local_8->field_0127 = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x133) == -1) {
    local_8->field_0160 = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x133) + (int)puVar2));
    local_8->field_0160 = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x1a5) == -1) {
    local_8->field_01CA = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1a5) + (int)puVar2));
    local_8->field_01CA = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x1ad) == -1) {
    local_8->field_01CE = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1ad) + (int)puVar2));
    local_8->field_01CE = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x1b5) == -1) {
    *(undefined4 *)&local_8->field_0x1d2 = 0;
  }
  else {
    uVar6 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1b5) + (int)puVar2));
    *(undefined4 *)&local_8->field_0x1d2 = uVar6;
  }
  if (*(int *)((int)puVar2 + 0x1bd) == -1) {
    local_8->field_01D6 = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1bd) + (int)puVar2));
    local_8->field_01D6 = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x1c5) == -1) {
    local_8->field_01DA = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1c5) + (int)puVar2));
    local_8->field_01DA = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x1cd) == -1) {
    local_8->field_01DE = 0;
  }
  else {
    uVar6 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1cd) + (int)puVar2));
    local_8->field_01DE = uVar6;
  }
  if (*(int *)((int)puVar2 + 0x1fd) == -1) {
    local_8->field_020E = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x1fd) + (int)puVar2));
    local_8->field_020E = pDVar5;
  }
  if ((*(int *)((int)puVar2 + 0x211) == -1) ||
     (uVar10 = *(uint *)((int)puVar2 + 0x215), (int)uVar10 < 1)) {
    local_8->field_021E = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)Library::DKW::LIB::FUN_006aac70(uVar10);
    local_8->field_021E = puVar7;
    puVar11 = (undefined4 *)((int)puVar2 + *(int *)((int)puVar2 + 0x211));
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)puVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 2;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar7 = (ushort *)((int)puVar7 + 1);
    }
  }
  if (*(int *)((int)puVar2 + 0x21d) == -1) {
    local_8->field_0226 = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x21d) + (int)puVar2));
    local_8->field_0226 = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x225) == -1) {
    local_8->field_022A = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x225) + (int)puVar2));
    local_8->field_022A = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x22d) == -1) {
    local_8->field_022E = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x22d) + (int)puVar2));
    local_8->field_022E = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x251) == -1) {
    local_8->field_024E = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x251) + (int)puVar2));
    local_8->field_024E = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x26d) == -1) {
    local_8->field_0266 = (DArrayTy *)0x0;
  }
  else {
    pDVar5 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x26d) + (int)puVar2));
    local_8->field_0266 = pDVar5;
  }
  if (*(int *)((int)puVar2 + 0x2aa) == -1) {
    *(undefined4 *)&local_8->field_0x29f = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  uVar6 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)puVar2 + 0x2aa) + (int)puVar2));
  *(undefined4 *)&local_8->field_0x29f = uVar6;
  g_currentExceptionFrame = local_50.previous;
  return;
}

