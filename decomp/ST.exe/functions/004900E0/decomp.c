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
  DArrayTy *pDVar6;
  int iVar7;
  STBoatC_field_06F3State *pSVar8;
  short *psVar9;
  undefined4 *puVar10;
  STBoatC_field_06F3State *pSVar11;
  undefined4 *puVar12;
  short *psVar13;
  int *piVar14;
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
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4ed4,0,iVar3,"%s",
                               "STBoatC::RestoreBoatData");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4ed5);
    return;
  }
  pSVar8 = (STBoatC_field_06F3State *)&local_10->field_0x5c;
  pSVar11 = &local_8->field_06F3;
  for (iVar3 = 0x5a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pSVar11 = *pSVar8;
    pSVar8 = pSVar8 + 1;
    pSVar11 = pSVar11 + 1;
  }
  *(short *)pSVar11 = (short)*pSVar8;
  *(byte *)((int)pSVar11 + 2) = *(byte *)((int)pSVar8 + 2);
  puVar10 = (undefined4 *)&local_10->field_0x1c7;
  puVar12 = &local_8->field_02C0;
  for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
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
  local_8->field_0487 = local_10->field_038A;
  local_8->field_048B = local_10->field_038E;
  local_8->field_048F = local_10->field_0392;
  local_8->field_0493 = local_10->field_0396;
  local_8->field_0497 = local_10->field_039A;
  psVar9 = (short *)&local_10->field_0x39e;
  psVar13 = &local_8->field_049B;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar13 = psVar13 + 2;
  }
  *psVar13 = *psVar9;
  psVar9 = (short *)&local_10->field_0x3e0;
  psVar13 = &local_8->field_04DD;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar13 = psVar13 + 2;
  }
  *psVar13 = *psVar9;
  *(char *)(psVar13 + 1) = (char)psVar9[1];
  puVar10 = (undefined4 *)&local_10->field_0x413;
  puVar12 = (undefined4 *)&local_8->field_0510;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = (undefined4 *)&local_10->field_0x42f;
  psVar9 = &local_8->field_052C;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    psVar9 = psVar9 + 2;
  }
  puVar10 = (undefined4 *)&local_10->field_0x457;
  psVar9 = &local_8->field_0554;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    psVar9 = psVar9 + 2;
  }
  puVar10 = (undefined4 *)&local_10->field_0x48b;
  puVar12 = (undefined4 *)&local_8->field_0588;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = (undefined4 *)&local_10->field_0x4a3;
  puVar12 = (undefined4 *)&local_8->field_05A0;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
  *(undefined4 *)&local_8->field_0x5ca = local_10->field_04CD;
  local_c = 9;
  *(undefined4 *)&local_8->field_0x5ce = local_10->field_04D1;
  *(undefined4 *)&local_8->field_0x5d2 = local_10->field_04D5;
  local_8->field_05D6 = local_10->field_04D9;
  local_8->field_05DA = local_10->field_04DD;
  *(undefined4 *)&local_8->field_0x5dc = local_10->field_04DF;
  *(undefined4 *)&local_8->field_0x5e0 = local_10->field_04E3;
  *(undefined4 *)&local_8->field_0x5e4 = local_10->field_04E7;
  local_8->field_05E8 = local_10->field_04EB;
  *(undefined4 *)&local_8->field_0x5ec = local_10->field_04EF;
  *(undefined4 *)&local_8->field_0x5f0 = local_10->field_04F3;
  *(undefined4 *)&local_8->field_0x5f4 = local_10->field_04F7;
  local_8->field_05F8 = local_10->field_04FB;
  puVar10 = (undefined4 *)&local_10->field_0x4ff;
  puVar12 = (undefined4 *)&local_8->field_05FC;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
  puVar10 = (undefined4 *)&local_10->field_0x51c;
  puVar12 = &local_8->field_0619;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = (undefined4 *)&local_10->field_0x538;
  puVar12 = &local_8->field_0635;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
  puVar10 = (undefined4 *)&local_10->field_0x56e;
  puVar12 = &local_8->field_066B;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = (undefined4 *)&local_10->field_0x58e;
  puVar12 = (undefined4 *)&local_8->field_068B;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
  psVar9 = (short *)&local_10->field_0x5ac;
  psVar13 = &local_8->field_06A9;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar13 = psVar13 + 2;
  }
  *psVar13 = *psVar9;
  puVar10 = (undefined4 *)&local_10->field_0x5ce;
  psVar9 = &local_8->field_06CB;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    psVar9 = psVar9 + 2;
  }
  puVar10 = &local_8->field_0282;
  local_8->field_06EB = local_10->field_05EE;
  local_8->field_06EF = local_10->field_05F2;
  piVar14 = (int *)&local_10->field_0x14;
  pSVar5 = local_8;
  do {
    if (*piVar14 == -1) {
      *puVar10 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(&pAVar2->field_0x0 + *piVar14));
      *puVar10 = uVar4;
      pSVar5 = local_8;
    }
    piVar14 = piVar14 + 2;
    puVar10 = puVar10 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x37a != -1) {
    pDVar6 = (DArrayTy *)
             FUN_006b0060((uint *)0x0,(uint *)(&pAVar2->field_0x0 + *(int *)&pAVar2->field_0x37a));
    local_8->field_047B = pDVar6;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  pSVar5->field_047B = (DArrayTy *)0x0;
  g_currentExceptionFrame = local_54.previous;
  return;
}

