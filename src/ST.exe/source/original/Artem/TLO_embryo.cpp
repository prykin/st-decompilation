#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_embryo.cpp

// 004D11D0 TLOEmbryoTy::Create
#line 1 "decomp/ST.exe/functions/004D11D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::Create */

int __thiscall st::fn_004D11D0(TLOEmbryoTy *this,RecoveredRecord_TLOEmbryoTy_004D11D0 *param_1)

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
  iVar4 = st::fn_0072D7F0(local_cc.jumpBuffer,0);
  this_00 = local_3c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_cc.previous;
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_embryo.cpp",0x166,0,iVar4,
                                "%s","Int TLOEmbryoTy::Create(LPtrTy _param) error !");
    if (iVar13 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x167);
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
  STField<undefined1>(puVar15,2) = pRVar12->field_0x2;
  local_3c->field_0368 = local_3c->field_0259 + -0x32;
  local_EAX_120 = st::fn_004049B7(*(char *)&local_3c->field_0024);
  local_EAX_120 = (int)(byte)local_EAX_120;
  this_00->field_036C = local_EAX_120 + -1;
  bVar3 = st::fn_004049B7(*(char *)&this_00->field_0024);
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
  st::fn_00402B5D(this_00,0);
  iVar4 = st::fn_0040295F(this_00,*(short *)&this_00->field_025D,*(short *)&this_00->field_0261,
                             this_00->field_0265,1);
  if (iVar4 != 0) {
    st::fn_006A5E40
              (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x66);
  }
  st::fn_0040278E(this_00,*(short *)&this_00->field_025D,*(short *)&this_00->field_0261,
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
          st::fn_00404CCD(sVar17,sVar18,this_00->field_0265);
          sVar1 = this_00->field_0265;
          if (((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) || (sVar18 < 0)) ||
              ((g_worldGrid.sizeY <= sVar18 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
            this_01 = nullptr;
          }
          else {
            this_01 = STGridAt3D(g_worldGrid, sVar17, sVar18, sVar1).objects[1];
          }
          if ((this_01 != nullptr) && (this_01->value_20 == 0xbe)) {
            st::fn_00404C3C(this_01,(char)this_00->field_0024);
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
    g_array_007FA170 = st::fn_006AE290(nullptr,10,4,10);
  }
  local_2c = this_00;
  st::fn_006AE1C0(g_array_007FA170,&local_2c);
  iVar4 = this_00->field_0259;
  if (iVar4 == 100) {
    if (g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6 == nullptr) {
      pDVar5 = st::fn_006AE290(nullptr,10,4,10);
      g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6 = pDVar5;
    }
    element = &local_8;
    local_8 = this_00;
    pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1968_0x9d6;
cf_common_join_004D1763:
    st::fn_006AE1C0(pDVar5,element);
  }
  else {
    if (iVar4 == 0x4d) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2 == nullptr) {
        pDVar5 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2 = pDVar5;
      }
      element = &local_40;
      local_40 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1971_0x9e2;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x43) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee == nullptr) {
        pDVar5 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee = pDVar5;
      }
      element = &local_44;
      local_44 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1974_0x9ee;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x73) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2 == nullptr) {
        pDVar5 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2 = pDVar5;
      }
      element = &local_30;
      local_30 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1975_0x9f2;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x3a) {
      if (g_array_007FA16C == nullptr) {
        g_array_007FA16C = st::fn_006AE290(nullptr,10,4,10);
      }
      element = &local_48;
      local_48 = this_00;
      pDVar5 = g_array_007FA16C;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x65) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6 == nullptr) {
        pDVar5 = st::fn_006AE290(nullptr,10,4,10);
        g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6 = pDVar5;
      }
      element = &local_34;
      local_34 = this_00;
      pDVar5 = g_packedRecords_A62x8[this_00->field_0024].field1972_0x9e6;
      goto cf_common_join_004D1763;
    }
    if (iVar4 == 0x3b) {
      if (g_packedRecords_A62x8[this_00->field_0024].field1973_0x9ea == nullptr) {
        pDVar5 = st::fn_006AE290(nullptr,10,4,10);
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
      local_28 = st::fn_006AAC70(0x44);
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
      st::fn_00404CA5
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_012B));
      pAVar6 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
      if (pAVar6 == nullptr) {
        pSVar7 = nullptr;
      }
      else {
        pSVar7 = (STT3DSprC *)st::fn_00401316(pAVar6);
      }
      this_00->field_035C = pSVar7;
      iVar4 = st::fn_0040537B(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                              nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar4 != 0) {
        st::fn_006A5E40
                  (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x13d);
      }
      if (this_00->field_002C == 1) {
        uVar9 = st::fn_004052CC(this_00->field_035C);
        st::fn_006E9210((void *)this_00->field_0211,uVar9);
      }
      memset(local_28, 0, 0x44); /* compiler bulk-zero initialization */
      local_28[0xe] = DAT_00806764;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      st::fn_00404CA5
                (this_00->field_035C,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_0133));
      uVar9 = this_00->field_02F4;
      iVar4 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
      local_EAX_1989 = st::fn_004052CC(this_00->field_035C);
      st::fn_006EA340((void *)this_00->field_0211,local_EAX_1989,iVar4,uVar9);
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
          pAVar6 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
          if (pAVar6 == nullptr) {
            pSVar7 = nullptr;
          }
          else {
            pSVar7 = (STT3DSprC *)st::fn_00401316(pAVar6);
          }
          *ppSVar16 = pSVar7;
          iVar4 = st::fn_0040537B(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                                  nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
          if (iVar4 != 0) {
            st::fn_006A5E40
                      (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp"
                       ,0x152);
          }
          uVar19 = uVar9;
          iVar4 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
          uVar10 = st::fn_004052CC(*ppSVar16);
          st::fn_006EA340((void *)this_00->field_0211,uVar10,iVar4,uVar19);
          st::fn_00404CA5
                    (*ppSVar16,(int *)&local_28,
                     (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + (int)local_8->field_0000)
                    );
          uVar9 = uVar9 - 1;
          local_8 = (TLOEmbryoTy *)&local_8->field_0x4;
          ppSVar16 = ppSVar16 + 1;
        } while (8 < (int)uVar9);
      }
      st::fn_006AB060(&local_28);
      st::fn_0040551F
                ((STAllPlayersC *)this_00,(undefined4 *)(&param_1->field_0x0 + param_1->field_0123));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      st::fn_004041F6((int *)this_00,extraout_EDX,CONCAT22(extraout_var,this_00->field_0032));
    }
    else {
      iVar4 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_embryo.cpp",0x160,0,0,"%s"
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
  pAVar6 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
  if (pAVar6 == nullptr) {
    pSVar7 = nullptr;
  }
  else {
    pSVar7 = (STT3DSprC *)st::fn_00401316(pAVar6);
  }
  this_00->field_035C = pSVar7;
  iVar4 = st::fn_0040537B(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                          nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
  if (iVar4 != 0) {
    st::fn_006A5E40
              (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",200);
  }
  if (this_00->field_0241 == 0) {
    iVar4 = st::fn_00404183(this_00->field_035C,0xe,DAT_00806764,"tlo_emb5",0x1d);
    if (iVar4 != 0) {
      iVar13 = 0xca;
LAB_004d1bda:
      st::fn_006A5E40
                (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar13);
    }
  }
  else if (this_00->field_0241 == 1) {
    uVar9 = st::fn_004052CC(this_00->field_035C);
    st::fn_006E9210((void *)this_00->field_0211,uVar9);
    iVar4 = st::fn_00404183
                      (this_00->field_035C,0xe,DAT_00806764,"tlo_emb5_big",0x1d);
    if (iVar4 != 0) {
      iVar13 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  puVar15 = (byte *)(&this_00->field_01D5);
  uVar9 = (-(uint)(this_00->field_0370 != 0) & 4) + 7;
  this_00->field_02F4 = uVar9;
  iVar4 = st::fn_004052CC((STT3DSprC *)puVar15);
  uVar8 = st::fn_004052CC(this_00->field_035C);
  st::fn_006EA340((void *)this_00->field_0211,uVar8,iVar4,uVar9);
  st::fn_004045D9
            (this_00->field_035C,(float)this_00->field_01F9,(float)this_00->field_01FD,
             (float)this_00->field_0201);
  uVar4 = st::fn_0040581C();
  uVar9 = uVar4 & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  st::external_00000080(local_88,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar9);
  iVar4 = st::fn_00404183((STT3DSprC *)puVar15,0xe,DAT_0080678c,local_88,0x1d);
  if (iVar4 != 0) {
    st::fn_006A5E40
              (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0xd4);
  }
  iVar4 = this_00->field_0370;
  if (iVar4 == 0) {
LAB_004d1fef:
    if (this_00->field_0241 == 0) {
      iVar4 = st::fn_00404183
                        ((STT3DSprC *)puVar15,(-(iVar4 != 0) & 3U) + 6,DAT_0080678c,
                         "tlo_emb2",0x1d);
      if (iVar4 != 0) {
        iVar13 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((this_00->field_0241 == 1) &&
            (iVar4 = st::fn_00404183
                               ((STT3DSprC *)puVar15,(-(iVar4 != 0) & 3U) + 6,DAT_0080678c,
                                "tlo_emb3",0x1d), iVar4 != 0)) {
      iVar13 = 0x102;
LAB_004d204d:
      st::fn_006A5E40
                (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar13);
    }
    this_00->field_02EC = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0090)(3,0x360);
    this_00->field_02F0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
    iVar4 = this_00->field_02EC + this_00->field_0241 * 4;
    st::fn_00401EBA(puVar15,*(byte *)&this_00->field_02F0,
                       *(int *)(this_00->field_0364 + iVar4 * 8),
                       *(int *)(this_00->field_0364 + 4 + iVar4 * 8),'\0');
    st::fn_00401064
              ((STT3DSprC *)puVar15,*(char *)&this_00->field_02F0,
               *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8));
    st::fn_00405240
              ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,g_playSystem_00802A38->field_00E4);
    local_8 = (TLOEmbryoTy *)&DAT_0000000b;
    ppSVar16 = &this_00->field_0350;
    do {
      pAVar6 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
      if (pAVar6 == nullptr) {
        pSVar7 = nullptr;
      }
      else {
        pSVar7 = (STT3DSprC *)st::fn_00401316(pAVar6);
      }
      *ppSVar16 = pSVar7;
      iVar4 = st::fn_0040537B(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,
                              nullptr,this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar4 != 0) {
        st::fn_006A5E40
                  (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10d);
      }
      iVar4 = st::fn_00404183(*ppSVar16,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,0x1d);
      if (iVar4 != 0) {
        st::fn_006A5E40
                  (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                   0x10e);
      }
      pTVar20 = local_8;
      iVar4 = st::fn_004052CC((STT3DSprC *)puVar15);
      local_EAX_4068 = st::fn_004052CC(*ppSVar16);
      st::fn_006EA340((void *)this_00->field_0211,local_EAX_4068,iVar4,(uint)pTVar20);
      st::fn_004045D9
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
        iVar4 = st::fn_00404183
                          ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,DAT_0080678c,
                           "si_emb6",0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xef;
LAB_004d1f0b:
          st::fn_006A5E40
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar13);
        }
      }
      else {
        iVar4 = st::fn_00404183
                          ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,DAT_0080678c,
                           "si_emb5",0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar4 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      this_00->field_02F4 = iVar4;
      st::fn_0040498A((STT3DSprC *)puVar15,(byte)iVar4);
      uVar9 = this_00->field_02F4;
      iVar4 = st::fn_004052CC((STT3DSprC *)puVar15);
      local_EAX_3458 = st::fn_004052CC(this_00->field_035C);
      st::fn_006EA340((void *)this_00->field_0211,local_EAX_3458,iVar4,uVar9);
      st::fn_00405240
                ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0090)(3,0x362);
      st::fn_00401EBA(this_00->field_035C,0xe,0,
                         *(int *)this_00->field_035C->field_0020->field_01F8 + -1,'\0');
      st::fn_00401064(this_00->field_035C,'\x0e',0);
      st::fn_00405240(this_00->field_035C,0xe,g_playSystem_00802A38->field_00E4);
      st::fn_00402982(this_00->field_035C,0);
      st::fn_00402A90((STT3DSprC *)puVar15);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar11 = extraout_EDX_01;
    }
    else {
      if (this_00->field_0241 == 0) {
        iVar4 = st::fn_00404183((STT3DSprC *)puVar15,9,DAT_0080678c,"si_emb1",0x1d);
        if (iVar4 != 0) {
          st::fn_006A5E40
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xd9);
        }
        st::external_00000080(local_88,"si_emb1_id%1d",this_00->field_0024);
        iVar4 = st::fn_00404183
                          ((STT3DSprC *)puVar15,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xdb;
LAB_004d1df8:
          st::fn_006A5E40
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     iVar13);
        }
      }
      else if (this_00->field_0241 == 1) {
        iVar4 = st::fn_00404183((STT3DSprC *)puVar15,9,DAT_0080678c,"si_emb4",0x1d);
        if (iVar4 != 0) {
          st::fn_006A5E40
                    (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                     0xdf);
        }
        st::external_00000080(local_88,"si_emb4_id%1d",this_00->field_0024);
        iVar4 = st::fn_00404183
                          ((STT3DSprC *)puVar15,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar4 != 0) {
          iVar13 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      this_00->field_02EC = 0;
      this_00->field_02F0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      st::fn_00404061(this_00,0);
      st::fn_00405240
                ((STT3DSprC *)puVar15,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      st::fn_00405240
                ((STT3DSprC *)puVar15,*(char *)&this_00->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar15)();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar11 = extraout_EDX_00;
    }
  }
  st::fn_00404BC9((int *)this_00,uVar11,(uint)(this_00->field_023D == 0));
  this_00->field_02D8 = 0;
  this_00->field_02D4 = 0;
  this_00->field_02D0 = 0;
  this_00->field_02CC = 0;
  iVar4 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
  st::fn_0040497B(*(char *)&this_00->field_0024,0,(int *)this_00->field_0018,
                     *(int *)(&DAT_008545ac + iVar4),*(int *)(&DAT_007e1c50 + iVar4),
                     *(int *)(&DAT_007e24fc + iVar4),*(int *)(&DAT_007e3160 + iVar4));
  iVar4 = st::fn_00402077(STReplaceLowByte((uint32_t)(this_00->field_0259), (uint8_t)(*(undefined1 *)&this_00->field_0024)),this_00->field_0259);
  if (iVar4 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (*(code *)this_00->field_0000->field_002C)();
    st::fn_00405E39(STReplaceLowByte((uint32_t)(iVar4), (uint8_t)(*(undefined1 *)&this_00->field_0024)),iVar4);
  }
  st::fn_004023A1(this_00,(undefined *)0x5);
LAB_004d22a1:
  st::fn_00401997((AnonShape_0041F630_B1BEE81C *)this_00);
  g_currentExceptionFrame = local_cc.previous;
  return 0;
}

// 004D32C0 FUN_004d32c0
#line 1 "decomp/ST.exe/functions/004D32C0/decomp.c"
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
  dword dVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined2 uVar5;
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
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  char *text;
  uint uVar15;
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

  iVar10 = 0;
  if (*(int *)&param_1->field_0x2a0 == 0) {
    this = param_1->field_035C;
    if ((this->field_001C & 0x4000) != 0) {
      iVar7 = this->field_0020->field_0210;
      if (iVar7 == 0x15) {
        if (((param_1->field_01F1 & 0x4000) == 0) && (param_1->field_02EC == CASE_2)) {
          puVar11 = &param_1->field_01D5;
          st::fn_00401EBA(puVar11,0xe,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4)
                             ,*(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          st::fn_00401064
                    ((STT3DSprC *)puVar11,'\x0e',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          st::fn_00405240((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
          st::fn_00405CA9((STT3DSprC *)puVar11,DAT_008073cc);
          iVar10 = st::fn_00404183
                             ((STT3DSprC *)puVar11,0x10,DAT_0080678c,
                              (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],0x1d);
          if (iVar10 != 0) {
            st::fn_006A5E40
                      (iVar10,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x25e);
          }
          st::fn_00401EBA(puVar11,0x10,
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                             *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
          st::fn_00401064
                    ((STT3DSprC *)puVar11,'\x10',
                     *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
          st::fn_00405240((STT3DSprC *)puVar11,0x10,g_playSystem_00802A38->field_00E4);
          st::fn_00403AFD((STT3DSprC *)puVar11,'\x10');
          iVar10 = 3;
          piVar6 = (int *)&param_1->field_0x30c;
          do {
            uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
            param_1->field_001C = uVar12;
            iVar10 = iVar10 + -1;
            *piVar6 = (uVar12 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
            piVar6 = piVar6 + 4;
          } while (iVar10 != 0);
          if (g_manBasis_00811784 != nullptr) {
            local_EAX_406 = st::fn_004049B7(*(char *)&param_1->field_0024);
            local_EAX_406 = (int)(byte)local_EAX_406;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            st::fn_00403265(g_manBasis_00811784,param_1->field_025D,param_1->field_0261,
                               param_1->field_0265,
                               STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(*(undefined1 *)&param_1->field_002C)),param_1->field_0259,
                               local_EAX_406);
          }
        }
        else if ((param_1->field_02EC == CASE_3) && (param_1->field_02DC == 0)) {
          if ((*(int *)&param_1->field_0x2a8 < 100) || (param_1->field_02E8 != 0)) {
            puVar11 = &param_1->field_01D5;
            st::fn_00404264((STT3DSprC *)puVar11,0xe);
            st::fn_00404264((STT3DSprC *)puVar11,0xd);
            st::fn_00404264((STT3DSprC *)puVar11,0xc);
            st::fn_00404264((STT3DSprC *)puVar11,0x10);
            iVar10 = param_1->vfunc_08();
            if (iVar10 != 0) {
              param_1->SetActivity(0);
            }
          }
          else {
            if ((*(char **)(PTR_PTR_007bb198 +
                           (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                           ) != nullptr) &&
               (iVar10 = st::fn_00404183
                                   ((STT3DSprC *)&param_1->field_01D5,0xe,DAT_0080678c,
                                    *(char **)(PTR_PTR_007bb198 +
                                              (*(int *)&param_1->field_0x368 * 3 +
                                              *(int *)&param_1->field_0x36c) * 0xc),0x1d),
               iVar10 != 0)) {
              st::fn_006A5E40
                        (iVar10,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x26f);
            }
            if (*(int *)(PTR_PTR_007bb198 +
                        (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc +
                        4) != 0) {
              st::external_00000080(local_7c,"%s%1i",
                        *(int *)(PTR_PTR_007bb198 +
                                (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c)
                                * 0xc + 4),param_1->field_026D);
              iVar10 = st::fn_00404183
                                 ((STT3DSprC *)&param_1->field_01D5,0xd,DAT_0080678c,local_7c,0x1d);
              if (iVar10 != 0) {
                st::fn_006A5E40
                          (iVar10,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x273);
              }
            }
            iVar10 = st::fn_0040581C();
            puVar11 = &param_1->field_01D5;
            uVar12 = *(uint *)(PTR_DAT_007b5170 +
                              (iVar10 + (*(int *)&param_1->field_0x368 * 3 +
                                        *(int *)&param_1->field_0x36c) * 4) * 8);
            st::fn_00401EBA(puVar11,0xe,uVar12,uVar12,'\0');
            st::fn_00401064((STT3DSprC *)puVar11,'\x0e',uVar12);
            st::fn_00405240((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
            if (**(int **)&param_1->field_01F5->field_0x1d4 < (int)uVar12) {
              uVar12 = 0;
            }
            st::fn_00401EBA(puVar11,0xd,uVar12,uVar12,'\0');
            st::fn_00401064((STT3DSprC *)puVar11,'\r',uVar12);
            st::fn_00405240((STT3DSprC *)puVar11,0xd,g_playSystem_00802A38->field_00E4);
            if (*(char **)(PTR_PTR_007bb198 +
                          (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 0xc
                          + 8) != nullptr) {
              iVar10 = st::fn_00404183
                                 ((STT3DSprC *)puVar11,0xc,DAT_0080678c,
                                  *(char **)(PTR_PTR_007bb198 +
                                            (*(int *)&param_1->field_0x368 * 3 +
                                            *(int *)&param_1->field_0x36c) * 0xc + 8),0x1d);
              if (iVar10 != 0) {
                st::fn_006A5E40
                          (iVar10,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x281);
              }
              iVar10 = st::fn_0040581C();
              uVar12 = *(uint *)(PTR_DAT_007b8310 +
                                (iVar10 + (*(int *)&param_1->field_0x368 * 3 +
                                          *(int *)&param_1->field_0x36c) * 4) * 8);
              st::fn_00401EBA(puVar11,0xc,uVar12,uVar12,'\0');
              st::fn_00401064((STT3DSprC *)puVar11,'\f',uVar12);
              st::fn_00405240((STT3DSprC *)puVar11,0xc,g_playSystem_00802A38->field_00E4);
            }
            st::fn_00405CA9((STT3DSprC *)puVar11,DAT_008073cc);
            iVar10 = st::fn_00404183
                               ((STT3DSprC *)puVar11,0x10,DAT_0080678c,
                                (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&param_1->field_0x36c],0x1d);
            if (iVar10 != 0) {
              st::fn_006A5E40
                        (iVar10,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_embryo.cpp",0x289);
            }
            st::fn_00401EBA(puVar11,0x10,
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),
                               *(int *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4),'\0');
            st::fn_00401064
                      ((STT3DSprC *)puVar11,'\x10',
                       *(uint *)(&DAT_0079104c + *(int *)&param_1->field_0x368 * 4));
            st::fn_00405240((STT3DSprC *)puVar11,0x10,g_playSystem_00802A38->field_00E4);
            st::fn_00403AFD((STT3DSprC *)puVar11,'\x10');
          }
          puVar11 = &param_1->field_01D5;
          param_1->field_02DC = 1;
          st::fn_00404264((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0);
          st::fn_0040498A((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0);
          st::fn_00402A90((STT3DSprC *)puVar11);
          if (*(int *)&param_1->field_0x370 != 0) {
            st::fn_00404264((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1);
            st::fn_0040498A((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1);
          }
        }
      }
      else if (iVar7 == this->field_0020->field_020C) {
        st::fn_00401064(this,'\x0e',0);
        st::fn_00404264(param_1->field_035C,0xe);
        st::fn_00403D0F(param_1->field_035C);
        if (param_1->field_02DC != 0) {
          st::fn_0040464C(param_1);
          st::fn_00403297(param_1);
          if (param_1->field_002C == 0) {
            iVar10 = 1;
          }
          else if (param_1->field_002C == 1) {
            iVar10 = 2;
          }
          local_14 = param_1->field_0261;
          if ((int)local_14 < (int)(local_14 + iVar10)) {
            do {
              iVar7 = param_1->field_025D;
              if (iVar7 < iVar7 + iVar10) {
                do {
                  st::fn_0040232E((short)iVar7,(short)local_14,*(short *)&param_1->field_0265);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar10 + param_1->field_025D);
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < param_1->field_0261 + iVar10);
          }
          iVar10 = st::fn_00402077(STReplaceLowByte((uint32_t)(param_1->field_0259), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                      param_1->field_0259);
          if (iVar10 != 0) {
            dVar2 = param_1->slot_2C();
            st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar2), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                               dVar2);
          }
          if ((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) {
            st::fn_00401BC2
                      (g_playSystem_00802A38,param_1->field_0245,0,&local_18,&param_1->field_0245,0);
            param_1->field_02E4 = 1;
            iVar10 = param_1->vfunc_08();
            uVar5 = 0;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar8 = extraout_var_00;
            if (iVar10 != 0) {
              /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_00403D23(STReplaceLowByte((uint32_t)(local_18), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                 STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(param_1->field_0032)),
                                 CONCAT22(extraout_var_02,*(undefined2 *)(local_18 + 0x32)));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar8 = extraout_var_01;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar5 = extraout_var;
            }
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
          iVar10 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,DAT_0080678c,
                              "si_emb3",0x1d);
          if (iVar10 != 0) {
            st::fn_006A5E40
                      (iVar10,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2cf);
          }
          st::external_00000080(local_7c,"si_emb3_id%1d",param_1->field_0024);
          iVar10 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,DAT_0080678c,local_7c
                              ,0x1d);
          if (iVar10 != 0) {
            iVar7 = 0x2d1;
LAB_004d3b23:
            st::fn_006A5E40
                      (iVar10,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar7);
          }
        }
        else if (param_1->field_0241 == 1) {
          iVar10 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 6,DAT_0080678c,
                              "si_emb2",0x1d);
          if (iVar10 != 0) {
            st::fn_006A5E40
                      (iVar10,g_overwriteContext_007ED77C,
                       "E:\\__titans\\Artem\\TLO_embryo.cpp",0x2d5);
          }
          st::external_00000080(local_7c,"si_emb2_id%1d",param_1->field_0024);
          iVar10 = st::fn_00404183
                             ((STT3DSprC *)&param_1->field_01D5,
                              (-(*(int *)&param_1->field_0x370 != 0) & 3U) + 5,DAT_0080678c,local_7c
                              ,0x1d);
          if (iVar10 != 0) {
            iVar7 = 0x2d7;
            goto LAB_004d3b23;
          }
        }
        puVar11 = &param_1->field_01D5;
        iVar10 = param_1->field_02EC + param_1->field_0241 * 4;
        st::fn_00401EBA(puVar11,*(byte *)&param_1->field_02F0,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar10 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar10 * 8),'\0');
        st::fn_00401064
                  ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        st::fn_00405240
                  ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        iVar10 = param_1->field_02EC + param_1->field_0241 * 4;
        st::fn_00401EBA(puVar11,*(char *)&param_1->field_02F0 - 1,
                           *(int *)(*(int *)&param_1->field_0x364 + iVar10 * 8),
                           *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar10 * 8),'\0');
        st::fn_00401064
                  ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 + -1,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        cVar1 = *(char *)&param_1->field_02F0;
        uVar12 = g_playSystem_00802A38->field_00E4;
LAB_004d4378:
        st::fn_00405240((STT3DSprC *)&param_1->field_01D5,cVar1 - 1,uVar12);
        break;
      case CASE_1:
        iVar10 = param_1->field_0241 * 0x20;
        param_1->field_02EC = CASE_2;
        puVar11 = &param_1->field_01D5;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_00401EBA(puVar11,*(byte *)&param_1->field_02F0,
                           *(int *)(iVar10 + 0x10 + *(int *)&param_1->field_0x364),
                           *(int *)(iVar10 + 0x14 + *(int *)&param_1->field_0x364),'\0');
        st::fn_00401064
                  ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0,
                   *(uint *)(*(int *)&param_1->field_0x364 +
                            (param_1->field_02EC + param_1->field_0241 * 4) * 8));
        st::fn_00405240
                  ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,
                   g_playSystem_00802A38->field_00E4);
        if (*(int *)&param_1->field_0x370 != 0) {
          iVar10 = param_1->field_02EC + param_1->field_0241 * 4;
          st::fn_00401EBA(puVar11,*(char *)&param_1->field_02F0 - 1,
                             *(int *)(*(int *)&param_1->field_0x364 + iVar10 * 8),
                             *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar10 * 8),'\0');
          st::fn_00401064
                    ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 + -1,
                     *(uint *)(*(int *)&param_1->field_0x364 +
                              (param_1->field_02EC + param_1->field_0241 * 4) * 8));
          st::fn_00405240
                    ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1,
                     g_playSystem_00802A38->field_00E4);
        }
        param_1->vfunc_90(3,0x362);
        st::fn_00401EBA(param_1->field_035C,0xe,0,
                           *(int *)param_1->field_035C->field_0020->field_01F8 + -1,'\0');
        st::fn_00401064(param_1->field_035C,'\x0e',0);
        st::fn_00405240(param_1->field_035C,0xe,g_playSystem_00802A38->field_00E4);
        st::fn_00402982(param_1->field_035C,0);
        break;
      case CASE_2:
        if (99 < *(int *)&param_1->field_0x2a8) {
          if ((((param_1->field_02E8 == 0) && (*(int *)&param_1->field_0x2a4 == 0)) &&
              (*(int *)&param_1->field_0x2a0 == 0)) &&
             (iVar10 = st::fn_004015D7((int)param_1), iVar10 != 0)) {
            param_1->field_02EC = CASE_3;
            if (*(int *)&param_1->field_0x370 == 0) {
              param_1->vfunc_90(3,0x361);
            }
            iVar10 = param_1->field_0259;
            if (((iVar10 == 0x6c) && (param_1->field_0251 == 3)) ||
               ((0x53 < iVar10 && (iVar10 < 0x5b)))) {
LAB_004d3f38:
              if (*(int *)&param_1->field_0x370 != 0) goto LAB_004d3f76;
            }
            else {
              puVar11 = &param_1->field_01D5;
              st::fn_004017D5(puVar11,*(char *)&param_1->field_02F0);
              iVar10 = param_1->field_02EC + param_1->field_0241 * 4;
              st::fn_00401EBA(puVar11,*(byte *)&param_1->field_02F0,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar10 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar10 * 8),'\0');
              st::fn_00401064
                        ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0,
                         *(uint *)(*(int *)&param_1->field_0x364 +
                                  (param_1->field_02EC + param_1->field_0241 * 4) * 8));
              st::fn_00405240
                        ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,
                         g_playSystem_00802A38->field_00E4);
              if (*(int *)&param_1->field_0x370 != 0) {
                st::fn_004017D5(puVar11,*(char *)&param_1->field_02F0 + -1);
                iVar10 = param_1->field_02EC + param_1->field_0241 * 4;
                st::fn_00401EBA(puVar11,*(char *)&param_1->field_02F0 - 1,
                                   *(int *)(*(int *)&param_1->field_0x364 + iVar10 * 8),
                                   *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar10 * 8),'\0');
                st::fn_00401064
                          ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 + -1,
                           *(uint *)(*(int *)&param_1->field_0x364 +
                                    (param_1->field_02EC + param_1->field_0241 * 4) * 8));
                st::fn_00405240
                          ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1,
                           g_playSystem_00802A38->field_00E4);
                goto LAB_004d3f38;
              }
            }
            puVar11 = (undefined4 *)&param_1->field_0x350;
            piVar6 = (int *)&param_1->field_0x308;
            local_14 = 3;
            do {
              if (*piVar6 != 0) {
                *piVar6 = 0;
                st::fn_00403D0F((STT3DSprC *)*puVar11);
              }
              puVar11 = puVar11 + 1;
              piVar6 = piVar6 + 4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
LAB_004d3f76:
          if (((99 < *(int *)&param_1->field_0x2a8) && (param_1->field_02E8 == 0)) &&
             ((iVar10 = st::fn_004015D7((int)param_1), iVar10 == 0 &&
              (DAT_00811798 != nullptr)))) {
            st::fn_00402AF4(DAT_00811798,param_1->field_0024,8);
          }
        }
        break;
      case CASE_3:
        if (((param_1->field_035C->field_001C & 0x4000) == 0) &&
           (*(int *)&param_1->field_0x2e0 == 0)) {
          puVar11 = &param_1->field_01D5;
          *(undefined4 *)&param_1->field_0x2e0 = 1;
          uVar12 = st::fn_004042AF(puVar11,*(char *)&param_1->field_02F0);
          st::fn_00404264((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0);
          st::fn_0040498A((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0);
          if (*(int *)&param_1->field_0x370 != 0) {
            st::fn_00404264((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1);
            st::fn_0040498A((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1);
          }
          param_1->vfunc_90(3,0x362);
          st::fn_00401EBA(param_1->field_035C,0xe,0,
                             *(int *)param_1->field_035C->field_0020->field_01F8 + -1,'\0');
          st::fn_00401064(param_1->field_035C,'\x0e',0);
          st::fn_00405240(param_1->field_035C,0xe,g_playSystem_00802A38->field_00E4);
          st::fn_00402982(param_1->field_035C,0);
          iVar10 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 3) + 6;
          param_1->field_02F4 = iVar10;
          st::fn_0040498A((STT3DSprC *)puVar11,(byte)iVar10);
          uVar15 = param_1->field_02F4;
          iVar10 = st::fn_004052CC((STT3DSprC *)puVar11);
          uVar3 = st::fn_004052CC(param_1->field_035C);
          st::fn_006EA340((void *)param_1->field_0211,uVar3,iVar10,uVar15);
          param_1->field_02F0 = (-(uint)(*(int *)&param_1->field_0x370 != 0) & 4) + 7;
          iVar10 = param_1->field_0259;
          if (((iVar10 != 0x6c) || (param_1->field_0251 != 3)) &&
             ((iVar10 < 0x54 || (0x5a < iVar10)))) {
            iVar10 = param_1->field_0241;
            if (*(int *)&param_1->field_0x370 == 0) {
              if (iVar10 == 0) {
                iVar10 = st::fn_00404183
                                   ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,DAT_0080678c,
                                    "tlo_emb2",0x1d);
                if (iVar10 != 0) {
                  iVar7 = 0x342;
                  goto cf_error_exit_004D428D;
                }
              }
              else if ((iVar10 == 1) &&
                      (iVar10 = st::fn_00404183
                                          ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,
                                           DAT_0080678c,"tlo_emb3",0x1d), iVar10 != 0)) {
                iVar7 = 0x343;
cf_error_exit_004D428D:
                st::fn_006A5E40
                          (iVar10,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",iVar7);
              }
            }
            else if (iVar10 == 0) {
              iVar10 = st::fn_00404183
                                 ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,DAT_0080678c,
                                  "si_emb3",0x1d);
              if (iVar10 != 0) {
                st::fn_006A5E40
                          (iVar10,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x334);
              }
              st::external_00000080(local_7c,"si_emb3_id%1d",param_1->field_0024);
              iVar10 = st::fn_00404183
                                 ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1,
                                  DAT_0080678c,local_7c,0x1d);
              if (iVar10 != 0) {
                iVar7 = 0x336;
                goto cf_error_exit_004D428D;
              }
            }
            else if (iVar10 == 1) {
              iVar10 = st::fn_00404183
                                 ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,DAT_0080678c,
                                  "si_emb2",0x1d);
              if (iVar10 != 0) {
                st::fn_006A5E40
                          (iVar10,g_overwriteContext_007ED77C,
                           "E:\\__titans\\Artem\\TLO_embryo.cpp",0x33a);
              }
              st::external_00000080(local_7c,"si_emb2_id%1d",param_1->field_0024);
              iVar10 = st::fn_00404183
                                 ((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 - 1,
                                  DAT_0080678c,local_7c,0x1d);
              if (iVar10 != 0) {
                iVar7 = 0x33c;
                goto cf_error_exit_004D428D;
              }
            }
            st::fn_004017D5(puVar11,*(char *)&param_1->field_02F0);
            iVar10 = param_1->field_02EC + param_1->field_0241 * 4;
            st::fn_00401EBA(puVar11,*(byte *)&param_1->field_02F0,
                               *(int *)(*(int *)&param_1->field_0x364 + iVar10 * 8),
                               *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar10 * 8),'\0');
            st::fn_00401064((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0,uVar12);
            st::fn_00405240
                      ((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0,
                       g_playSystem_00802A38->field_00E4);
            if (*(int *)&param_1->field_0x370 != 0) {
              st::fn_004017D5(puVar11,*(char *)&param_1->field_02F0 + -1);
              iVar10 = param_1->field_02EC + param_1->field_0241 * 4;
              st::fn_00401EBA(puVar11,*(char *)&param_1->field_02F0 - 1,
                                 *(int *)(*(int *)&param_1->field_0x364 + iVar10 * 8),
                                 *(int *)(*(int *)&param_1->field_0x364 + 4 + iVar10 * 8),'\0');
              st::fn_00401064((STT3DSprC *)puVar11,*(char *)&param_1->field_02F0 + -1,uVar12);
              cVar1 = *(char *)&param_1->field_02F0;
              uVar12 = g_playSystem_00802A38->field_00E4;
              goto LAB_004d4378;
            }
          }
        }
      }
    }
    if ((param_1->field_02EC == CASE_2) && ((param_1->field_01F1 & 0x4000) != 0)) {
      if ((*(int *)&param_1->field_0x2a8 < 100) &&
         ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
        iVar10 = st::fn_00402077(STReplaceLowByte((uint32_t)(param_1->field_0259), (uint8_t)(*(undefined1 *)&param_1->field_0024)),
                                    param_1->field_0259);
        if (iVar10 == 0) {
LAB_004d43f5:
          uVar4 = 1;
        }
        else {
          iVar10 = st::fn_00402C98(*(char *)&param_1->field_0024,(int)param_1->field_0018);
          uVar4 = 0;
          if (iVar10 != 0) goto LAB_004d43f5;
        }
        *(undefined4 *)&param_1->field_0x2b8 = uVar4;
        uVar2 = st::fn_004049B7(*(char *)&param_1->field_0024);
        local_14 = *(uint *)(&DAT_007e3dc0 +
                            ((uint)(byte)uVar2 + *(int *)&param_1->field_0x368 * 3) * 4);
        if (DAT_0080c51e != 0) {
          uVar12 = 0;
          iVar10 = 0;
          do {
            uVar6 = st::fn_004049B7(*(char *)&param_1->field_0024);
            uVar6 = (int)(byte)uVar6;
            if (uVar12 < *(uint *)(&DAT_007e3dc0 + (uVar6 + iVar10) * 4)) {
              local_EAX_4514 = st::fn_004049B7(*(char *)&param_1->field_0024);
              local_EAX_4514 = (int)(byte)local_EAX_4514;
              uVar12 = *(uint *)(&DAT_007e3dc0 + (local_EAX_4514 + iVar10) * 4);
            }
            iVar10 = iVar10 + 3;
          } while (iVar10 < 0xc6);
          local_14 = (local_14 * 0x5dc) / uVar12;
          if (0x5dc < local_14) {
            local_14 = 0x5dc;
          }
        }
        uVar12 = local_14 / 100;
        if ((*(int *)&param_1->field_0x2b8 == 0) &&
           (uVar12 = uVar12 << 2, DAT_00811798 != nullptr)) {
          st::fn_00402AF4(DAT_00811798,param_1->field_0024,5);
        }
        if (*(int *)&param_1->field_0x2b0 + uVar12 <= g_playSystem_00802A38->field_00E4) {
          *(uint *)&param_1->field_0x2b0 = g_playSystem_00802A38->field_00E4;
          iVar7 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
          iVar10 = *(int *)(&DAT_008545ac + iVar7);
          local_14 = iVar10 / 100;
          if ((iVar10 != 0) && (local_14 == 0)) {
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
          if (iVar10 <= (int)(local_14 + param_1->field_02CC)) {
            local_14 = iVar10 - param_1->field_02CC;
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
             (iVar10 = st::fn_00405DFD(*(char *)&param_1->field_0024,0), (int)local_14 <= iVar10)
             ) {
            if ((local_8 == 0) ||
               (iVar10 = st::fn_00405E5C(*(char *)&param_1->field_0024,0), local_8 <= iVar10)) {
              if ((local_c == 0) ||
                 (iVar10 = st::fn_004023AB(*(char *)&param_1->field_0024,0), local_c <= iVar10))
              {
                if ((local_10 != 0) &&
                   (iVar10 = st::fn_004049C6(*(char *)&param_1->field_0024,0), iVar10 < local_10)
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
            if (DAT_00811798 != nullptr) {
              if (*(int *)&param_1->field_0x2bc == 0) {
                st::fn_00402AF4(DAT_00811798,param_1->field_0024,4);
              }
              if (*(int *)&param_1->field_0x2c0 == 0) {
                st::fn_00402AF4(DAT_00811798,param_1->field_0024,2);
              }
              if (*(int *)&param_1->field_0x2c4 == 0) {
                st::fn_00402AF4(DAT_00811798,param_1->field_0024,3);
              }
              if (*(int *)&param_1->field_0x2c8 == 0) {
                st::fn_00402AF4(DAT_00811798,param_1->field_0024,7);
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
            param_1->field_02CC = param_1->field_02CC + local_14;
            param_1->field_02D8 = param_1->field_02D8 + local_10;
            param_1->field_02D0 = param_1->field_02D0 + local_8;
            param_1->field_02D4 = param_1->field_02D4 + local_c;
            if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
              st::fn_00404B8D((char)param_1->field_0024);
            }
            if (99 < *(int *)&param_1->field_0x2a8) {
              *(undefined4 *)&param_1->field_0x2a8 = 100;
              st::fn_004051EB(*(char *)&param_1->field_0024,0,param_1->field_0018);
              if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
                st::fn_00402D5B(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
                local_EAX_5536 = st::fn_004049B7(*(char *)&param_1->field_0024);
                local_EAX_5536 = (int)(byte)local_EAX_5536;
                if (local_EAX_5536 == 1) {
                  param_1->vfunc_90(6,0x62);
                }
                else if (local_EAX_5536 == 2) {
                  param_1->vfunc_90(6,99);
                }
                else if (local_EAX_5536 == 3) {
                  param_1->vfunc_90(6,100);
                }
              }
            }
          }
          if (*(int *)&param_1->field_0x2a8 < 100) {
            iVar10 = (*(int *)&param_1->field_0x368 * 3 + *(int *)&param_1->field_0x36c) * 4;
            iVar7 = *(int *)(&DAT_008545ac + iVar10) - param_1->field_02CC;
            iVar14 = *(int *)(&DAT_007e1c50 + iVar10) - param_1->field_02D0;
            iVar9 = *(int *)(&DAT_007e24fc + iVar10) - param_1->field_02D4;
            iVar10 = *(int *)(&DAT_007e3160 + iVar10) - param_1->field_02D8;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            st::fn_0040497B(*(char *)&param_1->field_0024,0,param_1->field_0018,iVar7,iVar14,
                               iVar9,iVar10);
          }
        }
      }
      if (*(int *)&param_1->field_0x370 == 0) {
        piVar6 = (int *)&param_1->field_0x350;
        piVar13 = (int *)&param_1->field_0x308;
        local_14 = 3;
        do {
          if (*piVar13 == 0) {
            if (((((uint)piVar13[1] <= g_playSystem_00802A38->field_00E4) &&
                 (*(int *)&param_1->field_0x2b4 != 0)) && (*(int *)&param_1->field_0x2a8 < 100)) &&
               ((*(int *)&param_1->field_0x2a4 == 0 && (*(int *)&param_1->field_0x2a0 == 0)))) {
              param_1->vfunc_90(3,0x363);
              *piVar13 = 1;
              uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
              param_1->field_001C = uVar12;
              piVar13[3] = (uVar12 >> 0x10) % 3 + 1;
              uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
              param_1->field_001C = uVar12;
              uVar12 = (uVar12 >> 0x10) %
                       *(uint *)(&DAT_00797748 + *(int *)&param_1->field_0x368 * 0x44);
              piVar13[2] = uVar12;
              iVar10 = *(int *)&param_1->field_0x368 * 0x44 + uVar12 * 8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_004023C4((void *)*piVar6,
                                 (param_1->field_0300 - *(int *)(&DAT_0079774c + iVar10)) + 0x10,
                                 (param_1->field_0304 - *(int *)(&DAT_00797750 + iVar10)) + 0x15);
              st::fn_00401EBA((void *)*piVar6,0xe,0,0x13,'\0');
              st::fn_00401064((STT3DSprC *)*piVar6,'\x0e',0);
              st::fn_00405240((STT3DSprC *)*piVar6,0xe,g_playSystem_00802A38->field_00E4);
              st::fn_00402982((void *)*piVar6,0);
            }
          }
          else {
            iVar10 = *(int *)(*piVar6 + 0x20);
            if (*(int *)(iVar10 + 0x210) < *(int *)(iVar10 + 0x20c)) {
              if (*(int *)(iVar10 + 0x210) == *(int *)(iVar10 + 0x208)) {
                param_1->vfunc_90(3,0x363);
              }
            }
            else {
              iVar10 = piVar13[3];
              piVar13[3] = iVar10 + -1;
              if (iVar10 + -1 == 0) {
                *piVar13 = 0;
                uVar12 = param_1->field_001C * 0x41c64e6d + 0x3039;
                param_1->field_001C = uVar12;
                piVar13[1] = (uVar12 >> 0x10) % 0x65 + 0x19 + g_playSystem_00802A38->field_00E4;
                st::fn_00403D0F((STT3DSprC *)*piVar6);
              }
            }
          }
          st::fn_004033AA((void *)*piVar6,g_playSystem_00802A38->field_00E4);
          piVar6 = piVar6 + 1;
          piVar13 = piVar13 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    st::fn_004033AA(param_1->field_035C,g_playSystem_00802A38->field_00E4);
    if (*(int *)&param_1->field_0x2a0 == 0) {
      param_1->vfunc_D8();
      goto LAB_004d4d4f;
    }
  }
  puVar11 = &param_1->field_01D5;
  iVar10 = st::fn_004042AF(puVar11,'\x06');
  if ((iVar10 < *(int *)&param_1->field_01F5->field_0xec) ||
     (iVar10 = st::fn_004042AF(puVar11,'\a'), iVar10 < *(int *)&param_1->field_01F5->field_0x110)
     ) {
    param_1->vfunc_D8();
    iVar10 = st::fn_004042AF(puVar11,'\x06');
    if (iVar10 == 0x11) {
      st::fn_00404264((STT3DSprC *)puVar11,0x10);
      st::fn_00404264((STT3DSprC *)puVar11,0xe);
      st::fn_00404264((STT3DSprC *)puVar11,0xd);
      st::fn_00404264((STT3DSprC *)puVar11,0xc);
      if ((*(int *)&param_1->field_0x370 == 0) ||
         (st::fn_00404264((STT3DSprC *)puVar11,*(byte *)&param_1->field_02F0),
         *(int *)&param_1->field_0x370 == 0)) {
        puVar11 = (undefined4 *)&param_1->field_0x350;
        iVar10 = 3;
        do {
          st::fn_00404264((STT3DSprC *)*puVar11,0xe);
          puVar11 = puVar11 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar10 = 0;
      local_EAX_6643 = st::fn_004049B7(*(char *)&param_1->field_0024);
      local_EAX_6643 = (int)(byte)local_EAX_6643;
      st::fn_00404A7F((int)param_1->field_0041,(int)param_1->field_0043,(int)param_1->field_0045,
                         param_1->field_0259,(int *)param_1,0xffffffff,0xffffffff,local_EAX_6643,
                         iVar10);
    }
    else {
      iVar10 = st::fn_004042AF(puVar11,'\x06');
      if (iVar10 == 0x23) {
        if (param_1->field_002C == 1) {
          text = "expl_bbt1";
        }
        else {
          text = "expl_bbt0";
        }
        iVar10 = st::fn_00404183((STT3DSprC *)puVar11,7,DAT_00806764,text,0x1d);
        if (iVar10 != 0) {
          return 0xffff;
        }
        st::fn_00405240((STT3DSprC *)puVar11,7,g_playSystem_00802A38->field_00E4);
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
#line 1 "decomp/ST.exe/functions/004D55B0/decomp.c"
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
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  STT3DSprC **ppSVar15;
  char *pcVar16;
  char cVar17;
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
  iVar5 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e5,0,iVar5,
                                "%s","TLOEmbryoTy::GetMessage error");
    if (iVar12 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x4e6);
      return iVar5;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
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
        local_8 = (message->arg0).ptr;
        iVar12 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
        iVar5 = *local_8;
        if (this_00->field_0338 != 0) {
          iVar5 = (this_00->field_033C * iVar5) / 100;
        }
        iVar5 = (this_00->field_02A8 * *(int *)(&DAT_007e417c + iVar12)) / 100 - iVar5;
        if (iVar5 < 1) {
          if (this_00->field_02A0 == 0) {
            st::fn_00404264(this_00->field_035C,0xe);
            st::fn_00403D0F(this_00->field_035C);
            puVar13 = &this_00->field_01D5;
            if (this_00->field_002C == 1) {
              pcVar16 = "expl_bt1";
            }
            else {
              pcVar16 = "expl_bt0";
            }
            iVar5 = st::fn_00404183((STT3DSprC *)puVar13,6,DAT_00806774,pcVar16,0x1d);
            if (iVar5 != 0) {
              return 0xffff;
            }
            st::fn_004022D4(puVar13,'\x06');
            st::fn_00405240((STT3DSprC *)puVar13,6,g_playSystem_00802A38->field_00E4);
          }
          this_00->field_02A8 = 0;
          this_00->field_02A0 = 1;
        }
        else {
          iVar5 = (iVar5 * 100) / *(int *)(&DAT_007e417c + iVar12);
          this_00->field_02A8 = iVar5;
          this_00->field_02CC = (iVar5 * *(int *)(&DAT_008545ac + iVar12)) / 100;
          this_00->field_02D0 = (*(int *)(&DAT_007e1c50 + iVar12) * this_00->field_02A8) / 100;
          this_00->field_02D4 = (*(int *)(&DAT_007e24fc + iVar12) * this_00->field_02A8) / 100;
          iVar5 = (*(int *)(&DAT_007e3160 + iVar12) * this_00->field_02A8) / 100;
          this_00->field_02D8 = iVar5;
          iVar6 = *(int *)(&DAT_008545ac + iVar12) - this_00->field_02CC;
          iVar10 = *(int *)(&DAT_007e1c50 + iVar12) - this_00->field_02D0;
          iVar14 = *(int *)(&DAT_007e24fc + iVar12) - this_00->field_02D4;
          iVar5 = *(int *)(&DAT_007e3160 + iVar12) - iVar5;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          if (iVar14 < 0) {
            iVar14 = 0;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          st::fn_0040497B(*(char *)&this_00->field_0024,0,(int *)this_00->field_0018,iVar6,iVar10
                             ,iVar14,iVar5);
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
      piVar11 = (message->arg0).ptr;
      if (*piVar11 != this_00->field_0024) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      this_00->field_0338 = 1;
      this_00->field_033C = piVar11[2];
      this_00->field_0340 = g_playSystem_00802A38->field_00E4;
      this_00->field_0344 = piVar11[1];
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != MESS_TLOEMBRYOTY_4401) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar17 = *(char *)((message->arg0).u32 + 0xe);
    if (cVar17 != '\t') {
      if (cVar17 != '\x17') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar16 = *(char **)((message->arg0).u32 + 0x17);
      if (this_00->field_02A4 != 0) {
        if (*pcVar16 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        this_00->field_02A4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar16 != '\x1b') {
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
    iVar5 = 3;
    this_00->field_02EC = 3;
    this_00->field_02E8 = 1;
    if (this_00->field_0370 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_00->field_0000->field_0090)(3,0x361);
    }
    iVar12 = this_00->field_0259;
    if (((iVar12 != 0x6c) || (this_00->field_0251 != 3)) && ((iVar12 < 0x54 || (0x5a < iVar12)))) {
      puVar13 = &this_00->field_01D5;
      st::fn_004017D5(puVar13,*(char *)&this_00->field_02F0);
      iVar12 = this_00->field_02EC + this_00->field_0241 * 4;
      st::fn_00401EBA(puVar13,*(byte *)&this_00->field_02F0,
                         *(int *)(this_00->field_0364 + iVar12 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar12 * 8),'\0');
      st::fn_00401064
                ((STT3DSprC *)puVar13,*(char *)&this_00->field_02F0,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      st::fn_00405240
                ((STT3DSprC *)puVar13,*(byte *)&this_00->field_02F0,
                 g_playSystem_00802A38->field_00E4);
      if (this_00->field_0370 == 0) goto LAB_004d600f;
      st::fn_004017D5(puVar13,*(char *)&this_00->field_02F0 + -1);
      iVar12 = this_00->field_02EC + this_00->field_0241 * 4;
      st::fn_00401EBA(puVar13,*(char *)&this_00->field_02F0 - 1,
                         *(int *)(this_00->field_0364 + iVar12 * 8),
                         *(int *)(this_00->field_0364 + 4 + iVar12 * 8),'\0');
      st::fn_00401064
                ((STT3DSprC *)puVar13,*(char *)&this_00->field_02F0 + -1,
                 *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8
                          ));
      st::fn_00405240
                ((STT3DSprC *)puVar13,*(char *)&this_00->field_02F0 - 1,
                 g_playSystem_00802A38->field_00E4);
    }
    if (this_00->field_0370 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    ppSVar15 = &this_00->field_0350;
    piVar11 = (int *)&this_00->field_0x308;
    do {
      if (*piVar11 != 0) {
        *piVar11 = 0;
        st::fn_00403D0F(*ppSVar15);
      }
      ppSVar15 = ppSVar15 + 1;
      piVar11 = piVar11 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
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
      st::fn_00405ED9(this_00,(message->arg0).ptr);
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
  iVar12 = 0;
  iVar5 = 0;
  do {
    piVar11 = (int *)(this_00->field_01F5 + iVar5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    auStack_17c[iVar12] = *(undefined4 *)(this_00->field_01F5 + 0x1c + iVar5);
    aiStack_f4[iVar12] = piVar11[8];
    if (*piVar11 != 0) {
      cVar17 = (char)iVar12;
      iVar6 = st::fn_004042AF(&this_00->field_01D5,cVar17);
      aiStack_138[iVar12] = iVar6;
      iVar6 = st::fn_004042AF(&this_00->field_01D5,cVar17);
      uVar7 = st::fn_00405A29(&this_00->field_01D5,cVar17,iVar6);
      auStack_1c0[iVar12] = uVar7;
    }
    iVar5 = iVar5 + 0x24;
    iVar12 = iVar12 + 1;
  } while (iVar5 < 0x264);
  if (this_00->field_02EC == 0) {
    st::fn_00404061(this_00,1);
    st::fn_00405240
              ((STT3DSprC *)&this_00->field_01D5,*(byte *)&this_00->field_02F0,
               g_playSystem_00802A38->field_00E4);
    st::fn_00405240
              ((STT3DSprC *)&this_00->field_01D5,*(char *)&this_00->field_02F0 - 1,
               g_playSystem_00802A38->field_00E4);
  }
  if (this_00->field_02DC == 0) {
    if ((this_00->field_01F1 & 0x4000) == 0) goto LAB_004d59e7;
    uVar8 = st::fn_0040581C();
    uVar9 = uVar8 & 0x80000001;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
    }
    st::external_00000080(local_b0,"%s%1i",(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar9);
    puVar13 = &this_00->field_01D5;
    iVar5 = st::fn_00404183((STT3DSprC *)puVar13,0xe,DAT_0080678c,local_b0,0x1d);
    if (iVar5 != 0) {
      st::fn_006A5E40
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x43a
                );
    }
    st::fn_00401EBA(puVar13,0xe,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                       *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
    st::fn_00401064
              ((STT3DSprC *)puVar13,'\x0e',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
    st::fn_00405240((STT3DSprC *)puVar13,0xe,g_playSystem_00802A38->field_00E4);
    iVar5 = st::fn_00404183
                      ((STT3DSprC *)puVar13,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],0x1d);
    if (iVar5 != 0) {
      iVar12 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar5 = st::fn_0040581C();
    puVar13 = &this_00->field_01D5;
    uVar9 = *(uint *)(PTR_DAT_007b5170 +
                     (iVar5 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
    st::fn_00401EBA(puVar13,0xe,uVar9,uVar9,'\0');
    st::fn_00401064((STT3DSprC *)puVar13,'\x0e',uVar9);
    st::fn_00405240((STT3DSprC *)puVar13,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (**(int **)(this_00->field_01F5 + 0x1d4) < (int)uVar9) {
      uVar9 = 0;
    }
    st::fn_00401EBA(puVar13,0xd,uVar9,uVar9,'\0');
    st::fn_00401064((STT3DSprC *)puVar13,'\r',uVar9);
    st::fn_00405240((STT3DSprC *)puVar13,0xd,g_playSystem_00802A38->field_00E4);
    if (*(int *)(PTR_PTR_007bb198 + (this_00->field_0368 * 3 + this_00->field_036C) * 0xc + 8) != 0)
    {
      iVar5 = st::fn_0040581C();
      uVar9 = *(uint *)(PTR_DAT_007b8310 +
                       (iVar5 + (this_00->field_0368 * 3 + this_00->field_036C) * 4) * 8);
      st::fn_00401EBA(puVar13,0xc,uVar9,uVar9,'\0');
      st::fn_00401064((STT3DSprC *)puVar13,'\f',uVar9);
      st::fn_00405240((STT3DSprC *)puVar13,0xc,g_playSystem_00802A38->field_00E4);
    }
    iVar5 = st::fn_00404183
                      ((STT3DSprC *)puVar13,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[this_00->field_036C],0x1d);
    if (iVar5 != 0) {
      iVar12 = 0x459;
LAB_004d5985:
      st::fn_006A5E40
                (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_embryo.cpp",
                 iVar12);
    }
  }
  puVar13 = &this_00->field_01D5;
  st::fn_00401EBA(puVar13,0x10,*(int *)(&DAT_0079104c + this_00->field_0368 * 4),
                     *(int *)(&DAT_0079104c + this_00->field_0368 * 4),'\0');
  st::fn_00401064
            ((STT3DSprC *)puVar13,'\x10',*(uint *)(&DAT_0079104c + this_00->field_0368 * 4));
  st::fn_00405240((STT3DSprC *)puVar13,0x10,g_playSystem_00802A38->field_00E4);
  st::fn_00403AFD((STT3DSprC *)puVar13,'\x10');
LAB_004d59e7:
  iVar12 = 0;
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar5 + 0x1c + this_00->field_01F5) = auStack_17c[iVar12];
    *(int *)(iVar5 + 0x20 + this_00->field_01F5) = aiStack_f4[iVar12];
    iVar6 = *(int *)(iVar5 + this_00->field_01F5);
    if (iVar6 != 0) {
      *(undefined4 *)(*(int *)(iVar5 + this_00->field_01F5 + 4) + aiStack_138[iVar12] * 4) =
           *(undefined4 *)(aiStack_138[iVar12] * 4 + 0x31 + iVar6);
      uVar7 = auStack_1c0[iVar12];
      iVar6 = st::fn_004042AF(&this_00->field_01D5,(char)iVar12);
      st::fn_00405141(&this_00->field_01D5,(char)iVar12,iVar6,uVar7);
    }
    iVar5 = iVar5 + 0x24;
    iVar12 = iVar12 + 1;
  } while (iVar5 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

// 004D67B0 TLOBaseTy::SetActivity
#line 1 "decomp/ST.exe/functions/004D67B0/decomp.c"
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
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_embryo.cpp",0x52d,0,errorCode,
                               "%s","TLOBaseTy::SetActivity");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x52e);
  }
  return;
}

