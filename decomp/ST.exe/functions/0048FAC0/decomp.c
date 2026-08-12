#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SaveBoatData */

undefined4 * __thiscall STBoatC::SaveBoatData(STBoatC *this,int *param_1)

{
  int iVar2;
  undefined4 *puVar2;
  STBoatC *pSVar3;
  int iVar5;
  int iVar4;
  uint uVar5;
  uint uVar6;
  STBoatC_field_06F3State *pSVar7;
  short *psVar8;
  byte *puVar9;
  STBoatC_field_06F3State *pSVar10;
  short *psVar11;
  byte *puVar12;
  InternalExceptionFrame local_68;
  undefined4 *local_24;
  int local_20;
  uint *local_1c;
  undefined4 *local_18;
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
  puVar2 = &local_14->field_0282;
  do {
    if ((uint *)*puVar2 != nullptr) {
      local_c = (undefined4 *)FUN_006b0020((uint *)*puVar2,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    puVar2 = puVar2 + 1;
    local_1c = (uint *)((int)local_1c + -1);
  } while (local_1c != nullptr);
  if (pSVar3->field_047B != nullptr) {
    local_c = (undefined4 *)FUN_006b0020(&pSVar3->field_047B->flags,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar2 = Library::DKW::LIB::MemAlloc(*param_1);
  *puVar2 = pSVar3->field_0020;
  puVar2[1] = pSVar3->field_0024;
  puVar2[2] = pSVar3->field_0028;
  puVar2[3] = 2;
  puVar2[4] = pSVar3->field_002C;
  pSVar7 = &pSVar3->field_06F3;
  pSVar10 = puVar2 + 0x17;
  memmove(pSVar10, pSVar7, 0x16b); /* compiler REP MOVS byte copy */
  iVar4 = 0;
  puVar9 = (byte *)(&local_14->field_02C0);
  puVar12 = (byte *)((int)puVar2 + 0x1c7);
  for (iVar4 = 0x65; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
  puVar2[0xd7] = local_14->field_0455;
  puVar2[0xd8] = local_14->field_0459;
  puVar2[0xd9] = local_14->field_045D;
  puVar2[0xda] = local_14->field_0461;
  *(short *)(puVar2 + 0xdb) = local_14->field_0469;
  STField<undefined2>(puVar2,0x36e) = local_14->field_046F;
  puVar2[0xdc] = local_14->field_0471;
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
  psVar8 = &local_14->field_049B;
  psVar11 = (short *)((int)puVar2 + 0x39e);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar8;
  psVar8 = &local_14->field_04DD;
  psVar11 = (short *)(puVar2 + 0xf8);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar8;
  *(char *)(psVar11 + 1) = (char)psVar8[1];
  puVar9 = (byte *)&local_14->field_0510;
  puVar12 = (byte *)((int)puVar2 + 0x413);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  psVar8 = &local_14->field_052C;
  puVar9 = (byte *)((int)puVar2 + 0x42f);
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    puVar9 = (byte *)(puVar9 + 1);
  }
  psVar8 = &local_14->field_0554;
  puVar9 = (byte *)((int)puVar2 + 0x457);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    puVar9 = (byte *)(puVar9 + 1);
  }
  psVar8 = &local_14->field_0588;
  puVar9 = (byte *)((int)puVar2 + 0x48b);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    puVar9 = (byte *)(puVar9 + 1);
  }
  puVar9 = (byte *)&local_14->field_05A0;
  puVar12 = (byte *)((int)puVar2 + 0x4a3);
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar9;
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
  puVar9 = (byte *)&local_14->field_05FC;
  puVar12 = (byte *)((int)puVar2 + 0x4ff);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
  puVar9 = (byte *)(&local_14->field_0619);
  puVar12 = (byte *)(puVar2 + 0x147);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  puVar9 = (byte *)(&local_14->field_0635);
  puVar12 = (byte *)(puVar2 + 0x14e);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar9;
  puVar9 = (byte *)(&local_14->field_066B);
  puVar12 = (byte *)((int)puVar2 + 0x56e);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = *puVar9;
    puVar9 = (byte *)(puVar9 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  psVar8 = &local_14->field_068B;
  psVar11 = (short *)((int)puVar2 + 0x58e);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar8;
  psVar8 = &local_14->field_06A9;
  psVar11 = (short *)(puVar2 + 0x16b);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar8;
  psVar8 = &local_14->field_06CB;
  puVar9 = (byte *)((int)puVar2 + 0x5ce);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    puVar9 = (byte *)(puVar9 + 1);
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
    uVar6 = local_10;
    if ((uint *)*local_18 == nullptr) {
      local_8 = 0;
      local_1c[-1] = 0xffffffff;
      *local_1c = 0;
    }
    else {
      local_c = (undefined4 *)FUN_006b0020((uint *)*local_18,(int *)&local_8);
      puVar9 = (byte *)(local_c);
      puVar12 = (byte *)(uVar6 + (int)puVar2);
      memmove(puVar12, puVar9, local_8); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      local_1c[-1] = local_10;
      *local_1c = local_8;
      FreeAndNull(&local_c);
      pSVar3 = local_14;
    }
    local_1c = local_1c + 2;
    uVar6 = local_10 + local_8;
    local_18 = local_18 + 1;
    local_20 = local_20 + -1;
    local_10 = uVar6;
  } while (local_20 != 0);
  if (pSVar3->field_047B != nullptr) {
    local_c = (undefined4 *)FUN_006b0020(&pSVar3->field_047B->flags,(int *)&local_8);
    puVar9 = (byte *)(local_c);
    puVar12 = (byte *)(uVar6 + (int)puVar2);
    memmove(puVar12, puVar9, local_8); /* compiler REP MOVS byte copy */
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

