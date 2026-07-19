
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::GetMessage */

undefined4 __thiscall STTorpC::GetMessage(STTorpC *this,int param_1)

{
  char cVar1;
  short sVar2;
  Global_sub_00430750_param_1Enum GVar3;
  longlong lVar4;
  code *pcVar5;
  STSprGameObjC *this_00;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  int iVar17;
  byte *pbVar18;
  void *unaff_EDI;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  byte *pbVar22;
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
  undefined1 local_5;
  
  local_28c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_28c;
  local_c8 = (STSprGameObjC *)this;
  iVar10 = Library::MSVCRT::__setjmp3(local_28c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_28c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x350,0,iVar10,&DAT_007a4ccc
                                ,s_STTorpC__GetMessage_007d2418);
    if (iVar11 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x351);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return uVar15;
  }
  STSprGameObjC::GetMessage(local_c8,param_1);
  uVar16 = *(uint *)(param_1 + 0x10);
  if (3 < uVar16) {
    if (uVar16 != 0x108) {
      if (uVar16 != 0x10f) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_4c = (byte *)SaveTorpData((STTorpC *)this_00,(int *)&local_90);
      STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_4c,local_90)
      ;
      FUN_006ab060(&local_4c);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    iVar10 = this_00->field_0259;
    if (iVar10 == 0x9f) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xa0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xbf) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xa3) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xa4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xae) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xa5) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xa1) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xb4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xb6) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xb7) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xb9) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xad) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (iVar10 == 0xba) {
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
    sVar9 = (*this_00->vtable->slot_14)
                      (local_1b8 >> 0x10,local_1b4 >> 0x10,local_1b0 >> 0x10,local_1c8 >> 0x10,
                       local_1c4 >> 0x10,local_1c0 >> 0x10);
    thunk_FUN_004abce0(&this_00->field_01D5,0,*(int *)(&DAT_007d2138 + sVar9 * 4),
                       *(int *)(&DAT_007d2138 + sVar9 * 4),'\0');
    STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0,DAT_00802a38->field_00E4);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (uVar16 == 3) {
    STAllPlayersC::UnRegisterTorpedo(DAT_007fa174,*(short *)&this_00->field_0x26e,(int)this_00);
    FUN_006ae110(*(byte **)&this_00->field_0x241);
    thunk_FUN_004ad310((int)&this_00->field_01D5);
    thunk_FUN_0062c2a0((int *)&this_00->field_0x27e);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (uVar16 != 0) {
    if (uVar16 != 2) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    iVar10 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar10 + 0xc) != 1) {
      if (*(int *)(iVar10 + 0xc) != 2) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_158[0] = Library::DKW::LIB::FUN_006aac70(0x44);
      iVar11 = 0;
      do {
        *(int **)(iVar11 + local_158[0]) = DAT_00806774;
        iVar11 = iVar11 + 4;
      } while (iVar11 < 0x44);
      *(int **)(local_158[0] + 8) = DAT_00806764;
      local_158[4] = DAT_008032b8;
      local_158[1] = 0;
      local_158[2] = 0;
      local_158[3] = 0;
      local_144 = 0x10;
      local_140 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,local_158,
                 (undefined4 *)(*(int *)(iVar10 + 0x70) + iVar10));
      FUN_006ab060(local_158);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(iVar10 + 0x78) + iVar10));
      RestoreTorpData((STTorpC *)this_00,iVar10);
      STAllPlayersC::RegisterTorpedo(DAT_007fa174,(int)this_00,*(short *)&this_00->field_0x26e);
      if (this_00->field_0259 != 0x9a) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      piVar12 = thunk_FUN_0062bbc0((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_0x24f,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)*(short *)&this_00->field_0x231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar12;
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    puVar14 = (undefined4 *)(iVar10 + 0x14);
    puVar19 = (undefined4 *)&this_00->field_0x245;
    for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar19 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    }
    sVar9 = *(short *)&this_00->field_0x24b;
    if ((((sVar9 < 0) || (sVar2 = *(short *)&this_00->field_0x24d, sVar2 < 0)) ||
        (*(short *)&this_00->field_0x24f < 0)) ||
       ((DAT_007fb240 <=
         (short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)
                ) ||
        (DAT_007fb242 <=
         (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)
                ))))) {
LAB_00642c6e:
      thunk_FUN_006457e0((int)this_00);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    this_00->field_0x27d = 0;
    *(undefined4 *)&this_00->field_0x27e = 0;
    puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,8,1);
    *(uint **)&this_00->field_0x241 = puVar13;
    *(undefined4 *)&this_00->field_0x270 = 1;
    *(undefined4 *)&this_00->field_0x278 = 0xffffffff;
    this_00->field_0x27c = 0;
    *(undefined4 *)&this_00->field_0x23d = 1;
    GVar3 = this_00->field_0259;
    switch(GVar3) {
    case CASE_96:
    case CASE_97:
    case CASE_98:
    case CASE_99:
    case CASE_9A:
    case CASE_AC:
    case CASE_B4:
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        uVar6 = 1;
      }
      else {
        uVar6 = thunk_FUN_00430750(GVar3);
      }
      thunk_FUN_00417ff0(this_00,uVar6);
      uVar16 = thunk_FUN_004406c0(this_00->field_0x24);
      if ((uVar16 & 0xff) == 1) {
        iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x99);
        if (iVar10 != 0) {
          this_00->field_0x61 = ((byte)this_00->field_0x61 >> 1) + this_00->field_0x61;
        }
      }
      else if (((uVar16 & 0xff) == 2) &&
              (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x96), iVar10 != 0)) {
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
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        uVar6 = 1;
      }
      else {
        uVar6 = thunk_FUN_00430750(GVar3);
      }
      thunk_FUN_00417ff0(this_00,uVar6);
    }
    iVar10 = thunk_FUN_00415b30(this_00,*(short *)&this_00->field_0x24b,
                                *(short *)&this_00->field_0x24d,*(short *)&this_00->field_0x24f,
                                *(short *)&this_00->field_0x251,*(short *)&this_00->field_0x253,
                                *(short *)&this_00->field_0x255,this_00->field_0x61);
    uVar8 = extraout_var;
    if (iVar10 != 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x8a);
      uVar8 = extraout_var_00;
    }
    *(int *)&this_00->field_0x68 = *(int *)&this_00->field_0x68 + 1;
    uVar8 = (*this_00->vtable->slot_10)
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
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0xb4:
      *(undefined2 *)&this_00->field_0x231 = 0x32;
      break;
    case 0x99:
    case 0xad:
      *(undefined2 *)&this_00->field_0x231 = 0xf;
      break;
    case 0x9d:
    case 0x9e:
    case 0xb6:
    case 0xba:
      *(undefined2 *)&this_00->field_0x231 = 0x1e;
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
      *(undefined2 *)&this_00->field_0x231 = 0;
      break;
    default:
      goto switchD_00640ad9_caseD_a2;
    case 0xa5:
      *(undefined2 *)&this_00->field_0x231 = 0x3c;
      break;
    case 0xac:
      *(undefined2 *)&this_00->field_0x231 = 0x28;
    }
    *(undefined2 *)&this_00->field_0x233 = 0;
