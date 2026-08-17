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
   direct_offsets={10:2,14:3,18:3,1c:13}

   [STSwitchEnumApplier] Switch target field_0259 uses
   /SubmarineTitans/Recovered/Enums/STTorpC_field_0259State. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9B=155;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A5=165;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B4=180;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185;CASE_BA=186;CASE_BF=191
    */

int __thiscall STTorpC::GetMessage(STTorpC *this,STMessage *message)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  STMessageId SVar4;
  STTorpC_field_0259State SVar5;
  longlong lVar6;
  STTorpC *this_00;
  byte bVar8;
  undefined2 uVar9;
  int local_EAX_50;
  int iVar12;
  int *piVar13_mg0;
  DArrayTy *pDVar13;
  int uVar16;
  int iVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  byte *puVar15;
  int *piVar13_mg1;
  short sVar10;
  undefined4 uVar18;
  uint uVar17;
  int iVar10;
  STGameObjC *this_01;
  uint uVar19;
  int local_EAX_8983;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined2 uVar21;
  uint uVar20;
  int iVar22;
  byte *puVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  bool bVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
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
  short local_206;
  short local_204;
  short local_202;
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
  STTorpC *local_c8;
  int local_c4;
  STTorpC_field_0259State local_c0;
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
  byte local_5;

  local_28c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_28c;
  local_c8 = this;
  local_EAX_50 = Library::MSVCRT::__setjmp3(local_28c.jumpBuffer,0);
  this_00 = local_c8;
  if (local_EAX_50 != 0) {
    g_currentExceptionFrame = local_28c.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x350,0,local_EAX_50,
                                "%s",0,(char)local_EAX_50,0xcc,
                                "STTorpC::GetMessage");
    if (iVar11 == 0) {
      RaiseInternalException(local_EAX_50,0,"E:\\__titans\\nick\\to_torp.cpp",0x351);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[00640720]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  STSprGameObjC::GetMessage((STSprGameObjC *)local_c8,message);
  SVar4 = message->id;
  if (MESS_SHARED_0003 < SVar4) {
    if (SVar4 != MESS_SHARED_0108) {
      if (SVar4 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      /* ST_CALLSITE[00642D34]: CALL 0x004053d5; direct=004053D5 STTorpC::SaveTorpData */
      local_4c = (STGameObjC *)SaveTorpData(this_00,(int *)&local_90);
      /* ST_CALLSITE[00642D4E]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_4c,(uint)local_90);
      FreeAndNull(&local_4c);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    SVar5 = this_00->field_0259;
    if (SVar5 == CASE_9F) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_A0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_BF) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_A3) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_A4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_AE) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_A5) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_A1) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_B4) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_B6) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_B7) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_B9) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_AD) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (SVar5 == CASE_BA) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    if (this_00->field_023D != 1) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    local_14 = (int)this_00->field_024F;
    local_164 = (float)(int)this_00->field_024B * _DAT_007904f8 * _DAT_007904f0;
    local_160 = (float)(int)this_00->field_024D * _DAT_007904f8 * _DAT_007904f0;
    local_15c = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_1b8,&local_164,0.0,0.0,0.0,1);
    local_14 = (int)this_00->field_0255;
    local_170 = (float)(int)this_00->field_0251 * _DAT_007904f8 * _DAT_007904f0;
    local_16c = (float)(int)this_00->field_0253 * _DAT_007904f8 * _DAT_007904f0;
    local_168 = (float)local_14 * _DAT_007904f8 * _DAT_007904f0;
    ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_1c8,&local_170,0.0,0.0,0.0,1);
    /* ST_CALLSITE[00642F67]: CALL dword ptr [EAX + 0x14] */
    sVar10 = (*this_00->vtable->vfunc_14)
                       (STPiece<2,2>(local_1b8),sStack_1b2,(int)sStack_1ae,STPiece<2,2>(local_1c8),sStack_1c2,
                        local_1c0 >> 0x10);
    thunk_FUN_004abce0(&this_00->field_01D5,0,*(int *)(&DAT_007d2138 + sVar10 * 4),
                       *(int *)(&DAT_007d2138 + sVar10 * 4),'\0');
    /* ST_CALLSITE[00642F98]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0,g_playSystem_00802A38->field_00E4);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (SVar4 == MESS_SHARED_0003) {
    /* ST_CALLSITE[00642CDA]: CALL 0x00404bc4; direct=00404BC4 STAllPlayersC::UnRegisterTorpedo */
    STAllPlayersC::UnRegisterTorpedo(g_allPlayers_007FA174,this_00->field_026E,(int)this_00);
    DArrayDestroy(this_00->field_0241);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    thunk_FUN_0062c2a0((int *)&this_00->field_027E);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  if (SVar4 != MESS_ID_NONE) {
    if (SVar4 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    iVar14 = (message->arg0).i32;
    if (*(int *)(iVar14 + 0xc) != 1) {
      if (*(int *)(iVar14 + 0xc) != 2) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      local_158 = Library::DKW::LIB::MemAlloc(0x44);
      iVar12 = 0;
      do {
        *(int **)(iVar12 + (int)local_158) = PTR_00806774;
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0x44);
      STField<int *>(local_158,8) = PTR_00806764;
      local_148 = PTR_008032b8;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_144 = 0x10;
      local_140 = 0;
      /* ST_CALLSITE[006407D5]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_158,
                 (AnonShape_004AD790_77673787 *)(*(int *)(iVar14 + 0x70) + iVar14));
      FreeAndNull(&local_158);
      /* ST_CALLSITE[006407EE]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(iVar14 + 0x78) + iVar14));
      /* ST_CALLSITE[006407F6]: CALL 0x004015f0; direct=004015F0 STTorpC::RestoreTorpData */
      RestoreTorpData(this_00,iVar14);
      /* ST_CALLSITE[0064080A]: CALL 0x00402991; direct=00402991 STAllPlayersC::RegisterTorpedo */
      STAllPlayersC::RegisterTorpedo(g_allPlayers_007FA174,(int)this_00,this_00->field_026E);
      if (this_00->field_0259 != CASE_9A) {
        g_currentExceptionFrame = local_28c.previous;
        return 0;
      }
      piVar13_mg0 = thunk_FUN_0062bbc0((int)this_00->field_024B,(int)this_00->field_024D,
                                       (int)this_00->field_024F,(int)this_00->field_0251,
                                       (int)this_00->field_0253,(int)this_00->field_0255,0x9a,
                                       (int)this_00->field_0231,0x14,400);
      this_00->field_027E = piVar13_mg0;
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    puVar15 = (byte *)(iVar14 + 0x14);
    puVar23 = (byte *)&this_00->field_0245;
    memmove(puVar23, puVar15, 0x44); /* compiler REP MOVS byte copy */
    sVar10 = this_00->field_024B;
    if ((((sVar10 < 0) || (sVar2 = this_00->field_024D, sVar2 < 0)) || (this_00->field_024F < 0)) ||
       ((g_worldGrid.sizeX <=
         (short)((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) ||
        (g_worldGrid.sizeY <=
         (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)
                ))))) {
LAB_00642c6e:
      thunk_FUN_006457e0((int)this_00);
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    this_00->field_027D = 0;
    this_00->field_027E = nullptr;
    pDVar13 = Library::DKW::TBL::DArrayCreate(nullptr,0,8,1);
    this_00->field_0241 = pDVar13;
    this_00->field_0270 = 1;
    this_00->field_0278 = 0xffffffff;
    this_00->field_027C = '\0';
    this_00->field_023D = 1;
    SVar5 = this_00->field_0259;
    switch(SVar5) {
    case CASE_96:
    case CASE_97:
    case CASE_98:
    case CASE_99:
    case CASE_9A:
    case CASE_AC:
    case CASE_B4:
      if (g_allPlayers_007FA174 == nullptr) {
        bVar8 = 1;
      }
      else {
        bVar8 = thunk_FUN_00430750(SVar5);
      }
      thunk_FUN_00417ff0(this_00,bVar8);
      /* ST_CALLSITE[00640990]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar16 = LookupRecordByte(*(char *)&this_00->field_0024);
      uVar16 = (int)(byte)uVar16;
      if (uVar16 == 1) {
        iVar14 = thunk_FUN_004e60d0(this_00->field_0024,0x99);
        if (iVar14 != 0) {
          this_00->field_0061 = ((byte)this_00->field_0061 >> 1) + this_00->field_0061;
        }
      }
      else if ((uVar16 == 2) && (iVar14 = thunk_FUN_004e60d0(this_00->field_0024,0x96), iVar14 != 0)
              ) {
        this_00->field_0061 = ((byte)this_00->field_0061 >> 1) + this_00->field_0061;
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
        bVar8 = 1;
      }
      else {
        bVar8 = thunk_FUN_00430750(SVar5);
      }
      thunk_FUN_00417ff0(this_00,bVar8);
    }
    /* ST_CALLSITE[00640A3E]: CALL 0x00402455; direct=00402455 sub_00415B30 */
    iVar14 = sub_00415B30(this_00,this_00->field_024B,this_00->field_024D,this_00->field_024F,
                          this_00->field_0251,this_00->field_0253,this_00->field_0255,
                          this_00->field_0061);
    uVar9 = 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar21 = extraout_var_00;
    if (iVar14 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x8a);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar21 = extraout_var_01;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar9 = extraout_var;
    }
    this_00->field_0068 = this_00->field_0068 + 1;
    /* ST_CALLSITE[00640A99]: CALL dword ptr [EDX + 0x10] */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar9 = (*this_00->vtable->vfunc_10)
                      (this_00->field_024B,this_00->field_024D,CONCAT22(uVar21,this_00->field_024F),
                       this_00->field_0251,this_00->field_0253,CONCAT22(uVar9,this_00->field_0255));
    this_00->field_006C = uVar9;
    this_00->field_0268 = this_00->field_0041;
    this_00->field_026A = this_00->field_0043;
    this_00->field_026C = this_00->field_0045;
    switch(this_00->field_0259) {
    case CASE_96:
    case CASE_97:
    case CASE_98:
    case CASE_9A:
    case CASE_9B:
    case CASE_9C:
    case CASE_B4:
      this_00->field_0231 = 0x32;
      break;
    case CASE_99:
    case CASE_AD:
      this_00->field_0231 = 0xf;
      break;
    case CASE_9D:
    case CASE_9E:
    case CASE_B6:
    case CASE_BA:
      this_00->field_0231 = 0x1e;
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
      this_00->field_0231 = 0;
      break;
    default:
      goto switchD_00640ad9_caseD_a2;
    case CASE_A5:
      this_00->field_0231 = 0x3c;
      break;
    case CASE_AC:
      this_00->field_0231 = 0x28;
    }
    this_00->field_0233 = 0;
switchD_00640ad9_caseD_a2:
    uVar3 = this_00->field_0231;
    puVar15 = thunk_FUN_0041dc40(local_248,uVar3,*(ushort *)&this_00->field_0x235,
                                 this_00->field_006C);
    *(undefined4 *)&this_00->field_0x237 = *puVar15;
    *(undefined2 *)&this_00->field_0x23b = *(undefined2 *)(puVar15 + 1);
    if (this_00->field_0259 == CASE_9A) {
      piVar13_mg1 = thunk_FUN_0062bbc0((int)this_00->field_024B,(int)this_00->field_024D,
                                       (int)this_00->field_024F,(int)this_00->field_0251,
                                       (int)this_00->field_0253,(int)this_00->field_0255,0x9a,
                                       (int)this_00->field_0231,0x14,400);
      this_00->field_027E = piVar13_mg1;
    }
    if (this_00->field_0259 == CASE_97) {
      /* ST_CALLSITE[00640BE2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      local_4c = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0262,
                            CASE_1);
      if ((local_4c != nullptr) &&
         /* ST_CALLSITE[00640BF2]: CALL dword ptr [EDX + 0x2c] */
         (iVar14 = local_4c->vfunc_2C(), iVar14 == 0x3f)) {
        this_00->field_0288 = 1;
      }
    }
    local_60[0] = '\0';
    local_48[0] = '\0';
    local_2c[0] = '\0';
    local_74[0] = '\0';
    switch(this_00->field_0259) {
    case CASE_96:
    case CASE_B4:
      pcVar24 = "atorsm";
      break;
    case CASE_97:
      pcVar24 = "atorme";
      break;
    case CASE_98:
      pcVar24 = "atorla";
      break;
    case CASE_99:
      pcVar24 = "acas0";
      break;
    case CASE_9A:
      pcVar24 = "aemtor";
      break;
    case CASE_9B:
    case CASE_9D:
      pcVar24 = "alray1";
      break;
    case CASE_9C:
      pcVar24 = "alray0";
      break;
    case CASE_9E:
      pcVar24 = "alray2";
      break;
    case CASE_9F:
    case CASE_A3:
    case CASE_A4:
      pcVar24 = &CHAR_a_007d2578;
      break;
    case CASE_A0:
    case CASE_BF:
      pcVar24 = &CHAR_a_007d251c;
      break;
    case CASE_A1:
      pcVar24 = "pr_torp";
      break;
    default:
      goto switchD_00640c2d_caseD_a2;
    case CASE_A5:
      pcVar24 = "satlas";
      break;
    case CASE_AC:
      pcVar24 = "aspltor";
      break;
    case CASE_AD:
      pcVar24 = "neuro";
      break;
    case CASE_AE:
      pcVar24 = "agcan";
      break;
    case CASE_B6:
    case CASE_BA:
      pcVar24 = "eshell";
      break;
    case CASE_B7:
      pcVar24 = "ionbomb";
      break;
    case CASE_B8:
      pcVar24 = "biaacc";
      break;
    case CASE_B9:
      pcVar24 = &CHAR_i_007d2534;
    }
    uVar19 = 0xffffffff;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_60;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
switchD_00640c2d_caseD_a2:
    puVar15 = (byte *)(&this_00->field_01D5);
    /* ST_CALLSITE[00640D3E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar14 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,0,PTR_00806774,local_60,CASE_1D);
    if (iVar14 != 0) {
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
      uVar30 = 9;
      uVar31 = 0;
      uVar9 = 0;
      uVar29 = 0;
      break;
    default:
      local_10 = (int)this_00->field_024F;
      local_17c = (float)(int)this_00->field_024B * _DAT_007904f8 * _DAT_007904f0;
      local_178 = (float)(int)this_00->field_024D * _DAT_007904f8 * _DAT_007904f0;
      local_174 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_198,&local_17c,0.0,0.0,0.0,1);
      local_10 = (int)this_00->field_0255;
      local_188 = (float)(int)this_00->field_0251 * _DAT_007904f8 * _DAT_007904f0;
      local_184 = (float)(int)this_00->field_0253 * _DAT_007904f8 * _DAT_007904f0;
      local_180 = (float)local_10 * _DAT_007904f8 * _DAT_007904f0;
      ST3DSMAPContext::sub_006E25D0(this_00->field_0211,&local_1a8,&local_188,0.0,0.0,0.0,1);
      /* ST_CALLSITE[00640EDC]: CALL dword ptr [EAX + 0x14] */
      sVar10 = (*this_00->vtable->vfunc_14)
                         (STPiece<2,2>(local_198),sStack_192,(int)sStack_18e,STPiece<2,2>(local_1a8),sStack_1a2,
                          local_1a0 >> 0x10);
      uVar18 = *(undefined4 *)(&DAT_007d2138 + sVar10 * 4);
      uVar29 = (undefined1)uVar18;
      uVar31 = (undefined1)((uint)uVar18 >> 8);
      uVar9 = (undefined2)((uint)uVar18 >> 0x10);
      uVar30 = uVar29;
      break;
    case CASE_A5:
      uVar30 = 0;
      uVar31 = 0;
      uVar9 = 0;
      uVar29 = 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    thunk_FUN_004abce0(puVar15,0,CONCAT22(uVar9,CONCAT11(uVar31,uVar29)),
                       CONCAT22(uVar9,CONCAT11(uVar31,uVar30)),'\0');
    /* ST_CALLSITE[00640F07]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)puVar15,0,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00640F15]: CALL 0x00402991; direct=00402991 STAllPlayersC::RegisterTorpedo */
    uVar18 = STAllPlayersC::RegisterTorpedo(g_allPlayers_007FA174,(int)this_00,-1);
    this_00->field_026E = (short)uVar18;
    if (this_00->field_0259 != CASE_A3) {
      iVar14 = (int)this_00->field_0047;
      iVar12 = (int)this_00->field_0049;
      if ((((iVar14 < 0) || (iVar12 < 0)) || (g_worldGrid.sizeX <= iVar14)) ||
         (g_worldGrid.sizeY <= iVar12)) {
        bVar28 = false;
      }
      else {
        bVar28 = *(char *)(g_worldGrid.sizeX * iVar12 + DAT_007fb26c + iVar14) != '\0';
      }
      if (bVar28) {
        if ((&DAT_007fb24c)[this_00->field_0024] == 0) {
          bVar28 = false;
        }
        else {
          bVar28 = *(char *)(g_worldGrid.sizeX * iVar12 + (&DAT_007fb24c)[this_00->field_0024] +
                            iVar14) != '\0';
        }
        if (bVar28) {
          this_00->field_0286 = 1;
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
  if (this_00->field_023D != 1) {
    bVar8 = this_00->field_027C + 1;
    this_00->field_027C = bVar8;
    if ((this_00->field_0282 != 0) && (this_00->field_0283 <= bVar8)) {
      if (this_00->field_0283 == bVar8) {
        /* ST_CALLSITE[006428A3]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,2,g_playSystem_00802A38->field_00E4);
      }
      else {
        bVar8 = this_00->field_0284 + 1;
        this_00->field_0284 = bVar8;
        if (bVar8 == this_00->field_0282) {
          /* ST_CALLSITE[006428C4]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,2);
          this_00->field_0282 = 0;
        }
        else {
          /* ST_CALLSITE[006428E2]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\x02',(uint)bVar8);
          /* ST_CALLSITE[006428EB]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          STT3DSprC::ShowCurFase((STT3DSprC *)&this_00->field_01D5,'\x02');
        }
      }
    }
    if (this_00->field_027C == '\x05') {
      if (this_00->field_0288 == '\x02') {
        uVar19 = thunk_FUN_00645d30(this_00->field_0024,this_00->field_0259);
        this_00->field_025D = (char)uVar19;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c4 = *(int *)(&DAT_007e6468 + (this_00->field_0259 * 5 + -0x2ee + (uVar19 & 0xff)) * 4
                           );
        thunk_FUN_006383e0((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,this_00->field_0024,(ushort)this_00->field_025E,
                           this_00->field_0262,this_00->field_0259,local_c4 / 2,1);
      }
      if (this_00->field_0270 == 1) {
        iVar14 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)this_00->field_0274
                            ,(int *)&local_30);
        if (iVar14 == -4) {
          thunk_FUN_006457e0((int)this_00);
          g_currentExceptionFrame = local_28c.previous;
          return 0;
        }
        uVar19 = thunk_FUN_00645d30(this_00->field_0024,this_00->field_0259);
        this_00->field_025D = (char)uVar19;
        SVar5 = this_00->field_0259;
        if (SVar5 == CASE_9A) {
          iVar14 = 0;
          local_EAX_8983 = thunk_FUN_004ad650((STT3DSprC *)((int)local_30 + 0x1d5));
          thunk_FUN_00637e60(local_EAX_8983,iVar14);
          local_b4 = *(undefined4 *)(&DAT_007d21f8 + (uint)(byte)this_00->field_025D * 4);
        }
        else if (SVar5 == CASE_AD) {
          local_b4 = *(undefined4 *)(&DAT_007d220c + (uVar19 & 0xff) * 4);
        }
        else if (SVar5 == CASE_A1) {
          local_b4 = *(undefined4 *)(&DAT_007d2220 + (uVar19 & 0xff) * 4);
        }
        else {
          local_b4 = 0;
        }
        local_bc = this_00->field_0024;
        local_b8 = this_00->field_0262;
        local_c0 = this_00->field_0259;
        local_b6 = *(undefined2 *)&this_00->field_025E;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c4 = *(int *)(&DAT_007e6468 +
                           (local_c0 * 5 + -0x2ee + (uint)(byte)this_00->field_025D) * 4);
        local_b0 = 0;
        if (this_00->field_0285 == '\x01') {
          local_c4 = STSignedDiv4(local_c4);
        }
        /* ST_CALLSITE[00642AC6]: CALL dword ptr [EDX + 0x2c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar14 = (**(code **)(*local_30 + 0x2c))();
        if (iVar14 == 0x68) {
          uVar9 = this_00->field_0245;
          memset(local_220, 0, 0x58); /* compiler bulk-zero initialization */
          local_220[0] = 0x15e;
          local_220[3] = 1;
          local_220[2] = 1;
          local_220[1] = local_30[9];
          local_208 = this_00->field_0249;
          local_20a = this_00->field_0247;
          local_1ef = STField<undefined2>(local_30,0x32);
          local_1f3 = local_30[6];
          local_1f4 = this_00->field_025D;
          local_20c = uVar9;
          iVar14 = thunk_FUN_004e60d0(local_30[9],0x7b);
          if (iVar14 == 0) {
            local_1ed = STSignedDiv4(local_c4);
          }
          else {
            local_1ed = local_c4 / 2;
          }
          local_202 = this_00->field_0045;
          local_204 = this_00->field_0043;
          local_1fc = this_00->field_0038;
          local_206 = this_00->field_0041;
          local_1fe = this_00->field_0036;
          local_200 = this_00->field_0034;
          local_1f8 = 1;
          local_1fa = 0;
          /* ST_CALLSITE[00642BE8]: CALL dword ptr [EAX + 0x8] */
          g_playSystem_00802A38->vfunc_08(0x147,0,0,(short)local_220,0);
        }
        local_22c = &local_c4;
        local_238 = local_30[2];
        local_234 = 2;
        local_230 = 0x110;
        /* ST_CALLSITE[00642C26]: CALL dword ptr [EAX + 0x18] */
        (*g_playSystem_00802A38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_240);
      }
    }
    puVar15 = (byte *)(&this_00->field_01D5);
    /* ST_CALLSITE[00642C33]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar14 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar15,'\0');
    if (iVar14 + -1 < (int)(uint)(byte)this_00->field_027C) {
      /* ST_CALLSITE[00642C49]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar15,0);
    }
    /* ST_CALLSITE[00642C52]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar14 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar15,'\0');
    if ((iVar14 + -1 < (int)(uint)(byte)this_00->field_027C) && (this_00->field_0282 == '\0'))
    goto LAB_00642c6e;
    goto cf_common_exit_00642C8B;
  }
  if (this_00->field_027D == 0) goto cf_common_exit_00642C8B;
  local_80 = (int)this_00->field_0041;
  local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(this_00->field_0049));
  sVar10 = this_00->field_0047;
  local_7c = (int)this_00->field_0043;
  local_84 = STReplaceLowWord((uint32_t)(local_84), (uint16_t)(this_00->field_004B));
  local_78 = (int)this_00->field_0045;
  /* ST_CALLSITE[00641141]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
  iVar14 = STJellyGunC::sub_00415ED0((STJellyGunC *)this_00,&local_a4,&local_9c);
  if (iVar14 == -1) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x15c);
  }
  if (((sVar10 == this_00->field_0047) && ((short)local_10 == this_00->field_0049)) &&
     ((short)local_84 == this_00->field_004B)) {
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
  }
  local_34 = iVar12;
  if (iVar14 == 0) {
    if (this_00->field_0288 == '\0') {
      thunk_FUN_006443c0(this_00,local_98,local_8c,local_a0);
      /* ST_CALLSITE[0064120B]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      iVar14 = sub_00415B30(this_00,this_00->field_0041,this_00->field_0043,this_00->field_0045,
                            local_98[0],local_8c[0],local_a0[0],this_00->field_0061);
      if (iVar14 != 0) {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x170);
      }
      this_00->field_007A = 0;
    }
    else {
      this_00->field_0288 = 2;
      thunk_FUN_00638230(this_00->field_01ED,5,(int)this_00->field_0041,(int)this_00->field_0043,
                         (int)this_00->field_0045);
    }
  }
  if ((local_9c == 1) &&
     (((this_00->field_0047 < 0 || (g_worldGrid.sizeX + -1 < (int)this_00->field_0047)) ||
      ((this_00->field_0049 < 0 ||
       ((g_worldGrid.sizeY + -1 < (int)this_00->field_0049 ||
        (g_worldGrid.sizeZ + -1 < (int)this_00->field_004B)))))))) {
    thunk_FUN_006457e0((int)this_00);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  memset(local_13c, 0, 0x70); /* compiler bulk-zero initialization */
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::thunk_FUN_00644410
            ((AnonReceiver_00644410 *)this_00,&local_18,&local_120,&local_11c,local_118);
  if (local_18 == 0) {
    if (this_00->field_0288 == '\x02') {
      local_18 = 1;
      this_00->field_0270 = 0;
    }
  }
  else if (this_00->field_0288 != '\0') {
    this_00->field_0288 = 0;
  }
  if ((iVar12 != 0) && (this_00->field_0259 != CASE_A3)) {
    iVar12 = (int)this_00->field_0047;
    iVar14 = (int)this_00->field_0049;
    if ((iVar12 < 0) ||
       (((iVar14 < 0 || (g_worldGrid.sizeX <= iVar12)) || (g_worldGrid.sizeY <= iVar14)))) {
      bVar28 = false;
    }
    else {
      bVar28 = *(char *)(g_worldGrid.sizeX * iVar14 + DAT_007fb26c + iVar12) != '\0';
    }
    iVar22 = local_34;
    if (bVar28) {
      if ((&DAT_007fb24c)[this_00->field_0024] == 0) {
        bVar28 = false;
      }
      else {
        bVar28 = *(char *)(g_worldGrid.sizeX * iVar14 + (&DAT_007fb24c)[this_00->field_0024] +
                          iVar12) != '\0';
      }
      if ((!bVar28) || (this_00->field_0286 == '\0')) {
        local_18 = 1;
        this_00->field_0270 = 0;
        iVar22 = 2;
      }
    }
    if (1 < iVar22) {
      if ((this_00->field_0259 == CASE_AD) &&
         (iVar14 = thunk_FUN_004e60d0(this_00->field_0024,0x7e), iVar14 != 0)) {
        iVar14 = 0x1389;
      }
      else {
        iVar14 = *(int *)(&DAT_007e6468 + (this_00->field_0259 - CASE_96) * 0x14);
      }
      uVar17 = thunk_FUN_00497030((int)this_00->field_0047,(int)this_00->field_0049,
                                  this_00->field_0024,1,iVar14);
      if ((int)uVar17 < 0) {
        local_18 = 0;
      }
      else {
        thunk_FUN_00497850((int)this_00->field_0268,(int)this_00->field_026A,
                           (int)this_00->field_026C,(int)this_00->field_0041,
                           (int)this_00->field_0043,(int)this_00->field_0045,uVar17,&local_120,
                           &local_11c,local_118);
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
  local_13c[4] = (int)this_00->field_0268;
  local_128 = (int)this_00->field_026A;
  local_124 = (int)this_00->field_026C;
  this_00->field_0268 = (short)local_120;
  this_00->field_026A = (short)local_11c;
  this_00->field_026C = (short)local_118[0];
  SVar5 = this_00->field_0259;
  if ((((((SVar5 == CASE_9F) || (SVar5 == CASE_A0)) || (SVar5 == CASE_BF)) ||
       ((SVar5 == CASE_A3 || (SVar5 == CASE_9A)))) || (SVar5 == CASE_9B)) ||
     (((SVar5 == CASE_9C || (SVar5 == CASE_9D)) ||
      ((SVar5 == CASE_9E || ((SVar5 == CASE_AE || (SVar5 == CASE_A5)))))))) goto LAB_0064190c;
  if (this_00->field_027D < 9) {
    /* ST_CALLSITE[0064158E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    local_4c = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0262,
                          CASE_1);
    if ((local_4c == nullptr) || (this_00->field_027D == 8)) {
      this_00->field_0264 = 0;
    }
    if (local_4c != nullptr) {
      local_d8 = thunk_FUN_004ad650((STT3DSprC *)&local_4c->field_0x1d5);
    }
  }
  local_d4 = this_00->field_0264;
  bVar28 = false;
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
    bVar28 = true;
    local_d0 = 1;
    goto switchD_006415e9_caseD_9f;
  case CASE_AC:
  case CASE_AD:
    local_13c[0] = 6;
  }
  local_13c[1] = 1;
  bVar28 = true;
switchD_006415e9_caseD_9f:
  if ((this_00->field_027D != 0) && (bVar28)) {
    if (this_00->field_0259 == CASE_A1) {
      iVar10 = FUN_006acf0d(local_80,local_7c,local_78,(int)this_00->field_0041,
                            (int)this_00->field_0043,(int)this_00->field_0045);
      if (iVar10 == 0) {
        /* ST_CALLSITE[00641A16]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,(int)this_00->field_0041,(int)this_00->field_0043,
                   (int)this_00->field_0045,0,0,0,0,0,0,-1,0,0);
      }
      else {
        local_94 = ((this_00->field_0041 - local_80) * 10000) / iVar10;
        iVar22 = local_94 * iVar10;
        local_10 = ((this_00->field_0043 - local_7c) * 10000) / iVar10;
        local_14 = local_10 * iVar10;
        local_a8 = local_10 / 10000;
        local_cc = iVar22 / 40000 + local_a8 + local_80;
        local_84 = local_94 / 10000;
        local_34 = local_14 / 40000 + local_84 + local_7c;
        uVar19 = this_00->field_001C * 0x41c64e6d + 0x3039;
        this_00->field_001C = uVar19;
        iVar14 = (((this_00->field_0045 - local_78) * 10000) / iVar10) * iVar10;
        iVar12 = (uVar19 >> 0x10) % 0xb + 5;
        local_88 = iVar14;
        /* ST_CALLSITE[00641829]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,local_cc,local_34,iVar14 / 40000 + local_78,
                   (short)((iVar12 * local_10) / 10000),(short)((iVar12 * local_94) / 10000),0,0,0,0
                   ,-1,0,0);
        local_34 = (local_14 * 3) / 40000 + local_84 + local_7c;
        uVar19 = this_00->field_001C * 0x41c64e6d + 0x3039;
        this_00->field_001C = uVar19;
        iVar12 = (uVar19 >> 0x10) % 0xb + 5;
        lVar6 = (longlong)(iVar12 * local_10) * -0x68db8bad;
        /* ST_CALLSITE[00641902]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,7,1,0,((iVar22 * 3) / 40000 - local_a8) + local_80,local_34
                   ,(iVar14 * 3) / 40000 + local_78,
                   (short)(int)(lVar6 >> 0x2c) - (short)(lVar6 >> 0x3f),
                   (short)((iVar12 * local_94) / 10000),0,0,0,0,-1,0,0);
      }
    }
    else {
      /* ST_CALLSITE[00641671]: CALL 0x004048fe; direct=004048FE TraksClassTy::TraksCreateCollection */
      TraksClassTy::TraksCreateCollection(g_traksClass_00802A7C,local_13c);
    }
  }
LAB_0064190c:
  if ((((this_00->field_0259 == CASE_99) || (this_00->field_0259 == CASE_B7)) && (local_18 == 0)) &&
     (0x191 < (int)((uint)(byte)this_00->field_0061 * this_00->field_0068))) {
    local_18 = 1;
    this_00->field_0270 = 0;
  }
  if (this_00->field_0259 == CASE_9A) {
    thunk_FUN_0062c2d0((AnonShape_0062C2D0_06591E1F *)this_00->field_027E,(int)this_00->field_0041,
                       (int)this_00->field_0043,(int)this_00->field_0045);
  }
  if (local_18 != 1) {
cf_common_exit_00642C8B:
    /* ST_CALLSITE[00642C8F]: CALL dword ptr [EAX + 0xd8] */
    iVar14 = this_00->vfunc_D8();
    if (iVar14 == 0) {
      g_currentExceptionFrame = local_28c.previous;
      return 0;
    }
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x30f);
    g_currentExceptionFrame = local_28c.previous;
    return 0;
  }
  this_00->field_023D = 0;
  this_00->field_027C = '\0';
  /* ST_CALLSITE[00641991]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
  STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,0);
  if (this_00->field_0259 == CASE_99) {
    /* ST_CALLSITE[006419BA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    this_01 = STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0262,
                         CASE_1);
    if (this_01 == nullptr) {
      iVar14 = this_00->field_001C;
LAB_00641a40:
      uVar19 = iVar14 * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar19;
      bVar8 = 7;
    }
    else {
      /* ST_CALLSITE[006419C7]: CALL dword ptr [EDX + 0x2c] */
      iVar14 = this_01->vfunc_2C();
      if (iVar14 != 0x10) {
        iVar14 = this_00->field_001C;
        goto LAB_00641a40;
      }
      uVar19 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar19;
      bVar8 = 5;
    }
    thunk_FUN_0057b670((int *)this_00,0,(uint)bVar8,(short *)0x1,(short *)(uVar19 >> 0x10));
  }
  if (this_00->field_0259 == CASE_B7) {
    uVar19 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar19;
    thunk_FUN_0057b670((int *)this_00,0,5,(short *)0x1,(short *)(uVar19 >> 0x10));
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
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2514;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 0x14;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d0570;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_97:
    if (this_00->field_0288 == '\x02') {
      uVar19 = 0xffffffff;
      local_5 = 10;
      pcVar24 = &CHAR_E_007d2500;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_48;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_e_007d0588;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_2c;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_b_007d0564;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_74;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
    }
    else {
      uVar19 = 0xffffffff;
      local_5 = 0x14;
      pcVar24 = &CHAR_e_007d0594;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_48;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_e_007d0588;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_2c;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_b_007d0564;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_74;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
    }
    break;
  case CASE_98:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d24f8;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 0x12;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = "expmask3";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_b_007d24ec;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_99:
  case CASE_A3:
    pcVar24 = "expcshl";
    goto LAB_006424a7;
  case CASE_9A:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_E_007d2500;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 10;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = "expmask3";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_b_007d0564;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_9B:
  case CASE_9D:
    uVar19 = 0xffffffff;
    pcVar24 = "exprlas";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_9C:
    uVar19 = 0xffffffff;
    pcVar24 = "expllas";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_9E:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d24c8;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_9F:
    pcVar24 = "exphfs";
    goto LAB_006424a7;
  case CASE_A0:
  case CASE_A1:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d24ac;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 10;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d0588;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d0570;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_A4:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_E_007d24a4;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 0x22;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = "expmask3";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_b_007d24ec;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_A5:
    uVar19 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar19;
    uVar19 = (uVar19 >> 0x10) % 3;
    if (uVar19 == 0) {
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_E_007d2490;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      local_5 = 0x16;
      iVar14 = -1;
      pcVar24 = local_48;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = "expmask3";
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_2c;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &DAT_007d2484;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_74;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0;
    }
    else if (uVar19 == 1) {
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_E_007d2474;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      local_5 = 0x16;
      iVar14 = -1;
      pcVar24 = local_48;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = "expmask3";
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_2c;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &DAT_007d2484;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_74;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0;
    }
    else if (uVar19 == 2) {
      uVar19 = 0xffffffff;
      local_5 = 0x16;
      pcVar24 = &CHAR_E_007d247c;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_48;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = "expmask3";
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_2c;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_b_007d24ec;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_74;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
    }
    else {
      uVar19 = 0xffffffff;
      local_5 = 0x16;
      pcVar24 = &CHAR_E_007d2490;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_48;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = "expmask3";
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_2c;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar24 = &DAT_007d2484;
      do {
        pcVar26 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar26 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar26;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      iVar14 = -1;
      pcVar24 = local_74;
      do {
        pcVar25 = pcVar24;
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        pcVar25 = pcVar24 + 1;
        cVar1 = *pcVar24;
        pcVar24 = pcVar25;
      } while (cVar1 != '\0');
      pcVar24 = pcVar26 + -uVar19;
      pcVar26 = pcVar25 + -1;
      memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
    }
    break;
  case CASE_AC:
    uVar19 = 0xffffffff;
    pcVar24 = "expemag";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 10;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_b_007d0564;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_AD:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2444;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_AE:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2498;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 9;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d0570;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_B6:
  case CASE_BA:
    pcVar24 = &CHAR_e_007d2438;
LAB_006424a7:
    uVar19 = 0xffffffff;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    pcVar24 = &CHAR_e_007d0570;
LAB_00642561:
    uVar19 = 0xffffffff;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 0xf;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_B7:
  case CASE_B9:
    uVar19 = 0xffffffff;
    pcVar24 = "explioc";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_B8:
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d245c;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    local_5 = 0x12;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d2508;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d0570;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_74;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    break;
  case CASE_BF:
    uVar19 = 0xffffffff;
    pcVar24 = "exppar";
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_48;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    uVar19 = 0xffffffff;
    pcVar24 = &CHAR_e_007d0588;
    do {
      pcVar26 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar26 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar26;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar14 = -1;
    pcVar24 = local_2c;
    do {
      pcVar25 = pcVar24;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar25 = pcVar24 + 1;
      cVar1 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar1 != '\0');
    pcVar24 = pcVar26 + -uVar19;
    pcVar26 = pcVar25 + -1;
    memmove(pcVar26, pcVar24, uVar19); /* compiler REP MOVS byte copy */
    pcVar24 = &CHAR_b_007d0564;
    goto LAB_00642561;
  }
  puVar15 = (byte *)(&this_00->field_01D5);
  /* ST_CALLSITE[006425A1]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar14 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,0,PTR_00806774,local_48,CASE_1D);
  if (iVar14 != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x263);
  }
  thunk_FUN_004ac610(puVar15,'\0');
  if ((local_74[0] != '\0') &&
     /* ST_CALLSITE[006425E3]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
     (iVar14 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,2,PTR_00806764,local_74,CASE_1D),
     iVar14 == 0)) {
    thunk_FUN_004ac610(puVar15,'\x02');
    /* ST_CALLSITE[006425F9]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    uVar18 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar15,'\x02');
    this_00->field_0282 = (char)uVar18;
    this_00->field_0283 = local_5;
    this_00->field_0284 = 0;
  }
  if (local_2c[0] != '\0') {
    /* ST_CALLSITE[0064262C]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar14 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,1,PTR_00806774,local_2c,CASE_1D);
    if (iVar14 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x270);
    }
    thunk_FUN_004ac610(puVar15,'\x01');
  }
  /* ST_CALLSITE[00642666]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  iVar14 = STT3DSprC::StartShow((STT3DSprC *)puVar15,0,g_playSystem_00802A38->field_00E4);
  if (iVar14 != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x274);
  }
  /* ST_CALLSITE[0064268B]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
  iVar14 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar15,'\x01');
  if (0 < iVar14) {
    /* ST_CALLSITE[006426A4]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    iVar14 = STT3DSprC::StartShow((STT3DSprC *)puVar15,1,g_playSystem_00802A38->field_00E4);
    if (iVar14 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",0x277);
    }
    /* ST_CALLSITE[006426CF]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    STT3DSprC::sub_004ACF20((STT3DSprC *)puVar15,PTR_008032b8,0x10);
    /* ST_CALLSITE[006426D8]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
    STT3DSprC::sub_004ACFE0((STT3DSprC *)puVar15,'\x01');
  }
  uVar18 = 0x45;
  uVar31 = 0x5a;
  uVar32 = 0;
  uVar21 = 0;
  uVar30 = 1;
  uVar29 = 0;
  uVar9 = 0;
  uVar19 = thunk_FUN_004ad650((STT3DSprC *)puVar15);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
            (this_00->field_0211,uVar19,CONCAT22(uVar9,CONCAT11(uVar29,uVar30)),
             CONCAT22(uVar21,CONCAT11(uVar32,uVar31)),uVar18);
  /* ST_CALLSITE[006426FA]: CALL dword ptr [EDX + 0xd8] */
  iVar14 = this_00->vfunc_D8();
  if (iVar14 != 0) {
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
  /* ST_CALLSITE[006410CB]: CALL dword ptr [EDX + 0x90] */
  this_00->vfunc_90(2,(short)local_c);
  g_currentExceptionFrame = local_28c.previous;
  return 0;
}

