
void thunk_FUN_005aeab0(char param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 auStack_fe4 [6];
  undefined4 uStack_fcc;
  undefined4 uStack_fc8;
  undefined4 uStack_fc4;
  int iStack_f98;
  undefined4 uStack_f94;
  undefined4 uStack_f90;
  int iStack_f58;
  undefined4 uStack_f54;
  undefined4 uStack_f50;
  undefined4 uStack_780;
  int aiStack_758 [112];
  undefined4 auStack_598 [10];
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 auStack_c0 [16];
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  void *pvStack_c;
  uint uStack_8;
  
  puVar9 = auStack_598;
  for (iVar2 = 0x135; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = auStack_fe4;
  for (iVar2 = 0x223; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = auStack_80;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar8 = aiStack_758;
  for (iVar2 = 0x70; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  uStack_c4 = DAT_00858df8;
  DAT_00858df8 = &uStack_c4;
  iVar2 = __setjmp3(auStack_c0,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_c4;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x39f,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cc728,0x39f);
    return;
  }
  uVar6 = 0;
  switch(*(undefined1 *)((int)pvStack_c + 0x1a5f)) {
  case 1:
  case 2:
    uStack_34 = (uint)*(byte *)(DAT_0081176c + 0x2eb);
    uVar6 = 2;
    *(char *)((int)pvStack_c + 0x1a5f) = (uStack_34 != 1) + '\x01';
    goto LAB_005aebde;
  case 4:
  case 5:
    uVar6 = 2;
    uStack_34 = (uint)*(byte *)(DAT_0081176c + 0x2eb);
    *(char *)((int)pvStack_c + 0x1a5f) = (uStack_34 != 1) + '\x04';
    break;
  case 9:
  case 10:
  case 0xb:
    uVar6 = 3;
    uStack_34 = (uint)*(byte *)(DAT_0081176c + 0x2ea);
    cVar7 = *(char *)(DAT_0081176c + 0x2ea);
    if (cVar7 == '\x01') {
      *(undefined1 *)((int)pvStack_c + 0x1a5f) = 9;
    }
    else if (cVar7 == '\x02') {
      *(undefined1 *)((int)pvStack_c + 0x1a5f) = 10;
    }
    else if (cVar7 == '\x03') {
      *(undefined1 *)((int)pvStack_c + 0x1a5f) = 0xb;
    }
  }
LAB_005aebde:
  if (uVar6 == 0) {
LAB_005aecc2:
    if (param_1 != '\0') goto LAB_005aef44;
  }
  else if (param_1 != '\0') {
    cVar7 = '\0';
    if (uVar6 != 0) {
      uVar3 = 0;
      do {
        aiStack_758[uVar3 * 0x1c] = uVar3 + 1;
        cVar7 = cVar7 + '\x01';
        aiStack_758[uVar3 * 0x1c + 1] = 0;
        uStack_8 = CONCAT31(uStack_8._1_3_,cVar7);
        aiStack_758[uVar3 * 0x1c + 3] = uVar3 * 0x7c + 0x112;
        uVar4 = uStack_8 & 0xff;
        aiStack_758[uVar3 * 0x1c + 5] = 0x7a;
        aiStack_758[uVar3 * 0x1c + 4] = 0x1d4;
        aiStack_758[uVar3 * 0x1c + 6] = 0x18;
        uVar3 = uVar4;
      } while (uVar4 < uVar6);
    }
    uStack_70 = *(undefined4 *)((int)pvStack_c + 8);
    piStack_38 = aiStack_758;
    auStack_80[0] = 1;
    uStack_6c = 2;
    uStack_68 = 0x6326;
    uStack_4c = 2;
    uStack_48 = 0x6327;
    uStack_50 = uStack_70;
    (**(code **)(**(int **)((int)pvStack_c + 0xc) + 8))(5,(int)pvStack_c + 0x1c83,0,auStack_80,0);
    FUN_006b3430(DAT_008075a8,*(uint *)((int)pvStack_c + 0x1c87));
    goto LAB_005aecc2;
  }
  uStack_570 = *(undefined4 *)((int)pvStack_c + 8);
  auStack_598[0] = 0;
  auStack_598[2] = 0x114;
  auStack_598[3] = 0x3f;
  auStack_598[4] = 0x1e4;
  auStack_598[5] = 399;
  auStack_598[6] = 0;
  auStack_598[7] = 0;
  uStack_56c = 2;
  uStack_568 = 0x8160;
  uStack_54c = 2;
  uStack_548 = 0x8161;
  uStack_52c = 2;
  uStack_528 = 0x8162;
  uStack_50c = 2;
  uStack_508 = 0x8163;
  if (DAT_0080734c != '\0') {
    uStack_c8 = 1;
  }
  uStack_460 = *(undefined4 *)((int)pvStack_c + 0x1a8c);
  uStack_45c = *(undefined4 *)((int)pvStack_c + 0x1a90);
  uStack_468 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = *(undefined4 *)((int)pvStack_c + 0x1b1d);
  uStack_458 = *(undefined4 *)((int)pvStack_c + 0x1a94);
  uStack_2dc = *(undefined4 *)((int)pvStack_c + 0x1b21);
  uStack_454 = *(undefined4 *)((int)pvStack_c + 0x1a98);
  uStack_2d8 = *(undefined4 *)((int)pvStack_c + 0x1b25);
  uStack_358 = 500;
  uStack_1d8 = 500;
  uStack_15c = *(undefined4 *)((int)pvStack_c + 0x1bae);
  uStack_2d4 = *(undefined4 *)((int)pvStack_c + 0x1b29);
  uStack_154 = *(undefined4 *)((int)pvStack_c + 0x1bb6);
  uStack_354 = 0x32;
  uStack_1d4 = 0x32;
  uStack_158 = *(undefined4 *)((int)pvStack_c + 0x1bb2);
  uStack_46c = 2;
  uStack_464 = 2;
  uStack_404 = 2;
  uStack_400 = 0x8164;
  uStack_2ec = 2;
  uStack_2e4 = 2;
  uStack_284 = 2;
  uStack_280 = 0x8165;
  uStack_16c = 3;
  uStack_168 = 1;
  uStack_160 = 0;
  uStack_150 = 0x157;
  uStack_14c = 0xe;
  uStack_114 = 2;
  uStack_110 = 0x8166;
  uStack_550 = uStack_570;
  uStack_530 = uStack_570;
  uStack_510 = uStack_570;
  uStack_408 = uStack_570;
  uStack_288 = uStack_570;
  uStack_118 = uStack_570;
  (**(code **)(**(int **)((int)pvStack_c + 0xc) + 8))(7,(int)pvStack_c + 0x1a6c,0,auStack_598,0);
  if (*(uint *)((int)pvStack_c + 0x1a74) != 0xffffffff) {
    FUN_006b34d0(*(uint **)((int)pvStack_c + 0x1ab8),*(uint *)((int)pvStack_c + 0x1a74),0xfffffffe,
                 *(uint *)((int)pvStack_c + 0x1a8c),*(uint *)((int)pvStack_c + 0x1a90));
  }
  if (*(uint *)((int)pvStack_c + 0x1b05) != 0xffffffff) {
    FUN_006b34d0(*(uint **)((int)pvStack_c + 0x1b49),*(uint *)((int)pvStack_c + 0x1b05),0xfffffffe,
                 *(uint *)((int)pvStack_c + 0x1b1d),*(uint *)((int)pvStack_c + 0x1b21));
  }
  if (*(uint *)((int)pvStack_c + 0x1b96) != 0xffffffff) {
    FUN_006b34d0(*(uint **)((int)pvStack_c + 0x1bda),*(uint *)((int)pvStack_c + 0x1b96),0xfffffffe,
                 *(uint *)((int)pvStack_c + 0x1bae),*(uint *)((int)pvStack_c + 0x1bb2));
  }
LAB_005aef44:
  if ((*(char *)((int)pvStack_c + 0x20b4) == '\0') || (param_1 != '\0')) {
    if (*(int *)(DAT_0081176c + 0x389) != 0) {
      *(undefined4 *)((int)pvStack_c + 0x2d) = 0x20;
      *(undefined4 *)((int)pvStack_c + 0x31) = 0;
      FUN_006e6080(pvStack_c,2,*(undefined4 *)(DAT_0081176c + 0x389),
                   (undefined4 *)((int)pvStack_c + 0x1d));
    }
  }
  else {
    thunk_FUN_005ddc70();
  }
  if ((*(char *)((int)pvStack_c + 0x20b7) != '\0') && (param_1 == '\0')) {
    thunk_FUN_005de270();
    puVar9 = auStack_fe4;
    for (iVar2 = 0x223; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    auStack_fe4[0] = 1;
    auStack_fe4[1] = 9;
    auStack_fe4[2] = *(undefined4 *)(DAT_0081176c + 0x34);
    auStack_fe4[3] = 0xcb;
    auStack_fe4[4] = 0x23f;
    auStack_fe4[5] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 4);
    uStack_fcc = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 8);
    uStack_fc8 = 0x104;
    uStack_fc4 = *(undefined4 *)(DAT_0081176c + 0x686);
    piVar8 = *(int **)((int)pvStack_c + 0xc);
    uStack_780 = 0x100;
    iStack_f98 = piVar8[5];
    uStack_f90 = 0xc0a0;
    uStack_f94 = 0;
    iStack_f58 = piVar8[5];
    uStack_f54 = 0;
    uStack_f50 = 0xc0a2;
    (**(code **)(*piVar8 + 8))(6,DAT_0081176c + 0x54c,0,auStack_fe4,0);
    FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
  }
  iVar2 = *(int *)((int)pvStack_c + 0x1a5b);
  if (*(int *)(iVar2 + 0x2e6) != 0) {
    puVar9 = &uStack_28;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    uStack_1c = 1;
    uStack_1e = 1;
    uStack_24 = 1;
    thunk_FUN_005b9010(*(void **)(iVar2 + 0x2e6),(int)&uStack_28);
  }
  if (param_1 != '\0') {
    thunk_FUN_00540dc0(1,*(undefined4 *)((int)pvStack_c + 8),2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  }
  DAT_00858df8 = (undefined4 *)uStack_c4;
  return;
}