switchD_00640ad9_caseD_a2:
    puVar14 = (undefined4 *)
              thunk_FUN_0041dc40(local_248,*(undefined4 *)&this_00->field_0x231,
                                 *(undefined2 *)&this_00->field_0x235,*(short *)&this_00->field_0x6c
                                );
    uVar15 = *puVar14;
    *(undefined4 *)&this_00->field_0x237 = uVar15;
    *(undefined2 *)&this_00->field_0x23b = *(undefined2 *)(puVar14 + 1);
    piVar12 = (int *)this_00->field_0259;
    if (piVar12 == (int *)0x9a) {
      piVar12 = thunk_FUN_0062bbc0((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_0x24f,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)*(short *)&this_00->field_0x231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar12;
      uVar15 = extraout_EDX;
    }
    if (this_00->field_0259 == 0x97) {
      local_4c = (byte *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)piVar12 >> 8),this_00->field_0x24),
                                    CONCAT22((short)((uint)uVar15 >> 0x10),
                                             *(undefined2 *)&this_00->field_0x262),CASE_1);
      if ((local_4c != (byte *)0x0) &&
         (iVar10 = (**(code **)(*(int *)local_4c + 0x2c))(), iVar10 == 0x3f)) {
        this_00->field_0x288 = 1;
      }
    }
    local_60[0] = 0;
    local_48[0] = 0;
    local_2c[0] = 0;
    local_74[0] = 0;
    switch(this_00->field_0259) {
    case 0x96:
    case 0xb4:
      pcVar20 = s_atorsm_007d25b8;
      break;
    case 0x97:
      pcVar20 = s_atorme_007d25b0;
      break;
    case 0x98:
      pcVar20 = s_atorla_007d25a8;
      break;
    case 0x99:
      pcVar20 = s_acas0_007d2580;
      break;
    case 0x9a:
      pcVar20 = s_aemtor_007d25a0;
      break;
    case 0x9b:
    case 0x9d:
      pcVar20 = s_alray1_007d2590;
      break;
    case 0x9c:
      pcVar20 = s_alray0_007d2598;
      break;
    case 0x9e:
      pcVar20 = s_alray2_007d2588;
      break;
    case 0x9f:
    case 0xa3:
    case 0xa4:
      pcVar20 = &DAT_007d2578;
      break;
    case 0xa0:
    case 0xbf:
      pcVar20 = &DAT_007d251c;
      break;
    case 0xa1:
      pcVar20 = s_pr_torp_007d256c;
      break;
    default:
      goto switchD_00640c2d_caseD_a2;
    case 0xa5:
      pcVar20 = s_satlas_007d255c;
      break;
    case 0xac:
      pcVar20 = s_aspltor_007d2550;
      break;
    case 0xad:
      pcVar20 = s_neuro_007d252c;
      break;
    case 0xae:
      pcVar20 = s_agcan_007d2564;
      break;
    case 0xb6:
    case 0xba:
      pcVar20 = s_eshell_007d2524;
      break;
    case 0xb7:
      pcVar20 = s_ionbomb_007d253c;
      break;
    case 0xb8:
      pcVar20 = s_biaacc_007d2548;
      break;
    case 0xb9:
      pcVar20 = &DAT_007d2534;
    }
    uVar16 = 0xffffffff;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_60;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
