#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_embryo.cpp

// 004D11D0 TLOEmbryoTy::Create
#line 4 "decomp/ST.exe/functions/004D11D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::Create */

int __thiscall st::fn_004D11D0(TLOEmbryoTy *this,RecoveredRecord_TLOEmbryoTy_004D11D0 *param_1)

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
  undefined4 uVar9;
  RecoveredRecord_TLOEmbryoTy_004D11D0 *pRVar10;
  int iVar11;
  byte *puVar12;
  byte *puVar13;
  STT3DSprC **ppSVar14;
  short sVar15;
  short sVar16;
  TLOEmbryoTy **element;
  uint uVar17;
  TLOEmbryoTy *pTVar18;
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
  local_EAX_51 = st::fn_0072D7F0(local_cc.jumpBuffer,0);
  this_01 = local_3c;
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_cc.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x166,0,local_EAX_51,
                                st::mutable_c_string("%s"),"Int TLOEmbryoTy::Create(LPtrTy _param) error !");
    if (iVar10 == 0) {
      st::fn_006A5E40(local_EAX_51,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x167);
      return local_EAX_51;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_3c != nullptr) {
    puVar13 = (byte *)&local_3c->field_0x231;
  }
  pRVar10 = param_1;
  memmove(puVar13, pRVar10, 0x6e); /* compiler REP MOVS byte copy */
  puVar13 = (byte *)(puVar13 + 0x1b);
  pRVar10 = (RecoveredRecord_TLOEmbryoTy_004D11D0 *)((byte *)pRVar10 + 0x6c);
  STField<undefined1>(puVar13,2) = pRVar10->field_0x2;
  local_3c->field_0368 = st::machine_word_boundary_cast<undefined4>(local_3c->field_0259 + -0x32);
  /* ST_CALLSITE[004D1248]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  local_EAX_120 = st::fn_004049B7(*(char *)&local_3c->field_0024);
  local_EAX_120 = (int)(byte)local_EAX_120;
  this_01->field_036C = local_EAX_120 + -1;
  /* ST_CALLSITE[004D1263]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = st::fn_004049B7(*(char *)&this_01->field_0024);
  this_01->field_0370 = (uint)(bVar3 == 3);
  if ((bVar3 == 3) == 0) {
    this_01->field_0364 = st::machine_word_boundary_cast<undefined4>(&DAT_007976c8);
  }
  else {
    this_01->field_0364 = st::machine_word_boundary_cast<undefined4>(&DAT_00797708);
  }
  if (*(int *)(&DAT_00791f38 + this_01->field_0368 * 4) == 2) {
    this_01->field_0360 = st::machine_word_boundary_cast<undefined4>(&DAT_007aca60);
  }
  else if (*(int *)(&DAT_00791f38 + this_01->field_0368 * 4) == 1) {
    this_01->field_0360 = st::machine_word_boundary_cast<undefined4>(&DAT_007ace00);
  }
  else {
    this_01->field_0360 = st::machine_word_boundary_cast<undefined4>(&DAT_007ac988);
  }
  st::fn_00402B5D(this_01,0);
  iVar8 = st::fn_0040295F(this_01,(short)this_01->field_025D,(short)this_01->field_0261,
                             this_01->field_0265,1);
  if (iVar8 != 0) {
    st::fn_006A5E40
              (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x66);
  }
  st::fn_0040278E(this_01,(short)this_01->field_025D,(short)this_01->field_0261,
                     this_01->field_0265);
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
          sVar15 = (short)iVar11;
          sVar16 = (short)iVar8;
          st::fn_00404CCD(sVar15,sVar16,this_01->field_0265);
          sVar1 = this_01->field_0265;
          if (((((sVar15 < 0) || (g_worldGrid.sizeX <= sVar15)) || (sVar16 < 0)) ||
              ((g_worldGrid.sizeY <= sVar16 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
            this_02 = nullptr;
          }
          else {
            this_02 = STGridAt3D(g_worldGrid, sVar15, sVar16, sVar1).objects[1];
          }
          if ((this_02 != nullptr) && (this_02->value_20 == 0xbe)) {
            st::fn_00404C3C(this_02,(char)this_01->field_0024);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < this_01->field_025D + local_c);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_01->field_0261 + local_c);
  }
  puVar13 = nullptr;
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
    g_array_007FA170 = st::fn_006AE290(nullptr,10,4,10);
  }
  local_2c = this_01;
  st::fn_006AE1C0(g_array_007FA170,&local_2c);
  iVar8 = this_01->field_0259;
  if (iVar8 == 100) {
    if (g_packedRecords_A62x8[this_01->field_0024].field1968_0x9d6 == nullptr) {
      pDVar4 = st::fn_006AE290(nullptr,10,4,10);
      g_packedRecords_A62x8[this_01->field_0024].field1968_0x9d6 = pDVar4;
    }
    element = &local_8;
    local_8 = this_01;
    pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1968_0x9d6;
cf_common_join_004D1763:
    st::fn_006AE1C0(pDVar4,element);
  }
  else {
    if (iVar8 == 0x4d) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1971_0x9e2 == nullptr) {
        pDVar4 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1971_0x9e2 = pDVar4;
      }
      element = &local_40;
      local_40 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1971_0x9e2;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x43) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1974_0x9ee == nullptr) {
        pDVar4 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1974_0x9ee = pDVar4;
      }
      element = &local_44;
      local_44 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1974_0x9ee;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x73) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1975_0x9f2 == nullptr) {
        pDVar4 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1975_0x9f2 = pDVar4;
      }
      element = &local_30;
      local_30 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1975_0x9f2;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x3a) {
      if (g_array_007FA16C == nullptr) {
        g_array_007FA16C = st::fn_006AE290(nullptr,10,4,10);
      }
      element = &local_48;
      local_48 = this_01;
      pDVar4 = g_array_007FA16C;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x65) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1972_0x9e6 == nullptr) {
        pDVar4 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_01->field_0024].field1972_0x9e6 = pDVar4;
      }
      element = &local_34;
      local_34 = this_01;
      pDVar4 = g_packedRecords_A62x8[this_01->field_0024].field1972_0x9e6;
      goto cf_common_join_004D1763;
    }
    if (iVar8 == 0x3b) {
      if (g_packedRecords_A62x8[this_01->field_0024].field1973_0x9ea == nullptr) {
        pDVar4 = st::fn_006AE290(nullptr,10,4,10);
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
        puVar13 = (byte *)(&this_01->field_02A0);
      }
      puVar12 = (byte *)&param_1->field_0x6f;
      memmove(puVar13, puVar12, 0xb0); /* compiler REP MOVS byte copy */
      local_28 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(0x44));
      local_28[1] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
      local_28[2] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
      *local_28 = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
      local_28[0xf] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
      local_28[0x10] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      local_28[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      local_28[0xd] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      local_28[0xc] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      local_28[0xb] = 0;
      local_28[this_01->field_02F4] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      local_28[this_01->field_02F0] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      if (this_01->field_0370 != 0) {
        local_28[this_01->field_02F0 + -1] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      }
      if (this_01->field_02A0 != 0) {
        local_28[7] = st::machine_word_boundary_cast<undefined4>(PTR_00806764);
        local_28[6] = st::machine_word_boundary_cast<undefined4>(PTR_00806774);
      }
      local_1c = PTR_008073cc;
      local_24 = 0;
      local_10 = 0;
      /* ST_CALLSITE[004D18B0]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
      st::fn_00404CA5
                ((STT3DSprC *)&this_01->vtable_at_1d5,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_012B));
      pSVar5 = (STT3DSprC *)st::fn_0072E530(0x40);
      if (pSVar5 == nullptr) {
        pSVar5 = nullptr;
      }
      else {
        /* ST_CALLSITE[004D18C5]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
        pSVar5 = st::fn_00401316(pSVar5);
      }
      this_01->field_035C = pSVar5;
      /* ST_CALLSITE[004D18FC]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
      iVar8 = st::fn_0040537B(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                              nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
      if (iVar8 != 0) {
        st::fn_006A5E40
                  (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                   0x13d);
      }
      if (this_01->field_002C == 1) {
        uVar6 = st::fn_004052CC(this_01->field_035C);
        st::fn_006E9210((void *)this_01->field_0211,uVar6);
      }
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      iVar8 = 0;
      local_28[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_00806764);
      local_24 = 0;
      local_10 = 0;
      local_1c = nullptr;
      /* ST_CALLSITE[004D1977]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
      st::fn_00404CA5
                (this_01->field_035C,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_0133));
      uVar6 = this_01->field_02F4;
      iVar4 = st::fn_004052CC((STT3DSprC *)&this_01->vtable_at_1d5);
      local_EAX_1989 = st::fn_004052CC(this_01->field_035C);
      st::fn_006EA340((void *)this_01->field_0211,local_EAX_1989,iVar4,uVar6);
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      local_28[0xe] = st::machine_word_boundary_cast<undefined4>(PTR_0080678c);
      local_24 = 0;
      local_10 = 0;
      local_1c = nullptr;
      if (this_01->field_0370 == 0) {
        uVar6 = 0xb;
        local_8 = (TLOEmbryoTy *)&param_1[1].field_0xb;
        ppSVar14 = &this_01->field_0350;
        do {
          pSVar5 = (STT3DSprC *)st::fn_0072E530(0x40);
          if (pSVar5 == nullptr) {
            pSVar5 = nullptr;
          }
          else {
            /* ST_CALLSITE[004D19FD]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
            pSVar5 = st::fn_00401316(pSVar5);
          }
          *ppSVar14 = pSVar5;
          /* ST_CALLSITE[004D1A31]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
          iVar8 = st::fn_0040537B(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                                  nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
          if (iVar8 != 0) {
            st::fn_006A5E40
                      (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp")
                       ,0x152);
          }
          uVar17 = uVar6;
          local_EAX_2184 = st::fn_004052CC((STT3DSprC *)&this_01->vtable_at_1d5);
          uVar7 = st::fn_004052CC(*ppSVar14);
          st::fn_006EA340((void *)this_01->field_0211,uVar7,local_EAX_2184,uVar17);
          /* ST_CALLSITE[004D1A82]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
          st::fn_00404CA5
                    (*ppSVar14,(int *)&local_28,
                     (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + (int)local_8->vtable));
          uVar6 = uVar6 - 1;
          local_8 = (TLOEmbryoTy *)&local_8->field_0x4;
          ppSVar14 = ppSVar14 + 1;
        } while (8 < (int)uVar6);
      }
      st::fn_006AB060(&local_28);
      /* ST_CALLSITE[004D1AB4]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
      st::fn_0040551F
                ((STAllPlayersC *)this_01,(undefined4 *)(&param_1->field_0x0 + param_1->field_0123));
      /* ST_CALLSITE[004D1AC0]: CALL 0x004041f6; direct=004041F6 TLOEmbryoTy::sub_00419CF0 */
      /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
      st::fn_004041F6((int *)this_01,extraout_EDX,CONCAT22(extraout_var,this_01->field_0032));
    }
    else {
      local_EAX_1470 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x160,0,0,st::mutable_c_string("%s"),
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
  pSVar5 = (STT3DSprC *)st::fn_0072E530(0x40);
  if (pSVar5 == nullptr) {
    pSVar5 = nullptr;
  }
  else {
    /* ST_CALLSITE[004D1B0E]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
    pSVar5 = st::fn_00401316(pSVar5);
  }
  this_01->field_035C = pSVar5;
  /* ST_CALLSITE[004D1B45]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
  iVar8 = st::fn_0040537B(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                          nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
  if (iVar8 != 0) {
    st::fn_006A5E40
              (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),200);
  }
  if (this_01->field_0241 == 0) {
    /* ST_CALLSITE[004D1BCC]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar8 = st::fn_00404183
                      (this_01->field_035C,0xe,PTR_00806764,st::mutable_c_string("tlo_emb5"),CASE_1D);
    if (iVar8 != 0) {
      iVar11 = 0xca;
LAB_004d1bda:
      st::fn_006A5E40
                (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                 iVar11);
    }
  }
  else if (this_01->field_0241 == 1) {
    uVar6 = st::fn_004052CC(this_01->field_035C);
    st::fn_006E9210((void *)this_01->field_0211,uVar6);
    /* ST_CALLSITE[004D1BA6]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar8 = st::fn_00404183
                      (this_01->field_035C,0xe,PTR_00806764,st::mutable_c_string("tlo_emb5_big"),CASE_1D);
    if (iVar8 != 0) {
      iVar11 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  this_00 = &this_01->vtable_at_1d5;
  uVar6 = (-(uint)(this_01->field_0370 != 0) & 4) + 7;
  this_01->field_02F4 = uVar6;
  local_EAX_2619 = st::fn_004052CC((STT3DSprC *)this_00);
  uVar8 = st::fn_004052CC(this_01->field_035C);
  st::fn_006EA340((void *)this_01->field_0211,uVar8,local_EAX_2619,uVar6);
  /* ST_CALLSITE[004D1C43]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9
            (this_01->field_035C,(float)this_01->field_01F9,(float)this_01->field_01FD,
             (float)this_01->field_0201);
  uVar4 = st::fn_0040581C();
  uVar6 = uVar4 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  /* ST_CALLSITE[004D1C80]: CALL EDI */
  st::external_00000080(local_88,st::mutable_c_string("%s%1i"),(&PTR_s_tlo_embws1_007bf3e8)[this_01->field_036C],uVar6);
  /* ST_CALLSITE[004D1C98]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar8 = st::fn_00404183((STT3DSprC *)this_00,0xe,PTR_0080678c,local_88,CASE_1D);
  if (iVar8 != 0) {
    st::fn_006A5E40
              (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0xd4);
  }
  iVar8 = this_01->field_0370;
  if (iVar8 == 0) {
LAB_004d1fef:
    if (this_01->field_0241 == 0) {
      /* ST_CALLSITE[004D203F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar8 = st::fn_00404183
                        ((STT3DSprC *)this_00,(-(iVar8 != 0) & 3U) + 6,PTR_0080678c,
                         st::mutable_c_string("tlo_emb2"),CASE_1D);
      if (iVar8 != 0) {
        iVar11 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((this_01->field_0241 == 1) &&
            /* ST_CALLSITE[004D2016]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            (iVar8 = st::fn_00404183
                               ((STT3DSprC *)this_00,(-(iVar8 != 0) & 3U) + 6,PTR_0080678c,
                                st::mutable_c_string("tlo_emb3"),CASE_1D), iVar8 != 0)) {
      iVar11 = 0x102;
LAB_004d204d:
      st::fn_006A5E40
                (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                 iVar11);
    }
    this_01->field_02EC = 1;
    /* ST_CALLSITE[004D2074]: CALL dword ptr [EAX + 0x90] */
    this_01->vfunc_90(3,0x360);
    this_01->field_02F0 = (-(uint)(this_01->field_0370 != 0) & 3) + 6;
    iVar8 = st::machine_word_boundary_cast<int>(this_01->field_02EC + this_01->field_0241 * 4);
    st::fn_00401EBA(this_00,*(byte *)&this_01->field_02F0,
                       *(int *)(this_01->field_0364 + iVar8 * 8),
                       *(int *)(this_01->field_0364 + 4 + iVar8 * 8),'\0');
    /* ST_CALLSITE[004D20E2]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064
              ((STT3DSprC *)this_00,*(char *)&this_01->field_02F0,
               *(uint *)(this_01->field_0364 + (this_01->field_02EC + this_01->field_0241 * 4) * 8));
    /* ST_CALLSITE[004D20FD]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240
              ((STT3DSprC *)this_00,*(byte *)&this_01->field_02F0,g_playSystem_00802A38->field_00E4);
    local_8 = (TLOEmbryoTy *)&DAT_0000000b;
    ppSVar14 = &this_01->field_0350;
    do {
      pSVar5 = (STT3DSprC *)st::fn_0072E530(0x40);
      if (pSVar5 == nullptr) {
        pSVar5 = nullptr;
      }
      else {
        /* ST_CALLSITE[004D211F]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
        pSVar5 = st::fn_00401316(pSVar5);
      }
      *ppSVar14 = pSVar5;
      /* ST_CALLSITE[004D2153]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
      iVar8 = st::fn_0040537B(pSVar5,PTR_008073cc,this_01->field_0300,this_01->field_0304,
                              nullptr,this_01->field_02F8,this_01->field_02FC,0x11);
      if (iVar8 != 0) {
        st::fn_006A5E40
                  (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                   0x10d);
      }
      /* ST_CALLSITE[004D2186]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar8 = st::fn_00404183(*ppSVar14,0xe,PTR_0080678c,PTR_s_tlo_emb6_00790c20,CASE_1D);
      if (iVar8 != 0) {
        st::fn_006A5E40
                  (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                   0x10e);
      }
      pTVar18 = local_8;
      local_EAX_4060 = st::fn_004052CC((STT3DSprC *)this_00);
      local_EAX_4068 = st::fn_004052CC(*ppSVar14);
      st::fn_006EA340((void *)this_01->field_0211,local_EAX_4068,local_EAX_4060,(uint)pTVar18);
      /* ST_CALLSITE[004D21DC]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      st::fn_004045D9
                (*ppSVar14,(float)this_01->field_01F9,(float)this_01->field_01FD,
                 (float)this_01->field_0201);
      ppSVar14 = ppSVar14 + 1;
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
        iVar8 = st::fn_00404183
                          ((STT3DSprC *)this_00,*(byte *)&this_01->field_02F0,PTR_0080678c,
                           st::mutable_c_string("si_emb6"),CASE_1D);
        if (iVar8 != 0) {
          iVar11 = 0xef;
LAB_004d1f0b:
          st::fn_006A5E40
                    (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                     iVar11);
        }
      }
      else {
        /* ST_CALLSITE[004D1EFD]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = st::fn_00404183
                          ((STT3DSprC *)this_00,*(byte *)&this_01->field_02F0,PTR_0080678c,
                           st::mutable_c_string("si_emb5"),CASE_1D);
        if (iVar8 != 0) {
          iVar11 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar8 = (-(uint)(this_01->field_0370 != 0) & 3) + 6;
      this_01->field_02F4 = iVar8;
      /* ST_CALLSITE[004D1F38]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
      st::fn_0040498A((STT3DSprC *)this_00,(byte)iVar8);
      uVar6 = this_01->field_02F4;
      local_EAX_3446 = st::fn_004052CC((STT3DSprC *)this_00);
      local_EAX_3458 = st::fn_004052CC(this_01->field_035C);
      st::fn_006EA340((void *)this_01->field_0211,local_EAX_3458,local_EAX_3446,uVar6);
      /* ST_CALLSITE[004D1F79]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240
                ((STT3DSprC *)this_00,*(byte *)&this_01->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004D1F89]: CALL dword ptr [EDX + 0x90] */
      this_01->vfunc_90(3,0x362);
      st::fn_00401EBA(this_01->field_035C,0xe,0,
                         *(int *)this_01->field_035C->field_0020->field_01F8 + -1,'\0');
      /* ST_CALLSITE[004D1FB7]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(this_01->field_035C,'\x0e',0);
      /* ST_CALLSITE[004D1FD1]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240(this_01->field_035C,0xe,g_playSystem_00802A38->field_00E4);
      st::fn_00402982(this_01->field_035C,0);
      st::fn_00402A90((STT3DSprC *)this_00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar9 = extraout_EDX_01;
    }
    else {
      if (this_01->field_0241 == 0) {
        /* ST_CALLSITE[004D1D92]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = st::fn_00404183
                          ((STT3DSprC *)this_00,9,PTR_0080678c,st::mutable_c_string("si_emb1"),CASE_1D);
        if (iVar8 != 0) {
          st::fn_006A5E40
                    (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                     0xd9);
        }
        /* ST_CALLSITE[004D1DC2]: CALL EDI */
        st::external_00000080(local_88,st::mutable_c_string("si_emb1_id%1d"),this_01->field_0024);
        /* ST_CALLSITE[004D1DEA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = st::fn_00404183
                          ((STT3DSprC *)this_00,(-(this_01->field_0370 != 0) & 3U) + 5,PTR_0080678c,
                           local_88,CASE_1D);
        if (iVar8 != 0) {
          iVar11 = 0xdb;
LAB_004d1df8:
          st::fn_006A5E40
                    (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                     iVar11);
        }
      }
      else if (this_01->field_0241 == 1) {
        /* ST_CALLSITE[004D1D14]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = st::fn_00404183
                          ((STT3DSprC *)this_00,9,PTR_0080678c,st::mutable_c_string("si_emb4"),CASE_1D);
        if (iVar8 != 0) {
          st::fn_006A5E40
                    (iVar8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                     0xdf);
        }
        /* ST_CALLSITE[004D1D44]: CALL EDI */
        st::external_00000080(local_88,st::mutable_c_string("si_emb4_id%1d"),this_01->field_0024);
        /* ST_CALLSITE[004D1D6C]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar8 = st::fn_00404183
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
      st::fn_00404061(this_01,0);
      /* ST_CALLSITE[004D1E48]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240
                ((STT3DSprC *)this_00,*(byte *)&this_01->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004D1E64]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240
                ((STT3DSprC *)this_00,*(char *)&this_01->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[004D1E6D]: CALL dword ptr [EAX] */
      (*(*this_00)->vfunc_00)((TLOEmbryoTy *)this_00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar9 = extraout_EDX_00;
    }
  }
  /* ST_CALLSITE[004D2206]: CALL 0x00404bc9; direct=00404BC9 TLOEmbryoTy::sub_00419C70 */
  st::fn_00404BC9((int *)this_01,uVar9,(uint)(this_01->field_023D == 0));
  this_01->field_02D8 = 0;
  this_01->field_02D4 = 0;
  this_01->field_02D0 = 0;
  this_01->field_02CC = 0;
  iVar8 = (this_01->field_0368 * 3 + this_01->field_036C) * 4;
  st::fn_0040497B(*(char *)&this_01->field_0024,0,(int *)this_01->field_0018,
                     *(int *)(&DAT_008545ac + iVar8),*(int *)(&DAT_007e1c50 + iVar8),
                     *(int *)(&DAT_007e24fc + iVar8),*(int *)(&DAT_007e3160 + iVar8));
  iVar8 = st::fn_00402077(STReplaceLowByte((uint32_t)(this_01->field_0259), (uint8_t)(*(undefined1 *)&this_01->field_0024)),this_01->field_0259);
  if (iVar8 != 0) {
    /* ST_CALLSITE[004D2285]: CALL dword ptr [EDX + 0x2c] */
    iVar8 = this_01->vfunc_2C();
    st::fn_00405E39(STReplaceLowByte((uint32_t)(iVar8), (uint8_t)(*(undefined1 *)&this_01->field_0024)),iVar8);
  }
  /* ST_CALLSITE[004D229C]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
  st::fn_004023A1(this_01,(undefined *)0x5);
LAB_004d22a1:
  st::fn_00401997((AnonShape_0041F630_B1BEE81C *)this_01);
  g_currentExceptionFrame = local_cc.previous;
  return 0;
}

// 004D32C0 FUN_004d32c0
#line 4 "decomp/ST.exe/functions/004D32C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_embryo.cpp
   Diagnostic line evidence: 606 | 623 | 627 | 641 | 649 | 719 | 721 | 725 | 820 | 826 | 834
   (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STSwitchEnumApplier] Switch target field_02EC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_02ECState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __fastcall st::fn_004D32C0(TLOBaseTy *param_1)

{
  char cVar1;
  STT3DSprC *this;
  int local_EAX_406;
  int iVar10;
  int local_EAX_956;
  dword dVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined2 uVar5;
  int local_EAX_3601;
  uint uVar3;
  undefined4 uVar4;
  int uVar2;
  int uVar6;
  int local_EAX_4514;
  int local_EAX_5536;
  int local_EAX_6643;
  int *piVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined2 uVar8;
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar9;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  char *text;
  uint uVar16;
  CHAR local_7c [64];
  undefined4 local_3c [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar11 = 0;
  if (*(int *)&param_1->field_0x2a0 == 0) {
    this = param_1->field_035C;
    if ((this->field_001C & 0x4000) != 0) {
      iVar7 = this->field_0020->field_0210;
      if (iVar7 == 0x15) {
        if (((param_1->field_01F1 & 0x4000) == 0) && (param_1->field_02EC == CASE_2)) {
          puVar12 = &param_1->field_01D5;
          st::fn_00401EBA(puVar12,0xe,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4)
                             ,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          /* ST_CALLSITE[004D334B]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          st::fn_00401064
                    ((STT3DSprC *)puVar12,'\x0e',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          /* ST_CALLSITE[004D3360]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          st::fn_00405240((STT3DSprC *)puVar12,0xe,g_playSystem_00802A38->field_00E4);
          /* ST_CALLSITE[004D336E]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
          st::fn_00405CA9((STT3DSprC *)puVar12,PTR_008073cc);
          /* ST_CALLSITE[004D338E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar11 = st::fn_00404183
                             ((STT3DSprC *)puVar12,0x10,PTR_0080678c,
                              (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],CASE_1D);
          if (iVar11 != 0) {
            st::fn_006A5E40
                      (iVar11,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x25e);
          }
          st::fn_00401EBA(puVar12,0x10,
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          /* ST_CALLSITE[004D33DA]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          st::fn_00401064
                    ((STT3DSprC *)puVar12,'\x10',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          /* ST_CALLSITE[004D33F0]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          st::fn_00405240((STT3DSprC *)puVar12,0x10,g_playSystem_00802A38->field_00E4);
          /* ST_CALLSITE[004D33F9]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
          st::fn_00403AFD((STT3DSprC *)puVar12,'\x10');
          iVar11 = 3;
          piVar6 = (int *)&param_1->field_0x30c;
          do {
            uVar13 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
            param_1->field_001C = uVar13;
            iVar11 = iVar11 + -1;
            *piVar6 = (uVar13 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
            piVar6 = piVar6 + 4;
          } while (iVar11 != 0);
          if (g_manBasis_00811784 != nullptr) {
            /* ST_CALLSITE[004D3456]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_EAX_406 = st::fn_004049B7(*(char *)&param_1->field_0024);
            local_EAX_406 = (int)(byte)local_EAX_406;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            st::fn_00403265(g_manBasis_00811784,param_1->field_025D,param_1->field_0261,
                               param_1->field_0265,
                               STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(*(undefined1 *)&param_1->field_002C)),param_1->field_0259,
                               local_EAX_406);
          }
        }
        else if ((param_1->field_02EC == CASE_3) && (param_1->field_02DC == 0)) {
          if ((*(int *)&param_1->field_0x2a8 < 100) || (param_1->field_02E8 != 0)) {
            puVar12 = &param_1->field_01D5;
            /* ST_CALLSITE[004D376F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264((STT3DSprC *)puVar12,0xe);
            /* ST_CALLSITE[004D3778]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264((STT3DSprC *)puVar12,0xd);
            /* ST_CALLSITE[004D3781]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264((STT3DSprC *)puVar12,0xc);
            /* ST_CALLSITE[004D378A]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264((STT3DSprC *)puVar12,0x10);
            /* ST_CALLSITE[004D3793]: CALL dword ptr [EDX + 0x8] */
            iVar11 = param_1->vfunc_08();
            if (iVar11 != 0) {
              /* ST_CALLSITE[004D37A0]: CALL dword ptr [EAX + 0xe8] */
              param_1->SetActivity(0);
            }
          }
          else {
            if ((*(char **)(PTR_PTR_007bb198 +
                           (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                           ) != nullptr) &&
               /* ST_CALLSITE[004D34FA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
               (iVar11 = st::fn_00404183
                                   ((STT3DSprC *)&param_1->field_01D5,0xe,PTR_0080678c,
                                    *(char **)(PTR_PTR_007bb198 +
                                              (*(int *)&param_1->field_0x368 * 3 +
                                              *(int *)&param_1->field_0x36c) * 0xc),CASE_1D),
               iVar11 != 0)) {
              st::fn_006A5E40
                        (iVar11,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x26f);
            }
            if (*(int *)(PTR_PTR_007bb198 +
                        (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc +
                        4) != 0) {
              /* ST_CALLSITE[004D354C]: CALL dword ptr [0x0085bde8] */
              st::external_00000080(local_7c,st::mutable_c_string("%s%1i"),
                        *(int *)(PTR_PTR_007bb198 +
                                (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c)
                                * 0xc + 4),param_1->field_026D);
              /* ST_CALLSITE[004D356A]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
              iVar11 = st::fn_00404183
                                 ((STT3DSprC *)&param_1->field_01D5,0xd,PTR_0080678c,local_7c,
                                  CASE_1D);
              if (iVar11 != 0) {
                st::fn_006A5E40
                          (iVar11,g_overwriteContext_007ED77C,
                           st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x273);
              }
            }
            iVar10 = st::fn_0040581C();
            puVar12 = &param_1->field_01D5;
            uVar13 = *(uint *)(PTR_DAT_007b5170 +
                              (iVar10 + (*(int *)&param_1->field_0x368 * 3 +
                                        *(int *)&param_1->field_0x36c) * 4) * 8);
            st::fn_00401EBA(puVar12,0xe,uVar13,uVar13,'\0');
            /* ST_CALLSITE[004D35C9]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
            st::fn_00401064((STT3DSprC *)puVar12,'\x0e',uVar13);
            /* ST_CALLSITE[004D35DF]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            st::fn_00405240((STT3DSprC *)puVar12,0xe,g_playSystem_00802A38->field_00E4);
            if (**(int **)&param_1->field_01F5->field_0x1d4 < (int)uVar13) {
              uVar13 = 0;
            }
            st::fn_00401EBA(puVar12,0xd,uVar13,uVar13,'\0');
            /* ST_CALLSITE[004D3608]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
            st::fn_00401064((STT3DSprC *)puVar12,'\r',uVar13);
            /* ST_CALLSITE[004D361E]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            st::fn_00405240((STT3DSprC *)puVar12,0xd,g_playSystem_00802A38->field_00E4);
            if (*(char **)(PTR_PTR_007bb198 +
                          (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                          + 8) != nullptr) {
              /* ST_CALLSITE[004D3656]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
              iVar11 = st::fn_00404183
                                 ((STT3DSprC *)puVar12,0xc,PTR_0080678c,
                                  *(char **)(PTR_PTR_007bb198 +
                                            (*(int *)&param_1->field_0x368 * 3 +
                                            *(int *)&param_1->field_0x36c) * 0xc + 8),CASE_1D);
              if (iVar11 != 0) {
                st::fn_006A5E40
                          (iVar11,g_overwriteContext_007ED77C,
                           st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x281);
              }
              local_EAX_956 = st::fn_0040581C();
              uVar13 = *(uint *)(PTR_DAT_007b8310 +
                                (local_EAX_956 +
                                (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c)
                                * 4) * 8);
              st::fn_00401EBA(puVar12,0xc,uVar13,uVar13,'\0');
              /* ST_CALLSITE[004D36B0]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
              st::fn_00401064((STT3DSprC *)puVar12,'\f',uVar13);
              /* ST_CALLSITE[004D36C6]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              st::fn_00405240((STT3DSprC *)puVar12,0xc,g_playSystem_00802A38->field_00E4);
            }
            /* ST_CALLSITE[004D36D4]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
            st::fn_00405CA9((STT3DSprC *)puVar12,PTR_008073cc);
            /* ST_CALLSITE[004D36F4]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar11 = st::fn_00404183
                               ((STT3DSprC *)puVar12,0x10,PTR_0080678c,
                                (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],CASE_1D);
            if (iVar11 != 0) {
              st::fn_006A5E40
                        (iVar11,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x289);
            }
            st::fn_00401EBA(puVar12,0x10,
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
            /* ST_CALLSITE[004D3740]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
            st::fn_00401064
                      ((STT3DSprC *)puVar12,'\x10',
                       *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
            /* ST_CALLSITE[004D3755]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            st::fn_00405240((STT3DSprC *)puVar12,0x10,g_playSystem_00802A38->field_00E4);
            /* ST_CALLSITE[004D375E]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
            st::fn_00403AFD((STT3DSprC *)puVar12,'\x10');
          }
          puVar12 = &param_1->field_01D5;
          param_1->field_02DC = 1;
          /* ST_CALLSITE[004D37B9]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          st::fn_00404264((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          /* ST_CALLSITE[004D37C7]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
          st::fn_0040498A((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          st::fn_00402A90((STT3DSprC *)puVar12);
          if (*(int *)&param_1->field_0x370 != 0) {
            /* ST_CALLSITE[004D37EC]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
            /* ST_CALLSITE[004D37FC]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
            st::fn_0040498A((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
          }
        }
      }
      else if (iVar7 == this->field_0020->field_020C) {
        /* ST_CALLSITE[004D3816]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064(this,'\x0e',0);
        /* ST_CALLSITE[004D3823]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        st::fn_00404264(param_1->field_035C,0xe);
        st::fn_00403D0F(param_1->field_035C);
        if (param_1->field_02DC != 0) {
          /* ST_CALLSITE[004D3843]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
          st::fn_0040464C(param_1);
          /* ST_CALLSITE[004D3862]: CALL 0x00403297; direct=00403297 TLOBaseTy::sub_00417D30 */
          st::fn_00403297(param_1);
          if (param_1->field_002C == 0) {
            iVar11 = 1;
          }
          else if (param_1->field_002C == 1) {
            iVar11 = 2;
          }
          local_14 = param_1->field_0261;
          if ((int)local_14 < (int)(local_14 + iVar11)) {
            do {
              iVar7 = param_1->field_025D;
              if (iVar7 < iVar7 + iVar11) {
                do {
                  st::fn_0040232E((short)iVar7,(short)local_14,*(short *)&param_1->field_0265);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar11 + param_1->field_025D);
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < param_1->field_0261 + iVar11);
          }
          iVar11 = st::fn_00402077(STReplaceLowByte((uint32_t)(param_1->field_0259), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                      param_1->field_0259);
          if (iVar11 != 0) {
            /* ST_CALLSITE[004D38F7]: CALL dword ptr [EDX + 0x2c] */
            dVar2 = param_1->slot_2C();
            st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar2), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                               dVar2);
          }
          if ((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) {
            /* ST_CALLSITE[004D3939]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
            st::fn_00401BC2
                      (g_playSystem_00802A38,param_1->field_0245,0,st::machine_word_boundary_cast<undefined4>(&local_18),st::machine_word_boundary_cast<undefined4>(&param_1->field_0245),0);
            param_1->field_02E4 = 1;
            /* ST_CALLSITE[004D394C]: CALL dword ptr [EAX + 0x8] */
            iVar11 = param_1->vfunc_08();
            uVar5 = 0;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar8 = extraout_var_00;
            if (iVar11 != 0) {
              /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_00403D23(STReplaceLowByte((uint32_t)(local_18), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                 STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(param_1->field_0032)),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar8 = extraout_var_01;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar5 = extraout_var;
            }
            /* ST_CALLSITE[004D3986]: CALL 0x00403c79; direct=00403C79 STAllPlayersC::ReplaceObject */
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            st::fn_00403C79
                      (g_allPlayers_007FA174,*(char *)&param_1->field_0024,
                       CONCAT22(uVar8,param_1->field_0032),
                       CONCAT22(uVar5,*(undefined2 *)(local_18 + 0x32)));
          }
          local_28 = param_1->field_0008;
          local_34 = param_1->field_000C->systemId;
          local_30 = 0;
          local_2c = 10;
          st::fn_006E5810(param_1->field_000C,local_3c);
        }
      }
    }
    if (*(int *)(&param_1->field_01F5->field_0x18 + param_1->field_02F0 * 0x24) ==
        *(int *)(&param_1->field_01F5->field_0x14 + param_1->field_02F0 * 0x24)) {
      switch(param_1->field_02EC) {
      case CASE_0:
        param_1->field_02EC = CASE_1;
        if (param_1->field_0241 == 0) {
          /* ST_CALLSITE[004D3ABF]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar11 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,PTR_0080678c,
                              st::mutable_c_string("si_emb3"),CASE_1D);
          if (iVar11 != 0) {
            st::fn_006A5E40
                      (iVar11,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x2cf);
          }
          /* ST_CALLSITE[004D3AEC]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(local_7c,st::mutable_c_string("si_emb3_id%1d"),param_1->field_0024);
          /* ST_CALLSITE[004D3B15]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar11 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,PTR_0080678c,local_7c
                              ,CASE_1D);
          if (iVar11 != 0) {
            iVar7 = 0x2d1;
LAB_004d3b23:
            st::fn_006A5E40
                      (iVar11,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),iVar7);
          }
        }
        else if (param_1->field_0241 == 1) {
          /* ST_CALLSITE[004D3A2D]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar11 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,PTR_0080678c,
                              st::mutable_c_string("si_emb2"),CASE_1D);
          if (iVar11 != 0) {
            st::fn_006A5E40
                      (iVar11,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x2d5);
          }
          /* ST_CALLSITE[004D3A5A]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(local_7c,st::mutable_c_string("si_emb2_id%1d"),param_1->field_0024);
          /* ST_CALLSITE[004D3A83]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar11 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,PTR_0080678c,local_7c
                              ,CASE_1D);
          if (iVar11 != 0) {
            iVar7 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        puVar12 = &param_1->field_01D5;
        iVar11 = st::machine_word_boundary_cast<int>(param_1->field_02EC + param_1->field_0241 * 4);
        st::fn_00401EBA(puVar12,*(byte *)&param_1->field_02F0,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
        /* ST_CALLSITE[004D3B8D]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064
                  ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        /* ST_CALLSITE[004D3BA8]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240
                  ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        iVar11 = st::machine_word_boundary_cast<int>(param_1->field_02EC + param_1->field_0241 * 4);
        st::fn_00401EBA(puVar12,*(char *)&param_1->field_02F0 - 1,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
        /* ST_CALLSITE[004D3C03]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064
                  ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        cVar1 = *(char *)&param_1->field_02F0;
        uVar13 = g_playSystem_00802A38->field_00E4;
LAB_004d4378:
        /* ST_CALLSITE[004D437A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240((STT3DSprC *)&param_1->field_01D5,cVar1 - 1,uVar13);
        break;
      case CASE_1:
        iVar11 = st::machine_word_boundary_cast<int>(param_1->field_0241 * 0x20);
        param_1->field_02EC = CASE_2;
        puVar12 = &param_1->field_01D5;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_00401EBA(puVar12,*(byte *)&param_1->field_02F0,
                           *(int *)(iVar11 + 0x10 + *(int *)&param_1->field_0x364),
                           *(int *)(iVar11 + 0x14 + *(int *)&param_1->field_0x364),'\0');
        /* ST_CALLSITE[004D3C80]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064
                  ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        /* ST_CALLSITE[004D3C9B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240
                  ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        if (*(int *)&param_1->field_0x370 != 0) {
          iVar11 = st::machine_word_boundary_cast<int>(param_1->field_02EC + param_1->field_0241 * 4);
          st::fn_00401EBA(puVar12,*(char *)&param_1->field_02F0 - 1,
                             *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                             *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
          /* ST_CALLSITE[004D3D00]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          st::fn_00401064
                    ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,
                     *(uint *)(*(int *)&param_1->field_0x364 +
                              (param_1->field_02EC + param_1->field_0241 * 4) * 8));
          /* ST_CALLSITE[004D3D1D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          st::fn_00405240
                    ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                     g_playSystem_00802A38->field_00E4);
        }
        /* ST_CALLSITE[004D3D2D]: CALL dword ptr [EDX + 0x90] */
        param_1->vfunc_90(3,0x362);
        st::fn_00401EBA(param_1->field_035C,0xe,0,
                           *(int *)param_1->field_035C->field_0020->field_01F8 + -1,'\0');
        /* ST_CALLSITE[004D3D5B]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064(param_1->field_035C,'\x0e',0);
        /* ST_CALLSITE[004D3D75]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240(param_1->field_035C,0xe,g_playSystem_00802A38->field_00E4);
        st::fn_00402982(param_1->field_035C,0);
        break;
      case CASE_2:
        if (99 < *(int *)&param_1->field_0x2a8) {
          if ((((param_1->field_02E8 == 0) && (*(int *)&param_1->field_0x2a4 == 0)) &&
              (*(int *)&param_1->field_0x2a0 == 0)) &&
             (iVar11 = st::fn_004015D7((int)param_1), iVar11 != 0)) {
            param_1->field_02EC = CASE_3;
            if (*(int *)&param_1->field_0x370 == 0) {
              /* ST_CALLSITE[004D3DF1]: CALL dword ptr [EAX + 0x90] */
              param_1->vfunc_90(3,0x361);
            }
            iVar11 = param_1->field_0259;
            if (((iVar11 == 0x6c) && (param_1->field_0251 == 3)) ||
               ((0x53 < iVar11 && (iVar11 < 0x5b)))) {
LAB_004d3f38:
              if (*(int *)&param_1->field_0x370 != 0) goto LAB_004d3f76;
            }
            else {
              puVar12 = &param_1->field_01D5;
              st::fn_004017D5(puVar12,*(char *)&param_1->field_02F0);
              iVar11 = st::machine_word_boundary_cast<int>(param_1->field_02EC + param_1->field_0241 * 4);
              st::fn_00401EBA(puVar12,*(byte *)&param_1->field_02F0,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
              /* ST_CALLSITE[004D3E82]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
              st::fn_00401064
                        ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,
                         *(uint *)(*(int *)&param_1->field_0x364 +
                                  (param_1->field_02EC + param_1->field_0241 * 4) * 8));
              /* ST_CALLSITE[004D3E9D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              st::fn_00405240
                        ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                         g_playSystem_00802A38->field_00E4);
              if (*(int *)&param_1->field_0x370 != 0) {
                st::fn_004017D5(puVar12,*(char *)&param_1->field_02F0 + -1);
                iVar11 = st::machine_word_boundary_cast<int>(param_1->field_02EC + param_1->field_0241 * 4);
                st::fn_00401EBA(puVar12,*(char *)&param_1->field_02F0 - 1,
                                   *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                                   *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
                /* ST_CALLSITE[004D3F16]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
                st::fn_00401064
                          ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,
                           *(uint *)(*(int *)&param_1->field_0x364 +
                                    (param_1->field_02EC + param_1->field_0241 * 4) * 8));
                /* ST_CALLSITE[004D3F33]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
                st::fn_00405240
                          ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                           g_playSystem_00802A38->field_00E4);
                goto LAB_004d3f38;
              }
            }
            puVar12 = (undefined4 *)&param_1->field_0x350;
            piVar6 = (int *)&param_1->field_0x308;
            local_14 = 3;
            do {
              if (*piVar6 != 0) {
                *piVar6 = 0;
                st::fn_00403D0F((STT3DSprC *)*puVar12);
              }
              puVar12 = puVar12 + 1;
              piVar6 = piVar6 + 4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
LAB_004d3f76:
          if (((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) &&
             ((iVar11 = st::fn_004015D7((int)param_1), iVar11 == 0 &&
              (g_sndUnderAttMeneg_00811798 != nullptr)))) {
            /* ST_CALLSITE[004D3FB4]: CALL 0x00402af4; direct=00402AF4 SndUnderAttMenegC::sub_00621580 */
            st::fn_00402AF4(g_sndUnderAttMeneg_00811798,param_1->field_0024,8);
          }
        }
        break;
      case CASE_3:
        if (((param_1->field_035C->field_001C & 0x4000) == 0) &&
           (*(int *)&param_1->field_0x2e0 == 0)) {
          puVar12 = &param_1->field_01D5;
          *(undefined4 *)&param_1->field_0x2e0 = 1;
          uVar13 = st::fn_004042AF(puVar12,*(char *)&param_1->field_02F0);
          /* ST_CALLSITE[004D4007]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          st::fn_00404264((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          /* ST_CALLSITE[004D4015]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
          st::fn_0040498A((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0);
          if (*(int *)&param_1->field_0x370 != 0) {
            /* ST_CALLSITE[004D402F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
            /* ST_CALLSITE[004D403F]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
            st::fn_0040498A((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1);
          }
          /* ST_CALLSITE[004D404F]: CALL dword ptr [EAX + 0x90] */
          param_1->vfunc_90(3,0x362);
          st::fn_00401EBA(param_1->field_035C,0xe,0,
                             *(int *)param_1->field_035C->field_0020->field_01F8 + -1,'\0');
          /* ST_CALLSITE[004D407D]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          st::fn_00401064(param_1->field_035C,'\x0e',0);
          /* ST_CALLSITE[004D4096]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          st::fn_00405240(param_1->field_035C,0xe,g_playSystem_00802A38->field_00E4);
          st::fn_00402982(param_1->field_035C,0);
          iVar11 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 3) + 6;
          param_1->field_02F4 = iVar11;
          /* ST_CALLSITE[004D40C3]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
          st::fn_0040498A((STT3DSprC *)puVar12,(byte)iVar11);
          uVar16 = param_1->field_02F4;
          local_EAX_3601 = st::fn_004052CC((STT3DSprC *)puVar12);
          uVar3 = st::fn_004052CC(param_1->field_035C);
          st::fn_006EA340((void *)param_1->field_0211,uVar3,local_EAX_3601,uVar16);
          param_1->field_02F0 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 4) + 7;
          iVar11 = param_1->field_0259;
          if (((iVar11 != 0x6c) || (param_1->field_0251 != 3)) &&
             ((iVar11 < 0x54 || (0x5a < iVar11)))) {
            iVar11 = param_1->field_0241;
            if (*(int *)&param_1->field_0x370 == 0) {
              if (iVar11 == 0) {
                /* ST_CALLSITE[004D427F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
                iVar11 = st::fn_00404183
                                   ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,PTR_0080678c,
                                    st::mutable_c_string("tlo_emb2"),CASE_1D);
                if (iVar11 != 0) {
                  iVar7 = 0x342;
                  goto cf_error_exit_004D428D;
                }
              }
              else if ((iVar11 == 1) &&
                      /* ST_CALLSITE[004D4259]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
                      (iVar11 = st::fn_00404183
                                          ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                                           PTR_0080678c,st::mutable_c_string("tlo_emb3"),CASE_1D), iVar11 != 0))
              {
                iVar7 = 0x343;
cf_error_exit_004D428D:
                st::fn_006A5E40
                          (iVar11,g_overwriteContext_007ED77C,
                           st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),iVar7);
              }
            }
            else if (iVar11 == 0) {
              /* ST_CALLSITE[004D41DE]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
              iVar11 = st::fn_00404183
                                 ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,PTR_0080678c,
                                  st::mutable_c_string("si_emb3"),CASE_1D);
              if (iVar11 != 0) {
                st::fn_006A5E40
                          (iVar11,g_overwriteContext_007ED77C,
                           st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x334);
              }
              /* ST_CALLSITE[004D420B]: CALL dword ptr [0x0085bde8] */
              st::external_00000080(local_7c,st::mutable_c_string("si_emb3_id%1d"),param_1->field_0024);
              /* ST_CALLSITE[004D422B]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
              iVar11 = st::fn_00404183
                                 ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                                  PTR_0080678c,local_7c,CASE_1D);
              if (iVar11 != 0) {
                iVar7 = 0x336;
                goto cf_error_exit_004D428D;
              }
            }
            else if (iVar11 == 1) {
              /* ST_CALLSITE[004D4164]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
              iVar11 = st::fn_00404183
                                 ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,PTR_0080678c,
                                  st::mutable_c_string("si_emb2"),CASE_1D);
              if (iVar11 != 0) {
                st::fn_006A5E40
                          (iVar11,g_overwriteContext_007ED77C,
                           st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x33a);
              }
              /* ST_CALLSITE[004D4191]: CALL dword ptr [0x0085bde8] */
              st::external_00000080(local_7c,st::mutable_c_string("si_emb2_id%1d"),param_1->field_0024);
              /* ST_CALLSITE[004D41B1]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
              iVar11 = st::fn_00404183
                                 ((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 - 1,
                                  PTR_0080678c,local_7c,CASE_1D);
              if (iVar11 != 0) {
                iVar7 = 0x33c;
                goto cf_error_exit_004D428D;
              }
            }
            st::fn_004017D5(puVar12,*(char *)&param_1->field_02F0);
            iVar11 = st::machine_word_boundary_cast<int>(param_1->field_02EC + param_1->field_0241 * 4);
            st::fn_00401EBA(puVar12,*(byte *)&param_1->field_02F0,
                               *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                               *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
            /* ST_CALLSITE[004D42E7]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
            st::fn_00401064((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0,uVar13);
            /* ST_CALLSITE[004D4301]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            st::fn_00405240
                      ((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0,
                       g_playSystem_00802A38->field_00E4);
            if (*(int *)&param_1->field_0x370 != 0) {
              st::fn_004017D5(puVar12,*(char *)&param_1->field_02F0 + -1);
              iVar11 = st::machine_word_boundary_cast<int>(param_1->field_02EC + param_1->field_0241 * 4);
              st::fn_00401EBA(puVar12,*(char *)&param_1->field_02F0 - 1,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar11 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar11 * 8),'\0');
              /* ST_CALLSITE[004D435E]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
              st::fn_00401064((STT3DSprC *)puVar12,*(char *)&param_1->field_02F0 + -1,uVar13);
              cVar1 = *(char *)&param_1->field_02F0;
              uVar13 = g_playSystem_00802A38->field_00E4;
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    if ((param_1->field_02EC == CASE_2) && ((param_1->field_01F1 & 0x4000) != 0)) {
      if ((*(int *)&param_1->field_0x2a8 < 100) &&
         ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
        iVar11 = st::fn_00402077(STReplaceLowByte((uint32_t)(param_1->field_0259), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                    param_1->field_0259);
        if (iVar11 == 0) {
LAB_004d43f5:
          uVar4 = 1;
        }
        else {
          iVar11 = st::fn_00402C98(*(char *)&param_1->field_0024,(int)param_1->field_0018);
          uVar4 = 0;
          if (iVar11 != 0) goto LAB_004d43f5;
        }
        *(undefined4 *)&param_1->field_0x2b8 = uVar4;
        /* ST_CALLSITE[004D440A]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        uVar2 = st::fn_004049B7(*(char *)&param_1->field_0024);
        local_14 = *(uint *)(&DAT_007e3dc0 +
                            ((uint)(byte)uVar2 + *(int *)&param_1->field_0x368 * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar13 = 0;
          iVar11 = 0;
          do {
            /* ST_CALLSITE[004D4443]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            uVar6 = st::fn_004049B7(*(char *)&param_1->field_0024);
            uVar6 = (int)(byte)uVar6;
            if (uVar13 < *(uint *)(&DAT_007e3dc0 + (uVar6 + iVar11) * 4)) {
              /* ST_CALLSITE[004D4462]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
              local_EAX_4514 = st::fn_004049B7(*(char *)&param_1->field_0024);
              local_EAX_4514 = (int)(byte)local_EAX_4514;
              uVar13 = *(uint *)(&DAT_007e3dc0 + (local_EAX_4514 + iVar11) * 4);
            }
            iVar11 = iVar11 + 3;
          } while (iVar11 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar13;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar13 = local_14 / 100;
        if ((*(int *)&param_1->field_0x2b8 == 0) &&
           (uVar13 = uVar13 << 2, g_sndUnderAttMeneg_00811798 != nullptr)) {
          /* ST_CALLSITE[004D44C8]: CALL 0x00402af4; direct=00402AF4 SndUnderAttMenegC::sub_00621580 */
          st::fn_00402AF4(g_sndUnderAttMeneg_00811798,param_1->field_0024,5);
        }
        if (*(int *)&param_1->field_0x2b0 + uVar13 <= g_playSystem_00802A38->field_00E4) {
          *(uint *)&param_1->field_0x2b0 = g_playSystem_00802A38->field_00E4;
          iVar7 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
          iVar11 = *(int *)(&DAT_008545ac + iVar7);
          local_14 = iVar11 / 100;
          if ((iVar11 != 0) && (local_14 == 0)) {
            local_14 = 1;
          }
          local_1c = *(int *)(&DAT_007e1c50 + iVar7);
          local_8 = local_1c / 100;
          if ((local_1c != 0) && (local_8 == 0)) {
            local_8 = 1;
          }
          iVar9 = *(int *)(&DAT_007e24fc + iVar7);
          local_c = iVar9 / 100;
          if ((iVar9 != 0) && (local_c == 0)) {
            local_c = 1;
          }
          iVar7 = *(int *)(&DAT_007e3160 + iVar7);
          local_10 = iVar7 / 100;
          if ((iVar7 != 0) && (local_10 == 0)) {
            local_10 = 1;
          }
          if (iVar11 <= (int)(local_14 + param_1->field_02CC)) {
            local_14 = iVar11 - param_1->field_02CC;
          }
          if (local_1c <= param_1->field_02D0 + local_8) {
            local_8 = local_1c - param_1->field_02D0;
          }
          if (iVar9 <= param_1->field_02D4 + local_c) {
            local_c = iVar9 - param_1->field_02D4;
          }
          if (iVar7 <= param_1->field_02D8 + local_10) {
            local_10 = iVar7 - param_1->field_02D8;
          }
          if ((int)local_14 < 0) {
            local_14 = 0;
          }
          if (local_8 < 0) {
            local_8 = 0;
          }
          if (local_c < 0) {
            local_c = 0;
          }
          if (local_10 < 0) {
            local_10 = 0;
          }
          *(undefined4 *)&param_1->field_0x2c8 = 1;
          *(undefined4 *)&param_1->field_0x2c4 = 1;
          *(undefined4 *)&param_1->field_0x2c0 = 1;
          *(undefined4 *)&param_1->field_0x2bc = 1;
          *(undefined4 *)&param_1->field_0x2b4 = 1;
          if ((local_14 == 0) ||
             (iVar11 = st::fn_00405DFD(*(char *)&param_1->field_0024,0), (int)local_14 <= iVar11)
             ) {
            if ((local_8 == 0) ||
               (iVar11 = st::fn_00405E5C(*(char *)&param_1->field_0024,0), local_8 <= iVar11)) {
              if ((local_c == 0) ||
                 (iVar11 = st::fn_004023AB(*(char *)&param_1->field_0024,0), local_c <= iVar11))
              {
                if ((local_10 != 0) &&
                   (iVar11 = st::fn_004049C6(*(char *)&param_1->field_0024,0), iVar11 < local_10)
                   ) {
                  *(undefined4 *)&param_1->field_0x2b4 = 0;
                  *(undefined4 *)&param_1->field_0x2c8 = 0;
                }
              }
              else {
                *(undefined4 *)&param_1->field_0x2b4 = 0;
                *(undefined4 *)&param_1->field_0x2bc = 0;
              }
            }
            else {
              *(undefined4 *)&param_1->field_0x2b4 = 0;
              *(undefined4 *)&param_1->field_0x2c0 = 0;
            }
          }
          else {
            *(undefined4 *)&param_1->field_0x2b4 = 0;
            *(undefined4 *)&param_1->field_0x2c4 = 0;
          }
          if (*(int *)&param_1->field_0x2b4 == 0) {
            if (g_sndUnderAttMeneg_00811798 != nullptr) {
              if (*(int *)&param_1->field_0x2bc == 0) {
                /* ST_CALLSITE[004D48C6]: CALL 0x00402af4; direct=00402AF4 SndUnderAttMenegC::sub_00621580 */
                st::fn_00402AF4(g_sndUnderAttMeneg_00811798,param_1->field_0024,4);
              }
              if (*(int *)&param_1->field_0x2c0 == 0) {
                /* ST_CALLSITE[004D48E1]: CALL 0x00402af4; direct=00402AF4 SndUnderAttMenegC::sub_00621580 */
                st::fn_00402AF4(g_sndUnderAttMeneg_00811798,param_1->field_0024,2);
              }
              if (*(int *)&param_1->field_0x2c4 == 0) {
                /* ST_CALLSITE[004D48FC]: CALL 0x00402af4; direct=00402AF4 SndUnderAttMenegC::sub_00621580 */
                st::fn_00402AF4(g_sndUnderAttMeneg_00811798,param_1->field_0024,3);
              }
              if (*(int *)&param_1->field_0x2c8 == 0) {
                /* ST_CALLSITE[004D4917]: CALL 0x00402af4; direct=00402AF4 SndUnderAttMenegC::sub_00621580 */
                st::fn_00402AF4(g_sndUnderAttMeneg_00811798,param_1->field_0024,7);
              }
            }
          }
          else {
            *(int *)&param_1->field_0x2a8 = *(int *)&param_1->field_0x2a8 + 1;
            if (local_14 != 0) {
              st::fn_00402AF9(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_14);
            }
            if (local_8 != 0) {
              st::fn_00402C0C(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_8);
            }
            if (local_c != 0) {
              st::fn_00402793(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_c);
            }
            if (local_10 != 0) {
              st::fn_004032F6(*(char *)&param_1->field_0024,0,(int)param_1->field_0018,local_10);
            }
            param_1->field_02CC = st::machine_word_boundary_cast<undefined4>(param_1->field_02CC + local_14);
            param_1->field_02D8 = st::machine_word_boundary_cast<undefined4>(param_1->field_02D8 + local_10);
            param_1->field_02D0 = st::machine_word_boundary_cast<undefined4>(param_1->field_02D0 + local_8);
            param_1->field_02D4 = st::machine_word_boundary_cast<undefined4>(param_1->field_02D4 + local_c);
            if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
              st::fn_00404B8D((char)param_1->field_0024);
            }
            if (99 < *(int *)&param_1->field_0x2a8) {
              *(undefined4 *)&param_1->field_0x2a8 = 100;
              st::fn_004051EB(*(char *)&param_1->field_0024,0,param_1->field_0018);
              if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
                st::fn_00402D5B(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
                /* ST_CALLSITE[004D4860]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                local_EAX_5536 = st::fn_004049B7(*(char *)&param_1->field_0024);
                local_EAX_5536 = (int)(byte)local_EAX_5536;
                if (local_EAX_5536 == 1) {
                  /* ST_CALLSITE[004D48A4]: CALL dword ptr [EAX + 0x90] */
                  param_1->vfunc_90(6,0x62);
                }
                else if (local_EAX_5536 == 2) {
                  /* ST_CALLSITE[004D4891]: CALL dword ptr [EDX + 0x90] */
                  param_1->vfunc_90(6,99);
                }
                else if (local_EAX_5536 == 3) {
                  /* ST_CALLSITE[004D487E]: CALL dword ptr [EAX + 0x90] */
                  param_1->vfunc_90(6,100);
                }
              }
            }
          }
          if (*(int *)&param_1->field_0x2a8 < 100) {
            iVar11 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
            iVar7 = *(int *)(&DAT_008545ac + iVar11) - param_1->field_02CC;
            iVar15 = *(int *)(&DAT_007e1c50 + iVar11) - param_1->field_02D0;
            iVar9 = *(int *)(&DAT_007e24fc + iVar11) - param_1->field_02D4;
            iVar11 = *(int *)(&DAT_007e3160 + iVar11) - param_1->field_02D8;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            if (iVar15 < 0) {
              iVar15 = 0;
            }
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            st::fn_0040497B(*(char *)&param_1->field_0024,0,param_1->field_0018,iVar7,iVar15,
                               iVar9,iVar11);
          }
        }
      }
      if (*(int *)&param_1->field_0x370 == 0) {
        piVar6 = (int *)&param_1->field_0x350;
        piVar14 = (int *)&param_1->field_0x308;
        local_14 = 3;
        do {
          if (*piVar14 == 0) {
            if (((((uint)piVar14[1] <= g_playSystem_00802A38->field_00E4) &&
                 (*(int *)&param_1->field_0x2b4 != 0)) && (*(int *)&param_1->field_0x2a8 < 100)) &&
               ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
              /* ST_CALLSITE[004D4AA9]: CALL dword ptr [EAX + 0x90] */
              param_1->vfunc_90(3,0x363);
              *piVar14 = 1;
              uVar13 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
              param_1->field_001C = uVar13;
              piVar14[3] = (uVar13 >> 0x10) % 3 + 1;
              uVar13 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
              param_1->field_001C = uVar13;
              uVar13 = (uVar13 >> 0x10) %
                       *(uint *)(&DAT_00797748 + *(int *)&param_1->field_0x368 * 0x44);
              piVar14[2] = uVar13;
              iVar11 = *(int *)&param_1->field_0x368 * 0x44 + uVar13 * 8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_004023C4((void *)*piVar6,
                                 (param_1->field_0300 - *(int *)(&DAT_0079774c + iVar11)) + 0x10,
                                 (param_1->field_0304 - *(int *)(&DAT_00797750 + iVar11)) + 0x15);
              st::fn_00401EBA((void *)*piVar6,0xe,0,0x13,'\0');
              /* ST_CALLSITE[004D4B5A]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
              st::fn_00401064((STT3DSprC *)*piVar6,'\x0e',0);
              /* ST_CALLSITE[004D4B70]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              st::fn_00405240((STT3DSprC *)*piVar6,0xe,g_playSystem_00802A38->field_00E4);
              st::fn_00402982((void *)*piVar6,0);
            }
          }
          else {
            iVar11 = *(int *)(*piVar6 + 0x20);
            if (*(int *)(iVar11 + 0x210) < *(int *)(iVar11 + 0x20c)) {
              if (*(int *)(iVar11 + 0x210) == *(int *)(iVar11 + 0x208)) {
                /* ST_CALLSITE[004D4A45]: CALL dword ptr [EAX + 0x90] */
                param_1->vfunc_90(3,0x363);
              }
            }
            else {
              iVar11 = piVar14[3];
              piVar14[3] = iVar11 + -1;
              if (iVar11 + -1 == 0) {
                *piVar14 = 0;
                uVar13 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
                param_1->field_001C = uVar13;
                piVar14[1] = (uVar13 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
                st::fn_00403D0F((STT3DSprC *)*piVar6);
              }
            }
          }
          st::fn_004033AA((void *)*piVar6,g_playSystem_00802A38->field_00E4);
          piVar6 = piVar6 + 1;
          piVar14 = piVar14 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    st::fn_004033AA(param_1->field_035C,g_playSystem_00802A38->field_00E4);
    if (*(int *)&param_1->field_0x2a0 == 0) {
      /* ST_CALLSITE[004D4D49]: CALL dword ptr [EDX + 0xd8] */
      param_1->vfunc_D8();
      goto LAB_004d4d4f;
    }
  }
  puVar12 = &param_1->field_01D5;
  iVar11 = st::fn_004042AF(puVar12,'\x06');
  if ((iVar11 < *(int *)&param_1->field_01F5->field_0xec) ||
     (iVar11 = st::fn_004042AF(puVar12,'\a'), iVar11 < *(int *)&param_1->field_01F5->field_0x110)
     ) {
    /* ST_CALLSITE[004D4C2F]: CALL dword ptr [EAX + 0xd8] */
    param_1->vfunc_D8();
    iVar11 = st::fn_004042AF(puVar12,'\x06');
    if (iVar11 == 0x11) {
      /* ST_CALLSITE[004D4C4B]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)puVar12,0x10);
      /* ST_CALLSITE[004D4C54]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)puVar12,0xe);
      /* ST_CALLSITE[004D4C5D]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)puVar12,0xd);
      /* ST_CALLSITE[004D4C66]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)puVar12,0xc);
      if ((*(int *)&param_1->field_0x370 == 0) ||
         /* ST_CALLSITE[004D4C7E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
         (st::fn_00404264((STT3DSprC *)puVar12,*(byte *)&param_1->field_02F0),
         *(int *)&param_1->field_0x370 == 0)) {
        puVar12 = (undefined4 *)&param_1->field_0x350;
        iVar11 = 3;
        do {
          /* ST_CALLSITE[004D4C9C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          st::fn_00404264((STT3DSprC *)*puVar12,0xe);
          puVar12 = puVar12 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar11 = 0;
      /* ST_CALLSITE[004D4CB3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_6643 = st::fn_004049B7(*(char *)&param_1->field_0024);
      local_EAX_6643 = (int)(byte)local_EAX_6643;
      st::fn_00404A7F((int)param_1->field_0041,(int)param_1->field_0043,(int)param_1->field_0045,
                         param_1->field_0259,(int *)param_1,0xffffffff,0xffffffff,local_EAX_6643,
                         iVar11);
    }
    else {
      iVar11 = st::fn_004042AF(puVar12,'\x06');
      if (iVar11 == 0x23) {
        if (param_1->field_002C == 1) {
          text = "expl_bbt1";
        }
        else {
          text = "expl_bbt0";
        }
        /* ST_CALLSITE[004D4D19]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar11 = st::fn_00404183((STT3DSprC *)puVar12,7,PTR_00806764,text,CASE_1D);
        if (iVar11 != 0) {
          return 0xffff;
        }
        /* ST_CALLSITE[004D4D3E]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240((STT3DSprC *)puVar12,7,g_playSystem_00802A38->field_00E4);
      }
    }
  }
  else {
    local_28 = param_1->field_0008;
    local_34 = param_1->field_000C->systemId;
    local_30 = 0;
    local_2c = 10;
    st::fn_006E60A0(param_1,local_3c);
  }
LAB_004d4d4f:
  st::fn_004042DC((int)param_1);
  if ((param_1->field_0338 != 0) &&
     ((uint)(param_1->field_0344 + param_1->field_0340) <= g_playSystem_00802A38->field_00E4)) {
    param_1->field_0338 = 0;
  }
  return 0;
}

// 004D55B0 TLOEmbryoTy::GetMessage
#line 4 "decomp/ST.exe/functions/004D55B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404E3F|004D55B0; family_names=TLOEmbryoTy::GetMessage; ret4=13;
   direct_offsets={10:1,14:6,18:1,1c:2} */

int __thiscall st::fn_004D55B0(TLOEmbryoTy *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  bool bVar4;
  TLOEmbryoTy *this_00;
  int local_EAX_39;
  int iVar6;
  undefined4 uVar7;
  int uVar8;
  uint uVar9;
  int iVar5;
  int local_EAX_862;
  int iVar12;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  TLOEmbryoTyVTable_at_1D5 **ppTVar14;
  int iVar15;
  STT3DSprC **ppSVar16;
  char *pcVar17;
  char cVar18;
  undefined4 auStack_1c0 [17];
  undefined4 auStack_17c [17];
  int aiStack_138 [17];
  int aiStack_f4 [17];
  CHAR local_b0 [64];
  InternalExceptionFrame local_70;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  TLOEmbryoTy *local_c;
  int *local_8;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  local_EAX_39 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x4e5,0,local_EAX_39,
                                st::mutable_c_string("%s"),"TLOEmbryoTy::GetMessage error");
    if (iVar12 == 0) {
      st::fn_006A5E40(local_EAX_39,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x4e6);
      return local_EAX_39;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[004D55F2]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  st::fn_00404F07((STSprGameObjC *)local_c,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 < MESS_SHARED_0129) {
      if (SVar1 == MESS_HITKILL) {
        dVar2 = (message->arg0).u32;
        if (this_00->field_02A0 != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_18 = this_00->field_0008;
        this_00->field_02A0 = 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_24 = *(undefined4 *)(this_00->field_000C + 0x14);
        local_20 = 0;
        local_1c = 10;
        st::fn_006E60A0(this_00,local_2c);
        this_00->field_0348 = g_playSystem_00802A38->field_00E4;
        this_00->field_034C = *(undefined4 *)(dVar2 + 8);
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (SVar1 == MESS_TORPHIT) {
        if (this_00->field_02EC == 3) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        if (this_00->field_02DC != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_8 = st::pointer_boundary_cast<int *>((message->arg0).ptr);
        iVar13 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
        iVar11 = *local_8;
        if (this_00->field_0338 != 0) {
          iVar11 = (this_00->field_033C * iVar11) / 100;
        }
        iVar11 = (this_00->field_02A8 * *(int *)(&DAT_007e417c + iVar13)) / 100 - iVar11;
        if (iVar11 < 1) {
          if (this_00->field_02A0 == 0) {
            /* ST_CALLSITE[004D5B9B]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264(this_00->field_035C,0xe);
            st::fn_00403D0F(this_00->field_035C);
            ppTVar14 = &this_00->vtable_at_1d5;
            if (this_00->field_002C == 1) {
              pcVar17 = "expl_bt1";
            }
            else {
              pcVar17 = "expl_bt0";
            }
            /* ST_CALLSITE[004D5BD9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar11 = st::fn_00404183((STT3DSprC *)ppTVar14,6,PTR_00806774,pcVar17,CASE_1D);
            if (iVar11 != 0) {
              return 0xffff;
            }
            st::fn_004022D4(ppTVar14,'\x06');
            /* ST_CALLSITE[004D5C09]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
            st::fn_00405240((STT3DSprC *)ppTVar14,6,g_playSystem_00802A38->field_00E4);
          }
          this_00->field_02A8 = 0;
          this_00->field_02A0 = 1;
        }
        else {
          iVar11 = (iVar11 * 100) / *(int *)(&DAT_007e417c + iVar13);
          this_00->field_02A8 = iVar11;
          this_00->field_02CC = (iVar11 * *(int *)(&DAT_008545ac + iVar13)) / 100;
          this_00->field_02D0 = (*(int *)(&DAT_007e1c50 + iVar13) * this_00->field_02A8) / 100;
          this_00->field_02D4 = (*(int *)(&DAT_007e24fc + iVar13) * this_00->field_02A8) / 100;
          iVar11 = (*(int *)(&DAT_007e3160 + iVar13) * this_00->field_02A8) / 100;
          this_00->field_02D8 = iVar11;
          iVar6 = *(int *)(&DAT_008545ac + iVar13) - this_00->field_02CC;
          iVar10 = *(int *)(&DAT_007e1c50 + iVar13) - this_00->field_02D0;
          iVar15 = *(int *)(&DAT_007e24fc + iVar13) - this_00->field_02D4;
          iVar11 = *(int *)(&DAT_007e3160 + iVar13) - iVar11;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          st::fn_0040497B(*(char *)&this_00->field_0024,0,(int *)this_00->field_0018,iVar6,iVar10
                             ,iVar15,iVar11);
        }
        this_00->field_0348 = g_playSystem_00802A38->field_00E4;
        this_00->field_034C = local_8[2];
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (SVar1 != MESS_SHARED_0122) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      piVar12 = st::pointer_boundary_cast<int *>((message->arg0).ptr);
      if (*piVar12 != this_00->field_0024) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      this_00->field_0338 = 1;
      this_00->field_033C = piVar12[2];
      this_00->field_0340 = g_playSystem_00802A38->field_00E4;
      this_00->field_0344 = piVar12[1];
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_TLOEMBRYOTY_4401) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar18 = *(char *)((message->arg0).u32 + 0xe);
    if (cVar18 != '\t') {
      if (cVar18 != '\x17') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar17 = *(char **)((message->arg0).u32 + 0x17);
      if (this_00->field_02A4 != 0) {
        if (*pcVar17 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        this_00->field_02A4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar17 != '\x1b') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (((this_00->field_02EC == 2) && (0 < this_00->field_02A8)) && (this_00->field_02A8 < 0x65))
      {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      this_00->field_02A4 = 1;
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (((this_00->field_02EC == 2) && (0 < this_00->field_02A8)) && (this_00->field_02A8 < 0x65)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    iVar11 = 3;
    this_00->field_02EC = 3;
    this_00->field_02E8 = 1;
    if (this_00->field_0370 == 0) {
      /* ST_CALLSITE[004D5EBE]: CALL dword ptr [EDX + 0x90] */
      this_00->vfunc_90(3,0x361);
    }
    iVar13 = this_00->field_0259;
    if (((iVar13 != 0x6c) || (this_00->field_0251 != 3)) && ((iVar13 < 0x54 || (0x5a < iVar13)))) {
      ppTVar14 = &this_00->vtable_at_1d5;
      st::fn_004017D5(ppTVar14,*(char *)&this_00->field_02F0);
      iVar13 = st::machine_word_boundary_cast<int>(this_00->field_02EC + this_00->field_0241 * 4);
      st::fn_00401EBA(ppTVar14,*(byte *)&this_00->field_02F0,
                         *(int *)(this_00->field_0364 + iVar13 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar13 * 8),'\0');
      /* ST_CALLSITE[004D5F4F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064
                ((STT3DSprC *)ppTVar14,*(char *)&this_00->field_02F0,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      /* ST_CALLSITE[004D5F6A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240
                ((STT3DSprC *)ppTVar14,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      if (this_00->field_0370 == 0) goto LAB_004d600f;
      st::fn_004017D5(ppTVar14,*(char *)&this_00->field_02F0 + -1);
      iVar13 = st::machine_word_boundary_cast<int>(this_00->field_02EC + this_00->field_0241 * 4);
      st::fn_00401EBA(ppTVar14,*(char *)&this_00->field_02F0 - 1,
                         *(int *)(this_00->field_0364 + iVar13 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar13 * 8),'\0');
      /* ST_CALLSITE[004D5FE3]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064
                ((STT3DSprC *)ppTVar14,*(char *)&this_00->field_02F0 + -1,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      /* ST_CALLSITE[004D6000]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240
                ((STT3DSprC *)ppTVar14,*(char *)&this_00->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
    }
    if (this_00->field_0370 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    ppSVar16 = &this_00->field_0350;
    piVar12 = (int *)&this_00->field_0x308;
    do {
      if (*piVar12 != 0) {
        *piVar12 = 0;
        st::fn_00403D0F(*ppSVar16);
      }
      ppSVar16 = ppSVar16 + 1;
      piVar12 = piVar12 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    st::fn_0040362A((int)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      st::fn_00404D86((TLOBaseTy *)this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_ID_NONE) {
      if (SVar1 != MESS_ID_CREATE) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      /* ST_CALLSITE[004D562A]: CALL 0x00405ed9; direct=00405ED9 TLOEmbryoTy::Create */
      st::fn_00405ED9(this_00,st::pointer_boundary_cast<RecoveredRecord_TLOEmbryoTy_004D11D0 *>((message->arg0).ptr));
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    st::fn_004028EC((TLOBaseTy *)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (SVar1 != MESS_SHARED_0108) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  iVar13 = 0;
  iVar11 = 0;
  do {
    piVar12 = (int *)(this_00->field_01F5 + iVar11);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    auStack_17c[iVar13] = *(undefined4 *)(this_00->field_01F5 + 0x1c + iVar11);
    aiStack_f4[iVar13] = piVar12[8];
    if (*piVar12 != 0) {
      cVar18 = (char)iVar13;
      iVar6 = st::fn_004042AF(&this_00->vtable_at_1d5,cVar18);
      aiStack_138[iVar13] = iVar6;
      iVar6 = st::fn_004042AF(&this_00->vtable_at_1d5,cVar18);
      uVar7 = st::fn_00405A29(&this_00->vtable_at_1d5,cVar18,iVar6);
      auStack_1c0[iVar13] = uVar7;
    }
    iVar11 = iVar11 + 0x24;
    iVar13 = iVar13 + 1;
  } while (iVar11 < 0x264);
  if (this_00->field_02EC == 0) {
    /* ST_CALLSITE[004D56F9]: CALL 0x00404061; direct=00404061 TLOEmbryoTy::sub_004D10A0 */
    st::fn_00404061(this_00,1);
    /* ST_CALLSITE[004D571A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240
              ((STT3DSprC *)&this_00->vtable_at_1d5,*(byte *)&this_00->field_02F0,
               g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D5737]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240
              ((STT3DSprC *)&this_00->vtable_at_1d5,*(char *)&this_00->field_02F0 - 1,
               g_playSystem_00802A38->field_00E4);
  }
  if (this_00->field_02DC == 0) {
    if ((this_00->field_01F1 & 0x4000) == 0) goto LAB_004d59e7;
    uVar8 = st::fn_0040581C();
    uVar9 = uVar8 & 0x80000001;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
    }
    /* ST_CALLSITE[004D578B]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(local_b0,st::mutable_c_string("%s%1i"),(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar9);
    ppTVar14 = &this_00->vtable_at_1d5;
    /* ST_CALLSITE[004D57AD]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar11 = st::fn_00404183((STT3DSprC *)ppTVar14,0xe,PTR_0080678c,local_b0,CASE_1D);
    if (iVar11 != 0) {
      st::fn_006A5E40
                (iVar11,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                 0x43a);
    }
    st::fn_00401EBA(ppTVar14,0xe,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
    /* ST_CALLSITE[004D57F9]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064
              ((STT3DSprC *)ppTVar14,'\x0e',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
    /* ST_CALLSITE[004D580F]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)ppTVar14,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D582E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar11 = st::fn_00404183
                       ((STT3DSprC *)ppTVar14,0x10,PTR_0080678c,
                        (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],CASE_1D);
    if (iVar11 != 0) {
      iVar13 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar5 = st::fn_0040581C();
    ppTVar14 = &this_00->vtable_at_1d5;
    uVar9 = *(uint *)(PTR_DAT_007b5170 +
                     (iVar5 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
    st::fn_00401EBA(ppTVar14,0xe,uVar9,uVar9,'\0');
    /* ST_CALLSITE[004D588C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)ppTVar14,'\x0e',uVar9);
    /* ST_CALLSITE[004D58A2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)ppTVar14,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (**(int **)(this_00->field_01F5 + 0x1d4) < (int)uVar9) {
      uVar9 = 0;
    }
    st::fn_00401EBA(ppTVar14,0xd,uVar9,uVar9,'\0');
    /* ST_CALLSITE[004D58CB]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)ppTVar14,'\r',uVar9);
    /* ST_CALLSITE[004D58E1]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)ppTVar14,0xd,g_playSystem_00802A38->field_00E4);
    if (*(int *)(PTR_PTR_007bb198 + (this_00->field_0368 * 3 + this_00->field_036C) * 0xc + 8) != 0)
    {
      local_EAX_862 = st::fn_0040581C();
      uVar9 = *(uint *)(PTR_DAT_007b8310 +
                       (local_EAX_862 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
      st::fn_00401EBA(ppTVar14,0xc,uVar9,uVar9,'\0');
      /* ST_CALLSITE[004D5941]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064((STT3DSprC *)ppTVar14,'\f',uVar9);
      /* ST_CALLSITE[004D5957]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)ppTVar14,0xc,g_playSystem_00802A38->field_00E4);
    }
    /* ST_CALLSITE[004D5977]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar11 = st::fn_00404183
                       ((STT3DSprC *)ppTVar14,0x10,PTR_0080678c,
                        (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],CASE_1D);
    if (iVar11 != 0) {
      iVar13 = 0x459;
LAB_004d5985:
      st::fn_006A5E40
                (iVar11,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),
                 iVar13);
    }
  }
  ppTVar14 = &this_00->vtable_at_1d5;
  st::fn_00401EBA(ppTVar14,0x10,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                     *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
  /* ST_CALLSITE[004D59C3]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064
            ((STT3DSprC *)ppTVar14,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
  /* ST_CALLSITE[004D59D9]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240((STT3DSprC *)ppTVar14,0x10,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[004D59E2]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
  st::fn_00403AFD((STT3DSprC *)ppTVar14,'\x10');
LAB_004d59e7:
  iVar13 = 0;
  iVar11 = 0;
  do {
    *(undefined4 *)(iVar11 + 0x1c + this_00->field_01F5) = auStack_17c[iVar13];
    *(int *)(iVar11 + 0x20 + this_00->field_01F5) = aiStack_f4[iVar13];
    iVar6 = *(int *)(iVar11 + this_00->field_01F5);
    if (iVar6 != 0) {
      *(undefined4 *)(*(int *)(iVar11 + this_00->field_01F5 + 4) + aiStack_138[iVar13] * 4) =
           *(undefined4 *)(aiStack_138[iVar13] * 4 + 0x31 + iVar6);
      uVar7 = auStack_1c0[iVar13];
      iVar6 = st::fn_004042AF(&this_00->vtable_at_1d5,(char)iVar13);
      st::fn_00405141(&this_00->vtable_at_1d5,(char)iVar13,iVar6,uVar7);
    }
    iVar11 = iVar11 + 0x24;
    iVar13 = iVar13 + 1;
  } while (iVar11 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

// 004D67B0 TLOBaseTy::SetActivity
#line 4 "decomp/ST.exe/functions/004D67B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOBaseTy::SetActivity */

void __thiscall st::fn_004D67B0(TLOBaseTy *this,int param_1)

{
  dword dVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;

  local_8 = this;
  /* ST_CALLSITE[004D67BC]: CALL dword ptr [EAX + 0xf8] */
  dVar2 = this->slot_F8();
  if (dVar2 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      st::fn_00404E8A(local_8,param_1);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x52d,0,errorCode,
                               st::mutable_c_string("%s"),"TLOBaseTy::SetActivity");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_embryo.cpp"),0x52e);
  }
  return;
}

