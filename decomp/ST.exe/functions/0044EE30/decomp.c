
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044ee30(int param_1)

{
  STT3DSprC *pSVar1;
  char cVar2;
  byte bVar3;
  STSprGameObjC SVar4;
  STSprGameObjC SVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined2 extraout_var;
  void *pvVar14;
  uint extraout_EAX;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_03;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *piVar21;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar24;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_EDX_00;
  byte *pbVar22;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  uint extraout_EDX_01;
  uint uVar23;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  uint extraout_EDX_20;
  undefined4 extraout_EDX_21;
  undefined4 extraout_EDX_22;
  undefined4 extraout_EDX_23;
  undefined4 extraout_EDX_24;
  undefined4 extraout_EDX_25;
  undefined4 extraout_EDX_26;
  undefined4 extraout_EDX_27;
  undefined4 extraout_EDX_28;
  undefined4 extraout_EDX_29;
  undefined4 extraout_EDX_30;
  undefined4 extraout_EDX_31;
  undefined4 extraout_EDX_32;
  undefined4 extraout_EDX_33;
  undefined4 extraout_EDX_34;
  undefined4 extraout_EDX_35;
  undefined4 extraout_EDX_36;
  undefined4 extraout_EDX_37;
  undefined4 extraout_EDX_38;
  undefined4 extraout_EDX_39;
  undefined2 extraout_var_10;
  undefined4 unaff_ESI;
  int iVar25;
  byte *pbVar26;
  void *unaff_EDI;
  char *pcVar27;
  char *pcVar28;
  byte *pbVar29;
  STSprGameObjC *pSVar30;
  longlong lVar31;
  undefined8 uVar32;
  short sVar33;
  CHAR local_284;
  undefined4 local_283 [63];
  InternalExceptionFrame local_184;
  int local_140 [7];
  int local_124 [7];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f4;
  STSprGameObjC *local_ec;
  byte local_e8 [20];
  uint local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  STSprGameObjC local_9d;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_7c;
  uint local_78;
  byte local_74 [20];
  uint local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 *local_4c;
  undefined2 local_48;
  undefined2 local_46;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  void *local_28;
  void *local_24;
  byte *local_20;
  int *local_1c;
  short local_16;
  short local_14;
  short local_12;
  int *local_10;
  uint local_c;
  uint local_8;
  
  iVar25 = 0;
  local_8 = 0;
  local_d4 = 0;
  local_184.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_184;
  iVar10 = __setjmp3(local_184.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_184.previous;
    if (iVar10 == -0x5001fff7) {
      return 0;
    }
    local_284 = '\0';
    puVar18 = local_283;
    for (iVar25 = 0x3f; iVar25 != 0; iVar25 = iVar25 + -1) {
      *puVar18 = 0;
      puVar18 = puVar18 + 1;
    }
    *(undefined2 *)puVar18 = 0;
    wsprintfA(&local_284,s_STBoatC__GetMessage___Name__d_Pl_007a9eac,
              *(undefined4 *)(local_ec + 0x18),*(undefined4 *)(local_ec + 0x24),
              (uint)*(ushort *)(local_ec + 0x32),(uint)*(ushort *)(local_ec + 0x30));
    iVar25 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1380,0,iVar10,
                                &DAT_007a4ccc,&local_284);
    if (iVar25 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1381);
      return 0xffff;
    }
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return uVar12;
  }
  STSprGameObjC::GetMessage(local_ec,param_1);
  uVar13 = *(uint *)(param_1 + 0x10);
  if (0x111 < uVar13) {
    if (uVar13 < 0x129) {
      if (uVar13 != 0x128) {
        if (uVar13 == 0x121) {
          if (*(int *)(local_ec + 0x6f7) != 0x23) {
            *(undefined4 *)(local_ec + 0x736) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
            if (*(int *)(local_ec + 0x45d) == 3) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            local_54 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(local_ec,3,&local_54);
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (*(int *)(local_ec + 0x722) != 0x14) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (*(int *)(local_ec + 0x72e) != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x72e) = 1;
          (**(code **)(*(int *)local_ec + 0x90))(3,0x16c);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (uVar13 != 0x122) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        piVar17 = *(int **)(param_1 + 0x14);
        if (*piVar17 != *(int *)(local_ec + 0x24)) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        *(int *)(local_ec + 0x782) = piVar17[1];
        *(int *)(local_ec + 0x786) = piVar17[2];
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      piVar17 = *(int **)(param_1 + 0x14);
      local_1c = piVar17;
      if (DAT_008117bc != (int *)0x0) {
        if (piVar17 != (int *)0x0) {
          local_8c = 0x5dd5;
          local_88 = (int *)CONCAT22(*(undefined2 *)(local_ec + 0x32),
                                     *(undefined2 *)(local_ec + 0x24));
          local_84 = CONCAT22((short)piVar17[3],(short)piVar17[2]);
          (**(code **)*DAT_008117bc)(local_9c);
        }
        if (((DAT_008117bc != (int *)0x0) && (piVar17 != (int *)0x0)) && (*piVar17 != 10000)) {
          local_8c = 0x5dd1;
          local_88 = (int *)CONCAT22(*(undefined2 *)(local_ec + 0x32),
                                     *(undefined2 *)(local_ec + 0x24));
          local_84 = CONCAT22((short)piVar17[3],(short)piVar17[2]);
          (**(code **)*DAT_008117bc)(local_9c);
        }
      }
      if (*(int *)(local_ec + 0x7ca) != 0) {
        iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x7ca),(int *)&local_4c);
        if (iVar10 == -4) {
          iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x12f7,0,0,
                                      &DAT_007a4ccc,s_STBoatC__GetMessage_MESS_HITKILL_007a9ef8);
          if (iVar10 != 0) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return uVar12;
          }
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x12f8)
          ;
        }
        piVar17 = local_1c;
        piVar21 = local_140;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar21 = *piVar17;
          piVar17 = piVar17 + 1;
          piVar21 = piVar21 + 1;
        }
        local_8c = 0x128;
        local_88 = local_140;
        (**(code **)*local_4c)(local_9c);
        piVar17 = local_1c;
      }
      if (((*(int *)(local_ec + 0x45d) == 0x14) ||
          (uVar13 = thunk_FUN_0045f400(local_ec,0x14), uVar13 != 0)) &&
         (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x5a2),(int *)&local_10),
         iVar10 != -4)) {
        thunk_FUN_00492510(local_10,*(int *)(local_ec + 0x18));
      }
      *(undefined4 *)(local_ec + 0x455) = 1;
      thunk_FUN_0048d930((int)local_ec);
      thunk_FUN_0048dba0((int)local_ec);
      sVar33 = *(short *)(local_ec + 0x66f);
      sVar6 = *(short *)(local_ec + 0x673);
      sVar7 = *(short *)(local_ec + 0x671);
      if (((sVar33 < 0) || (piVar17 = local_1c, DAT_007fb240 <= sVar33)) ||
         ((sVar7 < 0 || (((DAT_007fb242 <= sVar7 || (sVar6 < 0)) || (DAT_007fb244 <= sVar6)))))) {
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar7 +
                            (int)sVar33) * 8);
      }
      if (((pvVar14 != (void *)0x0) && (*(int *)((int)pvVar14 + 0x18) == *(int *)(local_ec + 0x679))
          ) && ((*(int *)(local_ec + 0x675) == 99 && (*(int *)((int)pvVar14 + 0x20) == 1000)))) {
        thunk_FUN_004b7d50(pvVar14,(int)local_ec);
      }
      thunk_FUN_004952e0((int)local_ec);
      uVar12 = STAllPlayersC::DeleteGuardBoat
                         (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),local_ec[0x24]),
                          *(short *)(local_ec + 0x32),1);
      STAllPlayersC::DeleteGuardBoat
                (DAT_007fa174,CONCAT31((int3)((uint)uVar12 >> 8),local_ec[0x24]),
                 *(short *)(local_ec + 0x32),0);
      thunk_FUN_00492420((int *)local_ec);
      thunk_FUN_004924a0(local_ec);
      thunk_FUN_00492fc0((int)local_ec);
      thunk_FUN_00493bc0((int)local_ec);
      sVar33 = *(short *)(local_ec + 0x6a9);
      sVar6 = *(short *)(local_ec + 0x6ad);
      sVar7 = *(short *)(local_ec + 0x6ab);
      if (((sVar33 < 0) || (piVar17 = local_1c, DAT_007fb240 <= sVar33)) ||
         ((sVar7 < 0 || (((DAT_007fb242 <= sVar7 || (sVar6 < 0)) || (DAT_007fb244 <= sVar6)))))) {
        local_24 = (void *)0x0;
      }
      else {
        local_24 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar7 +
                             (int)sVar33) * 8);
      }
      if (((local_24 == (void *)0x0) ||
          (*(int *)((int)local_24 + 0x18) != *(int *)(local_ec + 0x6af))) ||
         (iVar10 = thunk_FUN_004b9d90((int)local_24), iVar10 == 0)) {
        FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x6af),(int *)&local_24);
      }
      if (((local_24 != (void *)0x0) && (*(int *)((int)local_24 + 0x20) == 1000)) &&
         (thunk_FUN_004b9d20(local_24,(int)local_ec),
         *(int *)((int)local_24 + 0x4b0) == *(int *)(local_ec + 0x18))) {
        *(undefined4 *)((int)local_24 + 0x4b0) = 0;
      }
      if (((*(int *)(local_ec + 0x45d) == 0x13) && (*(int *)(local_ec + 0x524) != 0)) &&
         (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x524),(int *)&local_24),
         iVar10 != -4)) {
        thunk_FUN_004cf3e0(local_24,*(int *)(local_ec + 0x18));
      }
      FUN_006e6780(*(void **)(local_ec + 0x211),
                   CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)(local_ec + 0x18) >> 0x10)),
                            *(undefined2 *)(local_ec + 0x18)));
      *(int *)(local_ec + 0x826) = piVar17[2];
      iVar10 = (**(code **)(*(int *)local_ec + 0x2c))();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX_05 >> 8),local_ec[0x24]),iVar10);
      if (*(uint *)(local_ec + 0x24) == (uint)*(byte *)(*(int *)(local_ec + 0x10) + 0x112d)) {
        thunk_FUN_004d8b70((char)*(uint *)(local_ec + 0x24));
      }
      if (piVar17[6] != 2) {
        pSVar1 = (STT3DSprC *)(local_ec + 0x1d5);
        STT3DSprC::StopShow(pSVar1,0xf);
        STT3DSprC::StopShow(pSVar1,0);
        STT3DSprC::StopShow(pSVar1,1);
        STT3DSprC::StopShow(pSVar1,0xe);
        STT3DSprC::StopShow(pSVar1,0xd);
        STT3DSprC::StopShow(pSVar1,0xc);
        STT3DSprC::StopShow(pSVar1,8);
        uVar12 = STT3DSprC::StopShow(pSVar1,0xb);
        piVar21 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),local_ec[0x24]),
                                            CONCAT22(extraout_var_10,
                                                     *(undefined2 *)(local_ec + 0x30)));
        piVar17 = local_1c;
        if (piVar21 != (int *)0x0) {
          (**(code **)(*piVar21 + 8))(0x6a,local_ec + 0x32);
          piVar17 = local_1c;
        }
      }
      if (*(int **)(local_ec + 0x465) != (int *)0x0) {
        thunk_FUN_00635fd0(*(int **)(local_ec + 0x465));
        FUN_0072e2b0(*(undefined4 **)(local_ec + 0x465));
        *(undefined4 *)(local_ec + 0x465) = 0;
      }
      if (((piVar17[1] == 0xa8) || (piVar17[6] == 0)) || (piVar17[6] == 4)) {
        uVar19 = 0xffffffff;
        uVar12 = thunk_FUN_004ad650((int)(local_ec + 0x1d5));
        thunk_FUN_0062b770((int)*(short *)(local_ec + 0x41),(int)*(short *)(local_ec + 0x43),
                           (int)*(short *)(local_ec + 0x45),*(undefined4 *)(local_ec + 0x6f7),
                           (int)local_ec,(int)*(short *)(local_ec + 0x6c),uVar12,uVar19);
      }
      if (piVar17[6] == 3) {
        thunk_FUN_006377b0(*(uint *)(local_ec + 0x1ed),0,(int)*(short *)(local_ec + 0x41),
                           (int)*(short *)(local_ec + 0x43),(int)*(short *)(local_ec + 0x45),0x12);
      }
      if (piVar17[6] == 2) {
        *(undefined4 *)(local_ec + 0x2c0) = 1;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      goto LAB_0045ad7b;
    }
    if (uVar13 != 0x129) {
      if (uVar13 != 0x4405) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      thunk_FUN_0041c3f0(local_ec,*(undefined **)(local_ec + 0x70a));
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)(local_ec + 0x45d) != 0x14) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)(local_ec + 0x5c0) != 3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)(local_ec + 0x7c2) == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((*(int *)(local_ec + 0x5a6) == 0) &&
       (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x5a2),(int *)(local_ec + 0x5a6)),
       iVar10 == -4)) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1372);
    }
    local_9d = local_ec[99];
    SVar4 = local_ec[0x61];
    SVar5 = local_ec[0x62];
    puVar18 = (undefined4 *)(*(int *)(local_ec + 0x5a6) + 0x34);
    pSVar30 = local_ec + 0x34;
    for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)pSVar30 = *puVar18;
      puVar18 = puVar18 + 1;
      pSVar30 = pSVar30 + 4;
    }
    *(undefined2 *)pSVar30 = *(undefined2 *)puVar18;
    pSVar30[2] = *(STSprGameObjC *)((int)puVar18 + 2);
    *(undefined4 *)(local_ec + 0x76) = 0;
    *(undefined2 *)(local_ec + 0x6e) = 0x2f;
    local_ec[0x61] = SVar4;
    local_ec[0x62] = SVar5;
    local_ec[99] = local_9d;
    iVar10 = (**(code **)(*(int *)local_ec + 0xd8))();
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar10 = 0x1377;
    goto LAB_0045aee3;
  }
  if (uVar13 == 0x111) goto LAB_00450268;
  if (3 < uVar13) {
    if (uVar13 == 0x10f) {
      local_44 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(local_ec + 0x1d5),&local_38);
      local_3c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)local_ec,(int *)&local_2c);
      local_40 = (byte *)STBoatC::SaveBoatData((STBoatC *)local_ec,(int *)&local_34);
      local_7c = (void *)(local_2c + local_34 + local_38);
      local_20 = (byte *)FUN_006aac70((int)local_7c);
      pbVar22 = local_40;
      pbVar29 = local_20;
      for (uVar13 = local_34 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pbVar29 = *(undefined4 *)pbVar22;
        pbVar22 = pbVar22 + 4;
        pbVar29 = pbVar29 + 4;
      }
      for (uVar13 = local_34 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pbVar29 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        pbVar29 = pbVar29 + 1;
      }
      pbVar22 = local_3c;
      pbVar29 = local_20 + local_34;
      for (uVar13 = local_2c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pbVar29 = *(undefined4 *)pbVar22;
        pbVar22 = pbVar22 + 4;
        pbVar29 = pbVar29 + 4;
      }
      for (uVar13 = local_2c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pbVar29 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        pbVar29 = pbVar29 + 1;
      }
      *(uint *)(local_20 + 0x5fe) = local_34;
      *(uint *)(local_20 + 0x602) = local_2c;
      pbVar22 = local_44;
      pbVar29 = local_20 + local_34 + local_2c;
      for (uVar13 = local_38 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pbVar29 = *(undefined4 *)pbVar22;
        pbVar22 = pbVar22 + 4;
        pbVar29 = pbVar29 + 4;
      }
      for (uVar13 = local_38 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pbVar29 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        pbVar29 = pbVar29 + 1;
      }
      *(uint *)(local_20 + 0x5f6) = local_34 + local_2c;
      *(uint *)(local_20 + 0x5fa) = local_38;
      STPlaySystemC::SaveObjData
                (DAT_00802a38,*(undefined4 *)(local_ec + 0x18),local_20,(uint)local_7c);
      FUN_006ab060(&local_44);
      FUN_006ab060(&local_3c);
      FUN_006ab060(&local_40);
      FUN_006ab060(&local_20);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (uVar13 != 0x110) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    piVar17 = *(int **)(param_1 + 0x14);
    local_c = 0;
    local_7c = (void *)*piVar17;
    if (*(int *)(local_ec + 0x742) == 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((*(int *)(local_ec + 0x45d) == 8) && (*(int *)(local_ec + 0x6e7) != 2)) {
      *(undefined4 *)(local_ec + 0x6e7) = 1;
    }
    iVar10 = *(int *)(local_ec + 0x786);
    if ((0 < iVar10) && (iVar10 < 0x65)) {
      *piVar17 = *piVar17 - (iVar10 * *piVar17) / 100;
    }
    iVar10 = piVar17[1];
    local_1c = piVar17;
    if (iVar10 == 0x65) goto LAB_00459f59;
    if (iVar10 != 0x42) {
      switch(iVar10) {
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa4:
      case 0xa5:
      case 0xb0:
      case 0xb2:
      case 0xb6:
      case 0xb7:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbf:
        local_c = thunk_FUN_004e60d0(*(int *)(local_ec + 0x24),0x67);
        iVar10 = 0;
        if (local_c == 1) {
          iVar10 = *piVar17;
          iVar25 = (iVar10 * 9) / 10 + (iVar10 * 9 >> 0x1f);
LAB_00459e30:
          iVar10 = iVar10 - (iVar25 - (iVar25 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            iVar10 = *piVar17;
            iVar25 = (iVar10 * 0x11) / 0x14 + (iVar10 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            iVar10 = *piVar17;
            iVar25 = (iVar10 * 4) / 5 + (iVar10 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        *piVar17 = *piVar17 - iVar10;
      }
      uVar13 = thunk_FUN_004406c0((char)local_ec[0x24]);
      uVar13 = uVar13 & 0xff;
      if (uVar13 == 1) {
        iVar10 = *(int *)(local_ec + 0x24);
        iVar25 = 4;
LAB_00459e71:
        local_c = thunk_FUN_004e60d0(iVar10,iVar25);
      }
      else {
        if (uVar13 == 2) {
          iVar10 = *(int *)(local_ec + 0x24);
          iVar25 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar13 == 3) {
          iVar10 = *(int *)(local_ec + 0x24);
          iVar25 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar10 = 0;
      if (local_c == 1) {
        iVar10 = *piVar17;
        iVar25 = iVar10 * 8;
LAB_00459eaa:
        iVar10 = iVar10 - iVar25 / 10;
      }
      else {
        if (local_c == 2) {
          iVar10 = *piVar17;
          iVar25 = iVar10 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          iVar10 = *piVar17;
          iVar25 = iVar10 * 4;
          goto LAB_00459eaa;
        }
      }
      *piVar17 = *piVar17 - iVar10;
      if (piVar17[1] == 0x9a) {
        iVar10 = piVar17[2];
        *(int *)(local_ec + 0x772) = iVar10;
        if ((*(int *)(local_ec + 0x776) < 2) &&
           (iVar10 = thunk_FUN_004e60d0(iVar10,0x93), 0 < iVar10)) {
          *(undefined4 *)(local_ec + 0x776) = 2;
        }
        if (*(int *)(local_ec + 0x76e) < 0) {
          *(undefined4 *)(local_ec + 0x76e) = 0;
        }
        iVar10 = (**(code **)(*(int *)local_ec + 0xc))();
        if (iVar10 == 3) {
          (**(code **)(*(int *)local_ec + 200))(0);
        }
      }
      if ((piVar17[1] == 0xad) || (piVar17[1] == 0xa1)) {
        if (*(int *)(local_ec + 0x6f7) == 9) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (*(int *)(local_ec + 0x6f7) == 0x15) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        thunk_FUN_00495010(local_ec,piVar17[4]);
      }
      goto LAB_00459f59;
    }
    if (*(int *)(local_ec + 0x6f7) == 9) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)(local_ec + 0x6f7) == 0x15) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar13 = thunk_FUN_004406c0((char)local_ec[0x24]);
    uVar13 = uVar13 & 0xff;
    if (uVar13 == 1) {
      iVar10 = *(int *)(local_ec + 0x24);
      iVar25 = 0x2d;
LAB_00459d8b:
      local_c = thunk_FUN_004e60d0(iVar10,iVar25);
    }
    else {
      if (uVar13 == 2) {
        iVar10 = *(int *)(local_ec + 0x24);
        iVar25 = 0x2d;
        goto LAB_00459d8b;
      }
      if (uVar13 == 3) {
        iVar10 = *(int *)(local_ec + 0x24);
        iVar25 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar10 = 0;
    if (local_c == 1) {
      iVar10 = *piVar17 - (*piVar17 * 9) / 10;
    }
    *piVar17 = *piVar17 - iVar10;
LAB_00459f59:
    if (200 < (int)local_7c - *piVar17) {
      *piVar17 = (int)local_7c + -200;
    }
    if (*(int *)(local_ec + 0x716) < 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    *(int *)(local_ec + 0x716) = *(int *)(local_ec + 0x716) - *piVar17;
    pvVar14 = DAT_00811798;
    if ((((DAT_00811798 != (void *)0x0) && (piVar17[2] != 0xff)) &&
        (pvVar14 = (void *)thunk_FUN_0041c710((int)local_ec), pvVar14 != (void *)0x0)) &&
       (piVar17[5] == 0)) {
      pvVar14 = (void *)thunk_FUN_0061f8b0(DAT_00811798,(int)*(short *)(local_ec + 0x5b),
                                           (int)*(short *)(local_ec + 0x5d),
                                           *(uint *)(local_ec + 0x24));
    }
    if ((DAT_008117bc != (int *)0x0) && (piVar17 != (int *)0x0)) {
      local_8c = 0x5dd5;
      local_88 = (int *)CONCAT22(*(undefined2 *)(local_ec + 0x32),*(undefined2 *)(local_ec + 0x24));
      local_84 = CONCAT22((short)piVar17[3],(short)piVar17[2]);
      pvVar14 = (void *)(**(code **)*DAT_008117bc)(local_9c);
    }
    if (*(int *)(local_ec + 0x716) < 1) {
      if (((DAT_008117bc != (int *)0x0) && (piVar17 != (int *)0x0)) && (*piVar17 != 10000)) {
        local_8c = 0x5dd1;
        local_88 = (int *)CONCAT22(*(undefined2 *)(local_ec + 0x32),*(undefined2 *)(local_ec + 0x24)
                                  );
        local_84 = CONCAT22((short)piVar17[3],(short)piVar17[2]);
        (**(code **)*DAT_008117bc)(local_9c);
      }
      *(undefined4 *)(local_ec + 0x2c0) = 1;
      switch(*(undefined4 *)(local_ec + 0x6f7)) {
      case 1:
        uVar12 = 0xcb;
        break;
      case 2:
        uVar12 = 0xd1;
        break;
      case 3:
        uVar12 = 0xd7;
        break;
      case 4:
        uVar12 = 0xdd;
        break;
      case 5:
        uVar12 = 0xe3;
        break;
      case 6:
        uVar12 = 0xea;
        break;
      case 7:
        uVar12 = 0xf1;
        break;
      case 8:
        uVar12 = 0xf8;
        break;
      case 9:
        uVar12 = 0x100;
        break;
      case 10:
        uVar12 = 0x105;
        break;
      case 0xb:
        uVar12 = 0x10b;
        break;
      case 0xc:
        uVar12 = 0x111;
        break;
      case 0xd:
        uVar12 = 0x12f;
        break;
      case 0xe:
        uVar12 = 0x135;
        break;
      case 0xf:
        uVar12 = 0x13b;
        break;
      case 0x10:
        uVar12 = 0x141;
        break;
      case 0x11:
        uVar12 = 0x147;
        break;
      case 0x12:
        uVar12 = 0x14e;
        break;
      case 0x13:
        uVar12 = 0x155;
        break;
      case 0x14:
        uVar12 = 0x15c;
        break;
      case 0x15:
        uVar12 = 0x164;
        break;
      case 0x16:
        uVar12 = 0x169;
        break;
      case 0x17:
        uVar12 = 0x171;
        break;
      case 0x18:
        uVar12 = 0x177;
        break;
      case 0x19:
        uVar12 = 0x193;
        break;
      case 0x1a:
        uVar12 = 0x19b;
        break;
      case 0x1b:
        uVar12 = 0x1a3;
        break;
      case 0x1c:
        uVar12 = 0x1a9;
        break;
      case 0x1d:
        uVar12 = 0x1af;
        break;
      case 0x1e:
        uVar12 = 0x1b6;
        break;
      case 0x1f:
        uVar12 = 0x1bc;
        break;
      case 0x20:
        uVar12 = 0x1c2;
        break;
      case 0x21:
        uVar12 = 0x1c8;
        break;
      case 0x22:
        uVar12 = 0x1cf;
        break;
      case 0x23:
        uVar12 = 0x1d6;
        break;
      case 0x24:
        uVar12 = 0x1dc;
        break;
      case 0x25:
        uVar12 = 0x17d;
        break;
      case 0x26:
        uVar12 = 0x117;
        break;
      case 0x27:
        uVar12 = 0x183;
        break;
      case 0x28:
        uVar12 = 0x1e2;
        break;
      default:
        uVar12 = 0;
      }
      (**(code **)(*(int *)local_ec + 0x90))(2,uVar12);
      thunk_FUN_0048d930((int)local_ec);
      thunk_FUN_0048dba0((int)local_ec);
      sVar33 = *(short *)(local_ec + 0x671);
      sVar6 = *(short *)(local_ec + 0x673);
      local_7c = (void *)CONCAT22(local_7c._2_2_,sVar33);
      sVar7 = *(short *)(local_ec + 0x66f);
      if (((((sVar7 < 0) || (DAT_007fb240 <= sVar7)) || (sVar33 < 0)) ||
          ((DAT_007fb242 <= sVar33 || (sVar6 < 0)))) || (DAT_007fb244 <= sVar6)) {
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar33 +
                            (int)sVar7) * 8);
        piVar17 = local_1c;
      }
      if (((pvVar14 != (void *)0x0) && (*(int *)((int)pvVar14 + 0x18) == *(int *)(local_ec + 0x679))
          ) && ((*(int *)(local_ec + 0x675) == 99 && (*(int *)((int)pvVar14 + 0x20) == 1000)))) {
        thunk_FUN_004b7d50(pvVar14,(int)local_ec);
      }
      thunk_FUN_004952e0((int)local_ec);
      uVar12 = STAllPlayersC::DeleteGuardBoat
                         (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX_03 >> 8),local_ec[0x24]),
                          *(short *)(local_ec + 0x32),1);
      STAllPlayersC::DeleteGuardBoat
                (DAT_007fa174,CONCAT31((int3)((uint)uVar12 >> 8),local_ec[0x24]),
                 *(short *)(local_ec + 0x32),0);
      thunk_FUN_00492420((int *)local_ec);
      if (*(int *)(local_ec + 0x7ca) != 0) {
        iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x7ca),(int *)&local_58);
        if (iVar10 == -4) {
          iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1296,0,0,
                                      &DAT_007a4ccc,s_STBoatC__GetMessage_MESS_TORPHIT_007a9f3c);
          if (iVar10 != 0) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return uVar12;
          }
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1297)
          ;
        }
        piVar17 = local_1c;
        piVar21 = local_124;
        for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *piVar21 = *piVar17;
          piVar17 = piVar17 + 1;
          piVar21 = piVar21 + 1;
        }
        local_124[0] = 0x1716b;
        local_8c = 0x110;
        local_88 = local_124;
        (**(code **)*local_58)(local_9c);
        piVar17 = local_1c;
      }
      thunk_FUN_004924a0(local_ec);
      thunk_FUN_00492fc0((int)local_ec);
      thunk_FUN_00493bc0((int)local_ec);
      sVar33 = *(short *)(local_ec + 0x6a9);
      local_7c = (void *)CONCAT22(extraout_var_00,sVar33);
      sVar6 = *(short *)(local_ec + 0x6ad);
      sVar7 = *(short *)(local_ec + 0x6ab);
      if ((((sVar33 < 0) || (DAT_007fb240 <= sVar33)) || (sVar7 < 0)) ||
         (((DAT_007fb242 <= sVar7 || (sVar6 < 0)) || (DAT_007fb244 <= sVar6)))) {
        local_28 = (void *)0x0;
      }
      else {
        local_28 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar7 +
                             (int)sVar33) * 8);
      }
      if (((local_28 == (void *)0x0) ||
          (*(int *)((int)local_28 + 0x18) != *(int *)(local_ec + 0x6af))) ||
         (iVar10 = thunk_FUN_004b9d90((int)local_28), iVar10 == 0)) {
        FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x6af),(int *)&local_28);
      }
      if (((local_28 != (void *)0x0) && (*(int *)((int)local_28 + 0x20) == 1000)) &&
         (thunk_FUN_004b9d20(local_28,(int)local_ec),
         *(int *)((int)local_28 + 0x4b0) == *(int *)(local_ec + 0x18))) {
        *(undefined4 *)((int)local_28 + 0x4b0) = 0;
      }
      if (((*(int *)(local_ec + 0x45d) == 0x13) && (*(int *)(local_ec + 0x524) != 0)) &&
         (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x524),(int *)&local_28),
         iVar10 != -4)) {
        thunk_FUN_004cf3e0(local_28,*(int *)(local_ec + 0x18));
      }
      FUN_006e6780(*(void **)(local_ec + 0x211),
                   CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)(local_ec + 0x18) >> 0x10)),
                            *(undefined2 *)(local_ec + 0x18)));
      *(int *)(local_ec + 0x826) = piVar17[2];
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    piVar21 = DAT_008117bc;
    if ((*(int *)(local_ec + 0x45d) == 4) && (*(int *)(local_ec + 0x580) == 5)) {
      sVar33 = *(short *)(local_ec + 0x554);
      local_7c = (void *)CONCAT22((short)((uint)pvVar14 >> 0x10),sVar33);
      sVar6 = *(short *)(local_ec + 0x558);
      sVar7 = *(short *)(local_ec + 0x556);
      if ((sVar33 < 0) ||
         ((((DAT_007fb240 <= sVar33 || (sVar7 < 0)) || (DAT_007fb242 <= sVar7)) ||
          ((sVar6 < 0 || (DAT_007fb244 <= sVar6)))))) {
        piVar21 = (int *)0x0;
        pvVar14 = local_7c;
      }
      else {
        pvVar14 = (void *)((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar7 +
                          (int)sVar33);
        piVar21 = *(int **)(DAT_007fb248 + (int)pvVar14 * 8);
      }
      local_10 = piVar21;
      if ((piVar21 != (int *)0x0) &&
         (pvVar14 = (void *)piVar21[6], pvVar14 == *(void **)(local_ec + 0x55a))) {
        thunk_FUN_004e2200(piVar21,*(int *)(local_ec + 0x568),*(int *)(local_ec + 0x18),
                           *(undefined4 *)(local_ec + 0x716));
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (piVar17[2] == 0xff) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    local_10 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)piVar21 >> 8),(char)piVar17[2]),
                                         CONCAT22((short)((uint)pvVar14 >> 0x10),(short)piVar17[3]),
                                         1);
    if (local_10 == (int *)0x0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)(local_ec + 0x45d) != 3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    thunk_FUN_004162f0(local_10,&local_16,&local_14,&local_12);
    uVar13 = (int)*(short *)(local_ec + 0x47) - (int)local_16 >> 0x1f;
    if (6 < (int)(((int)*(short *)(local_ec + 0x47) - (int)local_16 ^ uVar13) - uVar13)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar13 = (int)*(short *)(local_ec + 0x49) - (int)local_14 >> 0x1f;
    if (6 < (int)(((int)*(short *)(local_ec + 0x49) - (int)local_14 ^ uVar13) - uVar13)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar13 = (int)*(short *)(local_ec + 0x4b) - (int)local_12 >> 0x1f;
    if (2 < (int)(((int)*(short *)(local_ec + 0x4b) - (int)local_12 ^ uVar13) - uVar13)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    STBoatC::_AddDefenceShots((STBoatC *)local_ec,(char)piVar17[2],(short)piVar17[3],*piVar17);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (uVar13 == 3) {
    thunk_FUN_0041c5a0((int *)local_ec);
    thunk_FUN_0041d590((int)local_ec);
    uVar12 = thunk_FUN_004167a0((int)local_ec);
    pvVar14 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),local_ec[0x24]),
                                         CONCAT22(extraout_var_08,*(undefined2 *)(local_ec + 0x30)))
    ;
    if (pvVar14 != (void *)0x0) {
      thunk_FUN_0040cdb0(pvVar14,(uint)*(ushort *)(local_ec + 0x32));
    }
    uVar12 = thunk_FUN_004ad310((int)(local_ec + 0x1d5));
    uVar12 = thunk_FUN_00495ff0(*(short *)(local_ec + 0x5b),*(short *)(local_ec + 0x5d),
                                *(short *)(local_ec + 0x5f),
                                CONCAT31((int3)((uint)uVar12 >> 8),local_ec[0x8e]),(int)local_ec);
    STAllPlayersC::UnRegisterObject
              (DAT_007fa174,CONCAT31((int3)((uint)*(int *)(local_ec + 0x826) >> 8),local_ec[0x24]),
               CONCAT22((short)((uint)uVar12 >> 0x10),*(undefined2 *)(local_ec + 0x30)),
               CONCAT22(extraout_var_09,*(undefined2 *)(local_ec + 0x32)),(int *)local_ec,
               *(int *)(local_ec + 0x826));
    thunk_FUN_00489950((int)local_ec);
    if (*(byte **)(local_ec + 0x47b) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_ec + 0x47b));
      *(undefined4 *)(local_ec + 0x47b) = 0;
    }
    if (*(int **)(local_ec + 0x465) != (int *)0x0) {
      thunk_FUN_00635fd0(*(int **)(local_ec + 0x465));
      FUN_0072e2b0(*(undefined4 **)(local_ec + 0x465));
      *(undefined4 *)(local_ec + 0x465) = 0;
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x37a);
    uVar15 = extraout_EAX;
    uVar23 = extraout_EDX_01;
