
void thunk_FUN_0059eb00(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  LPBITMAPINFO ptVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 auStack_dac [11];
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  undefined4 uStack_d78;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined4 uStack_d58;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  undefined4 uStack_d18;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  int aiStack_520 [5];
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_3f4;
  undefined4 auStack_3f0 [4];
  int iStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_274;
  undefined4 auStack_270 [4];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_208;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  puVar8 = auStack_dac;
  for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  piVar9 = aiStack_520;
  for (iVar7 = 0x135; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar7 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar7 == 0) {
    if (*(int *)((int)pvStack_8 + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_8 + 0x1e8e));
    }
    if (*(int *)((int)pvStack_8 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_8 + 0x1e92));
    }
    iVar7 = 1;
    puVar8 = (undefined4 *)(*(int *)((int)pvStack_8 + 0x5d) + 0x28);
    uVar2 = FUN_006b4fe0(*(int *)((int)pvStack_8 + 0x5d));
    uVar3 = FUN_006b50c0(0x174,0x175,(uint)*(ushort *)(*(int *)((int)pvStack_8 + 0x5d) + 0xe),uVar2,
                         puVar8,iVar7);
    *(undefined4 *)((int)pvStack_8 + 0x1e8e) = uVar3;
    ptVar4 = FUN_006c4880(DAT_0080759c,0x199,0x5e,0x174,0x175,8);
    *(undefined4 *)((int)pvStack_8 + 0x1e92) = ptVar4;
    ptVar4 = FUN_006c4880(DAT_0080759c,0x13,0x5e,0x174,0x175,8);
    *(LPBITMAPINFO *)((int)pvStack_8 + 0x1e9a) = ptVar4;
    puVar5 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)pvStack_8 + 0x1ae8) = puVar5;
    FUN_006b5aa0((int)puVar5,&DAT_008016a0);
    puVar5 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)((int)pvStack_8 + 0x1aec) = puVar5;
    FUN_006b5aa0((int)puVar5,&DAT_008016a0);
    puVar5 = FUN_006ae290((uint *)0x0,0x14,0x25c,10);
    *(uint **)((int)pvStack_8 + 0x1ebe) = puVar5;
    aiStack_520[4] = 0x15b - *(int *)((int)pvStack_8 + 0x1cff);
    uStack_4f8 = *(undefined4 *)((int)pvStack_8 + 8);
    aiStack_520[0] = 0;
    aiStack_520[2] = 0x14;
    aiStack_520[3] = 100;
    uStack_50c = 0x169;
    uStack_508 = 0;
    uStack_504 = 0;
    uStack_4f4 = 2;
    uStack_4f0 = 0x8160;
    uStack_4d4 = 2;
    uStack_4d0 = 0x8161;
    uStack_4b4 = 2;
    uStack_4b0 = 0x63ff;
    uStack_494 = 2;
    uStack_490 = 0x8163;
    if (DAT_0080734c != '\0') {
      uStack_50 = 1;
    }
    auStack_3f0[0] = 0;
    auStack_3f0[2] = *(undefined4 *)((int)pvStack_8 + 0x1cf7);
    iStack_3e0 = *(int *)((int)pvStack_8 + 0x1cff);
    auStack_3f0[3] = *(undefined4 *)((int)pvStack_8 + 0x1cfb);
    uStack_3dc = *(undefined4 *)((int)pvStack_8 + 0x1d03);
    uStack_3f4 = 2;
    auStack_3f0[1] = 2;
    uStack_2e0 = 500;
    uStack_2dc = 0x32;
    uStack_390 = uStack_4f8;
    uStack_38c = 2;
    uStack_388 = 0x8164;
    uStack_274 = 2;
    puVar8 = auStack_3f0;
    puVar10 = auStack_270;
    for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    auStack_270[2] = *(undefined4 *)((int)pvStack_8 + 0x1d88);
    auStack_270[3] = *(undefined4 *)((int)pvStack_8 + 0x1d8c);
    uStack_260 = *(undefined4 *)((int)pvStack_8 + 0x1d90);
    uStack_25c = *(undefined4 *)((int)pvStack_8 + 0x1d94);
    uStack_e4 = *(undefined4 *)((int)pvStack_8 + 0x1e19);
    uStack_e0 = *(undefined4 *)((int)pvStack_8 + 0x1e1d);
    uStack_dc = *(undefined4 *)((int)pvStack_8 + 0x1e21);
    uStack_208 = 0x8165;
    uStack_f4 = 3;
    uStack_f0 = 1;
    uStack_e8 = 0;
    uStack_d8 = 0x126;
    uStack_d4 = 0xe;
    uStack_9c = 2;
    uStack_98 = 0x8166;
    uStack_4d8 = uStack_4f8;
    uStack_4b8 = uStack_4f8;
    uStack_498 = uStack_4f8;
    uStack_a0 = uStack_4f8;
    (**(code **)(**(int **)((int)pvStack_8 + 0xc) + 8))(7,(int)pvStack_8 + 0x1b20,0,aiStack_520,0);
    if (*(uint *)((int)pvStack_8 + 0x1cdf) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)pvStack_8 + 0x1d23),*(uint *)((int)pvStack_8 + 0x1cdf),0xfffffffe
                   ,*(uint *)((int)pvStack_8 + 0x1cf7),*(uint *)((int)pvStack_8 + 0x1cfb));
    }
    if (*(uint *)((int)pvStack_8 + 0x1d70) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)pvStack_8 + 0x1db4),*(uint *)((int)pvStack_8 + 0x1d70),0xfffffffe
                   ,*(uint *)((int)pvStack_8 + 0x1d88),*(uint *)((int)pvStack_8 + 0x1d8c));
    }
    if (*(uint *)((int)pvStack_8 + 0x1e01) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)pvStack_8 + 0x1e45),*(uint *)((int)pvStack_8 + 0x1e01),0xfffffffe
                   ,*(uint *)((int)pvStack_8 + 0x1e19),*(uint *)((int)pvStack_8 + 0x1e1d));
    }
    auStack_dac[8] = *(undefined4 *)((int)pvStack_8 + 0x1ae8);
    puVar8 = auStack_dac;
    for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    auStack_dac[2] = *(undefined4 *)((int)pvStack_8 + 0x1a73);
    uStack_d80 = *(undefined4 *)((int)pvStack_8 + 8);
    auStack_dac[0] = 1;
    auStack_dac[1] = 0x99;
    auStack_dac[3] = 0x1a8;
    auStack_dac[4] = 0x127;
    auStack_dac[5] = 0x156;
    auStack_dac[6] = 0x17;
    auStack_dac[7] = 0x20;
    uStack_d1c = 2;
    uStack_538 = 2;
    uStack_d7c = 2;
    uStack_d5c = 2;
    uStack_d78 = 0x68ff;
    uStack_d58 = 0x6988;
    uStack_534 = 0x6955;
    uStack_d18 = 0x63ff;
    uStack_d60 = uStack_d80;
    uStack_d20 = uStack_d80;
    uStack_53c = uStack_d80;
    (**(code **)(**(int **)((int)pvStack_8 + 0xc) + 8))(6,(int)pvStack_8 + 0x1ac4,0,auStack_dac,0);
    auStack_dac[8] = *(undefined4 *)((int)pvStack_8 + 0x1aec);
    auStack_dac[1] = 0x89;
    auStack_dac[4] = 0x154;
    auStack_dac[7] = 0x10;
    (**(code **)(**(int **)((int)pvStack_8 + 0xc) + 8))(6,(int)pvStack_8 + 0x1ac8,0,auStack_dac,0);
    *(undefined4 *)((int)pvStack_8 + 0x1ec2) = 0;
    *(undefined4 *)((int)pvStack_8 + 0x1ec6) = 0xffffffff;
    *(undefined4 *)((int)pvStack_8 + 0x1eca) = 0;
    uVar3 = thunk_FUN_005b5510(1,1,0x230,0x17a,0xd3,0x19,0x6904,0x6989);
    *(undefined4 *)((int)pvStack_8 + 0x1eb6) = uVar3;
    uVar3 = thunk_FUN_005b5510(1,0,0x1a3,0x196,0x160,0x19,0x6905,0x698a);
    *(undefined4 *)((int)pvStack_8 + 0x1eba) = uVar3;
    uVar3 = thunk_FUN_005b5510(1,1,0x1fd,0x1b5,0xab,0x19,0x6903,0x698d);
    *(undefined4 *)((int)pvStack_8 + 0x1b24) = uVar3;
    *(undefined4 *)((int)pvStack_8 + 0x2d) = 0x61;
    *(undefined4 *)((int)pvStack_8 + 0x35) = 0;
    FUN_006e6080(pvStack_8,0xf,0,(undefined4 *)((int)pvStack_8 + 0x1d));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x7f0,0,iVar7,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar7,0,0x7cbf70,0x7f0);
  return;
}

