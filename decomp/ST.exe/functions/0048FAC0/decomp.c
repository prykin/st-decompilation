#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SaveBoatData */

undefined4 * __thiscall STBoatC::SaveBoatData(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  STBoatC *pSVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  STBoatC_field_06F3State *pSVar8;
  short *psVar9;
  undefined4 *puVar10;
  STBoatC_field_06F3State *pSVar11;
  short *psVar12;
  undefined4 *puVar13;
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
  pSVar4 = local_14;
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
  puVar3 = &local_14->field_0282;
  do {
    if ((uint *)*puVar3 != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    puVar3 = puVar3 + 1;
    local_1c = (uint *)((int)local_1c + -1);
  } while (local_1c != (uint *)0x0);
  if ((uint *)pSVar4->field_047B != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar4->field_047B,(int *)&local_8);
    FreeAndNull(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*param_1);
  *puVar3 = pSVar4->field_0020;
  puVar3[1] = pSVar4->field_0024;
  puVar3[2] = pSVar4->field_0028;
  puVar3[3] = 2;
  puVar3[4] = pSVar4->field_002C;
  pSVar8 = &pSVar4->field_06F3;
  pSVar11 = puVar3 + 0x17;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pSVar11 = *pSVar8;
    pSVar8 = pSVar8 + 1;
    pSVar11 = pSVar11 + 1;
  }
  *(short *)pSVar11 = (short)*pSVar8;
  *(byte *)((int)pSVar11 + 2) = *(byte *)((int)pSVar8 + 2);
  puVar10 = &local_14->field_02C0;
  puVar13 = (undefined4 *)((int)puVar3 + 0x1c7);
  for (iVar2 = 0x65; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
  puVar3[0xd7] = local_14->field_0455;
  puVar3[0xd8] = local_14->field_0459;
  puVar3[0xd9] = local_14->field_045D;
  puVar3[0xda] = local_14->field_0461;
  *(short *)(puVar3 + 0xdb) = local_14->field_0469;
  *(undefined2 *)((int)puVar3 + 0x36e) = local_14->field_046F;
  puVar3[0xdc] = local_14->field_0471;
  *(short *)(puVar3 + 0xdd) = local_14->field_0475;
  *(short *)((int)puVar3 + 0x376) = local_14->field_0477;
  *(short *)(puVar3 + 0xde) = local_14->field_0479;
  *(int *)((int)puVar3 + 0x382) = local_14->field_047F;
  *(undefined4 *)((int)puVar3 + 0x386) = local_14->field_0483;
  *(undefined4 *)((int)puVar3 + 0x38a) = local_14->field_0487;
  *(undefined4 *)((int)puVar3 + 0x38e) = local_14->field_048B;
  *(undefined4 *)((int)puVar3 + 0x392) = local_14->field_048F;
  *(undefined4 *)((int)puVar3 + 0x396) = local_14->field_0493;
  *(undefined4 *)((int)puVar3 + 0x39a) = local_14->field_0497;
  psVar9 = &local_14->field_049B;
  psVar12 = (short *)((int)puVar3 + 0x39e);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar9;
  psVar9 = &local_14->field_04DD;
  psVar12 = (short *)(puVar3 + 0xf8);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar9;
  *(char *)(psVar12 + 1) = (char)psVar9[1];
  puVar10 = (undefined4 *)&local_14->field_0510;
  puVar13 = (undefined4 *)((int)puVar3 + 0x413);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  psVar9 = &local_14->field_052C;
  puVar10 = (undefined4 *)((int)puVar3 + 0x42f);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  psVar9 = &local_14->field_0554;
  puVar10 = (undefined4 *)((int)puVar3 + 0x457);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  puVar10 = (undefined4 *)&local_14->field_0588;
  puVar13 = (undefined4 *)((int)puVar3 + 0x48b);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = (undefined4 *)&local_14->field_05A0;
  puVar13 = (undefined4 *)((int)puVar3 + 0x4a3);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = *(undefined2 *)puVar10;
  *(undefined4 *)((int)puVar3 + 0x4a9) = 0;
  *(undefined4 *)((int)puVar3 + 0x4cd) = *(undefined4 *)&local_14->field_0x5ca;
  *(undefined4 *)((int)puVar3 + 0x4d1) = *(undefined4 *)&local_14->field_0x5ce;
  *(undefined4 *)((int)puVar3 + 0x4d5) = *(undefined4 *)&local_14->field_0x5d2;
  *(undefined4 *)((int)puVar3 + 0x4d9) = local_14->field_05D6;
  *(undefined2 *)((int)puVar3 + 0x4dd) = local_14->field_05DA;
  *(undefined4 *)((int)puVar3 + 0x4df) = *(undefined4 *)&local_14->field_0x5dc;
  *(undefined4 *)((int)puVar3 + 0x4e3) = *(undefined4 *)&local_14->field_0x5e0;
  *(undefined4 *)((int)puVar3 + 0x4e7) = *(undefined4 *)&local_14->field_0x5e4;
  *(undefined4 *)((int)puVar3 + 0x4eb) = local_14->field_05E8;
  *(undefined4 *)((int)puVar3 + 0x4ef) = *(undefined4 *)&local_14->field_0x5ec;
  *(undefined4 *)((int)puVar3 + 0x4f3) = *(undefined4 *)&local_14->field_0x5f0;
  *(undefined4 *)((int)puVar3 + 0x4f7) = *(undefined4 *)&local_14->field_0x5f4;
  *(undefined4 *)((int)puVar3 + 0x4fb) = local_14->field_05F8;
  puVar10 = (undefined4 *)&local_14->field_05FC;
  puVar13 = (undefined4 *)((int)puVar3 + 0x4ff);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
  puVar10 = &local_14->field_0619;
  puVar13 = puVar3 + 0x147;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = &local_14->field_0635;
  puVar13 = puVar3 + 0x14e;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = *(undefined2 *)puVar10;
  puVar10 = &local_14->field_066B;
  puVar13 = (undefined4 *)((int)puVar3 + 0x56e);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10 = (undefined4 *)&local_14->field_068B;
  puVar13 = (undefined4 *)((int)puVar3 + 0x58e);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = *(undefined2 *)puVar10;
  psVar9 = &local_14->field_06A9;
  psVar12 = (short *)(puVar3 + 0x16b);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar9;
  psVar9 = &local_14->field_06CB;
  puVar10 = (undefined4 *)((int)puVar3 + 0x5ce);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)((int)puVar3 + 0x5ee) = local_14->field_06EB;
  *(undefined4 *)((int)puVar3 + 0x5f2) = local_14->field_06EF;
  local_1c = puVar3 + 6;
  local_18 = &local_14->field_0282;
  local_10 = 0x606;
  local_20 = 9;
  pSVar4 = local_14;
  local_24 = puVar3;
  do {
    uVar7 = local_10;
    if ((uint *)*local_18 == (uint *)0x0) {
      local_8 = 0;
      local_1c[-1] = 0xffffffff;
      *local_1c = 0;
    }
    else {
      local_c = (undefined4 *)FUN_006b0020((uint *)*local_18,(int *)&local_8);
      puVar10 = local_c;
      puVar13 = (undefined4 *)(uVar7 + (int)puVar3);
      for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      local_1c[-1] = local_10;
      *local_1c = local_8;
      FreeAndNull(&local_c);
      pSVar4 = local_14;
    }
    local_1c = local_1c + 2;
    uVar7 = local_10 + local_8;
    local_18 = local_18 + 1;
    local_20 = local_20 + -1;
    local_10 = uVar7;
  } while (local_20 != 0);
  if ((uint *)pSVar4->field_047B != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar4->field_047B,(int *)&local_8);
    puVar10 = local_c;
    puVar13 = (undefined4 *)(uVar7 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    *(uint *)((int)puVar3 + 0x37a) = local_10;
    *(uint *)((int)puVar3 + 0x37e) = local_8;
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_68.previous;
    return puVar3;
  }
  *(undefined4 *)((int)puVar3 + 0x37a) = 0xffffffff;
  *(undefined4 *)((int)puVar3 + 0x37e) = 0;
  g_currentExceptionFrame = local_68.previous;
  return puVar3;
}

