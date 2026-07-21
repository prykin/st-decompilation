#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::RestoreBoatData */

void __thiscall STBoatC::RestoreBoatData(STBoatC *this,int param_1)

{
  code *pcVar1;
  AnonShape_004900E0_F89C68CE *pAVar2;
  int iVar3;
  undefined4 uVar4;
  STBoatC *pSVar5;
  int iVar6;
  STBoatC_field_06F3State *pSVar7;
  undefined4 *puVar8;
  STBoatC_field_06F3State *pSVar9;
  short *psVar10;
  undefined4 *puVar11;
  int *piVar12;
  InternalExceptionFrame local_54;
  AnonShape_004900E0_F89C68CE *local_10;
  int local_c;
  STBoatC *local_8;

  local_10 = (AnonShape_004900E0_F89C68CE *)param_1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pAVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4ed4,0,iVar3,&DAT_007a4ccc,
                               s_STBoatC__RestoreBoatData_007aba58);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4ed5);
    return;
  }
  pSVar7 = (STBoatC_field_06F3State *)&local_10->field_0x5c;
  pSVar9 = &local_8->field_06F3;
  for (iVar3 = 0x5a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pSVar9 = *pSVar7;
    pSVar7 = pSVar7 + 1;
    pSVar9 = pSVar9 + 1;
  }
  *(short *)pSVar9 = (short)*pSVar7;
  *(byte *)((int)pSVar9 + 2) = *(byte *)((int)pSVar7 + 2);
  puVar8 = (undefined4 *)&local_10->field_0x1c7;
  puVar11 = (undefined4 *)&local_8->field_0x2c0;
  for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
  local_8->field_0455 = local_10->field_035C;
  local_8->field_0459 = local_10->field_0360;
  local_8->field_045D = local_10->field_0364;
  local_8->field_0461 = local_10->field_0368;
  local_8->field_0469 = local_10->field_036C;
  local_8->field_046F = local_10->field_036E;
  local_8->field_0471 = local_10->field_0370;
  local_8->field_0475 = local_10->field_0374;
  local_8->field_0477 = local_10->field_0376;
  local_8->field_0479 = local_10->field_0378;
  local_8->field_047F = local_10->field_0382;
  local_8->field_0483 = local_10->field_0386;
  *(undefined4 *)&local_8->field_0x487 = local_10->field_038A;
  local_8->field_048B = local_10->field_038E;
  local_8->field_048F = local_10->field_0392;
  local_8->field_0493 = local_10->field_0396;
  local_8->field_0497 = local_10->field_039A;
  puVar8 = (undefined4 *)&local_10->field_0x39e;
  puVar11 = (undefined4 *)&local_8->field_049B;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  puVar8 = (undefined4 *)&local_10->field_0x3e0;
  puVar11 = (undefined4 *)&local_8->field_0x4dd;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar8 + 2);
  puVar8 = (undefined4 *)&local_10->field_0x413;
  puVar11 = (undefined4 *)&local_8->field_0510;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8 = (undefined4 *)&local_10->field_0x42f;
  puVar11 = (undefined4 *)&local_8->field_052C;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8 = (undefined4 *)&local_10->field_0x457;
  psVar10 = &local_8->field_0554;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    psVar10 = psVar10 + 2;
  }
  puVar8 = (undefined4 *)&local_10->field_0x48b;
  puVar11 = (undefined4 *)&local_8->field_0x588;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8 = (undefined4 *)&local_10->field_0x4a3;
  puVar11 = (undefined4 *)&local_8->field_05A0;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  *(undefined4 *)&local_8->field_0x5ca = local_10->field_04CD;
  local_c = 9;
  *(undefined4 *)&local_8->field_0x5ce = local_10->field_04D1;
  *(undefined4 *)&local_8->field_0x5d2 = local_10->field_04D5;
  local_8->field_05D6 = local_10->field_04D9;
  local_8->field_05DA = local_10->field_04DD;
  local_8->field_05DC = local_10->field_04DF;
  local_8->field_05E0 = local_10->field_04E3;
  local_8->field_05E4 = local_10->field_04E7;
  local_8->field_05E8 = local_10->field_04EB;
  *(undefined4 *)&local_8->field_0x5ec = local_10->field_04EF;
  *(undefined4 *)&local_8->field_0x5f0 = local_10->field_04F3;
  *(undefined4 *)&local_8->field_0x5f4 = local_10->field_04F7;
  local_8->field_05F8 = local_10->field_04FB;
  puVar8 = (undefined4 *)&local_10->field_0x4ff;
  puVar11 = (undefined4 *)&local_8->field_0x5fc;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
  puVar8 = (undefined4 *)&local_10->field_0x51c;
  puVar11 = (undefined4 *)&local_8->field_0x619;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8 = (undefined4 *)&local_10->field_0x538;
  puVar11 = &local_8->field_0635;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  puVar8 = (undefined4 *)&local_10->field_0x56e;
  puVar11 = (undefined4 *)&local_8->field_0x66b;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8 = (undefined4 *)&local_10->field_0x58e;
  puVar11 = (undefined4 *)&local_8->field_068B;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  puVar8 = (undefined4 *)&local_10->field_0x5ac;
  puVar11 = (undefined4 *)&local_8->field_06A9;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  puVar8 = (undefined4 *)&local_10->field_0x5ce;
  puVar11 = (undefined4 *)&local_8->field_0x6cb;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8 = &local_8->field_0282;
  local_8->field_06EB = local_10->field_05EE;
  local_8->field_06EF = local_10->field_05F2;
  piVar12 = (int *)&local_10->field_0x14;
  pSVar5 = local_8;
  do {
    if (*piVar12 == -1) {
      *puVar8 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(&pAVar2->field_0x0 + *piVar12));
      *puVar8 = uVar4;
      pSVar5 = local_8;
    }
    piVar12 = piVar12 + 2;
    puVar8 = puVar8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x37a != -1) {
    uVar4 = FUN_006b0060((uint *)0x0,(uint *)(&pAVar2->field_0x0 + *(int *)&pAVar2->field_0x37a));
    local_8->field_047B = uVar4;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  pSVar5->field_047B = 0;
  g_currentExceptionFrame = local_54.previous;
  return;
}