switchD_00640c2d_caseD_a2:
    puVar14 = &this_00->field_01D5;
    iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,0,DAT_00806774,local_60,0x1d);
    if (iVar10 != 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0xe1);
    }
    switch(this_00->field_0259) {
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa3:
    case 0xa4:
    case 0xae:
    case 0xbf:
      iVar11 = 9;
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
      sVar9 = (*this_00->vtable->slot_14)
                        (local_198 >> 0x10,local_194 >> 0x10,local_190 >> 0x10,local_1a8 >> 0x10,
                         local_1a4 >> 0x10,local_1a0 >> 0x10);
      iVar10 = *(int *)(&DAT_007d2138 + sVar9 * 4);
      iVar11 = iVar10;
      break;
    case 0xa5:
      iVar11 = 0;
      iVar10 = 0;
    }
    thunk_FUN_004abce0(puVar14,0,iVar10,iVar11,'\0');
    STT3DSprC::StartShow((STT3DSprC *)puVar14,0,DAT_00802a38->field_00E4);
    uVar15 = STAllPlayersC::RegisterTorpedo(DAT_007fa174,(int)this_00,-1);
    *(short *)&this_00->field_0x26e = (short)uVar15;
    if (this_00->field_0259 != 0xa3) {
      iVar10 = (int)*(short *)&this_00->field_0x47;
      iVar11 = (int)*(short *)&this_00->field_0x49;
      if ((((iVar10 < 0) || (iVar11 < 0)) || (DAT_007fb240 <= iVar10)) || (DAT_007fb242 <= iVar11))
      {
        bVar23 = false;
      }
      else {
        bVar23 = *(char *)(DAT_007fb240 * iVar11 + DAT_007fb26c + iVar10) != '\0';
      }
      if (bVar23) {
        if ((&DAT_007fb24c)[*(int *)&this_00->field_0x24] == 0) {
          bVar23 = false;
        }
        else {
          bVar23 = *(char *)(DAT_007fb240 * iVar11 + (&DAT_007fb24c)[*(int *)&this_00->field_0x24] +
                            iVar10) != '\0';
        }
        if (bVar23) {
          this_00->field_0x286 = 1;
        }
      }
    }
    switch(this_00->field_0259) {
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
  if (*(int *)&this_00->field_0x23d != 1) {
    bVar7 = this_00->field_0x27c + 1;
    this_00->field_0x27c = bVar7;
    if ((this_00->field_0x282 != 0) && ((byte)this_00->field_0x283 <= bVar7)) {
      if (this_00->field_0x283 == bVar7) {
        STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,2,DAT_00802a38->field_00E4);
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
        uVar16 = thunk_FUN_00645d30(*(int *)&this_00->field_0x24,this_00->field_0259);
        this_00->field_0x25d = (char)uVar16;
        local_c4 = *(int *)(&DAT_007e6468 + (this_00->field_0259 * 5 + -0x2ee + (uVar16 & 0xff)) * 4
                           );
        thunk_FUN_006383e0((int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43,
                           (int)*(short *)&this_00->field_0x45,*(undefined4 *)&this_00->field_0x24,
                           (short)*(undefined4 *)&this_00->field_0x25e,
                           *(undefined2 *)&this_00->field_0x262,this_00->field_0259,local_c4 / 2,1);
      }
      if (*(int *)&this_00->field_0x270 == 1) {
        iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)&this_00->field_0x274,(int *)&local_30);
        if (iVar10 == -4) {
          thunk_FUN_006457e0((int)this_00);
          g_currentExceptionFrame = local_28c.previous;
          return 0;
        }
        uVar16 = thunk_FUN_00645d30(*(int *)&this_00->field_0x24,this_00->field_0259);
        this_00->field_0x25d = (char)uVar16;
        iVar10 = this_00->field_0259;
        if (iVar10 == 0x9a) {
          iVar10 = 0;
          uVar16 = thunk_FUN_004ad650((int)local_30 + 0x1d5);
          thunk_FUN_00637e60(uVar16,iVar10);
          local_b4 = *(undefined4 *)(&DAT_007d21f8 + (uint)(byte)this_00->field_0x25d * 4);
        }
        else if (iVar10 == 0xad) {
          local_b4 = *(undefined4 *)(&DAT_007d220c + (uVar16 & 0xff) * 4);
        }
        else if (iVar10 == 0xa1) {
          local_b4 = *(undefined4 *)(&DAT_007d2220 + (uVar16 & 0xff) * 4);
        }
        else {
          local_b4 = 0;
        }
        local_bc = *(undefined4 *)&this_00->field_0x24;
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
          piVar12 = local_220;
          for (iVar10 = 0x16; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar12 = 0;
            piVar12 = piVar12 + 1;
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
          (*DAT_00802a38->vtable->slot_08)(0x147,0,0,local_220,0);
        }
        local_22c = &local_c4;
        local_238 = local_30[2];
        local_234 = 2;
        local_230 = 0x110;
        (*DAT_00802a38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)DAT_00802a38,(int)local_240);
      }
    }
    puVar14 = &this_00->field_01D5;
    iVar10 = thunk_FUN_004acd30(puVar14,'\0');
    if (iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) {
      STT3DSprC::StopShow((STT3DSprC *)puVar14,0);
    }
    iVar10 = thunk_FUN_004acd30(puVar14,'\0');
    if ((iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) && (this_00->field_0x282 == '\0'))
    goto LAB_00642c6e;
    goto LAB_00642c8b;
  }
  if (this_00->field_0x27d == '\0') goto LAB_00642c8b;
  local_80 = (int)*(short *)&this_00->field_0x41;
  local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)&this_00->field_0x49);
  sVar9 = *(short *)&this_00->field_0x47;
  local_7c = (int)*(short *)&this_00->field_0x43;
  local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)&this_00->field_0x4b);
  local_78 = (int)*(short *)&this_00->field_0x45;
  iVar10 = thunk_FUN_00415ed0(this_00,&local_a4,&local_9c);
  if (iVar10 == -1) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x15c);
  }
  if (((sVar9 == *(short *)&this_00->field_0x47) &&
      ((short)local_10 == *(short *)&this_00->field_0x49)) &&
     ((short)local_84 == *(short *)&this_00->field_0x4b)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  local_34 = iVar11;
  if (iVar10 == 0) {
    if (this_00->field_0x288 == '\0') {
      thunk_FUN_006443c0(this_00,local_98,local_8c,local_a0);
      iVar10 = thunk_FUN_00415b30(this_00,*(short *)&this_00->field_0x41,
                                  *(short *)&this_00->field_0x43,*(short *)&this_00->field_0x45,
                                  local_98[0],local_8c[0],local_a0[0],this_00->field_0x61);
      if (iVar10 != 0) {
        RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x170);
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
       (DAT_007fb240 + -1 < (int)*(short *)&this_00->field_0x47)) ||
      ((*(short *)&this_00->field_0x49 < 0 ||
       ((DAT_007fb242 + -1 < (int)*(short *)&this_00->field_0x49 ||
        (DAT_007fb244 + -1 < (int)*(short *)&this_00->field_0x4b)))))))) {
    thunk_FUN_006457e0((int)this_00);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  piVar12 = local_13c;
  for (iVar10 = 0x1c; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  thunk_FUN_00644410(this_00,&local_18,&local_120,&local_11c,local_118);
  if (local_18 == 0) {
    if (this_00->field_0x288 == '\x02') {
      local_18 = 1;
      *(undefined4 *)&this_00->field_0x270 = 0;
    }
  }
  else if (this_00->field_0x288 != '\0') {
    this_00->field_0x288 = 0;
  }
  if ((iVar11 != 0) && (this_00->field_0259 != 0xa3)) {
    iVar11 = (int)*(short *)&this_00->field_0x47;
    iVar10 = (int)*(short *)&this_00->field_0x49;
    if ((iVar11 < 0) || (((iVar10 < 0 || (DAT_007fb240 <= iVar11)) || (DAT_007fb242 <= iVar10)))) {
      bVar23 = false;
    }
    else {
      bVar23 = *(char *)(DAT_007fb240 * iVar10 + DAT_007fb26c + iVar11) != '\0';
    }
    iVar17 = local_34;
    if (bVar23) {
      if ((&DAT_007fb24c)[*(int *)&this_00->field_0x24] == 0) {
        bVar23 = false;
      }
      else {
        bVar23 = *(char *)(DAT_007fb240 * iVar10 + (&DAT_007fb24c)[*(int *)&this_00->field_0x24] +
                          iVar11) != '\0';
      }
      if ((!bVar23) || (this_00->field_0x286 == '\0')) {
        local_18 = 1;
        *(undefined4 *)&this_00->field_0x270 = 0;
        iVar17 = 2;
      }
    }
    if (1 < iVar17) {
      if ((this_00->field_0259 == 0xad) &&
         (iVar10 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x7e), iVar10 != 0)) {
        iVar10 = 0x1389;
      }
      else {
        iVar10 = *(int *)(&DAT_007e6468 + (this_00->field_0259 + -0x96) * 0x14);
      }
      uVar16 = thunk_FUN_00497030((int)*(short *)&this_00->field_0x47,
                                  (int)*(short *)&this_00->field_0x49,*(int *)&this_00->field_0x24,1
                                  ,iVar10);
      if ((int)uVar16 < 0) {
        local_18 = 0;
      }
      else {
        thunk_FUN_00497850((int)*(short *)&this_00->field_0x268,(int)*(short *)&this_00->field_0x26a
                           ,(int)*(short *)&this_00->field_0x26c,(int)*(short *)&this_00->field_0x41
                           ,(int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45,
                           uVar16,&local_120,&local_11c,local_118);
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
  iVar10 = this_00->field_0259;
  if ((((((iVar10 == 0x9f) || (iVar10 == 0xa0)) || (iVar10 == 0xbf)) ||
       ((iVar10 == 0xa3 || (iVar10 == 0x9a)))) || (iVar10 == 0x9b)) ||
     (((iVar10 == 0x9c || (iVar10 == 0x9d)) ||
      ((iVar10 == 0x9e || ((iVar10 == 0xae || (iVar10 == 0xa5)))))))) goto LAB_0064190c;
  if ((byte)this_00->field_0x27d < 9) {
    local_4c = (byte *)STAllPlayersC::GetObjPtr
                                 (DAT_007fa174,
                                  CONCAT31((int3)((uint)iVar10 >> 8),this_00->field_0x24),
                                  CONCAT22(sVar9 >> 0xf,*(undefined2 *)&this_00->field_0x262),CASE_1
                                 );
    if ((local_4c == (byte *)0x0) || (this_00->field_0x27d == '\b')) {
      *(undefined4 *)&this_00->field_0x264 = 0;
    }
    if (local_4c != (byte *)0x0) {
      local_d8 = thunk_FUN_004ad650((int)(local_4c + 0x1d5));
    }
  }
  local_d4 = *(undefined4 *)&this_00->field_0x264;
  bVar23 = false;
  switch(this_00->field_0259) {
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
    bVar23 = true;
    local_d0 = 1;
    goto switchD_006415e9_caseD_9f;
  case 0xac:
  case 0xad:
    local_13c[0] = 6;
  }
  local_13c[1] = 1;
  bVar23 = true;
switchD_006415e9_caseD_9f:
  if ((this_00->field_0x27d != '\0') && (bVar23)) {
    if (this_00->field_0259 == 0xa1) {
      iVar10 = FUN_006acf0d(local_80,local_7c,local_78,(int)*(short *)&this_00->field_0x41,
                            (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45)
      ;
      if (iVar10 == 0) {
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,7,1,0,(int)*(short *)&this_00->field_0x41,
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
        uVar16 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar16;
        iVar10 = (((*(short *)&this_00->field_0x45 - local_78) * 10000) / iVar10) * iVar10;
        iVar11 = (uVar16 >> 0x10) % 0xb + 5;
        local_88 = iVar10;
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,7,1,0,local_cc,local_34,iVar10 / 40000 + local_78,
                   (short)((iVar11 * local_10) / 10000),(short)((iVar11 * local_94) / 10000),0,0,0,0
                   ,-1,0,0);
        local_34 = (local_14 * 3) / 40000 + local_84 + local_7c;
        uVar16 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar16;
        iVar11 = (uVar16 >> 0x10) % 0xb + 5;
        lVar4 = (longlong)(iVar11 * local_10) * -0x68db8bad;
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,7,1,0,((iVar17 * 3) / 40000 - local_a8) + local_80,local_34,
                   (iVar10 * 3) / 40000 + local_78,
                   (short)(int)(lVar4 >> 0x2c) - (short)(lVar4 >> 0x3f),
                   (short)((iVar11 * local_94) / 10000),0,0,0,0,-1,0,0);
      }
    }
    else {
      TraksClassTy::TraksCreateCollection(DAT_00802a7c,local_13c);
    }
  }
LAB_0064190c:
  if ((((this_00->field_0259 == 0x99) || (this_00->field_0259 == 0xb7)) && (local_18 == 0)) &&
     (0x191 < (int)((uint)(byte)this_00->field_0x61 * *(int *)&this_00->field_0x68))) {
    local_18 = 1;
    *(undefined4 *)&this_00->field_0x270 = 0;
  }
  if (this_00->field_0259 == 0x9a) {
    thunk_FUN_0062c2d0(*(int **)&this_00->field_0x27e,(int)*(short *)&this_00->field_0x41,
                       (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45);
  }
  if (local_18 != 1) {
LAB_00642c8b:
    iVar10 = (*this_00->vtable->slot_D8)();
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x30f);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x23d = 0;
  this_00->field_0x27c = 0;
  STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,0);
  if (this_00->field_0259 == 0x99) {
    piVar12 = (int *)STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0x24),
                                CONCAT22(extraout_var_01,*(undefined2 *)&this_00->field_0x262),
                                CASE_1);
    if (piVar12 == (int *)0x0) {
      iVar10 = *(int *)&this_00->field_0x1c;
LAB_00641a40:
      uVar16 = iVar10 * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar16;
      uVar24 = 7;
    }
    else {
      iVar10 = (**(code **)(*piVar12 + 0x2c))();
      if (iVar10 != 0x10) {
        iVar10 = *(int *)&this_00->field_0x1c;
        goto LAB_00641a40;
      }
      uVar16 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar16;
      uVar24 = 5;
    }
    thunk_FUN_0057b670((int *)this_00,0,uVar24,1,uVar16 >> 0x10);
  }
  if (this_00->field_0259 == 0xb7) {
    uVar16 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar16;
    thunk_FUN_0057b670((int *)this_00,0,5,1,uVar16 >> 0x10);
  }
  if (this_00->field_0259 == 0xac) {
    thunk_FUN_0057ba30(this_00,1);
  }
  local_48[0] = 0;
  local_2c[0] = 0;
  local_74[0] = 0;
  local_5 = 0;
  switch(this_00->field_0259) {
  case 0x96:
  case 0xb4:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2514;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 0x14;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0570;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0x97:
    if (this_00->field_0x288 == '\x02') {
      uVar16 = 0xffffffff;
      local_5 = 10;
      pcVar20 = &DAT_007d2500;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_48;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d0588;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_2c;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d0564;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_74;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
    }
    else {
      uVar16 = 0xffffffff;
      local_5 = 0x14;
      pcVar20 = &DAT_007d0594;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_48;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d0588;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_2c;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d0564;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_74;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
    }
    break;
  case 0x98:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d24f8;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 0x12;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = s_expmask3_007d057c;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d24ec;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0x99:
  case 0xa3:
    pcVar20 = s_expcshl_007d24bc;
    goto LAB_006424a7;
  case 0x9a:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2500;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 10;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = s_expmask3_007d057c;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0564;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0x9b:
  case 0x9d:
    uVar16 = 0xffffffff;
    pcVar20 = s_exprlas_007d24d4;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0x9c:
    uVar16 = 0xffffffff;
    pcVar20 = s_expllas_007d24e0;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0x9e:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d24c8;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0x9f:
    pcVar20 = s_exphfs_007d24b4;
    goto LAB_006424a7;
  case 0xa0:
  case 0xa1:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d24ac;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 10;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0588;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0570;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xa4:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d24a4;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 0x22;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = s_expmask3_007d057c;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d24ec;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xa5:
    uVar16 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar16;
    uVar16 = (uVar16 >> 0x10) % 3;
    if (uVar16 == 0) {
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d2490;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      local_5 = 0x16;
      iVar10 = -1;
      pbVar18 = local_48;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = s_expmask3_007d057c;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_2c;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d2484;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_74;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
    }
    else if (uVar16 == 1) {
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d2474;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      local_5 = 0x16;
      iVar10 = -1;
      pbVar18 = local_48;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = s_expmask3_007d057c;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_2c;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d2484;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_74;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
    }
    else if (uVar16 == 2) {
      uVar16 = 0xffffffff;
      local_5 = 0x16;
      pcVar20 = &DAT_007d247c;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_48;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = s_expmask3_007d057c;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_2c;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d24ec;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_74;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
    }
    else {
      uVar16 = 0xffffffff;
      local_5 = 0x16;
      pcVar20 = &DAT_007d2490;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_48;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = s_expmask3_007d057c;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_2c;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
      uVar16 = 0xffffffff;
      pcVar20 = &DAT_007d2484;
      do {
        pcVar21 = pcVar20;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar20 + 1;
        cVar1 = *pcVar20;
        pcVar20 = pcVar21;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar10 = -1;
      pbVar18 = local_74;
      do {
        pbVar22 = pbVar18;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pbVar22 = pbVar18 + 1;
        bVar7 = *pbVar18;
        pbVar18 = pbVar22;
      } while (bVar7 != 0);
      pbVar18 = (byte *)(pcVar21 + -uVar16);
      pbVar22 = pbVar22 + -1;
      for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
        *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar22 = pbVar22 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pbVar22 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
      }
    }
    break;
  case 0xac:
    uVar16 = 0xffffffff;
    pcVar20 = s_expemag_007d2468;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 10;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0564;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xad:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2444;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xae:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2498;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 9;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0570;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xb6:
  case 0xba:
    pcVar20 = &DAT_007d2438;
LAB_006424a7:
    uVar16 = 0xffffffff;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    pcVar20 = &DAT_007d0570;
LAB_00642561:
    uVar16 = 0xffffffff;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 0xf;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xb7:
  case 0xb9:
    uVar16 = 0xffffffff;
    pcVar20 = s_explioc_007d2450;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xb8:
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d245c;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    local_5 = 0x12;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d2508;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0570;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_74;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    break;
  case 0xbf:
    uVar16 = 0xffffffff;
    pcVar20 = s_exppar_007d2430;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_48;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_007d0588;
    do {
      pcVar21 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar10 = -1;
    pbVar18 = local_2c;
    do {
      pbVar22 = pbVar18;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar22 = pbVar18 + 1;
      bVar7 = *pbVar18;
      pbVar18 = pbVar22;
    } while (bVar7 != 0);
    pbVar18 = (byte *)(pcVar21 + -uVar16);
    pbVar22 = pbVar22 + -1;
    for (uVar24 = uVar16 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pbVar22 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar22 = pbVar22 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pbVar22 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar22 = pbVar22 + 1;
    }
    pcVar20 = &DAT_007d0564;
    goto LAB_00642561;
  }
  puVar14 = &this_00->field_01D5;
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,0,DAT_00806774,local_48,0x1d);
  if (iVar10 != 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x263);
  }
  thunk_FUN_004ac610(puVar14,'\0');
  if ((local_74[0] != 0) &&
     (iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,2,DAT_00806764,local_74,0x1d),
     iVar10 == 0)) {
    thunk_FUN_004ac610(puVar14,'\x02');
    uVar15 = thunk_FUN_004acd30(puVar14,'\x02');
    this_00->field_0x282 = (char)uVar15;
    this_00->field_0x283 = local_5;
    this_00->field_0x284 = 0;
  }
  if (local_2c[0] != 0) {
    iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,1,DAT_00806774,local_2c,0x1d);
    if (iVar10 != 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x270);
    }
    thunk_FUN_004ac610(puVar14,'\x01');
  }
  iVar10 = STT3DSprC::StartShow((STT3DSprC *)puVar14,0,DAT_00802a38->field_00E4);
  if (iVar10 != 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x274);
  }
  iVar10 = thunk_FUN_004acd30(puVar14,'\x01');
  if (0 < iVar10) {
    iVar10 = STT3DSprC::StartShow((STT3DSprC *)puVar14,1,DAT_00802a38->field_00E4);
    if (iVar10 != 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x277);
    }
    thunk_FUN_004acf20(puVar14,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(puVar14,'\x01');
  }
  uVar25 = 0x45;
  uVar15 = 0x5a;
  iVar10 = 1;
  uVar16 = thunk_FUN_004ad650((int)puVar14);
  FUN_006ea4e0((void *)this_00->field_0211,uVar16,iVar10,uVar15,uVar25);
  iVar10 = (*this_00->vtable->slot_D8)();
  if (iVar10 != 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_nick_to_torp_cpp_007d25c0,0x27d);
  }
  switch(this_00->field_0259) {
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
  (*this_00->vtable->slot_90)(2,local_c);
  g_currentExceptionFrame = local_28c.previous;
  return 0;
}

