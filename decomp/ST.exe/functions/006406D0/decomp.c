
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::GetMessage */

undefined4 __thiscall STTorpC::GetMessage(STTorpC *this,int param_1)

{
  STT3DSprC *pSVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  longlong lVar5;
  code *pcVar6;
  STSprGameObjC *this_00;
  undefined1 uVar7;
  STSprGameObjC SVar8;
  undefined2 uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  int iVar18;
  byte *pbVar19;
  void *unaff_EDI;
  STSprGameObjC *pSVar20;
  char *pcVar21;
  char *pcVar22;
  byte *pbVar23;
  bool bVar24;
  uint uVar25;
  undefined4 uVar26;
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
  STSprGameObjC local_1f4;
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
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  STSprGameObjC *local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
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
  STSprGameObjC local_5;
  
  local_28c = DAT_00858df8;
  DAT_00858df8 = &local_28c;
  local_c8 = (STSprGameObjC *)this;
  iVar11 = __setjmp3(local_288,0,unaff_EDI,unaff_ESI);
  this_00 = local_c8;
  if (iVar11 != 0) {
    DAT_00858df8 = (undefined4 *)local_28c;
    iVar12 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x350,0,iVar11,&DAT_007a4ccc);
    if (iVar12 == 0) {
      FUN_006a5e40(iVar11,0,0x7d25c0,0x351);
      return 0xffff;
    }
    pcVar6 = (code *)swi(3);
    uVar16 = (*pcVar6)();
    return uVar16;
  }
  STSprGameObjC::GetMessage(local_c8,param_1);
  uVar17 = *(uint *)(param_1 + 0x10);
  if (3 < uVar17) {
    if (uVar17 != 0x108) {
      if (uVar17 != 0x10f) {
        DAT_00858df8 = (undefined4 *)local_28c;
        return 0;
      }
      local_4c = (byte *)SaveTorpData((STTorpC *)this_00,(int *)&local_90);
      STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_4c,local_90);
      FUN_006ab060(&local_4c);
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    iVar11 = *(int *)(this_00 + 0x259);
    if (iVar11 == 0x9f) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xa0) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xbf) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xa3) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xa4) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xae) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xa5) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xa1) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xb4) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xb6) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xb7) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xb9) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xad) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (iVar11 == 0xba) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    if (*(int *)(this_00 + 0x23d) != 1) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    local_14 = (int)*(short *)(this_00 + 0x24f);
    local_164 = (float)(int)*(short *)(this_00 + 0x24b) * _DAT_007904f8 * _DAT_007904f0;
    local_160 = (float)(int)*(short *)(this_00 + 0x24d) * _DAT_007904f8 * _DAT_007904f0;
    local_15c = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    FUN_006e25d0(*(void **)(this_00 + 0x211),&local_1b8);
    local_14 = (int)*(short *)(this_00 + 0x255);
    local_170 = (float)(int)*(short *)(this_00 + 0x251) * _DAT_007904f8 * _DAT_007904f0;
    local_16c = (float)(int)*(short *)(this_00 + 0x253) * _DAT_007904f8 * _DAT_007904f0;
    local_168 = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    FUN_006e25d0(*(void **)(this_00 + 0x211),&local_1c8);
    sVar10 = (**(code **)(*(int *)this_00 + 0x14))
                       (local_1b8 >> 0x10,local_1b4 >> 0x10,local_1b0 >> 0x10,local_1c8 >> 0x10,
                        local_1c4 >> 0x10,local_1c0 >> 0x10);
    thunk_FUN_004abce0((STT3DSprC *)(this_00 + 0x1d5),0,*(int *)(&DAT_007d2138 + sVar10 * 4),
                       *(int *)(&DAT_007d2138 + sVar10 * 4),'\0');
    STT3DSprC::StartShow((STT3DSprC *)(this_00 + 0x1d5),0,*(int *)(DAT_00802a38 + 0xe4));
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  if (uVar17 == 3) {
    STAllPlayersC::UnRegisterTorpedo(DAT_007fa174,*(short *)(this_00 + 0x26e),(int)this_00);
    FUN_006ae110(*(byte **)(this_00 + 0x241));
    thunk_FUN_004ad310((int)(this_00 + 0x1d5));
    thunk_FUN_0062c2a0((int *)(this_00 + 0x27e));
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  if (uVar17 != 0) {
    if (uVar17 != 2) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    iVar11 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar11 + 0xc) != 1) {
      if (*(int *)(iVar11 + 0xc) != 2) {
        DAT_00858df8 = (undefined4 *)local_28c;
        return 0;
      }
      local_158[0] = FUN_006aac70(0x44);
      iVar12 = 0;
      do {
        *(int **)(iVar12 + local_158[0]) = DAT_00806774;
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0x44);
      *(int **)(local_158[0] + 8) = DAT_00806764;
      local_158[4] = DAT_008032b8;
      local_158[1] = 0;
      local_158[2] = 0;
      local_158[3] = 0;
      local_144 = 0x10;
      local_140 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)(this_00 + 0x1d5),local_158,
                 (undefined4 *)(*(int *)(iVar11 + 0x70) + iVar11));
      FUN_006ab060(local_158);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(iVar11 + 0x78) + iVar11));
      RestoreTorpData((STTorpC *)this_00,iVar11);
      STAllPlayersC::RegisterTorpedo(DAT_007fa174,(int)this_00,*(short *)(this_00 + 0x26e));
      if (*(int *)(this_00 + 0x259) != 0x9a) {
        DAT_00858df8 = (undefined4 *)local_28c;
        return 0;
      }
      piVar13 = thunk_FUN_0062bbc0((int)*(short *)(this_00 + 0x24b),(int)*(short *)(this_00 + 0x24d)
                                   ,(int)*(short *)(this_00 + 0x24f),
                                   (int)*(short *)(this_00 + 0x251),(int)*(short *)(this_00 + 0x253)
                                   ,(int)*(short *)(this_00 + 0x255),0x9a,
                                   (int)*(short *)(this_00 + 0x231),0x14,400);
      *(int **)(this_00 + 0x27e) = piVar13;
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    puVar15 = (undefined4 *)(iVar11 + 0x14);
    pSVar20 = this_00 + 0x245;
    for (iVar12 = 0x11; iVar12 != 0; iVar12 = iVar12 + -1) {
      *(undefined4 *)pSVar20 = *puVar15;
      puVar15 = puVar15 + 1;
      pSVar20 = pSVar20 + 4;
    }
    sVar10 = *(short *)(this_00 + 0x24b);
    if ((((sVar10 < 0) || (sVar4 = *(short *)(this_00 + 0x24d), sVar4 < 0)) ||
        (*(short *)(this_00 + 0x24f) < 0)) ||
       ((DAT_007fb240 <=
         (short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) ||
        (DAT_007fb242 <=
         (short)((sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)
                ))))) {
LAB_00642c6e:
      thunk_FUN_006457e0((int)this_00);
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    this_00[0x27d] = (STSprGameObjC)0x0;
    *(undefined4 *)(this_00 + 0x27e) = 0;
    puVar14 = FUN_006ae290((uint *)0x0,0,8,1);
    *(uint **)(this_00 + 0x241) = puVar14;
    *(undefined4 *)(this_00 + 0x270) = 1;
    *(undefined4 *)(this_00 + 0x278) = 0xffffffff;
    this_00[0x27c] = (STSprGameObjC)0x0;
    *(undefined4 *)(this_00 + 0x23d) = 1;
    iVar11 = *(int *)(this_00 + 0x259);
    switch(iVar11) {
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0xac:
    case 0xb4:
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        uVar7 = 1;
      }
      else {
        uVar7 = thunk_FUN_00430750(iVar11);
      }
      thunk_FUN_00417ff0(this_00,uVar7);
      uVar17 = thunk_FUN_004406c0((char)this_00[0x24]);
      if ((uVar17 & 0xff) == 1) {
        iVar11 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x24),0x99);
        if (iVar11 != 0) {
          this_00[0x61] = (STSprGameObjC)(((byte)this_00[0x61] >> 1) + (char)this_00[0x61]);
        }
      }
      else if (((uVar17 & 0xff) == 2) &&
              (iVar11 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x24),0x96), iVar11 != 0)) {
        this_00[0x61] = (STSprGameObjC)(((byte)this_00[0x61] >> 1) + (char)this_00[0x61]);
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
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        uVar7 = 1;
      }
      else {
        uVar7 = thunk_FUN_00430750(iVar11);
      }
      thunk_FUN_00417ff0(this_00,uVar7);
    }
    iVar11 = thunk_FUN_00415b30(this_00,*(short *)(this_00 + 0x24b),*(short *)(this_00 + 0x24d),
                                *(short *)(this_00 + 0x24f),*(short *)(this_00 + 0x251),
                                *(short *)(this_00 + 0x253),*(short *)(this_00 + 0x255),
                                (byte)this_00[0x61]);
    uVar9 = extraout_var;
    if (iVar11 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x8a);
      uVar9 = extraout_var_00;
    }
    *(int *)(this_00 + 0x68) = *(int *)(this_00 + 0x68) + 1;
    uVar9 = (**(code **)(*(int *)this_00 + 0x10))
                      (CONCAT22(uVar9,*(undefined2 *)(this_00 + 0x24b)),
                       *(undefined2 *)(this_00 + 0x24d),
                       CONCAT22(uVar9,*(undefined2 *)(this_00 + 0x24f)),
                       *(undefined2 *)(this_00 + 0x251),
                       CONCAT22(uVar9,*(undefined2 *)(this_00 + 0x253)),
                       *(undefined2 *)(this_00 + 0x255));
    *(undefined2 *)(this_00 + 0x6c) = uVar9;
    *(undefined2 *)(this_00 + 0x268) = *(undefined2 *)(this_00 + 0x41);
    *(undefined2 *)(this_00 + 0x26a) = *(undefined2 *)(this_00 + 0x43);
    *(undefined2 *)(this_00 + 0x26c) = *(undefined2 *)(this_00 + 0x45);
    switch(*(undefined4 *)(this_00 + 0x259)) {
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0xb4:
      *(undefined2 *)(this_00 + 0x231) = 0x32;
      break;
    case 0x99:
    case 0xad:
      *(undefined2 *)(this_00 + 0x231) = 0xf;
      break;
    case 0x9d:
    case 0x9e:
    case 0xb6:
    case 0xba:
      *(undefined2 *)(this_00 + 0x231) = 0x1e;
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
      *(undefined2 *)(this_00 + 0x231) = 0;
      break;
    default:
      goto switchD_00640ad9_caseD_a2;
    case 0xa5:
      *(undefined2 *)(this_00 + 0x231) = 0x3c;
      break;
    case 0xac:
      *(undefined2 *)(this_00 + 0x231) = 0x28;
    }
    *(undefined2 *)(this_00 + 0x233) = 0;
