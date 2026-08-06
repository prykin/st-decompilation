#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_torp.cpp

// 006406D0 STTorpC::GetMessage
#line 4 "decomp/ST.exe/functions/006406D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::GetMessage

   [STSwitchEnumApplier] Switch target field_0259 uses
   /SubmarineTitans/Recovered/Enums/STSprGameObjC_field_0259State. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9B=155;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A5=165;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B4=180;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185;CASE_BA=186;CASE_BF=191

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=006406D0; family_names=STTorpC::GetMessage; ret4=11;
   direct_offsets={10:2,14:3,18:3,1c:13} */

int __thiscall st::fn_006406D0(STTorpC *this,STMessage *message)

{
  char cVar1;
  short sVar2;
  STMessageId SVar3;
  STSprGameObjC_field_0259State SVar4;
  longlong lVar5;
  STSprGameObjC *this_00;
  byte bVar7;
  undefined2 uVar8;
  int iVar10;
  int iVar11;
  int *piVar12;
  DArrayTy *pDVar13;
  int uVar16;
  short sVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  byte *puVar14;
  undefined4 uVar15;
  uint uVar17;
  STGameObjC *pSVar18;
  int local_EAX_8983;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined2 uVar20;
  uint uVar19;
  int iVar21;
  byte *puVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  bool bVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
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
  undefined4 local_1c8;
  undefined4 local_1c4;
  short sStack_1c2;
  int local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  short sStack_1b2;
  undefined4 local_1b0;
  short sStack_1ae;
  undefined4 local_1a8;
  undefined4 local_1a4;
  short sStack_1a2;
  int local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  short sStack_192;
  undefined4 local_190;
  short sStack_18e;
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
  ushort *local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c [5];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118 [16];
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  STSprGameObjC *local_c8;
  int local_c4;
  STSprGameObjC_field_0259State local_c0;
  uint local_bc;
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
  iVar10 = st::fn_0072D7F0(local_28c.jumpBuffer,0);
  this_00 = local_c8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_28c.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\nick\\to_torp.cpp",0x350,0,iVar10,"%s"
                                ,0,(char)iVar10,0xcc,"STTorpC::GetMessage");
    if (iVar11 == 0) {
      st::fn_006A5E40(iVar10,0,"E:\\__titans\\nick\\to_torp.cpp",0x351);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07(local_c8,message);
  SVar3 = message->id;
  if (MESS_SHARED_0003 < SVar3) {
    if (SVar3 != MESS_SHARED_0108) {
      if (SVar3 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_4c = (STGameObjC *)st::fn_004053D5((STTorpC *)this_00,(int *)&local_90);
      st::fn_004025F9
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_4c,local_90);
      st::fn_006AB060(&local_4c);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    SVar4 = this_00->field_0259;
    if (SVar4 == CASE_9F) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_A0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_BF) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_A3) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_A4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_AE) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_A5) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_A1) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_B4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_B6) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_B7) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_B9) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_AD) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar4 == CASE_BA) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x23d != 1) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    local_14 = (int)*(short *)&this_00->field_024F;
    local_164 = (float)(int)*(short *)&this_00->field_0x24b * _DAT_007904f8 * _DAT_007904f0;
    local_160 = (float)(int)*(short *)&this_00->field_0x24d * _DAT_007904f8 * _DAT_007904f0;
    local_15c = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    st::fn_006E25D0(this_00->field_0211,&local_1b8,&local_164,0.0,0.0,0.0,1);
    local_14 = (int)*(short *)&this_00->field_0x255;
    local_170 = (float)(int)*(short *)&this_00->field_0x251 * _DAT_007904f8 * _DAT_007904f0;
    local_16c = (float)(int)*(short *)&this_00->field_0x253 * _DAT_007904f8 * _DAT_007904f0;
    local_168 = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    st::fn_006E25D0(this_00->field_0211,&local_1c8,&local_170,0.0,0.0,0.0,1);
    sVar9 = (*this_00->vtable->vfunc_14)
                      (STPiece<2,2>(local_1b8),sStack_1b2,(int)sStack_1ae,STPiece<2,2>(local_1c8),sStack_1c2,
                       local_1c0 >> 0x10);
    st::fn_00401EBA(&this_00->field_01D5,0,*(int *)(&DAT_007d2138 + sVar9 * 4),
                       *(int *)(&DAT_007d2138 + sVar9 * 4),'\0');
    st::fn_00405240((STT3DSprC *)&this_00->field_01D5,0,g_playSystem_00802A38->field_00E4);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0003) {
    st::fn_00404BC4
              (g_allPlayers_007FA174,*(short *)&this_00->field_0x26e,(int)this_00);
    st::fn_006AE110(*(DArrayTy **)((int)&this_00->field_023E + 3));
    st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
    st::fn_00405B5A((int *)&this_00->field_0x27e);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (SVar3 != MESS_ID_NONE) {
    if (SVar3 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    iVar10 = (message->arg0).i32;
    if (*(int *)(iVar10 + 0xc) != 1) {
      if (*(int *)(iVar10 + 0xc) != 2) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_158 = st::fn_006AAC70(0x44);
      iVar11 = 0;
      do {
        *(int **)(iVar11 + (int)local_158) = PTR_00806774;
        iVar11 = iVar11 + 4;
      } while (iVar11 < 0x44);
      STField<int *>(local_158,8) = PTR_00806764;
      local_148 = PTR_008032b8;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_144 = 0x10;
      local_140 = 0;
      st::fn_00404CA5
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_158,
                 (AnonShape_004AD790_77673787 *)(*(int *)(iVar10 + 0x70) + iVar10));
      st::fn_006AB060(&local_158);
      st::fn_0040551F
                ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(iVar10 + 0x78) + iVar10));
      st::fn_004015F0((STTorpC *)this_00,iVar10);
      st::fn_00402991
                (g_allPlayers_007FA174,(int)this_00,*(short *)&this_00->field_0x26e);
      if (this_00->field_0259 != CASE_9A) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      piVar12 = st::fn_00405137((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_024F,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)(short)this_00->field_0231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar12;
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    puVar14 = (byte *)(iVar10 + 0x14);
    puVar22 = (byte *)((int)&this_00->field_0244 + 1);
    memmove(puVar22, puVar14, 0x44); /* compiler REP MOVS byte copy */
    sVar9 = *(short *)&this_00->field_0x24b;
    if ((((sVar9 < 0) || (sVar2 = *(short *)&this_00->field_0x24d, sVar2 < 0)) ||
        (*(short *)&this_00->field_024F < 0)) ||
       ((g_worldGrid.sizeX <=
         (short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) - (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)
                ) ||
        (g_worldGrid.sizeY <=
         (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)
                ))))) {
LAB_00642c6e:
      st::fn_00403FDF((int)this_00);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    this_00->field_0x27d = 0;
    *(undefined4 *)&this_00->field_0x27e = 0;
    pDVar13 = st::fn_006AE290(nullptr,0,8,1);
    *(DArrayTy **)((int)&this_00->field_023E + 3) = pDVar13;
    *(undefined4 *)&this_00->field_0x270 = 1;
    *(undefined4 *)&this_00->field_0x278 = 0xffffffff;
    this_00->field_0x27c = 0;
    *(undefined4 *)&this_00->field_0x23d = 1;
    SVar4 = this_00->field_0259;
    switch(SVar4) {
    case CASE_96:
    case CASE_97:
    case CASE_98:
    case CASE_99:
    case CASE_9A:
    case CASE_AC:
    case CASE_B4:
      if (g_allPlayers_007FA174 == nullptr) {
        bVar7 = 1;
      }
      else {
        bVar7 = st::fn_004025AE(SVar4);
      }
      st::fn_00405C90(this_00,bVar7);
      uVar16 = st::fn_004049B7((char)this_00->field_0024);
      uVar16 = (int)(byte)uVar16;
      if (uVar16 == 1) {
        iVar10 = st::fn_0040186B(this_00->field_0024,0x99);
        if (iVar10 != 0) {
          this_00->field_0x61 = ((byte)this_00->field_0x61 >> 1) + this_00->field_0x61;
        }
      }
      else if ((uVar16 == 2) && (iVar10 = st::fn_0040186B(this_00->field_0024,0x96), iVar10 != 0)
              ) {
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
      if (g_allPlayers_007FA174 == nullptr) {
        bVar7 = 1;
      }
      else {
        bVar7 = st::fn_004025AE(SVar4);
      }
      st::fn_00405C90(this_00,bVar7);
    }
    iVar10 = st::fn_00402455(this_00,*(short *)&this_00->field_0x24b,*(short *)&this_00->field_0x24d,
                          *(short *)&this_00->field_024F,*(short *)&this_00->field_0x251,
                          *(short *)&this_00->field_0x253,*(short *)&this_00->field_0x255,
                          this_00->field_0x61);
    uVar8 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar20 = extraout_var_00;
    if (iVar10 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x8a);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar20 = extraout_var_01;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar8 = extraout_var;
    }
    *(int *)&this_00->field_0x68 = *(int *)&this_00->field_0x68 + 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar8 = (*this_00->vtable->vfunc_10)
                      (*(short *)&this_00->field_0x24b,*(short *)&this_00->field_0x24d,
                       CONCAT22(uVar20,*(undefined2 *)&this_00->field_024F),
                       *(short *)&this_00->field_0x251,*(short *)&this_00->field_0x253,
                       CONCAT22(uVar8,*(undefined2 *)&this_00->field_0x255));
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
      *(undefined2 *)&this_00->field_0231 = CASE_32;
      break;
    case CASE_99:
    case CASE_AD:
      *(undefined2 *)&this_00->field_0231 = 0xf;
      break;
    case CASE_9D:
    case CASE_9E:
    case CASE_B6:
    case CASE_BA:
      *(undefined2 *)&this_00->field_0231 = 0x1e;
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
      *(undefined2 *)&this_00->field_0231 = CASE_0;
      break;
    default:
      goto switchD_00640ad9_caseD_a2;
    case CASE_A5:
      *(undefined2 *)&this_00->field_0231 = 0x3c;
      break;
    case CASE_AC:
      *(undefined2 *)&this_00->field_0231 = 0x28;
    }
    *(undefined2 *)((int)&this_00->field_0231 + 2) = CASE_0 >> 0x10;
