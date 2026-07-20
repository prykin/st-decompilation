
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::Create */

int __thiscall TLOEmbryoTy::Create(TLOEmbryoTy *this,undefined4 *param_1)

{
  short sVar1;
  code *pcVar2;
  TLOEmbryoTy *this_00;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  STT3DSprC *pSVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *this_01;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar10;
  undefined4 unaff_ESI;
  int iVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  STT3DSprC **ppSVar13;
  short sVar14;
  short sVar15;
  TLOEmbryoTy **ppTVar16;
  TLOEmbryoTy *pTVar17;
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
  
  puVar12 = (undefined4 *)0x0;
  local_c = 0;
  local_cc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_cc;
  local_3c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_3c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_cc.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x166,0,iVar3,
                                &DAT_007a4ccc,s_Int_TLOEmbryoTy__Create_LPtrTy___007bf428);
    if (iVar11 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x167);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (local_3c != (TLOEmbryoTy *)0x0) {
    puVar12 = (undefined4 *)&local_3c->field_0x231;
  }
  puVar9 = param_1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar9;
  *(undefined1 *)((int)puVar12 + 2) = *(undefined1 *)((int)puVar9 + 2);
  local_3c->field_0368 = local_3c->field_0259 + -0x32;
  uVar4 = thunk_FUN_004406c0(local_3c->field_0x24);
  this_00->field_036C = (uVar4 & 0xff) - 1;
  iVar3 = thunk_FUN_004406c0(this_00->field_0x24);
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
      iVar11 = *(int *)&this_00->field_0x25d;
      if (iVar11 < iVar11 + local_c) {
        do {
          sVar14 = (short)iVar11;
          sVar15 = (short)iVar3;
          thunk_FUN_004960d0(sVar14,sVar15,this_00->field_0265);
          sVar1 = this_00->field_0265;
          if (((((sVar14 < 0) || (SHORT_007fb240 <= sVar14)) || (sVar15 < 0)) ||
              ((SHORT_007fb242 <= sVar15 || (sVar1 < 0)))) || (SHORT_007fb244 <= sVar1)) {
            this_01 = (void *)0x0;
          }
          else {
            this_01 = *(void **)(DAT_007fb248 + 4 +
                                ((int)sVar15 * (int)SHORT_007fb240 +
                                 (int)sVar1 * (int)SHORT_007fb246 + (int)sVar14) * 8);
          }
          if ((this_01 != (void *)0x0) && (*(int *)((int)this_01 + 0x20) == 0xbe)) {
            thunk_FUN_00630110(this_01,(char)*(undefined4 *)&this_00->field_0x24);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)&this_00->field_0x25d + local_c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)&this_00->field_0x261 + local_c);
  }
  puVar12 = (undefined4 *)0x0;
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
    *(undefined4 *)(&DAT_007f57ea + *(int *)&this_00->field_0x24 * 0xa62) = 1;
  }
  if (DAT_007fa170 == (uint *)0x0) {
    DAT_007fa170 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
  }
  local_2c = this_00;
  Library::DKW::TBL::FUN_006ae1c0(DAT_007fa170,&local_2c);
  iVar3 = this_00->field_0259;
  if (iVar3 == 100) {
    if (*(int *)(&DAT_007f57f6 + *(int *)&this_00->field_0x24 * 0xa62) == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      *(uint **)(&DAT_007f57f6 + *(int *)&this_00->field_0x24 * 0xa62) = puVar5;
    }
    ppTVar16 = &local_8;
    local_8 = this_00;
    puVar5 = *(uint **)(&DAT_007f57f6 + *(int *)&this_00->field_0x24 * 0xa62);
cf_common_join_004D1763:
    Library::DKW::TBL::FUN_006ae1c0(puVar5,ppTVar16);
  }
  else {
    if (iVar3 == 0x4d) {
      if (*(int *)(&DAT_007f5802 + *(int *)&this_00->field_0x24 * 0xa62) == 0) {
        puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5802 + *(int *)&this_00->field_0x24 * 0xa62) = puVar5;
      }
      ppTVar16 = &local_40;
      local_40 = this_00;
      puVar5 = *(uint **)(&DAT_007f5802 + *(int *)&this_00->field_0x24 * 0xa62);
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x43) {
      if (*(int *)(&DAT_007f580e + *(int *)&this_00->field_0x24 * 0xa62) == 0) {
        puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f580e + *(int *)&this_00->field_0x24 * 0xa62) = puVar5;
      }
      ppTVar16 = &local_44;
      local_44 = this_00;
      puVar5 = *(uint **)(&DAT_007f580e + *(int *)&this_00->field_0x24 * 0xa62);
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x73) {
      if (*(int *)(&DAT_007f5812 + *(int *)&this_00->field_0x24 * 0xa62) == 0) {
        puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5812 + *(int *)&this_00->field_0x24 * 0xa62) = puVar5;
      }
      ppTVar16 = &local_30;
      local_30 = this_00;
      puVar5 = *(uint **)(&DAT_007f5812 + *(int *)&this_00->field_0x24 * 0xa62);
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x3a) {
      if (DAT_007fa16c == (uint *)0x0) {
        DAT_007fa16c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      }
      ppTVar16 = &local_48;
      local_48 = this_00;
      puVar5 = DAT_007fa16c;
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x65) {
      if (*(int *)(&DAT_007f5806 + *(int *)&this_00->field_0x24 * 0xa62) == 0) {
        puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5806 + *(int *)&this_00->field_0x24 * 0xa62) = puVar5;
      }
      ppTVar16 = &local_34;
      local_34 = this_00;
      puVar5 = *(uint **)(&DAT_007f5806 + *(int *)&this_00->field_0x24 * 0xa62);
      goto cf_common_join_004D1763;
    }
    if (iVar3 == 0x3b) {
      if (*(int *)(&DAT_007f580a + *(int *)&this_00->field_0x24 * 0xa62) == 0) {
        puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f580a + *(int *)&this_00->field_0x24 * 0xa62) = puVar5;
      }
      ppTVar16 = &local_38;
      local_38 = this_00;
      puVar5 = *(uint **)(&DAT_007f580a + *(int *)&this_00->field_0x24 * 0xa62);
      goto cf_common_join_004D1763;
    }
  }
  if (this_00->field_023D != 1) {
    if (this_00->field_023D == 2) {
      if (this_00 != (TLOEmbryoTy *)0x0) {
        puVar12 = &this_00->field_02A0;
      }
      puVar9 = (undefined4 *)((int)param_1 + 0x6f);
      for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
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
                 (undefined4 *)(*(int *)((int)param_1 + 299) + (int)param_1));
      puVar12 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (puVar12 == (undefined4 *)0x0) {
        pSVar6 = (STT3DSprC *)0x0;
      }
      else {
        pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(puVar12);
      }
      this_00->field_035C = pSVar6;
      iVar3 = STT3DSprC::Init(pSVar6,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
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
      puVar12 = local_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      local_28[0xe] = DAT_00806764;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      STT3DSprC::RestoreSpr
                (this_00->field_035C,(int *)&local_28,
                 (undefined4 *)(*(int *)((int)param_1 + 0x133) + (int)param_1));
      uVar4 = this_00->field_02F4;
      iVar3 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      uVar7 = thunk_FUN_004ad650((int)this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,uVar7,iVar3,uVar4);
      puVar12 = local_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      local_28[0xe] = DAT_0080678c;
      local_24 = 0;
      local_10 = 0;
      local_1c = 0;
      if (this_00->field_0370 == 0) {
        uVar4 = 0xb;
        local_8 = (TLOEmbryoTy *)((int)param_1 + 0x143);
        ppSVar13 = &this_00->field_0350;
        do {
          puVar12 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
          if (puVar12 == (undefined4 *)0x0) {
            pSVar6 = (STT3DSprC *)0x0;
          }
          else {
            pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(puVar12);
          }
          *ppSVar13 = pSVar6;
          iVar3 = STT3DSprC::Init(pSVar6,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
                                  this_00->field_02F8,this_00->field_02FC,0x11);
          if (iVar3 != 0) {
            RaiseInternalException
                      (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc
                       ,0x152);
          }
          uVar7 = uVar4;
          iVar3 = thunk_FUN_004ad650((int)&this_00->field_01D5);
          uVar8 = thunk_FUN_004ad650((int)*ppSVar13);
          FUN_006ea340((void *)this_00->field_0211,uVar8,iVar3,uVar7);
          STT3DSprC::RestoreSpr
                    (*ppSVar13,(int *)&local_28,(undefined4 *)(local_8->field_0000 + (int)param_1));
          uVar4 = uVar4 - 1;
          local_8 = (TLOEmbryoTy *)&local_8->field_0x4;
          ppSVar13 = ppSVar13 + 1;
        } while (8 < (int)uVar4);
      }
      FUN_006ab060(&local_28);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,
                 (undefined4 *)(*(int *)((int)param_1 + 0x123) + (int)param_1));
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
  this_00->field_02AC = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uVar10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  this_00->field_02B4 = 1;
  this_00->field_02B0 = uVar10;
  this_00->field_02A4 = 0;
  puVar12 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (puVar12 == (undefined4 *)0x0) {
    pSVar6 = (STT3DSprC *)0x0;
  }
  else {
    pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(puVar12);
  }
  this_00->field_035C = pSVar6;
  iVar3 = STT3DSprC::Init(pSVar6,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
                          this_00->field_02F8,this_00->field_02FC,0x11);
  if (iVar3 != 0) {
    RaiseInternalException
              (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,200);
  }
  if (this_00->field_0241 == 0) {
    iVar3 = STT3DSprC::LoadSequence(this_00->field_035C,0xe,DAT_00806764,s_tlo_emb5_007ad464,0x1d);
    if (iVar3 != 0) {
      iVar11 = 0xca;
LAB_004d1bda:
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                 iVar11);
    }
  }
  else if (this_00->field_0241 == 1) {
    uVar4 = thunk_FUN_004ad650((int)this_00->field_035C);
    FUN_006e9210((void *)this_00->field_0211,uVar4);
    iVar3 = STT3DSprC::LoadSequence
                      (this_00->field_035C,0xe,DAT_00806764,s_tlo_emb5_big_007ad470,0x1d);
    if (iVar3 != 0) {
      iVar11 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  puVar12 = &this_00->field_01D5;
  uVar4 = (-(uint)(this_00->field_0370 != 0) & 4) + 7;
  this_00->field_02F4 = uVar4;
  iVar3 = thunk_FUN_004ad650((int)puVar12);
  uVar7 = thunk_FUN_004ad650((int)this_00->field_035C);
  FUN_006ea340((void *)this_00->field_0211,uVar7,iVar3,uVar4);
  thunk_FUN_004ad3c0(this_00->field_035C,(float)this_00->field_01F9,(float)this_00->field_01FD,
                     (float)this_00->field_0201);
  uVar4 = thunk_FUN_004ab050();
  uVar4 = uVar4 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  wsprintfA(local_88,s__s_1i_007ac908,(&PTR_s_tlo_embws1_007bf3e8)[this_00->field_036C],uVar4);
  iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)puVar12,0xe,DAT_0080678c,local_88,0x1d);
  if (iVar3 != 0) {
    RaiseInternalException
              (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0xd4);
  }
  iVar3 = this_00->field_0370;
  if (iVar3 == 0) {
LAB_004d1fef:
    if (this_00->field_0241 == 0) {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)puVar12,(-(iVar3 != 0) & 3U) + 6,DAT_0080678c,
                         s_tlo_emb2_007ad434,0x1d);
      if (iVar3 != 0) {
        iVar11 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((this_00->field_0241 == 1) &&
            (iVar3 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)puVar12,(-(iVar3 != 0) & 3U) + 6,DAT_0080678c,
                                s_tlo_emb3_007ad440,0x1d), iVar3 != 0)) {
      iVar11 = 0x102;
LAB_004d204d:
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                 iVar11);
    }
    this_00->field_02EC = 1;
    (**(code **)(this_00->field_0000 + 0x90))(3,0x360);
    *(uint *)&this_00->field_0x2f0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
    iVar3 = this_00->field_02EC + this_00->field_0241 * 4;
    thunk_FUN_004abce0(puVar12,this_00->field_0x2f0,*(int *)(this_00->field_0364 + iVar3 * 8),
                       *(int *)(this_00->field_0364 + 4 + iVar3 * 8),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar12,this_00->field_0x2f0,
               *(uint *)(this_00->field_0364 + (this_00->field_02EC + this_00->field_0241 * 4) * 8))
    ;
    STT3DSprC::StartShow
              ((STT3DSprC *)puVar12,this_00->field_0x2f0,*(undefined4 *)(DAT_00802a38 + 0xe4));
    local_8 = (TLOEmbryoTy *)&DAT_0000000b;
    ppSVar13 = &this_00->field_0350;
    do {
      puVar9 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (puVar9 == (undefined4 *)0x0) {
        pSVar6 = (STT3DSprC *)0x0;
      }
      else {
        pSVar6 = (STT3DSprC *)thunk_FUN_004ab810(puVar9);
      }
      *ppSVar13 = pSVar6;
      iVar3 = STT3DSprC::Init(pSVar6,DAT_008073cc,this_00->field_0300,this_00->field_0304,0,
                              this_00->field_02F8,this_00->field_02FC,0x11);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                   0x10d);
      }
      iVar3 = STT3DSprC::LoadSequence(*ppSVar13,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException
                  (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                   0x10e);
      }
      pTVar17 = local_8;
      iVar3 = thunk_FUN_004ad650((int)puVar12);
      uVar4 = thunk_FUN_004ad650((int)*ppSVar13);
      FUN_006ea340((void *)this_00->field_0211,uVar4,iVar3,(uint)pTVar17);
      thunk_FUN_004ad3c0(*ppSVar13,(float)this_00->field_01F9,(float)this_00->field_01FD,
                         (float)this_00->field_0201);
      ppSVar13 = ppSVar13 + 1;
      local_8 = (TLOEmbryoTy *)((int)&local_8[-1].field_0370 + 3);
      uVar10 = extraout_EDX_02;
    } while (8 < (int)local_8);
  }
  else {
    iVar11 = this_00->field_0259;
    if (((iVar11 == 0x6c) && (this_00->field_0251 == 3)) || ((0x53 < iVar11 && (iVar11 < 0x5b)))) {
      if ((iVar3 == 0) ||
         (((iVar11 = this_00->field_0259, iVar11 != 0x6c || (this_00->field_0251 != 3)) &&
          ((iVar11 < 0x54 || (0x5a < iVar11)))))) goto LAB_004d1fef;
      this_00->field_02EC = 2;
      *(undefined4 *)&this_00->field_0x2f0 = 0xb;
      if (this_00->field_0241 == 1) {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar12,this_00->field_0x2f0,DAT_0080678c,s_si_emb6_007ad458
                           ,0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xef;
LAB_004d1f0b:
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     iVar11);
        }
      }
      else {
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar12,this_00->field_0x2f0,DAT_0080678c,s_si_emb5_007ad44c
                           ,0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar3 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      this_00->field_02F4 = iVar3;
      STT3DSprC::UnLoadSequence((STT3DSprC *)puVar12,(byte)iVar3);
      uVar4 = this_00->field_02F4;
      iVar3 = thunk_FUN_004ad650((int)puVar12);
      uVar7 = thunk_FUN_004ad650((int)this_00->field_035C);
      FUN_006ea340((void *)this_00->field_0211,uVar7,iVar3,uVar4);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar12,this_00->field_0x2f0,*(undefined4 *)(DAT_00802a38 + 0xe4));
      (**(code **)(this_00->field_0000 + 0x90))(3,0x362);
      thunk_FUN_004abce0(this_00->field_035C,0xe,0,
                         **(int **)(this_00->field_035C->field_0020 + 0x1f8) + -1,'\0');
      STT3DSprC::SetCurFase(this_00->field_035C,'\x0e',0);
      STT3DSprC::StartShow(this_00->field_035C,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad460(this_00->field_035C,0);
      thunk_FUN_004ad5e0((int)puVar12);
      uVar10 = extraout_EDX_01;
    }
    else {
      if (this_00->field_0241 == 0) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)puVar12,9,DAT_0080678c,s_si_emb1_007bf470,0x1d)
        ;
        if (iVar3 != 0) {
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     0xd9);
        }
        wsprintfA(local_88,s_si_emb1_id_1d_007bf460,*(undefined4 *)&this_00->field_0x24);
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar12,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xdb;
LAB_004d1df8:
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     iVar11);
        }
      }
      else if (this_00->field_0241 == 1) {
        iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)puVar12,9,DAT_0080678c,s_si_emb4_007bf48c,0x1d)
        ;
        if (iVar3 != 0) {
          RaiseInternalException
                    (iVar3,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                     0xdf);
        }
        wsprintfA(local_88,s_si_emb4_id_1d_007bf47c,*(undefined4 *)&this_00->field_0x24);
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar12,(-(this_00->field_0370 != 0) & 3U) + 5,DAT_0080678c,
                           local_88,0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      this_00->field_02EC = 0;
      *(uint *)&this_00->field_0x2f0 = (-(uint)(this_00->field_0370 != 0) & 3) + 6;
      thunk_FUN_004d10a0(this_00,0);
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar12,this_00->field_0x2f0,*(undefined4 *)(DAT_00802a38 + 0xe4));
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar12,this_00->field_0x2f0 - 1,*(undefined4 *)(DAT_00802a38 + 0xe4))
      ;
      (**(code **)*puVar12)();
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
    iVar3 = (**(code **)(this_00->field_0000 + 0x2c))();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar3 >> 8),this_00->field_0x24),iVar3);
  }
  thunk_FUN_0041c3f0(this_00,(undefined *)0x5);
LAB_004d22a1:
  thunk_FUN_0041f630((int *)this_00);
  g_currentExceptionFrame = local_cc.previous;
  return 0;
}

