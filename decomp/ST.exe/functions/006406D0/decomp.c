
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006406d0(int param_1)

{
  void *this;
  char cVar1;
  short sVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  int iVar16;
  byte *pbVar17;
  void *unaff_EDI;
  undefined4 *puVar18;
  char *pcVar19;
  char *pcVar20;
  byte *pbVar21;
  bool bVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 local_28c;
  undefined4 local_288 [16];
  undefined4 local_248 [2];
  undefined1 local_240 [8];
  int local_238;
  undefined4 local_234;
  undefined4 local_230;
  int *local_22c;
  int local_220 [5];
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_204;
  undefined2 local_202;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined4 local_1f8;
  undefined1 local_1f4;
  int local_1f3;
  undefined2 local_1ef;
  int local_1ed;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_198;
  int local_194;
  int local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  int local_158 [5];
  undefined4 local_144;
  undefined4 local_140;
  int local_13c [5];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118 [16];
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  int *local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_a8;
  undefined4 local_a4;
  short local_a0 [2];
  int local_9c;
  short local_98 [2];
  int local_94;
  uint local_90;
  short local_8c [2];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  byte local_74 [20];
  byte local_60 [20];
  byte *local_4c;
  byte local_48 [20];
  int local_34;
  int *local_30;
  byte local_2c [20];
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_28c = DAT_00858df8;
  DAT_00858df8 = &local_28c;
  iVar9 = __setjmp3(local_288,0,unaff_EDI,unaff_ESI);
  if (iVar9 != 0) {
    DAT_00858df8 = (undefined4 *)local_28c;
    iVar10 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x350,0,iVar9,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar9,0,0x7d25c0,0x351);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    uVar14 = (*pcVar4)();
    return uVar14;
  }
  thunk_FUN_0041e530(param_1);
  uVar15 = *(uint *)(param_1 + 0x10);
  if (3 < uVar15) {
    if (uVar15 != 0x108) {
      if (uVar15 != 0x10f) {
        DAT_00858df8 = (undefined4 *)local_28c;
        return 0;
      }
      local_4c = (byte *)thunk_FUN_00645420((int *)&local_90);
      thunk_FUN_0054d430(DAT_00802a38,local_c8[6],local_4c,local_90);
      FUN_006ab060(&local_4c);
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    iVar9 = *(int *)((int)local_c8 + 0x259);
    if (iVar9 == 0x9f) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xa0) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xbf) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xa3) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xa4) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xae) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xa5) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xa1) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xb4) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xb6) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xb7) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xb9) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xad) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar9 == 0xba) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (*(int *)((int)local_c8 + 0x23d) != 1) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    local_14 = (int)*(short *)((int)local_c8 + 0x24f);
    local_164 = (float)(int)*(short *)((int)local_c8 + 0x24b) * _DAT_007904f8 * _DAT_007904f0;
    local_160 = (float)(int)*(short *)((int)local_c8 + 0x24d) * _DAT_007904f8 * _DAT_007904f0;
    local_15c = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    FUN_006e25d0(*(void **)((int)local_c8 + 0x211),&local_1b8);
    local_14 = (int)*(short *)((int)local_c8 + 0x255);
    local_170 = (float)(int)*(short *)((int)local_c8 + 0x251) * _DAT_007904f8 * _DAT_007904f0;
    local_16c = (float)(int)*(short *)((int)local_c8 + 0x253) * _DAT_007904f8 * _DAT_007904f0;
    local_168 = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    FUN_006e25d0(*(void **)((int)local_c8 + 0x211),&local_1c8);
    sVar8 = (**(code **)(*local_c8 + 0x14))
                      (local_1b8 >> 0x10,local_1b4 >> 0x10,local_1b0 >> 0x10,local_1c8 >> 0x10,
                       local_1c4 >> 0x10,local_1c0 >> 0x10);
    thunk_FUN_004abce0((void *)((int)local_c8 + 0x1d5),0,*(int *)(&DAT_007d2138 + sVar8 * 4),
                       *(int *)(&DAT_007d2138 + sVar8 * 4),'\0');
    thunk_FUN_004ac1a0(0,DAT_00802a38[0x39]);
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  if (uVar15 == 3) {
    thunk_FUN_00430960(*(short *)((int)local_c8 + 0x26e),(int)local_c8);
    FUN_006ae110(*(byte **)((int)local_c8 + 0x241));
    thunk_FUN_004ad310((int)local_c8 + 0x1d5);
    thunk_FUN_0062c2a0((int *)((int)local_c8 + 0x27e));
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  if (uVar15 != 0) {
    if (uVar15 != 2) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    iVar9 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar9 + 0xc) != 1) {
      if (*(int *)(iVar9 + 0xc) != 2) {
        DAT_00858df8 = (undefined4 *)local_28c;
        return 0;
      }
      local_158[0] = FUN_006aac70(0x44);
      iVar10 = 0;
      do {
        *(int **)(iVar10 + local_158[0]) = DAT_00806774;
        iVar10 = iVar10 + 4;
      } while (iVar10 < 0x44);
      *(int **)(local_158[0] + 8) = DAT_00806764;
      local_158[4] = DAT_008032b8;
      local_158[1] = 0;
      local_158[2] = 0;
      local_158[3] = 0;
      local_144 = 0x10;
      local_140 = 0;
      thunk_FUN_004adba0(local_158,(undefined4 *)(*(int *)(iVar9 + 0x70) + iVar9));
      FUN_006ab060(local_158);
      thunk_FUN_00422210((undefined4 *)(*(int *)(iVar9 + 0x78) + iVar9));
      thunk_FUN_006456c0(iVar9);
      thunk_FUN_00430470((int)local_c8,*(short *)((int)local_c8 + 0x26e));
      if (*(int *)((int)local_c8 + 0x259) != 0x9a) {
        DAT_00858df8 = (undefined4 *)local_28c;
        return 0;
      }
      piVar11 = thunk_FUN_0062bbc0((int)*(short *)((int)local_c8 + 0x24b),
                                   (int)*(short *)((int)local_c8 + 0x24d),
                                   (int)*(short *)((int)local_c8 + 0x24f),
                                   (int)*(short *)((int)local_c8 + 0x251),
                                   (int)*(short *)((int)local_c8 + 0x253),
                                   (int)*(short *)((int)local_c8 + 0x255),0x9a,
                                   (int)*(short *)((int)local_c8 + 0x231),0x14,400);
      *(int **)((int)local_c8 + 0x27e) = piVar11;
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    puVar13 = (undefined4 *)(iVar9 + 0x14);
    puVar18 = (undefined4 *)((int)local_c8 + 0x245);
    for (iVar10 = 0x11; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar18 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
    }
    sVar8 = *(short *)((int)local_c8 + 0x24b);
    if ((((sVar8 < 0) || (sVar2 = *(short *)((int)local_c8 + 0x24d), sVar2 < 0)) ||
        (*(short *)((int)local_c8 + 0x24f) < 0)) ||
       ((DAT_007fb240 <=
         (short)((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)
                ) ||
        (DAT_007fb242 <=
         (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)
                ))))) {
LAB_00642c6e:
      thunk_FUN_006457e0((int)local_c8);
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    *(undefined1 *)((int)local_c8 + 0x27d) = 0;
    *(undefined4 *)((int)local_c8 + 0x27e) = 0;
    puVar12 = FUN_006ae290((uint *)0x0,0,8,1);
    *(uint **)((int)local_c8 + 0x241) = puVar12;
    local_c8[0x9c] = 1;
    local_c8[0x9e] = -1;
    *(undefined1 *)(local_c8 + 0x9f) = 0;
    *(undefined4 *)((int)local_c8 + 0x23d) = 1;
    iVar9 = *(int *)((int)local_c8 + 0x259);
    switch(iVar9) {
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0xac:
    case 0xb4:
      if (DAT_007fa174 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = thunk_FUN_00430750(iVar9);
      }
      thunk_FUN_00417ff0(local_c8,uVar5);
      uVar15 = thunk_FUN_004406c0((char)local_c8[9]);
      if ((uVar15 & 0xff) == 1) {
        iVar9 = thunk_FUN_004e60d0(local_c8[9],0x99);
        if (iVar9 != 0) {
          *(byte *)((int)local_c8 + 0x61) =
               (*(byte *)((int)local_c8 + 0x61) >> 1) + *(byte *)((int)local_c8 + 0x61);
        }
      }
      else if (((uVar15 & 0xff) == 2) && (iVar9 = thunk_FUN_004e60d0(local_c8[9],0x96), iVar9 != 0))
      {
        *(byte *)((int)local_c8 + 0x61) =
             (*(byte *)((int)local_c8 + 0x61) >> 1) + *(byte *)((int)local_c8 + 0x61);
      }
      break;
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xad:
    case 0xae:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbf:
      if (DAT_007fa174 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = thunk_FUN_00430750(iVar9);
      }
      thunk_FUN_00417ff0(local_c8,uVar5);
    }
    iVar9 = thunk_FUN_00415b30(local_c8,*(short *)((int)local_c8 + 0x24b),
                               *(short *)((int)local_c8 + 0x24d),*(short *)((int)local_c8 + 0x24f),
                               *(short *)((int)local_c8 + 0x251),*(short *)((int)local_c8 + 0x253),
                               *(short *)((int)local_c8 + 0x255),*(byte *)((int)local_c8 + 0x61));
    uVar7 = extraout_var;
    if (iVar9 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x8a);
      uVar7 = extraout_var_00;
    }
    local_c8[0x1a] = local_c8[0x1a] + 1;
    uVar7 = (**(code **)(*local_c8 + 0x10))
                      (CONCAT22(uVar7,*(undefined2 *)((int)local_c8 + 0x24b)),
                       *(undefined2 *)((int)local_c8 + 0x24d),
                       CONCAT22(uVar7,*(undefined2 *)((int)local_c8 + 0x24f)),
                       *(undefined2 *)((int)local_c8 + 0x251),
                       CONCAT22(uVar7,*(undefined2 *)((int)local_c8 + 0x253)),
                       *(undefined2 *)((int)local_c8 + 0x255));
    *(undefined2 *)(local_c8 + 0x1b) = uVar7;
    *(undefined2 *)(local_c8 + 0x9a) = *(undefined2 *)((int)local_c8 + 0x41);
    *(undefined2 *)((int)local_c8 + 0x26a) = *(undefined2 *)((int)local_c8 + 0x43);
    *(undefined2 *)(local_c8 + 0x9b) = *(undefined2 *)((int)local_c8 + 0x45);
    switch(*(undefined4 *)((int)local_c8 + 0x259)) {
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0xb4:
      *(undefined2 *)((int)local_c8 + 0x231) = 0x32;
      break;
    case 0x99:
    case 0xad:
      *(undefined2 *)((int)local_c8 + 0x231) = 0xf;
      break;
    case 0x9d:
    case 0x9e:
    case 0xb6:
    case 0xba:
      *(undefined2 *)((int)local_c8 + 0x231) = 0x1e;
      break;
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa3:
    case 0xa4:
    case 0xae:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xbf:
      *(undefined2 *)((int)local_c8 + 0x231) = 0;
      break;
    default:
      goto switchD_00640ad9_caseD_a2;
    case 0xa5:
      *(undefined2 *)((int)local_c8 + 0x231) = 0x3c;
      break;
    case 0xac:
      *(undefined2 *)((int)local_c8 + 0x231) = 0x28;
    }
    *(undefined2 *)((int)local_c8 + 0x233) = 0;