switchD_00640ad9_caseD_a2:
    puVar14 = (byte *)
              st::fn_0040342C(local_248,(short)this_00->field_0231,
                                 *(ushort *)&this_00->field_0x235,*(short *)&this_00->field_0x6c);
    *(undefined4 *)&this_00->field_0x237 = *puVar14;
    *(undefined2 *)&this_00->field_0x23b = *(undefined2 *)(puVar14 + 1);
    if (this_00->field_0259 == CASE_9A) {
      piVar12 = st::fn_00405137((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_024F,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)(short)this_00->field_0231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar12;
    }
    if (this_00->field_0259 == CASE_97) {
      local_4c = st::fn_004028BA
                           (g_allPlayers_007FA174,(char)this_00->field_0024,
                            *(ushort *)&this_00->field_0x262,CASE_1);
      if ((local_4c != nullptr) &&
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
      pcVar23 = "atorsm";
      break;
    case CASE_97:
      pcVar23 = "atorme";
      break;
    case CASE_98:
      pcVar23 = "atorla";
      break;
    case CASE_99:
      pcVar23 = "acas0";
      break;
    case CASE_9A:
      pcVar23 = "aemtor";
      break;
    case CASE_9B:
    case CASE_9D:
      pcVar23 = "alray1";
      break;
    case CASE_9C:
      pcVar23 = "alray0";
      break;
    case CASE_9E:
      pcVar23 = "alray2";
      break;
    case CASE_9F:
    case CASE_A3:
    case CASE_A4:
      pcVar23 = &DAT_007d2578;
      break;
    case CASE_A0:
    case CASE_BF:
      pcVar23 = &DAT_007d251c;
      break;
    case CASE_A1:
      pcVar23 = "pr_torp";
      break;
    default:
      goto switchD_00640c2d_caseD_a2;
    case CASE_A5:
      pcVar23 = "satlas";
      break;
    case CASE_AC:
      pcVar23 = "aspltor";
      break;
    case CASE_AD:
      pcVar23 = "neuro";
      break;
    case CASE_AE:
      pcVar23 = "agcan";
      break;
    case CASE_B6:
    case CASE_BA:
      pcVar23 = "eshell";
      break;
    case CASE_B7:
      pcVar23 = "ionbomb";
      break;
    case CASE_B8:
      pcVar23 = "biaacc";
      break;
    case CASE_B9:
      pcVar23 = &DAT_007d2534;
    }
    uVar17 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_60;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
switchD_00640c2d_caseD_a2:
    puVar14 = (byte *)(&this_00->field_01D5);
    iVar10 = st::fn_00404183((STT3DSprC *)puVar14,0,PTR_00806774,local_60,0x1d);
    if (iVar10 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0xe1);
    }
    switch(this_00->field_0259) {
    case CASE_9F:
    case CASE_A0:
    case CASE_A1:
    case CASE_A3:
    case CASE_A4:
    case CASE_AE:
    case CASE_BF:
      uVar28 = 9;
      uVar29 = 0;
      uVar8 = 0;
      uVar27 = 0;
      break;
    default:
      local_10 = (int)*(short *)&this_00->field_024F;
      local_17c = (float)(int)*(short *)&this_00->field_0x24b * _DAT_007904f8 * _DAT_007904f0;
      local_178 = (float)(int)*(short *)&this_00->field_0x24d * _DAT_007904f8 * _DAT_007904f0;
      local_174 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(this_00->field_0211,&local_198,&local_17c,0.0,0.0,0.0,1);
      local_10 = (int)*(short *)&this_00->field_0x255;
      local_188 = (float)(int)*(short *)&this_00->field_0x251 * _DAT_007904f8 * _DAT_007904f0;
      local_184 = (float)(int)*(short *)&this_00->field_0x253 * _DAT_007904f8 * _DAT_007904f0;
      local_180 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      st::fn_006E25D0(this_00->field_0211,&local_1a8,&local_188,0.0,0.0,0.0,1);
      sVar9 = (*this_00->vtable->vfunc_14)
                        (STPiece<2,2>(local_198),sStack_192,(int)sStack_18e,STPiece<2,2>(local_1a8),sStack_1a2,
                         local_1a0 >> 0x10);
      uVar15 = *(undefined4 *)(&DAT_007d2138 + sVar9 * 4);
      uVar27 = (undefined1)uVar15;
      uVar29 = (undefined1)((uint)uVar15 >> 8);
      uVar8 = (undefined2)((uint)uVar15 >> 0x10);
      uVar28 = uVar27;
      break;
    case CASE_A5:
      uVar28 = 0;
      uVar29 = 0;
      uVar8 = 0;
      uVar27 = 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_00401EBA(puVar14,0,CONCAT22(uVar8,CONCAT11(uVar29,uVar27)),
                       CONCAT22(uVar8,CONCAT11(uVar29,uVar28)),'\0');
    st::fn_00405240((STT3DSprC *)puVar14,0,g_playSystem_00802A38->field_00E4);
    uVar15 = st::fn_00402991(g_allPlayers_007FA174,(int)this_00,-1);
    *(short *)&this_00->field_0x26e = (short)uVar15;
    if (this_00->field_0259 != CASE_A3) {
      iVar10 = (int)*(short *)&this_00->field_0x47;
      iVar11 = (int)*(short *)&this_00->field_0x49;
      if ((((iVar10 < 0) || (iVar11 < 0)) || (g_worldGrid.sizeX <= iVar10)) ||
         (g_worldGrid.sizeY <= iVar11)) {
        bVar26 = false;
      }
      else {
        bVar26 = *(char *)(g_worldGrid.sizeX * iVar11 + DAT_007fb26c + iVar10) != '\0';
      }
      if (bVar26) {
        if ((&DAT_007fb24c)[this_00->field_0024] == 0) {
          bVar26 = false;
        }
        else {
          bVar26 = *(char *)(g_worldGrid.sizeX * iVar11 + (&DAT_007fb24c)[this_00->field_0024] +
                            iVar10) != '\0';
        }
        if (bVar26) {
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
        st::fn_00405240((STT3DSprC *)&this_00->field_01D5,2,g_playSystem_00802A38->field_00E4);
      }
      else {
        bVar7 = this_00->field_0x284 + 1;
        this_00->field_0x284 = bVar7;
        if (bVar7 == this_00->field_0x282) {
          st::fn_00404264((STT3DSprC *)&this_00->field_01D5,2);
          this_00->field_0x282 = 0;
        }
        else {
          st::fn_00401064((STT3DSprC *)&this_00->field_01D5,'\x02',(uint)bVar7);
          st::fn_004030BC((STT3DSprC *)&this_00->field_01D5,'\x02');
        }
      }
    }
    if (this_00->field_0x27c == '\x05') {
      if (this_00->field_0x288 == '\x02') {
        uVar17 = st::fn_00401D2A(this_00->field_0024,this_00->field_0259);
        this_00->field_0x25d = (char)uVar17;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c4 = *(int *)(&DAT_007e6468 + (this_00->field_0259 * 5 + -0x2ee + (uVar17 & 0xff)) * 4
                           );
        st::fn_004014DD((int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43,
                           (int)*(short *)&this_00->field_0x45,this_00->field_0024,
                           (ushort)*(undefined4 *)&this_00->field_0x25e,
                           *(ushort *)&this_00->field_0x262,this_00->field_0259,local_c4 / 2,1);
      }
      if (*(int *)&this_00->field_0x270 == 1) {
        iVar10 = st::fn_006E62D0
                           (g_playSystem_00802A38,
                            *(AnonShape_005EFAE0_B406B78B **)&this_00->field_0x274,(int *)&local_30);
        if (iVar10 == -4) {
          st::fn_00403FDF((int)this_00);
          g_currentExceptionFrame = local_28c.previous;
          return 0;
        }
        uVar17 = st::fn_00401D2A(this_00->field_0024,this_00->field_0259);
        this_00->field_0x25d = (char)uVar17;
        SVar4 = this_00->field_0259;
        if (SVar4 == CASE_9A) {
          iVar10 = 0;
          local_EAX_8983 = st::fn_004052CC((STT3DSprC *)((int)local_30 + 0x1d5));
          st::fn_00402324(local_EAX_8983,iVar10);
          local_b4 = *(undefined4 *)(&DAT_007d21f8 + (uint)(byte)this_00->field_0x25d * 4);
        }
        else if (SVar4 == CASE_AD) {
          local_b4 = *(undefined4 *)(&DAT_007d220c + (uVar17 & 0xff) * 4);
        }
        else if (SVar4 == CASE_A1) {
          local_b4 = *(undefined4 *)(&DAT_007d2220 + (uVar17 & 0xff) * 4);
        }
        else {
          local_b4 = 0;
        }
        local_bc = this_00->field_0024;
        local_b8 = *(undefined2 *)&this_00->field_0x262;
        local_c0 = this_00->field_0259;
        local_b6 = *(undefined2 *)&this_00->field_0x25e;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c4 = *(int *)(&DAT_007e6468 +
                           (local_c0 * 5 + -0x2ee + (uint)(byte)this_00->field_0x25d) * 4);
        local_b0 = 0;
        if (this_00->field_0x285 == '\x01') {
          local_c4 = (int)(local_c4 + (local_c4 >> 0x1f & 3U)) >> 2;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar10 = (**(code **)(*local_30 + 0x2c))();
        if (iVar10 == 0x68) {
          uVar8 = *(undefined2 *)((int)&this_00->field_0244 + 1);
          memset(local_220, 0, 0x58); /* compiler bulk-zero initialization */
          local_220[0] = 0x15e;
          local_220[3] = 1;
          local_220[2] = 1;
          local_220[1] = local_30[9];
          local_208 = *(undefined2 *)&this_00->field_0x249;
          local_20a = *(undefined2 *)((int)&this_00->field_0246 + 1);
          local_1ef = STField<undefined2>(local_30,0x32);
          local_1f3 = local_30[6];
          local_1f4 = this_00->field_0x25d;
          local_20c = uVar8;
          iVar10 = st::fn_0040186B(local_30[9],0x7b);
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
          g_playSystem_00802A38->vfunc_08(0x147,0,0,(short)local_220,0);
        }
        local_22c = &local_c4;
        local_238 = local_30[2];
        local_234 = 2;
        local_230 = 0x110;
        (*g_playSystem_00802A38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_240);
      }
    }
    puVar14 = (byte *)(&this_00->field_01D5);
    iVar10 = st::fn_004022AC((STT3DSprC *)puVar14,'\0');
    if (iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) {
      st::fn_00404264((STT3DSprC *)puVar14,0);
    }
    iVar10 = st::fn_004022AC((STT3DSprC *)puVar14,'\0');
    if ((iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) && (this_00->field_0x282 == '\0'))
    goto LAB_00642c6e;
    goto cf_common_exit_00642C8B;
  }
  if (this_00->field_0x27d == '\0') goto cf_common_exit_00642C8B;
  local_80 = (int)*(short *)&this_00->field_0x41;
  local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(*(undefined2 *)&this_00->field_0x49));
  sVar9 = *(short *)&this_00->field_0x47;
  local_7c = (int)*(short *)&this_00->field_0x43;
  local_84 = STReplaceLowWord((uint32_t)(local_84), (uint16_t)(*(undefined2 *)&this_00->field_0x4b));
  local_78 = (int)*(short *)&this_00->field_0x45;
  iVar10 = st::fn_00402847((STJellyGunC *)this_00,&local_a4,&local_9c);
  if (iVar10 == -1) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x15c);
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
      st::fn_00402315(this_00,local_98,local_8c,local_a0);
      iVar10 = st::fn_00402455(this_00,*(short *)&this_00->field_0x41,*(short *)&this_00->field_0x43,
                            *(short *)&this_00->field_0x45,local_98[0],local_8c[0],local_a0[0],
                            this_00->field_0x61);
      if (iVar10 != 0) {
        st::fn_006A5E40
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x170);
      }
      *(undefined4 *)&this_00->field_0x7a = 0;
    }
    else {
      this_00->field_0x288 = 2;
      st::fn_004033B4(this_00->field_01ED,5,(int)*(short *)&this_00->field_0x41,
                         (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45);
    }
  }
  if ((local_9c == 1) &&
     (((*(short *)&this_00->field_0x47 < 0 ||
       (g_worldGrid.sizeX + -1 < (int)*(short *)&this_00->field_0x47)) ||
      ((*(short *)&this_00->field_0x49 < 0 ||
       ((g_worldGrid.sizeY + -1 < (int)*(short *)&this_00->field_0x49 ||
        (g_worldGrid.sizeZ + -1 < (int)*(short *)&this_00->field_0x4b)))))))) {
    st::fn_00403FDF((int)this_00);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  memset(local_13c, 0, 0x70); /* compiler bulk-zero initialization */
  st::fn_00404FA2
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
  if ((iVar11 != 0) && (this_00->field_0259 != CASE_A3)) {
    iVar11 = (int)*(short *)&this_00->field_0x47;
    iVar10 = (int)*(short *)&this_00->field_0x49;
    if ((iVar11 < 0) ||
       (((iVar10 < 0 || (g_worldGrid.sizeX <= iVar11)) || (g_worldGrid.sizeY <= iVar10)))) {
      bVar26 = false;
    }
    else {
      bVar26 = *(char *)(g_worldGrid.sizeX * iVar10 + DAT_007fb26c + iVar11) != '\0';
    }
    iVar21 = local_34;
    if (bVar26) {
      if ((&DAT_007fb24c)[this_00->field_0024] == 0) {
        bVar26 = false;
      }
      else {
        bVar26 = *(char *)(g_worldGrid.sizeX * iVar10 + (&DAT_007fb24c)[this_00->field_0024] +
                          iVar11) != '\0';
      }
      if ((!bVar26) || (this_00->field_0x286 == '\0')) {
        local_18 = 1;
        *(undefined4 *)&this_00->field_0x270 = 0;
        iVar21 = 2;
      }
    }
    if (1 < iVar21) {
      if ((this_00->field_0259 == CASE_AD) &&
         (iVar10 = st::fn_0040186B(this_00->field_0024,0x7e), iVar10 != 0)) {
        iVar10 = 0x1389;
      }
      else {
        iVar10 = *(int *)(&DAT_007e6468 + (this_00->field_0259 - CASE_96) * 0x14);
      }
      uVar17 = st::fn_00403B66((int)*(short *)&this_00->field_0x47,
                                  (int)*(short *)&this_00->field_0x49,this_00->field_0024,1,iVar10);
      if ((int)uVar17 < 0) {
        local_18 = 0;
      }
      else {
        st::fn_00404C4B((int)*(short *)&this_00->field_0x268,(int)*(short *)&this_00->field_0x26a
                           ,(int)*(short *)&this_00->field_0x26c,(int)*(short *)&this_00->field_0x41
                           ,(int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45,
                           uVar17,&local_120,&local_11c,local_118);
        st::fn_00405B82(local_120,local_11c,local_118[0]);
        local_18 = 2;
      }
    }
  }
  if (local_18 == 2) {
    st::fn_00403FDF((int)this_00);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  local_13c[4] = (int)*(short *)&this_00->field_0x268;
  local_128 = (int)*(short *)&this_00->field_0x26a;
  local_124 = (int)*(short *)&this_00->field_0x26c;
  *(undefined2 *)&this_00->field_0x268 = (undefined2)local_120;
  *(undefined2 *)&this_00->field_0x26a = (undefined2)local_11c;
  *(undefined2 *)&this_00->field_0x26c = (undefined2)local_118[0];
  SVar4 = this_00->field_0259;
  if ((((((SVar4 == CASE_9F) || (SVar4 == CASE_A0)) || (SVar4 == CASE_BF)) ||
       ((SVar4 == CASE_A3 || (SVar4 == CASE_9A)))) || (SVar4 == CASE_9B)) ||
     (((SVar4 == CASE_9C || (SVar4 == CASE_9D)) ||
      ((SVar4 == CASE_9E || ((SVar4 == CASE_AE || (SVar4 == CASE_A5)))))))) goto LAB_0064190c;
  if ((byte)this_00->field_0x27d < 9) {
    local_4c = st::fn_004028BA
                         (g_allPlayers_007FA174,(char)this_00->field_0024,
                          *(ushort *)&this_00->field_0x262,CASE_1);
    if ((local_4c == nullptr) || (this_00->field_0x27d == '\b')) {
      *(undefined4 *)&this_00->field_0x264 = 0;
    }
    if (local_4c != nullptr) {
      local_d8 = st::fn_004052CC((STT3DSprC *)&local_4c->field_0x1d5);
    }
  }
  local_d4 = *(undefined4 *)&this_00->field_0x264;
  bVar26 = false;
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
    bVar26 = true;
    local_d0 = 1;
    goto switchD_006415e9_caseD_9f;
  case CASE_AC:
  case CASE_AD:
    local_13c[0] = 6;
  }
  local_13c[1] = 1;
  bVar26 = true;
switchD_006415e9_caseD_9f:
  if ((this_00->field_0x27d != '\0') && (bVar26)) {
    if (this_00->field_0259 == CASE_A1) {
      iVar10 = st::fn_006ACF0D(local_80,local_7c,local_78,(int)*(short *)&this_00->field_0x41,
                            (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45);
      if (iVar10 == 0) {
        st::fn_00401433
                  (g_traksClass_00802A7C,7,1,0,(int)*(short *)&this_00->field_0x41,
                   (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45,0,0,0,0,0
                   ,0,-1,0,0);
      }
      else {
        local_94 = ((*(short *)&this_00->field_0x41 - local_80) * 10000) / iVar10;
        iVar21 = local_94 * iVar10;
        local_10 = ((*(short *)&this_00->field_0x43 - local_7c) * 10000) / iVar10;
        local_14 = local_10 * iVar10;
        local_a8 = local_10 / 10000;
        local_cc = iVar21 / 40000 + local_a8 + local_80;
        local_84 = local_94 / 10000;
        local_34 = local_14 / 40000 + local_84 + local_7c;
        uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar17;
        iVar10 = (((*(short *)&this_00->field_0x45 - local_78) * 10000) / iVar10) * iVar10;
        iVar11 = (uVar17 >> 0x10) % 0xb + 5;
        local_88 = iVar10;
        st::fn_00401433
                  (g_traksClass_00802A7C,7,1,0,local_cc,local_34,iVar10 / 40000 + local_78,
                   (short)((iVar11 * local_10) / 10000),(short)((iVar11 * local_94) / 10000),0,0,0,0
                   ,-1,0,0);
        local_34 = (local_14 * 3) / 40000 + local_84 + local_7c;
        uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar17;
        iVar11 = (uVar17 >> 0x10) % 0xb + 5;
        lVar5 = (longlong)(iVar11 * local_10) * -0x68db8bad;
        st::fn_00401433
                  (g_traksClass_00802A7C,7,1,0,((iVar21 * 3) / 40000 - local_a8) + local_80,local_34
                   ,(iVar10 * 3) / 40000 + local_78,
                   (short)(int)(lVar5 >> 0x2c) - (short)(lVar5 >> 0x3f),
                   (short)((iVar11 * local_94) / 10000),0,0,0,0,-1,0,0);
      }
    }
    else {
      st::fn_004048FE(g_traksClass_00802A7C,local_13c);
    }
  }
LAB_0064190c:
  if ((((this_00->field_0259 == CASE_99) || (this_00->field_0259 == CASE_B7)) && (local_18 == 0)) &&
     (0x191 < (int)((uint)(byte)this_00->field_0x61 * *(int *)&this_00->field_0x68))) {
    local_18 = 1;
    *(undefined4 *)&this_00->field_0x270 = 0;
  }
  if (this_00->field_0259 == CASE_9A) {
    st::fn_00403CB5(*(AnonShape_0062C2D0_06591E1F **)&this_00->field_0x27e,
                       (int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43,
                       (int)*(short *)&this_00->field_0x45);
  }
  if (local_18 != 1) {
cf_common_exit_00642C8B:
    iVar10 = this_00->vfunc_D8();
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x30f);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x23d = 0;
  this_00->field_0x27c = 0;
  st::fn_00404264((STT3DSprC *)&this_00->field_01D5,0);
  if (this_00->field_0259 == CASE_99) {
    pSVar18 = st::fn_004028BA
                        (g_allPlayers_007FA174,(char)this_00->field_0024,
                         *(ushort *)&this_00->field_0x262,CASE_1);
    if (pSVar18 == nullptr) {
      iVar10 = *(int *)&this_00->field_0x1c;
LAB_00641a40:
      uVar17 = iVar10 * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar17;
      bVar7 = 7;
    }
    else {
      iVar10 = (*pSVar18->vtable->vfunc_2C)();
      if (iVar10 != 0x10) {
        iVar10 = *(int *)&this_00->field_0x1c;
        goto LAB_00641a40;
      }
      uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar17;
      bVar7 = 5;
    }
    st::fn_004030A3((int *)this_00,0,(uint)bVar7,(short *)0x1,(short *)(uVar17 >> 0x10));
  }
  if (this_00->field_0259 == CASE_B7) {
    uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar17;
    st::fn_004030A3((int *)this_00,0,5,(short *)0x1,(short *)(uVar17 >> 0x10));
  }
  if (this_00->field_0259 == CASE_AC) {
    st::fn_00403116(this_00,1);
  }
  local_48[0] = '\0';
  local_2c[0] = '\0';
  local_74[0] = '\0';
  local_5 = 0;
  switch(this_00->field_0259) {
  case CASE_96:
  case CASE_B4:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2514;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x14;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0570;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_97:
    if (this_00->field_0x288 == '\x02') {
      uVar17 = 0xffffffff;
      local_5 = 10;
      pcVar23 = &DAT_007d2500;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_48;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d0588;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_2c;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d0564;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_74;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
    }
    else {
      uVar17 = 0xffffffff;
      local_5 = 0x14;
      pcVar23 = &DAT_007d0594;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_48;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d0588;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_2c;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d0564;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_74;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
    }
    break;
  case CASE_98:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d24f8;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x12;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = "expmask3";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d24ec;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_99:
  case CASE_A3:
    pcVar23 = "expcshl";
    goto LAB_006424a7;
  case CASE_9A:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2500;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 10;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = "expmask3";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0564;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_9B:
  case CASE_9D:
    uVar17 = 0xffffffff;
    pcVar23 = "exprlas";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_9C:
    uVar17 = 0xffffffff;
    pcVar23 = "expllas";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_9E:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d24c8;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_9F:
    pcVar23 = "exphfs";
    goto LAB_006424a7;
  case CASE_A0:
  case CASE_A1:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d24ac;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 10;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0588;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0570;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_A4:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d24a4;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x22;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = "expmask3";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d24ec;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_A5:
    uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar17;
    uVar17 = (uVar17 >> 0x10) % 3;
    if (uVar17 == 0) {
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d2490;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      local_5 = 0x16;
      iVar10 = -1;
      pcVar23 = local_48;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = "expmask3";
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_2c;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d2484;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_74;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0;
    }
    else if (uVar17 == 1) {
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d2474;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      local_5 = 0x16;
      iVar10 = -1;
      pcVar23 = local_48;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = "expmask3";
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_2c;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d2484;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_74;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0;
    }
    else if (uVar17 == 2) {
      uVar17 = 0xffffffff;
      local_5 = 0x16;
      pcVar23 = &DAT_007d247c;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_48;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = "expmask3";
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_2c;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d24ec;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_74;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
    }
    else {
      uVar17 = 0xffffffff;
      local_5 = 0x16;
      pcVar23 = &DAT_007d2490;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_48;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = "expmask3";
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_2c;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      uVar17 = 0xffffffff;
      pcVar23 = &DAT_007d2484;
      do {
        pcVar25 = pcVar23;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar25 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar23 = local_74;
      do {
        pcVar24 = pcVar23;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar24 = pcVar23 + 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar1 != '\0');
      pcVar23 = pcVar25 + -uVar17;
      pcVar25 = pcVar24 + -1;
      memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
      uVar19 = 0;
    }
    break;
  case CASE_AC:
    uVar17 = 0xffffffff;
    pcVar23 = "expemag";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 10;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0564;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_AD:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2444;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_AE:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2498;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 9;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0570;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_B6:
  case CASE_BA:
    pcVar23 = &DAT_007d2438;
LAB_006424a7:
    uVar17 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    pcVar23 = &DAT_007d0570;
LAB_00642561:
    uVar17 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0xf;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_B7:
  case CASE_B9:
    uVar17 = 0xffffffff;
    pcVar23 = "explioc";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_B8:
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d245c;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x12;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d2508;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0570;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_74;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    break;
  case CASE_BF:
    uVar17 = 0xffffffff;
    pcVar23 = "exppar";
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_48;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    uVar17 = 0xffffffff;
    pcVar23 = &DAT_007d0588;
    do {
      pcVar25 = pcVar23;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar25 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar23 = local_2c;
    do {
      pcVar24 = pcVar23;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar24 = pcVar23 + 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar1 != '\0');
    pcVar23 = pcVar25 + -uVar17;
    pcVar25 = pcVar24 + -1;
    memmove(pcVar25, pcVar23, uVar17); /* compiler REP MOVS byte copy */
    pcVar23 = &DAT_007d0564;
    goto LAB_00642561;
  }
  puVar14 = (byte *)(&this_00->field_01D5);
  iVar10 = st::fn_00404183((STT3DSprC *)puVar14,0,PTR_00806774,local_48,0x1d);
  if (iVar10 != 0) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x263);
  }
  st::fn_00405AA6(puVar14,'\0');
  if ((local_74[0] != '\0') &&
     (iVar10 = st::fn_00404183((STT3DSprC *)puVar14,2,PTR_00806764,local_74,0x1d),
     iVar10 == 0)) {
    st::fn_00405AA6(puVar14,'\x02');
    uVar15 = st::fn_004022AC((STT3DSprC *)puVar14,'\x02');
    this_00->field_0x282 = (char)uVar15;
    this_00->field_0x283 = local_5;
    this_00->field_0x284 = 0;
  }
  if (local_2c[0] != '\0') {
    iVar10 = st::fn_00404183((STT3DSprC *)puVar14,1,PTR_00806774,local_2c,0x1d);
    if (iVar10 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x270);
    }
    st::fn_00405AA6(puVar14,'\x01');
  }
  iVar10 = st::fn_00405240((STT3DSprC *)puVar14,0,g_playSystem_00802A38->field_00E4);
  if (iVar10 != 0) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x274);
  }
  iVar10 = st::fn_004022AC((STT3DSprC *)puVar14,'\x01');
  if (0 < iVar10) {
    iVar10 = st::fn_00405240((STT3DSprC *)puVar14,1,g_playSystem_00802A38->field_00E4);
    if (iVar10 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x277);
    }
    st::fn_004044EE((STT3DSprC *)puVar14,PTR_008032b8,0x10);
    st::fn_00403233((STT3DSprC *)puVar14,'\x01');
  }
  uVar15 = 0x45;
  uVar29 = 0x5a;
  uVar30 = 0;
  uVar20 = 0;
  uVar28 = 1;
  uVar27 = 0;
  uVar8 = 0;
  uVar17 = st::fn_004052CC((STT3DSprC *)puVar14);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  st::fn_006EA4E0
            (this_00->field_0211,uVar17,CONCAT22(uVar8,CONCAT11(uVar27,uVar28)),
             CONCAT22(uVar20,CONCAT11(uVar30,uVar29)),uVar15);
  iVar10 = this_00->vfunc_D8();
  if (iVar10 != 0) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x27d);
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
  this_00->vfunc_90(2,(short)local_c);
  g_currentExceptionFrame = local_28c.previous;
  return 0;
}