LAB_0045048a:
    if ((local_ec[0x4d] == (STSprGameObjC)0x1) && (local_ec[0x5a] == (STSprGameObjC)0x1)) {
      uVar23 = *(uint *)(DAT_00802a38 + 0xe4) % 0x32;
      uVar15 = *(uint *)(DAT_00802a38 + 0xe4) / 0x32;
      if (uVar23 == 7) {
        local_78 = (int)*(short *)(local_ec + 0x43) % 0xc9;
        uVar15 = (int)*(short *)(local_ec + 0x45) / 200;
        uVar23 = (int)*(short *)(local_ec + 0x45) % 200;
        if ((((0x46 < (int)*(short *)(local_ec + 0x41) % 0xc9) &&
             ((int)*(short *)(local_ec + 0x41) % 0xc9 < 0x82)) &&
            (uVar15 = local_78, 0x46 < (int)local_78)) &&
           ((((int)local_78 < 0x82 && (0x47 < (int)uVar23)) && ((int)uVar23 < 0x81)))) {
          local_ec[0x5a] = (STSprGameObjC)0x0;
          local_ec[0x4d] = (STSprGameObjC)0x0;
        }
      }
    }
    lVar31 = CONCAT44(uVar23,uVar15);
    if (((*(int *)(local_ec + 0x7ee) == 1) &&
        (lVar31 = (**(code **)(*(int *)local_ec + 0x7c))(), (int)lVar31 < 0x1a)) ||
       (((*(int *)(local_ec + 0x7ee) == 2 &&
         (lVar31 = (**(code **)(*(int *)local_ec + 0x7c))(), (int)lVar31 < 0x33)) ||
        ((*(int *)(local_ec + 0x7ee) == 3 &&
         (lVar31 = (**(code **)(*(int *)local_ec + 0x7c))(), (int)lVar31 < 0x4c)))))) {
      iVar25 = thunk_FUN_004e8030(*(int *)(local_ec + 0x6f7));
      iVar10 = *(int *)(local_ec + 0x45d);
      lVar31 = CONCAT44(extraout_EDX_02,iVar10);
      if (iVar25 == 3) {
        if (iVar10 != 0x16) {
          uVar13 = thunk_FUN_0045f400(local_ec,0x16);
          lVar31 = CONCAT44(extraout_EDX_04,uVar13);
          if ((uVar13 == 0) &&
             (lVar31 = (ulonglong)(uint)((char)local_ec[0x24] * 0xa62) << 0x20,
             *(short *)(&DAT_007f4f7f + (char)local_ec[0x24] * 0xa62) != 0)) {
            puVar16 = FUN_006ae290((uint *)0x0,1,2,1);
            FUN_006ae1c0(puVar16,(undefined4 *)(local_ec + 0x32));
            STAllPlayersC::AddObjsToGroup
                      (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX_05 >> 8),local_ec[0x24]),
                       0xfffe,(int)puVar16,(undefined2 *)&local_60);
            FUN_006ae110((byte *)puVar16);
            piVar17 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                         local_ec[0x24]),local_60);
            puVar18 = local_b4;
            local_b4[0] = 1;
            iVar10 = *piVar17;
            uVar12 = 0x11;
            goto LAB_00450695;
          }
        }
      }
      else {
        lVar31 = CONCAT44(extraout_EDX_02,iVar10);
        if (iVar10 != 4) {
          uVar13 = thunk_FUN_0045f400(local_ec,4);
          lVar31 = CONCAT44(extraout_EDX_03,uVar13);
          if ((uVar13 == 0) &&
             (lVar31 = CONCAT44(extraout_EDX_03,uVar13),
             *(short *)(&DAT_007f4f7b + (char)local_ec[0x24] * 0xa62) != 0)) {
            puVar16 = FUN_006ae290((uint *)0x0,1,2,1);
            FUN_006ae1c0(puVar16,(undefined4 *)(local_ec + 0x32));
            STAllPlayersC::AddObjsToGroup
                      (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),local_ec[0x24]),
                       0xfffe,(int)puVar16,(undefined2 *)&local_50);
            uVar12 = FUN_006ae110((byte *)puVar16);
            piVar17 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar12 >> 8),local_ec[0x24]),
                                                local_50);
            puVar18 = &local_a8;
            local_a8 = 1;
            local_a4 = 0;
            iVar10 = *piVar17;
            uVar12 = 4;