switchD_00640ad9_caseD_a2:
    puVar15 = (undefined4 *)
              thunk_FUN_0041dc40(local_248,*(undefined4 *)(this_00 + 0x231),
                                 *(undefined2 *)(this_00 + 0x235),*(short *)(this_00 + 0x6c));
    uVar16 = *puVar15;
    *(undefined4 *)(this_00 + 0x237) = uVar16;
    *(undefined2 *)(this_00 + 0x23b) = *(undefined2 *)(puVar15 + 1);
    piVar13 = *(int **)(this_00 + 0x259);
    if (piVar13 == (int *)0x9a) {
      piVar13 = thunk_FUN_0062bbc0((int)*(short *)(this_00 + 0x24b),(int)*(short *)(this_00 + 0x24d)
                                   ,(int)*(short *)(this_00 + 0x24f),
                                   (int)*(short *)(this_00 + 0x251),(int)*(short *)(this_00 + 0x253)
                                   ,(int)*(short *)(this_00 + 0x255),0x9a,
                                   (int)*(short *)(this_00 + 0x231),0x14,400);
      *(int **)(this_00 + 0x27e) = piVar13;
      uVar16 = extraout_EDX;
    }
    if (*(int *)(this_00 + 0x259) == 0x97) {
      local_4c = (byte *)thunk_FUN_0042b620(CONCAT31((int3)((uint)piVar13 >> 8),this_00[0x24]),
                                            CONCAT22((short)((uint)uVar16 >> 0x10),
                                                     *(undefined2 *)(this_00 + 0x262)),1);
      if ((local_4c != (byte *)0x0) &&
         (iVar11 = (**(code **)(*(int *)local_4c + 0x2c))(), iVar11 == 0x3f)) {
        this_00[0x288] = (STSprGameObjC)0x1;
      }
    }
    local_60[0] = 0;
    local_48[0] = 0;
    local_2c[0] = 0;
    local_74[0] = 0;
    switch(*(undefined4 *)(this_00 + 0x259)) {
    case 0x96:
    case 0xb4:
      pcVar21 = s_atorsm_007d25b8;
      break;
    case 0x97:
      pcVar21 = s_atorme_007d25b0;
      break;
    case 0x98:
      pcVar21 = s_atorla_007d25a8;
      break;
    case 0x99:
      pcVar21 = s_acas0_007d2580;
      break;
    case 0x9a:
      pcVar21 = s_aemtor_007d25a0;
      break;
    case 0x9b:
    case 0x9d:
      pcVar21 = s_alray1_007d2590;
      break;
    case 0x9c:
      pcVar21 = s_alray0_007d2598;
      break;
    case 0x9e:
      pcVar21 = s_alray2_007d2588;
      break;
    case 0x9f:
    case 0xa3:
    case 0xa4:
      pcVar21 = &DAT_007d2578;
      break;
    case 0xa0:
    case 0xbf:
      pcVar21 = &DAT_007d251c;
      break;
    case 0xa1:
      pcVar21 = s_pr_torp_007d256c;
      break;
    default:
      goto switchD_00640c2d_caseD_a2;
    case 0xa5:
      pcVar21 = s_satlas_007d255c;
      break;
    case 0xac:
      pcVar21 = s_aspltor_007d2550;
      break;
    case 0xad:
      pcVar21 = s_neuro_007d252c;
      break;
    case 0xae:
      pcVar21 = s_agcan_007d2564;
      break;
    case 0xb6:
    case 0xba:
      pcVar21 = s_eshell_007d2524;
      break;
    case 0xb7:
      pcVar21 = s_ionbomb_007d253c;
      break;
    case 0xb8:
      pcVar21 = s_biaacc_007d2548;
      break;
    case 0xb9:
      pcVar21 = &DAT_007d2534;
    }
    uVar17 = 0xffffffff;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_60;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