switchD_00640ad9_caseD_a2:
    puVar13 = (undefined4 *)
              thunk_FUN_0041dc40(local_248,*(undefined4 *)((int)local_c8 + 0x231),
                                 *(undefined2 *)((int)local_c8 + 0x235),(short)local_c8[0x1b]);
    uVar14 = *puVar13;
    *(undefined4 *)((int)local_c8 + 0x237) = uVar14;
    *(undefined2 *)((int)local_c8 + 0x23b) = *(undefined2 *)(puVar13 + 1);
    piVar11 = *(int **)((int)local_c8 + 0x259);
    if (piVar11 == (int *)0x9a) {
      piVar11 = thunk_FUN_0062bbc0((int)*(short *)((int)local_c8 + 0x24b),
                                   (int)*(short *)((int)local_c8 + 0x24d),
                                   (int)*(short *)((int)local_c8 + 0x24f),
                                   (int)*(short *)((int)local_c8 + 0x251),
                                   (int)*(short *)((int)local_c8 + 0x253),
                                   (int)*(short *)((int)local_c8 + 0x255),0x9a,
                                   (int)*(short *)((int)local_c8 + 0x231),0x14,400);
      *(int **)((int)local_c8 + 0x27e) = piVar11;
      uVar14 = extraout_EDX;
    }
    if (*(int *)((int)local_c8 + 0x259) == 0x97) {
      local_4c = (byte *)thunk_FUN_0042b620(CONCAT31((int3)((uint)piVar11 >> 8),(char)local_c8[9]),
                                            CONCAT22((short)((uint)uVar14 >> 0x10),
                                                     *(undefined2 *)((int)local_c8 + 0x262)),1);
      if ((local_4c != (byte *)0x0) &&
         (iVar9 = (**(code **)(*(int *)local_4c + 0x2c))(), iVar9 == 0x3f)) {
        *(undefined1 *)(local_c8 + 0xa2) = 1;
      }
    }
    local_60[0] = 0;
    local_48[0] = 0;
    local_2c[0] = 0;
    local_74[0] = 0;
    switch(*(undefined4 *)((int)local_c8 + 0x259)) {
    case 0x96:
    case 0xb4:
      pcVar19 = s_atorsm_007d25b8;
      break;
    case 0x97:
      pcVar19 = s_atorme_007d25b0;
      break;
    case 0x98:
      pcVar19 = s_atorla_007d25a8;
      break;
    case 0x99:
      pcVar19 = s_acas0_007d2580;
      break;
    case 0x9a:
      pcVar19 = s_aemtor_007d25a0;
      break;
    case 0x9b:
    case 0x9d:
      pcVar19 = s_alray1_007d2590;
      break;
    case 0x9c:
      pcVar19 = s_alray0_007d2598;
      break;
    case 0x9e:
      pcVar19 = s_alray2_007d2588;
      break;
    case 0x9f:
    case 0xa3:
    case 0xa4:
      pcVar19 = &DAT_007d2578;
      break;
    case 0xa0:
    case 0xbf:
      pcVar19 = &DAT_007d251c;
      break;
    case 0xa1:
      pcVar19 = s_pr_torp_007d256c;
      break;
    default:
      goto switchD_00640c2d_caseD_a2;
    case 0xa5:
      pcVar19 = s_satlas_007d255c;
      break;
    case 0xac:
      pcVar19 = s_aspltor_007d2550;
      break;
    case 0xad:
      pcVar19 = s_neuro_007d252c;
      break;
    case 0xae:
      pcVar19 = s_agcan_007d2564;
      break;
    case 0xb6:
    case 0xba:
      pcVar19 = s_eshell_007d2524;
      break;
    case 0xb7:
      pcVar19 = s_ionbomb_007d253c;
      break;
    case 0xb8:
      pcVar19 = s_biaacc_007d2548;
      break;
    case 0xb9:
      pcVar19 = &DAT_007d2534;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_60;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
switchD_00640c2d_caseD_a2:
    iVar9 = thunk_FUN_004ab880(0,DAT_00806774,local_60,0x1d);
    if (iVar9 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0xe1);
    }
    switch(*(undefined4 *)((int)local_c8 + 0x259)) {
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa3:
    case 0xa4:
    case 0xae:
    case 0xbf:
      iVar10 = 9;
      iVar9 = 0;
      break;
    default:
      local_10 = (int)*(short *)((int)local_c8 + 0x24f);
      local_17c = (float)(int)*(short *)((int)local_c8 + 0x24b) * _DAT_007904f8 * _DAT_007904f0;
      local_178 = (float)(int)*(short *)((int)local_c8 + 0x24d) * _DAT_007904f8 * _DAT_007904f0;
      local_174 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(*(void **)((int)local_c8 + 0x211),&local_198);
      local_10 = (int)*(short *)((int)local_c8 + 0x255);
      local_188 = (float)(int)*(short *)((int)local_c8 + 0x251) * _DAT_007904f8 * _DAT_007904f0;
      local_184 = (float)(int)*(short *)((int)local_c8 + 0x253) * _DAT_007904f8 * _DAT_007904f0;
      local_180 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(*(void **)((int)local_c8 + 0x211),&local_1a8);
      sVar8 = (**(code **)(*local_c8 + 0x14))
                        (local_198 >> 0x10,local_194 >> 0x10,local_190 >> 0x10,local_1a8 >> 0x10,
                         local_1a4 >> 0x10,local_1a0 >> 0x10);
      iVar9 = *(int *)(&DAT_007d2138 + sVar8 * 4);
      iVar10 = iVar9;
      break;
    case 0xa5:
      iVar10 = 0;
      iVar9 = 0;
    }
    thunk_FUN_004abce0((void *)((int)local_c8 + 0x1d5),0,iVar9,iVar10,'\0');
    thunk_FUN_004ac1a0(0,DAT_00802a38[0x39]);
    uVar14 = thunk_FUN_00430470((int)local_c8,-1);
    *(short *)((int)local_c8 + 0x26e) = (short)uVar14;
    if (*(int *)((int)local_c8 + 0x259) != 0xa3) {
      iVar9 = (int)*(short *)((int)local_c8 + 0x47);
      iVar10 = (int)*(short *)((int)local_c8 + 0x49);
      if ((((iVar9 < 0) || (iVar10 < 0)) || (DAT_007fb240 <= iVar9)) || (DAT_007fb242 <= iVar10)) {
        bVar22 = false;
      }
      else {
        bVar22 = *(char *)(DAT_007fb240 * iVar10 + DAT_007fb26c + iVar9) != '\0';
      }
      if (bVar22) {
        if ((&DAT_007fb24c)[local_c8[9]] == 0) {
          bVar22 = false;
        }
        else {
          bVar22 = *(char *)(DAT_007fb240 * iVar10 + (&DAT_007fb24c)[local_c8[9]] + iVar9) != '\0';
        }
        if (bVar22) {
          *(undefined1 *)((int)local_c8 + 0x286) = 1;
        }
      }
    }
    switch(*(undefined4 *)((int)local_c8 + 0x259)) {
    case 0x96:
      local_c = 0x44f;
      break;
    case 0x97:
      local_c = 0x451;
      break;
    case 0x98:
      local_c = 0x453;
      break;
    case 0x99:
      local_c = 0x455;
      break;
    case 0x9a:
      local_c = 0x457;
      break;
    case 0x9b:
      local_c = 0x491;
      break;
    case 0x9c:
      local_c = 0x46b;
      break;
    case 0x9d:
      local_c = 0x46d;
      break;
    case 0x9e:
      local_c = 0x46f;
      break;
    case 0x9f:
      local_c = 0x465;
      break;
    case 0xa0:
      local_c = 0x467;
      break;
    case 0xa1:
      local_c = 0x469;
      break;
    case 0xa3:
      local_c = 0x48f;
      break;
    case 0xa4:
      local_c = 0x493;
      break;
    case 0xa5:
      local_c = 0x485;
      break;
    case 0xac:
      local_c = 0x473;
      break;
    case 0xad:
      local_c = 0x481;
      break;
    case 0xae:
      local_c = 0x48d;
      break;
    case 0xb4:
      local_c = 0x471;
      break;
    case 0xb6:
      local_c = 0x479;
      break;
    case 0xb7:
      local_c = 0x47b;
      break;
    case 0xb8:
      local_c = 0x47f;
      break;
    case 0xb9:
      local_c = 0x47d;
      break;
    case 0xba:
      local_c = 0x483;
      break;
    case 0xbf:
      local_c = 0x487;
    }
    goto switchD_00640fbd_caseD_a2;
  }
  if (*(int *)((int)local_c8 + 0x23d) != 1) {
    bVar6 = (char)local_c8[0x9f] + 1;
    *(byte *)(local_c8 + 0x9f) = bVar6;
    if ((*(byte *)((int)local_c8 + 0x282) != 0) && (*(byte *)((int)local_c8 + 0x283) <= bVar6)) {
      if (*(byte *)((int)local_c8 + 0x283) == bVar6) {
        thunk_FUN_004ac1a0(2,DAT_00802a38[0x39]);
      }
      else {
        bVar6 = (char)local_c8[0xa1] + 1;
        *(byte *)(local_c8 + 0xa1) = bVar6;
        if (bVar6 == *(byte *)((int)local_c8 + 0x282)) {
          thunk_FUN_004ac410(2);
          *(undefined1 *)((int)local_c8 + 0x282) = 0;
        }
        else {
          thunk_FUN_004abe40((void *)((int)local_c8 + 0x1d5),'\x02',(uint)bVar6);
          thunk_FUN_004ac040('\x02');
        }
      }
    }
    if ((char)local_c8[0x9f] == '\x05') {
      if ((char)local_c8[0xa2] == '\x02') {
        uVar15 = thunk_FUN_00645d30(local_c8[9],*(undefined4 *)((int)local_c8 + 0x259));
        *(char *)((int)local_c8 + 0x25d) = (char)uVar15;
        local_c4 = *(int *)(&DAT_007e6468 +
                           (*(int *)((int)local_c8 + 0x259) * 5 + -0x2ee + (uVar15 & 0xff)) * 4);
        thunk_FUN_006383e0((int)*(short *)((int)local_c8 + 0x41),
                           (int)*(short *)((int)local_c8 + 0x43),
                           (int)*(short *)((int)local_c8 + 0x45),local_c8[9],
                           (short)*(undefined4 *)((int)local_c8 + 0x25e),
                           *(undefined2 *)((int)local_c8 + 0x262),*(int *)((int)local_c8 + 0x259),
                           local_c4 / 2,1);
      }
      if (local_c8[0x9c] == 1) {
        iVar9 = FUN_006e62d0(DAT_00802a38,local_c8[0x9d],(int *)&local_30);
        if (iVar9 == -4) {
          thunk_FUN_006457e0((int)local_c8);
          DAT_00858df8 = (undefined4 *)local_28c;
          return 0;
        }
        uVar15 = thunk_FUN_00645d30(local_c8[9],*(undefined4 *)((int)local_c8 + 0x259));
        *(char *)((int)local_c8 + 0x25d) = (char)uVar15;
        iVar9 = *(int *)((int)local_c8 + 0x259);
        if (iVar9 == 0x9a) {
          iVar9 = 0;
          uVar15 = thunk_FUN_004ad650((int)local_30 + 0x1d5);
          thunk_FUN_00637e60(uVar15,iVar9);
          local_b4 = *(undefined4 *)(&DAT_007d21f8 + (uint)*(byte *)((int)local_c8 + 0x25d) * 4);
        }
        else if (iVar9 == 0xad) {
          local_b4 = *(undefined4 *)(&DAT_007d220c + (uVar15 & 0xff) * 4);
        }
        else if (iVar9 == 0xa1) {
          local_b4 = *(undefined4 *)(&DAT_007d2220 + (uVar15 & 0xff) * 4);
        }
        else {
          local_b4 = 0;
        }
        local_bc = local_c8[9];
        local_b8 = *(undefined2 *)((int)local_c8 + 0x262);
        local_c0 = *(int *)((int)local_c8 + 0x259);
        local_b6 = *(undefined2 *)((int)local_c8 + 0x25e);
        local_c4 = *(int *)(&DAT_007e6468 +
                           (local_c0 * 5 + -0x2ee + (uint)*(byte *)((int)local_c8 + 0x25d)) * 4);
        local_b0 = 0;
        if (*(char *)((int)local_c8 + 0x285) == '\x01') {
          local_c4 = (int)(local_c4 + (local_c4 >> 0x1f & 3U)) >> 2;
        }
        iVar9 = (**(code **)(*local_30 + 0x2c))();
        if (iVar9 == 0x68) {
          uVar7 = *(undefined2 *)((int)local_c8 + 0x245);
          piVar11 = local_220;
          for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          local_220[0] = 0x15e;
          local_220[3] = 1;
          local_220[2] = 1;
          local_220[1] = local_30[9];
          local_208 = *(undefined2 *)((int)local_c8 + 0x249);
          local_20a = *(undefined2 *)((int)local_c8 + 0x247);
          local_1ef = *(undefined2 *)((int)local_30 + 0x32);
          local_1f3 = local_30[6];
          local_1f4 = *(undefined1 *)((int)local_c8 + 0x25d);
          local_20c = uVar7;
          iVar9 = thunk_FUN_004e60d0(local_30[9],0x7b);
          if (iVar9 == 0) {
            local_1ed = (int)(local_c4 + (local_c4 >> 0x1f & 3U)) >> 2;
          }
          else {
            local_1ed = local_c4 / 2;
          }
          local_202 = *(undefined2 *)((int)local_c8 + 0x45);
          local_204 = *(undefined2 *)((int)local_c8 + 0x43);
          local_1fc = (undefined2)local_c8[0xe];
          local_206 = *(undefined2 *)((int)local_c8 + 0x41);
          local_1fe = *(undefined2 *)((int)local_c8 + 0x36);
          local_200 = (undefined2)local_c8[0xd];
          local_1f8 = 1;
          local_1fa = 0;
          (**(code **)(*DAT_00802a38 + 8))(0x147,0,0,local_220,0);
        }
        local_22c = &local_c4;
        local_238 = local_30[2];
        local_234 = 2;
        local_230 = 0x110;
        (**(code **)(*DAT_00802a38 + 0x18))(local_240);
      }
    }
    iVar9 = thunk_FUN_004acd30((void *)((int)local_c8 + 0x1d5),'\0');
    if (iVar9 + -1 < (int)(uint)*(byte *)(local_c8 + 0x9f)) {
      thunk_FUN_004ac410(0);
    }
    iVar9 = thunk_FUN_004acd30((void *)((int)local_c8 + 0x1d5),'\0');
    if ((iVar9 + -1 < (int)(uint)*(byte *)(local_c8 + 0x9f)) &&
       (*(char *)((int)local_c8 + 0x282) == '\0')) goto LAB_00642c6e;
    goto LAB_00642c8b;
  }
  if (*(char *)((int)local_c8 + 0x27d) == '\0') goto LAB_00642c8b;
  local_80 = (int)*(short *)((int)local_c8 + 0x41);
  local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)((int)local_c8 + 0x49));
  sVar8 = *(short *)((int)local_c8 + 0x47);
  local_7c = (int)*(short *)((int)local_c8 + 0x43);
  local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)((int)local_c8 + 0x4b));
  local_78 = (int)*(short *)((int)local_c8 + 0x45);
  iVar9 = thunk_FUN_00415ed0(local_c8,&local_a4,&local_9c);
  if (iVar9 == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x15c);
  }
  if (((sVar8 == *(short *)((int)local_c8 + 0x47)) &&
      ((short)local_10 == *(short *)((int)local_c8 + 0x49))) &&
     ((short)local_84 == *(short *)((int)local_c8 + 0x4b))) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
  }
  local_34 = iVar10;
  if (iVar9 == 0) {
    if ((char)local_c8[0xa2] == '\0') {
      thunk_FUN_006443c0(local_c8,local_98,local_8c,local_a0);
      iVar9 = thunk_FUN_00415b30(local_c8,*(short *)((int)local_c8 + 0x41),
                                 *(short *)((int)local_c8 + 0x43),*(short *)((int)local_c8 + 0x45),
                                 local_98[0],local_8c[0],local_a0[0],*(byte *)((int)local_c8 + 0x61)
                                );
      if (iVar9 != 0) {
        FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x170);
      }
      *(undefined4 *)((int)local_c8 + 0x7a) = 0;
    }
    else {
      *(undefined1 *)(local_c8 + 0xa2) = 2;
      thunk_FUN_00638230(*(undefined4 *)((int)local_c8 + 0x1ed),5,
                         (int)*(short *)((int)local_c8 + 0x41),(int)*(short *)((int)local_c8 + 0x43)
                         ,(int)*(short *)((int)local_c8 + 0x45));
    }
  }
  if ((local_9c == 1) &&
     (((*(short *)((int)local_c8 + 0x47) < 0 ||
       (DAT_007fb240 + -1 < (int)*(short *)((int)local_c8 + 0x47))) ||
      ((*(short *)((int)local_c8 + 0x49) < 0 ||
       ((DAT_007fb242 + -1 < (int)*(short *)((int)local_c8 + 0x49) ||
        (DAT_007fb244 + -1 < (int)*(short *)((int)local_c8 + 0x4b))))))))) {
    thunk_FUN_006457e0((int)local_c8);
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  piVar11 = local_13c;
  for (iVar9 = 0x1c; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  thunk_FUN_00644410(local_c8,&local_18,&local_120,&local_11c,local_118);
  if (local_18 == 0) {
    if ((char)local_c8[0xa2] == '\x02') {
      local_18 = 1;
      local_c8[0x9c] = 0;
    }
  }
  else if ((char)local_c8[0xa2] != '\0') {
    *(undefined1 *)(local_c8 + 0xa2) = 0;
  }
  if ((iVar10 != 0) && (*(int *)((int)local_c8 + 0x259) != 0xa3)) {
    iVar10 = (int)*(short *)((int)local_c8 + 0x47);
    iVar9 = (int)*(short *)((int)local_c8 + 0x49);
    if ((iVar10 < 0) || (((iVar9 < 0 || (DAT_007fb240 <= iVar10)) || (DAT_007fb242 <= iVar9)))) {
      bVar22 = false;
    }
    else {
      bVar22 = *(char *)(DAT_007fb240 * iVar9 + DAT_007fb26c + iVar10) != '\0';
    }
    iVar16 = local_34;
    if (bVar22) {
      if ((&DAT_007fb24c)[local_c8[9]] == 0) {
        bVar22 = false;
      }
      else {
        bVar22 = *(char *)(DAT_007fb240 * iVar9 + (&DAT_007fb24c)[local_c8[9]] + iVar10) != '\0';
      }
      if ((!bVar22) || (*(char *)((int)local_c8 + 0x286) == '\0')) {
        local_18 = 1;
        local_c8[0x9c] = 0;
        iVar16 = 2;
      }
    }
    if (1 < iVar16) {
      if ((*(int *)((int)local_c8 + 0x259) == 0xad) &&
         (iVar9 = thunk_FUN_004e60d0(local_c8[9],0x7e), iVar9 != 0)) {
        iVar9 = 0x1389;
      }
      else {
        iVar9 = *(int *)(&DAT_007e6468 + (*(int *)((int)local_c8 + 0x259) + -0x96) * 0x14);
      }
      uVar15 = thunk_FUN_00497030((int)*(short *)((int)local_c8 + 0x47),
                                  (int)*(short *)((int)local_c8 + 0x49),local_c8[9],1,iVar9);
      if ((int)uVar15 < 0) {
        local_18 = 0;
      }
      else {
        thunk_FUN_00497850((int)(short)local_c8[0x9a],(int)*(short *)((int)local_c8 + 0x26a),
                           (int)(short)local_c8[0x9b],(int)*(short *)((int)local_c8 + 0x41),
                           (int)*(short *)((int)local_c8 + 0x43),
                           (int)*(short *)((int)local_c8 + 0x45),uVar15,&local_120,&local_11c,
                           local_118);
        thunk_FUN_00637ae0(local_120,local_11c,local_118[0]);
        local_18 = 2;
      }
    }
  }
  if (local_18 == 2) {
    thunk_FUN_006457e0((int)local_c8);
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  iVar10 = local_c8[0x9a];
  local_13c[4] = (int)(short)iVar10;
  local_128 = (int)*(short *)((int)local_c8 + 0x26a);
  local_124 = (int)(short)local_c8[0x9b];
  *(undefined2 *)(local_c8 + 0x9a) = (undefined2)local_120;
  *(undefined2 *)((int)local_c8 + 0x26a) = (undefined2)local_11c;
  *(undefined2 *)(local_c8 + 0x9b) = (undefined2)local_118[0];
  iVar9 = *(int *)((int)local_c8 + 0x259);
  if ((((((iVar9 == 0x9f) || (iVar9 == 0xa0)) || (iVar9 == 0xbf)) ||
       ((iVar9 == 0xa3 || (iVar9 == 0x9a)))) || (iVar9 == 0x9b)) ||
     (((iVar9 == 0x9c || (iVar9 == 0x9d)) ||
      ((iVar9 == 0x9e || ((iVar9 == 0xae || (iVar9 == 0xa5)))))))) goto LAB_0064190c;
  if (*(byte *)((int)local_c8 + 0x27d) < 9) {
    local_4c = (byte *)thunk_FUN_0042b620(CONCAT31((int3)((uint)iVar9 >> 8),(char)local_c8[9]),
                                          CONCAT22((short)iVar10 >> 0xf,
                                                   *(undefined2 *)((int)local_c8 + 0x262)),1);
    if ((local_4c == (byte *)0x0) || (*(char *)((int)local_c8 + 0x27d) == '\b')) {
      local_c8[0x99] = 0;
    }
    if (local_4c != (byte *)0x0) {
      local_d8 = thunk_FUN_004ad650((int)(local_4c + 0x1d5));
    }
  }
  local_d4 = local_c8[0x99];
  bVar22 = false;
  switch(*(int *)((int)local_c8 + 0x259)) {
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0xa5:
  case 0xb4:
  case 0xb8:
    local_13c[0] = 1;
    break;
  default:
    goto switchD_006415e9_caseD_9f;
  case 0xa1:
    local_13c[0] = 7;
    local_13c[3] = 0xffffffff;
    break;
  case 0xa4:
    local_13c[0] = 2;
    local_13c[1] = 1;
    bVar22 = true;
    local_d0 = 1;
    goto switchD_006415e9_caseD_9f;
  case 0xac:
  case 0xad:
    local_13c[0] = 6;
  }
  local_13c[1] = 1;
  bVar22 = true;
switchD_006415e9_caseD_9f:
  if ((*(char *)((int)local_c8 + 0x27d) != '\0') && (bVar22)) {
    if (*(int *)((int)local_c8 + 0x259) == 0xa1) {
      iVar9 = FUN_006acf0d(local_80,local_7c,local_78,(int)*(short *)((int)local_c8 + 0x41),
                           (int)*(short *)((int)local_c8 + 0x43),
                           (int)*(short *)((int)local_c8 + 0x45));
      if (iVar9 == 0) {
        thunk_FUN_00556760(DAT_00802a7c,7,1,0,(int)*(short *)((int)local_c8 + 0x41),
                           (int)*(short *)((int)local_c8 + 0x43),
                           (int)*(short *)((int)local_c8 + 0x45),0,0,0,0,0,0,-1,0,0);
      }
      else {
        local_94 = ((*(short *)((int)local_c8 + 0x41) - local_80) * 10000) / iVar9;
        iVar16 = local_94 * iVar9;
        local_10 = ((*(short *)((int)local_c8 + 0x43) - local_7c) * 10000) / iVar9;
        local_14 = local_10 * iVar9;
        local_a8 = local_10 / 10000;
        local_cc = iVar16 / 40000 + local_a8 + local_80;
        local_84 = local_94 / 10000;
        local_34 = local_14 / 40000 + local_84 + local_7c;
        uVar15 = local_c8[7] * 0x41c64e6d + 0x3039;
        local_c8[7] = uVar15;
        iVar9 = (((*(short *)((int)local_c8 + 0x45) - local_78) * 10000) / iVar9) * iVar9;
        iVar10 = (uVar15 >> 0x10) % 0xb + 5;
        local_88 = iVar9;
        thunk_FUN_00556760(DAT_00802a7c,7,1,0,local_cc,local_34,iVar9 / 40000 + local_78,
                           (short)((iVar10 * local_10) / 10000),(short)((iVar10 * local_94) / 10000)
                           ,0,0,0,0,-1,0,0);
        local_34 = (local_14 * 3) / 40000 + local_84 + local_7c;
        uVar15 = local_c8[7] * 0x41c64e6d + 0x3039;
        local_c8[7] = uVar15;
        iVar10 = (uVar15 >> 0x10) % 0xb + 5;
        lVar3 = (longlong)(iVar10 * local_10) * -0x68db8bad;
        thunk_FUN_00556760(DAT_00802a7c,7,1,0,((iVar16 * 3) / 40000 - local_a8) + local_80,local_34,
                           (iVar9 * 3) / 40000 + local_78,
                           (short)(int)(lVar3 >> 0x2c) - (short)(lVar3 >> 0x3f),
                           (short)((iVar10 * local_94) / 10000),0,0,0,0,-1,0,0);
      }
    }
    else {
      thunk_FUN_00556dd0(DAT_00802a7c,local_13c);
    }
  }
LAB_0064190c:
  if ((((*(int *)((int)local_c8 + 0x259) == 0x99) || (*(int *)((int)local_c8 + 0x259) == 0xb7)) &&
      (local_18 == 0)) && (0x191 < (int)((uint)*(byte *)((int)local_c8 + 0x61) * local_c8[0x1a]))) {
    local_18 = 1;
    local_c8[0x9c] = 0;
  }
  if (*(int *)((int)local_c8 + 0x259) == 0x9a) {
    thunk_FUN_0062c2d0(*(int **)((int)local_c8 + 0x27e),(int)*(short *)((int)local_c8 + 0x41),
                       (int)*(short *)((int)local_c8 + 0x43),(int)*(short *)((int)local_c8 + 0x45));
  }
  if (local_18 != 1) {
LAB_00642c8b:
    iVar9 = (**(code **)(*local_c8 + 0xd8))();
    if (iVar9 == 0) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x30f);
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  *(undefined4 *)((int)local_c8 + 0x23d) = 0;
  *(undefined1 *)(local_c8 + 0x9f) = 0;
  thunk_FUN_004ac410(0);
  if (*(int *)((int)local_c8 + 0x259) == 0x99) {
    piVar11 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                 (char)local_c8[9]),
                                        CONCAT22(extraout_var_01,
                                                 *(undefined2 *)((int)local_c8 + 0x262)),1);
    if (piVar11 == (int *)0x0) {
      iVar9 = local_c8[7];
LAB_00641a40:
      uVar15 = iVar9 * 0x41c64e6d + 0x3039;
      local_c8[7] = uVar15;
      uVar23 = 7;
    }
    else {
      iVar9 = (**(code **)(*piVar11 + 0x2c))();
      if (iVar9 != 0x10) {
        iVar9 = local_c8[7];
        goto LAB_00641a40;
      }
      uVar15 = local_c8[7] * 0x41c64e6d + 0x3039;
      local_c8[7] = uVar15;
      uVar23 = 5;
    }
    thunk_FUN_0057b670(local_c8,0,uVar23,1,uVar15 >> 0x10);
  }
  if (*(int *)((int)local_c8 + 0x259) == 0xb7) {
    uVar15 = local_c8[7] * 0x41c64e6d + 0x3039;
    local_c8[7] = uVar15;
    thunk_FUN_0057b670(local_c8,0,5,1,uVar15 >> 0x10);
  }
  if (*(int *)((int)local_c8 + 0x259) == 0xac) {
    thunk_FUN_0057ba30(local_c8,1);
  }
  local_48[0] = 0;
  local_2c[0] = 0;
  local_74[0] = 0;
  local_5 = 0;
  switch(*(undefined4 *)((int)local_c8 + 0x259)) {
  case 0x96:
  case 0xb4:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2514;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x14;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0x97:
    if ((char)local_c8[0xa2] == '\x02') {
      uVar15 = 0xffffffff;
      local_5 = 10;
      pcVar19 = &DAT_007d2500;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_48;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0588;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_2c;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0564;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_74;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
    }
    else {
      uVar15 = 0xffffffff;
      local_5 = 0x14;
      pcVar19 = &DAT_007d0594;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_48;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0588;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_2c;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0564;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_74;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
    }
    break;
  case 0x98:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24f8;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x12;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = s_expmask3_007d057c;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24ec;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0x99:
  case 0xa3:
    pcVar19 = s_expcshl_007d24bc;
    goto LAB_006424a7;
  case 0x9a:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2500;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 10;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = s_expmask3_007d057c;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0564;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0x9b:
  case 0x9d:
    uVar15 = 0xffffffff;
    pcVar19 = s_exprlas_007d24d4;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0x9c:
    uVar15 = 0xffffffff;
    pcVar19 = s_expllas_007d24e0;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0x9e:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24c8;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0x9f:
    pcVar19 = s_exphfs_007d24b4;
    goto LAB_006424a7;
  case 0xa0:
  case 0xa1:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24ac;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 10;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0588;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xa4:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24a4;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x22;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = s_expmask3_007d057c;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24ec;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xa5:
    uVar15 = local_c8[7] * 0x41c64e6d + 0x3039;
    local_c8[7] = uVar15;
    uVar15 = (uVar15 >> 0x10) % 3;
    if (uVar15 == 0) {
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2490;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      local_5 = 0x16;
      iVar9 = -1;
      pbVar17 = local_48;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_2c;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2484;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_74;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
    }
    else if (uVar15 == 1) {
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2474;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      local_5 = 0x16;
      iVar9 = -1;
      pbVar17 = local_48;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_2c;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2484;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_74;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
    }
    else if (uVar15 == 2) {
      uVar15 = 0xffffffff;
      local_5 = 0x16;
      pcVar19 = &DAT_007d247c;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_48;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_2c;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d24ec;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_74;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
    }
    else {
      uVar15 = 0xffffffff;
      local_5 = 0x16;
      pcVar19 = &DAT_007d2490;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_48;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_2c;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2484;
      do {
        pcVar20 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar20 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar9 = -1;
      pbVar17 = local_74;
      do {
        pbVar21 = pbVar17;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar21 = pbVar17 + 1;
        bVar6 = *pbVar17;
        pbVar17 = pbVar21;
      } while (bVar6 != 0);
      pbVar17 = (byte *)(pcVar20 + -uVar15);
      pbVar21 = pbVar21 + -1;
      for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar21 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar21 = pbVar21 + 1;
      }
    }
    break;
  case 0xac:
    uVar15 = 0xffffffff;
    pcVar19 = s_expemag_007d2468;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 10;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0564;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xad:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2444;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xae:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2498;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 9;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xb6:
  case 0xba:
    pcVar19 = &DAT_007d2438;
LAB_006424a7:
    uVar15 = 0xffffffff;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    pcVar19 = &DAT_007d0570;
LAB_00642561:
    uVar15 = 0xffffffff;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0xf;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xb7:
  case 0xb9:
    uVar15 = 0xffffffff;
    pcVar19 = s_explioc_007d2450;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xb8:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d245c;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x12;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_74;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    break;
  case 0xbf:
    uVar15 = 0xffffffff;
    pcVar19 = s_exppar_007d2430;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_48;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0588;
    do {
      pcVar20 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar9 = -1;
    pbVar17 = local_2c;
    do {
      pbVar21 = pbVar17;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar21 = pbVar17 + 1;
      bVar6 = *pbVar17;
      pbVar17 = pbVar21;
    } while (bVar6 != 0);
    pbVar17 = (byte *)(pcVar20 + -uVar15);
    pbVar21 = pbVar21 + -1;
    for (uVar23 = uVar15 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined4 *)pbVar21 = *(undefined4 *)pbVar17;
      pbVar17 = pbVar17 + 4;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pbVar21 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar21 = pbVar21 + 1;
    }
    pcVar19 = &DAT_007d0564;
    goto LAB_00642561;
  }
  this = (void *)((int)local_c8 + 0x1d5);
  iVar9 = thunk_FUN_004ab880(0,DAT_00806774,local_48,0x1d);
  if (iVar9 != 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x263);
  }
  thunk_FUN_004ac610(this,'\0');
  if ((local_74[0] != 0) && (iVar9 = thunk_FUN_004ab880(2,DAT_00806764,local_74,0x1d), iVar9 == 0))
  {
    thunk_FUN_004ac610(this,'\x02');
    uVar14 = thunk_FUN_004acd30(this,'\x02');
    *(char *)((int)local_c8 + 0x282) = (char)uVar14;
    *(undefined1 *)((int)local_c8 + 0x283) = local_5;
    *(undefined1 *)(local_c8 + 0xa1) = 0;
  }
  if (local_2c[0] != 0) {
    iVar9 = thunk_FUN_004ab880(1,DAT_00806774,local_2c,0x1d);
    if (iVar9 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x270);
    }
    thunk_FUN_004ac610(this,'\x01');
  }
  iVar9 = thunk_FUN_004ac1a0(0,DAT_00802a38[0x39]);
  if (iVar9 != 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x274);
  }
  iVar9 = thunk_FUN_004acd30(this,'\x01');
  if (0 < iVar9) {
    iVar9 = thunk_FUN_004ac1a0(1,DAT_00802a38[0x39]);
    if (iVar9 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x277);
    }
    thunk_FUN_004acf20(this,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(this,'\x01');
  }
  uVar24 = 0x45;
  uVar14 = 0x5a;
  iVar9 = 1;
  uVar15 = thunk_FUN_004ad650((int)this);
  FUN_006ea4e0(*(void **)((int)local_c8 + 0x211),uVar15,iVar9,uVar14,uVar24);
  iVar9 = (**(code **)(*local_c8 + 0xd8))();
  if (iVar9 != 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x27d);
  }
  switch(*(undefined4 *)((int)local_c8 + 0x259)) {
  case 0x96:
    local_c = 0x450;
    break;
  case 0x97:
    local_c = 0x452;
    break;
  case 0x98:
    local_c = 0x454;
    break;
  case 0x99:
    local_c = 0x456;
    break;
  case 0x9a:
    local_c = 0x458;
    break;
  case 0x9b:
    local_c = 0x492;
    break;
  case 0x9c:
    local_c = 0x46c;
    break;
  case 0x9d:
    local_c = 0x46e;
    break;
  case 0x9e:
    local_c = 0x470;
    break;
  case 0x9f:
    local_c = 0x466;
    break;
  case 0xa0:
    local_c = 0x468;
    break;
  case 0xa1:
    local_c = 0x46a;
    break;
  case 0xa3:
    local_c = 0x490;
    break;
  case 0xa4:
    local_c = 0x494;
    break;
  case 0xa5:
    local_c = 0x486;
    break;
  case 0xac:
    local_c = 0x474;
    break;
  case 0xad:
    local_c = 0x482;
    break;
  case 0xae:
    local_c = 0x48e;
    break;
  case 0xb4:
    local_c = 0x472;
    break;
  case 0xb6:
    local_c = 0x47a;
    break;
  case 0xb7:
    local_c = 0x47c;
    break;
  case 0xb8:
    local_c = 0x480;
    break;
  case 0xb9:
    local_c = 0x47e;
    break;
  case 0xba:
    local_c = 0x484;
    break;
  case 0xbf:
    local_c = 0x488;
  }
switchD_00640fbd_caseD_a2:
  (**(code **)(*local_c8 + 0x90))(2,local_c);
  DAT_00858df8 = (undefined4 *)local_28c;
  return 0;
}

