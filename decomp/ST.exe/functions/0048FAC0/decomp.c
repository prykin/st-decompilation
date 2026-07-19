
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
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4e98,0,iVar2,&DAT_007a4ccc,
                               s_STBoatC__SaveBoatData_007aba3c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (undefined4 *)(*pcVar1)();
      return puVar6;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4e99);
    return local_24;
  }
  local_1c = (uint *)0x9;
  *param_1 = 0x606;
  puVar6 = (undefined4 *)&local_14->field_0x282;
  do {
    if ((uint *)*puVar6 != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020((uint *)*puVar6,(int *)&local_8);
      FUN_006ab060(&local_c);
      *param_1 = *param_1 + local_8;
    }
    puVar6 = puVar6 + 1;
    local_1c = (uint *)((int)local_1c + -1);
  } while (local_1c != (uint *)0x0);
  if ((uint *)pSVar4->field_047B != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar4->field_047B,(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*param_1);
  *puVar3 = *(undefined4 *)&pSVar4->field_0x20;
  puVar3[1] = *(undefined4 *)&pSVar4->field_0x24;
  puVar3[2] = *(undefined4 *)&pSVar4->field_0x28;
  puVar3[3] = 2;
  puVar3[4] = *(undefined4 *)&pSVar4->field_0x2c;
  puVar6 = (undefined4 *)&pSVar4->field_0x6f3;
  puVar9 = puVar3 + 0x17;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)puVar6 + 2);
  puVar6 = (undefined4 *)&local_14->field_0x2c0;
  puVar9 = (undefined4 *)((int)puVar3 + 0x1c7);
  for (iVar2 = 0x65; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
  puVar3[0xd7] = local_14->field_0455;
  puVar3[0xd8] = local_14->field_0459;
  puVar3[0xd9] = local_14->field_045D;
  puVar3[0xda] = local_14->field_0461;
  *(undefined2 *)(puVar3 + 0xdb) = *(undefined2 *)&local_14->field_0x469;
  *(undefined2 *)((int)puVar3 + 0x36e) = *(undefined2 *)&local_14->field_0x46f;
  puVar3[0xdc] = *(undefined4 *)&local_14->field_0x471;
  *(undefined2 *)(puVar3 + 0xdd) = local_14->field_0475;
  *(undefined2 *)((int)puVar3 + 0x376) = local_14->field_0477;
  *(undefined2 *)(puVar3 + 0xde) = local_14->field_0479;
  *(undefined4 *)((int)puVar3 + 0x382) = local_14->field_047F;
  *(undefined4 *)((int)puVar3 + 0x386) = local_14->field_0483;
  *(undefined4 *)((int)puVar3 + 0x38a) = *(undefined4 *)&local_14->field_0x487;
  *(undefined4 *)((int)puVar3 + 0x38e) = local_14->field_048B;
  *(undefined4 *)((int)puVar3 + 0x392) = local_14->field_048F;
  *(undefined4 *)((int)puVar3 + 0x396) = local_14->field_0493;
  *(undefined4 *)((int)puVar3 + 0x39a) = local_14->field_0497;
  puVar6 = (undefined4 *)&local_14->field_049B;
  puVar9 = (undefined4 *)((int)puVar3 + 0x39e);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)&local_14->field_0x4dd;
  puVar9 = puVar3 + 0xf8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)puVar6 + 2);
  puVar6 = (undefined4 *)&local_14->field_0510;
  puVar9 = (undefined4 *)((int)puVar3 + 0x413);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (undefined4 *)&local_14->field_0x52c;
  puVar9 = (undefined4 *)((int)puVar3 + 0x42f);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (undefined4 *)&local_14->field_0554;
  puVar9 = (undefined4 *)((int)puVar3 + 0x457);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (undefined4 *)&local_14->field_0x588;
  puVar9 = (undefined4 *)((int)puVar3 + 0x48b);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (undefined4 *)&local_14->field_05A0;
  puVar9 = (undefined4 *)((int)puVar3 + 0x4a3);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  *(undefined4 *)((int)puVar3 + 0x4a9) = 0;
  *(undefined4 *)((int)puVar3 + 0x4cd) = *(undefined4 *)&local_14->field_0x5ca;
  *(undefined4 *)((int)puVar3 + 0x4d1) = *(undefined4 *)&local_14->field_0x5ce;
  *(undefined4 *)((int)puVar3 + 0x4d5) = *(undefined4 *)&local_14->field_0x5d2;
  *(undefined4 *)((int)puVar3 + 0x4d9) = local_14->field_05D6;
  *(undefined2 *)((int)puVar3 + 0x4dd) = local_14->field_05DA;
  *(undefined4 *)((int)puVar3 + 0x4df) = local_14->field_05DC;
  *(undefined4 *)((int)puVar3 + 0x4e3) = local_14->field_05E0;
  *(undefined4 *)((int)puVar3 + 0x4e7) = local_14->field_05E4;
  *(undefined4 *)((int)puVar3 + 0x4eb) = local_14->field_05E8;
  *(undefined4 *)((int)puVar3 + 0x4ef) = local_14->field_05EC;
  *(undefined4 *)((int)puVar3 + 0x4f3) = *(undefined4 *)&local_14->field_0x5f0;
  *(undefined4 *)((int)puVar3 + 0x4f7) = *(undefined4 *)&local_14->field_0x5f4;
  *(undefined4 *)((int)puVar3 + 0x4fb) = local_14->field_05F8;
  puVar6 = (undefined4 *)&local_14->field_0x5fc;
  puVar9 = (undefined4 *)((int)puVar3 + 0x4ff);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
  puVar6 = (undefined4 *)&local_14->field_0x619;
  puVar9 = puVar3 + 0x147;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = &local_14->field_0635;
  puVar9 = puVar3 + 0x14e;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)&local_14->field_0x66b;
  puVar9 = (undefined4 *)((int)puVar3 + 0x56e);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (undefined4 *)&local_14->field_068B;
  puVar9 = (undefined4 *)((int)puVar3 + 0x58e);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)&local_14->field_06A9;
  puVar9 = puVar3 + 0x16b;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)&local_14->field_0x6cb;
  puVar9 = (undefined4 *)((int)puVar3 + 0x5ce);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)((int)puVar3 + 0x5ee) = local_14->field_06EB;
  *(undefined4 *)((int)puVar3 + 0x5f2) = local_14->field_06EF;
  local_1c = puVar3 + 6;
  local_18 = (undefined4 *)&local_14->field_0x282;
  local_10 = 0x606;
  local_20 = 9;
  pSVar4 = local_14;
  local_24 = puVar3;
  do {
    uVar8 = local_10;
    if ((uint *)*local_18 == (uint *)0x0) {
      local_8 = 0;
      local_1c[-1] = 0xffffffff;
      *local_1c = 0;
    }
    else {
      local_c = (undefined4 *)FUN_006b0020((uint *)*local_18,(int *)&local_8);
      puVar6 = local_c;
      puVar9 = (undefined4 *)(uVar8 + (int)puVar3);
      for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      local_1c[-1] = local_10;
      *local_1c = local_8;
      FUN_006ab060(&local_c);
      pSVar4 = local_14;
    }
    local_1c = local_1c + 2;
    uVar8 = local_10 + local_8;
    local_18 = local_18 + 1;
    local_20 = local_20 + -1;
    local_10 = uVar8;
  } while (local_20 != 0);
  if ((uint *)pSVar4->field_047B != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020((uint *)pSVar4->field_047B,(int *)&local_8);
    puVar6 = local_c;
    puVar9 = (undefined4 *)(uVar8 + (int)puVar3);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)((int)puVar3 + 0x37a) = local_10;
    *(uint *)((int)puVar3 + 0x37e) = local_8;
    FUN_006ab060(&local_c);
    g_currentExceptionFrame = local_68.previous;
    return puVar3;
  }
  *(undefined4 *)((int)puVar3 + 0x37a) = 0xffffffff;
  *(undefined4 *)((int)puVar3 + 0x37e) = 0;
  g_currentExceptionFrame = local_68.previous;
  return puVar3;
}

