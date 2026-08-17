#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::RestoreBoatData */

void __thiscall STBoatC::RestoreBoatData(STBoatC *this,int param_1)

{
  undefined2 uVar2;
  AnonShape_004900E0_F89C68CE *pAVar3;
  int iVar3;
  DArrayTy *pDVar4;
  STBoatC *pSVar5;
  int iVar5;
  int iVar6;
  STBoatC_field_06F3State *pSVar7;
  short *psVar8;
  byte *puVar9;
  STBoatC_field_06F3State *pSVar10;
  byte *puVar11;
  short *psVar12;
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
  pAVar3 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4ed4,0,iVar3,"%s",
                               "STBoatC::RestoreBoatData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4ed5);
    return;
  }
  pSVar7 = (STBoatC_field_06F3State *)&local_10->field_0x5c;
  pSVar10 = &local_8->field_06F3;
  memmove(pSVar10, pSVar7, 0x16b); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar9 = (byte *)&local_10->field_0x1c7;
  puVar11 = (byte *)(&local_8->field_02C0);
  memmove(puVar11, puVar9, 0x195); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  local_8->field_0455 = local_10->field_035C;
  local_8->field_0459 = local_10->field_0360;
  local_8->field_045D = local_10->field_0364;
  local_8->field_0461 = local_10->field_0368;
  local_8->field_0469 = local_10->field_036C;
  local_8->field_046F = local_10->field_036E;
  local_8->field_0471 = (AnonShape_005EFAE0_B406B78B *)local_10->field_0370;
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
  psVar12 = &local_8->field_049B;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar8;
  psVar8 = (short *)&local_10->field_0x3e0;
  psVar12 = &local_8->field_04DD;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar8;
  ((char *)psVar12)[1] = (char)psVar8[1];
  puVar9 = (byte *)&local_10->field_0x413;
  puVar11 = (byte *)&local_8->field_0510;
  memmove(puVar11, puVar9, 0x1c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar9 = (byte *)&local_10->field_0x42f;
  psVar8 = &local_8->field_052C;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar8 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    psVar8 = psVar8 + 2;
  }
  puVar9 = (byte *)&local_10->field_0x457;
  psVar8 = &local_8->field_0554;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar8 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    psVar8 = psVar8 + 2;
  }
  puVar9 = (byte *)&local_10->field_0x48b;
  psVar8 = &local_8->field_0588;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar8 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    psVar8 = psVar8 + 2;
  }
  puVar9 = (byte *)&local_10->field_0x4a3;
  puVar11 = (byte *)&local_8->field_05A0;
  memmove(puVar11, puVar9, 0x2a); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  uVar2 = *(undefined2 *)((int)&local_10->field_04CD + 2);
  local_8->field_05CA = *(undefined2 *)&local_10->field_04CD;
  local_8->field_05CC = uVar2;
  local_c = 9;
  uVar2 = *(undefined2 *)((int)&local_10->field_04D1 + 2);
  local_8->field_05CE = *(undefined2 *)&local_10->field_04D1;
  local_8->field_05D0 = uVar2;
  uVar2 = *(undefined2 *)((int)&local_10->field_04D5 + 2);
  local_8->field_05D2 = *(undefined2 *)&local_10->field_04D5;
  local_8->field_05D4 = uVar2;
  local_8->field_05D6 = local_10->field_04D9;
  local_8->field_05DA = local_10->field_04DD;
  uVar2 = *(undefined2 *)((int)&local_10->field_04DF + 2);
  local_8->field_05DC = *(undefined2 *)&local_10->field_04DF;
  local_8->field_05DE = uVar2;
  uVar2 = *(undefined2 *)((int)&local_10->field_04E3 + 2);
  local_8->field_05E0 = *(undefined2 *)&local_10->field_04E3;
  local_8->field_05E2 = uVar2;
  uVar2 = *(undefined2 *)((int)&local_10->field_04E7 + 2);
  local_8->field_05E4 = *(undefined2 *)&local_10->field_04E7;
  local_8->field_05E6 = uVar2;
  local_8->field_05E8 = local_10->field_04EB;
  uVar2 = *(undefined2 *)((int)&local_10->field_04EF + 2);
  local_8->field_05EC = *(undefined2 *)&local_10->field_04EF;
  local_8->field_05EE = uVar2;
  uVar2 = *(undefined2 *)((int)&local_10->field_04F3 + 2);
  local_8->field_05F0 = *(undefined2 *)&local_10->field_04F3;
  local_8->field_05F2 = uVar2;
  uVar2 = *(undefined2 *)((int)&local_10->field_04F7 + 2);
  local_8->field_05F4 = *(undefined2 *)&local_10->field_04F7;
  local_8->field_05F6 = uVar2;
  local_8->field_05F8 = local_10->field_04FB;
  puVar9 = (byte *)&local_10->field_0x4ff;
  puVar11 = (byte *)&local_8->field_05FC;
  memmove(puVar11, puVar9, 0x1d); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar9 = (byte *)&local_10->field_0x51c;
  puVar11 = (byte *)(&local_8->field_0619);
  memmove(puVar11, puVar9, 0x1c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar9 = (byte *)&local_10->field_0x538;
  puVar11 = (byte *)(&local_8->field_0635);
  memmove(puVar11, puVar9, 0x36); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar9 = (byte *)&local_10->field_0x56e;
  puVar11 = (byte *)(&local_8->field_066B);
  memmove(puVar11, puVar9, 0x20); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  psVar8 = (short *)&local_10->field_0x58e;
  psVar12 = &local_8->field_068B;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar8;
  psVar8 = (short *)&local_10->field_0x5ac;
  psVar12 = &local_8->field_06A9;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar8;
  puVar9 = (byte *)&local_10->field_0x5ce;
  psVar8 = &local_8->field_06CB;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar8 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    psVar8 = psVar8 + 2;
  }
  puVar9 = (byte *)(&local_8->field_0282);
  *(undefined4 *)&local_8->field_0x6eb = local_10->field_05EE;
  local_8->field_06EF = local_10->field_05F2;
  piVar13 = (int *)&local_10->field_0x14;
  pSVar5 = local_8;
  do {
    if (*piVar13 == -1) {
      *puVar9 = 0;
    }
    else {
      pDVar4 = FUN_006b0060(nullptr,(uint *)(&pAVar3->field_0x0 + *piVar13));
      *puVar9 = pDVar4;
      pSVar5 = local_8;
    }
    piVar13 = piVar13 + 2;
    puVar9 = (byte *)(puVar9 + 1);
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar3->field_0x37a != -1) {
    pDVar4 = FUN_006b0060(nullptr,(uint *)(&pAVar3->field_0x0 + *(int *)&pAVar3->field_0x37a));
    local_8->field_047B = pDVar4;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  pSVar5->field_047B = nullptr;
  g_currentExceptionFrame = local_54.previous;
  return;
}