LAB_00450695:
            lVar31 = (**(code **)(iVar10 + 8))(uVar12,puVar18);
          }
        }
      }
    }
    local_1c = (int *)thunk_FUN_0042b760(CONCAT31((int3)((ulonglong)lVar31 >> 8),local_ec[0x24]),
                                         CONCAT22((short)((ulonglong)lVar31 >> 0x30),
                                                  *(undefined2 *)(local_ec + 0x30)));
    uVar13 = *(int *)(local_ec + 0x7aa) + 1;
    *(uint *)(local_ec + 0x7aa) = uVar13;
    switch(*(undefined4 *)(local_ec + 0x6f7)) {
    case 1:
    case 10:
    case 0x1e:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x28:
      if (*(int *)(local_ec + 0x7a2) < 1) {
        uVar13 = *(uint *)(local_ec + 0x79e);
        *(uint *)(local_ec + 0x7a2) = uVar13;
      }
      break;
    default:
      if (*(int *)(local_ec + 0x7a2) < 1) {
        iVar10 = thunk_FUN_004de410(*(void **)(local_ec + 0x24),*(int *)(local_ec + 0x79a),
                                    *(int *)(local_ec + 0x79e));
        *(int *)(local_ec + 0x7a2) = iVar10;
        uVar13 = extraout_EDX_07;
      }
      break;
    case 0xf:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x27:
      iVar10 = *(int *)(local_ec + 0x7ae) % *(int *)(local_ec + 0x7b2) +
               *(int *)(local_ec + 0x7b2) * *(int *)(local_ec + 0x7a2);
      *(int *)(local_ec + 0x7ae) = iVar10;
      if (iVar10 < *(int *)(local_ec + 0x79e) * *(int *)(local_ec + 0x7b2)) {
        *(int *)(local_ec + 0x7ae) = iVar10 + 1;
        iVar10 = (iVar10 + 1) / *(int *)(local_ec + 0x7b2);
        *(int *)(local_ec + 0x7a2) = iVar10;
        if ((*(int *)(local_ec + 0x6f7) != 10) && (iVar10 == 0)) {
          iVar10 = thunk_FUN_004dfb90(*(uint *)(local_ec + 0x24),*(int *)(local_ec + 0x79e),
                                      *(int *)(&DAT_00793ff0 + *(int *)(local_ec + 0x79a) * 4));
          iVar10 = *(int *)(local_ec + 0x7ae) + iVar10 * *(int *)(local_ec + 0x7b2);
          *(int *)(local_ec + 0x7ae) = iVar10;
          if (*(int *)(local_ec + 0x79e) * *(int *)(local_ec + 0x7b2) < iVar10) {
            *(int *)(local_ec + 0x7ae) = *(int *)(local_ec + 0x79e) * *(int *)(local_ec + 0x7b2);
          }
          *(int *)(local_ec + 0x7a2) = *(int *)(local_ec + 0x7ae) / *(int *)(local_ec + 0x7b2);
        }
      }
      iVar10 = thunk_FUN_004e60d0(*(int *)(local_ec + 0x24),0x3a);
      uVar13 = extraout_EDX_06;
      if (0 < iVar10) {
        *(int *)(local_ec + 0x7aa) = *(int *)(local_ec + 0x7aa) + 1;
      }
    }
    if (((*(int *)(local_ec + 0x6f7) != 0xb) && (*(int *)(local_ec + 0x7b6) != 0)) &&
       (*(int *)(local_ec + 0x7be) == 0)) {
      iVar10 = thunk_FUN_004de410(*(void **)(local_ec + 0x24),*(int *)(local_ec + 0x7b6),
                                  *(int *)(local_ec + 0x7ba));
      *(int *)(local_ec + 0x7be) = iVar10;
      uVar13 = extraout_EDX_08;
    }
    iVar10 = *(int *)(local_ec + 0x6f7);
    if ((((iVar10 == 0x24) || (iVar10 == 0x1b)) || (iVar10 == 0x1d)) &&
       ((*(int *)(local_ec + 0x71e) < 0x14 &&
        (uVar13 = *(uint *)(DAT_00802a38 + 0xe4) % 0x3c, uVar13 == 0)))) {
      *(int *)(local_ec + 0x71e) = *(int *)(local_ec + 0x71e) + 1;
    }
    if (((*(int *)(local_ec + 0x6f7) == 0x17) && (*(int *)(local_ec + 0x72a) < 0x28)) &&
       (uVar13 = *(uint *)(DAT_00802a38 + 0xe4) % 0xf, uVar13 == 0)) {
      *(int *)(local_ec + 0x72a) = *(int *)(local_ec + 0x72a) + 1;
    }
    if (*(int *)(local_ec + 0x6f7) == 0x23) {
      if (*(int *)(local_ec + 0x72e) == 1) {
        uVar13 = *(uint *)(DAT_00802a38 + 0xe4) % 0x28;
        if ((uVar13 == 0) &&
           (iVar10 = *(int *)(local_ec + 0x722), *(int *)(local_ec + 0x722) = iVar10 + -1,
           iVar10 + -1 == 0)) {
          *(undefined4 *)(local_ec + 0x72e) = 0;
          (**(code **)(*(int *)local_ec + 0x90))(3,0x16d);
          uVar13 = extraout_EDX_09;
        }
      }
      else if ((*(int *)(local_ec + 0x722) < 0x14) &&
              (uVar13 = *(uint *)(DAT_00802a38 + 0xe4) % 0xf0, uVar13 == 0)) {
        *(int *)(local_ec + 0x722) = *(int *)(local_ec + 0x722) + 1;
      }
    }
    iVar10 = *(int *)(local_ec + 0x6f7);
    if ((iVar10 == 0x16) || (iVar10 == 0x25)) {
      if (*(int *)(local_ec + 0x732) == 1) {
        if ((((iVar10 == 0x16) && (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 0)) ||
            ((iVar10 == 0x25 && (*(uint *)(DAT_00802a38 + 0xe4) % 0x5a == 0)))) &&
           (iVar10 = *(int *)(local_ec + 0x726), *(int *)(local_ec + 0x726) = iVar10 + -1,
           iVar10 + -1 == 0)) {
          *(undefined4 *)(local_ec + 0x732) = 0;
          (**(code **)(*(int *)local_ec + 0x90))(3,0x16d);
        }
        thunk_FUN_004945c0(local_ec);
        uVar13 = extraout_EDX_10;
      }
      else if ((iVar10 == 0x16) &&
              (iVar10 = thunk_FUN_004e60d0(*(int *)(local_ec + 0x24),0x92), uVar13 = extraout_EDX_11
              , 0 < iVar10)) {
        iVar10 = *(int *)(local_ec + 0x726);
        if (iVar10 < 0x28) {
          uVar13 = *(uint *)(DAT_00802a38 + 0xe4) % 0x2d;
joined_r0x00450a10:
          if (uVar13 == 0) {
            *(int *)(local_ec + 0x726) = iVar10 + 1;
          }
        }
      }
      else {
        iVar10 = *(int *)(local_ec + 0x726);
        if (iVar10 < 0x28) {
          uVar13 = *(uint *)(DAT_00802a38 + 0xe4) % 0x5a;
          goto joined_r0x00450a10;
        }
      }
    }
    iVar10 = *(int *)(local_ec + 0x736);
    *(int *)(local_ec + 0x736) = iVar10 + -1;
    if (iVar10 + -1 < 0) {
      *(undefined4 *)(local_ec + 0x736) = 0;
    }
    if (*(int *)(local_ec + 0x716) == *(int *)(local_ec + 0x712)) {
      *(undefined4 *)(local_ec + 0x76e) = 0xffffffff;
    }
    if ((-1 < *(int *)(local_ec + 0x76e)) &&
       ((*(int *)(local_ec + 0x45d) != 0x14 || (*(int *)(local_ec + 0x5c0) != 3)))) {
      uVar13 = *(int *)(local_ec + 0x76e) % 0x7d;
      if (uVar13 == 0) {
        pSVar1 = (STT3DSprC *)(local_ec + 0x1d5);
        iVar10 = STT3DSprC::LoadSequence(pSVar1,0xb,DAT_00806774,(byte *)s_forcef0_007aa008,0x1d);
        if (iVar10 != 0) {
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x41b);
        }
        thunk_FUN_004ad670(pSVar1,'\x0e');
        thunk_FUN_004ad150(pSVar1,'\v');
        thunk_FUN_004ac700(pSVar1,'\v');
        STT3DSprC::StartShow(pSVar1,0xb,*(undefined4 *)(DAT_00802a38 + 0xe4));
        local_104 = 0x65;
        local_88 = &local_108;
        local_108 = *(int *)(local_ec + 0x776) * 5;
        local_100 = *(undefined4 *)(local_ec + 0x772);
        local_f4 = 1;
        local_8c = 0x110;
        (*(code *)**(undefined4 **)local_ec)(local_9c);
        uVar13 = extraout_EDX_12;
      }
      *(int *)(local_ec + 0x76e) = *(int *)(local_ec + 0x76e) + 1;
    }
    if ((0 < *(int *)(local_ec + 0x782)) &&
       (iVar10 = *(int *)(local_ec + 0x782) + -1, *(int *)(local_ec + 0x782) = iVar10, iVar10 == 0))
    {
      *(undefined4 *)(local_ec + 0x786) = 0;
    }
    if (0 < *(int *)(local_ec + 0x73a)) {
      if (*(void **)(local_ec + 0x465) == (void *)0x0) {
        puVar18 = thunk_FUN_00631fd0();
        *(undefined4 **)(local_ec + 0x465) = puVar18;
        uVar13 = extraout_EDX_14;
        if (puVar18 != (undefined4 *)0x0) {
          thunk_FUN_006324c0(puVar18,0,*(undefined4 *)(local_ec + 0x6f7));
          uVar13 = extraout_EDX_15;
        }
      }
      else {
        thunk_FUN_00636060(*(void **)(local_ec + 0x465),(int)*(short *)(local_ec + 0x41),
                           (int)*(short *)(local_ec + 0x43),(int)*(short *)(local_ec + 0x45),
                           (int)*(short *)(local_ec + 0x6c),100);
        uVar13 = extraout_EDX_13;
      }
      if (*(int *)(local_ec + 0x45d) == 3) {
        *(int *)(local_ec + 0x73a) = *(int *)(local_ec + 0x73a) + -1;
      }
      if (*(int *)(local_ec + 0x45d) == 0x14) {
        if (*(int *)(local_ec + 0x5c0) == 3) {
          if ((*(int *)(local_ec + 0x5a6) == 0) &&
             (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x5a2),
                                    (int *)(local_ec + 0x5a6)), iVar10 == -4)) {
            RaiseInternalException(-4,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x43c);
          }
          uVar13 = *(uint *)(*(int *)(local_ec + 0x5a6) + 0x24);
          if (uVar13 != *(uint *)(local_ec + 0x24)) goto LAB_00450c1e;
        }
        *(int *)(local_ec + 0x73a) = *(int *)(local_ec + 0x73a) + -1;
      }
