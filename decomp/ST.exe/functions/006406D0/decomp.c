
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::GetMessage
   
   [STSwitchEnumApplier] Switch target field_0259 uses
   /SubmarineTitans/Recovered/Enums/STSprGameObjC_field_0259State. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9B=155;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A5=165;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B4=180;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185;CASE_BA=186;CASE_BF=191
    */

undefined4 __thiscall STTorpC::GetMessage(STTorpC *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  char cVar1;
  short sVar2;
  STSprGameObjC_field_0259State SVar3;
  longlong lVar4;
  code *pcVar5;
  STSprGameObjC *this_00;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  STGameObjC *pSVar16;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  int iVar17;
  void *unaff_EDI;
  undefined4 *puVar18;
  char *pcVar19;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  uint uVar24;
  undefined4 uVar25;
  InternalExceptionFrame local_28c;
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
  void *local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
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
  STSprGameObjC_field_0259State local_c0;
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
  AnonShape_0060EA30_DCEB68AD *local_90;
  short local_8c [2];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  char local_74 [20];
  char local_60 [20];
  STGameObjC *local_4c;
  char local_48 [20];
  int local_34;
  int *local_30;
  char local_2c [20];
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_28c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_28c;
  local_c8 = (STSprGameObjC *)this;
  iVar10 = Library::MSVCRT::__setjmp3(local_28c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_28c.previous;
    iVar20 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x350,0,iVar10,&DAT_007a4ccc
                                ,s_STTorpC__GetMessage_007d2418);
    if (iVar20 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x351);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return uVar14;
  }
  STSprGameObjC::GetMessage(local_c8,param_1);
  uVar15 = param_1->field_0010;
  if (3 < uVar15) {
    if (uVar15 != 0x108) {
      if (uVar15 != 0x10f) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_4c = (STGameObjC *)SaveTorpData((STTorpC *)this_00,(int *)&local_90);
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,(byte *)local_4c,local_90);
      FreeAndNull(&local_4c);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    SVar3 = this_00->field_0259;
    if (SVar3 == CASE_9F) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_A0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_BF) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_A3) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_A4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_AE) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_A5) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_A1) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_B4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_B6) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_B7) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_B9) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_AD) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar3 == CASE_BA) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x23d != 1) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    local_14 = (int)*(short *)&this_00->field_0x24f;
    local_164 = (float)(int)*(short *)&this_00->field_0x24b * _DAT_007904f8 * _DAT_007904f0;
    local_160 = (float)(int)*(short *)&this_00->field_0x24d * _DAT_007904f8 * _DAT_007904f0;
    local_15c = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    FUN_006e25d0((void *)this_00->field_0211,&local_1b8);
    local_14 = (int)*(short *)&this_00->field_0x255;
    local_170 = (float)(int)*(short *)&this_00->field_0x251 * _DAT_007904f8 * _DAT_007904f0;
    local_16c = (float)(int)*(short *)&this_00->field_0x253 * _DAT_007904f8 * _DAT_007904f0;
    local_168 = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    FUN_006e25d0((void *)this_00->field_0211,&local_1c8);
    sVar9 = (*this_00->vtable->vfunc_14)
                      (local_1b8 >> 0x10,local_1b4 >> 0x10,local_1b0 >> 0x10,local_1c8 >> 0x10,
                       local_1c4 >> 0x10,local_1c0 >> 0x10);
    thunk_FUN_004abce0(&this_00->field_01D5,0,*(int *)(&DAT_007d2138 + sVar9 * 4),
                       *(int *)(&DAT_007d2138 + sVar9 * 4),'\0');
    STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0,PTR_00802a38->field_00E4);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (uVar15 == 3) {
    STAllPlayersC::UnRegisterTorpedo
              (g_sTAllPlayers_007FA174,*(short *)&this_00->field_0x26e,(int)this_00);
    DArrayDestroy(*(DArrayTy **)&this_00->field_0x241);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    thunk_FUN_0062c2a0((int *)&this_00->field_0x27e);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (uVar15 != 0) {
    if (uVar15 != 2) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    puVar13 = param_1->field_0014;
    if (puVar13[3] != 1) {
      if (puVar13[3] != 2) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_158 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
      iVar10 = 0;
      do {
        *(int **)(iVar10 + (int)local_158) = DAT_00806774;
        iVar10 = iVar10 + 4;
      } while (iVar10 < 0x44);
      *(int **)((int)local_158 + 8) = DAT_00806764;
      local_148 = DAT_008032b8;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_144 = 0x10;
      local_140 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_158,
                 (AnonShape_004AD790_77673787 *)(puVar13[0x1c] + (int)puVar13));
      FreeAndNull(&local_158);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(puVar13[0x1e] + (int)puVar13));
      RestoreTorpData((STTorpC *)this_00,(int)puVar13);
      STAllPlayersC::RegisterTorpedo
                (g_sTAllPlayers_007FA174,(int)this_00,*(short *)&this_00->field_0x26e);
      if (this_00->field_0259 != CASE_9A) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      piVar11 = thunk_FUN_0062bbc0((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_0x24f,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)*(short *)&this_00->field_0x231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar11;
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    puVar13 = puVar13 + 5;
    puVar18 = (undefined4 *)&this_00->field_0x245;
    for (iVar10 = 0x11; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar18 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
    }
    sVar9 = *(short *)&this_00->field_0x24b;
    if ((((sVar9 < 0) || (sVar2 = *(short *)&this_00->field_0x24d, sVar2 < 0)) ||
        (*(short *)&this_00->field_0x24f < 0)) ||
       ((g_worldGrid.sizeX <=
         (short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)
                ) ||
        (g_worldGrid.sizeY <=
         (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)
                ))))) {
LAB_00642c6e:
      thunk_FUN_006457e0((int)this_00);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    this_00->field_0x27d = 0;
    *(undefined4 *)&this_00->field_0x27e = 0;
    puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,8,1);
    *(uint **)&this_00->field_0x241 = puVar12;
    *(undefined4 *)&this_00->field_0x270 = 1;
    *(undefined4 *)&this_00->field_0x278 = 0xffffffff;
    this_00->field_0x27c = 0;
    *(undefined4 *)&this_00->field_0x23d = 1;
    SVar3 = this_00->field_0259;
    switch(SVar3) {
    case CASE_96:
    case CASE_97:
    case CASE_98:
    case CASE_99:
    case CASE_9A:
    case CASE_AC:
    case CASE_B4:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        uVar6 = 1;
      }
      else {
        uVar6 = thunk_FUN_00430750(SVar3);
      }
      thunk_FUN_00417ff0(this_00,uVar6);
      uVar15 = GetPlayerRaceId(this_00->field_0024);
      if ((uVar15 & 0xff) == 1) {
        iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0024,0x99);
        if (iVar10 != 0) {
          this_00->field_0x61 = ((byte)this_00->field_0x61 >> 1) + this_00->field_0x61;
        }
      }
      else if (((uVar15 & 0xff) == 2) &&
              (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0024,0x96), iVar10 != 0)) {
        this_00->field_0x61 = ((byte)this_00->field_0x61 >> 1) + this_00->field_0x61;
      }
      break;
    case CASE_9B:
    case CASE_9C:
    case CASE_9D:
    case CASE_9E:
    case CASE_9F:
    case CASE_A0:
    case CASE_A1:
    case CASE_A3:
    case CASE_A4:
    case CASE_A5:
    case CASE_AD:
    case CASE_AE:
    case CASE_B6:
    case CASE_B7:
    case CASE_B8:
    case CASE_B9:
    case CASE_BA:
    case CASE_BF:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        uVar6 = 1;
      }
      else {
        uVar6 = thunk_FUN_00430750(SVar3);
      }
      thunk_FUN_00417ff0(this_00,uVar6);
    }
    iVar10 = STJellyGunC::sub_00415B30
                       ((STJellyGunC *)this_00,*(short *)&this_00->field_0x24b,
                        *(short *)&this_00->field_0x24d,*(short *)&this_00->field_0x24f,
                        *(short *)&this_00->field_0x251,*(short *)&this_00->field_0x253,
                        *(short *)&this_00->field_0x255,this_00->field_0x61);
    uVar8 = extraout_var;
    if (iVar10 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x8a);
      uVar8 = extraout_var_00;
    }
    *(int *)&this_00->field_0x68 = *(int *)&this_00->field_0x68 + 1;
    uVar8 = (*this_00->vtable->vfunc_10)
                      (CONCAT22(uVar8,*(undefined2 *)&this_00->field_0x24b),
                       *(undefined2 *)&this_00->field_0x24d,
                       CONCAT22(uVar8,*(undefined2 *)&this_00->field_0x24f),
                       *(undefined2 *)&this_00->field_0x251,
                       CONCAT22(uVar8,*(undefined2 *)&this_00->field_0x253),
                       *(undefined2 *)&this_00->field_0x255);
    *(undefined2 *)&this_00->field_0x6c = uVar8;
    *(undefined2 *)&this_00->field_0x268 = *(undefined2 *)&this_00->field_0x41;
    *(undefined2 *)&this_00->field_0x26a = *(undefined2 *)&this_00->field_0x43;
    *(undefined2 *)&this_00->field_0x26c = *(undefined2 *)&this_00->field_0x45;
    switch(this_00->field_0259) {
    case CASE_96:
    case CASE_97:
    case CASE_98:
    case CASE_9A:
    case CASE_9B:
    case CASE_9C:
    case CASE_B4:
      *(undefined2 *)&this_00->field_0x231 = 0x32;
      break;
    case CASE_99:
    case CASE_AD:
      *(undefined2 *)&this_00->field_0x231 = 0xf;
      break;
    case CASE_9D:
    case CASE_9E:
    case CASE_B6:
    case CASE_BA:
      *(undefined2 *)&this_00->field_0x231 = 0x1e;
      break;
    case CASE_9F:
    case CASE_A0:
    case CASE_A1:
    case CASE_A3:
    case CASE_A4:
    case CASE_AE:
    case CASE_B7:
    case CASE_B8:
    case CASE_B9:
    case CASE_BF:
      *(undefined2 *)&this_00->field_0x231 = 0;
      break;
    default:
      goto switchD_00640ad9_caseD_a2;
    case CASE_A5:
      *(undefined2 *)&this_00->field_0x231 = 0x3c;
      break;
    case CASE_AC:
      *(undefined2 *)&this_00->field_0x231 = 0x28;
    }
    *(undefined2 *)&this_00->field_0x233 = 0;
