#include "../../pseudocode_runtime.h"


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

int __thiscall STTorpC::GetMessage(STTorpC *this,STMessage *message)

{
  char cVar1;
  short sVar2;
  STMessageId SVar3;
  STSprGameObjC_field_0259State SVar4;
  longlong lVar5;
  code *pcVar6;
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
  undefined2 uVar19;
  int iVar20;
  byte *puVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  bool bVar25;
  uint uVar26;
  undefined4 uVar27;
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
  int local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  short sStack_1a2;
  int local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  short sStack_192;
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
  iVar10 = Library::MSVCRT::__setjmp3(local_28c.jumpBuffer,0);
  this_00 = local_c8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_28c.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x350,0,iVar10,"%s"
                                ,"STTorpC::GetMessage");
    if (iVar11 == 0) {
      RaiseInternalException(iVar10,0,"E:\\__titans\\nick\\to_torp.cpp",0x351);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_c8,message);
  SVar3 = message->id;
  if (MESS_SHARED_0003 < SVar3) {
    if (SVar3 != MESS_SHARED_0108) {
      if (SVar3 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_4c = (STGameObjC *)SaveTorpData((STTorpC *)this_00,(int *)&local_90);
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_4c,local_90);
      FreeAndNull(&local_4c);
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
    local_14 = (int)*(short *)&this_00->field_0x24f;
    local_164 = (float)(int)*(short *)&this_00->field_0x24b * _DAT_007904f8 * _DAT_007904f0;
    local_160 = (float)(int)*(short *)&this_00->field_0x24d * _DAT_007904f8 * _DAT_007904f0;
    local_15c = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_1b8);
    local_14 = (int)*(short *)&this_00->field_0x255;
    local_170 = (float)(int)*(short *)&this_00->field_0x251 * _DAT_007904f8 * _DAT_007904f0;
    local_16c = (float)(int)*(short *)&this_00->field_0x253 * _DAT_007904f8 * _DAT_007904f0;
    local_168 = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_1c8);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    sVar9 = (*this_00->vtable->vfunc_14)
                      (local_1b8._2_2_,sStack_1b2,local_1b0 >> 0x10,local_1c8._2_2_,sStack_1c2,
                       local_1c0 >> 0x10);
    thunk_FUN_004abce0(&this_00->field_01D5,0,*(int *)(&DAT_007d2138 + sVar9 * 4),
                       *(int *)(&DAT_007d2138 + sVar9 * 4),'\0');
    STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0,g_playSystem_00802A38->field_00E4);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0003) {
    STAllPlayersC::UnRegisterTorpedo
              (g_allPlayers_007FA174,*(short *)&this_00->field_0x26e,(int)this_00);
    DArrayDestroy(*(DArrayTy **)((int)&this_00->field_023E + 3));
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    thunk_FUN_0062c2a0((int *)&this_00->field_0x27e);
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
      local_158 = Library::DKW::LIB::MemAlloc(0x44);
      iVar11 = 0;
      do {
        *(int **)(iVar11 + (int)local_158) = DAT_00806774;
        iVar11 = iVar11 + 4;
      } while (iVar11 < 0x44);
      *(int **)((int)local_158 + 8) = DAT_00806764;
      local_148 = DAT_008032b8;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_144 = 0x10;
      local_140 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_158,
                 (AnonShape_004AD790_77673787 *)(*(int *)(iVar10 + 0x70) + iVar10));
      FreeAndNull(&local_158);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(iVar10 + 0x78) + iVar10));
      RestoreTorpData((STTorpC *)this_00,iVar10);
      STAllPlayersC::RegisterTorpedo
                (g_allPlayers_007FA174,(int)this_00,*(short *)&this_00->field_0x26e);
      if (this_00->field_0259 != CASE_9A) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      piVar12 = thunk_FUN_0062bbc0((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_0x24f,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)(short)this_00->field_0231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar12;
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    puVar14 = (byte *)(iVar10 + 0x14);
    puVar21 = (byte *)&this_00->field_0x245;
    memmove(puVar21, puVar14, 0x44); /* compiler REP MOVS byte copy */
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
    pDVar13 = Library::DKW::TBL::DArrayCreate(nullptr,0,8,1);
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
        bVar7 = thunk_FUN_00430750(SVar4);
      }
      thunk_FUN_00417ff0(this_00,bVar7);
      uVar16 = LookupRecordByte((char)this_00->field_0024);
      if ((uVar16 & 0xffU) == 1) {
        iVar10 = thunk_FUN_004e60d0(this_00->field_0024,0x99);
        if (iVar10 != 0) {
          this_00->field_0x61 = ((byte)this_00->field_0x61 >> 1) + this_00->field_0x61;
        }
      }
      else if (((uVar16 & 0xffU) == 2) &&
              (iVar10 = thunk_FUN_004e60d0(this_00->field_0024,0x96), iVar10 != 0)) {
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
        bVar7 = thunk_FUN_00430750(SVar4);
      }
      thunk_FUN_00417ff0(this_00,bVar7);
    }
    iVar10 = sub_00415B30(this_00,*(short *)&this_00->field_0x24b,*(short *)&this_00->field_0x24d,
                          *(short *)&this_00->field_0x24f,*(short *)&this_00->field_0x251,
                          *(short *)&this_00->field_0x253,*(short *)&this_00->field_0x255,
                          this_00->field_0x61);
    uVar8 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar19 = extraout_var_00;
    if (iVar10 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x8a);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar19 = extraout_var_01;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar8 = extraout_var;
    }
    *(int *)&this_00->field_0x68 = *(int *)&this_00->field_0x68 + 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar8 = (*this_00->vtable->vfunc_10)
                      (*(short *)&this_00->field_0x24b,*(short *)&this_00->field_0x24d,
                       CONCAT22(uVar19,*(undefined2 *)&this_00->field_0x24f),
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
              thunk_FUN_0041dc40(local_248,(short)this_00->field_0231,
                                 *(ushort *)&this_00->field_0x235,*(short *)&this_00->field_0x6c);
    *(undefined4 *)&this_00->field_0x237 = *puVar14;
    *(undefined2 *)&this_00->field_0x23b = *(undefined2 *)(puVar14 + 1);
    if (this_00->field_0259 == CASE_9A) {
      piVar12 = thunk_FUN_0062bbc0((int)*(short *)&this_00->field_0x24b,
                                   (int)*(short *)&this_00->field_0x24d,
                                   (int)*(short *)&this_00->field_0x24f,
                                   (int)*(short *)&this_00->field_0x251,
                                   (int)*(short *)&this_00->field_0x253,
                                   (int)*(short *)&this_00->field_0x255,0x9a,
                                   (int)(short)this_00->field_0231,0x14,400);
      *(int **)&this_00->field_0x27e = piVar12;
    }
    if (this_00->field_0259 == CASE_97) {
      local_4c = STAllPlayersC::GetObjPtr
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
      pcVar22 = "atorsm";
      break;
    case CASE_97:
      pcVar22 = "atorme";
      break;
    case CASE_98:
      pcVar22 = "atorla";
      break;
    case CASE_99:
      pcVar22 = "acas0";
      break;
    case CASE_9A:
      pcVar22 = "aemtor";
      break;
    case CASE_9B:
    case CASE_9D:
      pcVar22 = "alray1";
      break;
    case CASE_9C:
      pcVar22 = "alray0";
      break;
    case CASE_9E:
      pcVar22 = "alray2";
      break;
    case CASE_9F:
    case CASE_A3:
    case CASE_A4:
      pcVar22 = &DAT_007d2578;
      break;
    case CASE_A0:
    case CASE_BF:
      pcVar22 = &DAT_007d251c;
      break;
    case CASE_A1:
      pcVar22 = "pr_torp";
      break;
    default:
      goto switchD_00640c2d_caseD_a2;
    case CASE_A5:
      pcVar22 = "satlas";
      break;
    case CASE_AC:
      pcVar22 = "aspltor";
      break;
    case CASE_AD:
      pcVar22 = "neuro";
      break;
    case CASE_AE:
      pcVar22 = "agcan";
      break;
    case CASE_B6:
    case CASE_BA:
      pcVar22 = "eshell";
      break;
    case CASE_B7:
      pcVar22 = "ionbomb";
      break;
    case CASE_B8:
      pcVar22 = "biaacc";
      break;
    case CASE_B9:
      pcVar22 = &DAT_007d2534;
    }
    uVar17 = 0xffffffff;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_60;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
switchD_00640c2d_caseD_a2:
    puVar14 = (byte *)(&this_00->field_01D5);
    iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,0,DAT_00806774,local_60,0x1d);
    if (iVar10 != 0) {
      RaiseInternalException
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
      iVar11 = 9;
      iVar10 = 0;
      break;
    default:
      local_10 = (int)*(short *)&this_00->field_0x24f;
      local_17c = (float)(int)*(short *)&this_00->field_0x24b * _DAT_007904f8 * _DAT_007904f0;
      local_178 = (float)(int)*(short *)&this_00->field_0x24d * _DAT_007904f8 * _DAT_007904f0;
      local_174 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_198);
      local_10 = (int)*(short *)&this_00->field_0x255;
      local_188 = (float)(int)*(short *)&this_00->field_0x251 * _DAT_007904f8 * _DAT_007904f0;
      local_184 = (float)(int)*(short *)&this_00->field_0x253 * _DAT_007904f8 * _DAT_007904f0;
      local_180 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_1a8);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar9 = (*this_00->vtable->vfunc_14)
                        (local_198._2_2_,sStack_192,local_190 >> 0x10,local_1a8._2_2_,sStack_1a2,
                         local_1a0 >> 0x10);
      iVar10 = *(int *)(&DAT_007d2138 + sVar9 * 4);
      iVar11 = iVar10;
      break;
    case CASE_A5:
      iVar11 = 0;
      iVar10 = 0;
    }
    thunk_FUN_004abce0(puVar14,0,iVar10,iVar11,'\0');
    STT3DSprC::StartShow((STT3DSprC *)puVar14,0,g_playSystem_00802A38->field_00E4);
    uVar15 = STAllPlayersC::RegisterTorpedo(g_allPlayers_007FA174,(int)this_00,-1);
    *(short *)&this_00->field_0x26e = (short)uVar15;
    if (this_00->field_0259 != CASE_A3) {
      iVar10 = (int)*(short *)&this_00->field_0x47;
      iVar11 = (int)*(short *)&this_00->field_0x49;
      if ((((iVar10 < 0) || (iVar11 < 0)) || (g_worldGrid.sizeX <= iVar10)) ||
         (g_worldGrid.sizeY <= iVar11)) {
        bVar25 = false;
      }
      else {
        bVar25 = *(char *)(g_worldGrid.sizeX * iVar11 + DAT_007fb26c + iVar10) != '\0';
      }
      if (bVar25) {
        if ((&DAT_007fb24c)[this_00->field_0024] == 0) {
          bVar25 = false;
        }
        else {
          bVar25 = *(char *)(g_worldGrid.sizeX * iVar11 + (&DAT_007fb24c)[this_00->field_0024] +
                            iVar10) != '\0';
        }
        if (bVar25) {
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
        STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,2,g_playSystem_00802A38->field_00E4);
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
        uVar17 = thunk_FUN_00645d30(this_00->field_0024,this_00->field_0259);
        this_00->field_0x25d = (char)uVar17;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c4 = *(int *)(&DAT_007e6468 + (this_00->field_0259 * 5 + -0x2ee + (uVar17 & 0xff)) * 4
                           );
        thunk_FUN_006383e0((int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43,
                           (int)*(short *)&this_00->field_0x45,this_00->field_0024,
                           (ushort)*(undefined4 *)&this_00->field_0x25e,
                           *(ushort *)&this_00->field_0x262,this_00->field_0259,local_c4 / 2,1);
      }
      if (*(int *)&this_00->field_0x270 == 1) {
        iVar10 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,
                            *(AnonShape_005EFAE0_B406B78B **)&this_00->field_0x274,(int *)&local_30);
        if (iVar10 == -4) {
          thunk_FUN_006457e0((int)this_00);
          g_currentExceptionFrame = local_28c.previous;
          return 0;
        }
        uVar17 = thunk_FUN_00645d30(this_00->field_0024,this_00->field_0259);
        this_00->field_0x25d = (char)uVar17;
        SVar4 = this_00->field_0259;
        if (SVar4 == CASE_9A) {
          iVar10 = 0;
          local_EAX_8983 = thunk_FUN_004ad650((STT3DSprC *)((int)local_30 + 0x1d5));
          thunk_FUN_00637e60(local_EAX_8983,iVar10);
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
          uVar8 = *(undefined2 *)&this_00->field_0x245;
          memset(local_220, 0, 0x58); /* compiler bulk-zero initialization */
          local_220[0] = 0x15e;
          local_220[3] = 1;
          local_220[2] = 1;
          local_220[1] = local_30[9];
          local_208 = *(undefined2 *)&this_00->field_0x249;
          local_20a = *(undefined2 *)&this_00->field_0x247;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
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
    iVar10 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar14,'\0');
    if (iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) {
      STT3DSprC::StopShow((STT3DSprC *)puVar14,0);
    }
    iVar10 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar14,'\0');
    if ((iVar10 + -1 < (int)(uint)(byte)this_00->field_0x27c) && (this_00->field_0x282 == '\0'))
    goto LAB_00642c6e;
    goto cf_common_exit_00642C8B;
  }
  if (this_00->field_0x27d == '\0') goto cf_common_exit_00642C8B;
  local_80 = (int)*(short *)&this_00->field_0x41;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)&this_00->field_0x49);
  sVar9 = *(short *)&this_00->field_0x47;
  local_7c = (int)*(short *)&this_00->field_0x43;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)&this_00->field_0x4b);
  local_78 = (int)*(short *)&this_00->field_0x45;
  iVar10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this_00,&local_a4,&local_9c);
  if (iVar10 == -1) {
    RaiseInternalException
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
      thunk_FUN_006443c0(this_00,local_98,local_8c,local_a0);
      iVar10 = sub_00415B30(this_00,*(short *)&this_00->field_0x41,*(short *)&this_00->field_0x43,
                            *(short *)&this_00->field_0x45,local_98[0],local_8c[0],local_a0[0],
                            this_00->field_0x61);
      if (iVar10 != 0) {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x170);
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
  memset(local_13c, 0, 0x70); /* compiler bulk-zero initialization */
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
  if ((iVar11 != 0) && (this_00->field_0259 != CASE_A3)) {
    iVar11 = (int)*(short *)&this_00->field_0x47;
    iVar10 = (int)*(short *)&this_00->field_0x49;
    if ((iVar11 < 0) ||
       (((iVar10 < 0 || (g_worldGrid.sizeX <= iVar11)) || (g_worldGrid.sizeY <= iVar10)))) {
      bVar25 = false;
    }
    else {
      bVar25 = *(char *)(g_worldGrid.sizeX * iVar10 + DAT_007fb26c + iVar11) != '\0';
    }
    iVar20 = local_34;
    if (bVar25) {
      if ((&DAT_007fb24c)[this_00->field_0024] == 0) {
        bVar25 = false;
      }
      else {
        bVar25 = *(char *)(g_worldGrid.sizeX * iVar10 + (&DAT_007fb24c)[this_00->field_0024] +
                          iVar11) != '\0';
      }
      if ((!bVar25) || (this_00->field_0x286 == '\0')) {
        local_18 = 1;
        *(undefined4 *)&this_00->field_0x270 = 0;
        iVar20 = 2;
      }
    }
    if (1 < iVar20) {
      if ((this_00->field_0259 == CASE_AD) &&
         (iVar10 = thunk_FUN_004e60d0(this_00->field_0024,0x7e), iVar10 != 0)) {
        iVar10 = 0x1389;
      }
      else {
        iVar10 = *(int *)(&DAT_007e6468 + (this_00->field_0259 - CASE_96) * 0x14);
      }
      uVar17 = thunk_FUN_00497030((int)*(short *)&this_00->field_0x47,
                                  (int)*(short *)&this_00->field_0x49,this_00->field_0024,1,iVar10);
      if ((int)uVar17 < 0) {
        local_18 = 0;
      }
      else {
        thunk_FUN_00497850((int)*(short *)&this_00->field_0x268,(int)*(short *)&this_00->field_0x26a
                           ,(int)*(short *)&this_00->field_0x26c,(int)*(short *)&this_00->field_0x41
                           ,(int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45,
                           uVar17,&local_120,&local_11c,local_118);
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
    local_4c = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)this_00->field_0024,
                          *(ushort *)&this_00->field_0x262,CASE_1);
    if ((local_4c == nullptr) || (this_00->field_0x27d == '\b')) {
      *(undefined4 *)&this_00->field_0x264 = 0;
    }
    if (local_4c != nullptr) {
      local_d8 = thunk_FUN_004ad650((STT3DSprC *)&local_4c->field_0x1d5);
    }
  }
  local_d4 = *(undefined4 *)&this_00->field_0x264;
  bVar25 = false;
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
    bVar25 = true;
    local_d0 = 1;
    goto switchD_006415e9_caseD_9f;
  case CASE_AC:
  case CASE_AD:
    local_13c[0] = 6;
  }
  local_13c[1] = 1;
  bVar25 = true;
switchD_006415e9_caseD_9f:
  if ((this_00->field_0x27d != '\0') && (bVar25)) {
    if (this_00->field_0259 == CASE_A1) {
      iVar10 = FUN_006acf0d(local_80,local_7c,local_78,(int)*(short *)&this_00->field_0x41,
                            (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45);
      if (iVar10 == 0) {
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,(int)*(short *)&this_00->field_0x41,
                   (int)*(short *)&this_00->field_0x43,(int)*(short *)&this_00->field_0x45,0,0,0,0,0
                   ,0,-1,0,0);
      }
      else {
        local_94 = ((*(short *)&this_00->field_0x41 - local_80) * 10000) / iVar10;
        iVar20 = local_94 * iVar10;
        local_10 = ((*(short *)&this_00->field_0x43 - local_7c) * 10000) / iVar10;
        local_14 = local_10 * iVar10;
        local_a8 = local_10 / 10000;
        local_cc = iVar20 / 40000 + local_a8 + local_80;
        local_84 = local_94 / 10000;
        local_34 = local_14 / 40000 + local_84 + local_7c;
        uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar17;
        iVar10 = (((*(short *)&this_00->field_0x45 - local_78) * 10000) / iVar10) * iVar10;
        iVar11 = (uVar17 >> 0x10) % 0xb + 5;
        local_88 = iVar10;
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,local_cc,local_34,iVar10 / 40000 + local_78,
                   (short)((iVar11 * local_10) / 10000),(short)((iVar11 * local_94) / 10000),0,0,0,0
                   ,-1,0,0);
        local_34 = (local_14 * 3) / 40000 + local_84 + local_7c;
        uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
        *(uint *)&this_00->field_0x1c = uVar17;
        iVar11 = (uVar17 >> 0x10) % 0xb + 5;
        lVar5 = (longlong)(iVar11 * local_10) * -0x68db8bad;
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,((iVar20 * 3) / 40000 - local_a8) + local_80,local_34
                   ,(iVar10 * 3) / 40000 + local_78,
                   (short)(int)(lVar5 >> 0x2c) - (short)(lVar5 >> 0x3f),
                   (short)((iVar11 * local_94) / 10000),0,0,0,0,-1,0,0);
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
    iVar10 = this_00->vfunc_D8();
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x30f);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x23d = 0;
  this_00->field_0x27c = 0;
  STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,0);
  if (this_00->field_0259 == CASE_99) {
    pSVar18 = STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,(char)this_00->field_0024,
                         *(ushort *)&this_00->field_0x262,CASE_1);
    if (pSVar18 == nullptr) {
      iVar10 = *(int *)&this_00->field_0x1c;
LAB_00641a40:
      uVar17 = iVar10 * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar17;
      uVar26 = 7;
    }
    else {
      iVar10 = (*pSVar18->vtable->vfunc_2C)();
      if (iVar10 != 0x10) {
        iVar10 = *(int *)&this_00->field_0x1c;
        goto LAB_00641a40;
      }
      uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar17;
      uVar26 = 5;
    }
    thunk_FUN_0057b670((int *)this_00,0,uVar26,(short *)0x1,(short *)(uVar17 >> 0x10));
  }
  if (this_00->field_0259 == CASE_B7) {
    uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar17;
    thunk_FUN_0057b670((int *)this_00,0,5,(short *)0x1,(short *)(uVar17 >> 0x10));
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
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2514;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x14;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0570;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_97:
    if (this_00->field_0x288 == '\x02') {
      uVar17 = 0xffffffff;
      local_5 = 10;
      pcVar22 = &DAT_007d2500;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_48;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d0588;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_2c;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d0564;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_74;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
    }
    else {
      uVar17 = 0xffffffff;
      local_5 = 0x14;
      pcVar22 = &DAT_007d0594;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_48;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d0588;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_2c;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d0564;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_74;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
    }
    break;
  case CASE_98:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d24f8;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x12;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = "expmask3";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d24ec;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_99:
  case CASE_A3:
    pcVar22 = "expcshl";
    goto LAB_006424a7;
  case CASE_9A:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2500;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 10;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = "expmask3";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0564;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_9B:
  case CASE_9D:
    uVar17 = 0xffffffff;
    pcVar22 = "exprlas";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_9C:
    uVar17 = 0xffffffff;
    pcVar22 = "expllas";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_9E:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d24c8;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_9F:
    pcVar22 = "exphfs";
    goto LAB_006424a7;
  case CASE_A0:
  case CASE_A1:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d24ac;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 10;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0588;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0570;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_A4:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d24a4;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x22;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = "expmask3";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d24ec;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_A5:
    uVar17 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this_00->field_0x1c = uVar17;
    uVar17 = (uVar17 >> 0x10) % 3;
    if (uVar17 == 0) {
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d2490;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      local_5 = 0x16;
      iVar10 = -1;
      pcVar22 = local_48;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = "expmask3";
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_2c;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d2484;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_74;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0;
    }
    else if (uVar17 == 1) {
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d2474;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      local_5 = 0x16;
      iVar10 = -1;
      pcVar22 = local_48;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = "expmask3";
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_2c;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d2484;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_74;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0;
    }
    else if (uVar17 == 2) {
      uVar17 = 0xffffffff;
      local_5 = 0x16;
      pcVar22 = &DAT_007d247c;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_48;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = "expmask3";
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_2c;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d24ec;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_74;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
    }
    else {
      uVar17 = 0xffffffff;
      local_5 = 0x16;
      pcVar22 = &DAT_007d2490;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_48;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = "expmask3";
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_2c;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
      uVar17 = 0xffffffff;
      pcVar22 = &DAT_007d2484;
      do {
        pcVar24 = pcVar22;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar24 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar24;
      } while (cVar1 != '\0');
      uVar17 = ~uVar17;
      iVar10 = -1;
      pcVar22 = local_74;
      do {
        pcVar23 = pcVar22;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar23 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar23;
      } while (cVar1 != '\0');
      pcVar22 = pcVar24 + -uVar17;
      pcVar24 = pcVar23 + -1;
      memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
      uVar26 = 0;
    }
    break;
  case CASE_AC:
    uVar17 = 0xffffffff;
    pcVar22 = "expemag";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 10;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0564;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_AD:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2444;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_AE:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2498;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 9;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0570;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_B6:
  case CASE_BA:
    pcVar22 = &DAT_007d2438;
LAB_006424a7:
    uVar17 = 0xffffffff;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    pcVar22 = &DAT_007d0570;
LAB_00642561:
    uVar17 = 0xffffffff;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0xf;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_B7:
  case CASE_B9:
    uVar17 = 0xffffffff;
    pcVar22 = "explioc";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_B8:
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d245c;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    local_5 = 0x12;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d2508;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0570;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_74;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    break;
  case CASE_BF:
    uVar17 = 0xffffffff;
    pcVar22 = "exppar";
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_48;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    uVar26 = 0;
    uVar17 = 0xffffffff;
    pcVar22 = &DAT_007d0588;
    do {
      pcVar24 = pcVar22;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar24 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar24;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar10 = -1;
    pcVar22 = local_2c;
    do {
      pcVar23 = pcVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar23 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar23;
    } while (cVar1 != '\0');
    pcVar22 = pcVar24 + -uVar17;
    pcVar24 = pcVar23 + -1;
    memmove(pcVar24, pcVar22, uVar17); /* compiler REP MOVS byte copy */
    pcVar22 = &DAT_007d0564;
    goto LAB_00642561;
  }
  puVar14 = (byte *)(&this_00->field_01D5);
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,0,DAT_00806774,local_48,0x1d);
  if (iVar10 != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x263);
  }
  thunk_FUN_004ac610(puVar14,'\0');
  if ((local_74[0] != '\0') &&
     (iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,2,DAT_00806764,local_74,0x1d),
     iVar10 == 0)) {
    thunk_FUN_004ac610(puVar14,'\x02');
    uVar15 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar14,'\x02');
    this_00->field_0x282 = (char)uVar15;
    this_00->field_0x283 = local_5;
    this_00->field_0x284 = 0;
  }
  if (local_2c[0] != '\0') {
    iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,1,DAT_00806774,local_2c,0x1d);
    if (iVar10 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x270);
    }
    thunk_FUN_004ac610(puVar14,'\x01');
  }
  iVar10 = STT3DSprC::StartShow((STT3DSprC *)puVar14,0,g_playSystem_00802A38->field_00E4);
  if (iVar10 != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x274);
  }
  iVar10 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar14,'\x01');
  if (0 < iVar10) {
    iVar10 = STT3DSprC::StartShow((STT3DSprC *)puVar14,1,g_playSystem_00802A38->field_00E4);
    if (iVar10 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x277);
    }
    STT3DSprC::sub_004ACF20((STT3DSprC *)puVar14,DAT_008032b8,0x10);
    STT3DSprC::sub_004ACFE0((STT3DSprC *)puVar14,'\x01');
  }
  uVar27 = 0x45;
  uVar15 = 0x5a;
  iVar10 = 1;
  uVar17 = thunk_FUN_004ad650((STT3DSprC *)puVar14);
  Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand(this_00->field_0211,uVar17,iVar10,uVar15,uVar27);
  iVar10 = this_00->vfunc_D8();
  if (iVar10 != 0) {
    RaiseInternalException
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