// 00645020 STTorpC::IsDangerous
#line 4 "decomp/ST.exe/functions/00645020/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::IsDangerous */

int __thiscall st::fn_00645020(STTorpC *this,int param_1,uint *param_2)

{
  dword dVar2;
  int iVar3;
  int iVar4;
  uint index;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STTorpC *local_10;
  dword local_c;
  int local_8;

  local_c = this->field_0241->count;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  dVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c == 0) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",
                 0x466);
    }
    index = 0;
    local_8 = 0;
    *param_2 = 0xffffffff;
    if (0 < (int)dVar2) {
      while (st::fn_006ACC70(local_10->field_0241,index,&local_18), local_18 != param_1) {
        index = index + 1;
        if ((int)dVar2 <= (int)index) {
          g_currentExceptionFrame = local_5c.previous;
          return local_8;
        }
      }
      local_8 = (local_14 != 1) + 1;
      *param_2 = index;
    }
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (iVar3 != -0x5001fff7) {
    iVar4 = st::fn_006AD4D0("E:\\__titans\\nick\\to_torp.cpp",0x471,0,iVar3,"%s",
                               "STTorpC::IsDangerous");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\nick\\to_torp.cpp",0x472);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  *param_2 = 0xffffffff;
  return 0;
}

// 006451B0 STTorpC::SetDangerous
#line 4 "decomp/ST.exe/functions/006451B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::SetDangerous

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004608B0 -> 006451B0 @ 00460ABD; /STBoatC+0x18 | 00471AC0 -> 006451B0 @ 00471C9F;
   /STBoatC+0x18 */

