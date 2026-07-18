
undefined4 * FUN_0048fac0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 local_68;
  undefined4 local_64 [16];
  undefined4 *local_24;
  int local_20;
  uint *local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar2 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  iVar5 = local_14;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4e98,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    FUN_006a5e40(iVar2,0,0x7a9d3c,0x4e99);
    return local_24;
  }
  local_1c = (uint *)0x9;
  *param_1 = 0x606;
  puVar4 = (undefined4 *)(local_14 + 0x282);
  do {
    if ((uint *)*puVar4 != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020((uint *)*puVar4,(int *)&local_8);
      FUN_006ab060(&local_c);
      *param_1 = *param_1 + local_8;
    }
    puVar4 = puVar4 + 1;
    local_1c = (uint *)((int)local_1c + -1);
  } while (local_1c != (uint *)0x0);
  if (*(uint **)(iVar5 + 0x47b) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x47b),(int *)&local_8);
    FUN_006ab060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar3 = (undefined4 *)FUN_006aac70(*param_1);
  *puVar3 = *(undefined4 *)(iVar5 + 0x20);
  puVar3[1] = *(undefined4 *)(iVar5 + 0x24);
  puVar3[2] = *(undefined4 *)(iVar5 + 0x28);
  puVar3[3] = 2;
  puVar3[4] = *(undefined4 *)(iVar5 + 0x2c);
  puVar4 = (undefined4 *)(iVar5 + 0x6f3);
  puVar8 = puVar3 + 0x17;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
  *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar4 + 2);
  puVar4 = (undefined4 *)(local_14 + 0x2c0);
  puVar8 = (undefined4 *)((int)puVar3 + 0x1c7);
  for (iVar5 = 0x65; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
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
  puVar4 = (undefined4 *)(local_14 + 0x49b);
  puVar8 = (undefined4 *)((int)puVar3 + 0x39e);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
  puVar4 = (undefined4 *)(local_14 + 0x4dd);
  puVar8 = puVar3 + 0xf8;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
  *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar4 + 2);
  puVar4 = (undefined4 *)(local_14 + 0x510);
  puVar8 = (undefined4 *)((int)puVar3 + 0x413);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = (undefined4 *)(local_14 + 0x52c);
  puVar8 = (undefined4 *)((int)puVar3 + 0x42f);
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = (undefined4 *)(local_14 + 0x554);
  puVar8 = (undefined4 *)((int)puVar3 + 0x457);
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = (undefined4 *)(local_14 + 0x588);
  puVar8 = (undefined4 *)((int)puVar3 + 0x48b);
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = (undefined4 *)(local_14 + 0x5a0);
  puVar8 = (undefined4 *)((int)puVar3 + 0x4a3);
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
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
  puVar4 = (undefined4 *)(local_14 + 0x5fc);
  puVar8 = (undefined4 *)((int)puVar3 + 0x4ff);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
  puVar4 = (undefined4 *)(local_14 + 0x619);
  puVar8 = puVar3 + 0x147;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = (undefined4 *)(local_14 + 0x635);
  puVar8 = puVar3 + 0x14e;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
  puVar4 = (undefined4 *)(local_14 + 0x66b);
  puVar8 = (undefined4 *)((int)puVar3 + 0x56e);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = (undefined4 *)(local_14 + 0x68b);
  puVar8 = (undefined4 *)((int)puVar3 + 0x58e);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
  puVar4 = (undefined4 *)(local_14 + 0x6a9);
  puVar8 = puVar3 + 0x16b;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
  puVar4 = (undefined4 *)(local_14 + 0x6cb);
  puVar8 = (undefined4 *)((int)puVar3 + 0x5ce);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)((int)puVar3 + 0x5ee) = *(undefined4 *)(local_14 + 0x6eb);
  *(undefined4 *)((int)puVar3 + 0x5f2) = *(undefined4 *)(local_14 + 0x6ef);
  local_1c = puVar3 + 6;
  local_18 = (undefined4 *)(local_14 + 0x282);
  local_10 = 0x606;
  local_20 = 9;
  iVar5 = local_14;
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
      puVar4 = local_c;
      puVar8 = (undefined4 *)(uVar7 + (int)puVar3);
      for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_1c[-1] = local_10;
      *local_1c = local_8;
      FUN_006ab060(&local_c);
      iVar5 = local_14;
    }
    local_1c = local_1c + 2;
    uVar7 = local_10 + local_8;
    local_18 = local_18 + 1;
    local_20 = local_20 + -1;
    local_10 = uVar7;
  } while (local_20 != 0);
  if (*(uint **)(iVar5 + 0x47b) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)(iVar5 + 0x47b),(int *)&local_8);
    puVar4 = local_c;
    puVar8 = (undefined4 *)(uVar7 + (int)puVar3);
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)puVar3 + 0x37a) = local_10;
    *(uint *)((int)puVar3 + 0x37e) = local_8;
    FUN_006ab060(&local_c);
    DAT_00858df8 = (undefined4 *)local_68;
    return puVar3;
  }
  *(undefined4 *)((int)puVar3 + 0x37a) = 0xffffffff;
  *(undefined4 *)((int)puVar3 + 0x37e) = 0;
  DAT_00858df8 = (undefined4 *)local_68;
  return puVar3;
}

