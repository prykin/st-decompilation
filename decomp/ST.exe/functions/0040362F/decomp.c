
void thunk_FUN_005bba90(char param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_dd0 [19];
  undefined4 uStack_d84;
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  uint auStack_544 [7];
  undefined4 uStack_528;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 auStack_6c [16];
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  void *pvStack_10;
  uint uStack_c;
  char cStack_5;
  
  puVar4 = auStack_544;
  for (iVar3 = 0x135; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar5 = auStack_dd0;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = &uStack_70;
  iVar3 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    iVar2 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0x24d,0,iVar3,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7ccd28,0x24d);
    return;
  }
  cStack_5 = *(char *)((int)pvStack_10 + 0x1a5f);
  if (cStack_5 == '\0') {
    if (*(int *)(DAT_0081176c + 0x68a) != 0) {
      uStack_c = *(uint *)(*(int *)(DAT_0081176c + 0x68a) + 4);
      goto LAB_005bbb22;
    }
  }
  else if (*(int *)(DAT_0081176c + 0x68e) != 0) {
    uStack_c = *(uint *)(*(int *)(DAT_0081176c + 0x68e) + 4);
    goto LAB_005bbb22;
  }
  uStack_c = 0;
LAB_005bbb22:
  auStack_544[6] = ((int)uStack_c < 0) - 1 & uStack_c;
  if (param_1 == '\0') {
    if (cStack_5 == '\0') {
      uStack_d84 = *(undefined4 *)((int)pvStack_10 + 8);
      auStack_dd0[0] = 0;
      auStack_dd0[1] = 9;
      auStack_dd0[2] = *(undefined4 *)(DAT_0081176c + 0x30);
      auStack_dd0[8] = *(undefined4 *)((int)pvStack_10 + 0x1c92);
      auStack_dd0[3] = 0x7d;
      auStack_dd0[4] = 0x1af;
      auStack_dd0[5] = 0x226;
      auStack_dd0[6] = 0x14;
      auStack_dd0[7] = 0x104;
      uStack_d80 = 2;
      uStack_d7c = 0x631f;
      (**(code **)(**(int **)((int)pvStack_10 + 0xc) + 8))
                (6,(int)pvStack_10 + 0x1c86,0,auStack_dd0,0);
      *(undefined4 *)((int)pvStack_10 + 0x2d) = 0x20;
      *(undefined4 *)((int)pvStack_10 + 0x31) = 1;
      FUN_006e6080(pvStack_10,2,*(undefined4 *)((int)pvStack_10 + 0x1a73),
                   (undefined4 *)((int)pvStack_10 + 0x1d));
    }
    if (*(int *)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6) != 0) {
      puVar5 = &uStack_2c;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0;
      uStack_2c._2_2_ = (-(ushort)(auStack_544[6] != 0) & 2) - 1;
      uStack_1e = 1;
      uStack_20 = 1;
      uStack_22 = 1;
      uStack_28 = 1;
      uStack_2c._0_2_ = 1;
      thunk_FUN_005b9010(*(void **)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6),(int)&uStack_2c);
    }
  }
  else {
    uStack_51c = *(undefined4 *)((int)pvStack_10 + 8);
    auStack_544[0] = 0;
    auStack_544[2] = 0x7a;
    auStack_544[3] = 0x67;
    auStack_544[4] = 0x208;
    auStack_544[5] = 0x143;
    uStack_528 = 0;
    uStack_518 = 2;
    uStack_514 = 0x8160;
    uStack_4f8 = 2;
    uStack_4f4 = 0x8161;
    uStack_4d8 = 2;
    uStack_4d4 = 0x8162;
    uStack_4b8 = 2;
    uStack_4b4 = 0x8163;
    if (DAT_0080734c != '\0') {
      uStack_74 = 1;
    }
    uStack_408 = *(undefined4 *)((int)pvStack_10 + 0x1a97);
    uStack_40c = *(undefined4 *)((int)pvStack_10 + 0x1a93);
    uStack_400 = *(undefined4 *)((int)pvStack_10 + 0x1a9f);
    uStack_28c = *(undefined4 *)((int)pvStack_10 + 0x1b24);
    uStack_288 = *(undefined4 *)((int)pvStack_10 + 0x1b28);
    uStack_284 = *(undefined4 *)((int)pvStack_10 + 0x1b2c);
    uStack_404 = *(undefined4 *)((int)pvStack_10 + 0x1a9b);
    uStack_280 = *(undefined4 *)((int)pvStack_10 + 0x1b30);
    uStack_100 = *(undefined4 *)((int)pvStack_10 + 0x1bbd);
    uStack_300 = 0x32;
    uStack_180 = 0x32;
    uStack_108 = *(undefined4 *)((int)pvStack_10 + 0x1bb5);
    uStack_418 = 2;
    uStack_414 = 0;
    uStack_410 = 2;
    uStack_304 = 500;
    uStack_3b0 = 2;
    uStack_3ac = 0x8164;
    uStack_298 = 2;
    uStack_294 = 0;
    uStack_290 = 2;
    uStack_184 = 500;
    uStack_230 = 2;
    uStack_22c = 0x8165;
    uStack_118 = 3;
    uStack_114 = 1;
    uStack_10c = 0;
    uStack_104 = 0x8a;
    uStack_fc = 0xe6;
    uStack_f8 = 0xe;
    uStack_c0 = 2;
    uStack_bc = 0x8166;
    uStack_4fc = uStack_51c;
    uStack_4dc = uStack_51c;
    uStack_4bc = uStack_51c;
    uStack_3b4 = uStack_51c;
    uStack_234 = uStack_51c;
    uStack_c4 = uStack_51c;
    (**(code **)(**(int **)((int)pvStack_10 + 0xc) + 8))(7,(int)pvStack_10 + 0x1a73,0,auStack_544,0)
    ;
  }
  *(undefined4 *)((int)pvStack_10 + 0x31) = 0;
  puVar5 = (undefined4 *)((int)pvStack_10 + 0x1d);
  *(undefined4 *)((int)pvStack_10 + 0x2d) = 0x20;
  FUN_006e6080(pvStack_10,2,*(undefined4 *)((int)pvStack_10 + 0x1a73),puVar5);
  *(uint *)((int)pvStack_10 + 0x31) = ((int)uStack_c < 1) - 1 & uStack_c;
  *(undefined4 *)((int)pvStack_10 + 0x2d) = 0x28;
  FUN_006e6080(pvStack_10,2,*(undefined4 *)((int)pvStack_10 + 0x1a73),puVar5);
  if (0 < (int)uStack_c) {
    *(undefined4 *)((int)pvStack_10 + 0x2d) = 0x20;
    *(undefined4 *)((int)pvStack_10 + 0x31) = 1;
    FUN_006e6080(pvStack_10,2,*(undefined4 *)((int)pvStack_10 + 0x1a73),puVar5);
  }
  DAT_00858df8 = (undefined4 *)uStack_70;
  return;
}

