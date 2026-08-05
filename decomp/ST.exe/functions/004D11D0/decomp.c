#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::Create */

int __thiscall TLOEmbryoTy::Create(TLOEmbryoTy *this,RecoveredRecord_TLOEmbryoTy_004D11D0 *param_1)

{
  short sVar1;
  TLOEmbryoTy *this_00;
  byte bVar3;
  int iVar4;
  int local_EAX_120;
  DArrayTy *pDVar5;
  AnonShape_004AB810_8E5693D5 *pAVar6;
  STT3DSprC *pSVar7;
  uint uVar9;
  int local_EAX_1989;
  uint uVar10;
  int uVar8;
  int uVar4;
  int local_EAX_3458;
  int local_EAX_4068;
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
  undefined4 uVar11;
  RecoveredRecord_TLOEmbryoTy_004D11D0 *pRVar12;
  int iVar13;
  byte *puVar14;
  byte *puVar15;
  STT3DSprC **ppSVar16;
  short sVar17;
  short sVar18;
  TLOEmbryoTy **element;
  uint uVar19;
  TLOEmbryoTy *pTVar20;
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
  undefined4 local_1c;
  undefined4 local_10;
  int local_c;
  TLOEmbryoTy *local_8;

  puVar15 = nullptr;
  local_c = 0;
  local_cc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_cc;
  local_3c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0);
  this_00 = local_3c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_cc.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x166,0,iVar4,
                                "%s","Int TLOEmbryoTy::Create(LPtrTy _param) error !");
    if (iVar13 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x167);
      return iVar4;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_3c != nullptr) {
    puVar15 = (byte *)&local_3c->field_0x231;
  }
  pRVar12 = param_1;
  memmove(puVar15, pRVar12, 0x6e); /* compiler REP MOVS byte copy */
  puVar15 = (byte *)(puVar15 + 0x1b);
  pRVar12 = (RecoveredRecord_TLOEmbryoTy_004D11D0 *)((byte *)pRVar12 + 0x6c);
  *(undefined1 *)((int)puVar15 + 2) = pRVar12->field_0x2;
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
  iVar4 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_025D,*(short *)&this_00->field_0261,
                             this_00->field_0265,1);
  if (iVar4 != 0) {
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
  iVar4 = this_00->field_0261;
  if (iVar4 < iVar4 + local_c) {
    do {
      iVar13 = this_00->field_025D;
      if (iVar13 < iVar13 + local_c) {
        do {
          sVar17 = (short)iVar13;
          sVar18 = (short)iVar4;
          thunk_FUN_004960d0(sVar17,sVar18,this_00->field_0265);
          sVar1 = this_00->field_0265;
          if (((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) || (sVar18 < 0)) ||
              ((g_worldGrid.sizeY <= sVar18 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
            this_01 = nullptr;
          }
          else {
            this_01 = STGridAt3D(g_worldGrid, sVar17, sVar18, sVar1).objects[1];
          }
          if ((this_01 != nullptr) && (this_01->value_20 == 0xbe)) {
            thunk_FUN_00630110(this_01,(char)this_00->field_0024);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < this_00->field_025D + local_c);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_00->field_0261 + local_c);
  }
  puVar15 = nullptr;
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
  iVar4 = this_00->field_0259;
  if (iVar4 == 100) {
    if (g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6 == nullptr) {
      pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6 = pDVar5;
    }
    element = &local_8;
    local_8 = this_00;
    pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6;
cf_common_join_004D1763:
    Library::DKW::TBL::DArrayAppend(pDVar5,element);
  }
  else {
    if (iVar4 == 0x4d) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2 == nullptr) {
        pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2 = pDVar5;
      }
      element = &local_40;
      local_40 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x43) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee == nullptr) {
        pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee = pDVar5;
      }
      element = &local_44;
      local_44 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x73) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2 == nullptr) {
        pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2 = pDVar5;
      }
      element = &local_30;
      local_30 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x3a) {
      if (g_array_007FA16C == nullptr) {
        g_array_007FA16C = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      }
      element = &local_48;
      local_48 = this_00;
      pDVar5 = g_array_007FA16C;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x65) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6 == nullptr) {
        pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6 = pDVar5;
      }
      element = &local_34;
      local_34 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x3b) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1973_0x9ea == nullptr) {
        pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1973_0x9ea = pDVar5;
      }
      element = &local_38;
      local_38 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1973_0x9ea;
      goto cf_common_join_004D1763;
    }
  }
  if (this_00->field_023D != 1) {
    if (this_00->field_023D == 2) {
      if (this_00 != nullptr) {
        puVar15 = (byte *)(&this_00->field_02A0);
      }
      puVar14 = (byte *)&param_1->field_0x6f;
      memmove(puVar15, puVar14, 0xb0); /* compiler REP MOVS byte copy */
      local_28 = Library::DKW::LIB::MemAlloc(0x44);
      local_28[1] = DAT_00806774;
      local_28[2] = DAT_00806774;
      *local_28 = DAT_00806774;
      local_28[0xf] = DAT_00806774;
      local_28[0x10] = DAT_0080678c;
      local_28[0xe] = DAT_0080678c;
      local_28[0xd] = DAT_0080678c;
      local_28[0xc] = DAT_0080678c;
      local_28[0xb] = 0;
      local_28[this_00->field_02F4] = DAT_0080678c;
      local_28[this_00->field_02F0] = DAT_0080678c;
      if (this_00->field_0370 != 0) {
        local_28[this_00->field_02F0 + -1] = DAT_0080678c;
      }
      if (this_00->field_02A0 != 0) {
        local_28[7] = DAT_00806764;
        local_28[6] = DAT_00806774;
      }
      local_1c = DAT_008073cc;
      local_24 = 0;
      local_10 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_012B));
      pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pAVar6 == nullptr) {
        pSVar7 = nullptr;
      }
      else {
        pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
      }
      this_00->field_035C = pSVar7;
      iVar4 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                              nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar4 != 0) {
        RaiseInternalException
                  (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x13d);
      }
      if (this_00->field_002C == 1) {
        uVar9 = thunk_FUN_004ad650(this_00->field_035C);
        Library::Ourlib::ST3DSMAP::SprSetSplit((void *)this_00->field_0211,uVar9);
      }
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      local_28[0xe] = DAT_00806764;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      STT3DSprC::RestoreSpr
                (this_00->field_035C,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_0133));
      uVar9 = this_00->field_02F4;
      iVar4 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
      local_EAX_1989 = thunk_FUN_004ad650(this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,local_EAX_1989,iVar4,uVar9);
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      local_28[0xe] = DAT_0080678c;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      if (this_00->field_0370 == 0) {
        uVar9 = 0xb;
        local_8 = (TLOEmbryoTy *)&param_1[1].field_0xb;
        ppSVar16 = &this_00->field_0350;
        do {
          pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
          if (pAVar6 == nullptr) {
            pSVar7 = nullptr;
          }
          else {
            pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
          }
          *ppSVar16 = pSVar7;
          iVar4 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                                  nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
          if (iVar4 != 0) {
            RaiseInternalException
                      (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp"
                       ,0x152);
          }
          uVar19 = uVar9;
          iVar4 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
          uVar10 = thunk_FUN_004ad650(*ppSVar16);
          FUN_006ea340((void *)this_00->field_0211,uVar10,iVar4,uVar19);
          STT3DSprC::RestoreSpr
                    (*ppSVar16,(int *)&local_28,
                     (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + (int)local_8->field_0000)
                    );
          uVar9 = uVar9 - 1;
          local_8 = (TLOEmbryoTy *)&local_8->field_0x4;
          ppSVar16 = ppSVar16 + 1;
        } while (8 < (int)uVar9);
      }
      FreeAndNull(&local_28);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(&param_1->field_0x0 + param_1->field_0123));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      sub_00419CF0((int *)this_00,extraout_EDX,CONCAT22(extraout_var,this_00->field_0032));
    }
    else {
      iVar4 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x160,0,0,"%s"
                                 ,"I don't now what I must do !");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    goto LAB_004d22a1;
  }
  this_00->field_02AC = g_playSystem_00802A38->field_00E4;
  uVar9 = g_playSystem_00802A38->field_00E4;
  this_00->field_02B4 = 1;
  this_00->field_02B0 = uVar9;
  this_00->field_02A4 = 0;
  pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pAVar6 == nullptr) {
    pSVar7 = nullptr;
  }
  else {
    pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
  }
  this_00->field_035C = pSVar7;
  iVar4 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                          nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
  if (iVar4 != 0) {
    RaiseInternalException
              (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",200);
  }
  if (this_00->field_0241 == 0) {
    iVar4 = STT3DSprC::LoadSequence(this_00->field_035C,0xe,DAT_00806764,"tlo_emb5",0x1d);
    if (iVar4 != 0) {
      iVar13 = 0xca;
LAB_004d1bda:
      RaiseInternalException
                (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar13);
    }
  }
  else if (this_00->field_0241 == 1) {
    uVar9 = thunk_FUN_004ad650(this_00->field_035C);
    Library::Ourlib::ST3DSMAP::SprSetSplit((void *)this_00->field_0211,uVar9);
    iVar4 = STT3DSprC::LoadSequence
                      (this_00->field_035C,0xe,DAT_00806764,"tlo_emb5_big",0x1d);
    if (iVar4 != 0) {
      iVar13 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  puVar15 = (byte *)(&this_00->field_01D5);
  uVar9 = (-(uint)(this_00->field_0370 != 0) & 4) + 7;
  this_00->field_02F4 = uVar9;
  iVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar15);
  uVar8 = thunk_FUN_004ad650(this_00->field_035C);
  FUN_006ea340((void *)this_00->field_0211,uVar8,iVar4,uVar9);
  STT3DSprC::sub_004AD3C0
            (this_00->field_035C,(float)this_00->field_01F9,(float)this_00->field_01FD,
             (float)this_00->field_0201);
  uVar4 = thunk_FUN_004ab050();
  uVar9 = uVar4 & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  wsprintfA(local_88,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar9);
  iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,0xe,DAT_0080678c,local_88,0x1d);
  if (iVar4 != 0) {
    RaiseInternalException
              (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0xd4);
  }
  iVar4 = this_00->field_0370;
  if (iVar4 == 0) {
LAB_004d1fef:
    if (this_00->field_0241 == 0) {
      iVar4 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)puVar15,(-(iVar4 != 0) & 3U) + 6,DAT_0080678c,
                         "tlo_emb2",0x1d);
      if (iVar4 != 0) {
        iVar13 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((this_00->field_0241 == 1) &&
            (iVar4 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)puVar15,(-(iVar4 != 0) & 3U) + 6,DAT_0080678c,
                                "tlo_emb3",0x1d), iVar4 != 0)) {
      iVar13 = 0x102;
LAB_004d204d:
      RaiseInternalException
                (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar13);
    }
    this_00->field_02EC = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0090)(3,0x360);
    this_00->field_02F0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
    iVar4 = this_00->field_02EC + this_00->field_0241 * 4;
    thunk_FUN_004abce0(puVar15,*(byte *)&this_00->field_02F0,
                       *(int *)(this_00->field_0364 + iVar4 * 8),
                       *(int *)(this_00->field_0364 + 4 + iVar4 * 8),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar15,*(char *)&this_00->field_02F0,
               *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8));
    STT3DSprC::StartShow
              ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,g_playSystem_00802A38->field_00E4);
    local_8 = (TLOEmbryoTy *)&DAT_0000000b;
    ppSVar16 = &this_00->field_0350;
    do {
      pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pAVar6 == nullptr) {
        pSVar7 = nullptr;
      }
      else {
        pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
      }
      *ppSVar16 = pSVar7;
      iVar4 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                              nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar4 != 0) {
        RaiseInternalException
                  (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10d);
      }
      iVar4 = STT3DSprC::LoadSequence(*ppSVar16,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,0x1d);
      if (iVar4 != 0) {
        RaiseInternalException
                  (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10e);
      }
      pTVar20 = local_8;
      iVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar15);
      local_EAX_4068 = thunk_FUN_004ad650(*ppSVar16);
      FUN_006ea340((void *)this_00->field_0211,local_EAX_4068,iVar4,(uint)pTVar20);
      STT3DSprC::sub_004AD3C0
                (*ppSVar16,(float)this_00->field_01F9,(float)this_00->field_01FD,
                 (float)this_00->field_0201);
      ppSVar16 = ppSVar16 + 1;
      local_8 = (TLOEmbryoTy *)((int)&local_8[-1].field_0370 + 3);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar11 = extraout_EDX_02;
    } while (8 < (int)local_8);
  }
  else {
    iVar13 = this_00->field_0259;
    if (((iVar13 == 0x6c) && (this_00->field_0251 == 3)) || ((0x53 < iVar13 && (iVar13 < 0x5b)))) {
      if ((iVar4 == 0) ||
         (((iVar13 = this_00->field_0259, iVar13 != 0x6c || (this_00->field_0251 != 3)) &&
          ((iVar13 < 0x54 || (0x5a < iVar13)))))) goto LAB_004d1fef;
      this_00->field_02EC = 2;
      this_00->field_02F0 = 0xb;
      if (this_00->field_0241 == 1) {
        iVar4 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,DAT_0080678c,
                           "si_emb6",0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xef;
LAB_004d1f0b:
          RaiseInternalException
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar13);
        }
      }
      else {
        iVar4 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,DAT_0080678c,
                           "si_emb5",0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar4 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      this_00->field_02F4 = iVar4;
      STT3DSprC::UnLoadSequence((STT3DSprC *)puVar15,(byte)iVar4);
      uVar9 = this_00->field_02F4;
      iVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar15);
      local_EAX_3458 = thunk_FUN_004ad650(this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,local_EAX_3458,iVar4,uVar9);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0090)(3,0x362);
      thunk_FUN_004abce0(this_00->field_035C,0xe,0,
                         *(int *)this_00->field_035C->field_0020->field_01F8 + -1,'\0');
      STT3DSprC::SetCurFase(this_00->field_035C,'\x0e',0);
      STT3DSprC::StartShow(this_00->field_035C,0xe,g_playSystem_00802A38->field_00E4);
      thunk_FUN_004ad460(this_00->field_035C,0);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar15);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar11 = extraout_EDX_01;
    }
    else {
      if (this_00->field_0241 == 0) {
        iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,9,DAT_0080678c,"si_emb1",0x1d);
        if (iVar4 != 0) {
          RaiseInternalException
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xd9);
        }
        wsprintfA(local_88,"si_emb1_id%1d",this_00->field_0024);
        iVar4 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar15,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xdb;
