
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
  STBoatC *pSVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  InternalExceptionFrame local_68;
  undefined4 *local_24;
  int local_20;
  uint *local_1c;
  STBoatC *local_18;
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
  pSVar9 = local_14 + 0x282;
  do {
    if (*(uint **)pSVar9 != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020(*(uint **)pSVar9,(int *)&local_8);
      FUN_006ab060(&local_c);
      *param_1 = *param_1 + local_8;
    }
    pSVar9 = pSVar9 + 4;
    local_1c = (uint *)((int)local_1c + -1);
  } while (local_1c != (uint *)0x0);
  if (*(uint **)(pSVar4 + 0x47b) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar4 + 0x47b),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*param_1);
  *puVar3 = *(undefined4 *)(pSVar4 + 0x20);
  puVar3[1] = *(undefined4 *)(pSVar4 + 0x24);
  puVar3[2] = *(undefined4 *)(pSVar4 + 0x28);
  puVar3[3] = 2;
  puVar3[4] = *(undefined4 *)(pSVar4 + 0x2c);
  pSVar4 = pSVar4 + 0x6f3;
  puVar6 = puVar3 + 0x17;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar4;
  *(STBoatC *)((int)puVar6 + 2) = pSVar4[2];
  pSVar4 = local_14 + 0x2c0;
  pSVar9 = (STBoatC *)((int)puVar3 + 0x1c7);
  for (iVar2 = 0x65; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar9 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    pSVar9 = pSVar9 + 4;
  }
  *pSVar9 = *pSVar4;
  puVar3[0xd7] = *(undefined4 *)(local_14 + 0x455);
  puVar3[0xd8] = *(undefined4 *)(local_14 + 0x459);
  puVar3[0xd9] = *(undefined4 *)(local_14 + 0x45d);
  puVar3[0xda] = *(undefined4 *)(local_14 + 0x461);
  *(undefined2 *)(puVar3 + 0xdb) = *(undefined2 *)(local_14 + 0x469);
  *(undefined2 *)((int)puVar3 + 0x36e) = *(undefined2 *)(local_14 + 0x46f);
  puVar3[0xdc] = *(undefined4 *)(local_14 + 0x471);
  *(undefined2 *)(puVar3 + 0xdd) = *(undefined2 *)(local_14 + 0x475);
  *(undefined2 *)((int)puVar3 + 0x376) = *(undefined2 *)(local_14 + 0x477);
  *(undefined2 *)(puVar3 + 0xde) = *(undefined2 *)(local_14 + 0x479);
  *(undefined4 *)((int)puVar3 + 0x382) = *(undefined4 *)(local_14 + 0x47f);
  *(undefined4 *)((int)puVar3 + 0x386) = *(undefined4 *)(local_14 + 0x483);
  *(undefined4 *)((int)puVar3 + 0x38a) = *(undefined4 *)(local_14 + 0x487);
  *(undefined4 *)((int)puVar3 + 0x38e) = *(undefined4 *)(local_14 + 0x48b);
  *(undefined4 *)((int)puVar3 + 0x392) = *(undefined4 *)(local_14 + 0x48f);
  *(undefined4 *)((int)puVar3 + 0x396) = *(undefined4 *)(local_14 + 0x493);
  *(undefined4 *)((int)puVar3 + 0x39a) = *(undefined4 *)(local_14 + 0x497);
  pSVar4 = local_14 + 0x49b;
  puVar6 = (undefined4 *)((int)puVar3 + 0x39e);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar4;
  pSVar4 = local_14 + 0x4dd;
  puVar6 = puVar3 + 0xf8;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar4;
  *(STBoatC *)((int)puVar6 + 2) = pSVar4[2];
  pSVar4 = local_14 + 0x510;
  puVar6 = (undefined4 *)((int)puVar3 + 0x413);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  pSVar4 = local_14 + 0x52c;
  puVar6 = (undefined4 *)((int)puVar3 + 0x42f);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  pSVar4 = local_14 + 0x554;
  puVar6 = (undefined4 *)((int)puVar3 + 0x457);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  pSVar4 = local_14 + 0x588;
  puVar6 = (undefined4 *)((int)puVar3 + 0x48b);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  pSVar4 = local_14 + 0x5a0;
  puVar6 = (undefined4 *)((int)puVar3 + 0x4a3);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar4;
  *(undefined4 *)((int)puVar3 + 0x4a9) = 0;
  *(undefined4 *)((int)puVar3 + 0x4cd) = *(undefined4 *)(local_14 + 0x5ca);
  *(undefined4 *)((int)puVar3 + 0x4d1) = *(undefined4 *)(local_14 + 0x5ce);
  *(undefined4 *)((int)puVar3 + 0x4d5) = *(undefined4 *)(local_14 + 0x5d2);
  *(undefined4 *)((int)puVar3 + 0x4d9) = *(undefined4 *)(local_14 + 0x5d6);
  *(undefined2 *)((int)puVar3 + 0x4dd) = *(undefined2 *)(local_14 + 0x5da);
  *(undefined4 *)((int)puVar3 + 0x4df) = *(undefined4 *)(local_14 + 0x5dc);
  *(undefined4 *)((int)puVar3 + 0x4e3) = *(undefined4 *)(local_14 + 0x5e0);
  *(undefined4 *)((int)puVar3 + 0x4e7) = *(undefined4 *)(local_14 + 0x5e4);
  *(undefined4 *)((int)puVar3 + 0x4eb) = *(undefined4 *)(local_14 + 0x5e8);
  *(undefined4 *)((int)puVar3 + 0x4ef) = *(undefined4 *)(local_14 + 0x5ec);
  *(undefined4 *)((int)puVar3 + 0x4f3) = *(undefined4 *)(local_14 + 0x5f0);
  *(undefined4 *)((int)puVar3 + 0x4f7) = *(undefined4 *)(local_14 + 0x5f4);
  *(undefined4 *)((int)puVar3 + 0x4fb) = *(undefined4 *)(local_14 + 0x5f8);
  pSVar4 = local_14 + 0x5fc;
  pSVar9 = (STBoatC *)((int)puVar3 + 0x4ff);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar9 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    pSVar9 = pSVar9 + 4;
  }
  *pSVar9 = *pSVar4;
  pSVar4 = local_14 + 0x619;
  puVar6 = puVar3 + 0x147;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  pSVar4 = local_14 + 0x635;
  puVar6 = puVar3 + 0x14e;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar4;
  pSVar4 = local_14 + 0x66b;
  puVar6 = (undefined4 *)((int)puVar3 + 0x56e);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  pSVar4 = local_14 + 0x68b;
  puVar6 = (undefined4 *)((int)puVar3 + 0x58e);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar4;
  pSVar4 = local_14 + 0x6a9;
  puVar6 = puVar3 + 0x16b;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar4;
  pSVar4 = local_14 + 0x6cb;
  puVar6 = (undefined4 *)((int)puVar3 + 0x5ce);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pSVar4;
    pSVar4 = pSVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)puVar3 + 0x5ee) = *(undefined4 *)(local_14 + 0x6eb);
  *(undefined4 *)((int)puVar3 + 0x5f2) = *(undefined4 *)(local_14 + 0x6ef);
  local_1c = puVar3 + 6;
  local_18 = local_14 + 0x282;
  local_10 = 0x606;
  local_20 = 9;
  pSVar4 = local_14;
  local_24 = puVar3;
  do {
    uVar8 = local_10;
    if (*(uint **)local_18 == (uint *)0x0) {
      local_8 = 0;
      local_1c[-1] = 0xffffffff;
      *local_1c = 0;
    }
    else {
      local_c = (undefined4 *)FUN_006b0020(*(uint **)local_18,(int *)&local_8);
      puVar6 = local_c;
      puVar10 = (undefined4 *)(uVar8 + (int)puVar3);
      for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_1c[-1] = local_10;
      *local_1c = local_8;
      FUN_006ab060(&local_c);
      pSVar4 = local_14;
    }
    local_1c = local_1c + 2;
    uVar8 = local_10 + local_8;
    local_18 = local_18 + 4;
    local_20 = local_20 + -1;
    local_10 = uVar8;
  } while (local_20 != 0);
  if (*(uint **)(pSVar4 + 0x47b) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar4 + 0x47b),(int *)&local_8);
    puVar6 = local_c;
    puVar10 = (undefined4 *)(uVar8 + (int)puVar3);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
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