undefined4 __thiscall st::fn_006451B0(STTorpC *this,uint param_1,uint *param_2)

{
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_54;
  uint local_10 [2];
  STTorpC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (errorCode == 0) {
    if (*param_2 == 0xffffffff) {
      local_10[0] = param_1;
      local_10[1] = 1;
      uVar2 = st::fn_006AE1C0(local_8->field_0241,local_10);
      *param_2 = uVar2;
    }
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\nick\\to_torp.cpp",0x486,0,errorCode,"%s"
                             ,"STTorpC::SetDangerous");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\nick\\to_torp.cpp",0x487);
  return 0xffffffff;
}

// 006452A0 STTorpC::ClearDangerous
#line 4 "decomp/ST.exe/functions/006452A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::ClearDangerous */

undefined4 __thiscall st::fn_006452A0(STTorpC *this,int param_1,uint param_2)

{
  STTorpC *pSVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_54;
  int local_10 [2];
  STTorpC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\nick\\to_torp.cpp",0x4a1,0,errorCode,
                               "%s","STTorpC::ClearDangerous");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\nick\\to_torp.cpp",0x4a2);
    return 0xffffffff;
  }
  if (param_2 == 0xffffffff) {
    local_10[0] = param_1;
    local_10[1] = 0;
    st::fn_006AE1C0(local_8->field_0241,local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  st::fn_006ACC70(local_8->field_0241,param_2,local_10);
  if (local_10[0] == param_1) {
    local_10[1] = 0;
    st::fn_006AE140(pSVar2->field_0241,param_2,local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x49e);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

// 00645420 STTorpC::SaveTorpData
#line 4 "decomp/ST.exe/functions/00645420/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::SaveTorpData

   [STPrototypeApplier] Propagated return.
   Evidence: 00645420 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00642D4E */

byte * __thiscall st::fn_00645420(STTorpC *this,int *param_1)

{
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STAllPlayersC *this_00;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *puVar10;
  byte *pbVar11;
  InternalExceptionFrame local_6c;
  byte *local_28;
  int local_24;
  STAllPlayersC *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_20 = (STAllPlayersC *)this;
  iVar5 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  this_00 = local_20;
  if (iVar5 == 0) {
    *param_1 = 0x80;
    local_14 = (byte *)st::fn_006B0020(*(uint **)&local_20->field_0x241,(int *)&local_8);
    st::fn_006AB060(&local_14);
    *param_1 = *param_1 + local_8;
    local_18 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_0x1d5,&local_c);
    *param_1 = *param_1 + local_c;
    local_1c = (byte *)st::fn_0040119A(this_00,(int *)&local_10);
    iVar5 = *param_1;
    *param_1 = iVar5 + local_10;
    pbVar6 = st::fn_006AAC70(iVar5 + local_10);
    *(undefined4 *)pbVar6 = this_00->field_0020;
    uVar2 = this_00->field_0x25;
    uVar3 = this_00->field_0x26;
    uVar4 = this_00->field_0x27;
    pbVar6[4] = this_00->field_0x24;
    pbVar6[5] = uVar2;
    pbVar6[6] = uVar3;
    pbVar6[7] = uVar4;
    uVar2 = this_00->field_0x29;
    uVar3 = this_00->field_0x2a;
    uVar4 = this_00->field_0x2b;
    pbVar6[8] = this_00->field_0x28;
    pbVar6[9] = uVar2;
    pbVar6[10] = uVar3;
    pbVar6[0xb] = uVar4;
    pbVar6[0xc] = 2;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    uVar2 = this_00->field_0x2d;
    uVar3 = this_00->field_0x2e;
    uVar4 = this_00->field_0x2f;
    pbVar6[0x10] = this_00->field_0x2c;
    pbVar6[0x11] = uVar2;
    pbVar6[0x12] = uVar3;
    pbVar6[0x13] = uVar4;
    puVar10 = (byte *)&this_00->field_0x245;
    pbVar8 = pbVar6 + 0x14;
    memmove(pbVar8, puVar10, 0x44); /* compiler REP MOVS byte copy */
    uVar2 = local_20->field_0x232;
    uVar3 = local_20->field_0x233;
    uVar4 = local_20->field_0x234;
    pbVar6[0x58] = local_20->field_0x231;
    pbVar6[0x59] = uVar2;
    pbVar6[0x5a] = uVar3;
    pbVar6[0x5b] = uVar4;
    uVar2 = local_20->field_0x236;
    uVar3 = local_20->field_0x237;
    uVar4 = local_20->field_0x238;
    pbVar6[0x5c] = local_20->field_0x235;
    pbVar6[0x5d] = uVar2;
    pbVar6[0x5e] = uVar3;
    pbVar6[0x5f] = uVar4;
    *(undefined4 *)(pbVar6 + 0x60) = *(undefined4 *)&local_20->field_0x239;
    *(undefined4 *)(pbVar6 + 100) = *(undefined4 *)((int)&local_20->field_023A + 3);
    local_28 = pbVar6;
    local_14 = (byte *)st::fn_006B0020(*(uint **)&local_20->field_0x241,(int *)&local_8);
    pbVar8 = local_14;
    pbVar11 = pbVar6 + 0x80;
    memmove(pbVar11, pbVar8, local_8); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    pbVar6[0x68] = 0x80;
    pbVar6[0x69] = 0;
    pbVar6[0x6a] = 0;
    pbVar6[0x6b] = 0;
    *(uint *)(pbVar6 + 0x6c) = local_8;
    st::fn_006AB060(&local_14);
    local_24 = local_8 + 0x80;
    pbVar8 = local_18;
    pbVar11 = pbVar6 + local_24;
    memmove(pbVar11, pbVar8, local_c); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    *(int *)(pbVar6 + 0x70) = local_24;
    *(uint *)(pbVar6 + 0x74) = local_c;
    st::fn_006AB060(&local_18);
    pbVar8 = local_1c;
    pbVar11 = pbVar6 + local_24 + local_c;
    memmove(pbVar11, pbVar8, local_10); /* compiler REP MOVS byte copy */
    *(uint *)(pbVar6 + 0x78) = local_24 + local_c;
    *(uint *)(pbVar6 + 0x7c) = local_10;
    st::fn_006AB060(&local_1c);
    g_currentExceptionFrame = local_6c.previous;
    return pbVar6;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\nick\\to_torp.cpp",0x4d4,0,iVar5,"%s",
                             "STTorpC::SaveTorpData");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,"E:\\__titans\\nick\\to_torp.cpp",0x4d5);
  return local_28;
}

// 006456C0 STTorpC::RestoreTorpData
#line 4 "decomp/ST.exe/functions/006456C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::RestoreTorpData */

void __thiscall st::fn_006456C0(STTorpC *this,int param_1)

{
  STTorpC *pSVar2;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  byte *puVar6;
  byte *puVar7;
  InternalExceptionFrame local_50;
  STTorpC *local_c;
  AnonShape_006456C0_B6840D7C *local_8;

  local_8 = (AnonShape_006456C0_B6840D7C *)param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    puVar6 = (byte *)&local_8->field_0x14;
    puVar7 = (byte *)&local_c->field_0245;
    memmove(puVar7, puVar6, 0x44); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0x231 = local_8->field_0058;
    *(undefined4 *)&local_c->field_0x235 = local_8->field_005C;
    *(undefined4 *)&local_c->field_0x239 = local_8->field_0060;
    local_c->field_023D = local_8->field_0064;
    pDVar4 = (DArrayTy *)
             st::fn_006B0060(nullptr,(uint *)(&local_8->field_0x0 + local_8->field_0068));
    pSVar2->field_0241 = pDVar4;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\nick\\to_torp.cpp",0x4e5,0,iVar3,"%s",
                             "STTorpC::RestoreTorpData");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\nick\\to_torp.cpp",0x4e6);
  return;
}