switchD_00640c2d_caseD_a2:
    pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
    iVar11 = STT3DSprC::LoadSequence(pSVar1,0,DAT_00806774,local_60,0x1d);
    if (iVar11 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0xe1);
    }
    switch(*(undefined4 *)(this_00 + 0x259)) {
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa3:
    case 0xa4:
    case 0xae:
    case 0xbf:
      iVar12 = 9;
      iVar11 = 0;
      break;
    default:
      local_10 = (int)*(short *)(this_00 + 0x24f);
      local_17c = (float)(int)*(short *)(this_00 + 0x24b) * _DAT_007904f8 * _DAT_007904f0;
      local_178 = (float)(int)*(short *)(this_00 + 0x24d) * _DAT_007904f8 * _DAT_007904f0;
      local_174 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(*(void **)(this_00 + 0x211),&local_198);
      local_10 = (int)*(short *)(this_00 + 0x255);
      local_188 = (float)(int)*(short *)(this_00 + 0x251) * _DAT_007904f8 * _DAT_007904f0;
      local_184 = (float)(int)*(short *)(this_00 + 0x253) * _DAT_007904f8 * _DAT_007904f0;
      local_180 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0(*(void **)(this_00 + 0x211),&local_1a8);
      sVar10 = (**(code **)(*(int *)this_00 + 0x14))
                         (local_198 >> 0x10,local_194 >> 0x10,local_190 >> 0x10,local_1a8 >> 0x10,
                          local_1a4 >> 0x10,local_1a0 >> 0x10);
      iVar11 = *(int *)(&DAT_007d2138 + sVar10 * 4);
      iVar12 = iVar11;
      break;
    case 0xa5:
      iVar12 = 0;
      iVar11 = 0;
    }
    thunk_FUN_004abce0(pSVar1,0,iVar11,iVar12,'\0');
    STT3DSprC::StartShow(pSVar1,0,*(int *)(DAT_00802a38 + 0xe4));
    uVar16 = STAllPlayersC::RegisterTorpedo(DAT_007fa174,(int)this_00,-1);
    *(short *)(this_00 + 0x26e) = (short)uVar16;
    if (*(int *)(this_00 + 0x259) != 0xa3) {
      iVar11 = (int)*(short *)(this_00 + 0x47);
      iVar12 = (int)*(short *)(this_00 + 0x49);
      if ((((iVar11 < 0) || (iVar12 < 0)) || (DAT_007fb240 <= iVar11)) || (DAT_007fb242 <= iVar12))
      {
        bVar24 = false;
      }
      else {
        bVar24 = *(char *)(DAT_007fb240 * iVar12 + DAT_007fb26c + iVar11) != '\0';
      }
      if (bVar24) {
        if ((&DAT_007fb24c)[*(int *)(this_00 + 0x24)] == 0) {
          bVar24 = false;
        }
        else {
          bVar24 = *(char *)(DAT_007fb240 * iVar12 + (&DAT_007fb24c)[*(int *)(this_00 + 0x24)] +
                            iVar11) != '\0';
        }
        if (bVar24) {
          this_00[0x286] = (STSprGameObjC)0x1;
        }
      }
    }
    switch(*(undefined4 *)(this_00 + 0x259)) {
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
  if (*(int *)(this_00 + 0x23d) != 1) {
    SVar8 = (STSprGameObjC)((char)this_00[0x27c] + 1);
    this_00[0x27c] = SVar8;
    if ((this_00[0x282] != (STSprGameObjC)0x0) && ((byte)this_00[0x283] <= (byte)SVar8)) {
      if (this_00[0x283] == SVar8) {
        STT3DSprC::StartShow((STT3DSprC *)(this_00 + 0x1d5),2,*(int *)(DAT_00802a38 + 0xe4));
      }
      else {
        SVar8 = (STSprGameObjC)((char)this_00[0x284] + 1);
        this_00[0x284] = SVar8;
        if (SVar8 == this_00[0x282]) {
          STT3DSprC::StopShow((STT3DSprC *)(this_00 + 0x1d5),2);
          this_00[0x282] = (STSprGameObjC)0x0;
        }
        else {
          thunk_FUN_004abe40((STT3DSprC *)(this_00 + 0x1d5),'\x02',(uint)(byte)SVar8);
          STT3DSprC::ShowCurFase((STT3DSprC *)(this_00 + 0x1d5),'\x02');
        }
      }
    }
    if (this_00[0x27c] == (STSprGameObjC)0x5) {
      if (this_00[0x288] == (STSprGameObjC)0x2) {
        uVar17 = thunk_FUN_00645d30(*(int *)(this_00 + 0x24),*(undefined4 *)(this_00 + 0x259));
        this_00[0x25d] = SUB41(uVar17,0);
        local_c4 = *(int *)(&DAT_007e6468 +
                           (*(int *)(this_00 + 0x259) * 5 + -0x2ee + (uVar17 & 0xff)) * 4);
        thunk_FUN_006383e0((int)*(short *)(this_00 + 0x41),(int)*(short *)(this_00 + 0x43),
                           (int)*(short *)(this_00 + 0x45),*(undefined4 *)(this_00 + 0x24),
                           (short)*(undefined4 *)(this_00 + 0x25e),*(undefined2 *)(this_00 + 0x262),
                           *(int *)(this_00 + 0x259),local_c4 / 2,1);
      }
      if (*(int *)(this_00 + 0x270) == 1) {
        iVar11 = FUN_006e62d0(DAT_00802a38,*(int *)(this_00 + 0x274),(int *)&local_30);
        if (iVar11 == -4) {
          thunk_FUN_006457e0((int)this_00);
          DAT_00858df8 = (undefined4 *)local_28c;
          return 0;
        }
        uVar17 = thunk_FUN_00645d30(*(int *)(this_00 + 0x24),*(undefined4 *)(this_00 + 0x259));
        this_00[0x25d] = SUB41(uVar17,0);
        iVar11 = *(int *)(this_00 + 0x259);
        if (iVar11 == 0x9a) {
          iVar11 = 0;
          uVar17 = thunk_FUN_004ad650((int)local_30 + 0x1d5);
          thunk_FUN_00637e60(uVar17,iVar11);
          local_b4 = *(undefined4 *)(&DAT_007d21f8 + (uint)(byte)this_00[0x25d] * 4);
        }
        else if (iVar11 == 0xad) {
          local_b4 = *(undefined4 *)(&DAT_007d220c + (uVar17 & 0xff) * 4);
        }
        else if (iVar11 == 0xa1) {
          local_b4 = *(undefined4 *)(&DAT_007d2220 + (uVar17 & 0xff) * 4);
        }
        else {
          local_b4 = 0;
        }
        local_bc = *(undefined4 *)(this_00 + 0x24);
        local_b8 = *(undefined2 *)(this_00 + 0x262);
        local_c0 = *(int *)(this_00 + 0x259);
        local_b6 = *(undefined2 *)(this_00 + 0x25e);
        local_c4 = *(int *)(&DAT_007e6468 + (local_c0 * 5 + -0x2ee + (uint)(byte)this_00[0x25d]) * 4
                           );
        local_b0 = 0;
        if (this_00[0x285] == (STSprGameObjC)0x1) {
          local_c4 = (int)(local_c4 + (local_c4 >> 0x1f & 3U)) >> 2;
        }
        iVar11 = (**(code **)(*local_30 + 0x2c))();
        if (iVar11 == 0x68) {
          uVar9 = *(undefined2 *)(this_00 + 0x245);
          piVar13 = local_220;
          for (iVar11 = 0x16; iVar11 != 0; iVar11 = iVar11 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
          local_220[0] = 0x15e;
          local_220[3] = 1;
          local_220[2] = 1;
          local_220[1] = local_30[9];
          local_208 = *(undefined2 *)(this_00 + 0x249);
          local_20a = *(undefined2 *)(this_00 + 0x247);
          local_1ef = *(undefined2 *)((int)local_30 + 0x32);
          local_1f3 = local_30[6];
          local_1f4 = this_00[0x25d];
          local_20c = uVar9;
          iVar11 = thunk_FUN_004e60d0(local_30[9],0x7b);
          if (iVar11 == 0) {
            local_1ed = (int)(local_c4 + (local_c4 >> 0x1f & 3U)) >> 2;
          }
          else {
            local_1ed = local_c4 / 2;
          }
          local_202 = *(undefined2 *)(this_00 + 0x45);
          local_204 = *(undefined2 *)(this_00 + 0x43);
          local_1fc = *(undefined2 *)(this_00 + 0x38);
          local_206 = *(undefined2 *)(this_00 + 0x41);
          local_1fe = *(undefined2 *)(this_00 + 0x36);
          local_200 = *(undefined2 *)(this_00 + 0x34);
          local_1f8 = 1;
          local_1fa = 0;
          (**(code **)(*(int *)DAT_00802a38 + 8))(0x147,0,0,local_220,0);
        }
        local_22c = &local_c4;
        local_238 = local_30[2];
        local_234 = 2;
        local_230 = 0x110;
        (**(code **)(*(int *)DAT_00802a38 + 0x18))(local_240);
      }
    }
    pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
    iVar11 = thunk_FUN_004acd30(pSVar1,'\0');
    if (iVar11 + -1 < (int)(uint)(byte)this_00[0x27c]) {
      STT3DSprC::StopShow(pSVar1,0);
    }
    iVar11 = thunk_FUN_004acd30(pSVar1,'\0');
    if ((iVar11 + -1 < (int)(uint)(byte)this_00[0x27c]) && (this_00[0x282] == (STSprGameObjC)0x0))
    goto LAB_00642c6e;
    goto LAB_00642c8b;
  }
  if (this_00[0x27d] == (STSprGameObjC)0x0) goto LAB_00642c8b;
  local_80 = (int)*(short *)(this_00 + 0x41);
  local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)(this_00 + 0x49));
  sVar10 = *(short *)(this_00 + 0x47);
  local_7c = (int)*(short *)(this_00 + 0x43);
  local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)(this_00 + 0x4b));
  local_78 = (int)*(short *)(this_00 + 0x45);
  iVar11 = thunk_FUN_00415ed0(this_00,&local_a4,&local_9c);
  if (iVar11 == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x15c);
  }
  if (((sVar10 == *(short *)(this_00 + 0x47)) && ((short)local_10 == *(short *)(this_00 + 0x49))) &&
     ((short)local_84 == *(short *)(this_00 + 0x4b))) {
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
  }
  local_34 = iVar12;
  if (iVar11 == 0) {
    if (this_00[0x288] == (STSprGameObjC)0x0) {
      thunk_FUN_006443c0(this_00,local_98,local_8c,local_a0);
      iVar11 = thunk_FUN_00415b30(this_00,*(short *)(this_00 + 0x41),*(short *)(this_00 + 0x43),
                                  *(short *)(this_00 + 0x45),local_98[0],local_8c[0],local_a0[0],
                                  (byte)this_00[0x61]);
      if (iVar11 != 0) {
        FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x170);
      }
      *(undefined4 *)(this_00 + 0x7a) = 0;
    }
    else {
      this_00[0x288] = (STSprGameObjC)0x2;
      thunk_FUN_00638230(*(undefined4 *)(this_00 + 0x1ed),5,(int)*(short *)(this_00 + 0x41),
                         (int)*(short *)(this_00 + 0x43),(int)*(short *)(this_00 + 0x45));
    }
  }
  if ((local_9c == 1) &&
     (((*(short *)(this_00 + 0x47) < 0 || (DAT_007fb240 + -1 < (int)*(short *)(this_00 + 0x47))) ||
      ((*(short *)(this_00 + 0x49) < 0 ||
       ((DAT_007fb242 + -1 < (int)*(short *)(this_00 + 0x49) ||
        (DAT_007fb244 + -1 < (int)*(short *)(this_00 + 0x4b))))))))) {
    thunk_FUN_006457e0((int)this_00);
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  piVar13 = local_13c;
  for (iVar11 = 0x1c; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  thunk_FUN_00644410(this_00,&local_18,&local_120,&local_11c,local_118);
  if (local_18 == 0) {
    if (this_00[0x288] == (STSprGameObjC)0x2) {
      local_18 = 1;
      *(undefined4 *)(this_00 + 0x270) = 0;
    }
  }
  else if (this_00[0x288] != (STSprGameObjC)0x0) {
    this_00[0x288] = (STSprGameObjC)0x0;
  }
  if ((iVar12 != 0) && (*(int *)(this_00 + 0x259) != 0xa3)) {
    iVar12 = (int)*(short *)(this_00 + 0x47);
    iVar11 = (int)*(short *)(this_00 + 0x49);
    if ((iVar12 < 0) || (((iVar11 < 0 || (DAT_007fb240 <= iVar12)) || (DAT_007fb242 <= iVar11)))) {
      bVar24 = false;
    }
    else {
      bVar24 = *(char *)(DAT_007fb240 * iVar11 + DAT_007fb26c + iVar12) != '\0';
    }
    iVar18 = local_34;
    if (bVar24) {
      if ((&DAT_007fb24c)[*(int *)(this_00 + 0x24)] == 0) {
        bVar24 = false;
      }
      else {
        bVar24 = *(char *)(DAT_007fb240 * iVar11 + (&DAT_007fb24c)[*(int *)(this_00 + 0x24)] +
                          iVar12) != '\0';
      }
      if ((!bVar24) || (this_00[0x286] == (STSprGameObjC)0x0)) {
        local_18 = 1;
        *(undefined4 *)(this_00 + 0x270) = 0;
        iVar18 = 2;
      }
    }
    if (1 < iVar18) {
      if ((*(int *)(this_00 + 0x259) == 0xad) &&
         (iVar11 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x24),0x7e), iVar11 != 0)) {
        iVar11 = 0x1389;
      }
      else {
        iVar11 = *(int *)(&DAT_007e6468 + (*(int *)(this_00 + 0x259) + -0x96) * 0x14);
      }
      uVar17 = thunk_FUN_00497030((int)*(short *)(this_00 + 0x47),(int)*(short *)(this_00 + 0x49),
                                  *(int *)(this_00 + 0x24),1,iVar11);
      if ((int)uVar17 < 0) {
        local_18 = 0;
      }
      else {
        thunk_FUN_00497850((int)*(short *)(this_00 + 0x268),(int)*(short *)(this_00 + 0x26a),
                           (int)*(short *)(this_00 + 0x26c),(int)*(short *)(this_00 + 0x41),
                           (int)*(short *)(this_00 + 0x43),(int)*(short *)(this_00 + 0x45),uVar17,
                           &local_120,&local_11c,local_118);
        thunk_FUN_00637ae0(local_120,local_11c,local_118[0]);
        local_18 = 2;
      }
    }
  }
  if (local_18 == 2) {
    thunk_FUN_006457e0((int)this_00);
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  sVar10 = *(short *)(this_00 + 0x268);
  local_13c[4] = (int)sVar10;
  local_128 = (int)*(short *)(this_00 + 0x26a);
  local_124 = (int)*(short *)(this_00 + 0x26c);
  *(undefined2 *)(this_00 + 0x268) = (undefined2)local_120;
  *(undefined2 *)(this_00 + 0x26a) = (undefined2)local_11c;
  *(undefined2 *)(this_00 + 0x26c) = (undefined2)local_118[0];
  iVar11 = *(int *)(this_00 + 0x259);
  if ((((((iVar11 == 0x9f) || (iVar11 == 0xa0)) || (iVar11 == 0xbf)) ||
       ((iVar11 == 0xa3 || (iVar11 == 0x9a)))) || (iVar11 == 0x9b)) ||
     (((iVar11 == 0x9c || (iVar11 == 0x9d)) ||
      ((iVar11 == 0x9e || ((iVar11 == 0xae || (iVar11 == 0xa5)))))))) goto LAB_0064190c;
  if ((byte)this_00[0x27d] < 9) {
    local_4c = (byte *)thunk_FUN_0042b620(CONCAT31((int3)((uint)iVar11 >> 8),this_00[0x24]),
                                          CONCAT22(sVar10 >> 0xf,*(undefined2 *)(this_00 + 0x262)),1
                                         );
    if ((local_4c == (byte *)0x0) || (this_00[0x27d] == (STSprGameObjC)0x8)) {
      *(undefined4 *)(this_00 + 0x264) = 0;
    }
    if (local_4c != (byte *)0x0) {
      local_d8 = thunk_FUN_004ad650((int)(local_4c + 0x1d5));
    }
  }
  local_d4 = *(undefined4 *)(this_00 + 0x264);
  bVar24 = false;
  switch(*(int *)(this_00 + 0x259)) {
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
    bVar24 = true;
    local_d0 = 1;
    goto switchD_006415e9_caseD_9f;
  case 0xac:
  case 0xad:
    local_13c[0] = 6;
  }
  local_13c[1] = 1;
  bVar24 = true;
switchD_006415e9_caseD_9f:
  if ((this_00[0x27d] != (STSprGameObjC)0x0) && (bVar24)) {
    if (*(int *)(this_00 + 0x259) == 0xa1) {
      iVar11 = FUN_006acf0d(local_80,local_7c,local_78,(int)*(short *)(this_00 + 0x41),
                            (int)*(short *)(this_00 + 0x43),(int)*(short *)(this_00 + 0x45));
      if (iVar11 == 0) {
        thunk_FUN_00556760(DAT_00802a7c,7,1,0,(int)*(short *)(this_00 + 0x41),
                           (int)*(short *)(this_00 + 0x43),(int)*(short *)(this_00 + 0x45),0,0,0,0,0
                           ,0,-1,0,0);
      }
      else {
        local_94 = ((*(short *)(this_00 + 0x41) - local_80) * 10000) / iVar11;
        iVar18 = local_94 * iVar11;
        local_10 = ((*(short *)(this_00 + 0x43) - local_7c) * 10000) / iVar11;
        local_14 = local_10 * iVar11;
        local_a8 = local_10 / 10000;
        local_cc = iVar18 / 40000 + local_a8 + local_80;
        local_84 = local_94 / 10000;
        local_34 = local_14 / 40000 + local_84 + local_7c;
        uVar17 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this_00 + 0x1c) = uVar17;
        iVar11 = (((*(short *)(this_00 + 0x45) - local_78) * 10000) / iVar11) * iVar11;
        iVar12 = (uVar17 >> 0x10) % 0xb + 5;
        local_88 = iVar11;
        thunk_FUN_00556760(DAT_00802a7c,7,1,0,local_cc,local_34,iVar11 / 40000 + local_78,
                           (short)((iVar12 * local_10) / 10000),(short)((iVar12 * local_94) / 10000)
                           ,0,0,0,0,-1,0,0);
        local_34 = (local_14 * 3) / 40000 + local_84 + local_7c;
        uVar17 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this_00 + 0x1c) = uVar17;
        iVar12 = (uVar17 >> 0x10) % 0xb + 5;
        lVar5 = (longlong)(iVar12 * local_10) * -0x68db8bad;
        thunk_FUN_00556760(DAT_00802a7c,7,1,0,((iVar18 * 3) / 40000 - local_a8) + local_80,local_34,
                           (iVar11 * 3) / 40000 + local_78,
                           (short)(int)(lVar5 >> 0x2c) - (short)(lVar5 >> 0x3f),
                           (short)((iVar12 * local_94) / 10000),0,0,0,0,-1,0,0);
      }
    }
    else {
      thunk_FUN_00556dd0(DAT_00802a7c,local_13c);
    }
  }
