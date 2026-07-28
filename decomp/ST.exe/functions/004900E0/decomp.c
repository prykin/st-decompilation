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
  short *psVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  short *psVar11;
  ulonglong *puVar12;
  int *piVar13;
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
  puVar9 = (undefined4 *)&local_10->field_0x5c;
  puVar12 = local_8->field_06CB + 5;
  for (iVar3 = 0x5a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = (ulonglong *)((int)puVar12 + 4);
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar9;
  *(undefined1 *)((int)puVar12 + 2) = *(undefined1 *)((int)puVar9 + 2);
  puVar9 = (undefined4 *)&local_10->field_0x1c7;
  puVar10 = &local_8->field_02C0;
  for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
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
  psVar8 = (short *)&local_10->field_0x39e;
  psVar11 = &local_8->field_049B;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar8;
  psVar8 = (short *)&local_10->field_0x3e0;
  psVar11 = &local_8->field_04DD;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar8;
  *(char *)(psVar11 + 1) = (char)psVar8[1];
  puVar9 = (undefined4 *)&local_10->field_0x413;
  puVar10 = (undefined4 *)&local_8->field_0510;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = (undefined4 *)&local_10->field_0x42f;
  psVar8 = &local_8->field_052C;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    psVar8 = psVar8 + 2;
  }
  puVar9 = (undefined4 *)&local_10->field_0x457;
  psVar8 = &local_8->field_0554;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    psVar8 = psVar8 + 2;
  }
  puVar9 = (undefined4 *)&local_10->field_0x48b;
  puVar10 = (undefined4 *)&local_8->field_0588;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = (undefined4 *)&local_10->field_0x4a3;
  puVar10 = (undefined4 *)&local_8->field_05A0;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
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
  puVar9 = (undefined4 *)&local_10->field_0x4ff;
  puVar10 = (undefined4 *)&local_8->field_05FC;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
  puVar9 = (undefined4 *)&local_10->field_0x51c;
  puVar10 = &local_8->field_0619;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = (undefined4 *)&local_10->field_0x538;
  puVar10 = &local_8->field_0635;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
  puVar9 = (undefined4 *)&local_10->field_0x56e;
  puVar10 = &local_8->field_066B;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = (undefined4 *)&local_10->field_0x58e;
  puVar10 = (undefined4 *)&local_8->field_068B;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
  psVar8 = (short *)&local_10->field_0x5ac;
  psVar11 = &local_8->field_06A9;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar8;
  puVar9 = (undefined4 *)&local_10->field_0x5ce;
  puVar12 = local_8->field_06CB;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = (ulonglong *)((int)puVar12 + 4);
  }
  puVar9 = &local_8->field_0282;
  *(undefined4 *)(local_8->field_06CB + 4) = local_10->field_05EE;
  *(undefined4 *)((int)local_8->field_06CB + 0x24) = local_10->field_05F2;
  piVar13 = (int *)&local_10->field_0x14;
  pSVar5 = local_8;
  do {
    if (*piVar13 == -1) {
      *puVar9 = 0;
    }
    else {
      uVar4 = FUN_006b0060((uint *)0x0,(uint *)(&pAVar2->field_0x0 + *piVar13));
      *puVar9 = uVar4;
      pSVar5 = local_8;
    }
    piVar13 = piVar13 + 2;
    puVar9 = puVar9 + 1;
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