LAB_00450c1e:
      if (*(int *)(local_ec + 0x73a) == 0) {
        if (*(int **)(local_ec + 0x465) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)(local_ec + 0x465));
          FUN_0072e2b0(*(undefined4 **)(local_ec + 0x465));
          *(undefined4 *)(local_ec + 0x465) = 0;
          uVar13 = extraout_EDX_16;
        }
        if (*(int *)(local_ec + 0x45d) != 3) {
          local_5c = *(undefined4 *)(DAT_00802a38 + 0xe4);
          thunk_FUN_0045ef00(local_ec,3,&local_5c);
          uVar13 = extraout_EDX_17;
        }
      }
    }
    if (((*(int *)(local_ec + 0x70e) == 0) &&
        (uVar13 = *(uint *)(DAT_00802a38 + 0xe4) % 3, uVar13 == 0)) &&
       (iVar10 = thunk_FUN_004e60d0(*(int *)(local_ec + 0x24),10), uVar13 = extraout_EDX_18,
       0 < iVar10)) {
      thunk_FUN_0041c6e0(local_ec,*(undefined **)(local_ec + 0x70a));
      *(undefined4 *)(local_ec + 0x70e) = 1;
      uVar13 = extraout_EDX_19;
    }
    if (*(int *)(local_ec + 0x2c0) == 1) {
      *(undefined4 *)(local_ec + 0x2c0) = 0;
      if (*(int *)(local_ec + 0x6f7) == 9) {
        iVar10 = thunk_FUN_004accd0((STT3DSprC *)(local_ec + 0x1d5),'\b');
        if ((iVar10 == 0) &&
           (iVar10 = STT3DSprC::LoadSequence
                               ((STT3DSprC *)(local_ec + 0x1d5),8,DAT_00806774,
                                (byte *)s_expdstrw_007a9f80,0x1d), iVar10 != 0)) {
          iVar10 = 0x45d;
LAB_00450e28:
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10)
          ;
        }
      }
      else if (*(int *)(local_ec + 0x6f7) == 0x15) {
        iVar10 = STT3DSprC::LoadSequence
                           ((STT3DSprC *)(local_ec + 0x1d5),8,DAT_00806774,
                            (byte *)s_expdstrw_007a9f80,0x1d);
        if (iVar10 != 0) {
          iVar10 = 0x462;
          goto LAB_00450e28;
        }
      }
      else {
        uVar13 = thunk_FUN_00492ab0((int)local_ec);
        *(uint *)(local_ec + 0x82a) = uVar13;
        if (6 < (int)uVar13) {
          *(undefined4 *)(local_ec + 0x82a) = 0;
        }
        pSVar1 = (STT3DSprC *)(local_ec + 0x1d5);
        STT3DSprC::LoadSequence
                  (pSVar1,8,DAT_00806774,
                   (byte *)(s_expl_bt0_007a8ee0 + *(int *)(local_ec + 0x82a) * 0x45),0x1d);
        STT3DSprC::LoadSequence
                  (pSVar1,9,DAT_00806764,
                   (byte *)(s_expl_bbt0_007a8eef + *(int *)(local_ec + 0x82a) * 0x45),0x1d);
        STT3DSprC::LoadSequence
                  (pSVar1,10,DAT_00806774,
                   (byte *)(s_expmask3_007a8efe + *(int *)(local_ec + 0x82a) * 0x45),0x1d);
        thunk_FUN_004ac700(pSVar1,'\n');
        STT3DSprC::StartShow(pSVar1,10,*(undefined4 *)(DAT_00802a38 + 0xe4));
        thunk_FUN_004acf20(pSVar1,DAT_008032b8,0x10);
        thunk_FUN_004acfe0(pSVar1,'\n');
      }
      STT3DSprC::StartShow((STT3DSprC *)(local_ec + 0x1d5),8,*(undefined4 *)(DAT_00802a38 + 0xe4));
      *(undefined4 *)(local_ec + 0x455) = 1;
      iVar10 = (**(code **)(*(int *)local_ec + 0x2c))();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar10 >> 8),local_ec[0x24]),iVar10);
      uVar13 = (uint)*(byte *)(*(int *)(local_ec + 0x10) + 0x112d);
      if (*(uint *)(local_ec + 0x24) == uVar13) {
        thunk_FUN_004d8b70((char)*(uint *)(local_ec + 0x24));
        uVar13 = extraout_EDX_20;
      }
    }
    uVar32 = CONCAT44(uVar13,local_8);
    if (*(int *)(local_ec + 0x455) == 1) {
      (**(code **)(*(int *)local_ec + 0xd8))();
      pSVar1 = (STT3DSprC *)(local_ec + 0x1d5);
      local_c = thunk_FUN_004ac910(pSVar1,'\b');
      if (local_c == 2) {
        STT3DSprC::StopShow(pSVar1,0xf);
        STT3DSprC::StopShow(pSVar1,0);
        STT3DSprC::StopShow(pSVar1,1);
        STT3DSprC::StopShow(pSVar1,2);
      }
      if (local_c == *(uint *)(&DAT_007a8f11 + *(int *)(local_ec + 0x82a) * 0x45)) {
        STT3DSprC::StopShow(pSVar1,0xe);
        STT3DSprC::StopShow(pSVar1,0xd);
        STT3DSprC::StopShow(pSVar1,0xc);
        STT3DSprC::StopShow(pSVar1,0xb);
        if (*(int *)(local_ec + 0x6f7) == 0x21) {
          uVar13 = local_c;
          uVar19 = thunk_FUN_004ad650((int)pSVar1);
          uVar12 = *(undefined4 *)(local_ec + 0x6f7);
          sVar8 = *(short *)(local_ec + 0x6c);
          sVar7 = *(short *)(local_ec + 0x45);
          sVar6 = *(short *)(local_ec + 0x43);
          sVar33 = *(short *)(local_ec + 0x41);
        }
        else {
          uVar13 = 0xffffffff;
          uVar19 = thunk_FUN_004ad650((int)pSVar1);
          sVar8 = *(short *)(local_ec + 0x6c);
          sVar7 = *(short *)(local_ec + 0x45);
          uVar12 = *(undefined4 *)(local_ec + 0x6f7);
          sVar6 = *(short *)(local_ec + 0x43);
          sVar33 = *(short *)(local_ec + 0x41);
        }
        thunk_FUN_0062b770((int)sVar33,(int)sVar6,(int)sVar7,uVar12,(int)local_ec,(int)sVar8,uVar19,
                           uVar13);
        if (*(int **)(local_ec + 0x465) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)(local_ec + 0x465));
          FUN_0072e2b0(*(undefined4 **)(local_ec + 0x465));
          *(undefined4 *)(local_ec + 0x465) = 0;
        }
      }
      if ((*(int *)(local_ec + 0x6f7) == 0x21) && (local_c == 0x18)) {
        thunk_FUN_00637350((int)*(short *)(local_ec + 0x41),(int)*(short *)(local_ec + 0x43),
                           (int)*(short *)(local_ec + 0x45),3,*(uint *)(local_ec + 0x24),
                           (short)*(undefined4 *)(local_ec + 0x18),*(undefined2 *)(local_ec + 0x32),
                           0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + *(int *)(local_ec + 0x82a) * 0x45)) {
        thunk_FUN_004ad5e0((int)pSVar1);
      }
      if (((local_c == *(uint *)(&DAT_007a8f19 + *(int *)(local_ec + 0x82a) * 0x45)) &&
          (*(int *)(local_ec + 0x6f7) != 9)) && (*(int *)(local_ec + 0x6f7) != 0x15)) {
        STT3DSprC::StartShow(pSVar1,9,*(undefined4 *)(DAT_00802a38 + 0xe4));
      }
      if (((*(int *)(&DAT_007a8f19 + *(int *)(local_ec + 0x82a) * 0x45) < (int)local_c) &&
          (*(int *)(local_ec + 0x6f7) != 9)) &&
         ((*(int *)(local_ec + 0x6f7) != 0x15 &&
          (iVar10 = thunk_FUN_004ac910(pSVar1,'\b'),
          iVar10 == *(int *)(&DAT_007a8f0d + *(int *)(local_ec + 0x82a) * 0x45) + -1)))) {
        STT3DSprC::StopShow(pSVar1,8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + *(int *)(local_ec + 0x82a) * 0x45)) &&
         (local_1c != (int *)0x0)) {
        (**(code **)(*local_1c + 8))(0x6a,local_ec + 0x32);
      }
      if ((*(int *)(local_ec + 0x6f7) == 9) || (*(int *)(local_ec + 0x6f7) == 0x15)) {
        if (local_c != 0x27) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_8c = 10;
        local_90 = 0;
        local_94 = *(undefined4 *)(DAT_00802a38 + 0x14);
        local_88 = *(int **)(local_ec + 8);
        FUN_006e5810(local_9c);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = thunk_FUN_004ac910(pSVar1,'\t');
      if (iVar10 != 0x14) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
LAB_0045ad7b:
      local_8c = 10;
      local_90 = 0;
      local_94 = *(undefined4 *)(DAT_00802a38 + 0x14);
      local_88 = *(int **)(local_ec + 8);
      FUN_006e5810(local_9c);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (*(int *)(local_ec + 0x459) != 0) {
      switch(*(int *)(local_ec + 0x459)) {
      case 0x65:
        iVar10 = thunk_FUN_00460360((int *)local_ec);
        uVar32 = CONCAT44(extraout_EDX_21,iVar10);
        break;
      case 0x66:
        iVar10 = thunk_FUN_004653b0((int *)local_ec,uVar13,2);
        uVar32 = CONCAT44(extraout_EDX_23,iVar10);
        break;
      case 0x67:
        iVar10 = thunk_FUN_004620f0((int *)local_ec);
        uVar32 = CONCAT44(extraout_EDX_22,iVar10);
        break;
      case 0x68:
        iVar10 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x2,unaff_EDI,unaff_ESI);
        uVar32 = CONCAT44(extraout_EDX_28,iVar10);
        break;
      case 0x69:
        uVar32 = thunk_FUN_004732d0((int *)local_ec);
        break;
      case 0x6a:
        iVar10 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x2);
        uVar32 = CONCAT44(extraout_EDX_24,iVar10);
        break;
      case 0x6b:
        uVar32 = thunk_FUN_004769f0((int *)local_ec);
        break;
      case 0x6c:
        uVar32 = thunk_FUN_004803b0((int *)local_ec);
        break;
      case 0x6d:
        iVar10 = thunk_FUN_00478030(local_ec,2);
        uVar32 = CONCAT44(extraout_EDX_32,iVar10);
        break;
      case 0x6e:
        uVar32 = thunk_FUN_00476cc0((int *)local_ec);
        break;
      case 0x6f:
        iVar10 = thunk_FUN_0047da50((int *)local_ec);
        uVar32 = CONCAT44(extraout_EDX_35,iVar10);
        break;
      case 0x70:
        iVar10 = STBoatC::BackLoadRC((STBoatC *)local_ec,2);
        uVar32 = CONCAT44(extraout_EDX_25,iVar10);
        break;
      case 0x71:
        iVar10 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,2);
        uVar32 = CONCAT44(extraout_EDX_27,iVar10);
        break;
      case 0x72:
        iVar10 = thunk_FUN_004805b0(local_ec,(int *)0x2);
        uVar32 = CONCAT44(extraout_EDX_37,iVar10);
        break;
      case 0x73:
        iVar10 = thunk_FUN_00474810(local_ec,(int *)0x2);
        uVar32 = CONCAT44(extraout_EDX_29,iVar10);
        break;
      case 0x74:
        iVar10 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x2);
        uVar32 = CONCAT44(extraout_EDX_31,iVar10);
        break;
      case 0x75:
        iVar10 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x2,unaff_EDI,unaff_ESI);
        uVar32 = CONCAT44(extraout_EDX_26,iVar10);
        break;
      case 0x76:
        iVar10 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x2);
        uVar32 = CONCAT44(extraout_EDX_36,iVar10);
        break;
      case 0x77:
        uVar32 = thunk_FUN_0046d400((int *)local_ec,uVar13);
        break;
      case 0x78:
        iVar10 = thunk_FUN_00475530((int *)local_ec);
        uVar32 = CONCAT44(extraout_EDX_30,iVar10);
        break;
      case 0x79:
        iVar10 = thunk_FUN_0047bf70((int *)local_ec);
        uVar32 = CONCAT44(extraout_EDX_33,iVar10);
        break;
      case 0x7a:
        uVar32 = thunk_FUN_004795e0((int *)local_ec);
        break;
      case 0x7b:
        iVar10 = thunk_FUN_0047cf20((int *)local_ec);
        uVar32 = CONCAT44(extraout_EDX_34,iVar10);
        break;
      default:
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4cb);
        uVar32 = CONCAT44(extraout_EDX_38,local_8);
      }
      local_8 = (uint)uVar32;
      uVar13 = local_8;
      if (local_8 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4cd);
        uVar32 = CONCAT44(extraout_EDX_39,local_8);
      }
      if (uVar13 == 0) {
        *(undefined4 *)(local_ec + 0x459) = 0;
      }
      if (*(int *)(local_ec + 0x459) != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    uVar13 = (uint)((ulonglong)uVar32 >> 0x20);
    local_8 = (uint)uVar32;
    if (*(int *)(local_ec + 0x2c4) == 1) {
      uVar13 = 0;
      if (0 < *(int *)(local_ec + 0x73a)) {
        local_c = (uint)(*(int *)(local_ec + 0x2d4) == 1);
        local_78 = (uint)(*(int *)(local_ec + 0x314) == 1);
        local_7c = (void *)(uint)(*(int *)(local_ec + 0x2f4) == 1);
        pSVar30 = local_ec + 0x2cc;
        for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined4 *)pSVar30 = 0;
          pSVar30 = pSVar30 + 4;
        }
        *(undefined4 *)(local_ec + 0x2c4) = 0;
        if (local_c == 1) {
          *(undefined4 *)(local_ec + 0x2d4) = 1;
        }
        if (local_78 == 1) {
          *(undefined4 *)(local_ec + 0x314) = 1;
        }
        if (local_7c == (void *)0x1) {
          *(undefined4 *)(local_ec + 0x2f4) = 1;
        }
        if (((local_c == 1) || (local_78 == 1)) || (local_7c == (void *)0x1)) {
          *(undefined4 *)(local_ec + 0x2c4) = 1;
        }
      }
      if (*(int *)(local_ec + 0x314) == 1) {
        pSVar30 = local_ec + 0x2cc;
        for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined4 *)pSVar30 = 0;
          pSVar30 = pSVar30 + 4;
        }
        *(undefined4 *)(local_ec + 0x314) = 1;
        uVar13 = *(uint *)(local_ec + 0x3c4);
      }
      if ((*(int *)(local_ec + 0x45d) == 0x14) && (*(int *)(local_ec + 0x5c0) == 3)) {
        pSVar30 = local_ec + 0x2cc;
        for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined4 *)pSVar30 = 0;
          pSVar30 = pSVar30 + 4;
        }
        *(undefined4 *)(local_ec + 0x2c4) = 0;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      if ((*(int *)(local_ec + 0x2cc) == 1) && (uVar13 < *(uint *)(local_ec + 0x328))) {
        uVar13 = *(uint *)(local_ec + 0x328);
      }
      if ((*(int *)(local_ec + 0x2d0) == 1) && (uVar13 < *(uint *)(local_ec + 0x332))) {
        uVar13 = *(uint *)(local_ec + 0x332);
      }
      if ((*(int *)(local_ec + 0x2d4) == 1) && (uVar13 < *(uint *)(local_ec + 0x343))) {
        uVar13 = *(uint *)(local_ec + 0x343);
      }
      if ((*(int *)(local_ec + 0x2e0) == 1) && (uVar13 < *(uint *)(local_ec + 0x347))) {
        uVar13 = *(uint *)(local_ec + 0x347);
      }
      if ((*(int *)(local_ec + 0x2f8) == 1) && (uVar13 < *(uint *)(local_ec + 0x34f))) {
        uVar13 = *(uint *)(local_ec + 0x34f);
      }
      if ((*(int *)(local_ec + 0x30c) == 1) && (uVar13 < *(uint *)(local_ec + 0x36f))) {
        uVar13 = *(uint *)(local_ec + 0x36f);
      }
      if ((*(int *)(local_ec + 0x2fc) == 1) && (uVar13 < *(uint *)(local_ec + 0x392))) {
        uVar13 = *(uint *)(local_ec + 0x392);
      }
      if ((*(int *)(local_ec + 0x2d8) == 1) && (uVar13 < *(uint *)(local_ec + 0x39c))) {
        uVar13 = *(uint *)(local_ec + 0x39c);
      }
      if ((*(int *)(local_ec + 0x2dc) == 1) && (uVar13 < *(uint *)(local_ec + 0x3a6))) {
        uVar13 = *(uint *)(local_ec + 0x3a6);
      }
      if ((*(int *)(local_ec + 0x304) == 1) && (uVar13 < *(uint *)(local_ec + 0x3b6))) {
        uVar13 = *(uint *)(local_ec + 0x3b6);
      }
      if ((*(int *)(local_ec + 0x314) == 1) && (uVar13 < *(uint *)(local_ec + 0x3c4))) {
        uVar13 = *(uint *)(local_ec + 0x3c4);
      }
      if ((*(int *)(local_ec + 0x308) == 1) && (uVar13 < *(uint *)(local_ec + 0x3ca))) {
        uVar13 = *(uint *)(local_ec + 0x3ca);
      }
      if ((*(int *)(local_ec + 0x2e4) == 1) && (uVar13 < *(uint *)(local_ec + 0x3d4))) {
        uVar13 = *(uint *)(local_ec + 0x3d4);
      }
      if ((*(int *)(local_ec + 0x2f0) == 1) && (uVar13 < *(uint *)(local_ec + 0x3de))) {
        uVar13 = *(uint *)(local_ec + 0x3de);
      }
      if ((*(int *)(local_ec + 0x2ec) == 1) && (uVar13 < *(uint *)(local_ec + 1000))) {
        uVar13 = *(uint *)(local_ec + 1000);
      }
      if ((*(int *)(local_ec + 0x31c) == 1) && (uVar13 < *(uint *)(local_ec + 0x3f3))) {
        uVar13 = *(uint *)(local_ec + 0x3f3);
      }
      if ((*(int *)(local_ec + 0x318) == 1) && (uVar13 < *(uint *)(local_ec + 0x401))) {
        uVar13 = *(uint *)(local_ec + 0x401);
      }
      if ((*(int *)(local_ec + 800) == 1) && (uVar13 < *(uint *)(local_ec + 0x415))) {
        uVar13 = *(uint *)(local_ec + 0x415);
      }
      if ((*(int *)(local_ec + 0x2f4) == 1) && (uVar13 < *(uint *)(local_ec + 0x41f))) {
        uVar13 = *(uint *)(local_ec + 0x41f);
      }
      if ((*(int *)(local_ec + 0x310) == 1) && (uVar13 < *(uint *)(local_ec + 0x429))) {
        uVar13 = *(uint *)(local_ec + 0x429);
      }
      if ((*(int *)(local_ec + 0x2e8) == 1) && (uVar13 < *(uint *)(local_ec + 0x437))) {
        uVar13 = *(uint *)(local_ec + 0x437);
      }
      if ((*(int *)(local_ec + 0x300) == 1) && (uVar13 < *(uint *)(local_ec + 0x447))) {
        uVar13 = *(uint *)(local_ec + 0x447);
      }
      if ((*(int *)(local_ec + 0x2cc) == 1) && (*(uint *)(local_ec + 0x328) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2cc) = 0;
      }
      if ((*(int *)(local_ec + 0x2d0) == 1) && (*(uint *)(local_ec + 0x332) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2d0) = 0;
      }
      if ((*(int *)(local_ec + 0x2d4) == 1) && (*(uint *)(local_ec + 0x343) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2d4) = 0;
      }
      if ((*(int *)(local_ec + 0x2e0) == 1) && (*(uint *)(local_ec + 0x347) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2e0) = 0;
      }
      if ((*(int *)(local_ec + 0x2f8) == 1) && (*(uint *)(local_ec + 0x34f) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2f8) = 0;
      }
      if ((*(int *)(local_ec + 0x30c) == 1) && (*(uint *)(local_ec + 0x36f) < uVar13)) {
        *(undefined4 *)(local_ec + 0x30c) = 0;
      }
      if ((*(int *)(local_ec + 0x2fc) == 1) && (*(uint *)(local_ec + 0x392) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2fc) = 0;
      }
      if ((*(int *)(local_ec + 0x2d8) == 1) && (*(uint *)(local_ec + 0x39c) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2d8) = 0;
      }
      if ((*(int *)(local_ec + 0x2dc) == 1) && (*(uint *)(local_ec + 0x3a6) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2dc) = 0;
      }
      if ((*(int *)(local_ec + 0x304) == 1) && (*(uint *)(local_ec + 0x3b6) < uVar13)) {
        *(undefined4 *)(local_ec + 0x304) = 0;
      }
      if ((*(int *)(local_ec + 0x314) == 1) && (*(uint *)(local_ec + 0x3c4) < uVar13)) {
        *(undefined4 *)(local_ec + 0x314) = 0;
      }
      if ((*(int *)(local_ec + 0x308) == 1) && (*(uint *)(local_ec + 0x3ca) < uVar13)) {
        *(undefined4 *)(local_ec + 0x308) = 0;
      }
      if ((*(int *)(local_ec + 0x2e4) == 1) && (*(uint *)(local_ec + 0x3d4) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2e4) = 0;
      }
      if ((*(int *)(local_ec + 0x2f0) == 1) && (*(uint *)(local_ec + 0x3de) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2f0) = 0;
      }
      if ((*(int *)(local_ec + 0x2ec) == 1) && (*(uint *)(local_ec + 1000) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2ec) = 0;
      }
      if ((*(int *)(local_ec + 0x31c) == 1) && (*(uint *)(local_ec + 0x3f3) < uVar13)) {
        *(undefined4 *)(local_ec + 0x31c) = 0;
      }
      if ((*(int *)(local_ec + 0x318) == 1) && (*(uint *)(local_ec + 0x401) < uVar13)) {
        *(undefined4 *)(local_ec + 0x318) = 0;
      }
      if ((*(int *)(local_ec + 800) == 1) && (*(uint *)(local_ec + 0x415) < uVar13)) {
        *(undefined4 *)(local_ec + 800) = 0;
      }
      if ((*(int *)(local_ec + 0x2f4) == 1) && (*(uint *)(local_ec + 0x41f) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2f4) = 0;
      }
      if ((*(int *)(local_ec + 0x310) == 1) && (*(uint *)(local_ec + 0x429) < uVar13)) {
        *(undefined4 *)(local_ec + 0x310) = 0;
      }
      if ((*(int *)(local_ec + 0x2e8) == 1) && (*(uint *)(local_ec + 0x437) < uVar13)) {
        *(undefined4 *)(local_ec + 0x2e8) = 0;
      }
      if ((*(int *)(local_ec + 0x300) == 1) && (*(uint *)(local_ec + 0x447) < uVar13)) {
        *(undefined4 *)(local_ec + 0x300) = 0;
      }
      if (*(int *)(local_ec + 0x2d0) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 2;
          iVar10 = thunk_FUN_00462180(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x532);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x536;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x53e;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x549;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x544;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x567;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x56c;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x54e;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x580;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5a8;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x58a;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x585;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x59e;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x553;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x562;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5ad;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x571;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x57b;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x558;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5a3;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x55d;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x576;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x594;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x58f;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x599;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2f8) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0xc;
          iVar10 = thunk_FUN_00465c60((int *)local_ec,uVar13,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x5b9;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5c0;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5cb;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5c6;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5e9;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5ee;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5d0;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x602;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x62a;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x60c;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x607;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x620;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5d5;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5e4;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x62f;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5f3;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5fd;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5da;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x625;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5df;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x5f8;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x616;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x611;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x61b;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2cc) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 1;
          iVar10 = thunk_FUN_004602e0(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x63b);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x63f;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x647;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x652;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x64d;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x670;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x675;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x657;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x689;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6b1;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x693;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x68e;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6a7;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x65c;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x66b;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6b6;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x67a;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x684;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x661;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6ac;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x666;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x67f;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x69d;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x698;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6a2;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2e0) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 6;
          iVar10 = thunk_FUN_004658d0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x6c2;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6c9;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6d4;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6cf;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6f2;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6f7;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6d9;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x70b;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x733;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x715;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x710;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x729;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6de;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6ed;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x738;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6fc;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x706;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6e3;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x72e;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x6e8;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x701;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x71f;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x71a;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x724;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x30c) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0x11;
          iVar10 = thunk_FUN_0046b100(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x744);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x748;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x750;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x75b;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x756;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x779;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x77e;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x760;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x792;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7ba;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x79c;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x797;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7b0;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x765;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x774;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7bf;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x783;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x78d;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x76a;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7b5;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x76f;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x788;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7a6;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7a1;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7ab;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2fc) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0xd;
          iVar10 = thunk_FUN_0046d450(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x7cb;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7d2;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7dc;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7d7;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7fa;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7ff;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7e1;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x813;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x83b;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x81d;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x818;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x831;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7e6;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7f5;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x840;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x804;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x80e;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7eb;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x836;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x7f0;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x809;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x827;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x822;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x82c;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2d8) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 4;
          iVar10 = thunk_FUN_0046f5c0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x84c;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x853;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x85d;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x858;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x87b;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x880;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x862;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x894;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8bc;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x89e;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x899;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8b2;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x867;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x876;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8c1;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x885;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x88f;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x86c;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8b7;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x871;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x88a;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8a8;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8a3;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8ad;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2dc) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 5;
          iVar10 = thunk_FUN_00471ac0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x8cd;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8d4;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8de;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8d9;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8fc;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x901;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8e3;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x915;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x93d;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x91f;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x91a;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x933;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8e8;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8f7;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x942;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x906;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x910;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8ed;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x938;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x8f2;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x90b;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x929;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x924;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x92e;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x304) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0xf;
          iVar10 = thunk_FUN_004732f0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x94e;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x955;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x95f;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x95a;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x97d;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x982;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x964;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x996;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9be;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9a0;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x99b;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9b4;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x969;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x978;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9c3;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x987;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x991;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x96e;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9b9;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x973;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x98c;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9aa;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9a5;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9af;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x314) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0x14;
          iVar10 = thunk_FUN_004749c0(local_ec,(void *)0x0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x9cf;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9d6;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9e0;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9db;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9fe;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa03;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9e5;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa17;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa3f;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa21;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa1c;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa35;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9ea;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9f9;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa44;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa08;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa12;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9ef;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa3a;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x9f4;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa0d;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa2b;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa26;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa30;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x308) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0x10;
          iVar10 = thunk_FUN_004758e0(local_ec,(undefined4 *)0x0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xa50;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa57;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa61;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa5c;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa7f;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa84;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa66;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa98;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xac0;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xaa2;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa9d;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xab6;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa6b;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa7a;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xac5;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa89;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa93;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa70;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xabb;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa75;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xa8e;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xaac;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xaa7;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xab1;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2e4) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 7;
          iVar10 = thunk_FUN_004761b0((int *)local_ec,uVar13,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xad1);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xad5;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xadd;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xae8;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xae3;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb06;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb0b;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xaed;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb1f;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb47;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb29;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb24;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb3d;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xaf2;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb01;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb4c;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb10;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb1a;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xaf7;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb42;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xafc;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb15;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb33;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb2e;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb38;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2f0) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 10;
          iVar10 = thunk_FUN_00476a10(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xb58);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xb5c;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb64;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb6f;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb6a;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb8d;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb92;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb74;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xba6;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbce;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbb0;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbab;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbc4;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb79;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb88;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbd3;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb97;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xba1;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb7e;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbc9;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb83;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xb9c;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbba;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbb5;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbbf;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2ec) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 9;
          iVar10 = thunk_FUN_00476ce0(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xbdf);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xbe3;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbeb;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbf6;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbf1;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc14;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc19;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xbfb;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc2d;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc55;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc37;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc32;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc4b;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc00;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc0f;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc5a;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc1e;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc28;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc05;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc50;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc0a;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc23;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc41;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc3c;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc46;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x31c) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0x16;
          iVar10 = thunk_FUN_00478640(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xc66);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xc6a;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc72;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc7d;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc78;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc9b;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xca0;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc82;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcb4;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcdc;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcbe;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcb9;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcd2;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc87;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc96;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xce1;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xca5;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcaf;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc8c;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcd7;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xc91;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcaa;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcc8;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcc3;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xccd;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x318) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0x15;
          iVar10 = thunk_FUN_00479600(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xced);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xcf1;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcf9;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd04;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xcff;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd22;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd27;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd09;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd3b;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd63;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd45;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd40;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd59;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd0e;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd1d;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd68;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd2c;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd36;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd13;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd5e;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd18;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd31;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd4f;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd4a;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd54;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 800) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0x17;
          iVar10 = thunk_FUN_0047c050(local_ec,(int *)0x0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xd74);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xd78;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd80;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd8b;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd86;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xda9;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdae;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd90;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdc2;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdea;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdcc;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdc7;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xde0;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd95;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xda4;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdef;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdb3;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdbd;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd9a;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xde5;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xd9f;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdb8;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdd6;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xdd1;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xddb;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2f4) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0xb;
          iVar10 = thunk_FUN_0047d080(local_ec,(undefined4 *)0x0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xdfb);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xdff;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe07;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe12;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe0d;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe30;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe35;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe17;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe49;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe71;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe53;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe4e;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe67;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe1c;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe2b;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe76;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe3a;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe44;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe21;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe6c;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe26;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe3f;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe5d;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe58;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe62;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x310) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0x12;
          iVar10 = thunk_FUN_0047df00((int *)local_ec,uVar13,(int *)0x0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xe82);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xe86;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe8e;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe99;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe94;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xeb7;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xebc;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xe9e;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xed0;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xef8;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xeda;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xed5;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xeee;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xea3;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xeb2;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xefd;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xec1;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xecb;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xea8;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xef3;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xead;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xec6;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xee4;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xedf;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xee9;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x2e8) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 8;
          iVar10 = thunk_FUN_0047fe10(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xf09);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xf0d;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf15;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf20;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf1b;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf3e;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf43;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf25;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf57;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf7f;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf61;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf5c;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf75;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf2a;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf39;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf84;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf48;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf52;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf2f;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf7a;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf34;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf4d;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf6b;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf66;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf70;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (*(int *)(local_ec + 0x300) == 1) {
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 0xe;
          iVar10 = thunk_FUN_004803d0(local_ec,0);
          local_8 = iVar10;
          if (iVar10 == -1) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0xf90);
          }
          if (iVar10 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0xf94;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xf9c;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfa7;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfa2;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfc5;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfca;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfac;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfde;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1006;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfe8;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfe3;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xffc;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfb1;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfc0;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x100b;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfcf;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfd9;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfb6;
          local_8 = uVar13;
          break;
        case 0x12:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x76;
          uVar13 = thunk_FUN_0047fad0((int *)local_ec,uVar13,(void *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1001;
          local_8 = uVar13;
          break;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfbb;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfd4;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xff2;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xfed;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0xff7;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else {
        if (*(int *)(local_ec + 0x2d4) != 1) goto LAB_0045910d;
        if (*(int *)(local_ec + 0x45d) == 0) {
          *(undefined4 *)(local_ec + 0x45d) = 3;
          iVar10 = thunk_FUN_004608b0(local_ec,0);
          if (iVar10 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar10 = 0x1017;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)(local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x65;
          uVar13 = thunk_FUN_00460360((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x101e;
          local_8 = uVar13;
          break;
        case 2:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x66;
          uVar13 = thunk_FUN_004653b0((int *)local_ec,uVar13,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1028;
          local_8 = uVar13;
          break;
        case 3:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x67;
          uVar13 = thunk_FUN_004620f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1023;
          local_8 = uVar13;
          break;
        case 4:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x68;
          uVar13 = STBoatC::BackToDok((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1046;
          local_8 = uVar13;
          break;
        case 5:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x69;
          uVar13 = thunk_FUN_004732d0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x104b;
          local_8 = uVar13;
          break;
        case 6:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6a;
          uVar13 = STBoatC::BackPatrol((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x102d;
          local_8 = uVar13;
          break;
        case 7:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6b;
          uVar13 = thunk_FUN_004769f0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x105f;
          local_8 = uVar13;
          break;
        case 8:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6c;
          uVar13 = thunk_FUN_004803b0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1082;
          local_8 = uVar13;
          break;
        case 9:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6d;
          uVar13 = thunk_FUN_00478030(local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1069;
          local_8 = uVar13;
          break;
        case 10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6e;
          uVar13 = thunk_FUN_00476cc0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1064;
          local_8 = uVar13;
          break;
        case 0xb:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x6f;
          uVar13 = thunk_FUN_0047da50((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x107d;
          local_8 = uVar13;
          break;
        case 0xc:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x70;
          uVar13 = STBoatC::BackLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1032;
          local_8 = uVar13;
          break;
        case 0xd:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x71;
          uVar13 = STBoatC::BackUnLoadRC((STBoatC *)local_ec,0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1041;
          local_8 = uVar13;
          break;
        case 0xe:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x72;
          uVar13 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1087;
          local_8 = uVar13;
          break;
        case 0xf:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x73;
          uVar13 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1050;
          local_8 = uVar13;
          break;
        case 0x10:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x74;
          uVar13 = STBoatC::BackUnLoadObj((STBoatC *)local_ec,(int *)0x0);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x105a;
          local_8 = uVar13;
          break;
        case 0x11:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x75;
          uVar13 = STBoatC::BackBuild((STBoatC *)local_ec,(int *)0x0,unaff_EDI,unaff_ESI);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1037;
          local_8 = uVar13;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        case 0x13:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x77;
          uVar13 = thunk_FUN_0046d400((int *)local_ec,uVar13);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x103c;
          local_8 = uVar13;
          break;
        case 0x14:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x78;
          uVar13 = thunk_FUN_00475530((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1055;
          local_8 = uVar13;
          break;
        case 0x15:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x79;
          uVar13 = thunk_FUN_0047bf70((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1073;
          local_8 = uVar13;
          break;
        case 0x16:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7a;
          uVar13 = thunk_FUN_004795e0((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x106e;
          local_8 = uVar13;
          break;
        case 0x17:
          *(undefined4 *)(local_ec + 0x45d) = 0;
          *(undefined4 *)(local_ec + 0x459) = 0x7b;
          uVar13 = thunk_FUN_0047cf20((int *)local_ec);
          if (uVar13 != -1) goto LAB_00458c5b;
          iVar10 = 0x1078;
          local_8 = uVar13;
        }
      }
      uVar13 = local_8;
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10);
LAB_00458c5b:
      if (uVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x459) = 0;
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
LAB_0045910d:
    switch(*(undefined4 *)(local_ec + 0x45d)) {
    case 1:
      iVar10 = thunk_FUN_004602e0(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1094);
      }
      if (iVar10 == 0) {
        *(undefined4 *)(local_ec + 0x45d) = 3;
        iVar10 = thunk_FUN_004608b0(local_ec,0);
        if (iVar10 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar10 = 0x1099;
        local_8 = 0xffffffff;
      }
      else {
        if (iVar10 != 3) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (((*(int *)(local_ec + 0xb3) == 0) &&
            (uVar13 = *(int *)(local_ec + 0xbb) - (int)*(short *)(local_ec + 0x5b) >> 0x1f,
            (int)((*(int *)(local_ec + 0xbb) - (int)*(short *)(local_ec + 0x5b) ^ uVar13) - uVar13)
            < 2)) && (uVar13 = *(int *)(local_ec + 0xbf) - (int)*(short *)(local_ec + 0x5d) >> 0x1f,
                     (int)((*(int *)(local_ec + 0xbf) - (int)*(short *)(local_ec + 0x5d) ^ uVar13) -
                          uVar13) < 2)) {
          uVar13 = *(int *)(local_ec + 0xc3) - (int)*(short *)(local_ec + 0x5f);
          uVar15 = (int)uVar13 >> 0x1f;
          iVar10 = (uVar13 ^ uVar15) - uVar15;
          if ((iVar10 < 2) &&
             (uVar20 = (undefined2)((uint)iVar10 >> 0x10),
             iVar10 = (**(code **)(*(int *)local_ec + 0x18))
                                (CONCAT22(uVar20,*(undefined2 *)(local_ec + 0xbb)),
                                 CONCAT22(*(short *)(local_ec + 0x5f) >> 0xf,
                                          *(undefined2 *)(local_ec + 0xbf)),
                                 CONCAT22(uVar20,*(undefined2 *)(local_ec + 0xc3))), iVar10 == 0)) {
            *(undefined4 *)(local_ec + 0x45d) = 3;
            iVar10 = thunk_FUN_004608b0(local_ec,0);
            if (iVar10 != -1) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            iVar10 = 0x10ad;
            local_8 = 0xffffffff;
            break;
          }
        }
        iVar10 = thunk_FUN_0040ae40(local_1c,(uint)*(ushort *)(local_ec + 0x32),'\0');
        if (iVar10 != -4) {
          uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(local_ec + 0x1c) = uVar13;
          *(short *)(local_ec + 0xf8) = (short)((ulonglong)(uVar13 >> 0x10) % 0x1f) + 0x1e;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        *(undefined4 *)(local_ec + 0x45d) = 3;
        iVar10 = thunk_FUN_004608b0(local_ec,0);
        if (iVar10 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar10 = 0x10b3;
        local_8 = 0xffffffff;
      }
      break;
    case 2:
      iVar10 = thunk_FUN_00462180(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10be);
      }
      if (iVar10 != 0) {
        if (iVar10 == 3) {
          thunk_FUN_0040ae40(local_1c,(uint)*(ushort *)(local_ec + 0x32),'\0');
          iVar10 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
          *(int *)(local_ec + 0x1c) = iVar10;
          *(ushort *)(local_ec + 0xf8) = ((ushort)((uint)iVar10 >> 0x10) & 0xf) + 0xf;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 == 4) {
          (**(code **)(*local_1c + 8))(0x66,local_ec + 0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 == 6) {
          (**(code **)(*local_1c + 8))(0x68,local_ec + 0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar10 != 7) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        (**(code **)(*local_1c + 8))(0x69,local_ec + 0x32);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      local_46 = *(undefined2 *)(local_ec + 0x7f2);
      local_48 = *(undefined2 *)(local_ec + 0x32);
      *(undefined2 *)(local_ec + 0x816) = 5;
      (**(code **)(*local_1c + 8))(0x67,&local_48);
      *(undefined2 *)(local_ec + 0x7f2) = 0xffff;
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10c8;
      local_8 = 0xffffffff;
      break;
    case 3:
      iVar10 = thunk_FUN_004608b0(local_ec,2);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10bb;
      local_8 = 0xffffffff;
      break;
    case 4:
      iVar10 = thunk_FUN_0046f5c0(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x111a);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      puVar18 = (undefined4 *)thunk_FUN_004357f0((char)local_ec[0x24]);
      if (puVar18 != (undefined4 *)0x0) {
        local_8c = 0x5d94;
        local_88 = (int *)CONCAT22(*(undefined2 *)(local_ec + 0x32),*(undefined2 *)(local_ec + 0x24)
                                  );
        local_84 = *(undefined4 *)(local_ec + 0x18);
        (**(code **)*puVar18)(local_9c);
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1127;
      local_8 = 0xffffffff;
      break;
    case 5:
      iVar10 = thunk_FUN_00471ac0(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x112c);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1131;
      local_8 = 0xffffffff;
      break;
    case 6:
      iVar10 = thunk_FUN_004658d0(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10e8);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10ed;
      local_8 = 0xffffffff;
      break;
    case 7:
      iVar10 = thunk_FUN_004761b0((int *)local_ec,uVar13,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1154);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1159;
      local_8 = 0xffffffff;
      break;
    case 8:
      iVar10 = thunk_FUN_0047fe10(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11ac);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11b1;
      local_8 = 0xffffffff;
      break;
    case 9:
      iVar10 = thunk_FUN_00476ce0(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1168);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x116d;
      local_8 = 0xffffffff;
      break;
    case 10:
      iVar10 = thunk_FUN_00476a10(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x115e);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1163;
      local_8 = 0xffffffff;
      break;
    case 0xb:
      iVar10 = thunk_FUN_0047d080(local_ec,(undefined4 *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1198);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x119d;
      local_8 = 0xffffffff;
      break;
    case 0xc:
      iVar10 = thunk_FUN_00465c60((int *)local_ec,uVar13,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10f2);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x10f7;
      local_8 = 0xffffffff;
      break;
    case 0xd:
      iVar10 = thunk_FUN_0046d450(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1110);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1115;
      local_8 = 0xffffffff;
      break;
    case 0xe:
      iVar10 = thunk_FUN_004803d0(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11b6);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11bb;
      local_8 = 0xffffffff;
      break;
    case 0xf:
      iVar10 = thunk_FUN_004732f0(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1136);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x113b;
      local_8 = 0xffffffff;
      break;
    case 0x10:
      iVar10 = thunk_FUN_004758e0(local_ec,(undefined4 *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x114a);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x114f;
      local_8 = 0xffffffff;
      break;
    case 0x11:
      iVar10 = thunk_FUN_0046b100(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x10fc);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1101;
      local_8 = 0xffffffff;
      break;
    case 0x12:
      iVar10 = thunk_FUN_0047df00((int *)local_ec,uVar13,(int *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x11a2);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x11a7;
      local_8 = 0xffffffff;
      break;
    case 0x13:
      uVar13 = thunk_FUN_0046cf20((int *)local_ec,uVar13);
      local_8 = uVar13;
      if (uVar13 == 0xffffffff) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1106);
      }
      if (uVar13 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x110b;
      local_8 = 0xffffffff;
      break;
    case 0x14:
      iVar10 = thunk_FUN_004749c0(local_ec,(void *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1140);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1145;
      local_8 = 0xffffffff;
      break;
    case 0x15:
      iVar10 = thunk_FUN_00479600(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1184);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1189;
      local_8 = 0xffffffff;
      break;
    case 0x16:
      iVar10 = thunk_FUN_00478640(local_ec,2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1172);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      puVar18 = (undefined4 *)thunk_FUN_004357f0((char)local_ec[0x24]);
      if (puVar18 != (undefined4 *)0x0) {
        local_8c = 0x5d94;
        local_88 = (int *)CONCAT22(*(undefined2 *)(local_ec + 0x32),*(undefined2 *)(local_ec + 0x24)
                                  );
        local_84 = *(undefined4 *)(local_ec + 0x18);
        (**(code **)*puVar18)(local_9c);
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x117f;
      local_8 = 0xffffffff;
      break;
    case 0x17:
      iVar10 = thunk_FUN_0047c050(local_ec,(int *)0x2);
      local_8 = iVar10;
      if (iVar10 == -1) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x118e);
      }
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      *(undefined4 *)(local_ec + 0x45d) = 3;
      iVar10 = thunk_FUN_004608b0(local_ec,0);
      if (iVar10 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar10 = 0x1193;
      local_8 = 0xffffffff;
      break;
    default:
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
LAB_0045aee3:
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar10);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  uVar15 = 0;
  uVar23 = extraout_EDX;
  if (uVar13 == 0) goto LAB_0045048a;
  if (uVar13 != 2) {
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  local_1c = *(int **)(param_1 + 0x14);
  thunk_FUN_00417a00(local_ec,0);
  if (local_1c[3] == 0) {
    iVar10 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(local_ec + 0x6f3) = *(undefined4 *)(iVar10 + 0x14);
    *(undefined4 *)(local_ec + 0x6f7) = *(undefined4 *)(iVar10 + 0x18);
    iVar11 = *(int *)(iVar10 + 0x2a);
    if (iVar11 < 0) {
      *(undefined4 *)(local_ec + 0x7d6) = 0;
    }
    else if (iVar11 < 0x79) {
      *(int *)(local_ec + 0x7d6) = iVar11 / 3;
    }
    else {
      *(undefined4 *)(local_ec + 0x7d6) = 0x28;
    }
    iVar11 = *(int *)(iVar10 + 0x2e);
    if (iVar11 < 0) {
      *(undefined4 *)(local_ec + 0x7da) = 0;
    }
    else if (iVar11 < 0x321) {
      *(int *)(local_ec + 0x7da) = iVar11 / 0x14;
    }
    else {
      *(undefined4 *)(local_ec + 0x7da) = 0x28;
    }
    iVar11 = *(int *)(local_ec + 0x7da) + *(int *)(local_ec + 0x7d6);
    if (0x28 < iVar11) {
      iVar11 = (*(int *)(local_ec + 0x7d6) * 0x28) / iVar11;
      *(int *)(local_ec + 0x7d6) = iVar11;
      *(int *)(local_ec + 0x7da) = 0x28 - iVar11;
    }
    switch(*(int *)(local_ec + 0x6f7)) {
    case 0x16:
    case 0x25:
      *(undefined4 *)(local_ec + 0x726) = 0x28;
      break;
    case 0x17:
      *(undefined4 *)(local_ec + 0x72a) = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      *(undefined4 *)(local_ec + 0x71e) = 0x14;
      break;
    case 0x23:
      *(undefined4 *)(local_ec + 0x722) = 0x14;
    }
    sVar33 = *(short *)(iVar10 + 0x1c);
    local_c = CONCAT22((short)((uint)(*(int *)(local_ec + 0x6f7) + -0x16) >> 0x10),sVar33);
    sVar6 = *(short *)(iVar10 + 0x20);
    sVar7 = *(short *)(iVar10 + 0x1e);
    if (((sVar33 < 0) || (DAT_007fb240 <= sVar33)) ||
       ((sVar7 < 0 || (((DAT_007fb242 <= sVar7 || (sVar6 < 0)) || (DAT_007fb244 <= sVar6)))))) {
      local_10 = (int *)0x0;
    }
    else {
      local_10 = *(int **)(DAT_007fb248 +
                          ((uint)(byte)local_ec[0x8e] +
                          ((int)sVar6 * (int)DAT_007fb246 + (int)sVar7 * (int)DAT_007fb240 +
                          (int)sVar33) * 2) * 4);
    }
    if (local_10 != (int *)0x0) {
      iVar11 = (**(code **)(*local_10 + 0x114))(*(undefined4 *)(local_ec + 0x6f7));
      if (iVar11 == 0) {
        iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x197,0,0,&DAT_007a4ccc,
                                    s_STBoatC__GetMessage_MESS_ID_CREA_007aa02c);
        if (iVar11 != 0) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return uVar12;
        }
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x198);
      }
      (**(code **)(*local_10 + 0x118))(*(undefined4 *)(local_ec + 0x18));
      iVar11 = *(int *)(local_ec + 0x6f7);
      if (((iVar11 == 7) || (iVar11 == 0x13)) || (iVar11 == 0x1b)) {
        *(int *)(local_ec + 0x7ca) = local_10[6];
        FUN_006ea3e0(*(void **)(local_ec + 0x211),*(uint *)(local_ec + 0x1ed),
                     *(int *)((int)local_10 + 0x1ed));
      }
    }
    *(undefined4 *)(local_ec + 0x6fb) = *(undefined4 *)(iVar10 + 0x36);
    *(undefined4 *)(local_ec + 0x6ff) = *(undefined4 *)(iVar10 + 0x3a);
    *(undefined4 *)(local_ec + 0x703) = *(undefined4 *)(iVar10 + 0x3e);
    *(undefined2 *)(local_ec + 0x707) = *(undefined2 *)(iVar10 + 0x42);
    local_ec[0x709] = *(STSprGameObjC *)(iVar10 + 0x44);
    *(undefined4 *)(local_ec + 0x73e) = *(undefined4 *)(iVar10 + 0x32);
    if (local_10 == (int *)0x0) {
      *(undefined4 *)(local_ec + 0x76) = 1;
      uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)(local_ec + 0x1c) = uVar13;
      *(short *)(local_ec + 0x6e) = (short)((ulonglong)(uVar13 >> 0x10) % 0x30);
    }
    else {
      *(undefined2 *)(local_ec + 0x6e) = *(undefined2 *)((int)local_10 + 0x6e);
      iVar11 = *(int *)(local_ec + 0x6f7);
      if (((iVar11 == 7) || (iVar11 == 0x13)) || (iVar11 == 0x1b)) {
        *(undefined4 *)(local_ec + 0x76) = 1;
      }
      else {
        *(undefined4 *)(local_ec + 0x76) = 0;
      }
    }
    thunk_FUN_00416390((int)local_ec);
    local_ec[0xe3] = (STSprGameObjC)0x0;
    thunk_FUN_0048a670(local_ec);
    iVar11 = *(int *)(iVar10 + 0x26);
    if (iVar11 < 0) {
      *(undefined4 *)(local_ec + 0x716) = 1;
    }
    else {
      if (iVar11 < 100) {
        iVar11 = (*(int *)(local_ec + 0x712) * iVar11) / 100;
      }
      else {
        iVar11 = *(int *)(local_ec + 0x712);
      }
      *(int *)(local_ec + 0x716) = iVar11;
    }
    thunk_FUN_0048a910((int)local_ec);
    thunk_FUN_0048a840((int)local_ec);
    if ((((local_10 == (int *)0x0) || (iVar11 = *(int *)(local_ec + 0x6f7), iVar11 == 7)) ||
        (iVar11 == 0x13)) || (iVar11 == 0x1b)) {
      thunk_FUN_00417a20(local_ec,*(short *)(iVar10 + 0x1c),*(short *)(iVar10 + 0x1e),
                         *(short *)(iVar10 + 0x20),1);
    }
    else {
      thunk_FUN_00417a20(local_ec,*(short *)(iVar10 + 0x1c),*(short *)(iVar10 + 0x1e),
                         *(short *)(iVar10 + 0x20),0);
      *(undefined2 *)(local_ec + 0x41) = *(undefined2 *)((int)local_10 + 0x41);
      *(undefined2 *)(local_ec + 0x43) = *(undefined2 *)((int)local_10 + 0x43);
      *(undefined2 *)(local_ec + 0x45) = *(undefined2 *)((int)local_10 + 0x45);
      local_ec[0x4d] = *(STSprGameObjC *)((int)local_10 + 0x4d);
    }
    if ((*(int *)(local_ec + 0x6f7) == 9) || (*(int *)(local_ec + 0x6f7) == 0x15)) {
      sVar33 = 8;
    }
    else {
      sVar33 = 0x18;
    }
    thunk_FUN_00417e70(local_ec,sVar33);
    if (local_10 == (int *)0x0) {
      iVar11 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
      *(int *)(local_ec + 0x1c) = iVar11;
      thunk_FUN_00417ee0(local_ec,((ushort)((uint)iVar11 >> 0x10) & 7) * 0x2d);
      uVar20 = extraout_var_02;
      uVar24 = extraout_var_05;
    }
    else {
      *(short *)(local_ec + 0x6c) = (short)local_10[0x1b];
      uVar20 = extraout_var_01;
      uVar24 = extraout_var_04;
    }
    STAllPlayersC::RegisterObject
              (DAT_007fa174,CONCAT31((int3)((uint)*(int *)(iVar10 + 0x49) >> 8),local_ec[0x24]),
               CONCAT22(uVar24,*(undefined2 *)(iVar10 + 0x24)),
               CONCAT22(uVar20,*(undefined2 *)(iVar10 + 0x22)),(int *)local_ec,1,
               *(int *)(iVar10 + 0x49));
    *(undefined4 *)(local_ec + 0x487) = 0xffffffff;
    *(undefined4 *)(local_ec + 0x48b) = 0xffff;
    *(short *)(local_ec + 0x814) = *(short *)(local_ec + 0x816) * 0xc9;
    if (((local_10 == (int *)0x0) || (iVar10 = *(int *)(local_ec + 0x6f7), iVar10 == 7)) ||
       ((iVar10 == 0x13 || (iVar10 == 0x1b)))) {
      *(undefined4 *)(local_ec + 0x82e) = 0xffffffff;
      *(undefined4 *)(local_ec + 0x836) = 4;
      *(undefined2 *)(local_ec + 0x475) = *(undefined2 *)(local_ec + 0x47);
      *(undefined2 *)(local_ec + 0x477) = *(undefined2 *)(local_ec + 0x49);
      *(undefined2 *)(local_ec + 0x479) = *(undefined2 *)(local_ec + 0x4b);
    }
    else {
      *(undefined4 *)(local_ec + 0x45d) = 0x14;
      *(undefined4 *)(local_ec + 0x7c2) = 1;
      (**(code **)(*(int *)local_ec + 0x100))(*(uint *)(local_ec + 0x1d1) | 0xd);
      *(undefined4 *)(local_ec + 0x5c0) = 3;
      *(undefined2 *)(local_ec + 0x5a0) = *(undefined2 *)(local_ec + 0x30);
      *(int *)(local_ec + 0x5a2) = local_10[6];
      *(undefined4 *)(local_ec + 0x5a6) = 0;
      *(undefined4 *)(local_ec + 0x5c4) = 7;
    }
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    local_d4 = (uVar13 >> 0x10) % 0x13;
    iVar10 = (**(code **)(*(int *)local_ec + 0x2c))();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar10 >> 8),local_ec[0x24]),iVar10);
    if (*(uint *)(local_ec + 0x24) == (uint)*(byte *)(*(int *)(local_ec + 0x10) + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)(local_ec + 0x24));
    }
    switch(*(undefined4 *)(local_ec + 0x6f7)) {
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)(local_ec + 0x70a) = 8;
      break;
    default:
      *(undefined4 *)(local_ec + 0x70a) = 5;
    }
    thunk_FUN_0041c3f0(local_ec,*(undefined **)(local_ec + 0x70a));
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    iVar10 = ((uVar13 >> 0x10) % 5) * 0x19;
    *(int *)(local_ec + 0x77e) = iVar10 + -0xf;
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    *(uint *)(local_ec + 0x77a) = (uVar13 >> 0x10) % (iVar10 - 0xeU);
  }
  if (local_1c[3] == 1) {
    iVar10 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(local_ec + 0x6f3) = *(undefined4 *)(iVar10 + 0x14);
    *(undefined4 *)(local_ec + 0x6f7) = *(undefined4 *)(iVar10 + 0x18);
    *(undefined4 *)(local_ec + 0x6fb) = *(undefined4 *)(iVar10 + 0x32);
    *(undefined4 *)(local_ec + 0x6ff) = *(undefined4 *)(iVar10 + 0x36);
    *(undefined4 *)(local_ec + 0x703) = *(undefined4 *)(iVar10 + 0x3a);
    *(undefined2 *)(local_ec + 0x707) = *(undefined2 *)(iVar10 + 0x3e);
    local_ec[0x709] = *(STSprGameObjC *)(iVar10 + 0x40);
    *(undefined4 *)(local_ec + 0x81e) = *(undefined4 *)(iVar10 + 0x41);
    switch(*(undefined4 *)(local_ec + 0x6f7)) {
    case 0x16:
    case 0x25:
      *(undefined4 *)(local_ec + 0x726) = 0x28;
      break;
    case 0x17:
      *(undefined4 *)(local_ec + 0x72a) = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      *(undefined4 *)(local_ec + 0x71e) = 0x14;
      break;
    case 0x23:
      *(undefined4 *)(local_ec + 0x722) = 0x14;
    }
    *(undefined4 *)(local_ec + 0x76) = 1;
    *(undefined2 *)(local_ec + 0x6e) = 0;
    thunk_FUN_00416390((int)local_ec);
    local_ec[0xe3] = (STSprGameObjC)0x0;
    thunk_FUN_0048a670(local_ec);
    thunk_FUN_0048a910((int)local_ec);
    uVar12 = thunk_FUN_0048a840((int)local_ec);
    thunk_FUN_00495ff0(*(short *)(iVar10 + 0x1c),*(short *)(iVar10 + 0x1e),*(short *)(iVar10 + 0x20)
                       ,CONCAT31((int3)((uint)uVar12 >> 8),local_ec[0x8e]),(int)local_ec);
    *(undefined2 *)(local_ec + 0x47) = *(undefined2 *)(iVar10 + 0x1c);
    *(undefined2 *)(local_ec + 0x41) = *(undefined2 *)(iVar10 + 0x22);
    *(undefined2 *)(local_ec + 0x49) = *(undefined2 *)(iVar10 + 0x1e);
    *(undefined2 *)(local_ec + 0x43) = *(undefined2 *)(iVar10 + 0x24);
    uVar20 = *(undefined2 *)(iVar10 + 0x20);
    *(undefined2 *)(local_ec + 0x4b) = uVar20;
    *(undefined2 *)(local_ec + 0x45) = *(undefined2 *)(iVar10 + 0x26);
    DumpClassC::WritePtr
              (*(short *)(local_ec + 0x47),*(short *)(local_ec + 0x49),*(short *)(local_ec + 0x4b),
               CONCAT31((int3)(CONCAT22(extraout_var_06,uVar20) >> 8),local_ec[0x8e]),(int)local_ec)
    ;
    if ((*(int *)(local_ec + 0x6f7) == 9) || (*(int *)(local_ec + 0x6f7) == 0x15)) {
      sVar33 = 8;
    }
    else {
      sVar33 = 0x18;
    }
    thunk_FUN_00417e70(local_ec,sVar33);
    uVar12 = thunk_FUN_00417ee0(local_ec,0x5a);
    uVar12 = STAllPlayersC::RegisterObject
                       (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),local_ec[0x24]),
                        CONCAT22((short)((uint)uVar12 >> 0x10),*(undefined2 *)(iVar10 + 0x2a)),
                        0xffff,(int *)local_ec,0,0);
    *(undefined4 *)(local_ec + 0x45d) = 0x13;
    *(undefined2 *)(local_ec + 0x510) = *(undefined2 *)(iVar10 + 0x1c);
    *(undefined2 *)(local_ec + 0x512) = *(undefined2 *)(iVar10 + 0x1e);
    *(undefined2 *)(local_ec + 0x514) = *(undefined2 *)(iVar10 + 0x20);
    *(undefined2 *)(local_ec + 0x516) = *(undefined2 *)(iVar10 + 0x22);
    *(undefined2 *)(local_ec + 0x518) = *(undefined2 *)(iVar10 + 0x24);
    *(undefined2 *)(local_ec + 0x51a) = *(undefined2 *)(iVar10 + 0x26);
    *(undefined2 *)(local_ec + 0x51c) = *(undefined2 *)(iVar10 + 0x2c);
    uVar20 = *(undefined2 *)(iVar10 + 0x2e);
    *(undefined2 *)(local_ec + 0x51e) = uVar20;
    *(undefined2 *)(local_ec + 0x520) = *(undefined2 *)(iVar10 + 0x30);
    local_10 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(CONCAT22((short)((uint)uVar12 >> 0x10),
                                                                  uVar20) >> 8),local_ec[0x24]),
                                         CONCAT22(extraout_var_07,*(undefined2 *)(iVar10 + 0x28)),1)
    ;
    if (local_10 == (int *)0x0) {
      *(undefined4 *)(local_ec + 0x524) = 0;
    }
    else {
      *(int *)(local_ec + 0x524) = local_10[6];
    }
    *(undefined4 *)(local_ec + 0x528) = 0;
    FUN_006ea460(*(void **)(local_ec + 0x211),*(uint *)(local_ec + 0x1ed),
                 *(int *)((int)local_10 + 0x1ed));
    local_d4 = DAT_008073fc * 5;
    iVar11 = (**(code **)(*(int *)local_ec + 0x2c))();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),local_ec[0x24]),iVar11);
    if (*(uint *)(local_ec + 0x24) == (uint)*(byte *)(*(int *)(local_ec + 0x10) + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)(local_ec + 0x24));
    }
    switch(*(undefined4 *)(local_ec + 0x6f7)) {
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)(local_ec + 0x70a) = 8;
      break;
    default:
      *(undefined4 *)(local_ec + 0x70a) = 5;
    }
    thunk_FUN_0041c3f0(local_ec,*(undefined **)(local_ec + 0x70a));
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    iVar11 = ((uVar13 >> 0x10) % 5) * 0x19;
    *(int *)(local_ec + 0x77e) = iVar11 + -0xf;
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    *(uint *)(local_ec + 0x77a) = (uVar13 >> 0x10) % (iVar11 - 0xeU);
    if (DAT_008117bc != (int *)0x0) {
      local_8c = 0x5dd0;
      local_88 = (int *)CONCAT22(*(undefined2 *)(local_ec + 0x32),*(undefined2 *)(local_ec + 0x24));
      local_84 = CONCAT22(*(undefined2 *)(iVar10 + 0x28),*(undefined2 *)(local_ec + 0x24));
      (**(code **)*DAT_008117bc)(local_9c);
    }
    switch(*(undefined4 *)(local_ec + 0x6f7)) {
    case 1:
      uVar12 = 200;
      break;
    case 2:
      uVar12 = 0xce;
      break;
    case 3:
      uVar12 = 0xd4;
      break;
    case 4:
      uVar12 = 0xda;
      break;
    case 5:
      uVar12 = 0xe0;
      break;
    case 6:
      uVar12 = 0xe7;
      break;
    case 7:
      uVar12 = 0xee;
      break;
    case 8:
      uVar12 = 0xf5;
      break;
    case 9:
      uVar12 = 0xfd;
      break;
    case 10:
      uVar12 = 0x102;
      break;
    case 0xb:
      uVar12 = 0x108;
      break;
    case 0xc:
      uVar12 = 0x10e;
      break;
    case 0xd:
      uVar12 = 300;
      break;
    case 0xe:
      uVar12 = 0x132;
      break;
    case 0xf:
      uVar12 = 0x138;
      break;
    case 0x10:
      uVar12 = 0x13e;
      break;
    case 0x11:
      uVar12 = 0x144;
      break;
    case 0x12:
      uVar12 = 0x14b;
      break;
    case 0x13:
      uVar12 = 0x152;
      break;
    case 0x14:
      uVar12 = 0x159;
      break;
    case 0x15:
      uVar12 = 0x161;
      break;
    case 0x16:
      uVar12 = 0x166;
      break;
    case 0x17:
      uVar12 = 0x16e;
      break;
    case 0x18:
      uVar12 = 0x174;
      break;
    case 0x19:
      uVar12 = 400;
      break;
    case 0x1a:
      uVar12 = 0x198;
      break;
    case 0x1b:
      uVar12 = 0x1a0;
      break;
    case 0x1c:
      uVar12 = 0x1a6;
      break;
    case 0x1d:
      uVar12 = 0x1ac;
      break;
    case 0x1e:
      uVar12 = 0x1b3;
      break;
    case 0x1f:
      uVar12 = 0x1b9;
      break;
    case 0x20:
      uVar12 = 0x1bf;
      break;
    case 0x21:
      uVar12 = 0x1c5;
      break;
    case 0x22:
      uVar12 = 0x1cc;
      break;
    case 0x23:
      uVar12 = 0x1d3;
      break;
    case 0x24:
      uVar12 = 0x1d9;
      break;
    case 0x25:
      uVar12 = 0x17a;
      break;
    case 0x26:
      uVar12 = 0x114;
      break;
    case 0x27:
      uVar12 = 0x180;
      break;
    case 0x28:
      uVar12 = 0x1df;
      break;
    default:
      uVar12 = 0;
    }
    (**(code **)(*(int *)local_ec + 0x90))(4,uVar12);
  }
  if (local_1c[3] == 2) {
    iVar10 = *(int *)(param_1 + 0x14);
    local_d0 = (undefined4 *)FUN_006aac70(0x44);
    do {
      *(int **)(iVar25 + (int)local_d0) = DAT_0080677c;
      iVar25 = iVar25 + 4;
    } while (iVar25 < 0x44);
    local_d0[2] = DAT_00806774;
    local_d0[1] = DAT_00806774;
    *local_d0 = DAT_00806774;
    local_d0[0xf] = DAT_00806774;
    local_d0[9] = DAT_00806764;
    local_d0[8] = DAT_00806774;
    local_d0[10] = DAT_00806774;
    local_d0[0xb] = DAT_00806774;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = DAT_008073cc;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    STT3DSprC::RestoreSpr
              ((STT3DSprC *)(local_ec + 0x1d5),(int *)&local_d0,
               (undefined4 *)(*(int *)(iVar10 + 0x5f6) + iVar10));
    FUN_006ab060(&local_d0);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)local_ec,(undefined4 *)(*(int *)(iVar10 + 0x5fe) + iVar10));
    STBoatC::RestoreBoatData((STBoatC *)local_ec,iVar10);
    *(undefined4 *)(local_ec + 0x5a6) = 0;
    STAllPlayersC::RegisterObject
              (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),local_ec[0x24]),
               CONCAT22(extraout_var_03,*(undefined2 *)(local_ec + 0x30)),
               CONCAT22(extraout_var,*(undefined2 *)(local_ec + 0x32)),(int *)local_ec,1,0);
    if ((*(int *)(local_ec + 0x45d) != 0x14) || (*(int *)(local_ec + 0x5c0) != 3)) {
      DumpClassC::WritePtr
                (*(short *)(local_ec + 0x5b),*(short *)(local_ec + 0x5d),*(short *)(local_ec + 0x5f)
                 ,0,(int)local_ec);
    }
    thunk_FUN_0048a910((int)local_ec);
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6);
  }
  local_74[0] = 0;
  local_e8[0] = 0;
  switch(*(undefined4 *)(local_ec + 0x6f7)) {
  case 1:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e8c;
    break;
  case 2:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e84;
    break;
  case 3:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e7c;
    break;
  case 4:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e74;
    break;
  case 5:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e6c;
    break;
  case 6:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e64;
    break;
  case 7:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e5c;
    break;
  case 8:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e54;
    break;
  case 9:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e50;
    break;
  case 10:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e48;
    break;
  case 0xb:
    uVar13 = 0xffffffff;
    pcVar27 = &DAT_007a9e40;
    do {
      pcVar28 = pcVar27;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar28 = pcVar27 + 1;
      cVar2 = *pcVar27;
      pcVar27 = pcVar28;
    } while (cVar2 != '\0');
    uVar13 = ~uVar13;
    iVar10 = -1;
    pbVar22 = local_74;
    do {
      pbVar29 = pbVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar29 = pbVar22 + 1;
      bVar3 = *pbVar22;
      pbVar22 = pbVar29;
    } while (bVar3 != 0);
    pbVar26 = (byte *)(pcVar28 + -uVar13);
    pbVar29 = pbVar29 + -1;
    for (uVar15 = uVar13 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pbVar29 = *(undefined4 *)pbVar26;
      pbVar26 = pbVar26 + 4;
      pbVar29 = pbVar29 + 4;
    }
    pbVar22 = local_e8;
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pbVar29 = *pbVar26;
      pbVar26 = pbVar26 + 1;
      pbVar29 = pbVar29 + 1;
    }
    pcVar27 = &DAT_007a9e94;
    break;
  case 0xc:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e38;
    break;
  case 0xd:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e30;
    break;
  case 0xe:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e28;
    break;
  case 0xf:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e20;
    break;
  case 0x10:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e18;
    break;
  case 0x11:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e10;
    break;
  case 0x12:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e08;
    break;
  case 0x13:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9e00;
    break;
  case 0x14:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9df8;
    break;
  case 0x15:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9df4;
    break;
  case 0x16:
    uVar13 = 0xffffffff;
    pcVar27 = &DAT_007a9dec;
    do {
      pcVar28 = pcVar27;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar28 = pcVar27 + 1;
      cVar2 = *pcVar27;
      pcVar27 = pcVar28;
    } while (cVar2 != '\0');
    uVar13 = ~uVar13;
    iVar10 = -1;
    pbVar22 = local_74;
    do {
      pbVar29 = pbVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar29 = pbVar22 + 1;
      bVar3 = *pbVar22;
      pbVar22 = pbVar29;
    } while (bVar3 != 0);
    pbVar26 = (byte *)(pcVar28 + -uVar13);
    pbVar29 = pbVar29 + -1;
    for (uVar15 = uVar13 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pbVar29 = *(undefined4 *)pbVar26;
      pbVar26 = pbVar26 + 4;
      pbVar29 = pbVar29 + 4;
    }
    pbVar22 = local_e8;
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pbVar29 = *pbVar26;
      pbVar26 = pbVar26 + 1;
      pbVar29 = pbVar29 + 1;
    }
    pcVar27 = &DAT_007a9e9c;
    break;
  case 0x17:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9de4;
    break;
  case 0x18:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9ddc;
    break;
  case 0x19:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dd8;
    break;
  case 0x1a:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dd4;
    break;
  case 0x1b:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dd0;
    break;
  case 0x1c:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dcc;
    break;
  case 0x1d:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dc8;
    break;
  case 0x1e:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dc4;
    break;
  case 0x1f:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dc0;
    break;
  case 0x20:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dbc;
    break;
  case 0x21:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9db8;
    break;
  case 0x22:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9db4;
    break;
  case 0x23:
    uVar13 = 0xffffffff;
    pcVar27 = &DAT_007a9db0;
    do {
      pcVar28 = pcVar27;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar28 = pcVar27 + 1;
      cVar2 = *pcVar27;
      pcVar27 = pcVar28;
    } while (cVar2 != '\0');
    uVar13 = ~uVar13;
    iVar10 = -1;
    pbVar22 = local_74;
    do {
      pbVar29 = pbVar22;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pbVar29 = pbVar22 + 1;
      bVar3 = *pbVar22;
      pbVar22 = pbVar29;
    } while (bVar3 != 0);
    pbVar26 = (byte *)(pcVar28 + -uVar13);
    pbVar29 = pbVar29 + -1;
    for (uVar15 = uVar13 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pbVar29 = *(undefined4 *)pbVar26;
      pbVar26 = pbVar26 + 4;
      pbVar29 = pbVar29 + 4;
    }
    pbVar22 = local_e8;
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pbVar29 = *pbVar26;
      pbVar26 = pbVar26 + 1;
      pbVar29 = pbVar29 + 1;
    }
    pcVar27 = &DAT_007a9ea4;
    break;
  case 0x24:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9dac;
    break;
  case 0x25:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9da4;
    break;
  case 0x26:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9d9c;
    break;
  case 0x27:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9d94;
    break;
  case 0x28:
    pbVar22 = local_74;
    pcVar27 = &DAT_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar13 = 0xffffffff;
  do {
    pcVar28 = pcVar27;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar28 = pcVar27 + 1;
    cVar2 = *pcVar27;
    pcVar27 = pcVar28;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  iVar10 = -1;
  do {
    pbVar29 = pbVar22;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pbVar29 = pbVar22 + 1;
    bVar3 = *pbVar22;
    pbVar22 = pbVar29;
  } while (bVar3 != 0);
  pbVar22 = (byte *)(pcVar28 + -uVar13);
  pbVar29 = pbVar29 + -1;
  for (uVar15 = uVar13 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pbVar29 = *(undefined4 *)pbVar22;
    pbVar22 = pbVar22 + 4;
    pbVar29 = pbVar29 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pbVar29 = *pbVar22;
    pbVar22 = pbVar22 + 1;
    pbVar29 = pbVar29 + 1;
  }
switchD_0044fb10_default:
  iVar10 = STT3DSprC::LoadSequence((STT3DSprC *)(local_ec + 0x1d5),0xe,DAT_0080677c,local_74,0x1d);
  if (iVar10 != 0) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2da);
  }
  iVar10 = *(int *)(local_ec + 0x6f7);
  if ((((iVar10 == 0xb) || (iVar10 == 0x16)) || (iVar10 == 0x23)) &&
     (iVar10 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)(local_ec + 0x1d5),0xd,DAT_0080677c,local_e8,0x1d),
     iVar10 != 0)) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2de);
  }
  switch(*(undefined4 *)(local_ec + 0x6f3)) {
  case 0:
    pcVar27 = &DAT_007a9d88;
    break;
  case 1:
    pcVar27 = &DAT_007a4ffc;
    break;
  case 2:
    pcVar27 = &DAT_007aa028;
    break;
  case 3:
    pcVar27 = &DAT_007aa024;
    break;
  case 4:
    pcVar27 = &DAT_007aa020;
    break;
  case 5:
    pcVar27 = &DAT_007aa01c;
    break;
  case 6:
    pcVar27 = &DAT_007aa018;
    break;
  case 7:
    pcVar27 = &DAT_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar13 = 0xffffffff;
  do {
    pcVar28 = pcVar27;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar28 = pcVar27 + 1;
    cVar2 = *pcVar27;
    pcVar27 = pcVar28;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  iVar10 = -1;
  pbVar22 = local_74;
  do {
    pbVar29 = pbVar22;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pbVar29 = pbVar22 + 1;
    bVar3 = *pbVar22;
    pbVar22 = pbVar29;
  } while (bVar3 != 0);
  pbVar22 = (byte *)(pcVar28 + -uVar13);
  pbVar29 = pbVar29 + -1;
  for (uVar15 = uVar13 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pbVar29 = *(undefined4 *)pbVar22;
    pbVar22 = pbVar22 + 4;
    pbVar29 = pbVar29 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pbVar29 = *pbVar22;
    pbVar22 = pbVar22 + 1;
    pbVar29 = pbVar29 + 1;
  }
switchD_0044fe4c_default:
  pSVar1 = (STT3DSprC *)(local_ec + 0x1d5);
  iVar10 = STT3DSprC::LoadSequence(pSVar1,0xc,DAT_0080677c,local_74,0x1d);
  if (iVar10 != 0) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2eb);
  }
  switch(*(undefined4 *)(local_ec + 0x6f7)) {
  case 9:
    local_c = ((8 - (int)*(short *)(local_ec + 0x6c) / 0x2d) * 0xf) % 0x78;
    uVar15 = 0xe;
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    break;
  default:
    local_c = ((0x18 - (int)*(short *)(local_ec + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
              0x18;
    goto LAB_0045003f;
  case 0x15:
    local_c = ((8 - (int)*(short *)(local_ec + 0x6c) / 0x2d) * 0x14) % 0xa0;
    uVar15 = 0x13;
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    break;
  case 0x24:
  case 0x25:
    uVar13 = *(int *)(local_ec + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(local_ec + 0x1c) = uVar13;
    local_c = (uVar13 >> 0x10) % 10;
LAB_0045003f:
    thunk_FUN_004abe40(pSVar1,'\x0e',local_c);
    uVar13 = local_c;
    goto LAB_00450050;
  }
  uVar15 = (uVar13 >> 0x10) % uVar15;
  *(uint *)(local_ec + 0x822) = uVar15;
  thunk_FUN_004abe40(pSVar1,'\x0e',uVar15 + local_c);
  uVar13 = *(int *)(local_ec + 0x822) + local_c;
LAB_00450050:
  thunk_FUN_004abe40(pSVar1,'\f',uVar13);
  if ((*(int *)(local_ec + 0x6f7) != 0x25) && (*(int *)(local_ec + 0x6f7) != 0x24)) {
    thunk_FUN_004ac610(pSVar1,'\x0e');
    thunk_FUN_004ac610(pSVar1,'\f');
  }
  STT3DSprC::StartShow(pSVar1,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
  STT3DSprC::StartShow(pSVar1,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
  iVar10 = *(int *)(local_ec + 0x6f7);
  if (((iVar10 == 0xb) || (iVar10 == 0x16)) || (iVar10 == 0x23)) {
    thunk_FUN_004acd60(pSVar1,'\r',*(uint *)(DAT_00802a38 + 0xe4) & 1);
    STT3DSprC::StartShow(pSVar1,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004abe40(pSVar1,'\r',local_d4);
  }
  local_78 = (uint)*(short *)(local_ec + 0x41);
  thunk_FUN_004ad3c0(pSVar1,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)(local_ec + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)(local_ec + 0x45) * _DAT_007904f8 * _DAT_007904f0);
  uVar13 = local_c;
  if ((*(int *)(local_ec + 0x6f7) != 0x25) && (*(int *)(local_ec + 0x6f7) != 0x24)) {
    uVar13 = (0x18 - (int)*(short *)(local_ec + 0x6c) / 0xf) % 0x18;
  }
  STT3DSprC::SetCurShad(pSVar1,'\x0e',uVar13);
  thunk_FUN_0041f630((int *)local_ec);
  if (DAT_00807326 == '\0') {
    thunk_FUN_004ad5e0((int)pSVar1);
  }
  if (local_1c[3] == 0) {
    local_78 = *(uint *)(param_1 + 0x14);
    if (*(int *)(local_78 + 0x45) == 1) {
      iVar10 = STT3DSprC::LoadSequence(pSVar1,0xb,DAT_00806774,(byte *)s_forcef0_007aa008,0x1d);
      if (iVar10 != 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x31b);
      }
      thunk_FUN_004ad670(pSVar1,'\x0e');
      thunk_FUN_004ad150(pSVar1,'\v');
      thunk_FUN_004ac700(pSVar1,'\v');
      STT3DSprC::StartShow(pSVar1,0xb,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    if (*(int *)(local_78 + 0x45) == 3) {
      thunk_FUN_006377b0(*(uint *)(local_ec + 0x1ed),1,-1,-1,-1,0x12);
    }
  }
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x329);
LAB_00450268:
  *(int *)(local_ec + 0x46b) = 0;
  FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x471),(int *)(local_ec + 0x46b));
  if (*(int *)(local_ec + 0x7ca) != 0) {
    iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x7ca),&local_30);
    if (iVar10 == -4) {
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x335,0,0,&DAT_007a4ccc,
                                  s_STBoatC__GetMessage_MESS_ID_ALLC_007a9fc8);
      if (iVar10 != 0) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return uVar12;
      }
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x336);
    }
    FUN_006ea3e0(*(void **)(local_ec + 0x211),*(uint *)(local_ec + 0x1ed),*(int *)(local_30 + 0x1ed)
                );
  }
  if ((*(int *)(local_ec + 0x45d) == 0xf) && (*(int *)(local_ec + 0x596) == 3)) {
    iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)(local_ec + 0x58e),&local_30);
    if (iVar10 == -4) {
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33c,0,0,&DAT_007a4ccc,
                                  s_STBoatC__GetMessage_MESS_ID_ALLC_007a9f8c);
      if (iVar10 != 0) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return uVar12;
      }
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d);
    }
    FUN_006ea3e0(*(void **)(local_ec + 0x211),*(uint *)(local_ec + 0x1ed),*(int *)(local_30 + 0x1ed)
                );
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  g_currentExceptionFrame = local_184.previous;
  return 0;
}

