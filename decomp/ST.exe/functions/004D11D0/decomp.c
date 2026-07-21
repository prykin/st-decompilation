
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::Create */

int __thiscall TLOEmbryoTy::Create(TLOEmbryoTy *this,AnonShape_004D11D0_880D99AA *param_1)

{
  short sVar1;
  code *pcVar2;
  TLOEmbryoTy *this_00;
  int iVar3;
  uint uVar4;
  DArrayTy *pDVar5;
  AnonShape_004AB810_8E5693D5 *pAVar6;
  STT3DSprC *pSVar7;
  uint uVar8;
  uint uVar9;
  STWorldObject *this_01;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar10;
  undefined4 unaff_ESI;
  AnonShape_004D11D0_880D99AA *pAVar11;
  int iVar12;
  undefined4 *puVar13;
  void *unaff_EDI;
  undefined4 *puVar14;
  STT3DSprC **ppSVar15;
  short sVar16;
  short sVar17;
  TLOEmbryoTy **ppTVar18;
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
  undefined4 local_1c;
  undefined4 local_10;
  int local_c;
  TLOEmbryoTy *local_8;
  
  puVar14 = (undefined4 *)0x0;
  local_c = 0;
  local_cc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_cc;
  local_3c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_3c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_cc.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x166,0,iVar3,
                                &DAT_007a4ccc,s_Int_TLOEmbryoTy__Create_LPtrTy___007bf428);
    if (iVar12 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x167);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (local_3c != (TLOEmbryoTy *)0x0) {
    puVar14 = (undefined4 *)&local_3c->field_0x231;
  }
  pAVar11 = param_1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar14 = *(undefined4 *)pAVar11;
    pAVar11 = (AnonShape_004D11D0_880D99AA *)&pAVar11->field_0x4;
    puVar14 = puVar14 + 1;
  }
  *(undefined2 *)puVar14 = *(undefined2 *)pAVar11;
  *(undefined1 *)((int)puVar14 + 2) = pAVar11->field_0x2;
  local_3c->field_0368 = local_3c->field_0259 + -0x32;
  uVar4 = GetPlayerRaceId(local_3c->field_0x24);
  this_00->field_036C = (uVar4 & 0xff) - 1;
  iVar3 = GetPlayerRaceId(this_00->field_0x24);
  uVar4 = (uint)((char)iVar3 == '\x03');
  this_00->field_0370 = uVar4;
  if (uVar4 == 0) {
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
  iVar3 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x25d,*(short *)&this_00->field_0x261
                             ,this_00->field_0265,1);
  if (iVar3 != 0) {
    RaiseInternalException
              (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x66);
  }
  thunk_FUN_0041d900(this_00,*(short *)&this_00->field_0x25d,*(short *)&this_00->field_0x261,
                     this_00->field_0265);
  if (this_00->field_002C == 0) {
    local_c = 1;
  }
  else if (this_00->field_002C == 1) {
    local_c = 2;
  }
  iVar3 = *(int *)&this_00->field_0x261;
  if (iVar3 < iVar3 + local_c) {
    do {
      iVar12 = *(int *)&this_00->field_0x25d;
      if (iVar12 < iVar12 + local_c) {
        do {
          sVar16 = (short)iVar12;
          sVar17 = (short)iVar3;
          thunk_FUN_004960d0(sVar16,sVar17,this_00->field_0265);
          sVar1 = this_00->field_0265;
          if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar17 < 0)) ||
              ((g_worldGrid.sizeY <= sVar17 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
            this_01 = (STWorldObject *)0x0;
          }
          else {
            this_01 = g_worldGrid.cells
                      [(int)sVar17 * (int)g_worldGrid.sizeX +
                       (int)sVar1 * (int)g_worldGrid.planeStride + (int)sVar16].objects[1];
          }
          if ((this_01 != (STWorldObject *)0x0) && (this_01->value_20 == 0xbe)) {
            thunk_FUN_00630110(this_01,(char)*(undefined4 *)&this_00->field_0x24);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)&this_00->field_0x25d + local_c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)&this_00->field_0x261 + local_c);
  }
  puVar14 = (undefined4 *)0x0;
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
    *(undefined4 *)&g_playerRuntime[*(int *)&this_00->field_0x24].field_0x9ca = 1;
  }
  if (PTR_007fa170 == (DArrayTy *)0x0) {
    PTR_007fa170 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
  }
  local_2c = this_00;
  Library::DKW::TBL::FUN_006ae1c0(&PTR_007fa170->flags,&local_2c);
  iVar3 = this_00->field_0259;
  if (iVar3 == 100) {
    if (g_playerRuntime[*(int *)&this_00->field_0x24].field2166_0x9d6 == (DArrayTy *)0x0) {
      pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      g_playerRuntime[*(int *)&this_00->field_0x24].field2166_0x9d6 = pDVar5;
    }
    ppTVar18 = &local_8;
    local_8 = this_00;
    pDVar5 = g_playerRuntime[*(int *)&this_00->field_0x24].field2166_0x9d6;
cf_common_join_004D1763:
    Library::DKW::TBL::FUN_006ae1c0(&pDVar5->flags,ppTVar18);
  }
  else {
    if (iVar3 == 0x4d) {
      if (g_playerRuntime[*(int *)&this_00->field_0x24].field2169_0x9e2 == (DArrayTy *)0x0) {
        pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        g_playerRuntime[*(int *)&this_00->field_0x24].field2169_0x9e2 = pDVar5;
      }
      ppTVar18 = &local_40;
      local_40 = this_00;
      pDVar5 = g_playerRuntime[*(int *)&this_00->field_0x24].field2169_0x9e2;
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x43) {
      if (g_playerRuntime[*(int *)&this_00->field_0x24].field2172_0x9ee == (DArrayTy *)0x0) {
        pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        g_playerRuntime[*(int *)&this_00->field_0x24].field2172_0x9ee = pDVar5;
      }
      ppTVar18 = &local_44;
      local_44 = this_00;
      pDVar5 = g_playerRuntime[*(int *)&this_00->field_0x24].field2172_0x9ee;
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x73) {
      if (g_playerRuntime[*(int *)&this_00->field_0x24].field2173_0x9f2 == (DArrayTy *)0x0) {
        pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        g_playerRuntime[*(int *)&this_00->field_0x24].field2173_0x9f2 = pDVar5;
      }
      ppTVar18 = &local_30;
      local_30 = this_00;
      pDVar5 = g_playerRuntime[*(int *)&this_00->field_0x24].field2173_0x9f2;
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x3a) {
      if (PTR_007fa16c == (DArrayTy *)0x0) {
        PTR_007fa16c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      }
      ppTVar18 = &local_48;
      local_48 = this_00;
      pDVar5 = PTR_007fa16c;
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x65) {
      if (g_playerRuntime[*(int *)&this_00->field_0x24].field2170_0x9e6 == (DArrayTy *)0x0) {
        pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        g_playerRuntime[*(int *)&this_00->field_0x24].field2170_0x9e6 = pDVar5;
      }
      ppTVar18 = &local_34;
      local_34 = this_00;
      pDVar5 = g_playerRuntime[*(int *)&this_00->field_0x24].field2170_0x9e6;
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x3b) {
      if (g_playerRuntime[*(int *)&this_00->field_0x24].field2171_0x9ea == (DArrayTy *)0x0) {
        pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        g_playerRuntime[*(int *)&this_00->field_0x24].field2171_0x9ea = pDVar5;
      }
      ppTVar18 = &local_38;
      local_38 = this_00;
      pDVar5 = g_playerRuntime[*(int *)&this_00->field_0x24].field2171_0x9ea;
      goto cf_common_join_004D1763;
    }
  }
  if (this_00->field_023D != 1) {
    if (this_00->field_023D == 2) {
      if (this_00 != (TLOEmbryoTy *)0x0) {
        puVar14 = &this_00->field_02A0;
      }
      puVar13 = (undefined4 *)&param_1->field_0x6f;
      for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      local_28 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
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
      local_28[*(int *)&this_00->field_0x2f0] = DAT_0080678c;
      if (this_00->field_0370 != 0) {
        local_28[*(int *)&this_00->field_0x2f0 + -1] = DAT_0080678c;
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
      if (pAVar6 == (AnonShape_004AB810_8E5693D5 *)0x0) {
        pSVar7 = (STT3DSprC *)0x0;
      }
      else {
        pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
      }
      this_00->field_035C = pSVar7;
      iVar3 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
                              this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                   0x13d);
      }
      if (this_00->field_002C == 1) {
        uVar4 = thunk_FUN_004ad650((int)this_00->field_035C);
        FUN_006e9210((void *)this_00->field_0211,uVar4);
      }
      puVar14 = local_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      local_28[0xe] = DAT_00806764;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      STT3DSprC::RestoreSpr
                (this_00->field_035C,(int *)&local_28,
                 (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + param_1->field_0133));
      uVar4 = this_00->field_02F4;
      iVar3 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      uVar8 = thunk_FUN_004ad650((int)this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,uVar8,iVar3,uVar4);
      puVar14 = local_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      local_28[0xe] = DAT_0080678c;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      if (this_00->field_0370 == 0) {
        uVar4 = 0xb;
        local_8 = (TLOEmbryoTy *)&param_1[1].field_0xb;
        ppSVar15 = &this_00->field_0350;
        do {
          pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
          if (pAVar6 == (AnonShape_004AB810_8E5693D5 *)0x0) {
            pSVar7 = (STT3DSprC *)0x0;
          }
          else {
            pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
          }
          *ppSVar15 = pSVar7;
          iVar3 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
                                  this_00->field_02F8,this_00->field_02FC,0x11);
          if (iVar3 != 0) {
            RaiseInternalException
                      (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc
                       ,0x152);
          }
          uVar8 = uVar4;
          iVar3 = thunk_FUN_004ad650((int)&this_00->field_01D5);
          uVar9 = thunk_FUN_004ad650((int)*ppSVar15);
          FUN_006ea340((void *)this_00->field_0211,uVar9,iVar3,uVar8);
          STT3DSprC::RestoreSpr
                    (*ppSVar15,(int *)&local_28,
                     (AnonShape_004AD790_77673787 *)(&param_1->field_0x0 + (int)local_8->field_0000)
                    );
          uVar4 = uVar4 - 1;
          local_8 = (TLOEmbryoTy *)&local_8->field_0x4;
          ppSVar15 = ppSVar15 + 1;
        } while (8 < (int)uVar4);
      }
      FreeAndNull(&local_28);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(&param_1->field_0x0 + param_1->field_0123))
      ;
      thunk_FUN_00419cf0((int *)this_00,extraout_EDX,CONCAT22(extraout_var,this_00->field_0032));
    }
    else {
      iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x160,0,0,&DAT_007a4ccc
                                 ,s_I_don_t_now_what_I_must_do___007bf498);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
    }
    goto LAB_004d22a1;
  }
  this_00->field_02AC = PTR_00802a38->field_00E4;
  uVar10 = PTR_00802a38->field_00E4;
  this_00->field_02B4 = 1;
  this_00->field_02B0 = uVar10;
  this_00->field_02A4 = 0;
  pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pAVar6 == (AnonShape_004AB810_8E5693D5 *)0x0) {
    pSVar7 = (STT3DSprC *)0x0;
  }
  else {
    pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
  }
  this_00->field_035C = pSVar7;
  iVar3 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
                          this_00->field_02F8,this_00->field_02FC,0x11);
  if (iVar3 != 0) {
    RaiseInternalException
              (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,200);
  }
  if (this_00->field_0241 == 0) {
    iVar3 = STT3DSprC::LoadSequence(this_00->field_035C,0xe,DAT_00806764,s_tlo_emb5_007ad464,0x1d);
    if (iVar3 != 0) {
      iVar12 = 0xca;
LAB_004d1bda:
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                 iVar12);
    }
  }
  else if (this_00->field_0241 == 1) {
    uVar4 = thunk_FUN_004ad650((int)this_00->field_035C);
    FUN_006e9210((void *)this_00->field_0211,uVar4);
    iVar3 = STT3DSprC::LoadSequence
                      (this_00->field_035C,0xe,DAT_00806764,s_tlo_emb5_big_007ad470,0x1d);
    if (iVar3 != 0) {
      iVar12 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  puVar14 = &this_00->field_01D5;
  uVar4 = (-(uint)(this_00->field_0370 != 0) & 4) + 7;
  this_00->field_02F4 = uVar4;
  iVar3 = thunk_FUN_004ad650((int)puVar14);
  uVar8 = thunk_FUN_004ad650((int)this_00->field_035C);
  FUN_006ea340((void *)this_00->field_0211,uVar8,iVar3,uVar4);
  thunk_FUN_004ad3c0(this_00->field_035C,(float)this_00->field_01F9,(float)this_00->field_01FD,
                     (float)this_00->field_0201);
  uVar4 = thunk_FUN_004ab050();
  uVar4 = uVar4 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  wsprintfA(local_88,s__s_1i_007ac908,(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar4);
  iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,0xe,DAT_0080678c,local_88,0x1d);
  if (iVar3 != 0) {
    RaiseInternalException
              (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0xd4);
  }
  iVar3 = this_00->field_0370;
  if (iVar3 == 0) {
LAB_004d1fef:
    if (this_00->field_0241 == 0) {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)puVar14,(-(iVar3 != 0) & 3U) + 6,DAT_0080678c,
                         s_tlo_emb2_007ad434,0x1d);
      if (iVar3 != 0) {
        iVar12 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((this_00->field_0241 == 1) &&
            (iVar3 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)puVar14,(-(iVar3 != 0) & 3U) + 6,DAT_0080678c,
                                s_tlo_emb3_007ad440,0x1d), iVar3 != 0)) {
      iVar12 = 0x102;
LAB_004d204d:
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                 iVar12);
    }
    this_00->field_02EC = 1;
    (*(code *)this_00->field_0000->field_0090)(3,0x360);
    *(uint *)&this_00->field_0x2f0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
    iVar3 = this_00->field_02EC + this_00->field_0241 * 4;
    thunk_FUN_004abce0(puVar14,this_00->field_0x2f0,*(int *)(this_00->field_0364 + iVar3 * 8),
                       *(int *)(this_00->field_0364 + 4 + iVar3 * 8),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar14,this_00->field_0x2f0,
               *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8))
    ;
    STT3DSprC::StartShow((STT3DSprC *)puVar14,this_00->field_0x2f0,PTR_00802a38->field_00E4);
    local_8 = (TLOEmbryoTy *)&DAT_0000000b;
    ppSVar15 = &this_00->field_0350;
    do {
      pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pAVar6 == (AnonShape_004AB810_8E5693D5 *)0x0) {
        pSVar7 = (STT3DSprC *)0x0;
      }
      else {
        pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
      }
      *ppSVar15 = pSVar7;
      iVar3 = STT3DSprC::Init(pSVar7,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
                              this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                   0x10d);
      }
      iVar3 = STT3DSprC::LoadSequence(*ppSVar15,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                   0x10e);
      }
      pTVar19 = local_8;
      iVar3 = thunk_FUN_004ad650((int)puVar14);
      uVar4 = thunk_FUN_004ad650((int)*ppSVar15);
      FUN_006ea340((void *)this_00->field_0211,uVar4,iVar3,(uint)pTVar19);
      thunk_FUN_004ad3c0(*ppSVar15,(float)this_00->field_01F9,(float)this_00->field_01FD,
                         (float)this_00->field_0201);
      ppSVar15 = ppSVar15 + 1;
      local_8 = (TLOEmbryoTy *)((int)&local_8[-1].field_0370 + 3);
      uVar10 = extraout_EDX_02;
    } while (8 < (int)local_8);
  }
  else {
    iVar12 = this_00->field_0259;
    if (((iVar12 == 0x6c) && (this_00->field_0251 == 3)) || ((0x53 < iVar12 && (iVar12 < 0x5b)))) {
      if ((iVar3 == 0) ||
         (((iVar12 = this_00->field_0259, iVar12 != 0x6c || (this_00->field_0251 != 3)) &&
          ((iVar12 < 0x54 || (0x5a < iVar12)))))) goto LAB_004d1fef;
      this_00->field_02EC = 2;
      *(undefined4 *)&this_00->field_0x2f0 = 0xb;
      if (this_00->field_0241 == 1) {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar14,this_00->field_0x2f0,DAT_0080678c,s_si_emb6_007ad458
                           ,0x1d);
        if (iVar3 != 0) {
          iVar12 = 0xef;
LAB_004d1f0b:
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     iVar12);
        }
      }
      else {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar14,this_00->field_0x2f0,DAT_0080678c,s_si_emb5_007ad44c
                           ,0x1d);
        if (iVar3 != 0) {
          iVar12 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar3 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      this_00->field_02F4 = iVar3;
      STT3DSprC::UnLoadSequence((STT3DSprC *)puVar14,(byte)iVar3);
      uVar4 = this_00->field_02F4;
      iVar3 = thunk_FUN_004ad650((int)puVar14);
      uVar8 = thunk_FUN_004ad650((int)this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,uVar8,iVar3,uVar4);
      STT3DSprC::StartShow((STT3DSprC *)puVar14,this_00->field_0x2f0,PTR_00802a38->field_00E4);
      (*(code *)this_00->field_0000->field_0090)(3,0x362);
      thunk_FUN_004abce0(this_00->field_035C,0xe,0,
                         **(int **)(this_00->field_035C->field_0020 + 0x1f8) + -1,'\0');
      STT3DSprC::SetCurFase(this_00->field_035C,'\x0e',0);
      STT3DSprC::StartShow(this_00->field_035C,0xe,PTR_00802a38->field_00E4);
      thunk_FUN_004ad460(this_00->field_035C,0);
      thunk_FUN_004ad5e0((int)puVar14);
      uVar10 = extraout_EDX_01;
    }
    else {
      if (this_00->field_0241 == 0) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,9,DAT_0080678c,s_si_emb1_007bf470,0x1d)
        ;
        if (iVar3 != 0) {
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     0xd9);
        }
        wsprintfA(local_88,s_si_emb1_id_1d_007bf460,*(undefined4 *)&this_00->field_0x24);
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar14,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar3 != 0) {
          iVar12 = 0xdb;
LAB_004d1df8:
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     iVar12);
        }
      }
      else if (this_00->field_0241 == 1) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,9,DAT_0080678c,s_si_emb4_007bf48c,0x1d)
        ;
        if (iVar3 != 0) {
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     0xdf);
        }
        wsprintfA(local_88,s_si_emb4_id_1d_007bf47c,*(undefined4 *)&this_00->field_0x24);
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar14,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar3 != 0) {
          iVar12 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      this_00->field_02EC = 0;
      *(uint *)&this_00->field_0x2f0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      thunk_FUN_004d10a0(this_00,0);
      STT3DSprC::StartShow((STT3DSprC *)puVar14,this_00->field_0x2f0,PTR_00802a38->field_00E4);
      STT3DSprC::StartShow((STT3DSprC *)puVar14,this_00->field_0x2f0 - 1,PTR_00802a38->field_00E4);
      (**(code **)*puVar14)();
      uVar10 = extraout_EDX_00;
    }
  }
  thunk_FUN_00419c70((int *)this_00,uVar10,(uint)(this_00->field_023D == 0));
  this_00->field_02D8 = 0;
  this_00->field_02D4 = 0;
  this_00->field_02D0 = 0;
  this_00->field_02CC = 0;
  iVar3 = (this_00->field_0368 * 3 + this_00->field_036C) * 4;
  thunk_FUN_004d76e0(this_00->field_0x24,0,this_00->field_0018,*(int *)(&DAT_008545ac + iVar3),
                     *(int *)(&DAT_007e1c50 + iVar3),*(int *)(&DAT_007e24fc + iVar3),
                     *(int *)(&DAT_007e3160 + iVar3));
  iVar3 = thunk_FUN_004b7520(CONCAT31((int3)((uint)this_00->field_0259 >> 8),this_00->field_0x24),
                             this_00->field_0259);
  if (iVar3 != 0) {
    iVar3 = (*(code *)this_00->field_0000->field_002C)();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar3 >> 8),this_00->field_0x24),iVar3);
  }
  thunk_FUN_0041c3f0(this_00,(undefined *)0x5);
LAB_004d22a1:
  thunk_FUN_0041f630((AnonShape_0041F630_B1BEE81C *)this_00);
  g_currentExceptionFrame = local_cc.previous;
  return 0;
}

