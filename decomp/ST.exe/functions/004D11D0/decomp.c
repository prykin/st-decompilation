#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::Create */

int __thiscall TLOEmbryoTy::Create(TLOEmbryoTy *this,RecoveredRecord_TLOEmbryoTy_004D11D0 *param_1)

{
  short sVar1;
  TLOEmbryoTy *this_00;
  byte bVar3;
  int local_EAX_51;
  int local_EAX_120;
  DArrayTy *pDVar4;
  int local_EAX_1470;
  AnonShape_004AB810_8E5693D5 *pAVar5;
  STT3DSprC *pSVar6;
  uint uVar7;
  int iVar4;
  int local_EAX_1989;
  int local_EAX_2184;
  uint uVar9;
  int local_EAX_2619;
  int uVar8;
  int uVar4;
  int local_EAX_3446;
  int local_EAX_3458;
  int local_EAX_4060;
  int local_EAX_4068;
  int iVar10;
  int iVar11;
  STWorldObject *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  undefined4 uVar12;
  RecoveredRecord_TLOEmbryoTy_004D11D0 *pRVar13;
  int iVar14;
  byte *puVar15;
  byte *puVar16;
  STT3DSprC **ppSVar17;
  short sVar18;
  short sVar19;
  TLOEmbryoTy **element;
  uint uVar20;
  TLOEmbryoTy *pTVar21;
  InternalExceptionFrame local_cc;
  CHAR local_88 [64];
  TLOEmbryoTy *local_48;
  TLOEmbryoTy *local_44;
  TLOEmbryoTy *local_40;
  TLOEmbryoTy *local_3c;
  TLOEmbryoTy *local_38;
  TLOEmbryoTy *local_34;
  TLOEmbryoTy *local_30;
  TLOEmbryoTy *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  ushort *local_1c;
  undefined4 local_10;
  int local_c;
  TLOEmbryoTy *local_8;

  puVar16 = nullptr;
  local_c = 0;
  local_cc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_cc;
  local_3c = this;
  local_EAX_51 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0);
  this_00 = local_3c;
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_cc.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x166,0,local_EAX_51,
                                "%s","Int TLOEmbryoTy::Create(LPtrTy _param) error !");
    if (iVar10 == 0) {
      RaiseInternalException(local_EAX_51,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x167);
      return local_EAX_51;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_3c != nullptr) {
    puVar16 = (byte *)&local_3c->field_0x231;
  }
  pRVar13 = param_1;
  memmove(puVar16, pRVar13, 0x6e); /* compiler REP MOVS byte copy */
  puVar16 = (byte *)(puVar16 + 0x1b);
  pRVar13 = (RecoveredRecord_TLOEmbryoTy_004D11D0 *)((byte *)pRVar13 + 0x6c);
  STField<undefined1>(puVar16,2) = pRVar13->field_0x2;
  local_3c->field_0368 = local_3c->field_0259 + -0x32;
  local_EAX_120 = LookupRecordByte(*(char *)&local_3c->field_0024);
  local_EAX_120 = (int)(byte)local_EAX_120;
  this_00->field_036C = local_EAX_120 + -1;
  bVar3 = LookupRecordByte(*(char *)&this_00->field_0024);
  this_00->field_0370 = (uint)(bVar3 == 3);
  if ((bVar3 == 3) == 0) {
    this_00->field_0364 = &DAT_007976c8;
  }
  else {
    this_00->field_0364 = &DAT_00797708;
  }
  if (*(int *)(&DAT_00791f38 + this_00->field_0368 * 4) == 2) {
    this_00->field_0360 = &DAT_007aca60;
  }
  else if (*(int *)(&DAT_00791f38 + this_00->field_0368 * 4) == 1) {
    this_00->field_0360 = &DAT_007ace00;
  }
  else {
    this_00->field_0360 = &DAT_007ac988;
  }
  thunk_FUN_00417a00(this_00,0);
  iVar11 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_025D,*(short *)&this_00->field_0261,
                              this_00->field_0265,1);
  if (iVar11 != 0) {
    RaiseInternalException
              (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x66);
  }
  thunk_FUN_0041d900(this_00,*(short *)&this_00->field_025D,*(short *)&this_00->field_0261,
                     this_00->field_0265);
  if (this_00->field_002C == 0) {
    local_c = 1;
  }
  else if (this_00->field_002C == 1) {
    local_c = 2;
  }
  iVar11 = this_00->field_0261;
  if (iVar11 < iVar11 + local_c) {
    do {
      iVar14 = this_00->field_025D;
      if (iVar14 < iVar14 + local_c) {
        do {
          sVar18 = (short)iVar14;
          sVar19 = (short)iVar11;
          thunk_FUN_004960d0(sVar18,sVar19,this_00->field_0265);
          sVar1 = this_00->field_0265;
          if (((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) || (sVar19 < 0)) ||
              ((g_worldGrid.sizeY <= sVar19 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
            this_01 = nullptr;
          }
          else {
            this_01 = STGridAt3D(g_worldGrid, sVar18, sVar19, sVar1).objects[1];
          }
          if ((this_01 != nullptr) && (this_01->value_20 == 0xbe)) {
            thunk_FUN_00630110(this_01,(char)this_00->field_0024);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < this_00->field_025D + local_c);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < this_00->field_0261 + local_c);
  }
  puVar16 = nullptr;
  if (this_00->field_002C == 0) {
    this_00->field_02F8 = 0xb4;
    this_00->field_02FC = 0x8c;
    this_00->field_0300 = 0x5a;
    this_00->field_0304 = 0x45;
  }
  else if (this_00->field_002C == 1) {
    this_00->field_02F8 = 0xf0;
    this_00->field_02FC = 0xbe;
    this_00->field_0300 = 0x78;
    this_00->field_0304 = 0x56;
  }
  if (this_00->field_0259 == 0x5c) {
    g_packedRecords_A62x8[this_00->field_0024].field1965_0x9ca = 1;
  }
  if (g_array_007FA170 == nullptr) {
    g_array_007FA170 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
  }
  local_2c = this_00;
  Library::DKW::TBL::DArrayAppend(g_array_007FA170,&local_2c);
  iVar11 = this_00->field_0259;
  if (iVar11 == 100) {
    if (g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6 == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6 = pDVar4;
    }
    element = &local_8;
    local_8 = this_00;
    pDVar4 = g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6;
cf_common_join_004D1763:
    Library::DKW::TBL::DArrayAppend(pDVar4,element);
  }
  else {
    if (iVar11 == 0x4d) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2 = pDVar4;
      }
      element = &local_40;
      local_40 = this_00;
      pDVar4 = g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2;
      goto cf_common_join_004D1763;
    }
    if (iVar11 == 0x43) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee = pDVar4;
      }
      element = &local_44;
      local_44 = this_00;
      pDVar4 = g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee;
      goto cf_common_join_004D1763;
    }
    if (iVar11 == 0x73) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2 = pDVar4;
      }
      element = &local_30;
      local_30 = this_00;
      pDVar4 = g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2;
      goto cf_common_join_004D1763;
    }
    if (iVar11 == 0x3a) {
      if (g_array_007FA16C == nullptr) {
        g_array_007FA16C = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      }
      element = &local_48;
      local_48 = this_00;
      pDVar4 = g_array_007FA16C;
      goto cf_common_join_004D1763;
    }
    if (iVar11 == 0x65) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6 = pDVar4;
      }
      element = &local_34;
      local_34 = this_00;
      pDVar4 = g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6;
      goto cf_common_join_004D1763;
    }
    if (iVar11 == 0x3b) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1973_0x9ea == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1973_0x9ea = pDVar4;
      }
      element = &local_38;
      local_38 = this_00;
      pDVar4 = g_packedRecords_A62x8[this_00->field_0024].field1973_0x9ea;
      goto cf_common_join_004D1763;
    }
  }
  if (this_00->field_023D != 1) {
    if (this_00->field_023D == 2) {
      if (this_00 != nullptr) {
        puVar16 = (byte *)(&this_00->field_02A0);
      }
      puVar15 = (byte *)&param_1->field_0x6f;
      memmove(puVar16, puVar15, 0xb0); /* compiler REP MOVS byte copy */
      local_28 = Library::DKW::LIB::MemAlloc(0x44);
      local_28[1] = PTR_00806774;
      local_28[2] = PTR_00806774;
      *local_28 = PTR_00806774;
      local_28[0xf] = PTR_00806774;
      local_28[0x10] = PTR_0080678c;
      local_28[0xe] = PTR_0080678c;
      local_28[0xd] = PTR_0080678c;
      local_28[0xc] = PTR_0080678c;
      local_28[0xb] = 0;
      local_28[this_00->field_02F4] = PTR_0080678c;
      local_28[this_00->field_02F0] = PTR_0080678c;
      if (this_00->field_0370 != 0) {
        local_28[this_00->field_02F0 + -1] = PTR_0080678c;
      }
      if (this_00->field_02A0 != 0) {
        local_28[7] = PTR_00806764;
        local_28[6] = PTR_00806774;
      }
      local_1c = PTR_008073cc;
      local_24 = 0;
      local_10 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_012B));
      pAVar5 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pAVar5 == nullptr) {
        pSVar6 = nullptr;
      }
      else {
        pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(pAVar5);
      }
      this_00->field_035C = pSVar6;
      iVar11 = STT3DSprC::Init(pSVar6,PTR_008073cc,this_00->field_0300,this_00->field_0304,
                               nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar11 != 0) {
        RaiseInternalException
                  (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x13d);
      }
      if (this_00->field_002C == 1) {
        uVar7 = thunk_FUN_004ad650(this_00->field_035C);
        Library::Ourlib::ST3DSMAP::SprSetSplit((void *)this_00->field_0211,uVar7);
      }
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      iVar11 = 0;
      local_28[0xe] = PTR_00806764;
      local_24 = 0;
      local_10 = 0;
      local_1c = nullptr;
      STT3DSprC::RestoreSpr
                (this_00->field_035C,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_0133));
      uVar7 = this_00->field_02F4;
      iVar4 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
      local_EAX_1989 = thunk_FUN_004ad650(this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,local_EAX_1989,iVar4,uVar7);
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      local_28[0xe] = PTR_0080678c;
      local_24 = 0;
      local_10 = 0;
      local_1c = nullptr;
      if (this_00->field_0370 == 0) {
        uVar7 = 0xb;
        local_8 = (TLOEmbryoTy *)&param_1[1].field_0xb;
        ppSVar17 = &this_00->field_0350;
        do {
          pAVar5 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
          if (pAVar5 == nullptr) {
            pSVar6 = nullptr;
          }
          else {
            pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(pAVar5);
          }
          *ppSVar17 = pSVar6;
          iVar11 = STT3DSprC::Init(pSVar6,PTR_008073cc,this_00->field_0300,this_00->field_0304,
                                   nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
          if (iVar11 != 0) {
            RaiseInternalException
                      (iVar11,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x152);
          }
          uVar20 = uVar7;
          local_EAX_2184 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
          uVar9 = thunk_FUN_004ad650(*ppSVar17);
          FUN_006ea340((void *)this_00->field_0211,uVar9,local_EAX_2184,uVar20);
          STT3DSprC::RestoreSpr
                    (*ppSVar17,(int *)&local_28,
                     (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + (int)local_8->field_0000)
                    );
          uVar7 = uVar7 - 1;
          local_8 = (TLOEmbryoTy *)&local_8->field_0x4;
          ppSVar17 = ppSVar17 + 1;
        } while (8 < (int)uVar7);
      }
      FreeAndNull(&local_28);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(&param_1->field_0x0 + param_1->field_0123));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      sub_00419CF0((int *)this_00,extraout_EDX,CONCAT22(extraout_var,this_00->field_0032));
    }
    else {
      local_EAX_1470 =
           ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x160,0,0,"%s",
                              "I don't now what I must do !");
      if (local_EAX_1470 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    goto LAB_004d22a1;
  }
  this_00->field_02AC = g_playSystem_00802A38->field_00E4;
  uVar7 = g_playSystem_00802A38->field_00E4;
  this_00->field_02B4 = 1;
  this_00->field_02B0 = uVar7;
  this_00->field_02A4 = 0;
  pAVar5 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pAVar5 == nullptr) {
    pSVar6 = nullptr;
  }
  else {
    pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(pAVar5);
  }
  this_00->field_035C = pSVar6;
  iVar11 = STT3DSprC::Init(pSVar6,PTR_008073cc,this_00->field_0300,this_00->field_0304,
                           nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
  if (iVar11 != 0) {
    RaiseInternalException
              (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",200);
  }
  if (this_00->field_0241 == 0) {
    iVar11 = STT3DSprC::LoadSequence
                       (this_00->field_035C,0xe,PTR_00806764,"tlo_emb5",CASE_1D);
    if (iVar11 != 0) {
      iVar14 = 0xca;
LAB_004d1bda:
      RaiseInternalException
                (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar14);
    }
  }
  else if (this_00->field_0241 == 1) {
    uVar7 = thunk_FUN_004ad650(this_00->field_035C);
    Library::Ourlib::ST3DSMAP::SprSetSplit((void *)this_00->field_0211,uVar7);
    iVar11 = STT3DSprC::LoadSequence
                       (this_00->field_035C,0xe,PTR_00806764,"tlo_emb5_big",CASE_1D);
    if (iVar11 != 0) {
      iVar14 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  puVar16 = (byte *)(&this_00->field_01D5);
  uVar7 = (-(uint)(this_00->field_0370 != 0) & 4) + 7;
  this_00->field_02F4 = uVar7;
  local_EAX_2619 = thunk_FUN_004ad650((STT3DSprC *)puVar16);
  uVar8 = thunk_FUN_004ad650(this_00->field_035C);
  FUN_006ea340((void *)this_00->field_0211,uVar8,local_EAX_2619,uVar7);
  STT3DSprC::sub_004AD3C0
            (this_00->field_035C,(float)this_00->field_01F9,(float)this_00->field_01FD,
             (float)this_00->field_0201);
  uVar4 = thunk_FUN_004ab050();
  uVar7 = uVar4 & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  wsprintfA(local_88,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar7);
  iVar11 = STT3DSprC::LoadSequence((STT3DSprC *)puVar16,0xe,PTR_0080678c,local_88,CASE_1D);
  if (iVar11 != 0) {
    RaiseInternalException
              (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0xd4);
  }
  iVar11 = this_00->field_0370;
  if (iVar11 == 0) {
LAB_004d1fef:
    if (this_00->field_0241 == 0) {
      iVar11 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)puVar16,(-(iVar11 != 0) & 3U) + 6,PTR_0080678c,
                          "tlo_emb2",CASE_1D);
      if (iVar11 != 0) {
        iVar14 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((this_00->field_0241 == 1) &&
            (iVar11 = STT3DSprC::LoadSequence
                                ((STT3DSprC *)puVar16,(-(iVar11 != 0) & 3U) + 6,PTR_0080678c,
                                 "tlo_emb3",CASE_1D), iVar11 != 0)) {
      iVar14 = 0x102;
LAB_004d204d:
      RaiseInternalException
                (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar14);
    }
    this_00->field_02EC = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0090)(3,0x360);
    this_00->field_02F0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
    iVar11 = this_00->field_02EC + this_00->field_0241 * 4;
    thunk_FUN_004abce0(puVar16,*(byte *)&this_00->field_02F0,
                       *(int *)(this_00->field_0364 + iVar11 * 8),
                       *(int *)(this_00->field_0364 + 4 + iVar11 * 8),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar16,*(char *)&this_00->field_02F0,
               *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8));
    STT3DSprC::StartShow
              ((STT3DSprC *)puVar16,*(byte *)&this_00->field_02F0,g_playSystem_00802A38->field_00E4);
    local_8 = (TLOEmbryoTy *)&DAT_0000000b;
    ppSVar17 = &this_00->field_0350;
    do {
      pAVar5 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pAVar5 == nullptr) {
        pSVar6 = nullptr;
      }
      else {
        pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(pAVar5);
      }
      *ppSVar17 = pSVar6;
      iVar11 = STT3DSprC::Init(pSVar6,PTR_008073cc,this_00->field_0300,this_00->field_0304,
                               nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar11 != 0) {
        RaiseInternalException
                  (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10d);
      }
      iVar11 = STT3DSprC::LoadSequence(*ppSVar17,0xe,PTR_0080678c,PTR_s_tlo_emb6_00790c20,CASE_1D);
      if (iVar11 != 0) {
        RaiseInternalException
                  (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10e);
      }
      pTVar21 = local_8;
      local_EAX_4060 = thunk_FUN_004ad650((STT3DSprC *)puVar16);
      local_EAX_4068 = thunk_FUN_004ad650(*ppSVar17);
      FUN_006ea340((void *)this_00->field_0211,local_EAX_4068,local_EAX_4060,(uint)pTVar21);
      STT3DSprC::sub_004AD3C0
                (*ppSVar17,(float)this_00->field_01F9,(float)this_00->field_01FD,
                 (float)this_00->field_0201);
      ppSVar17 = ppSVar17 + 1;
      local_8 = (TLOEmbryoTy *)((int)&local_8[-1].field_0370 + 3);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar12 = extraout_EDX_02;
    } while (8 < (int)local_8);
  }
  else {
    iVar14 = this_00->field_0259;
    if (((iVar14 == 0x6c) && (this_00->field_0251 == 3)) || ((0x53 < iVar14 && (iVar14 < 0x5b)))) {
      if ((iVar11 == 0) ||
         (((iVar14 = this_00->field_0259, iVar14 != 0x6c || (this_00->field_0251 != 3)) &&
          ((iVar14 < 0x54 || (0x5a < iVar14)))))) goto LAB_004d1fef;
      this_00->field_02EC = 2;
      this_00->field_02F0 = 0xb;
      if (this_00->field_0241 == 1) {
        iVar11 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,*(byte *)&this_00->field_02F0,PTR_0080678c,
                            "si_emb6",CASE_1D);
        if (iVar11 != 0) {
          iVar14 = 0xef;
LAB_004d1f0b:
          RaiseInternalException
                    (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar14);
        }
      }
      else {
        iVar11 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,*(byte *)&this_00->field_02F0,PTR_0080678c,
                            "si_emb5",CASE_1D);
        if (iVar11 != 0) {
          iVar14 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar11 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      this_00->field_02F4 = iVar11;
      STT3DSprC::UnLoadSequence((STT3DSprC *)puVar16,(byte)iVar11);
      uVar7 = this_00->field_02F4;
      local_EAX_3446 = thunk_FUN_004ad650((STT3DSprC *)puVar16);
      local_EAX_3458 = thunk_FUN_004ad650(this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,local_EAX_3458,local_EAX_3446,uVar7);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar16,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0090)(3,0x362);
      thunk_FUN_004abce0(this_00->field_035C,0xe,0,
                         *(int *)this_00->field_035C->field_0020->field_01F8 + -1,'\0');
      STT3DSprC::SetCurFase(this_00->field_035C,'\x0e',0);
      STT3DSprC::StartShow(this_00->field_035C,0xe,g_playSystem_00802A38->field_00E4);
      thunk_FUN_004ad460(this_00->field_035C,0);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar16);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar12 = extraout_EDX_01;
    }
    else {
      if (this_00->field_0241 == 0) {
        iVar11 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,9,PTR_0080678c,"si_emb1",CASE_1D);
        if (iVar11 != 0) {
          RaiseInternalException
                    (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xd9);
        }
        wsprintfA(local_88,"si_emb1_id%1d",this_00->field_0024);
        iVar11 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,(-(this_00->field_0370 != 0) & 3U) + 5,PTR_0080678c
                            ,local_88,CASE_1D);
        if (iVar11 != 0) {
          iVar14 = 0xdb;
LAB_004d1df8:
          RaiseInternalException
                    (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar14);
        }
      }
      else if (this_00->field_0241 == 1) {
        iVar11 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,9,PTR_0080678c,"si_emb4",CASE_1D);
        if (iVar11 != 0) {
          RaiseInternalException
                    (iVar11,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xdf);
        }
        wsprintfA(local_88,"si_emb4_id%1d",this_00->field_0024);
        iVar11 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)puVar16,(-(this_00->field_0370 != 0) & 3U) + 5,PTR_0080678c
                            ,local_88,CASE_1D);
        if (iVar11 != 0) {
          iVar14 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      this_00->field_02EC = 0;
      this_00->field_02F0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      sub_004D10A0(this_00,0);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar16,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar16,*(char *)&this_00->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar16)();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar12 = extraout_EDX_00;
    }
  }
  sub_00419C70((int *)this_00,uVar12,(uint)(this_00->field_023D == 0));
  this_00->field_02D8 = 0;
  this_00->field_02D4 = 0;
  this_00->field_02D0 = 0;
  this_00->field_02CC = 0;
  iVar11 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
  thunk_FUN_004d76e0(*(char *)&this_00->field_0024,0,(int *)this_00->field_0018,
                     *(int *)(&DAT_008545ac + iVar11),*(int *)(&DAT_007e1c50 + iVar11),
                     *(int *)(&DAT_007e24fc + iVar11),*(int *)(&DAT_007e3160 + iVar11));
  iVar11 = thunk_FUN_004b7520(STReplaceLowByte((uint32_t)(this_00->field_0259), (uint8_t)(*(undefined1 *)&this_00->field_0024)),this_00->field_0259);
  if (iVar11 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar11 = (*(code *)this_00->field_0000->field_002C)();
    thunk_FUN_004b76d0(STReplaceLowByte((uint32_t)(iVar11), (uint8_t)(*(undefined1 *)&this_00->field_0024)),
                       iVar11);
  }
  sub_0041C3F0(this_00,(undefined *)0x5);
LAB_004d22a1:
  thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
  g_currentExceptionFrame = local_cc.previous;
  return 0;
}