switchD_00640ad9_caseD_a2:
    puVar13 = (undefined4 *)
              thunk_FUN_0041dc40(local_248,*(undefined4 *)&this_00->field_0x231,
                                 *(undefined2 *)&this_00->field_0x235,*(short *)&this_00->field_0x6c
                                );
    uVar14 = *puVar13;
    *(undefined4 *)&this_00->field_0x237 = uVar14;
    *(undefined2 *)&this_00->field_0x23b = *(undefined2 *)(puVar13 + 1);
    piVar11 = (int *)this_00->field_0259;
    if (piVar11 == (int *)0x9a) {
      piVar11 = thunk_FUN_0062bbc0((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_0x24f,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)*(short *)&this_00->field_0x231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar11;
      uVar14 = extraout_EDX;
    }
    if (this_00->field_0259 == CASE_97) {
      local_4c = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,
                            CONCAT31((int3)((uint)piVar11 >> 8),this_00->field_0024),
                            CONCAT22((short)((uint)uVar14 >> 0x10),
                                     *(undefined2 *)&this_00->field_0x262),CASE_1);
      if ((local_4c != (STGameObjC *)0x0) &&
         (iVar10 = (*local_4c->vtable->vfunc_2C)(), iVar10 == 0x3f)) {
        this_00->field_0x288 = 1;
      }
    }
    local_60[0] = '\0';
    local_48[0] = '\0';
    local_2c[0] = '\0';
    local_74[0] = '\0';
    switch(this_00->field_0259) {
    case CASE_96:
    case CASE_B4:
      pcVar19 = s_atorsm_007d25b8;
      break;
    case CASE_97:
      pcVar19 = s_atorme_007d25b0;
      break;
    case CASE_98:
      pcVar19 = s_atorla_007d25a8;
      break;
    case CASE_99:
      pcVar19 = s_acas0_007d2580;
      break;
    case CASE_9A:
      pcVar19 = s_aemtor_007d25a0;
      break;
    case CASE_9B:
    case CASE_9D:
      pcVar19 = s_alray1_007d2590;
      break;
    case CASE_9C:
      pcVar19 = s_alray0_007d2598;
      break;
    case CASE_9E:
      pcVar19 = s_alray2_007d2588;
      break;
    case CASE_9F:
    case CASE_A3:
    case CASE_A4:
      pcVar19 = &DAT_007d2578;
      break;
    case CASE_A0:
    case CASE_BF:
      pcVar19 = &DAT_007d251c;
      break;
    case CASE_A1:
      pcVar19 = s_pr_torp_007d256c;
      break;
    default:
      goto switchD_00640c2d_caseD_a2;
    case CASE_A5:
      pcVar19 = s_satlas_007d255c;
      break;
    case CASE_AC:
      pcVar19 = s_aspltor_007d2550;
      break;
    case CASE_AD:
      pcVar19 = s_neuro_007d252c;
      break;
    case CASE_AE:
      pcVar19 = s_agcan_007d2564;
      break;
    case CASE_B6:
    case CASE_BA:
      pcVar19 = s_eshell_007d2524;
      break;
    case CASE_B7:
      pcVar19 = s_ionbomb_007d253c;
      break;
    case CASE_B8:
      pcVar19 = s_biaacc_007d2548;
      break;
    case CASE_B9:
      pcVar19 = &DAT_007d2534;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_60;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
switchD_00640c2d_caseD_a2:
    puVar13 = &this_00->field_01D5;
    iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar13,0,DAT_00806774,local_60,0x1d);
    if (iVar10 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0xe1);
    }
    switch(this_00->field_0259) {
    case CASE_9F:
    case CASE_A0:
    case CASE_A1:
    case CASE_A3:
    case CASE_A4:
    case CASE_AE:
    case CASE_BF:
      iVar20 = 9;
      iVar10 = 0;
      break;
    default:
      local_10 = (int)*(short *)&this_00->field_0x24f;
      local_17c = (float)(int)*(short *)&this_00->field_0x24b * _DAT_007904f8 * _DAT_007904f0;
      local_178 = (float)(int)*(short *)&this_00->field_0x24d * _DAT_007904f8 * _DAT_007904f0;
      local_174 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0((void *)this_00->field_0211,&local_198);
      local_10 = (int)*(short *)&this_00->field_0x255;
      local_188 = (float)(int)*(short *)&this_00->field_0x251 * _DAT_007904f8 * _DAT_007904f0;
      local_184 = (float)(int)*(short *)&this_00->field_0x253 * _DAT_007904f8 * _DAT_007904f0;
      local_180 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      FUN_006e25d0((void *)this_00->field_0211,&local_1a8);
      sVar9 = (*this_00->vtable->vfunc_14)
                        (local_198 >> 0x10,local_194 >> 0x10,local_190 >> 0x10,local_1a8 >> 0x10,
                         local_1a4 >> 0x10,local_1a0 >> 0x10);
      iVar10 = *(int *)(&DAT_007d2138 + sVar9 * 4);
      iVar20 = iVar10;
      break;
    case CASE_A5:
      iVar20 = 0;
      iVar10 = 0;
    }
    thunk_FUN_004abce0(puVar13,0,iVar10,iVar20,'\0');
    STT3DSprC::StartShow((STT3DSprC *)puVar13,0,PTR_00802a38->field_00E4);
    uVar14 = STAllPlayersC::RegisterTorpedo(g_sTAllPlayers_007FA174,(int)this_00,-1);
    *(short *)&this_00->field_0x26e = (short)uVar14;
    if (this_00->field_0259 != CASE_A3) {
      iVar10 = (int)*(short *)&this_00->field_0x47;
      iVar20 = (int)*(short *)&this_00->field_0x49;
      if ((((iVar10 < 0) || (iVar20 < 0)) || (g_worldGrid.sizeX <= iVar10)) ||
         (g_worldGrid.sizeY <= iVar20)) {
        bVar23 = false;
      }
      else {
        bVar23 = *(char *)(g_worldGrid.sizeX * iVar20 + DAT_007fb26c + iVar10) != '\0';
      }
      if (bVar23) {
        if ((&DAT_007fb24c)[*(int *)&this_00->field_0024] == 0) {
          bVar23 = false;
        }
        else {
          bVar23 = *(char *)(g_worldGrid.sizeX * iVar20 +
                             (&DAT_007fb24c)[*(int *)&this_00->field_0024] + iVar10) != '\0';
        }
        if (bVar23) {
          this_00->field_0x286 = 1;
        }
      }
    }
    switch(this_00->field_0259) {
    case CASE_96:
      local_c = 0x44f;
      break;
    case CASE_97:
      local_c = 0x451;
      break;
    case CASE_98:
      local_c = 0x453;
      break;
    case CASE_99:
      local_c = 0x455;
      break;
    case CASE_9A:
      local_c = 0x457;
      break;
    case CASE_9B:
      local_c = 0x491;
      break;
    case CASE_9C:
      local_c = 0x46b;
      break;
    case CASE_9D:
      local_c = 0x46d;
      break;
    case CASE_9E:
      local_c = 0x46f;
      break;
    case CASE_9F:
      local_c = 0x465;
      break;
    case CASE_A0:
      local_c = 0x467;
      break;
    case CASE_A1:
      local_c = 0x469;
      break;
    case CASE_A3:
      local_c = 0x48f;
      break;
    case CASE_A4:
      local_c = 0x493;
      break;
    case CASE_A5:
      local_c = 0x485;
      break;
    case CASE_AC:
      local_c = 0x473;
      break;
    case CASE_AD:
      local_c = 0x481;
      break;
    case CASE_AE:
      local_c = 0x48d;
      break;
    case CASE_B4:
      local_c = 0x471;
      break;
    case CASE_B6:
      local_c = 0x479;
      break;
    case CASE_B7:
      local_c = 0x47b;
      break;
    case CASE_B8:
      local_c = 0x47f;
      break;
    case CASE_B9:
      local_c = 0x47d;
      break;
    case CASE_BA:
      local_c = 0x483;
      break;
    case CASE_BF:
      local_c = 0x487;
    }
    goto switchD_00640fbd_caseD_a2;
  }
  if (*(int *)&this_00->field_0x23d != 1) {
    bVar7 = this_00->field_0x27c + 1;
    this_00->field_0x27c = bVar7;
    if ((this_00->field_0x282 != 0) && ((byte)this_00->field_0x283 <= bVar7)) {
      if (this_00->field_0x283 == bVar7) {
        STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,2,PTR_00802a38->field_00E4);
      }
      else {
        bVar7 = this_00->field_0x284 + 1;
        this_00->field_0x284 = bVar7;
        if (bVar7 == this_00->field_0x282) {
          STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,2);
          this_00->field_0x282 = 0;
        }
        else {
          STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\x02',(uint)bVar7);
          STT3DSprC::ShowCurFase((STT3DSprC *)&this_00->field_01D5,'\x02');
        }
      }
    }
    if (this_00->field_0x27c == '\x05') {
      if (this_00->field_0x288 == '\x02') {
        uVar15 = thunk_FUN_00645d30(*(int *)&this_00->field_0024,this_00->field_0259);
        this_00->field_0x25d = (char)uVar15;
        local_c4 = *(int *)(&DAT_007e6468 + (this_00->field_0259 * 5 + -0x2ee + (uVar15 & 0xff)) * 4
                           );
        thunk_FUN_006383e0((int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43,
                           (int)*(short *)&this_00->field_0x45,*(undefined4 *)&this_00->field_0024,
                           (short)*(undefined4 *)&this_00->field_0x25e,
                           *(undefined2 *)&this_00->field_0x262,this_00->field_0259,local_c4 / 2,1);
      }
      if (*(int *)&this_00->field_0x270 == 1) {
        iVar10 = FUN_006e62d0(PTR_00802a38,*(int *)&this_00->field_0x274,(int *)&local_30);
        if (iVar10 == -4) {
          thunk_FUN_006457e0((int)this_00);
          g_currentExceptionFrame = local_28c.previous;
          return 0;
        }
        uVar15 = thunk_FUN_00645d30(*(int *)&this_00->field_0024,this_00->field_0259);
        this_00->field_0x25d = (char)uVar15;
        SVar3 = this_00->field_0259;
        if (SVar3 == CASE_9A) {
          iVar10 = 0;
          uVar15 = thunk_FUN_004ad650((int)local_30 + 0x1d5);
          thunk_FUN_00637e60(uVar15,iVar10);
          local_b4 = *(undefined4 *)(&DAT_007d21f8 + (uint)(byte)this_00->field_0x25d * 4);
        }
        else if (SVar3 == CASE_AD) {
          local_b4 = *(undefined4 *)(&DAT_007d220c + (uVar15 & 0xff) * 4);
        }
        else if (SVar3 == CASE_A1) {
          local_b4 = *(undefined4 *)(&DAT_007d2220 + (uVar15 & 0xff) * 4);
        }
        else {
          local_b4 = 0;
        }
        local_bc = *(undefined4 *)&this_00->field_0024;
        local_b8 = *(undefined2 *)&this_00->field_0x262;
        local_c0 = this_00->field_0259;
        local_b6 = *(undefined2 *)&this_00->field_0x25e;
        local_c4 = *(int *)(&DAT_007e6468 +
                           (local_c0 * 5 + -0x2ee + (uint)(byte)this_00->field_0x25d) * 4);
        local_b0 = 0;
        if (this_00->field_0x285 == '\x01') {
          local_c4 = (int)(local_c4 + (local_c4 >> 0x1f & 3U)) >> 2;
        }
        iVar10 = (**(code **)(*local_30 + 0x2c))();
        if (iVar10 == 0x68) {
          uVar8 = *(undefined2 *)&this_00->field_0x245;
          piVar11 = local_220;
          for (iVar10 = 0x16; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          local_220[0] = 0x15e;
          local_220[3] = 1;
          local_220[2] = 1;
          local_220[1] = local_30[9];
          local_208 = *(undefined2 *)&this_00->field_0x249;
          local_20a = *(undefined2 *)&this_00->field_0x247;
          local_1ef = *(undefined2 *)((int)local_30 + 0x32);
          local_1f3 = local_30[6];
          local_1f4 = this_00->field_0x25d;
          local_20c = uVar8;
          iVar10 = thunk_FUN_004e60d0(local_30[9],0x7b);
          if (iVar10 == 0) {
            local_1ed = (int)(local_c4 + (local_c4 >> 0x1f & 3U)) >> 2;
          }
          else {
            local_1ed = local_c4 / 2;
          }
          local_202 = *(undefined2 *)&this_00->field_0x45;
          local_204 = *(undefined2 *)&this_00->field_0x43;
          local_1fc = *(undefined2 *)&this_00->field_0x38;
          local_206 = *(undefined2 *)&this_00->field_0x41;
          local_1fe = *(undefined2 *)&this_00->field_0x36;
          local_200 = *(undefined2 *)&this_00->field_0x34;
          local_1f8 = 1;
          local_1fa = 0;
          (*PTR_00802a38->vtable->vfunc_08)(0x147,0,0,local_220,0);
        }
        local_22c = &local_c4;
        local_238 = local_30[2];
        local_234 = 2;
        local_230 = 0x110;
        (*PTR_00802a38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)PTR_00802a38,(int)local_240);
      }
    }
    puVar13 = &this_00->field_01D5;
    iVar10 = thunk_FUN_004acd30(puVar13,'\0');
    if (iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) {
      STT3DSprC::StopShow((STT3DSprC *)puVar13,0);
    }
    iVar10 = thunk_FUN_004acd30(puVar13,'\0');
    if ((iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) && (this_00->field_0x282 == '\0'))
    goto LAB_00642c6e;
    goto cf_common_exit_00642C8B;
  }
  if (this_00->field_0x27d == '\0') goto cf_common_exit_00642C8B;
  local_80 = (int)*(short *)&this_00->field_0x41;
  local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)&this_00->field_0x49);
  sVar9 = *(short *)&this_00->field_0x47;
  local_7c = (int)*(short *)&this_00->field_0x43;
  local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)&this_00->field_0x4b);
  local_78 = (int)*(short *)&this_00->field_0x45;
  iVar10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this_00,&local_a4,&local_9c);
  if (iVar10 == -1) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x15c);
  }
  if (((sVar9 == *(short *)&this_00->field_0x47) &&
      ((short)local_10 == *(short *)&this_00->field_0x49)) &&
     ((short)local_84 == *(short *)&this_00->field_0x4b)) {
    iVar20 = 0;
  }
  else {
    iVar20 = 1;
  }
  local_34 = iVar20;
  if (iVar10 == 0) {
    if (this_00->field_0x288 == '\0') {
      thunk_FUN_006443c0(this_00,local_98,local_8c,local_a0);
      iVar10 = STJellyGunC::sub_00415B30
                         ((STJellyGunC *)this_00,*(short *)&this_00->field_0x41,
                          *(short *)&this_00->field_0x43,*(short *)&this_00->field_0x45,local_98[0],
                          local_8c[0],local_a0[0],this_00->field_0x61);
      if (iVar10 != 0) {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x170);
      }
      *(undefined4 *)&this_00->field_0x7a = 0;
    }
    else {
      this_00->field_0x288 = 2;
      thunk_FUN_00638230(this_00->field_01ED,5,(int)*(short *)&this_00->field_0x41,
                         (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45);
    }
  }
  if ((local_9c == 1) &&
     (((*(short *)&this_00->field_0x47 < 0 ||
       (g_worldGrid.sizeX + -1 < (int)*(short *)&this_00->field_0x47)) ||
      ((*(short *)&this_00->field_0x49 < 0 ||
       ((g_worldGrid.sizeY + -1 < (int)*(short *)&this_00->field_0x49 ||
        (g_worldGrid.sizeZ + -1 < (int)*(short *)&this_00->field_0x4b)))))))) {
    thunk_FUN_006457e0((int)this_00);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  piVar11 = local_13c;
  for (iVar10 = 0x1c; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::thunk_FUN_00644410
            ((AnonReceiver_00644410 *)this_00,&local_18,&local_120,&local_11c,local_118);
  if (local_18 == 0) {
    if (this_00->field_0x288 == '\x02') {
      local_18 = 1;
      *(undefined4 *)&this_00->field_0x270 = 0;
    }
  }
  else if (this_00->field_0x288 != '\0') {
    this_00->field_0x288 = 0;
  }
  if ((iVar20 != 0) && (this_00->field_0259 != CASE_A3)) {
    iVar20 = (int)*(short *)&this_00->field_0x47;
    iVar10 = (int)*(short *)&this_00->field_0x49;
    if ((iVar20 < 0) ||
       (((iVar10 < 0 || (g_worldGrid.sizeX <= iVar20)) || (g_worldGrid.sizeY <= iVar10)))) {
      bVar23 = false;
    }
    else {
      bVar23 = *(char *)(g_worldGrid.sizeX * iVar10 + DAT_007fb26c + iVar20) != '\0';
    }
    iVar17 = local_34;
    if (bVar23) {
      if ((&DAT_007fb24c)[*(int *)&this_00->field_0024] == 0) {
        bVar23 = false;
      }
      else {
        bVar23 = *(char *)(g_worldGrid.sizeX * iVar10 +
                           (&DAT_007fb24c)[*(int *)&this_00->field_0024] + iVar20) != '\0';
      }
      if ((!bVar23) || (this_00->field_0x286 == '\0')) {
        local_18 = 1;
        *(undefined4 *)&this_00->field_0x270 = 0;
        iVar17 = 2;
      }
    }
    if (1 < iVar17) {
      if ((this_00->field_0259 == CASE_AD) &&
         (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0024,0x7e), iVar10 != 0)) {
        iVar10 = 0x1389;
      }
      else {
        iVar10 = *(int *)(&DAT_007e6468 + (this_00->field_0259 - CASE_96) * 0x14);
      }
      uVar15 = thunk_FUN_00497030((int)*(short *)&this_00->field_0x47,
                                  (int)*(short *)&this_00->field_0x49,*(int *)&this_00->field_0024,1
                                  ,iVar10);
      if ((int)uVar15 < 0) {
        local_18 = 0;
      }
      else {
        thunk_FUN_00497850((int)*(short *)&this_00->field_0x268,(int)*(short *)&this_00->field_0x26a
                           ,(int)*(short *)&this_00->field_0x26c,(int)*(short *)&this_00->field_0x41
                           ,(int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45,
                           uVar15,&local_120,&local_11c,local_118);
        thunk_FUN_00637ae0(local_120,local_11c,local_118[0]);
        local_18 = 2;
      }
    }
  }
  if (local_18 == 2) {
    thunk_FUN_006457e0((int)this_00);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  sVar9 = *(short *)&this_00->field_0x268;
  local_13c[4] = (int)sVar9;
  local_128 = (int)*(short *)&this_00->field_0x26a;
  local_124 = (int)*(short *)&this_00->field_0x26c;
  *(undefined2 *)&this_00->field_0x268 = (undefined2)local_120;
  *(undefined2 *)&this_00->field_0x26a = (undefined2)local_11c;
  *(undefined2 *)&this_00->field_0x26c = (undefined2)local_118[0];
  SVar3 = this_00->field_0259;
  if ((((((SVar3 == CASE_9F) || (SVar3 == CASE_A0)) || (SVar3 == CASE_BF)) ||
       ((SVar3 == CASE_A3 || (SVar3 == CASE_9A)))) || (SVar3 == CASE_9B)) ||
     (((SVar3 == CASE_9C || (SVar3 == CASE_9D)) ||
      ((SVar3 == CASE_9E || ((SVar3 == CASE_AE || (SVar3 == CASE_A5)))))))) goto LAB_0064190c;
  if ((byte)this_00->field_0x27d < 9) {
    local_4c = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,CONCAT31((int3)(SVar3 >> 8),this_00->field_0024),
                          CONCAT22(sVar9 >> 0xf,*(undefined2 *)&this_00->field_0x262),CASE_1);
    if ((local_4c == (STGameObjC *)0x0) || (this_00->field_0x27d == '\b')) {
      *(undefined4 *)&this_00->field_0x264 = 0;
    }
    if (local_4c != (STGameObjC *)0x0) {
      local_d8 = thunk_FUN_004ad650((int)&local_4c[1].field_0x4);
    }
  }
  local_d4 = *(undefined4 *)&this_00->field_0x264;
  bVar23 = false;
  switch(this_00->field_0259) {
  case CASE_96:
  case CASE_97:
  case CASE_98:
  case CASE_99:
  case CASE_9A:
  case CASE_9B:
  case CASE_9C:
  case CASE_9D:
  case CASE_9E:
  case CASE_A5:
  case CASE_B4:
  case CASE_B8:
    local_13c[0] = 1;
    break;
  default:
    goto switchD_006415e9_caseD_9f;
  case CASE_A1:
    local_13c[0] = 7;
    local_13c[3] = 0xffffffff;
    break;
  case CASE_A4:
    local_13c[0] = 2;
    local_13c[1] = 1;
    bVar23 = true;
    local_d0 = 1;
    goto switchD_006415e9_caseD_9f;
  case CASE_AC:
  case CASE_AD:
    local_13c[0] = 6;
  }
  local_13c[1] = 1;
  bVar23 = true;
switchD_006415e9_caseD_9f:
  if ((this_00->field_0x27d != '\0') && (bVar23)) {
    if (this_00->field_0259 == CASE_A1) {
      iVar10 = FUN_006acf0d(local_80,local_7c,local_78,(int)*(short *)&this_00->field_0x41,
                            (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45)
      ;
      if (iVar10 == 0) {
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,(int)*(short *)&this_00->field_0x41,
                   (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45,0,0,0,0,0
                   ,0,-1,0,0);
      }
      else {
        local_94 = ((*(short *)&this_00->field_0x41 - local_80) * 10000) / iVar10;
        iVar17 = local_94 * iVar10;
        local_10 = ((*(short *)&this_00->field_0x43 - local_7c) * 10000) / iVar10;
        local_14 = local_10 * iVar10;
        local_a8 = local_10 / 10000;
        local_cc = iVar17 / 40000 + local_a8 + local_80;
        local_84 = local_94 / 10000;
        local_34 = local_14 / 40000 + local_84 + local_7c;
        uVar15 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar15;
        iVar10 = (((*(short *)&this_00->field_0x45 - local_78) * 10000) / iVar10) * iVar10;
        iVar20 = (uVar15 >> 0x10) % 0xb + 5;
        local_88 = iVar10;
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,local_cc,local_34,iVar10 / 40000 + local_78,
                   (short)((iVar20 * local_10) / 10000),(short)((iVar20 * local_94) / 10000),0,0,0,0
                   ,-1,0,0);
        local_34 = (local_14 * 3) / 40000 + local_84 + local_7c;
        uVar15 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar15;
        iVar20 = (uVar15 >> 0x10) % 0xb + 5;
        lVar4 = (longlong)(iVar20 * local_10) * -0x68db8bad;
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,((iVar17 * 3) / 40000 - local_a8) + local_80,local_34
                   ,(iVar10 * 3) / 40000 + local_78,
                   (short)(int)(lVar4 >> 0x2c) - (short)(lVar4 >> 0x3f),
                   (short)((iVar20 * local_94) / 10000),0,0,0,0,-1,0,0);
      }
    }
    else {
      TraksClassTy::TraksCreateCollection(g_traksClass_00802A7C,local_13c);
    }
  }
LAB_0064190c:
  if ((((this_00->field_0259 == CASE_99) || (this_00->field_0259 == CASE_B7)) && (local_18 == 0)) &&
     (0x191 < (int)((uint)(byte)this_00->field_0x61 * *(int *)&this_00->field_0x68))) {
    local_18 = 1;
    *(undefined4 *)&this_00->field_0x270 = 0;
  }
  if (this_00->field_0259 == CASE_9A) {
    thunk_FUN_0062c2d0(*(AnonShape_0062C2D0_06591E1F **)&this_00->field_0x27e,
                       (int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43,
                       (int)*(short *)&this_00->field_0x45);
  }
  if (local_18 != 1) {
cf_common_exit_00642C8B:
    iVar10 = (*this_00->vtable->vfunc_D8)();
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x30f);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x23d = 0;
  this_00->field_0x27c = 0;
  STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,0);
  if (this_00->field_0259 == CASE_99) {
    pSVar16 = STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,
                         CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0024),
                         CONCAT22(extraout_var_01,*(undefined2 *)&this_00->field_0x262),CASE_1);
    if (pSVar16 == (STGameObjC *)0x0) {
      iVar10 = *(int *)&this_00->field_0x1c;
LAB_00641a40:
      uVar15 = iVar10 * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar15;
      uVar24 = 7;
    }
    else {
      iVar10 = (*pSVar16->vtable->vfunc_2C)();
      if (iVar10 != 0x10) {
        iVar10 = *(int *)&this_00->field_0x1c;
        goto LAB_00641a40;
      }
      uVar15 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar15;
      uVar24 = 5;
    }
    thunk_FUN_0057b670((int *)this_00,0,uVar24,1,uVar15 >> 0x10);
  }
  if (this_00->field_0259 == CASE_B7) {
    uVar15 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar15;
    thunk_FUN_0057b670((int *)this_00,0,5,1,uVar15 >> 0x10);
  }
  if (this_00->field_0259 == CASE_AC) {
    thunk_FUN_0057ba30(this_00,1);
  }
  local_48[0] = '\0';
  local_2c[0] = '\0';
  local_74[0] = '\0';
  local_5 = 0;
  switch(this_00->field_0259) {
  case CASE_96:
  case CASE_B4:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2514;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x14;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_97:
    if (this_00->field_0x288 == '\x02') {
      uVar15 = 0xffffffff;
      local_5 = 10;
      pcVar19 = &DAT_007d2500;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_48;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0588;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_2c;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0564;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_74;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
    }
    else {
      uVar15 = 0xffffffff;
      local_5 = 0x14;
      pcVar19 = &DAT_007d0594;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_48;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0588;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_2c;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d0564;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_74;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
    }
    break;
  case CASE_98:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24f8;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x12;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = s_expmask3_007d057c;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24ec;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_99:
  case CASE_A3:
    pcVar19 = s_expcshl_007d24bc;
    goto LAB_006424a7;
  case CASE_9A:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2500;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 10;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = s_expmask3_007d057c;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0564;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_9B:
  case CASE_9D:
    uVar15 = 0xffffffff;
    pcVar19 = s_exprlas_007d24d4;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_9C:
    uVar15 = 0xffffffff;
    pcVar19 = s_expllas_007d24e0;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_9E:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24c8;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_9F:
    pcVar19 = s_exphfs_007d24b4;
    goto LAB_006424a7;
  case CASE_A0:
  case CASE_A1:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24ac;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 10;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0588;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_A4:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24a4;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x22;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = s_expmask3_007d057c;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d24ec;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_A5:
    uVar15 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar15;
    uVar15 = (uVar15 >> 0x10) % 3;
    if (uVar15 == 0) {
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2490;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      local_5 = 0x16;
      iVar10 = -1;
      pcVar19 = local_48;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_2c;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2484;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_74;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
    }
    else if (uVar15 == 1) {
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2474;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      local_5 = 0x16;
      iVar10 = -1;
      pcVar19 = local_48;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_2c;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2484;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_74;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
    }
    else if (uVar15 == 2) {
      uVar15 = 0xffffffff;
      local_5 = 0x16;
      pcVar19 = &DAT_007d247c;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_48;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_2c;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d24ec;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_74;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
    }
    else {
      uVar15 = 0xffffffff;
      local_5 = 0x16;
      pcVar19 = &DAT_007d2490;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_48;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = s_expmask3_007d057c;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_2c;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
      uVar15 = 0xffffffff;
      pcVar19 = &DAT_007d2484;
      do {
        pcVar22 = pcVar19;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      iVar10 = -1;
      pcVar19 = local_74;
      do {
        pcVar21 = pcVar19;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar21 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar1 != '\0');
      pcVar19 = pcVar22 + -uVar15;
      pcVar22 = pcVar21 + -1;
      for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar22 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar22 = pcVar22 + 1;
      }
    }
    break;
  case CASE_AC:
    uVar15 = 0xffffffff;
    pcVar19 = s_expemag_007d2468;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 10;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0564;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_AD:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2444;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_AE:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2498;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 9;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_B6:
  case CASE_BA:
    pcVar19 = &DAT_007d2438;
LAB_006424a7:
    uVar15 = 0xffffffff;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    pcVar19 = &DAT_007d0570;
LAB_00642561:
    uVar15 = 0xffffffff;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0xf;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_B7:
  case CASE_B9:
    uVar15 = 0xffffffff;
    pcVar19 = s_explioc_007d2450;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_B8:
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d245c;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    local_5 = 0x12;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d2508;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0570;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_74;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    break;
  case CASE_BF:
    uVar15 = 0xffffffff;
    pcVar19 = s_exppar_007d2430;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_48;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar19 = &DAT_007d0588;
    do {
      pcVar22 = pcVar19;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar22 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar22;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    iVar10 = -1;
    pcVar19 = local_2c;
    do {
      pcVar21 = pcVar19;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    pcVar19 = pcVar22 + -uVar15;
    pcVar22 = pcVar21 + -1;
    for (uVar24 = uVar15 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar22 = pcVar22 + 1;
    }
    pcVar19 = &DAT_007d0564;
    goto LAB_00642561;
  }
  puVar13 = &this_00->field_01D5;
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar13,0,DAT_00806774,local_48,0x1d);
  if (iVar10 != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x263);
  }
  thunk_FUN_004ac610(puVar13,'\0');
  if ((local_74[0] != '\0') &&
     (iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar13,2,DAT_00806764,local_74,0x1d),
     iVar10 == 0)) {
    thunk_FUN_004ac610(puVar13,'\x02');
    uVar14 = thunk_FUN_004acd30(puVar13,'\x02');
    this_00->field_0x282 = (char)uVar14;
    this_00->field_0x283 = local_5;
    this_00->field_0x284 = 0;
  }
  if (local_2c[0] != '\0') {
    iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar13,1,DAT_00806774,local_2c,0x1d);
    if (iVar10 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x270);
    }
    thunk_FUN_004ac610(puVar13,'\x01');
  }
  iVar10 = STT3DSprC::StartShow((STT3DSprC *)puVar13,0,PTR_00802a38->field_00E4);
  if (iVar10 != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x274);
  }
  iVar10 = thunk_FUN_004acd30(puVar13,'\x01');
  if (0 < iVar10) {
    iVar10 = STT3DSprC::StartShow((STT3DSprC *)puVar13,1,PTR_00802a38->field_00E4);
    if (iVar10 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x277);
    }
    thunk_FUN_004acf20(puVar13,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(puVar13,'\x01');
  }
  uVar25 = 0x45;
  uVar14 = 0x5a;
  iVar10 = 1;
  uVar15 = thunk_FUN_004ad650((int)puVar13);
  FUN_006ea4e0((void *)this_00->field_0211,uVar15,iVar10,uVar14,uVar25);
  iVar10 = (*this_00->vtable->vfunc_D8)();
  if (iVar10 != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_torp_cpp_007d25c0,0x27d);
  }
  switch(this_00->field_0259) {
  case CASE_96:
    local_c = 0x450;
    break;
  case CASE_97:
    local_c = 0x452;
    break;
  case CASE_98:
    local_c = 0x454;
    break;
  case CASE_99:
    local_c = 0x456;
    break;
  case CASE_9A:
    local_c = 0x458;
    break;
  case CASE_9B:
    local_c = 0x492;
    break;
  case CASE_9C:
    local_c = 0x46c;
    break;
  case CASE_9D:
    local_c = 0x46e;
    break;
  case CASE_9E:
    local_c = 0x470;
    break;
  case CASE_9F:
    local_c = 0x466;
    break;
  case CASE_A0:
    local_c = 0x468;
    break;
  case CASE_A1:
    local_c = 0x46a;
    break;
  case CASE_A3:
    local_c = 0x490;
    break;
  case CASE_A4:
    local_c = 0x494;
    break;
  case CASE_A5:
    local_c = 0x486;
    break;
  case CASE_AC:
    local_c = 0x474;
    break;
  case CASE_AD:
    local_c = 0x482;
    break;
  case CASE_AE:
    local_c = 0x48e;
    break;
  case CASE_B4:
    local_c = 0x472;
    break;
  case CASE_B6:
    local_c = 0x47a;
    break;
  case CASE_B7:
    local_c = 0x47c;
    break;
  case CASE_B8:
    local_c = 0x480;
    break;
  case CASE_B9:
    local_c = 0x47e;
    break;
  case CASE_BA:
    local_c = 0x484;
    break;
  case CASE_BF:
    local_c = 0x488;
  }
switchD_00640fbd_caseD_a2:
  (*this_00->vtable->vfunc_90)(2,local_c);
  g_currentExceptionFrame = local_28c.previous;
  return 0;
}

