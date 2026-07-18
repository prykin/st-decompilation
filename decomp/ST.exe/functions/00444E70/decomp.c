
void __thiscall FUN_00444e70(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  iVar5 = 0;
  piVar4 = param_1 + 2;
  local_c = 0;
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  do {
    local_8 = piVar4;
    if (0 < piVar4[-1]) {
      FUN_006ae140(*(uint **)((int)&DAT_007f4e24 + iVar5 + 1),piVar4[-1] - 1,&local_c);
    }
    if (0 < *piVar4) {
      FUN_006ae140(*(uint **)((int)&DAT_007f4e29 + iVar5),*piVar4 - 1,&local_c);
    }
    local_10 = piVar4 + 1;
    iVar6 = 0;
    do {
      if (*local_10 == -1) {
        *(undefined4 *)((int)&DAT_007f4e2f + iVar5 + iVar6) = 0;
      }
      else {
        uVar1 = FUN_006b0060((uint *)0x0,(uint *)(*local_10 + (int)param_1));
        *(undefined4 *)((int)&DAT_007f4e2f + iVar5 + iVar6) = uVar1;
      }
      piVar10 = local_8;
      iVar6 = iVar6 + 4;
      local_10 = local_10 + 2;
    } while (iVar6 < 0x10);
    *(int *)((int)&DAT_007f4e3f + iVar5) = piVar4[9];
    *(int *)((int)&DAT_007f4e43 + iVar5) = piVar4[10];
    *(int *)((int)&DAT_007f4e47 + iVar5) = piVar4[0xb];
    local_14 = (int *)0x5;
    piVar4 = piVar4 + 0xc;
    piVar9 = (int *)((int)&DAT_007f4e4b + iVar5);
    for (iVar6 = 0x4e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar9 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar9 = piVar9 + 1;
    }
    piVar4 = (int *)((int)&DAT_007f4f87 + iVar5);
    local_10 = local_8 + 0x5b;
    do {
      piVar4[-1] = local_10[-1];
      *piVar4 = *local_10;
      *(short *)(piVar4 + 1) = (short)local_10[1];
      *(undefined2 *)((int)piVar4 + 10) = *(undefined2 *)((int)local_10 + 0xe);
      if (*(int *)((int)local_10 + 6) == -1) {
        *(undefined4 *)((int)piVar4 + 6) = 0;
      }
      else {
        uVar1 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)local_10 + 6) + (int)param_1));
        *(undefined4 *)((int)piVar4 + 6) = uVar1;
      }
      piVar4[0x13] = local_10[0x18];
      piVar4[0x14] = local_10[0x19];
      *(short *)(piVar4 + 0x15) = (short)local_10[0x1a];
      *(undefined2 *)((int)piVar4 + 0x5a) = *(undefined2 *)((int)local_10 + 0x72);
      if (*(int *)((int)local_10 + 0x6a) == -1) {
        *(undefined4 *)((int)piVar4 + 0x56) = 0;
      }
      else {
        uVar1 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)local_10 + 0x6a) + (int)param_1));
        *(undefined4 *)((int)piVar4 + 0x56) = uVar1;
      }
      local_10 = local_10 + 5;
      piVar4 = piVar4 + 4;
      local_14 = (int *)((int)local_14 + -1);
    } while (local_14 != (int *)0x0);
    local_14 = piVar10 + 0x8e;
    *(int *)((int)&DAT_007f5023 + iVar5) = piVar10[0x8c];
    piVar4 = (int *)((int)&DAT_007f502b + iVar5);
    local_10 = (int *)0xa;
    do {
      piVar4[-1] = local_14[-1];
      *piVar4 = *local_14;
      *(short *)(piVar4 + 1) = (short)local_14[1];
      *(undefined2 *)((int)piVar4 + 10) = *(undefined2 *)((int)local_14 + 0xe);
      if (*(int *)((int)local_14 + 6) == -1) {
        *(undefined4 *)((int)piVar4 + 6) = 0;
      }
      else {
        uVar1 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)local_14 + 6) + (int)param_1));
        *(undefined4 *)((int)piVar4 + 6) = uVar1;
      }
      local_14 = local_14 + 5;
      piVar4 = piVar4 + 4;
      local_10 = (int *)((int)local_10 + -1);
    } while (local_10 != (int *)0x0);
    *(int *)((int)&DAT_007f50c7 + iVar5) = piVar10[0xbf];
    *(int *)((int)&DAT_007f50cb + iVar5) = piVar10[0xc0];
    *(int *)((int)&DAT_007f50cf + iVar5) = piVar10[0xc1];
    *(int *)((int)&DAT_007f50d3 + iVar5) = piVar10[0xc2];
    *(int *)((int)&DAT_007f50d7 + iVar5) = piVar10[0xc3];
    *(int *)((int)&DAT_007f50db + iVar5) = piVar10[0xc4];
    *(int *)((int)&DAT_007f50df + iVar5) = piVar10[0xc5];
    *(int *)((int)&DAT_007f50e3 + iVar5) = piVar10[0xc6];
    *(int *)((int)&DAT_007f50e7 + iVar5) = piVar10[199];
    *(int *)((int)&DAT_007f50eb + iVar5) = piVar10[200];
    *(int *)((int)&DAT_007f50ef + iVar5) = piVar10[0xc9];
    *(int *)((int)&DAT_007f50f3 + iVar5) = piVar10[0xca];
    *(int *)((int)&DAT_007f50f7 + iVar5) = piVar10[0xcb];
    *(int *)((int)&DAT_007f50fb + iVar5) = piVar10[0xcc];
    *(int *)((int)&DAT_007f50ff + iVar5) = piVar10[0xcd];
    *(int *)((int)&DAT_007f5103 + iVar5) = piVar10[0xce];
    piVar4 = piVar10 + 0xcf;
    piVar10 = (int *)((int)&DAT_007f510b + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar4 = local_8 + 0xd4;
    piVar10 = (int *)((int)&DAT_007f511f + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar4 = local_8 + 0xd9;
    piVar10 = (int *)((int)&DAT_007f5133 + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar4 = local_8 + 0xde;
    piVar10 = (int *)((int)&DAT_007f5147 + iVar5);
    for (iVar6 = 0x9b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar4 = local_8 + 0x179;
    piVar10 = (int *)((int)&DAT_007f53b3 + iVar5);
    for (iVar6 = 0x6a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar10 = piVar10 + 1;
    }
    piVar4 = local_8 + 0x1e3;
    piVar10 = (int *)((int)&DAT_007f555b + iVar5);
    for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar10 = piVar10 + 1;
    }
    *(short *)piVar10 = (short)*piVar4;
    *(undefined1 *)((int)piVar10 + 2) = *(undefined1 *)((int)piVar4 + 2);
    *(undefined4 *)((int)&DAT_007f55f6 + iVar5) = *(undefined4 *)((int)local_8 + 0x827);
    puVar8 = (undefined4 *)((int)local_8 + 0x82b);
    puVar11 = (undefined4 *)((int)&DAT_007f55fa + iVar5);
    for (iVar6 = 0x66; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined4 *)((int)&DAT_007f5792 + iVar5) = *(undefined4 *)((int)local_8 + 0x9c3);
    *(undefined4 *)((int)&DAT_007f5796 + iVar5) = *(undefined4 *)((int)local_8 + 0x9c7);
    puVar8 = (undefined4 *)((int)local_8 + 0x9cb);
    puVar11 = (undefined4 *)((int)&DAT_007f579a + iVar5);
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined4 *)((int)&DAT_007f57b6 + iVar5) = *(undefined4 *)((int)local_8 + 0x9e3);
    *(undefined4 *)((int)&DAT_007f57ba + iVar5) = *(undefined4 *)((int)local_8 + 0x9e7);
    *(undefined4 *)((int)&DAT_007f57be + iVar5) = *(undefined4 *)((int)local_8 + 0x9eb);
    local_14 = (int *)0x6;
    puVar8 = (undefined4 *)((int)local_8 + 0x9ef);
    puVar11 = (undefined4 *)((int)&DAT_007f57c2 + iVar5);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar2 = (uint *)(&DAT_007f560e + iVar5);
    piVar4 = (int *)((int)local_8 + 0xa77);
    local_10 = (int *)0x0;
    do {
      FUN_006b0060(puVar2,(uint *)(*piVar4 + (int)param_1));
      piVar4 = piVar4 + 2;
      puVar2 = puVar2 + 0x11;
      local_14 = (int *)((int)local_14 + -1);
    } while (local_14 != (int *)0x0);
    puVar8 = (undefined4 *)((int)local_8 + 0xa17);
    puVar11 = (undefined4 *)((int)&DAT_007f582e + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar8 = (undefined4 *)((int)local_8 + 0xa2b);
    puVar11 = (undefined4 *)((int)&DAT_007f5842 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar8 = (undefined4 *)((int)local_8 + 0xa4b);
    puVar11 = (undefined4 *)((int)&DAT_007f5862 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined4 *)((int)&DAT_007f581a + iVar5) = 0;
    *(undefined4 *)((int)&DAT_007f581e + iVar5) = 0;
    *(undefined4 *)((int)&DAT_007f5822 + iVar5) = 0;
    *(undefined4 *)((int)&DAT_007f5826 + iVar5) = 0;
    *(undefined4 *)((int)&DAT_007f582a + iVar5) = *(undefined4 *)((int)local_8 + 0xa73);
    if (*(int *)((int)local_8 + 0xa6b) == -1) {
      *(undefined4 *)((int)&DAT_007f5816 + iVar5) = 0;
    }
    else {
      uVar7 = *(uint *)((int)local_8 + 0xa6f) / 0x18;
      puVar2 = FUN_006ae290((uint *)0x0,uVar7,0xc,1);
      *(uint **)((int)&DAT_007f5816 + iVar5) = puVar2;
      local_10 = (int *)0x0;
      if (uVar7 != 0) {
        piVar4 = (int *)((int)param_1 + *(int *)((int)local_8 + 0xa6b) + 0x10);
        do {
          local_20 = 0;
          if (piVar4[-4] != -1) {
            local_20 = FUN_006b0060((uint *)0x0,(uint *)(piVar4[-4] + (int)param_1));
          }
          local_1c = 0;
          if (piVar4[-2] != -1) {
            local_1c = FUN_006b0060((uint *)0x0,(uint *)(piVar4[-2] + (int)param_1));
          }
          local_18 = 0;
          if (*piVar4 != -1) {
            local_18 = FUN_006b0060((uint *)0x0,(uint *)(*piVar4 + (int)param_1));
          }
          FUN_006ae140(*(uint **)((int)&DAT_007f5816 + iVar5),(uint)local_10,&local_20);
          piVar4 = piVar4 + 6;
          local_10 = (int *)((int)local_10 + 1);
        } while ((int)local_10 < (int)uVar7);
      }
    }
    iVar5 = iVar5 + 0xa62;
    piVar4 = (int *)((int)local_8 + 0xaab);
  } while (iVar5 < 0x5310);
  puVar8 = param_1 + 0x1557;
  puVar11 = &DAT_007fa138;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  local_8 = piVar4;
  if (0 < (int)param_1[0x155d]) {
    FUN_006ae140(DAT_007fa154,param_1[0x155d] - 1,&local_c);
  }
  if (0 < (int)param_1[0x155e]) {
    FUN_006ae140(DAT_007fa158,param_1[0x155e] - 1,&local_c);
  }
  if (0 < (int)param_1[0x155f]) {
    FUN_006ae140(DAT_007fa15c,param_1[0x155f] - 1,&local_c);
  }
  if (0 < (int)param_1[0x1560]) {
    FUN_006ae140(DAT_007fa160,param_1[0x1560] - 1,&local_c);
  }
  if (0 < (int)param_1[0x1561]) {
    FUN_006ae140(DAT_007fa164,param_1[0x1561] - 1,&local_c);
  }
  DAT_007fa168 = (undefined4 *)FUN_006aac70(param_1[0x1563]);
  uVar7 = param_1[0x1563];
  puVar8 = (undefined4 *)(param_1[0x1562] + (int)param_1);
  puVar11 = DAT_007fa168;
  for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  return;
}