LAB_0064190c:
  if ((((*(int *)(this_00 + 0x259) == 0x99) || (*(int *)(this_00 + 0x259) == 0xb7)) &&
      (local_18 == 0)) && (0x191 < (int)((uint)(byte)this_00[0x61] * *(int *)(this_00 + 0x68)))) {
    local_18 = 1;
    *(undefined4 *)(this_00 + 0x270) = 0;
  }
  if (*(int *)(this_00 + 0x259) == 0x9a) {
    thunk_FUN_0062c2d0(*(int **)(this_00 + 0x27e),(int)*(short *)(this_00 + 0x41),
                       (int)*(short *)(this_00 + 0x43),(int)*(short *)(this_00 + 0x45));
  }
  if (local_18 != 1) {
LAB_00642c8b:
    iVar11 = (**(code **)(*(int *)this_00 + 0xd8))();
    if (iVar11 == 0) {
      DAT_00858df8 = (undefined4 *)local_28c;
      return 0;
    }
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x30f);
    DAT_00858df8 = (undefined4 *)local_28c;
    return 0;
  }
  *(undefined4 *)(this_00 + 0x23d) = 0;
  this_00[0x27c] = (STSprGameObjC)0x0;
  STT3DSprC::StopShow((STT3DSprC *)(this_00 + 0x1d5),0);
  if (*(int *)(this_00 + 0x259) == 0x99) {
    piVar13 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00[0x24]),
                                        CONCAT22(extraout_var_01,*(undefined2 *)(this_00 + 0x262)),1
                                       );
    if (piVar13 == (int *)0x0) {
      iVar11 = *(int *)(this_00 + 0x1c);
LAB_00641a40:
      uVar17 = iVar11 * 0x41c64e6d + 0x3039;
      *(uint *)(this_00 + 0x1c) = uVar17;
      uVar25 = 7;
    }
    else {
      iVar11 = (**(code **)(*piVar13 + 0x2c))();
      if (iVar11 != 0x10) {
        iVar11 = *(int *)(this_00 + 0x1c);
        goto LAB_00641a40;
      }
      uVar17 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)(this_00 + 0x1c) = uVar17;
      uVar25 = 5;
    }
    thunk_FUN_0057b670((int *)this_00,0,uVar25,1,uVar17 >> 0x10);
  }
  if (*(int *)(this_00 + 0x259) == 0xb7) {
    uVar17 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(this_00 + 0x1c) = uVar17;
    thunk_FUN_0057b670((int *)this_00,0,5,1,uVar17 >> 0x10);
  }
  if (*(int *)(this_00 + 0x259) == 0xac) {
    thunk_FUN_0057ba30(this_00,1);
  }
  local_48[0] = 0;
  local_2c[0] = 0;
  local_74[0] = 0;
  local_5 = (STSprGameObjC)0x0;
  switch(*(undefined4 *)(this_00 + 0x259)) {
  case 0x96:
  case 0xb4:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2514;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0x14;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0570;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0x97:
    if (this_00[0x288] == (STSprGameObjC)0x2) {
      uVar17 = 0xffffffff;
      local_5 = (STSprGameObjC)0xa;
      pcVar21 = &DAT_007d2500;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_48;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d0588;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_2c;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d0564;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_74;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
    }
    else {
      uVar17 = 0xffffffff;
      local_5 = (STSprGameObjC)0x14;
      pcVar21 = &DAT_007d0594;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_48;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d0588;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_2c;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d0564;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_74;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
    }
    break;
  case 0x98:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d24f8;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0x12;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = s_expmask3_007d057c;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d24ec;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0x99:
  case 0xa3:
    pcVar21 = s_expcshl_007d24bc;
    goto LAB_006424a7;
  case 0x9a:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2500;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0xa;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = s_expmask3_007d057c;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0564;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0x9b:
  case 0x9d:
    uVar17 = 0xffffffff;
    pcVar21 = s_exprlas_007d24d4;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0x9c:
    uVar17 = 0xffffffff;
    pcVar21 = s_expllas_007d24e0;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0x9e:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d24c8;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0x9f:
    pcVar21 = s_exphfs_007d24b4;
    goto LAB_006424a7;
  case 0xa0:
  case 0xa1:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d24ac;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0xa;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0588;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0570;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xa4:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d24a4;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0x22;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = s_expmask3_007d057c;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d24ec;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xa5:
    uVar17 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(this_00 + 0x1c) = uVar17;
    uVar17 = (uVar17 >> 0x10) % 3;
    if (uVar17 == 0) {
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d2490;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      local_5 = (STSprGameObjC)0x16;
      iVar11 = -1;
      pbVar19 = local_48;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_2c;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d2484;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_74;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
    }
    else if (uVar17 == 1) {
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d2474;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      local_5 = (STSprGameObjC)0x16;
      iVar11 = -1;
      pbVar19 = local_48;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_2c;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d2484;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_74;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
    }
    else if (uVar17 == 2) {
      uVar17 = 0xffffffff;
      local_5 = (STSprGameObjC)0x16;
      pcVar21 = &DAT_007d247c;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_48;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_2c;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d24ec;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_74;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
    }
    else {
      uVar17 = 0xffffffff;
      local_5 = (STSprGameObjC)0x16;
      pcVar21 = &DAT_007d2490;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_48;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_2c;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
      uVar17 = 0xffffffff;
      pcVar21 = &DAT_007d2484;
      do {
        pcVar22 = pcVar21;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar22 = pcVar21 + 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar22;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      iVar11 = -1;
      pbVar19 = local_74;
      do {
        pbVar23 = pbVar19;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pbVar23 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar23;
      } while (bVar3 != 0);
      pbVar19 = (byte *)(pcVar22 + -uVar17);
      pbVar23 = pbVar23 + -1;
      for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
        pbVar19 = pbVar19 + 4;
        pbVar23 = pbVar23 + 4;
      }
      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar23 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
      }
    }
    break;
  case 0xac:
    uVar17 = 0xffffffff;
    pcVar21 = s_expemag_007d2468;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0xa;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0564;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xad:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2444;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xae:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2498;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0x9;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0570;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xb6:
  case 0xba:
    pcVar21 = &DAT_007d2438;