LAB_004d1df8:
          RaiseInternalException
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar13);
        }
      }
      else if (this_00->field_0241 == 1) {
        iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar15,9,DAT_0080678c,"si_emb4",0x1d);
        if (iVar4 != 0) {
          RaiseInternalException
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xdf);
        }
        wsprintfA(local_88,"si_emb4_id%1d",this_00->field_0024);
        iVar4 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar15,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      this_00->field_02EC = 0;
      this_00->field_02F0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      sub_004D10A0(this_00,0);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar15,*(char *)&this_00->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar15)();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar11 = extraout_EDX_00;
    }
  }
  sub_00419C70((int *)this_00,uVar11,(uint)(this_00->field_023D == 0));
  this_00->field_02D8 = 0;
  this_00->field_02D4 = 0;
  this_00->field_02D0 = 0;
  this_00->field_02CC = 0;
  iVar4 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
  thunk_FUN_004d76e0(*(char *)&this_00->field_0024,0,(int *)this_00->field_0018,
                     *(int *)(&DAT_008545ac + iVar4),*(int *)(&DAT_007e1c50 + iVar4),
                     *(int *)(&DAT_007e24fc + iVar4),*(int *)(&DAT_007e3160 + iVar4));
  iVar4 = thunk_FUN_004b7520(STReplaceLowByte((uint32_t)(this_00->field_0259), (uint8_t)(*(undefined1 *)&this_00->field_0024)),this_00->field_0259);
  if (iVar4 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (*(code *)this_00->field_0000->field_002C)();
    thunk_FUN_004b76d0(STReplaceLowByte((uint32_t)(iVar4), (uint8_t)(*(undefined1 *)&this_00->field_0024)),iVar4);
  }
  sub_0041C3F0(this_00,(undefined *)0x5);
LAB_004d22a1:
  thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
  g_currentExceptionFrame = local_cc.previous;
  return 0;
}

