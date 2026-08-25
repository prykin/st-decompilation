#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SaveBoatData */

undefined4 * __thiscall STBoatC::SaveBoatData(STBoatC *this,int *param_1)

{
  int iVar2;
  uint *puVar2;
  STBoatC *pSVar3;
  int iVar5;
  byte *puVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  STBoatC_field_06F3State *pSVar10;
  uint *puVar11;
  short *psVar12;
  STBoatC_field_06F3State *pSVar13;
  uint *puVar14;
  short *psVar15;
  byte *puVar16;
  InternalExceptionFrame local_68;
  uint *local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  STBoatC *local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4e98,0,iVar2,"%s",
                               "STBoatC::SaveBoatData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4e99);
    return local_24;
  }
  local_1c = (uint *)0x9;
  *param_1 = 0x606;
  piVar9 = &local_14->field_0282;
  do {
    if ((uint *)*piVar9 != nullptr) {
      local_c = FUN_006b0020((uint *)*piVar9,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    piVar9 = piVar9 + 1;
    local_1c = (uint *)((int)local_1c + -1);
  } while (local_1c != nullptr);
  if (pSVar3->field_047B != nullptr) {
    local_c = FUN_006b0020(&pSVar3->field_047B->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar2 = Library::DKW::LIB::MemAlloc(*param_1);
  *puVar2 = pSVar3->field_0020;
  puVar2[1] = pSVar3->field_0024;
  puVar2[2] = pSVar3->field_0028;
  puVar2[3] = 2;
  puVar2[4] = pSVar3->field_002C;
  pSVar10 = &pSVar3->field_06F3;
  pSVar13 = puVar2 + 0x17;
  memmove(pSVar13, pSVar10, 0x16b); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar4 = (byte *)(&local_14->field_02C0);
  puVar16 = (byte *)((int)puVar2 + 0x1c7);
  for (iVar6 = 0x65; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar16 = (byte *)(puVar16 + 1);
  }
  *(undefined1 *)puVar16 = *(undefined1 *)puVar4;
  puVar2[0xd7] = local_14->field_0455;
  puVar2[0xd8] = local_14->field_0459;
  puVar2[0xd9] = local_14->field_045D;
  puVar2[0xda] = local_14->field_0461;
  *(short *)(puVar2 + 0xdb) = local_14->field_0469;
  STField<undefined2>(puVar2,0x36e) = local_14->field_046F;
  puVar2[0xdc] = (uint)local_14->field_0471;
  *(short *)(puVar2 + 0xdd) = local_14->field_0475;
  STField<short>(puVar2,0x376) = local_14->field_0477;
  *(short *)(puVar2 + 0xde) = local_14->field_0479;
  STField<int>(puVar2,0x382) = local_14->field_047F;
  STField<STAllPlayersC_GetObjPtr_param_3Enum>(puVar2,0x386) = local_14->field_0483;
  STField<undefined4>(puVar2,0x38a) = local_14->field_0487;
  STField<undefined4>(puVar2,0x38e) = local_14->field_048B;
  STField<undefined4>(puVar2,0x392) = local_14->field_048F;
  STField<undefined4>(puVar2,0x396) = local_14->field_0493;
  STField<undefined4>(puVar2,0x39a) = local_14->field_0497;
  psVar12 = &local_14->field_049B;
  psVar15 = (short *)((int)puVar2 + 0x39e);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar15 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    psVar15 = psVar15 + 2;
  }
  *psVar15 = *psVar12;
  psVar12 = &local_14->field_04DD;
  puVar11 = puVar2 + 0xf8;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *(uint *)psVar12;
    psVar12 = psVar12 + 2;
    puVar11 = puVar11 + 1;
  }
  *(short *)puVar11 = *psVar12;
  STField<char>(puVar11,2) = (char)psVar12[1];
  puVar4 = (byte *)&local_14->field_0510;
  puVar16 = (byte *)((int)puVar2 + 0x413);
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar16 = (byte *)(puVar16 + 1);
  }
  psVar12 = &local_14->field_052C;
  puVar4 = (byte *)((int)puVar2 + 0x42f);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    puVar4 = (byte *)(puVar4 + 1);
  }
  psVar12 = &local_14->field_0554;
  puVar4 = (byte *)((int)puVar2 + 0x457);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    puVar4 = (byte *)(puVar4 + 1);
  }
  psVar12 = &local_14->field_0588;
  puVar4 = (byte *)((int)puVar2 + 0x48b);
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    puVar4 = (byte *)(puVar4 + 1);
  }
  puVar4 = (byte *)&local_14->field_05A0;
  puVar16 = (byte *)((int)puVar2 + 0x4a3);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar16 = (byte *)(puVar16 + 1);
  }
  *(undefined2 *)puVar16 = *(undefined2 *)puVar4;
  STField<undefined4>(puVar2,0x4a9) = 0;
  STField<undefined4>(puVar2,0x4cd) = *(undefined4 *)&local_14->field_05CA;
  STField<undefined4>(puVar2,0x4d1) = *(undefined4 *)&local_14->field_05CE;
  STField<undefined4>(puVar2,0x4d5) = *(undefined4 *)&local_14->field_05D2;
  STField<STBoatC_field_05D6State>(puVar2,0x4d9) = local_14->field_05D6;
  STField<undefined2>(puVar2,0x4dd) = local_14->field_05DA;
  STField<undefined4>(puVar2,0x4df) = *(undefined4 *)&local_14->field_05DC;
  STField<undefined4>(puVar2,0x4e3) = *(undefined4 *)&local_14->field_05E0;
  STField<undefined4>(puVar2,0x4e7) = *(undefined4 *)&local_14->field_05E4;
  STField<undefined4>(puVar2,0x4eb) = local_14->field_05E8;
  STField<undefined4>(puVar2,0x4ef) = *(undefined4 *)&local_14->field_05EC;
  STField<undefined4>(puVar2,0x4f3) = *(undefined4 *)&local_14->field_05F0;
  STField<undefined4>(puVar2,0x4f7) = *(undefined4 *)&local_14->field_05F4;
  STField<undefined4>(puVar2,0x4fb) = local_14->field_05F8;
  puVar4 = (byte *)&local_14->field_05FC;
  puVar16 = (byte *)((int)puVar2 + 0x4ff);
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar16 = (byte *)(puVar16 + 1);
  }
  *(undefined1 *)puVar16 = *(undefined1 *)puVar4;
  puVar11 = &local_14->field_0619;
  puVar14 = puVar2 + 0x147;
  memmove(puVar14, puVar11, 0x1c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar11 = &local_14->field_0635;
  puVar14 = puVar2 + 0x14e;
  memmove(puVar14, puVar11, 0x36); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar4 = (byte *)(&local_14->field_066B);
  puVar16 = (byte *)((int)puVar2 + 0x56e);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar16 = (byte *)(puVar16 + 1);
  }
  psVar12 = &local_14->field_068B;
  psVar15 = (short *)((int)puVar2 + 0x58e);
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar15 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    psVar15 = psVar15 + 2;
  }
  *psVar15 = *psVar12;
  psVar12 = &local_14->field_06A9;
  puVar11 = puVar2 + 0x16b;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *(uint *)psVar12;
    psVar12 = psVar12 + 2;
    puVar11 = puVar11 + 1;
  }
  *(short *)puVar11 = *psVar12;
  psVar12 = &local_14->field_06CB;
  puVar4 = (byte *)((int)puVar2 + 0x5ce);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    puVar4 = (byte *)(puVar4 + 1);
  }
  STField<undefined4>(puVar2,0x5ee) = *(undefined4 *)&local_14->field_0x6eb;
  STField<undefined4>(puVar2,0x5f2) = local_14->field_06EF;
  local_1c = puVar2 + 6;
  local_18 = &local_14->field_0282;
  local_10 = 0x606;
  local_20 = 9;
  pSVar3 = local_14;
  local_24 = puVar2;
  do {
    uVar8 = local_10;
    if ((uint *)*local_18 == nullptr) {
      local_8 = 0;
      local_1c[-1] = 0xffffffff;
      *local_1c = 0;
    }
    else {
      local_c = FUN_006b0020((uint *)*local_18,(int *)&local_8);
      puVar4 = (byte *)(local_c);
      puVar16 = (byte *)(uVar8 + (int)puVar2);
      memmove(puVar16, puVar4, local_8); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      local_1c[-1] = local_10;
      *local_1c = local_8;
      FreeAndNull(&local_c);
      pSVar3 = local_14;
    }
    local_1c = local_1c + 2;
    uVar8 = local_10 + local_8;
    local_18 = local_18 + 1;
    local_20 = local_20 + -1;
    local_10 = uVar8;
  } while (local_20 != 0);
  if (pSVar3->field_047B != nullptr) {
    local_c = FUN_006b0020(&pSVar3->field_047B->flags,(int *)&local_8);
    puVar4 = (byte *)(local_c);
    puVar16 = (byte *)(uVar8 + (int)puVar2);
    memmove(puVar16, puVar4, local_8); /* compiler REP MOVS byte copy */
    STField<uint>(puVar2,0x37a) = local_10;
    STField<uint>(puVar2,0x37e) = local_8;
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_68.previous;
    return puVar2;
  }
  STField<undefined4>(puVar2,0x37a) = 0xffffffff;
  STField<undefined4>(puVar2,0x37e) = 0;
  g_currentExceptionFrame = local_68.previous;
  return puVar2;
}

