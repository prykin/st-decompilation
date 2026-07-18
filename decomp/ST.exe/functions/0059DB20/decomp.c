
void FUN_0059db20(void)

{
  undefined4 uVar1;
  code *pcVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  LPBITMAPINFO ptVar6;
  uint *puVar7;
  int iVar8;
  void *this;
  int iVar9;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  void *unaff_EDI;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 local_1654 [11];
  undefined4 local_1628;
  undefined4 local_1624;
  undefined4 local_1620;
  undefined4 local_1608;
  undefined4 local_1604;
  undefined4 local_1600;
  undefined4 local_15c8;
  undefined4 local_15c4;
  undefined4 local_15c0;
  undefined4 local_df0;
  undefined4 local_de4;
  undefined4 local_de0;
  undefined4 local_ddc;
  int local_dc8 [5];
  int local_db4;
  undefined4 local_db0;
  undefined4 local_dac;
  undefined4 local_da8;
  undefined4 local_da4;
  undefined4 local_d90;
  undefined4 local_d8c;
  undefined4 local_d88;
  undefined4 local_d18;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c [4];
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 local_cac;
  undefined4 local_ca8;
  undefined4 local_ca4;
  undefined4 local_bfc;
  undefined4 local_bf8;
  undefined4 local_b90;
  undefined4 local_b8c [4];
  undefined4 local_b7c;
  undefined4 local_b78;
  undefined4 local_b24;
  undefined4 local_a10;
  undefined4 local_a0c;
  undefined4 local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9bc;
  undefined4 local_9b8;
  undefined4 local_9b4;
  undefined4 local_550 [11];
  undefined1 local_523;
  int local_520 [5];
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_3f4;
  undefined4 local_3f0 [4];
  int local_3e0;
  undefined4 local_3dc;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_274;
  undefined4 local_270 [4];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_208;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_a0;
  undefined4 local_9c;
  
  FUN_0072da40();
  puVar10 = local_1654;
  for (iVar9 = 0x223; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  piVar11 = local_dc8;
  for (iVar9 = 0x21e; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_520;
  for (iVar9 = 0x135; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar9 = __setjmp3((undefined4 *)&stack0xffffffb8,0,unaff_EDI,unaff_ESI);
  if (iVar9 == 0) {
    *(undefined1 *)((int)this + 0x1a60) = 0;
    if (*(int *)((int)this + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)((int)this + 0x1e8e));
    }
    if (*(int *)((int)this + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)((int)this + 0x1e92));
    }
    if (*(int *)((int)this + 0x1e9a) != 0) {
      FUN_006ab060((undefined4 *)((int)this + 0x1e9a));
    }
    iVar9 = 1;
    puVar10 = (undefined4 *)(*(int *)((int)this + 0x5d) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)((int)this + 0x5d));
    uVar5 = FUN_006b50c0(0x1bf,0x175,(uint)*(ushort *)(*(int *)((int)this + 0x5d) + 0xe),uVar4,
                         puVar10,iVar9);
    *(undefined4 *)((int)this + 0x1e8e) = uVar5;
    ptVar6 = FUN_006c4880(DAT_0080759c,0x13,0x5e,0x1bf,0x175,8);
    *(undefined4 *)((int)this + 0x1e92) = ptVar6;
    ptVar6 = FUN_006c4880(DAT_0080759c,0x1e9,0x5e,0x124,0x175,8);
    *(undefined4 *)((int)this + 0x1e9a) = ptVar6;
    puVar7 = FUN_006ae290((uint *)0x0,0x14,0x2e,10);
    *(uint **)((int)this + 0x1ea6) = puVar7;
    local_523 = 1;
    FUN_006ae1c0(puVar7,local_550);
    puVar7 = FUN_006ae290((uint *)0x0,0x14,0x68,10);
    *(uint **)((int)this + 0x1eaa) = puVar7;
    puVar7 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)this + 0x1ae8) = puVar7;
    FUN_006b5aa0((int)puVar7,&DAT_008016a0);
    puVar7 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)this + 0x1aec) = puVar7;
    FUN_006b5aa0((int)puVar7,&DAT_008016a0);
    puVar7 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)this + 0x1ea2) = puVar7;
    FUN_006b5aa0((int)puVar7,&DAT_008016a0);
    local_dc8[0] = 0;
    local_dc8[1] = 2;
    local_da8 = 0x19;
    local_da4 = 0x5f;
    local_dc8[2] = 1;
    local_dc8[3] = 0;
    iVar9 = *(int *)((int)this + 0x1a77);
    local_dc8[4] = 0x1a6 - *(int *)((int)this + 0x1b4c);
    if (*(int *)(iVar9 + 0xa0) != 0) {
      FUN_00710790(iVar9);
    }
    local_db4 = *(int *)(iVar9 + 0x8a);
    local_dac = (undefined4)(0x15e / (longlong)local_db4);
    local_d14 = 0;
    local_d0c[0] = 0;
    local_d0c[3] = *(undefined4 *)((int)this + 0x1bd9);
    local_d0c[2] = *(undefined4 *)((int)this + 0x1bd5);
    local_d8c = 2;
    local_d10 = 2;
    local_d0c[1] = 2;
    local_cfc = *(undefined4 *)((int)this + 0x1bdd);
    local_ca8 = 2;
    local_b90 = 2;
    local_db0 = 1;
    local_d88 = 0x6982;
    local_d18 = 4;
    local_cf8 = *(undefined4 *)((int)this + 0x1be1);
    local_bfc = 500;
    local_bf8 = 0x32;
    local_ca4 = 0x6334;
    uVar5 = *(undefined4 *)((int)this + 0x1b48);
    local_d90 = *(undefined4 *)((int)this + 8);
    local_cac = local_d90;
    puVar10 = local_d0c;
    puVar12 = local_b8c;
    for (iVar9 = 0x5f; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    local_b8c[2] = *(undefined4 *)((int)this + 0x1b44);
    local_b78 = *(undefined4 *)((int)this + 0x1b50);
    local_b7c = *(undefined4 *)((int)this + 0x1b4c);
    local_a00 = *(undefined4 *)((int)this + 0x1c66);
    local_9f8 = *(undefined4 *)((int)this + 0x1c6e);
    local_9fc = *(undefined4 *)((int)this + 0x1c6a);
    puVar10 = (undefined4 *)((int)this + 0x1b14);
    local_b24 = 0x6333;
    local_a10 = 3;
    local_a0c = 1;
    local_a04 = 0;
    local_9f4 = 0x110;
    local_9f0 = 0xe;
    local_9b8 = 2;
    local_9b4 = 0x6335;
    local_b8c[3] = uVar5;
    local_9bc = local_d90;
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    *(undefined4 *)((int)this + 0x2d) = 5;
    FUN_006e6080(this,2,*puVar10,(undefined4 *)((int)this + 0x1d));
    if (*(uint *)((int)this + 0x1b2c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)this + 0x1b70),*(uint *)((int)this + 0x1b2c),0xfffffffe,
                   *(uint *)((int)this + 0x1b44),*(uint *)((int)this + 0x1b48));
    }
    if (*(uint *)((int)this + 0x1bbd) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)this + 0x1c01),*(uint *)((int)this + 0x1bbd),0xfffffffe,
                   *(uint *)((int)this + 0x1bd5),*(uint *)((int)this + 0x1bd9));
    }
    if (*(uint *)((int)this + 0x1c4e) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)this + 0x1c92),*(uint *)((int)this + 0x1c4e),0xfffffffe,
                   *(uint *)((int)this + 0x1c66),*(uint *)((int)this + 0x1c6a));
    }
    *(undefined4 *)((int)this + 0x2d) = 0x28;
    *(undefined2 *)((int)this + 0x31) = 1;
    *(undefined2 *)((int)this + 0x33) = *(undefined2 *)(*(int *)((int)this + 0x1e9e) + 8);
    FUN_006e6080(this,2,*puVar10,(undefined4 *)((int)this + 0x1d));
    *(undefined4 *)((int)this + 0x2d) = 0x22;
    *(undefined2 *)((int)this + 0x31) = 0;
    iVar9 = *(int *)(*(int *)((int)this + 0x1e9e) + 8);
    if (iVar9 < 0x19) {
      sVar3 = 0;
    }
    else {
      sVar3 = (short)iVar9 + -0x19;
    }
    *(short *)((int)this + 0x33) = sVar3;
    FUN_006e6080(this,2,*puVar10,(undefined4 *)((int)this + 0x1d));
    puVar10 = local_1654;
    for (iVar9 = 0x223; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_1654[2] = *(undefined4 *)((int)this + 0x1a77);
    local_1654[8] = *(undefined4 *)((int)this + 0x1ea2);
    local_1608 = *(undefined4 *)((int)this + 8);
    local_1654[0] = 1;
    local_1654[1] = 9;
    local_1654[3] = 0x19;
    local_1654[4] = 0x1bd;
    local_1654[5] = 0x15b;
    local_1654[6] = 0x14;
    local_1654[7] = 0x104;
    local_df0 = 0x100;
    local_1604 = 2;
    local_1600 = 0x6983;
    local_15c4 = 2;
    local_15c0 = 0xc0a2;
    local_15c8 = local_1608;
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    thunk_FUN_00540dc0(1,*(undefined4 *)((int)this + 8),2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    local_9c = 0x59e0ab;
    thunk_FUN_00540dc0(1,*(undefined4 *)((int)this + 8),2,0xc0a4,2,0x8000031,0,0,0,0,0,0);
    thunk_FUN_00540dc0(1,*(undefined4 *)((int)this + 8),2,0xc0a5,2,0x4000002f,0,0,0,0,0,0);
    uVar5 = thunk_FUN_005b5510(1,1,0x17c,0x1be,0x55,0x14,0x6901,0x6984);
    *(undefined4 *)((int)this + 0x1b18) = uVar5;
    uVar5 = thunk_FUN_005b5510(1,0,499,0x156,0xe6,0x19,0x6903,0x6986);
    *(undefined4 *)((int)this + 0x1b24) = uVar5;
    uVar5 = thunk_FUN_005b5510(1,1,0x261,0x1b3,0xa0,0x19,0x6902,0x6985);
    *(undefined4 *)((int)this + 0x1b1c) = uVar5;
    local_a0 = *(undefined4 *)((int)this + 8);
    local_520[4] = 0x10b - *(int *)((int)this + 0x1cff);
    local_520[0] = 0;
    local_520[2] = 0x1ea;
    local_520[3] = 0x5f;
    local_50c = 0xf2;
    local_508 = 0;
    local_504 = 0;
    local_4f8 = local_a0;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d8 = local_a0;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b8 = local_a0;
    local_4b4 = 2;
    local_4b0 = 0x8162;
    local_498 = local_a0;
    local_494 = 2;
    local_490 = 0x8163;
    local_3e0 = *(int *)((int)this + 0x1cff);
    local_3f0[2] = *(undefined4 *)((int)this + 0x1cf7);
    local_3f4 = 2;
    local_3f0[0] = 0;
    local_3f0[1] = 2;
    local_3dc = *(undefined4 *)((int)this + 0x1d03);
    local_38c = 2;
    local_274 = 2;
    local_3f0[3] = *(undefined4 *)((int)this + 0x1cfb);
    local_270[2] = *(undefined4 *)((int)this + 0x1d88);
    local_2e0 = 500;
    local_2dc = 0x32;
    local_390 = local_a0;
    local_388 = 0x8164;
    puVar10 = local_3f0;
    puVar12 = local_270;
    for (iVar9 = 0x5f; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    local_270[3] = *(undefined4 *)((int)this + 0x1d8c);
    local_260 = *(undefined4 *)((int)this + 0x1d90);
    local_25c = *(undefined4 *)((int)this + 0x1d94);
    local_e4 = *(undefined4 *)((int)this + 0x1e19);
    local_e0 = *(undefined4 *)((int)this + 0x1e1d);
    local_dc = *(undefined4 *)((int)this + 0x1e21);
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    local_d8 = 199;
    local_d4 = 0xe;
    local_9c = 2;
    uVar5 = 7;
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    if (*(uint *)((int)this + 0x1cdf) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)this + 0x1d23),*(uint *)((int)this + 0x1cdf),0xfffffffe,
                   *(uint *)((int)this + 0x1cf7),*(uint *)((int)this + 0x1cfb));
    }
    if (*(uint *)((int)this + 0x1d70) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)this + 0x1db4),*(uint *)((int)this + 0x1d70),0xfffffffe,
                   *(uint *)((int)this + 0x1d88),*(uint *)((int)this + 0x1d8c));
    }
    if (*(uint *)((int)this + 0x1e01) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)this + 0x1e45),*(uint *)((int)this + 0x1e01),0xfffffffe,
                   *(uint *)((int)this + 0x1e19),*(uint *)((int)this + 0x1e1d));
    }
    uVar1 = *(undefined4 *)((int)this + 0x1ae8);
    puVar10 = local_1654;
    for (iVar9 = 0x223; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_1654[2] = *(undefined4 *)((int)this + 0x1a73);
    local_1628 = *(undefined4 *)((int)this + 8);
    local_1654[0] = 1;
    local_1654[1] = 0x89;
    local_1654[3] = 499;
    local_1654[4] = 0x18d;
    local_1654[5] = 0x10b;
    local_1654[6] = 0x16;
    local_1654[7] = 0x40;
    local_15c4 = 2;
    local_de0 = 2;
    local_1624 = 2;
    local_1604 = 2;
    local_1620 = 0x68ff;
    local_1600 = 0x6987;
    local_ddc = 0x6955;
    local_15c0 = 0xc0a3;
    local_1654[8] = uVar1;
    local_1608 = local_1628;
    local_15c8 = local_1628;
    local_de4 = local_1628;
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    local_1654[8] = *(undefined4 *)((int)this + 0x1aec);
    local_1654[4] = 0x1b5;
    local_1654[5] = 0x5f;
    local_1654[7] = 0x20;
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    *(undefined4 *)((int)this + 0x2d) = 0x61;
    *(undefined4 *)((int)this + 0x35) = 0;
    FUN_006e6080(this,0xf,0,(undefined4 *)((int)this + 0x1d));
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar8 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x758,0,iVar9,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar9,0,0x7cbf70,0x758);
  return;
}

