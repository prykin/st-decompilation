#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::RestoreBoatData */

void __thiscall STBoatC::RestoreBoatData(STBoatC *this,int param_1)

{
  AnonShape_004900E0_F89C68CE *pAVar2;
  int iVar3;
  DArrayTy *pDVar3;
  STBoatC *pSVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  byte *puVar8;
  byte *puVar9;
  short *psVar10;
  ulonglong *puVar11;
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
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4ed4,0,iVar3,"%s",
                               "STBoatC::RestoreBoatData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4ed5);
    return;
  }
  puVar8 = (byte *)&local_10->field_0x5c;
  puVar11 = local_8->field_06CB + 5;
  for (iVar6 = 0x5a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)puVar11 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar11 = (ulonglong *)((int)puVar11 + 4);
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  STField<undefined1>(puVar11,2) = STField<undefined1>(puVar8,2);
  puVar8 = (byte *)&local_10->field_0x1c7;
  puVar9 = (byte *)(&local_8->field_02C0);
  memmove(puVar9, puVar8, 0x195); /* compiler REP MOVS byte copy */
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
  psVar7 = (short *)&local_10->field_0x39e;
  psVar10 = &local_8->field_049B;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar10 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 2;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = *psVar7;
  psVar7 = (short *)&local_10->field_0x3e0;
  psVar10 = &local_8->field_04DD;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar10 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 2;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = *psVar7;
  *(char *)(psVar10 + 1) = (char)psVar7[1];
  puVar8 = (byte *)&local_10->field_0x413;
  puVar9 = (byte *)&local_8->field_0510;
  memmove(puVar9, puVar8, 0x1c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x42f;
  psVar7 = &local_8->field_052C;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar7 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    psVar7 = psVar7 + 2;
  }
  puVar8 = (byte *)&local_10->field_0x457;
  psVar7 = &local_8->field_0554;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar7 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    psVar7 = psVar7 + 2;
  }
  puVar8 = (byte *)&local_10->field_0x48b;
  puVar9 = (byte *)&local_8->field_0588;
  memmove(puVar9, puVar8, 0x18); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x4a3;
  puVar9 = (byte *)&local_8->field_05A0;
  memmove(puVar9, puVar8, 0x2a); /* compiler REP MOVS byte copy */
  iVar6 = 0;
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
  puVar8 = (byte *)&local_10->field_0x4ff;
  puVar9 = (byte *)&local_8->field_05FC;
  memmove(puVar9, puVar8, 0x1d); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x51c;
  puVar9 = (byte *)(&local_8->field_0619);
  memmove(puVar9, puVar8, 0x1c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x538;
  puVar9 = (byte *)(&local_8->field_0635);
  memmove(puVar9, puVar8, 0x36); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x56e;
  puVar9 = (byte *)(&local_8->field_066B);
  memmove(puVar9, puVar8, 0x20); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x58e;
  puVar9 = (byte *)&local_8->field_068B;
  memmove(puVar9, puVar8, 0x1e); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  psVar7 = (short *)&local_10->field_0x5ac;
  psVar10 = &local_8->field_06A9;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar10 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 2;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = *psVar7;
  puVar8 = (byte *)&local_10->field_0x5ce;
  puVar11 = local_8->field_06CB;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)puVar11 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar11 = (ulonglong *)((int)puVar11 + 4);
  }
  puVar8 = (byte *)(&local_8->field_0282);
  *(undefined4 *)(local_8->field_06CB + 4) = local_10->field_05EE;
  *(undefined4 *)((int)local_8->field_06CB + 0x24) = local_10->field_05F2;
  piVar12 = (int *)&local_10->field_0x14;
  pSVar4 = local_8;
  do {
    if (*piVar12 == -1) {
      *puVar8 = 0;
    }
    else {
      pDVar3 = FUN_006b0060(nullptr,(uint *)(&pAVar2->field_0x0 + *piVar12));
      *puVar8 = pDVar3;
      pSVar4 = local_8;
    }
    piVar12 = piVar12 + 2;
    puVar8 = (byte *)(puVar8 + 1);
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x37a != -1) {
    pDVar3 = FUN_006b0060(nullptr,(uint *)(&pAVar2->field_0x0 + *(int *)&pAVar2->field_0x37a));
    local_8->field_047B = pDVar3;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  pSVar4->field_047B = nullptr;
  g_currentExceptionFrame = local_54.previous;
  return;
}

