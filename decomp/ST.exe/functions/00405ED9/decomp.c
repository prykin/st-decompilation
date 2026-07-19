
int thunk_FUN_004d11d0(undefined4 *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  STT3DSprC *pSVar7;
  uint uVar8;
  uint uVar9;
  STT3DSprC *this;
  void *this_00;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar10;
  undefined4 unaff_ESI;
  int iVar11;
  void *unaff_EDI;
  STAllPlayersC *pSVar12;
  short sVar13;
  short sVar14;
  STAllPlayersC **ppSVar15;
  STAllPlayersC *pSVar16;
  InternalExceptionFrame IStack_cc;
  byte abStack_88 [64];
  STAllPlayersC *pSStack_48;
  STAllPlayersC *pSStack_44;
  STAllPlayersC *pSStack_40;
  STAllPlayersC *pSStack_3c;
  STAllPlayersC *pSStack_38;
  STAllPlayersC *pSStack_34;
  STAllPlayersC *pSStack_30;
  STAllPlayersC *pSStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  int iStack_c;
  STAllPlayersC *pSStack_8;
  
  pSVar12 = (STAllPlayersC *)0x0;
  iStack_c = 0;
  IStack_cc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_cc;
  iVar3 = __setjmp3(IStack_cc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_cc.previous;
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
  if (pSStack_3c != (STAllPlayersC *)0x0) {
    pSVar12 = pSStack_3c + 0x231;
  }
  puVar6 = param_1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar12 = pSVar12 + 4;
  }
  *(undefined2 *)pSVar12 = *(undefined2 *)puVar6;
  pSVar12[2] = *(STAllPlayersC *)((int)puVar6 + 2);
  *(int *)(pSStack_3c + 0x368) = *(int *)(pSStack_3c + 0x259) + -0x32;
  uVar4 = thunk_FUN_004406c0((char)pSStack_3c[0x24]);
  *(uint *)(pSStack_3c + 0x36c) = (uVar4 & 0xff) - 1;
  iVar3 = thunk_FUN_004406c0((char)pSStack_3c[0x24]);
  uVar4 = (uint)((char)iVar3 == '\x03');
  *(uint *)(pSStack_3c + 0x370) = uVar4;
  if (uVar4 == 0) {
    *(undefined **)(pSStack_3c + 0x364) = &DAT_007976c8;
  }
  else {
    *(undefined **)(pSStack_3c + 0x364) = &DAT_00797708;
  }
  if (*(int *)(&DAT_00791f38 + *(int *)(pSStack_3c + 0x368) * 4) == 2) {
    *(undefined **)(pSStack_3c + 0x360) = &DAT_007aca60;
  }
  else if (*(int *)(&DAT_00791f38 + *(int *)(pSStack_3c + 0x368) * 4) == 1) {
    *(undefined **)(pSStack_3c + 0x360) = &DAT_007ace00;
  }
  else {
    *(undefined **)(pSStack_3c + 0x360) = &DAT_007ac988;
  }
  thunk_FUN_00417a00(pSStack_3c,0);
  iVar3 = thunk_FUN_00417a20(pSStack_3c,*(short *)(pSStack_3c + 0x25d),
                             *(short *)(pSStack_3c + 0x261),*(short *)(pSStack_3c + 0x265),1);
  if (iVar3 != 0) {
    RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x66);
  }
  thunk_FUN_0041d900(pSStack_3c,*(short *)(pSStack_3c + 0x25d),*(short *)(pSStack_3c + 0x261),
                     *(short *)(pSStack_3c + 0x265));
  if (*(int *)(pSStack_3c + 0x2c) == 0) {
    iStack_c = 1;
  }
  else if (*(int *)(pSStack_3c + 0x2c) == 1) {
    iStack_c = 2;
  }
  iVar3 = *(int *)(pSStack_3c + 0x261);
  if (iVar3 < iVar3 + iStack_c) {
    do {
      iVar11 = *(int *)(pSStack_3c + 0x25d);
      if (iVar11 < iVar11 + iStack_c) {
        do {
          sVar13 = (short)iVar11;
          sVar14 = (short)iVar3;
          thunk_FUN_004960d0(sVar13,sVar14,*(short *)(pSStack_3c + 0x265));
          sVar1 = *(short *)(pSStack_3c + 0x265);
          if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar14 < 0)) ||
              ((DAT_007fb242 <= sVar14 || (sVar1 < 0)))) || (DAT_007fb244 <= sVar1)) {
            this_00 = (void *)0x0;
          }
          else {
            this_00 = *(void **)(DAT_007fb248 + 4 +
                                ((int)sVar14 * (int)DAT_007fb240 + (int)sVar1 * (int)DAT_007fb246 +
                                (int)sVar13) * 8);
          }
          if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x20) == 0xbe)) {
            thunk_FUN_00630110(this_00,(char)*(undefined4 *)(pSStack_3c + 0x24));
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(pSStack_3c + 0x25d) + iStack_c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(pSStack_3c + 0x261) + iStack_c);
  }
  pSVar12 = (STAllPlayersC *)0x0;
  if (*(int *)(pSStack_3c + 0x2c) == 0) {
    *(undefined4 *)(pSStack_3c + 0x2f8) = 0xb4;
    *(undefined4 *)(pSStack_3c + 0x2fc) = 0x8c;
    *(undefined4 *)(pSStack_3c + 0x300) = 0x5a;
    *(undefined4 *)(pSStack_3c + 0x304) = 0x45;
  }
  else if (*(int *)(pSStack_3c + 0x2c) == 1) {
    *(undefined4 *)(pSStack_3c + 0x2f8) = 0xf0;
    *(undefined4 *)(pSStack_3c + 0x2fc) = 0xbe;
    *(undefined4 *)(pSStack_3c + 0x300) = 0x78;
    *(undefined4 *)(pSStack_3c + 0x304) = 0x56;
  }
  if (*(int *)(pSStack_3c + 0x259) == 0x5c) {
    *(undefined4 *)(&DAT_007f57ea + *(int *)(pSStack_3c + 0x24) * 0xa62) = 1;
  }
  if (DAT_007fa170 == (uint *)0x0) {
    DAT_007fa170 = FUN_006ae290((uint *)0x0,10,4,10);
  }
  pSStack_2c = pSStack_3c;
  FUN_006ae1c0(DAT_007fa170,&pSStack_2c);
  iVar3 = *(int *)(pSStack_3c + 0x259);
  if (iVar3 == 100) {
    if (*(int *)(&DAT_007f57f6 + *(int *)(pSStack_3c + 0x24) * 0xa62) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
      *(uint **)(&DAT_007f57f6 + *(int *)(pSStack_3c + 0x24) * 0xa62) = puVar5;
    }
    ppSVar15 = &pSStack_8;
    pSStack_8 = pSStack_3c;
    puVar5 = *(uint **)(&DAT_007f57f6 + *(int *)(pSStack_3c + 0x24) * 0xa62);
LAB_004d1763:
    FUN_006ae1c0(puVar5,ppSVar15);
  }
  else {
    if (iVar3 == 0x4d) {
      if (*(int *)(&DAT_007f5802 + *(int *)(pSStack_3c + 0x24) * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5802 + *(int *)(pSStack_3c + 0x24) * 0xa62) = puVar5;
      }
      ppSVar15 = &pSStack_40;
      pSStack_40 = pSStack_3c;
      puVar5 = *(uint **)(&DAT_007f5802 + *(int *)(pSStack_3c + 0x24) * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x43) {
      if (*(int *)(&DAT_007f580e + *(int *)(pSStack_3c + 0x24) * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f580e + *(int *)(pSStack_3c + 0x24) * 0xa62) = puVar5;
      }
      ppSVar15 = &pSStack_44;
      pSStack_44 = pSStack_3c;
      puVar5 = *(uint **)(&DAT_007f580e + *(int *)(pSStack_3c + 0x24) * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x73) {
      if (*(int *)(&DAT_007f5812 + *(int *)(pSStack_3c + 0x24) * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5812 + *(int *)(pSStack_3c + 0x24) * 0xa62) = puVar5;
      }
      ppSVar15 = &pSStack_30;
      pSStack_30 = pSStack_3c;
      puVar5 = *(uint **)(&DAT_007f5812 + *(int *)(pSStack_3c + 0x24) * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x3a) {
      if (DAT_007fa16c == (uint *)0x0) {
        DAT_007fa16c = FUN_006ae290((uint *)0x0,10,4,10);
      }
      ppSVar15 = &pSStack_48;
      pSStack_48 = pSStack_3c;
      puVar5 = DAT_007fa16c;
      goto LAB_004d1763;
    }
    if (iVar3 == 0x65) {
      if (*(int *)(&DAT_007f5806 + *(int *)(pSStack_3c + 0x24) * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f5806 + *(int *)(pSStack_3c + 0x24) * 0xa62) = puVar5;
      }
      ppSVar15 = &pSStack_34;
      pSStack_34 = pSStack_3c;
      puVar5 = *(uint **)(&DAT_007f5806 + *(int *)(pSStack_3c + 0x24) * 0xa62);
      goto LAB_004d1763;
    }
    if (iVar3 == 0x3b) {
      if (*(int *)(&DAT_007f580a + *(int *)(pSStack_3c + 0x24) * 0xa62) == 0) {
        puVar5 = FUN_006ae290((uint *)0x0,10,4,10);
        *(uint **)(&DAT_007f580a + *(int *)(pSStack_3c + 0x24) * 0xa62) = puVar5;
      }
      ppSVar15 = &pSStack_38;
      pSStack_38 = pSStack_3c;
      puVar5 = *(uint **)(&DAT_007f580a + *(int *)(pSStack_3c + 0x24) * 0xa62);
      goto LAB_004d1763;
    }
  }
  if (*(int *)(pSStack_3c + 0x23d) != 1) {
    if (*(int *)(pSStack_3c + 0x23d) == 2) {
      if (pSStack_3c != (STAllPlayersC *)0x0) {
        pSVar12 = pSStack_3c + 0x2a0;
      }
      puVar6 = (undefined4 *)((int)param_1 + 0x6f);
      for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        pSVar12 = pSVar12 + 4;
      }
      puStack_28 = (undefined4 *)FUN_006aac70(0x44);
      puStack_28[1] = DAT_00806774;
      puStack_28[2] = DAT_00806774;
      *puStack_28 = DAT_00806774;
      puStack_28[0xf] = DAT_00806774;
      puStack_28[0x10] = DAT_0080678c;
      puStack_28[0xe] = DAT_0080678c;
      puStack_28[0xd] = DAT_0080678c;
      puStack_28[0xc] = DAT_0080678c;
      puStack_28[0xb] = 0;
      puStack_28[*(int *)(pSStack_3c + 0x2f4)] = DAT_0080678c;
      puStack_28[*(int *)(pSStack_3c + 0x2f0)] = DAT_0080678c;
      if (*(int *)(pSStack_3c + 0x370) != 0) {
        puStack_28[*(int *)(pSStack_3c + 0x2f0) + -1] = DAT_0080678c;
      }
      if (*(int *)(pSStack_3c + 0x2a0) != 0) {
        puStack_28[7] = DAT_00806764;
        puStack_28[6] = DAT_00806774;
      }
      uStack_1c = DAT_008073cc;
      uStack_24 = 0;
      uStack_10 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)(pSStack_3c + 0x1d5),(int *)&puStack_28,
                 (undefined4 *)(*(int *)((int)param_1 + 299) + (int)param_1));
      puVar6 = (undefined4 *)FUN_0072e530(0x40);
      if (puVar6 == (undefined4 *)0x0) {
        pSVar7 = (STT3DSprC *)0x0;
      }
      else {
        pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(puVar6);
      }
      *(STT3DSprC **)(pSStack_3c + 0x35c) = pSVar7;
      iVar3 = STT3DSprC::Init(pSVar7,DAT_008073cc,*(uint *)(pSStack_3c + 0x300),
                              *(uint *)(pSStack_3c + 0x304),0,*(uint *)(pSStack_3c + 0x2f8),
                              *(uint *)(pSStack_3c + 0x2fc),0x11);
      if (iVar3 != 0) {
        RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x13d)
        ;
      }
      if (*(int *)(pSStack_3c + 0x2c) == 1) {
        uVar4 = thunk_FUN_004ad650(*(int *)(pSStack_3c + 0x35c));
        FUN_006e9210(*(void **)(pSStack_3c + 0x211),uVar4);
      }
      puVar6 = puStack_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puStack_28[0xe] = DAT_00806764;
      uStack_24 = 0;
      uStack_10 = 0;
      uStack_1c = 0;
      STT3DSprC::RestoreSpr
                (*(STT3DSprC **)(pSStack_3c + 0x35c),(int *)&puStack_28,
                 (undefined4 *)(*(int *)((int)param_1 + 0x133) + (int)param_1));
      uVar4 = *(uint *)(pSStack_3c + 0x2f4);
      iVar3 = thunk_FUN_004ad650((int)(pSStack_3c + 0x1d5));
      uVar8 = thunk_FUN_004ad650(*(int *)(pSStack_3c + 0x35c));
      FUN_006ea340(*(void **)(pSStack_3c + 0x211),uVar8,iVar3,uVar4);
      puVar6 = puStack_28;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puStack_28[0xe] = DAT_0080678c;
      uStack_24 = 0;
      uStack_10 = 0;
      uStack_1c = 0;
      if (*(int *)(pSStack_3c + 0x370) == 0) {
        uVar4 = 0xb;
        pSStack_8 = (STAllPlayersC *)((int)param_1 + 0x143);
        pSVar12 = pSStack_3c + 0x350;
        do {
          puVar6 = (undefined4 *)FUN_0072e530(0x40);
          if (puVar6 == (undefined4 *)0x0) {
            pSVar7 = (STT3DSprC *)0x0;
          }
          else {
            pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(puVar6);
          }
          *(STT3DSprC **)pSVar12 = pSVar7;
          iVar3 = STT3DSprC::Init(pSVar7,DAT_008073cc,*(uint *)(pSStack_3c + 0x300),
                                  *(uint *)(pSStack_3c + 0x304),0,*(uint *)(pSStack_3c + 0x2f8),
                                  *(uint *)(pSStack_3c + 0x2fc),0x11);
          if (iVar3 != 0) {
            RaiseInternalException
                      (iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x152);
          }
          uVar8 = uVar4;
          iVar3 = thunk_FUN_004ad650((int)(pSStack_3c + 0x1d5));
          uVar9 = thunk_FUN_004ad650(*(int *)pSVar12);
          FUN_006ea340(*(void **)(pSStack_3c + 0x211),uVar9,iVar3,uVar8);
          STT3DSprC::RestoreSpr
                    (*(STT3DSprC **)pSVar12,(int *)&puStack_28,
                     (undefined4 *)(*(int *)pSStack_8 + (int)param_1));
          uVar4 = uVar4 - 1;
          pSStack_8 = pSStack_8 + 4;
          pSVar12 = pSVar12 + 4;
        } while (8 < (int)uVar4);
      }
      FUN_006ab060(&puStack_28);
      STAllPlayersC::RestoreGObjData
                (pSStack_3c,(undefined4 *)(*(int *)((int)param_1 + 0x123) + (int)param_1));
      thunk_FUN_00419cf0((int *)pSStack_3c,extraout_EDX,
                         CONCAT22(extraout_var,*(undefined2 *)(pSStack_3c + 0x32)));
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
  *(undefined4 *)(pSStack_3c + 0x2ac) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uVar10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  *(undefined4 *)(pSStack_3c + 0x2b4) = 1;
  *(undefined4 *)(pSStack_3c + 0x2b0) = uVar10;
  *(undefined4 *)(pSStack_3c + 0x2a4) = 0;
  puVar6 = (undefined4 *)FUN_0072e530(0x40);
  if (puVar6 == (undefined4 *)0x0) {
    pSVar7 = (STT3DSprC *)0x0;
  }
  else {
    pSVar7 = (STT3DSprC *)thunk_FUN_004ab810(puVar6);
  }
  *(STT3DSprC **)(pSStack_3c + 0x35c) = pSVar7;
  iVar3 = STT3DSprC::Init(pSVar7,DAT_008073cc,*(uint *)(pSStack_3c + 0x300),
                          *(uint *)(pSStack_3c + 0x304),0,*(uint *)(pSStack_3c + 0x2f8),
                          *(uint *)(pSStack_3c + 0x2fc),0x11);
  if (iVar3 != 0) {
    RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,200);
  }
  if (*(int *)(pSStack_3c + 0x241) == 0) {
    iVar3 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)(pSStack_3c + 0x35c),0xe,DAT_00806764,
                       (byte *)s_tlo_emb5_007ad464,0x1d);
    if (iVar3 != 0) {
      iVar11 = 0xca;
LAB_004d1bda:
      RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar11);
    }
  }
  else if (*(int *)(pSStack_3c + 0x241) == 1) {
    uVar4 = thunk_FUN_004ad650(*(int *)(pSStack_3c + 0x35c));
    FUN_006e9210(*(void **)(pSStack_3c + 0x211),uVar4);
    iVar3 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)(pSStack_3c + 0x35c),0xe,DAT_00806764,
                       (byte *)s_tlo_emb5_big_007ad470,0x1d);
    if (iVar3 != 0) {
      iVar11 = 0xcc;
      goto LAB_004d1bda;
    }
  }
  pSVar7 = (STT3DSprC *)(pSStack_3c + 0x1d5);
  uVar4 = (-(uint)(*(int *)(pSStack_3c + 0x370) != 0) & 4) + 7;
  *(uint *)(pSStack_3c + 0x2f4) = uVar4;
  iVar3 = thunk_FUN_004ad650((int)pSVar7);
  uVar8 = thunk_FUN_004ad650(*(int *)(pSStack_3c + 0x35c));
  FUN_006ea340(*(void **)(pSStack_3c + 0x211),uVar8,iVar3,uVar4);
  thunk_FUN_004ad3c0(*(void **)(pSStack_3c + 0x35c),*(float *)(pSStack_3c + 0x1f9),
                     *(float *)(pSStack_3c + 0x1fd),*(float *)(pSStack_3c + 0x201));
  uVar4 = thunk_FUN_004ab050();
  uVar4 = uVar4 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  wsprintfA((LPSTR)abStack_88,s__s_1i_007ac908,
            (&PTR_s_tlo_embws1_007bf3e8)[*(int *)(pSStack_3c + 0x36c)],uVar4);
  iVar3 = STT3DSprC::LoadSequence(pSVar7,0xe,DAT_0080678c,abStack_88,0x1d);
  if (iVar3 != 0) {
    RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0xd4);
  }
  iVar3 = *(int *)(pSStack_3c + 0x370);
  if (iVar3 == 0) {
LAB_004d1fef:
    if (*(int *)(pSStack_3c + 0x241) == 0) {
      iVar3 = STT3DSprC::LoadSequence
                        (pSVar7,(-(iVar3 != 0) & 3U) + 6,DAT_0080678c,(byte *)s_tlo_emb2_007ad434,
                         0x1d);
      if (iVar3 != 0) {
        iVar11 = 0x101;
        goto LAB_004d204d;
      }
    }
    else if ((*(int *)(pSStack_3c + 0x241) == 1) &&
            (iVar3 = STT3DSprC::LoadSequence
                               (pSVar7,(-(iVar3 != 0) & 3U) + 6,DAT_0080678c,
                                (byte *)s_tlo_emb3_007ad440,0x1d), iVar3 != 0)) {
      iVar11 = 0x102;
LAB_004d204d:
      RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar11);
    }
    *(undefined4 *)(pSStack_3c + 0x2ec) = 1;
    (**(code **)(*(int *)pSStack_3c + 0x90))(3,0x360);
    *(uint *)(pSStack_3c + 0x2f0) = (-(uint)(*(int *)(pSStack_3c + 0x370) != 0) & 3) + 6;
    iVar3 = *(int *)(pSStack_3c + 0x2ec) + *(int *)(pSStack_3c + 0x241) * 4;
    thunk_FUN_004abce0(pSVar7,(byte)pSStack_3c[0x2f0],
                       *(int *)(*(int *)(pSStack_3c + 0x364) + iVar3 * 8),
                       *(int *)(*(int *)(pSStack_3c + 0x364) + 4 + iVar3 * 8),'\0');
    thunk_FUN_004abe40(pSVar7,(char)pSStack_3c[0x2f0],
                       *(undefined4 *)
                        (*(int *)(pSStack_3c + 0x364) +
                        (*(int *)(pSStack_3c + 0x2ec) + *(int *)(pSStack_3c + 0x241) * 4) * 8));
    STT3DSprC::StartShow(pSVar7,(byte)pSStack_3c[0x2f0],*(undefined4 *)(DAT_00802a38 + 0xe4));
    pSStack_8 = (STAllPlayersC *)&DAT_0000000b;
    pSVar12 = pSStack_3c + 0x350;
    do {
      puVar6 = (undefined4 *)FUN_0072e530(0x40);
      if (puVar6 == (undefined4 *)0x0) {
        this = (STT3DSprC *)0x0;
      }
      else {
        this = (STT3DSprC *)thunk_FUN_004ab810(puVar6);
      }
      *(STT3DSprC **)pSVar12 = this;
      iVar3 = STT3DSprC::Init(this,DAT_008073cc,*(uint *)(pSStack_3c + 0x300),
                              *(uint *)(pSStack_3c + 0x304),0,*(uint *)(pSStack_3c + 0x2f8),
                              *(uint *)(pSStack_3c + 0x2fc),0x11);
      if (iVar3 != 0) {
        RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x10d)
        ;
      }
      iVar3 = STT3DSprC::LoadSequence
                        (*(STT3DSprC **)pSVar12,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,0x1d);
      if (iVar3 != 0) {
        RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x10e)
        ;
      }
      pSVar16 = pSStack_8;
      iVar3 = thunk_FUN_004ad650((int)pSVar7);
      uVar4 = thunk_FUN_004ad650(*(int *)pSVar12);
      FUN_006ea340(*(void **)(pSStack_3c + 0x211),uVar4,iVar3,(uint)pSVar16);
      thunk_FUN_004ad3c0(*(void **)pSVar12,*(float *)(pSStack_3c + 0x1f9),
                         *(float *)(pSStack_3c + 0x1fd),*(float *)(pSStack_3c + 0x201));
      pSVar12 = pSVar12 + 4;
      pSStack_8 = pSStack_8 + -1;
      uVar10 = extraout_EDX_02;
    } while (8 < (int)pSStack_8);
  }
  else {
    iVar11 = *(int *)(pSStack_3c + 0x259);
    if (((iVar11 == 0x6c) && (*(int *)(pSStack_3c + 0x251) == 3)) ||
       ((0x53 < iVar11 && (iVar11 < 0x5b)))) {
      if ((iVar3 == 0) ||
         (((iVar11 = *(int *)(pSStack_3c + 0x259), iVar11 != 0x6c ||
           (*(int *)(pSStack_3c + 0x251) != 3)) && ((iVar11 < 0x54 || (0x5a < iVar11))))))
      goto LAB_004d1fef;
      *(undefined4 *)(pSStack_3c + 0x2ec) = 2;
      *(undefined4 *)(pSStack_3c + 0x2f0) = 0xb;
      if (*(int *)(pSStack_3c + 0x241) == 1) {
        iVar3 = STT3DSprC::LoadSequence
                          (pSVar7,(byte)pSStack_3c[0x2f0],DAT_0080678c,(byte *)s_si_emb6_007ad458,
                           0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xef;
LAB_004d1f0b:
          RaiseInternalException
                    (iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar11);
        }
      }
      else {
        iVar3 = STT3DSprC::LoadSequence
                          (pSVar7,(byte)pSStack_3c[0x2f0],DAT_0080678c,(byte *)s_si_emb5_007ad44c,
                           0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xf0;
          goto LAB_004d1f0b;
        }
      }
      iVar3 = (-(uint)(*(int *)(pSStack_3c + 0x370) != 0) & 3) + 6;
      *(int *)(pSStack_3c + 0x2f4) = iVar3;
      STT3DSprC::UnLoadSequence(pSVar7,(byte)iVar3);
      uVar4 = *(uint *)(pSStack_3c + 0x2f4);
      iVar3 = thunk_FUN_004ad650((int)pSVar7);
      uVar8 = thunk_FUN_004ad650(*(int *)(pSStack_3c + 0x35c));
      FUN_006ea340(*(void **)(pSStack_3c + 0x211),uVar8,iVar3,uVar4);
      STT3DSprC::StartShow(pSVar7,(byte)pSStack_3c[0x2f0],*(undefined4 *)(DAT_00802a38 + 0xe4));
      (**(code **)(*(int *)pSStack_3c + 0x90))(3,0x362);
      thunk_FUN_004abce0(*(void **)(pSStack_3c + 0x35c),0xe,0,
                         **(int **)(*(int *)((int)*(void **)(pSStack_3c + 0x35c) + 0x20) + 0x1f8) +
                         -1,'\0');
      thunk_FUN_004abe40(*(void **)(pSStack_3c + 0x35c),'\x0e',0);
      STT3DSprC::StartShow
                (*(STT3DSprC **)(pSStack_3c + 0x35c),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad460(*(void **)(pSStack_3c + 0x35c),0);
      thunk_FUN_004ad5e0((int)pSVar7);
      uVar10 = extraout_EDX_01;
    }
    else {
      if (*(int *)(pSStack_3c + 0x241) == 0) {
        iVar3 = STT3DSprC::LoadSequence(pSVar7,9,DAT_0080678c,(byte *)s_si_emb1_007bf470,0x1d);
        if (iVar3 != 0) {
          RaiseInternalException
                    (iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0xd9);
        }
        wsprintfA((LPSTR)abStack_88,s_si_emb1_id_1d_007bf460,*(undefined4 *)(pSStack_3c + 0x24));
        iVar3 = STT3DSprC::LoadSequence
                          (pSVar7,(-(*(int *)(pSStack_3c + 0x370) != 0) & 3U) + 5,DAT_0080678c,
                           abStack_88,0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xdb;
LAB_004d1df8:
          RaiseInternalException
                    (iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar11);
        }
      }
      else if (*(int *)(pSStack_3c + 0x241) == 1) {
        iVar3 = STT3DSprC::LoadSequence(pSVar7,9,DAT_0080678c,(byte *)s_si_emb4_007bf48c,0x1d);
        if (iVar3 != 0) {
          RaiseInternalException
                    (iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0xdf);
        }
        wsprintfA((LPSTR)abStack_88,s_si_emb4_id_1d_007bf47c,*(undefined4 *)(pSStack_3c + 0x24));
        iVar3 = STT3DSprC::LoadSequence
                          (pSVar7,(-(*(int *)(pSStack_3c + 0x370) != 0) & 3U) + 5,DAT_0080678c,
                           abStack_88,0x1d);
        if (iVar3 != 0) {
          iVar11 = 0xe1;
          goto LAB_004d1df8;
        }
      }
      *(undefined4 *)(pSStack_3c + 0x2ec) = 0;
      *(uint *)(pSStack_3c + 0x2f0) = (-(uint)(*(int *)(pSStack_3c + 0x370) != 0) & 3) + 6;
      thunk_FUN_004d10a0(pSStack_3c,0);
      STT3DSprC::StartShow(pSVar7,(byte)pSStack_3c[0x2f0],*(undefined4 *)(DAT_00802a38 + 0xe4));
      STT3DSprC::StartShow(pSVar7,(char)pSStack_3c[0x2f0] - 1,*(undefined4 *)(DAT_00802a38 + 0xe4));
      (*(code *)**(undefined4 **)pSVar7)();
      uVar10 = extraout_EDX_00;
    }
  }
  thunk_FUN_00419c70((int *)pSStack_3c,uVar10,(uint)(*(int *)(pSStack_3c + 0x23d) == 0));
  *(undefined4 *)(pSStack_3c + 0x2d8) = 0;
  *(undefined4 *)(pSStack_3c + 0x2d4) = 0;
  *(undefined4 *)(pSStack_3c + 0x2d0) = 0;
  *(undefined4 *)(pSStack_3c + 0x2cc) = 0;
  iVar3 = (*(int *)(pSStack_3c + 0x368) * 3 + *(int *)(pSStack_3c + 0x36c)) * 4;
  thunk_FUN_004d76e0((char)pSStack_3c[0x24],0,*(int *)(pSStack_3c + 0x18),
                     *(int *)(&DAT_008545ac + iVar3),*(int *)(&DAT_007e1c50 + iVar3),
                     *(int *)(&DAT_007e24fc + iVar3),*(int *)(&DAT_007e3160 + iVar3));
  iVar3 = thunk_FUN_004b7520(CONCAT31((int3)((uint)*(undefined4 *)(pSStack_3c + 0x259) >> 8),
                                      pSStack_3c[0x24]),*(undefined4 *)(pSStack_3c + 0x259));
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)pSStack_3c + 0x2c))();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar3 >> 8),pSStack_3c[0x24]),iVar3);
  }
  thunk_FUN_0041c3f0(pSStack_3c,(undefined *)0x5);
LAB_004d22a1:
  thunk_FUN_0041f630((int *)pSStack_3c);
  g_currentExceptionFrame = IStack_cc.previous;
  return 0;
}

