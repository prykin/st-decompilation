#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::Create */

int __thiscall TLOEmbryoTy::Create(TLOEmbryoTy *this,RecoveredRecord_TLOEmbryoTy_004D11D0 *param_1)

{
  TLOEmbryoTyVTable_at_1D5 **this_00;
  short sVar1;
  TLOEmbryoTy *this_01;
  byte bVar3;
  int local_EAX_51;
  int local_EAX_120;
  DArrayTy *pDVar4;
  int local_EAX_1470;
  STT3DSprC *pSVar5;
  uint uVar6;
  int iVar4;
  int local_EAX_1989;
  int local_EAX_2184;
  uint uVar7;
  int local_EAX_2619;
  int uVar8;
  int uVar4;
  int local_EAX_3446;
  int local_EAX_3458;
  int local_EAX_4060;
  int local_EAX_4068;
  int iVar10;
  int iVar8;
  STWorldObject *this_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  uint uVar9;
  RecoveredRecord_TLOEmbryoTy_004D11D0 *pRVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  STT3DSprC **ppSVar15;
  short sVar16;
  short sVar17;
  TLOEmbryoTy **element;
  uint uVar18;
  TLOEmbryoTy *pTVar19;
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

  puVar13 = nullptr;
  local_c = 0;
  local_cc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_cc;
  local_3c = this;
  local_EAX_51 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0);
  this_01 = local_3c;
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
    puVar13 = (undefined4 *)&local_3c->field_0x231;
  }
  pRVar10 = param_1;
  memmove(puVar13, pRVar10, 0x6e); /* compiler REP MOVS byte copy */
  puVar13 = puVar13 + 0x1b;
  pRVar10 = (RecoveredRecord_TLOEmbryoTy_004D11D0 *)((byte *)pRVar10 + 0x6c);
  STField<undefined1>(puVar13,2) = pRVar10->field_0x2;
  local_3c->field_0368 = local_3c->field_0259 + -0x32;
  /* ST_CALLSITE[004D1248]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  local_EAX_120 = LookupRecordByte((char)local_3c->field_0024);
  local_EAX_120 = (int)(byte)local_EAX_120;
  this_01->field_036C = (ushort *)(local_EAX_120 + -1);
  /* ST_CALLSITE[004D1263]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = LookupRecordByte((char)this_01->field_0024);
  this_01->field_0370 = (uint)(bVar3 == 3);
  if ((bVar3 == 3) == 0) {
    this_01->field_0364 = &DAT_007976c8;
  }
  else {
    this_01->field_0364 = &DAT_00797708;
  }
  if (*(int *)(&DAT_00791f38 + this_01->field_0368 * 4) == 2) {
    this_01->field_0360 = &DAT_007aca60;
  }
  else if (*(int *)(&DAT_00791f38 + this_01->field_0368 * 4) == 1) {
    this_01->field_0360 = &DAT_007ace00;
  }
  else {
    this_01->field_0360 = &DAT_007ac988;
  }
  thunk_FUN_00417a00(this_01,0);
  iVar8 = thunk_FUN_00417a20(this_01,(short)this_01->field_025D,(short)this_01->field_0261,
                             (short)this_01->field_0265,1);
  if (iVar8 != 0) {
    RaiseInternalException
              (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x66);
  }
  thunk_FUN_0041d900(this_01,(short)this_01->field_025D,(short)this_01->field_0261,
                     (short)this_01->field_0265);
  if (this_01->field_002C == 0) {
    local_c = 1;
  }
  else if (this_01->field_002C == 1) {
    local_c = 2;
  }
  iVar8 = this_01->field_0261;
  if (iVar8 < iVar8 + local_c) {
    do {
      iVar11 = this_01->field_025D;
      if (iVar11 < iVar11 + local_c) {
        do {
          sVar16 = (short)iVar11;
          sVar17 = (short)iVar8;
          thunk_FUN_004960d0(sVar16,sVar17,(short)this_01->field_0265);
          sVar1 = (short)this_01->field_0265;
          if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar17 < 0)) ||
              ((g_worldGrid.sizeY <= sVar17 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
            this_02 = nullptr;
          }
          else {
            this_02 = STGridAt3D(g_worldGrid, sVar16, sVar17, sVar1).objects[1];
          }
          if ((this_02 != nullptr) && (this_02->value_20 == 0xbe)) {
            thunk_FUN_00630110(this_02,(char)this_01->field_0024);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < this_01->field_025D + local_c);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_01->field_0261 + local_c);
  }
  piVar14 = nullptr;
  if (this_01->field_002C == 0) {
    this_01->field_02F8 = 0xb4;
    this_01->field_02FC = 0x8c;
    this_01->field_0300 = 0x5a;
    this_01->field_0304 = 0x45;
  }
  else if (this_01->field_002C == 1) {
    this_01->field_02F8 = 0xf0;
    this_01->field_02FC = 0xbe;
    this_01->field_0300 = 0x78;
    this_01->field_0304 = 0x56;
  }
  if (this_01->field_0259 == 0x5c) {
    g_packedRecords_A62x8[this_01->field_0024].field1965_0x9ca = 1;
  }
  if (g_array_007FA170 == nullptr) {
    g_array_007FA170 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
  }
  local_2c = this_01;
  Library::DKW::TBL::DArrayAppend(g_array_007FA170,&local_2c);
  iVar8 = this_01->field_0259;
  if (iVar8 == 100) {
    if (g_packedRecords_A62x8[this_01->field_0024].field1968_0x9d6 == nullptr) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      g_packedRecords_A62x8[this_01->field_0024].field1968_0x9d6 = pDVar4;
    }
    element = &local_8;
    local_8 = this_01;
    pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1968_0x9d6;
cf_common_join_004D1763:
    Library::DKW::TBL::DArrayAppend(pDVar4,element);
  }
  else {
    if (iVar8 == 0x4d) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1971_0x9e2 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1971_0x9e2 = pDVar4;
      }
      element = &local_40;
      local_40 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1971_0x9e2;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x43) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1974_0x9ee == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1974_0x9ee = pDVar4;
      }
      element = &local_44;
      local_44 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1974_0x9ee;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x73) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1975_0x9f2 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1975_0x9f2 = pDVar4;
      }
      element = &local_30;
      local_30 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1975_0x9f2;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x3a) {
      if (g_array_007FA16C == nullptr) {
        g_array_007FA16C = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      }
      element = &local_48;
      local_48 = this_01;
      pDVar4 = g_array_007FA16C;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x65) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1972_0x9e6 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1972_0x9e6 = pDVar4;
      }
      element = &local_34;
      local_34 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1972_0x9e6;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x3b) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1973_0x9ea == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1973_0x9ea = pDVar4;
      }
      element = &local_38;
      local_38 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1973_0x9ea;
      goto cf_common_join_004D1763;
    }
  }
  if (this_01->field_023D != 1) {
    if (this_01->field_023D == 2) {
      if (this_01 != nullptr) {
        piVar14 = &this_01->field_02A0;
      }
      piVar12 = (int *)&param_1->field_0x6f;
      memmove(piVar14, piVar12, 0xb0); /* compiler REP MOVS byte copy */
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
      local_28[this_01->field_02F4] = PTR_0080678c;
      local_28[this_01->field_02F0] = PTR_0080678c;
      if (this_01->field_0370 != 0) {
        local_28[this_01->field_02F0 + -1] = PTR_0080678c;
      }
      if (this_01->field_02A0 != 0) {
        local_28[7] = PTR_00806764;
        local_28[6] = PTR_00806774;
      }
      local_1c = PTR_008073cc;
      local_24 = 0;
      local_10 = 0;
      /* ST_CALLSITE[004D18B0]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_01->vtable_at_1d5,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_012B));
      pSVar5 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pSVar5 == nullptr) {
        pSVar5 = nullptr;
      }
      else {
        /* ST_CALLSITE[004D18C5]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
        pSVar5 = STT3DSprC::STT3DSprC(pSVar5);
      }
      this_01->field_035C = pSVar5;
      /* ST_CALLSITE[004D18FC]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
      iVar8 = STT3DSprC::Init(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                              nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
      if (iVar8 != 0) {
        RaiseInternalException
                  (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x13d);
      }
      if (this_01->field_002C == 1) {
        uVar6 = thunk_FUN_004ad650(this_01->field_035C);
        Library::Ourlib::ST3DSMAP::SprSetSplit((void *)this_01->field_0211,uVar6);
      }
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      iVar8 = 0;
      local_28[0xe] = PTR_00806764;
      local_24 = 0;
      local_10 = 0;
      local_1c = nullptr;
      /* ST_CALLSITE[004D1977]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
      STT3DSprC::RestoreSpr
                (this_01->field_035C,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_0133));
      uVar6 = this_01->field_02F4;
      iVar4 = thunk_FUN_004ad650((STT3DSprC *)&this_01->vtable_at_1d5);
      local_EAX_1989 = thunk_FUN_004ad650(this_01->field_035C);
      FUN_006ea340((void *)this_01->field_0211,local_EAX_1989,iVar4,uVar6);
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      local_28[0xe] = PTR_0080678c;
      local_24 = 0;
      local_10 = 0;
      local_1c = nullptr;
      if (this_01->field_0370 == 0) {
        uVar6 = 0xb;
        local_8 = (TLOEmbryoTy *)&param_1[1].field_0xb;
        ppSVar15 = &this_01->field_0350;
        do {
          pSVar5 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
          if (pSVar5 == nullptr) {
            pSVar5 = nullptr;
          }
          else {
            /* ST_CALLSITE[004D19FD]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
            pSVar5 = STT3DSprC::STT3DSprC(pSVar5);
          }
          *ppSVar15 = pSVar5;
          /* ST_CALLSITE[004D1A31]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
          iVar8 = STT3DSprC::Init(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                                  nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
          if (iVar8 != 0) {
            RaiseInternalException
                      (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp"
                       ,0x152);
          }
          uVar18 = uVar6;
          local_EAX_2184 = thunk_FUN_004ad650((STT3DSprC *)&this_01->vtable_at_1d5);
          uVar7 = thunk_FUN_004ad650(*ppSVar15);
          FUN_006ea340((void *)this_01->field_0211,uVar7,local_EAX_2184,uVar18);
          /* ST_CALLSITE[004D1A82]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
          STT3DSprC::RestoreSpr
                    (*ppSVar15,(int *)&local_28,
                     (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + (int)local_8->vtable));
          uVar6 = uVar6 - 1;
          local_8 = (TLOEmbryoTy *)&local_8->field_0x4;
          ppSVar15 = ppSVar15 + 1;
        } while (8 < (int)uVar6);
      }
      FreeAndNull(&local_28);
      /* ST_CALLSITE[004D1AB4]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_01,(undefined4 *)(&param_1->field_0x0 + param_1->field_0123));
      /* ST_CALLSITE[004D1AC0]: CALL 0x004041f6; direct=004041F6 TLOEmbryoTy::sub_00419CF0 */
      /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
      sub_00419CF0((int *)this_01,extraout_EDX,CONCAT22(extraout_var,this_01->field_0032));
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
  this_01->field_02AC = g_playSystem_00802A38->field_00E4;
  uVar6 = g_playSystem_00802A38->field_00E4;
  this_01->field_02B4 = 1;
  this_01->field_02B0 = uVar6;
  this_01->field_02A4 = 0;
  pSVar5 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pSVar5 == nullptr) {
    pSVar5 = nullptr;
  }
  else {
    /* ST_CALLSITE[004D1B0E]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
    pSVar5 = STT3DSprC::STT3DSprC(pSVar5);
  }
  this_01->field_035C = pSVar5;
  /* ST_CALLSITE[004D1B45]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
  iVar8 = STT3DSprC::Init(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                          nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
  if (iVar8 != 0) {
    RaiseInternalException
              (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",200);
  }
  if (this_01->field_0241 == 0) {
    /* ST_CALLSITE[004D1BCC]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar8 = STT3DSprC::LoadSequence
                      (this_01->field_035C,0xe,PTR_00806764,"tlo_emb5",CASE_1D);
    if (iVar8 != 0) {
      iVar11 = 0xca;
LAB_004d1bda:
      RaiseInternalException
                (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar11);
    }
  }
  else if (this_01->field_0241 == 1) {
    uVar6 = thunk_FUN_004ad650(this_01->field_035C);
    Library::Ourlib::ST3DSMAP::SprSetSplit((void *)this_01->field_0211,uVar6);
    /* ST_CALLSITE[004D1BA6]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar8 = STT3DSprC::LoadSequence
                      (this_01->field_035C,0xe,PTR_00806764,"tlo_emb5_big",CASE_1D);
    if (iVar8 != 0) {
      iVar11 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  this_00 = &this_01->vtable_at_1d5;
  uVar6 = (-(uint)(this_01->field_0370 != 0) & 4) + 7;
  this_01->field_02F4 = uVar6;
  local_EAX_2619 = thunk_FUN_004ad650((STT3DSprC *)this_00);
  uVar8 = thunk_FUN_004ad650(this_01->field_035C);
  FUN_006ea340((void *)this_01->field_0211,uVar8,local_EAX_2619,uVar6);
  /* ST_CALLSITE[004D1C43]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  STT3DSprC::sub_004AD3C0
            (this_01->field_035C,(float)this_01->field_01F9,(float)this_01->field_01FD,
             (float)this_01->field_0201);
  uVar4 = thunk_FUN_004ab050();
  uVar6 = uVar4 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  /* ST_CALLSITE[004D1C80]: CALL EDI */
  wsprintfA(local_88,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[(int)this_01->field_036C],uVar6);
  /* ST_CALLSITE[004D1C98]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar8 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0xe,PTR_0080678c,local_88,CASE_1D);
  if (iVar8 != 0) {
    RaiseInternalException
              (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0xd4);
  }
  iVar8 = this_01->field_0370;
  if (iVar8 == 0) {
LAB_004d1fef:
    if (this_01->field_0241 == 0) {
      /* ST_CALLSITE[004D203F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar8 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_00,(-(iVar8 != 0) & 3U) + 6,PTR_0080678c,
                         "tlo_emb2",CASE_1D);
      if (iVar8 != 0) {
        iVar11 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((this_01->field_0241 == 1) &&
            /* ST_CALLSITE[004D2016]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            (iVar8 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)this_00,(-(iVar8 != 0) & 3U) + 6,PTR_0080678c,
                                "tlo_emb3",CASE_1D), iVar8 != 0)) {
      iVar11 = 0x102;
LAB_004d204d:
      RaiseInternalException
                (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar11);
    }
    this_01->field_02EC = 1;
    /* ST_CALLSITE[004D2074]: CALL dword ptr [EAX + 0x90] */
    this_01->vfunc_90(3,0x360);
    this_01->field_02F0 = (-(uint)(this_01->field_0370 != 0) & 3) + 6;
    iVar8 = this_01->field_02EC + this_01->field_0241 * 4;
    thunk_FUN_004abce0(this_00,(byte)this_01->field_02F0,
                       *(int *)(this_01->field_0364 + iVar8 * 8),
                       *(int *)(this_01->field_0364 + 4 + iVar8 * 8),'\0');
    /* ST_CALLSITE[004D20E2]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,(char)this_01->field_02F0,
               *(uint *)(this_01->field_0364 + (this_01->field_02EC + this_01->field_0241 * 4) * 8));
    /* ST_CALLSITE[004D20FD]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow
              ((STT3DSprC *)this_00,(byte)this_01->field_02F0,g_playSystem_00802A38->field_00E4);
    local_8 = (TLOEmbryoTy *)&DAT_0000000b;
    ppSVar15 = &this_01->field_0350;
    do {
      pSVar5 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pSVar5 == nullptr) {
        pSVar5 = nullptr;
      }
      else {
        /* ST_CALLSITE[004D211F]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
        pSVar5 = STT3DSprC::STT3DSprC(pSVar5);
      }
      *ppSVar15 = pSVar5;
      /* ST_CALLSITE[004D2153]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
      iVar8 = STT3DSprC::Init(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                              nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
      if (iVar8 != 0) {
        RaiseInternalException
                  (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10d);
      }
      /* ST_CALLSITE[004D2186]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar8 = STT3DSprC::LoadSequence(*ppSVar15,0xe,PTR_0080678c,PTR_s_tlo_emb6_00790c20,CASE_1D);
      if (iVar8 != 0) {
        RaiseInternalException
                  (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10e);
      }
      pTVar19 = local_8;
      local_EAX_4060 = thunk_FUN_004ad650((STT3DSprC *)this_00);
      local_EAX_4068 = thunk_FUN_004ad650(*ppSVar15);
      FUN_006ea340((void *)this_01->field_0211,local_EAX_4068,local_EAX_4060,(uint)pTVar19);
      /* ST_CALLSITE[004D21DC]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                (*ppSVar15,(float)this_01->field_01F9,(float)this_01->field_01FD,
                 (float)this_01->field_0201);
      ppSVar15 = ppSVar15 + 1;
      local_8 = (TLOEmbryoTy *)((int)&local_8[-1].field_0370 + 3);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar9 = extraout_EDX_02;
    } while (8 < (int)local_8);
  }
  else {
    iVar11 = this_01->field_0259;
    if (((iVar11 == 0x6c) && (this_01->field_0251 == 3)) || ((0x53 < iVar11 && (iVar11 < 0x5b)))) {
      if ((iVar8 == 0) ||
         (((iVar11 = this_01->field_0259, iVar11 != 0x6c || (this_01->field_0251 != 3)) &&
          ((iVar11 < 0x54 || (0x5a < iVar11)))))) goto LAB_004d1fef;
      this_01->field_02EC = 2;
      this_01->field_02F0 = 0xb;
      if (this_01->field_0241 == 1) {
        /* ST_CALLSITE[004D1ED8]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_00,(byte)this_01->field_02F0,PTR_0080678c,
                           "si_emb6",CASE_1D);
        if (iVar8 != 0) {
          iVar11 = 0xef;
LAB_004d1f0b:
          RaiseInternalException
                    (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar11);
        }
      }
      else {
        /* ST_CALLSITE[004D1EFD]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_00,(byte)this_01->field_02F0,PTR_0080678c,
                           "si_emb5",CASE_1D);
        if (iVar8 != 0) {
          iVar11 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar8 = (-(uint)(this_01->field_0370 != 0) & 3) + 6;
      this_01->field_02F4 = iVar8;
      /* ST_CALLSITE[004D1F38]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
      STT3DSprC::UnLoadSequence((STT3DSprC *)this_00,(byte)iVar8);
      uVar6 = this_01->field_02F4;
      local_EAX_3446 = thunk_FUN_004ad650((STT3DSprC *)this_00);
      local_EAX_3458 = thunk_FUN_004ad650(this_01->field_035C);
      FUN_006ea340((void *)this_01->field_0211,local_EAX_3458,local_EAX_3446,uVar6);
      /* ST_CALLSITE[004D1F79]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow
                ((STT3DSprC *)this_00,(byte)this_01->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004D1F89]: CALL dword ptr [EDX + 0x90] */
      this_01->vfunc_90(3,0x362);
      thunk_FUN_004abce0(this_01->field_035C,0xe,0,
                         *(int *)this_01->field_035C->field_0020->field_01F8 + -1,'\0');
      /* ST_CALLSITE[004D1FB7]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(this_01->field_035C,'\x0e',0);
      /* ST_CALLSITE[004D1FD1]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(this_01->field_035C,0xe,g_playSystem_00802A38->field_00E4);
      thunk_FUN_004ad460(this_01->field_035C,0);
      thunk_FUN_004ad5e0((STT3DSprC *)this_00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar9 = extraout_EDX_01;
    }
    else {
      if (this_01->field_0241 == 0) {
        /* ST_CALLSITE[004D1D92]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_00,9,PTR_0080678c,"si_emb1",CASE_1D);
        if (iVar8 != 0) {
          RaiseInternalException
                    (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xd9);
        }
        /* ST_CALLSITE[004D1DC2]: CALL EDI */
        wsprintfA(local_88,"si_emb1_id%1d",this_01->field_0024);
        /* ST_CALLSITE[004D1DEA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_00,(-(this_01->field_0370 != 0) & 3U) + 5,PTR_0080678c,
                           local_88,CASE_1D);
        if (iVar8 != 0) {
          iVar11 = 0xdb;
LAB_004d1df8:
          RaiseInternalException
                    (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar11);
        }
      }
      else if (this_01->field_0241 == 1) {
        /* ST_CALLSITE[004D1D14]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_00,9,PTR_0080678c,"si_emb4",CASE_1D);
        if (iVar8 != 0) {
          RaiseInternalException
                    (iVar8,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xdf);
        }
        /* ST_CALLSITE[004D1D44]: CALL EDI */
        wsprintfA(local_88,"si_emb4_id%1d",this_01->field_0024);
        /* ST_CALLSITE[004D1D6C]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this_00,(-(this_01->field_0370 != 0) & 3U) + 5,PTR_0080678c,
                           local_88,CASE_1D);
        if (iVar8 != 0) {
          iVar11 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      this_01->field_02EC = 0;
      this_01->field_02F0 = (-(uint)(this_01->field_0370 != 0) & 3) + 6;
      /* ST_CALLSITE[004D1E2E]: CALL 0x00404061; direct=00404061 TLOEmbryoTy::sub_004D10A0 */
      sub_004D10A0(this_01,0);
      /* ST_CALLSITE[004D1E48]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow
                ((STT3DSprC *)this_00,(byte)this_01->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004D1E64]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow
                ((STT3DSprC *)this_00,(char)this_01->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004D1E6D]: CALL dword ptr [EAX] */
      (*(*this_00)->vfunc_00)((TLOEmbryoTy *)this_00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar9 = extraout_EDX_00;
    }
  }
  /* ST_CALLSITE[004D2206]: CALL 0x00404bc9; direct=00404BC9 TLOEmbryoTy::sub_00419C70 */
  sub_00419C70((int *)this_01,uVar9,(uint)(this_01->field_023D == 0));
  this_01->field_02D8 = 0;
  this_01->field_02D4 = 0;
  this_01->field_02D0 = 0;
  this_01->field_02CC = 0;
  iVar8 = (this_01->field_0368 * 3 + (int)this_01->field_036C) * 4;
  thunk_FUN_004d76e0((char)this_01->field_0024,0,(int *)this_01->field_0018,
                     *(int *)(&DAT_008545ac + iVar8),*(int *)(&DAT_007e1c50 + iVar8),
                     *(int *)(&DAT_007e24fc + iVar8),*(int *)(&DAT_007e3160 + iVar8));
  iVar8 = thunk_FUN_004b7520(STReplaceLowByte((uint32_t)(this_01->field_0259), (uint8_t)(*(undefined1 *)&this_01->field_0024)),this_01->field_0259);
  if (iVar8 != 0) {
    /* ST_CALLSITE[004D2285]: CALL dword ptr [EDX + 0x2c] */
    iVar8 = this_01->vfunc_2C();
    thunk_FUN_004b76d0(STReplaceLowByte((uint32_t)(iVar8), (uint8_t)(*(undefined1 *)&this_01->field_0024)),iVar8);
  }
  /* ST_CALLSITE[004D229C]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
  sub_0041C3F0(this_01,(undefined *)0x5);
LAB_004d22a1:
  thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_01);
  g_currentExceptionFrame = local_cc.previous;
  return 0;
}