LAB_006424a7:
    uVar17 = 0xffffffff;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    pcVar21 = &DAT_007d0570;
LAB_00642561:
    uVar17 = 0xffffffff;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0xf;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xb7:
  case 0xb9:
    uVar17 = 0xffffffff;
    pcVar21 = s_explioc_007d2450;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xb8:
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d245c;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    local_5 = (STSprGameObjC)0x12;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d2508;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0570;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_74;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    break;
  case 0xbf:
    uVar17 = 0xffffffff;
    pcVar21 = s_exppar_007d2430;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_48;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar21 = &DAT_007d0588;
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar2 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar2 != '\0');
    uVar17 = ~uVar17;
    iVar11 = -1;
    pbVar19 = local_2c;
    do {
      pbVar23 = pbVar19;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pbVar23 = pbVar19 + 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar23;
    } while (bVar3 != 0);
    pbVar19 = (byte *)(pcVar22 + -uVar17);
    pbVar23 = pbVar23 + -1;
    for (uVar25 = uVar17 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
      *(undefined4 *)pbVar23 = *(undefined4 *)pbVar19;
      pbVar19 = pbVar19 + 4;
      pbVar23 = pbVar23 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pbVar23 = *pbVar19;
      pbVar19 = pbVar19 + 1;
      pbVar23 = pbVar23 + 1;
    }
    pcVar21 = &DAT_007d0564;
    goto LAB_00642561;
  }
  pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
  iVar11 = STT3DSprC::LoadSequence(pSVar1,0,DAT_00806774,local_48,0x1d);
  if (iVar11 != 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x263);
  }
  thunk_FUN_004ac610(pSVar1,'\0');
  if ((local_74[0] != 0) &&
     (iVar11 = STT3DSprC::LoadSequence(pSVar1,2,DAT_00806764,local_74,0x1d), iVar11 == 0)) {
    thunk_FUN_004ac610(pSVar1,'\x02');
    uVar16 = thunk_FUN_004acd30(pSVar1,'\x02');
    this_00[0x282] = SUB41(uVar16,0);
    this_00[0x283] = local_5;
    this_00[0x284] = (STSprGameObjC)0x0;
  }
  if (local_2c[0] != 0) {
    iVar11 = STT3DSprC::LoadSequence(pSVar1,1,DAT_00806774,local_2c,0x1d);
    if (iVar11 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x270);
    }
    thunk_FUN_004ac610(pSVar1,'\x01');
  }
  iVar11 = STT3DSprC::StartShow(pSVar1,0,*(int *)(DAT_00802a38 + 0xe4));
  if (iVar11 != 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x274);
  }
  iVar11 = thunk_FUN_004acd30(pSVar1,'\x01');
  if (0 < iVar11) {
    iVar11 = STT3DSprC::StartShow(pSVar1,1,*(int *)(DAT_00802a38 + 0xe4));
    if (iVar11 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x277);
    }
    thunk_FUN_004acf20(pSVar1,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(pSVar1,'\x01');
  }
  uVar26 = 0x45;
  uVar16 = 0x5a;
  iVar11 = 1;
  uVar17 = thunk_FUN_004ad650((int)pSVar1);
  FUN_006ea4e0(*(void **)(this_00 + 0x211),uVar17,iVar11,uVar16,uVar26);
  iVar11 = (**(code **)(*(int *)this_00 + 0xd8))();
  if (iVar11 != 0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7d25c0,0x27d);
  }
  switch(*(undefined4 *)(this_00 + 0x259)) {
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
  (**(code **)(*(int *)this_00 + 0x90))(2,local_c);
  DAT_00858df8 = (undefined4 *)local_28c;
  return 0;
}

