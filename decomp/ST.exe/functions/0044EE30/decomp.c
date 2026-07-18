
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044ee30(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined2 extraout_var;
  void *pvVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined2 uVar18;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_03;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *piVar19;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 uVar22;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_EDX_00;
  byte *pbVar20;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  uint extraout_EDX_05;
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
  undefined4 extraout_EDX_20;
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
  uint uVar21;
  undefined2 extraout_var_10;
  undefined4 unaff_ESI;
  int iVar23;
  byte *pbVar24;
  void *unaff_EDI;
  char *pcVar25;
  char *pcVar26;
  byte *pbVar27;
  longlong lVar28;
  undefined8 uVar29;
  short sVar30;
  CHAR local_284;
  undefined4 local_283 [63];
  undefined4 *local_184;
  undefined4 local_180 [16];
  int local_140 [7];
  int local_124 [7];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f4;
  int *local_ec;
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
  undefined1 local_9d;
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
  
  iVar23 = 0;
  local_8 = 0;
  local_d4 = 0;
  local_184 = DAT_00858df8;
  DAT_00858df8 = &local_184;
  iVar9 = __setjmp3(local_180,0,unaff_EDI,unaff_ESI);
  if (iVar9 != 0) {
    DAT_00858df8 = local_184;
    if (iVar9 == -0x5001fff7) {
      return 0;
    }
    local_284 = '\0';
    puVar16 = local_283;
    for (iVar23 = 0x3f; iVar23 != 0; iVar23 = iVar23 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    *(undefined2 *)puVar16 = 0;
    wsprintfA(&local_284,s_STBoatC__GetMessage___Name__d_Pl_007a9eac,local_ec[6],local_ec[9],
              (uint)*(ushort *)((int)local_ec + 0x32),(uint)*(ushort *)(local_ec + 0xc));
    iVar23 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1380,0,iVar9,&DAT_007a4ccc);
    if (iVar23 == 0) {
      FUN_006a5e40(iVar9,0,0x7a9d3c,0x1381);
      return 0xffff;
    }
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return uVar11;
  }
  thunk_FUN_0041e530(param_1);
  uVar12 = *(uint *)(param_1 + 0x10);
  if (0x111 < uVar12) {
    if (uVar12 < 0x129) {
      if (uVar12 != 0x128) {
        if (uVar12 == 0x121) {
          if (*(int *)((int)local_ec + 0x6f7) != 0x23) {
            *(undefined4 *)((int)local_ec + 0x736) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
            if (*(int *)((int)local_ec + 0x45d) == 3) {
              DAT_00858df8 = local_184;
              return 0;
            }
            local_54 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(local_ec,3,&local_54);
            DAT_00858df8 = local_184;
            return 0;
          }
          if (*(int *)((int)local_ec + 0x722) != 0x14) {
            DAT_00858df8 = local_184;
            return 0;
          }
          if (*(int *)((int)local_ec + 0x72e) != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x72e) = 1;
          (**(code **)(*local_ec + 0x90))(3,0x16c);
          DAT_00858df8 = local_184;
          return 0;
        }
        if (uVar12 != 0x122) {
          DAT_00858df8 = local_184;
          return 0;
        }
        piVar15 = *(int **)(param_1 + 0x14);
        if (*piVar15 != local_ec[9]) {
          DAT_00858df8 = local_184;
          return 0;
        }
        *(int *)((int)local_ec + 0x782) = piVar15[1];
        *(int *)((int)local_ec + 0x786) = piVar15[2];
        DAT_00858df8 = local_184;
        return 0;
      }
      piVar15 = *(int **)(param_1 + 0x14);
      local_1c = piVar15;
      if (DAT_008117bc != (int *)0x0) {
        if (piVar15 != (int *)0x0) {
          local_8c = 0x5dd5;
          local_88 = (int *)CONCAT22(*(undefined2 *)((int)local_ec + 0x32),(short)local_ec[9]);
          local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
          (**(code **)*DAT_008117bc)(local_9c);
        }
        if (((DAT_008117bc != (int *)0x0) && (piVar15 != (int *)0x0)) && (*piVar15 != 10000)) {
          local_8c = 0x5dd1;
          local_88 = (int *)CONCAT22(*(undefined2 *)((int)local_ec + 0x32),(short)local_ec[9]);
          local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
          (**(code **)*DAT_008117bc)(local_9c);
        }
      }
      if (*(int *)((int)local_ec + 0x7ca) != 0) {
        iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x7ca),(int *)&local_4c);
        if (iVar9 == -4) {
          iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x12f7,0,0,&DAT_007a4ccc);
          if (iVar9 != 0) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return uVar11;
          }
          FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x12f8);
        }
        piVar15 = local_1c;
        piVar19 = local_140;
        for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar19 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar19 = piVar19 + 1;
        }
        local_8c = 0x128;
        local_88 = local_140;
        (**(code **)*local_4c)(local_9c);
        piVar15 = local_1c;
      }
      if (((*(int *)((int)local_ec + 0x45d) == 0x14) ||
          (uVar12 = thunk_FUN_0045f400(local_ec,0x14), uVar12 != 0)) &&
         (iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x5a2),(int *)&local_10),
         iVar9 != -4)) {
        thunk_FUN_00492510(local_10,local_ec[6]);
      }
      *(undefined4 *)((int)local_ec + 0x455) = 1;
      thunk_FUN_0048d930((int)local_ec);
      thunk_FUN_0048dba0((int)local_ec);
      sVar30 = *(short *)((int)local_ec + 0x66f);
      sVar5 = *(short *)((int)local_ec + 0x673);
      sVar6 = *(short *)((int)local_ec + 0x671);
      if (((sVar30 < 0) || (piVar15 = local_1c, DAT_007fb240 <= sVar30)) ||
         ((sVar6 < 0 || (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))))) {
        pvVar13 = (void *)0x0;
      }
      else {
        pvVar13 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                            (int)sVar30) * 8);
      }
      if (((pvVar13 != (void *)0x0) &&
          (*(int *)((int)pvVar13 + 0x18) == *(int *)((int)local_ec + 0x679))) &&
         ((*(int *)((int)local_ec + 0x675) == 99 && (*(int *)((int)pvVar13 + 0x20) == 1000)))) {
        thunk_FUN_004b7d50(pvVar13,(int)local_ec);
      }
      thunk_FUN_004952e0((int)local_ec);
      uVar11 = thunk_FUN_00446520(CONCAT31((int3)((uint)extraout_ECX_04 >> 8),(char)local_ec[9]),
                                  *(short *)((int)local_ec + 0x32),1);
      thunk_FUN_00446520(CONCAT31((int3)((uint)uVar11 >> 8),(char)local_ec[9]),
                         *(short *)((int)local_ec + 0x32),0);
      thunk_FUN_00492420(local_ec);
      thunk_FUN_004924a0(local_ec);
      thunk_FUN_00492fc0((int)local_ec);
      thunk_FUN_00493bc0((int)local_ec);
      sVar30 = *(short *)((int)local_ec + 0x6a9);
      sVar5 = *(short *)((int)local_ec + 0x6ad);
      sVar6 = *(short *)((int)local_ec + 0x6ab);
      if (((sVar30 < 0) || (piVar15 = local_1c, DAT_007fb240 <= sVar30)) ||
         ((sVar6 < 0 || (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))))) {
        local_24 = (void *)0x0;
      }
      else {
        local_24 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                             (int)sVar30) * 8);
      }
      if (((local_24 == (void *)0x0) ||
          (*(int *)((int)local_24 + 0x18) != *(int *)((int)local_ec + 0x6af))) ||
         (iVar9 = thunk_FUN_004b9d90((int)local_24), iVar9 == 0)) {
        FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x6af),(int *)&local_24);
      }
      if (((local_24 != (void *)0x0) && (*(int *)((int)local_24 + 0x20) == 1000)) &&
         (thunk_FUN_004b9d20(local_24,(int)local_ec), *(int *)((int)local_24 + 0x4b0) == local_ec[6]
         )) {
        *(undefined4 *)((int)local_24 + 0x4b0) = 0;
      }
      if (((*(int *)((int)local_ec + 0x45d) == 0x13) && (local_ec[0x149] != 0)) &&
         (iVar9 = FUN_006e62d0(DAT_00802a38,local_ec[0x149],(int *)&local_24), iVar9 != -4)) {
        thunk_FUN_004cf3e0(local_24,local_ec[6]);
      }
      FUN_006e6780(*(void **)((int)local_ec + 0x211),
                   CONCAT22(CONCAT11(2,(char)((uint)local_ec[6] >> 0x10)),(short)local_ec[6]));
      *(int *)((int)local_ec + 0x826) = piVar15[2];
      iVar9 = (**(code **)(*local_ec + 0x2c))();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX_05 >> 8),(char)local_ec[9]),iVar9);
      if (local_ec[9] == (uint)*(byte *)(local_ec[4] + 0x112d)) {
        thunk_FUN_004d8b70((char)local_ec[9]);
      }
      if (piVar15[6] != 2) {
        thunk_FUN_004ac410(0xf);
        thunk_FUN_004ac410(0);
        thunk_FUN_004ac410(1);
        thunk_FUN_004ac410(0xe);
        thunk_FUN_004ac410(0xd);
        thunk_FUN_004ac410(0xc);
        thunk_FUN_004ac410(8);
        uVar11 = thunk_FUN_004ac410(0xb);
        piVar19 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar11 >> 8),(char)local_ec[9]),
                                            CONCAT22(extraout_var_10,(short)local_ec[0xc]));
        piVar15 = local_1c;
        if (piVar19 != (int *)0x0) {
          (**(code **)(*piVar19 + 8))(0x6a,(int)local_ec + 0x32);
          piVar15 = local_1c;
        }
      }
      if (*(int **)((int)local_ec + 0x465) != (int *)0x0) {
        thunk_FUN_00635fd0(*(int **)((int)local_ec + 0x465));
        FUN_0072e2b0(*(undefined4 **)((int)local_ec + 0x465));
        *(undefined4 *)((int)local_ec + 0x465) = 0;
      }
      if (((piVar15[1] == 0xa8) || (piVar15[6] == 0)) || (piVar15[6] == 4)) {
        uVar17 = 0xffffffff;
        uVar11 = thunk_FUN_004ad650((int)local_ec + 0x1d5);
        thunk_FUN_0062b770((int)*(short *)((int)local_ec + 0x41),
                           (int)*(short *)((int)local_ec + 0x43),
                           (int)*(short *)((int)local_ec + 0x45),
                           *(undefined4 *)((int)local_ec + 0x6f7),(int)local_ec,
                           (int)(short)local_ec[0x1b],uVar11,uVar17);
      }
      if (piVar15[6] == 3) {
        thunk_FUN_006377b0(*(uint *)((int)local_ec + 0x1ed),0,(int)*(short *)((int)local_ec + 0x41),
                           (int)*(short *)((int)local_ec + 0x43),
                           (int)*(short *)((int)local_ec + 0x45),0x12);
      }
      if (piVar15[6] == 2) {
        local_ec[0xb0] = 1;
        DAT_00858df8 = local_184;
        return 0;
      }
      goto LAB_0045ad7b;
    }
    if (uVar12 != 0x129) {
      if (uVar12 != 0x4405) {
        DAT_00858df8 = local_184;
        return 0;
      }
      thunk_FUN_0041c3f0(local_ec,*(undefined **)((int)local_ec + 0x70a));
      DAT_00858df8 = local_184;
      return 0;
    }
    if (*(int *)((int)local_ec + 0x45d) != 0x14) {
      DAT_00858df8 = local_184;
      return 0;
    }
    if (local_ec[0x170] != 3) {
      DAT_00858df8 = local_184;
      return 0;
    }
    if (*(int *)((int)local_ec + 0x7c2) == 0) {
      DAT_00858df8 = local_184;
      return 0;
    }
    if ((*(int *)((int)local_ec + 0x5a6) == 0) &&
       (iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x5a2),
                             (int *)((int)local_ec + 0x5a6)), iVar9 == -4)) {
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1372);
    }
    local_9d = *(undefined1 *)((int)local_ec + 99);
    uVar3 = *(undefined1 *)((int)local_ec + 0x61);
    uVar4 = *(undefined1 *)((int)local_ec + 0x62);
    piVar15 = (int *)(*(int *)((int)local_ec + 0x5a6) + 0x34);
    piVar19 = local_ec + 0xd;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar19 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar19 = piVar19 + 1;
    }
    *(short *)piVar19 = (short)*piVar15;
    *(undefined1 *)((int)piVar19 + 2) = *(undefined1 *)((int)piVar15 + 2);
    *(undefined4 *)((int)local_ec + 0x76) = 0;
    *(undefined2 *)((int)local_ec + 0x6e) = 0x2f;
    *(undefined1 *)((int)local_ec + 0x61) = uVar3;
    *(undefined1 *)((int)local_ec + 0x62) = uVar4;
    *(undefined1 *)((int)local_ec + 99) = local_9d;
    iVar9 = (**(code **)(*local_ec + 0xd8))();
    if (iVar9 == 0) {
      DAT_00858df8 = local_184;
      return 0;
    }
    uVar11 = 0x1377;
    goto LAB_0045aee3;
  }
  if (uVar12 == 0x111) goto LAB_00450268;
  if (3 < uVar12) {
    if (uVar12 == 0x10f) {
      local_44 = (byte *)thunk_FUN_004ad790(&local_38);
      local_3c = (byte *)thunk_FUN_004210e0((int *)&local_2c);
      local_40 = (byte *)thunk_FUN_0048fac0((int *)&local_34);
      local_7c = (void *)(local_2c + local_34 + local_38);
      local_20 = (byte *)FUN_006aac70((int)local_7c);
      pbVar20 = local_40;
      pbVar27 = local_20;
      for (uVar12 = local_34 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar27 = *(undefined4 *)pbVar20;
        pbVar20 = pbVar20 + 4;
        pbVar27 = pbVar27 + 4;
      }
      for (uVar12 = local_34 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pbVar27 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        pbVar27 = pbVar27 + 1;
      }
      pbVar20 = local_3c;
      pbVar27 = local_20 + local_34;
      for (uVar12 = local_2c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar27 = *(undefined4 *)pbVar20;
        pbVar20 = pbVar20 + 4;
        pbVar27 = pbVar27 + 4;
      }
      for (uVar12 = local_2c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pbVar27 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        pbVar27 = pbVar27 + 1;
      }
      *(uint *)(local_20 + 0x5fe) = local_34;
      *(uint *)(local_20 + 0x602) = local_2c;
      pbVar20 = local_44;
      pbVar27 = local_20 + local_34 + local_2c;
      for (uVar12 = local_38 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar27 = *(undefined4 *)pbVar20;
        pbVar20 = pbVar20 + 4;
        pbVar27 = pbVar27 + 4;
      }
      for (uVar12 = local_38 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pbVar27 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        pbVar27 = pbVar27 + 1;
      }
      *(uint *)(local_20 + 0x5f6) = local_34 + local_2c;
      *(uint *)(local_20 + 0x5fa) = local_38;
      thunk_FUN_0054d430(DAT_00802a38,local_ec[6],local_20,(uint)local_7c);
      FUN_006ab060(&local_44);
      FUN_006ab060(&local_3c);
      FUN_006ab060(&local_40);
      FUN_006ab060(&local_20);
      DAT_00858df8 = local_184;
      return 0;
    }
    if (uVar12 != 0x110) {
      DAT_00858df8 = local_184;
      return 0;
    }
    piVar15 = *(int **)(param_1 + 0x14);
    local_c = 0;
    local_7c = (void *)*piVar15;
    if (*(int *)((int)local_ec + 0x742) == 1) {
      DAT_00858df8 = local_184;
      return 0;
    }
    if ((*(int *)((int)local_ec + 0x45d) == 8) && (*(int *)((int)local_ec + 0x6e7) != 2)) {
      *(undefined4 *)((int)local_ec + 0x6e7) = 1;
    }
    iVar9 = *(int *)((int)local_ec + 0x786);
    if ((0 < iVar9) && (iVar9 < 0x65)) {
      *piVar15 = *piVar15 - (iVar9 * *piVar15) / 100;
    }
    iVar9 = piVar15[1];
    local_1c = piVar15;
    if (iVar9 == 0x65) goto LAB_00459f59;
    if (iVar9 != 0x42) {
      switch(iVar9) {
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
        local_c = thunk_FUN_004e60d0(local_ec[9],0x67);
        iVar9 = 0;
        if (local_c == 1) {
          iVar9 = *piVar15;
          iVar23 = (iVar9 * 9) / 10 + (iVar9 * 9 >> 0x1f);
LAB_00459e30:
          iVar9 = iVar9 - (iVar23 - (iVar23 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            iVar9 = *piVar15;
            iVar23 = (iVar9 * 0x11) / 0x14 + (iVar9 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            iVar9 = *piVar15;
            iVar23 = (iVar9 * 4) / 5 + (iVar9 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        *piVar15 = *piVar15 - iVar9;
      }
      uVar12 = thunk_FUN_004406c0((char)local_ec[9]);
      uVar12 = uVar12 & 0xff;
      if (uVar12 == 1) {
        iVar9 = local_ec[9];
        iVar23 = 4;
LAB_00459e71:
        local_c = thunk_FUN_004e60d0(iVar9,iVar23);
      }
      else {
        if (uVar12 == 2) {
          iVar9 = local_ec[9];
          iVar23 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar12 == 3) {
          iVar9 = local_ec[9];
          iVar23 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar9 = 0;
      if (local_c == 1) {
        iVar9 = *piVar15;
        iVar23 = iVar9 * 8;
LAB_00459eaa:
        iVar9 = iVar9 - iVar23 / 10;
      }
      else {
        if (local_c == 2) {
          iVar9 = *piVar15;
          iVar23 = iVar9 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          iVar9 = *piVar15;
          iVar23 = iVar9 * 4;
          goto LAB_00459eaa;
        }
      }
      *piVar15 = *piVar15 - iVar9;
      if (piVar15[1] == 0x9a) {
        iVar9 = piVar15[2];
        *(int *)((int)local_ec + 0x772) = iVar9;
        if ((*(int *)((int)local_ec + 0x776) < 2) &&
           (iVar9 = thunk_FUN_004e60d0(iVar9,0x93), 0 < iVar9)) {
          *(undefined4 *)((int)local_ec + 0x776) = 2;
        }
        if (*(int *)((int)local_ec + 0x76e) < 0) {
          *(undefined4 *)((int)local_ec + 0x76e) = 0;
        }
        iVar9 = (**(code **)(*local_ec + 0xc))();
        if (iVar9 == 3) {
          (**(code **)(*local_ec + 200))(0);
        }
      }
      if ((piVar15[1] == 0xad) || (piVar15[1] == 0xa1)) {
        if (*(int *)((int)local_ec + 0x6f7) == 9) {
          DAT_00858df8 = local_184;
          return 0;
        }
        if (*(int *)((int)local_ec + 0x6f7) == 0x15) {
          DAT_00858df8 = local_184;
          return 0;
        }
        thunk_FUN_00495010(local_ec,piVar15[4]);
      }
      goto LAB_00459f59;
    }
    if (*(int *)((int)local_ec + 0x6f7) == 9) {
      DAT_00858df8 = local_184;
      return 0;
    }
    if (*(int *)((int)local_ec + 0x6f7) == 0x15) {
      DAT_00858df8 = local_184;
      return 0;
    }
    uVar12 = thunk_FUN_004406c0((char)local_ec[9]);
    uVar12 = uVar12 & 0xff;
    if (uVar12 == 1) {
      iVar9 = local_ec[9];
      iVar23 = 0x2d;
LAB_00459d8b:
      local_c = thunk_FUN_004e60d0(iVar9,iVar23);
    }
    else {
      if (uVar12 == 2) {
        iVar9 = local_ec[9];
        iVar23 = 0x2d;
        goto LAB_00459d8b;
      }
      if (uVar12 == 3) {
        iVar9 = local_ec[9];
        iVar23 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar9 = 0;
    if (local_c == 1) {
      iVar9 = *piVar15 - (*piVar15 * 9) / 10;
    }
    *piVar15 = *piVar15 - iVar9;
LAB_00459f59:
    if (200 < (int)local_7c - *piVar15) {
      *piVar15 = (int)local_7c + -200;
    }
    if (*(int *)((int)local_ec + 0x716) < 1) {
      DAT_00858df8 = local_184;
      return 0;
    }
    *(int *)((int)local_ec + 0x716) = *(int *)((int)local_ec + 0x716) - *piVar15;
    pvVar13 = DAT_00811798;
    if ((((DAT_00811798 != (void *)0x0) && (piVar15[2] != 0xff)) &&
        (pvVar13 = (void *)thunk_FUN_0041c710((int)local_ec), pvVar13 != (void *)0x0)) &&
       (piVar15[5] == 0)) {
      pvVar13 = (void *)thunk_FUN_0061f8b0(DAT_00811798,(int)*(short *)((int)local_ec + 0x5b),
                                           (int)*(short *)((int)local_ec + 0x5d),local_ec[9]);
    }
    if ((DAT_008117bc != (int *)0x0) && (piVar15 != (int *)0x0)) {
      local_8c = 0x5dd5;
      local_88 = (int *)CONCAT22(*(undefined2 *)((int)local_ec + 0x32),(short)local_ec[9]);
      local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
      pvVar13 = (void *)(**(code **)*DAT_008117bc)(local_9c);
    }
    if (*(int *)((int)local_ec + 0x716) < 1) {
      if (((DAT_008117bc != (int *)0x0) && (piVar15 != (int *)0x0)) && (*piVar15 != 10000)) {
        local_8c = 0x5dd1;
        local_88 = (int *)CONCAT22(*(undefined2 *)((int)local_ec + 0x32),(short)local_ec[9]);
        local_84 = CONCAT22((short)piVar15[3],(short)piVar15[2]);
        (**(code **)*DAT_008117bc)(local_9c);
      }
      local_ec[0xb0] = 1;
      switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
      case 1:
        uVar11 = 0xcb;
        break;
      case 2:
        uVar11 = 0xd1;
        break;
      case 3:
        uVar11 = 0xd7;
        break;
      case 4:
        uVar11 = 0xdd;
        break;
      case 5:
        uVar11 = 0xe3;
        break;
      case 6:
        uVar11 = 0xea;
        break;
      case 7:
        uVar11 = 0xf1;
        break;
      case 8:
        uVar11 = 0xf8;
        break;
      case 9:
        uVar11 = 0x100;
        break;
      case 10:
        uVar11 = 0x105;
        break;
      case 0xb:
        uVar11 = 0x10b;
        break;
      case 0xc:
        uVar11 = 0x111;
        break;
      case 0xd:
        uVar11 = 0x12f;
        break;
      case 0xe:
        uVar11 = 0x135;
        break;
      case 0xf:
        uVar11 = 0x13b;
        break;
      case 0x10:
        uVar11 = 0x141;
        break;
      case 0x11:
        uVar11 = 0x147;
        break;
      case 0x12:
        uVar11 = 0x14e;
        break;
      case 0x13:
        uVar11 = 0x155;
        break;
      case 0x14:
        uVar11 = 0x15c;
        break;
      case 0x15:
        uVar11 = 0x164;
        break;
      case 0x16:
        uVar11 = 0x169;
        break;
      case 0x17:
        uVar11 = 0x171;
        break;
      case 0x18:
        uVar11 = 0x177;
        break;
      case 0x19:
        uVar11 = 0x193;
        break;
      case 0x1a:
        uVar11 = 0x19b;
        break;
      case 0x1b:
        uVar11 = 0x1a3;
        break;
      case 0x1c:
        uVar11 = 0x1a9;
        break;
      case 0x1d:
        uVar11 = 0x1af;
        break;
      case 0x1e:
        uVar11 = 0x1b6;
        break;
      case 0x1f:
        uVar11 = 0x1bc;
        break;
      case 0x20:
        uVar11 = 0x1c2;
        break;
      case 0x21:
        uVar11 = 0x1c8;
        break;
      case 0x22:
        uVar11 = 0x1cf;
        break;
      case 0x23:
        uVar11 = 0x1d6;
        break;
      case 0x24:
        uVar11 = 0x1dc;
        break;
      case 0x25:
        uVar11 = 0x17d;
        break;
      case 0x26:
        uVar11 = 0x117;
        break;
      case 0x27:
        uVar11 = 0x183;
        break;
      case 0x28:
        uVar11 = 0x1e2;
        break;
      default:
        uVar11 = 0;
      }
      (**(code **)(*local_ec + 0x90))(2,uVar11);
      thunk_FUN_0048d930((int)local_ec);
      thunk_FUN_0048dba0((int)local_ec);
      sVar30 = *(short *)((int)local_ec + 0x671);
      sVar5 = *(short *)((int)local_ec + 0x673);
      local_7c = (void *)CONCAT22(local_7c._2_2_,sVar30);
      sVar6 = *(short *)((int)local_ec + 0x66f);
      if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar30 < 0)) ||
          ((DAT_007fb242 <= sVar30 || (sVar5 < 0)))) || (DAT_007fb244 <= sVar5)) {
        pvVar13 = (void *)0x0;
      }
      else {
        pvVar13 = *(void **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar30 +
                            (int)sVar6) * 8);
        piVar15 = local_1c;
      }
      if (((pvVar13 != (void *)0x0) &&
          (*(int *)((int)pvVar13 + 0x18) == *(int *)((int)local_ec + 0x679))) &&
         ((*(int *)((int)local_ec + 0x675) == 99 && (*(int *)((int)pvVar13 + 0x20) == 1000)))) {
        thunk_FUN_004b7d50(pvVar13,(int)local_ec);
      }
      thunk_FUN_004952e0((int)local_ec);
      uVar11 = thunk_FUN_00446520(CONCAT31((int3)((uint)extraout_ECX_03 >> 8),(char)local_ec[9]),
                                  *(short *)((int)local_ec + 0x32),1);
      thunk_FUN_00446520(CONCAT31((int3)((uint)uVar11 >> 8),(char)local_ec[9]),
                         *(short *)((int)local_ec + 0x32),0);
      thunk_FUN_00492420(local_ec);
      if (*(int *)((int)local_ec + 0x7ca) != 0) {
        iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x7ca),(int *)&local_58);
        if (iVar9 == -4) {
          iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1296,0,0,&DAT_007a4ccc);
          if (iVar9 != 0) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return uVar11;
          }
          FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1297);
        }
        piVar15 = local_1c;
        piVar19 = local_124;
        for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar19 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar19 = piVar19 + 1;
        }
        local_124[0] = 0x1716b;
        local_8c = 0x110;
        local_88 = local_124;
        (**(code **)*local_58)(local_9c);
        piVar15 = local_1c;
      }
      thunk_FUN_004924a0(local_ec);
      thunk_FUN_00492fc0((int)local_ec);
      thunk_FUN_00493bc0((int)local_ec);
      sVar30 = *(short *)((int)local_ec + 0x6a9);
      local_7c = (void *)CONCAT22(extraout_var_00,sVar30);
      sVar5 = *(short *)((int)local_ec + 0x6ad);
      sVar6 = *(short *)((int)local_ec + 0x6ab);
      if ((((sVar30 < 0) || (DAT_007fb240 <= sVar30)) || (sVar6 < 0)) ||
         (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))) {
        local_28 = (void *)0x0;
      }
      else {
        local_28 = *(void **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                             (int)sVar30) * 8);
      }
      if (((local_28 == (void *)0x0) ||
          (*(int *)((int)local_28 + 0x18) != *(int *)((int)local_ec + 0x6af))) ||
         (iVar9 = thunk_FUN_004b9d90((int)local_28), iVar9 == 0)) {
        FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x6af),(int *)&local_28);
      }
      if (((local_28 != (void *)0x0) && (*(int *)((int)local_28 + 0x20) == 1000)) &&
         (thunk_FUN_004b9d20(local_28,(int)local_ec), *(int *)((int)local_28 + 0x4b0) == local_ec[6]
         )) {
        *(undefined4 *)((int)local_28 + 0x4b0) = 0;
      }
      if (((*(int *)((int)local_ec + 0x45d) == 0x13) && (local_ec[0x149] != 0)) &&
         (iVar9 = FUN_006e62d0(DAT_00802a38,local_ec[0x149],(int *)&local_28), iVar9 != -4)) {
        thunk_FUN_004cf3e0(local_28,local_ec[6]);
      }
      FUN_006e6780(*(void **)((int)local_ec + 0x211),
                   CONCAT22(CONCAT11(2,(char)((uint)local_ec[6] >> 0x10)),(short)local_ec[6]));
      *(int *)((int)local_ec + 0x826) = piVar15[2];
      DAT_00858df8 = local_184;
      return 0;
    }
    piVar19 = DAT_008117bc;
    if ((*(int *)((int)local_ec + 0x45d) == 4) && (local_ec[0x160] == 5)) {
      sVar30 = (short)local_ec[0x155];
      local_7c = (void *)CONCAT22((short)((uint)pvVar13 >> 0x10),sVar30);
      sVar5 = (short)local_ec[0x156];
      sVar6 = *(short *)((int)local_ec + 0x556);
      if ((sVar30 < 0) ||
         ((((DAT_007fb240 <= sVar30 || (sVar6 < 0)) || (DAT_007fb242 <= sVar6)) ||
          ((sVar5 < 0 || (DAT_007fb244 <= sVar5)))))) {
        piVar19 = (int *)0x0;
        pvVar13 = local_7c;
      }
      else {
        pvVar13 = (void *)((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar6 +
                          (int)sVar30);
        piVar19 = *(int **)(DAT_007fb248 + (int)pvVar13 * 8);
      }
      local_10 = piVar19;
      if ((piVar19 != (int *)0x0) &&
         (pvVar13 = (void *)piVar19[6], pvVar13 == *(void **)((int)local_ec + 0x55a))) {
        thunk_FUN_004e2200(piVar19,local_ec[0x15a],local_ec[6],
                           *(undefined4 *)((int)local_ec + 0x716));
        DAT_00858df8 = local_184;
        return 0;
      }
    }
    if (piVar15[2] == 0xff) {
      DAT_00858df8 = local_184;
      return 0;
    }
    local_10 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)piVar19 >> 8),(char)piVar15[2]),
                                         CONCAT22((short)((uint)pvVar13 >> 0x10),(short)piVar15[3]),
                                         1);
    if (local_10 == (int *)0x0) {
      DAT_00858df8 = local_184;
      return 0;
    }
    if (*(int *)((int)local_ec + 0x45d) != 3) {
      DAT_00858df8 = local_184;
      return 0;
    }
    thunk_FUN_004162f0(local_10,&local_16,&local_14,&local_12);
    uVar12 = (int)*(short *)((int)local_ec + 0x47) - (int)local_16;
    uVar21 = (int)uVar12 >> 0x1f;
    if (6 < (int)((uVar12 ^ uVar21) - uVar21)) {
      DAT_00858df8 = local_184;
      return 0;
    }
    uVar12 = (int)*(short *)((int)local_ec + 0x49) - (int)local_14;
    uVar21 = (int)uVar12 >> 0x1f;
    if (6 < (int)((uVar12 ^ uVar21) - uVar21)) {
      DAT_00858df8 = local_184;
      return 0;
    }
    uVar12 = (int)*(short *)((int)local_ec + 0x4b) - (int)local_12;
    uVar21 = (int)uVar12 >> 0x1f;
    if (2 < (int)((uVar12 ^ uVar21) - uVar21)) {
      DAT_00858df8 = local_184;
      return 0;
    }
    thunk_FUN_0048cc80((char)piVar15[2],(short)piVar15[3],*piVar15);
    DAT_00858df8 = local_184;
    return 0;
  }
  if (uVar12 == 3) {
    thunk_FUN_0041c5a0(local_ec);
    thunk_FUN_0041d590((int)local_ec);
    uVar11 = thunk_FUN_004167a0((int)local_ec);
    pvVar13 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar11 >> 8),(char)local_ec[9]),
                                         CONCAT22(extraout_var_08,(short)local_ec[0xc]));
    if (pvVar13 != (void *)0x0) {
      thunk_FUN_0040cdb0(pvVar13,(uint)*(ushort *)((int)local_ec + 0x32));
    }
    uVar11 = thunk_FUN_004ad310((int)local_ec + 0x1d5);
    uVar11 = thunk_FUN_00495ff0(*(short *)((int)local_ec + 0x5b),*(short *)((int)local_ec + 0x5d),
                                *(short *)((int)local_ec + 0x5f),
                                CONCAT31((int3)((uint)uVar11 >> 8),
                                         *(undefined1 *)((int)local_ec + 0x8e)),(int)local_ec);
    thunk_FUN_0042f2b0(CONCAT31((int3)((uint)*(int *)((int)local_ec + 0x826) >> 8),(char)local_ec[9]
                               ),CONCAT22((short)((uint)uVar11 >> 0x10),(short)local_ec[0xc]),
                       CONCAT22(extraout_var_09,*(undefined2 *)((int)local_ec + 0x32)),local_ec,
                       *(int *)((int)local_ec + 0x826));
    thunk_FUN_00489950((int)local_ec);
    if (*(byte **)((int)local_ec + 0x47b) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_ec + 0x47b));
      *(undefined4 *)((int)local_ec + 0x47b) = 0;
    }
    if (*(int **)((int)local_ec + 0x465) != (int *)0x0) {
      thunk_FUN_00635fd0(*(int **)((int)local_ec + 0x465));
      FUN_0072e2b0(*(undefined4 **)((int)local_ec + 0x465));
      *(undefined4 *)((int)local_ec + 0x465) = 0;
    }
    lVar28 = FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a9d3c,0x37a);
LAB_0045048a:
    if (((*(char *)((int)local_ec + 0x4d) == '\x01') && (*(char *)((int)local_ec + 0x5a) == '\x01'))
       && (uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 0x32,
          lVar28 = CONCAT44(uVar12,*(uint *)((int)DAT_00802a38 + 0xe4) / 0x32), uVar12 == 7)) {
      iVar23 = (int)*(short *)((int)local_ec + 0x41) % 0xc9;
      local_78 = (int)*(short *)((int)local_ec + 0x43) % 0xc9;
      iVar9 = (int)*(short *)((int)local_ec + 0x45) / 200;
      iVar10 = (int)*(short *)((int)local_ec + 0x45) % 200;
      lVar28 = CONCAT44(iVar10,iVar9);
      if ((((0x46 < iVar23) && (lVar28 = CONCAT44(iVar10,iVar9), iVar23 < 0x82)) &&
          ((lVar28 = CONCAT44(iVar10,local_78), 0x46 < (int)local_78 &&
           ((lVar28 = CONCAT44(iVar10,local_78), (int)local_78 < 0x82 &&
            (lVar28 = CONCAT44(iVar10,local_78), 0x47 < iVar10)))))) &&
         (lVar28 = CONCAT44(iVar10,local_78), iVar10 < 0x81)) {
        *(undefined1 *)((int)local_ec + 0x5a) = 0;
        *(undefined1 *)((int)local_ec + 0x4d) = 0;
        lVar28 = CONCAT44(iVar10,local_78);
      }
    }
    if (((*(int *)((int)local_ec + 0x7ee) == 1) &&
        (lVar28 = (**(code **)(*local_ec + 0x7c))(), (int)lVar28 < 0x1a)) ||
       (((*(int *)((int)local_ec + 0x7ee) == 2 &&
         (lVar28 = (**(code **)(*local_ec + 0x7c))(), (int)lVar28 < 0x33)) ||
        ((*(int *)((int)local_ec + 0x7ee) == 3 &&
         (lVar28 = (**(code **)(*local_ec + 0x7c))(), (int)lVar28 < 0x4c)))))) {
      iVar23 = thunk_FUN_004e8030(*(int *)((int)local_ec + 0x6f7));
      iVar9 = *(int *)((int)local_ec + 0x45d);
      lVar28 = CONCAT44(extraout_EDX_01,iVar9);
      if (iVar23 == 3) {
        if (iVar9 != 0x16) {
          uVar12 = thunk_FUN_0045f400(local_ec,0x16);
          lVar28 = CONCAT44(extraout_EDX_03,uVar12);
          if ((uVar12 == 0) &&
             (uVar12 = (char)local_ec[9] * 0xa62, lVar28 = (ulonglong)uVar12 << 0x20,
             *(short *)(&DAT_007f4f7f + uVar12) != 0)) {
            puVar14 = FUN_006ae290((uint *)0x0,1,2,1);
            FUN_006ae1c0(puVar14,(undefined4 *)((int)local_ec + 0x32));
            thunk_FUN_0042b7d0(CONCAT31((int3)((uint)extraout_EDX_04 >> 8),(char)local_ec[9]),0xfffe
                               ,(int)puVar14,(undefined2 *)&local_60);
            FUN_006ae110((byte *)puVar14);
            piVar15 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                         (char)local_ec[9]),local_60);
            puVar16 = local_b4;
            local_b4[0] = 1;
            iVar9 = *piVar15;
            uVar11 = 0x11;
            goto LAB_00450695;
          }
        }
      }
      else {
        lVar28 = CONCAT44(extraout_EDX_01,iVar9);
        if (iVar9 != 4) {
          uVar12 = thunk_FUN_0045f400(local_ec,4);
          lVar28 = CONCAT44(extraout_EDX_02,uVar12);
          if ((uVar12 == 0) &&
             (lVar28 = CONCAT44(extraout_EDX_02,uVar12),
             *(short *)(&DAT_007f4f7b + (char)local_ec[9] * 0xa62) != 0)) {
            puVar14 = FUN_006ae290((uint *)0x0,1,2,1);
            FUN_006ae1c0(puVar14,(undefined4 *)((int)local_ec + 0x32));
            thunk_FUN_0042b7d0(CONCAT31((int3)((uint)extraout_ECX_01 >> 8),(char)local_ec[9]),0xfffe
                               ,(int)puVar14,(undefined2 *)&local_50);
            uVar11 = FUN_006ae110((byte *)puVar14);
            piVar15 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar11 >> 8),(char)local_ec[9]
                                                        ),local_50);
            puVar16 = &local_a8;
            local_a8 = 1;
            local_a4 = 0;
            iVar9 = *piVar15;
            uVar11 = 4;
LAB_00450695:
            lVar28 = (**(code **)(iVar9 + 8))(uVar11,puVar16);
          }
        }
      }
    }
    local_1c = (int *)thunk_FUN_0042b760(CONCAT31((int3)((ulonglong)lVar28 >> 8),(char)local_ec[9]),
                                         CONCAT22((short)((ulonglong)lVar28 >> 0x30),
                                                  (short)local_ec[0xc]));
    uVar12 = *(int *)((int)local_ec + 0x7aa) + 1;
    *(uint *)((int)local_ec + 0x7aa) = uVar12;
    switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
    case 1:
    case 10:
    case 0x1e:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x28:
      if (*(int *)((int)local_ec + 0x7a2) < 1) {
        uVar12 = *(uint *)((int)local_ec + 0x79e);
        *(uint *)((int)local_ec + 0x7a2) = uVar12;
      }
      break;
    default:
      if (*(int *)((int)local_ec + 0x7a2) < 1) {
        iVar9 = thunk_FUN_004de410((void *)local_ec[9],*(int *)((int)local_ec + 0x79a),
                                   *(int *)((int)local_ec + 0x79e));
        *(int *)((int)local_ec + 0x7a2) = iVar9;
        uVar12 = extraout_EDX_06;
      }
      break;
    case 0xf:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x27:
      iVar9 = *(int *)((int)local_ec + 0x7ae) % *(int *)((int)local_ec + 0x7b2) +
              *(int *)((int)local_ec + 0x7b2) * *(int *)((int)local_ec + 0x7a2);
      *(int *)((int)local_ec + 0x7ae) = iVar9;
      if (iVar9 < *(int *)((int)local_ec + 0x79e) * *(int *)((int)local_ec + 0x7b2)) {
        *(int *)((int)local_ec + 0x7ae) = iVar9 + 1;
        iVar9 = (iVar9 + 1) / *(int *)((int)local_ec + 0x7b2);
        *(int *)((int)local_ec + 0x7a2) = iVar9;
        if ((*(int *)((int)local_ec + 0x6f7) != 10) && (iVar9 == 0)) {
          iVar9 = thunk_FUN_004dfb90(local_ec[9],*(int *)((int)local_ec + 0x79e),
                                     *(int *)(&DAT_00793ff0 + *(int *)((int)local_ec + 0x79a) * 4));
          iVar23 = *(int *)((int)local_ec + 0x7ae) + iVar9 * *(int *)((int)local_ec + 0x7b2);
          *(int *)((int)local_ec + 0x7ae) = iVar23;
          iVar9 = *(int *)((int)local_ec + 0x79e) * *(int *)((int)local_ec + 0x7b2);
          if (iVar9 < iVar23) {
            *(int *)((int)local_ec + 0x7ae) = iVar9;
          }
          *(int *)((int)local_ec + 0x7a2) =
               *(int *)((int)local_ec + 0x7ae) / *(int *)((int)local_ec + 0x7b2);
        }
      }
      iVar9 = thunk_FUN_004e60d0(local_ec[9],0x3a);
      uVar12 = extraout_EDX_05;
      if (0 < iVar9) {
        *(int *)((int)local_ec + 0x7aa) = *(int *)((int)local_ec + 0x7aa) + 1;
      }
    }
    if (((*(int *)((int)local_ec + 0x6f7) != 0xb) && (*(int *)((int)local_ec + 0x7b6) != 0)) &&
       (*(int *)((int)local_ec + 0x7be) == 0)) {
      iVar9 = thunk_FUN_004de410((void *)local_ec[9],*(int *)((int)local_ec + 0x7b6),
                                 *(int *)((int)local_ec + 0x7ba));
      *(int *)((int)local_ec + 0x7be) = iVar9;
      uVar12 = extraout_EDX_07;
    }
    iVar9 = *(int *)((int)local_ec + 0x6f7);
    if ((((iVar9 == 0x24) || (iVar9 == 0x1b)) || (iVar9 == 0x1d)) &&
       ((*(int *)((int)local_ec + 0x71e) < 0x14 &&
        (uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 0x3c, uVar12 == 0)))) {
      *(int *)((int)local_ec + 0x71e) = *(int *)((int)local_ec + 0x71e) + 1;
    }
    if (((*(int *)((int)local_ec + 0x6f7) == 0x17) && (*(int *)((int)local_ec + 0x72a) < 0x28)) &&
       (uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 0xf, uVar12 == 0)) {
      *(int *)((int)local_ec + 0x72a) = *(int *)((int)local_ec + 0x72a) + 1;
    }
    if (*(int *)((int)local_ec + 0x6f7) == 0x23) {
      if (*(int *)((int)local_ec + 0x72e) == 1) {
        uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 0x28;
        if ((uVar12 == 0) &&
           (iVar9 = *(int *)((int)local_ec + 0x722) + -1, *(int *)((int)local_ec + 0x722) = iVar9,
           iVar9 == 0)) {
          *(undefined4 *)((int)local_ec + 0x72e) = 0;
          (**(code **)(*local_ec + 0x90))(3,0x16d);
          uVar12 = extraout_EDX_08;
        }
      }
      else if ((*(int *)((int)local_ec + 0x722) < 0x14) &&
              (uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 0xf0, uVar12 == 0)) {
        *(int *)((int)local_ec + 0x722) = *(int *)((int)local_ec + 0x722) + 1;
      }
    }
    iVar9 = *(int *)((int)local_ec + 0x6f7);
    if ((iVar9 == 0x16) || (iVar9 == 0x25)) {
      if (*(int *)((int)local_ec + 0x732) == 1) {
        if ((((iVar9 == 0x16) && (*(uint *)((int)DAT_00802a38 + 0xe4) % 0x1e == 0)) ||
            ((iVar9 == 0x25 && (*(uint *)((int)DAT_00802a38 + 0xe4) % 0x5a == 0)))) &&
           (iVar9 = *(int *)((int)local_ec + 0x726) + -1, *(int *)((int)local_ec + 0x726) = iVar9,
           iVar9 == 0)) {
          *(undefined4 *)((int)local_ec + 0x732) = 0;
          (**(code **)(*local_ec + 0x90))(3,0x16d);
        }
        thunk_FUN_004945c0(local_ec);
        uVar12 = extraout_EDX_09;
      }
      else if ((iVar9 == 0x16) &&
              (iVar9 = thunk_FUN_004e60d0(local_ec[9],0x92), uVar12 = extraout_EDX_10, 0 < iVar9)) {
        iVar9 = *(int *)((int)local_ec + 0x726);
        if (iVar9 < 0x28) {
          uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 0x2d;
joined_r0x00450a10:
          if (uVar12 == 0) {
            *(int *)((int)local_ec + 0x726) = iVar9 + 1;
          }
        }
      }
      else {
        iVar9 = *(int *)((int)local_ec + 0x726);
        if (iVar9 < 0x28) {
          uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 0x5a;
          goto joined_r0x00450a10;
        }
      }
    }
    iVar9 = *(int *)((int)local_ec + 0x736) + -1;
    *(int *)((int)local_ec + 0x736) = iVar9;
    if (iVar9 < 0) {
      *(undefined4 *)((int)local_ec + 0x736) = 0;
    }
    if (*(int *)((int)local_ec + 0x716) == *(int *)((int)local_ec + 0x712)) {
      *(undefined4 *)((int)local_ec + 0x76e) = 0xffffffff;
    }
    if ((-1 < *(int *)((int)local_ec + 0x76e)) &&
       ((*(int *)((int)local_ec + 0x45d) != 0x14 || (local_ec[0x170] != 3)))) {
      uVar12 = *(int *)((int)local_ec + 0x76e) % 0x7d;
      if (uVar12 == 0) {
        pvVar13 = (void *)((int)local_ec + 0x1d5);
        iVar9 = thunk_FUN_004ab880(0xb,DAT_00806774,(byte *)s_forcef0_007aa008,0x1d);
        if (iVar9 != 0) {
          FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x41b);
        }
        thunk_FUN_004ad670(pvVar13,'\x0e');
        thunk_FUN_004ad150(pvVar13,'\v');
        thunk_FUN_004ac700(pvVar13,'\v');
        thunk_FUN_004ac1a0(0xb,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
        local_104 = 0x65;
        local_88 = &local_108;
        local_108 = *(int *)((int)local_ec + 0x776) * 5;
        local_100 = *(undefined4 *)((int)local_ec + 0x772);
        local_f4 = 1;
        local_8c = 0x110;
        (**(code **)*local_ec)(local_9c);
        uVar12 = extraout_EDX_11;
      }
      *(int *)((int)local_ec + 0x76e) = *(int *)((int)local_ec + 0x76e) + 1;
    }
    if ((0 < *(int *)((int)local_ec + 0x782)) &&
       (iVar9 = *(int *)((int)local_ec + 0x782) + -1, *(int *)((int)local_ec + 0x782) = iVar9,
       iVar9 == 0)) {
      *(undefined4 *)((int)local_ec + 0x786) = 0;
    }
    if (0 < *(int *)((int)local_ec + 0x73a)) {
      if (*(void **)((int)local_ec + 0x465) == (void *)0x0) {
        puVar16 = thunk_FUN_00631fd0();
        *(undefined4 **)((int)local_ec + 0x465) = puVar16;
        uVar12 = extraout_EDX_13;
        if (puVar16 != (undefined4 *)0x0) {
          thunk_FUN_006324c0(puVar16,0,*(undefined4 *)((int)local_ec + 0x6f7));
          uVar12 = extraout_EDX_14;
        }
      }
      else {
        thunk_FUN_00636060(*(void **)((int)local_ec + 0x465),(int)*(short *)((int)local_ec + 0x41),
                           (int)*(short *)((int)local_ec + 0x43),
                           (int)*(short *)((int)local_ec + 0x45),(int)(short)local_ec[0x1b],100);
        uVar12 = extraout_EDX_12;
      }
      if (*(int *)((int)local_ec + 0x45d) == 3) {
        *(int *)((int)local_ec + 0x73a) = *(int *)((int)local_ec + 0x73a) + -1;
      }
      if (*(int *)((int)local_ec + 0x45d) == 0x14) {
        if (local_ec[0x170] == 3) {
          if ((*(int *)((int)local_ec + 0x5a6) == 0) &&
             (iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x5a2),
                                   (int *)((int)local_ec + 0x5a6)), iVar9 == -4)) {
            FUN_006a5e40(-4,DAT_007ed77c,0x7a9d3c,0x43c);
          }
          uVar12 = *(uint *)(*(int *)((int)local_ec + 0x5a6) + 0x24);
          if (uVar12 != local_ec[9]) goto LAB_00450c1e;
        }
        *(int *)((int)local_ec + 0x73a) = *(int *)((int)local_ec + 0x73a) + -1;
      }
LAB_00450c1e:
      if (*(int *)((int)local_ec + 0x73a) == 0) {
        if (*(int **)((int)local_ec + 0x465) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)((int)local_ec + 0x465));
          FUN_0072e2b0(*(undefined4 **)((int)local_ec + 0x465));
          *(undefined4 *)((int)local_ec + 0x465) = 0;
          uVar12 = extraout_EDX_15;
        }
        if (*(int *)((int)local_ec + 0x45d) != 3) {
          local_5c = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
          thunk_FUN_0045ef00(local_ec,3,&local_5c);
          uVar12 = extraout_EDX_16;
        }
      }
    }
    if (((*(int *)((int)local_ec + 0x70e) == 0) &&
        (uVar12 = *(uint *)((int)DAT_00802a38 + 0xe4) % 3, uVar12 == 0)) &&
       (iVar9 = thunk_FUN_004e60d0(local_ec[9],10), uVar12 = extraout_EDX_17, 0 < iVar9)) {
      thunk_FUN_0041c6e0(local_ec,*(undefined **)((int)local_ec + 0x70a));
      *(undefined4 *)((int)local_ec + 0x70e) = 1;
      uVar12 = extraout_EDX_18;
    }
    if (local_ec[0xb0] == 1) {
      local_ec[0xb0] = 0;
      if (*(int *)((int)local_ec + 0x6f7) == 9) {
        iVar9 = thunk_FUN_004accd0((void *)((int)local_ec + 0x1d5),'\b');
        if ((iVar9 == 0) &&
           (iVar9 = thunk_FUN_004ab880(8,DAT_00806774,(byte *)s_expdstrw_007a9f80,0x1d), iVar9 != 0)
           ) {
          uVar11 = 0x45d;
LAB_00450e28:
          FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar11);
        }
      }
      else if (*(int *)((int)local_ec + 0x6f7) == 0x15) {
        iVar9 = thunk_FUN_004ab880(8,DAT_00806774,(byte *)s_expdstrw_007a9f80,0x1d);
        if (iVar9 != 0) {
          uVar11 = 0x462;
          goto LAB_00450e28;
        }
      }
      else {
        uVar12 = thunk_FUN_00492ab0((int)local_ec);
        *(uint *)((int)local_ec + 0x82a) = uVar12;
        if (6 < (int)uVar12) {
          *(undefined4 *)((int)local_ec + 0x82a) = 0;
        }
        pvVar13 = (void *)((int)local_ec + 0x1d5);
        thunk_FUN_004ab880(8,DAT_00806774,
                           (byte *)(s_expl_bt0_007a8ee0 + *(int *)((int)local_ec + 0x82a) * 0x45),
                           0x1d);
        thunk_FUN_004ab880(9,DAT_00806764,
                           (byte *)(s_expl_bbt0_007a8eef + *(int *)((int)local_ec + 0x82a) * 0x45),
                           0x1d);
        thunk_FUN_004ab880(10,DAT_00806774,
                           (byte *)(s_expmask3_007a8efe + *(int *)((int)local_ec + 0x82a) * 0x45),
                           0x1d);
        thunk_FUN_004ac700(pvVar13,'\n');
        thunk_FUN_004ac1a0(10,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
        thunk_FUN_004acf20(pvVar13,DAT_008032b8,0x10);
        thunk_FUN_004acfe0(pvVar13,'\n');
      }
      thunk_FUN_004ac1a0(8,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
      *(undefined4 *)((int)local_ec + 0x455) = 1;
      iVar9 = (**(code **)(*local_ec + 0x2c))();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar9 >> 8),(char)local_ec[9]),iVar9);
      uVar12 = (uint)*(byte *)(local_ec[4] + 0x112d);
      if (local_ec[9] == uVar12) {
        thunk_FUN_004d8b70((char)local_ec[9]);
        uVar12 = extraout_EDX_19;
      }
    }
    uVar29 = CONCAT44(uVar12,local_8);
    if (*(int *)((int)local_ec + 0x455) == 1) {
      (**(code **)(*local_ec + 0xd8))();
      pvVar13 = (void *)((int)local_ec + 0x1d5);
      local_c = thunk_FUN_004ac910(pvVar13,'\b');
      if (local_c == 2) {
        thunk_FUN_004ac410(0xf);
        thunk_FUN_004ac410(0);
        thunk_FUN_004ac410(1);
        thunk_FUN_004ac410(2);
      }
      if (local_c == *(uint *)(&DAT_007a8f11 + *(int *)((int)local_ec + 0x82a) * 0x45)) {
        thunk_FUN_004ac410(0xe);
        thunk_FUN_004ac410(0xd);
        thunk_FUN_004ac410(0xc);
        thunk_FUN_004ac410(0xb);
        if (*(int *)((int)local_ec + 0x6f7) == 0x21) {
          uVar12 = local_c;
          uVar17 = thunk_FUN_004ad650((int)pvVar13);
          uVar11 = *(undefined4 *)((int)local_ec + 0x6f7);
          sVar7 = (short)local_ec[0x1b];
          sVar6 = *(short *)((int)local_ec + 0x45);
          sVar5 = *(short *)((int)local_ec + 0x43);
          sVar30 = *(short *)((int)local_ec + 0x41);
        }
        else {
          uVar12 = 0xffffffff;
          uVar17 = thunk_FUN_004ad650((int)pvVar13);
          sVar7 = (short)local_ec[0x1b];
          sVar6 = *(short *)((int)local_ec + 0x45);
          uVar11 = *(undefined4 *)((int)local_ec + 0x6f7);
          sVar5 = *(short *)((int)local_ec + 0x43);
          sVar30 = *(short *)((int)local_ec + 0x41);
        }
        thunk_FUN_0062b770((int)sVar30,(int)sVar5,(int)sVar6,uVar11,(int)local_ec,(int)sVar7,uVar17,
                           uVar12);
        if (*(int **)((int)local_ec + 0x465) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)((int)local_ec + 0x465));
          FUN_0072e2b0(*(undefined4 **)((int)local_ec + 0x465));
          *(undefined4 *)((int)local_ec + 0x465) = 0;
        }
      }
      if ((*(int *)((int)local_ec + 0x6f7) == 0x21) && (local_c == 0x18)) {
        thunk_FUN_00637350((int)*(short *)((int)local_ec + 0x41),
                           (int)*(short *)((int)local_ec + 0x43),
                           (int)*(short *)((int)local_ec + 0x45),3,local_ec[9],(short)local_ec[6],
                           *(undefined2 *)((int)local_ec + 0x32),0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + *(int *)((int)local_ec + 0x82a) * 0x45)) {
        thunk_FUN_004ad5e0((int)pvVar13);
      }
      if (((local_c == *(uint *)(&DAT_007a8f19 + *(int *)((int)local_ec + 0x82a) * 0x45)) &&
          (*(int *)((int)local_ec + 0x6f7) != 9)) && (*(int *)((int)local_ec + 0x6f7) != 0x15)) {
        thunk_FUN_004ac1a0(9,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
      }
      if (((*(int *)(&DAT_007a8f19 + *(int *)((int)local_ec + 0x82a) * 0x45) < (int)local_c) &&
          (*(int *)((int)local_ec + 0x6f7) != 9)) &&
         ((*(int *)((int)local_ec + 0x6f7) != 0x15 &&
          (iVar9 = thunk_FUN_004ac910(pvVar13,'\b'),
          iVar9 == *(int *)(&DAT_007a8f0d + *(int *)((int)local_ec + 0x82a) * 0x45) + -1)))) {
        thunk_FUN_004ac410(8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + *(int *)((int)local_ec + 0x82a) * 0x45)) &&
         (local_1c != (int *)0x0)) {
        (**(code **)(*local_1c + 8))(0x6a,(int)local_ec + 0x32);
      }
      if ((*(int *)((int)local_ec + 0x6f7) == 9) || (*(int *)((int)local_ec + 0x6f7) == 0x15)) {
        if (local_c != 0x27) {
          DAT_00858df8 = local_184;
          return 0;
        }
        local_8c = 10;
        local_90 = 0;
        local_94 = *(undefined4 *)((int)DAT_00802a38 + 0x14);
        local_88 = (int *)local_ec[2];
        FUN_006e5810(local_9c);
        DAT_00858df8 = local_184;
        return 0;
      }
      iVar9 = thunk_FUN_004ac910(pvVar13,'\t');
      if (iVar9 != 0x14) {
        DAT_00858df8 = local_184;
        return 0;
      }
LAB_0045ad7b:
      local_8c = 10;
      local_90 = 0;
      local_94 = *(undefined4 *)((int)DAT_00802a38 + 0x14);
      local_88 = (int *)local_ec[2];
      FUN_006e5810(local_9c);
      DAT_00858df8 = local_184;
      return 0;
    }
    if (*(int *)((int)local_ec + 0x459) != 0) {
      switch(*(int *)((int)local_ec + 0x459)) {
      case 0x65:
        iVar9 = thunk_FUN_00460360(local_ec);
        uVar29 = CONCAT44(extraout_EDX_20,iVar9);
        break;
      case 0x66:
        iVar9 = thunk_FUN_004653b0(local_ec,uVar12,2);
        uVar29 = CONCAT44(extraout_EDX_22,iVar9);
        break;
      case 0x67:
        iVar9 = thunk_FUN_004620f0(local_ec);
        uVar29 = CONCAT44(extraout_EDX_21,iVar9);
        break;
      case 0x68:
        iVar9 = thunk_FUN_004714d0(local_ec,uVar12,2);
        uVar29 = CONCAT44(extraout_EDX_27,iVar9);
        break;
      case 0x69:
        uVar29 = thunk_FUN_004732d0(local_ec);
        break;
      case 0x6a:
        iVar9 = thunk_FUN_00465be0(local_ec);
        uVar29 = CONCAT44(extraout_EDX_23,iVar9);
        break;
      case 0x6b:
        uVar29 = thunk_FUN_004769f0(local_ec);
        break;
      case 0x6c:
        uVar29 = thunk_FUN_004803b0(local_ec);
        break;
      case 0x6d:
        iVar9 = thunk_FUN_00478030(local_ec,2);
        uVar29 = CONCAT44(extraout_EDX_31,iVar9);
        break;
      case 0x6e:
        uVar29 = thunk_FUN_00476cc0(local_ec);
        break;
      case 0x6f:
        iVar9 = thunk_FUN_0047da50(local_ec);
        uVar29 = CONCAT44(extraout_EDX_34,iVar9);
        break;
      case 0x70:
        iVar9 = thunk_FUN_0046aa50(local_ec,2);
        uVar29 = CONCAT44(extraout_EDX_24,iVar9);
        break;
      case 0x71:
        iVar9 = thunk_FUN_0046efd0(local_ec,2);
        uVar29 = CONCAT44(extraout_EDX_26,iVar9);
        break;
      case 0x72:
        iVar9 = thunk_FUN_004805b0(local_ec,(int *)0x2);
        uVar29 = CONCAT44(extraout_EDX_36,iVar9);
        break;
      case 0x73:
        iVar9 = thunk_FUN_00474810(local_ec,(int *)0x2);
        uVar29 = CONCAT44(extraout_EDX_28,iVar9);
        break;
      case 0x74:
        iVar9 = thunk_FUN_00476120(local_ec);
        uVar29 = CONCAT44(extraout_EDX_30,iVar9);
        break;
      case 0x75:
        iVar9 = thunk_FUN_0046c980(local_ec,uVar12,2);
        uVar29 = CONCAT44(extraout_EDX_25,iVar9);
        break;
      case 0x76:
        iVar9 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x2);
        uVar29 = CONCAT44(extraout_EDX_35,iVar9);
        break;
      case 0x77:
        uVar29 = thunk_FUN_0046d400(local_ec,uVar12);
        break;
      case 0x78:
        iVar9 = thunk_FUN_00475530(local_ec);
        uVar29 = CONCAT44(extraout_EDX_29,iVar9);
        break;
      case 0x79:
        iVar9 = thunk_FUN_0047bf70(local_ec);
        uVar29 = CONCAT44(extraout_EDX_32,iVar9);
        break;
      case 0x7a:
        uVar29 = thunk_FUN_004795e0(local_ec);
        break;
      case 0x7b:
        iVar9 = thunk_FUN_0047cf20(local_ec);
        uVar29 = CONCAT44(extraout_EDX_33,iVar9);
        break;
      default:
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x4cb);
        uVar29 = CONCAT44(extraout_EDX_37,local_8);
      }
      local_8 = (uint)uVar29;
      uVar12 = local_8;
      if (local_8 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x4cd);
        uVar29 = CONCAT44(extraout_EDX_38,local_8);
      }
      if (uVar12 == 0) {
        *(undefined4 *)((int)local_ec + 0x459) = 0;
      }
      if (*(int *)((int)local_ec + 0x459) != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
    }
    uVar12 = (uint)((ulonglong)uVar29 >> 0x20);
    local_8 = (uint)uVar29;
    if (local_ec[0xb1] == 1) {
      uVar12 = 0;
      if (0 < *(int *)((int)local_ec + 0x73a)) {
        local_c = (uint)(local_ec[0xb5] == 1);
        local_78 = (uint)(local_ec[0xc5] == 1);
        local_7c = (void *)(uint)(local_ec[0xbd] == 1);
        piVar15 = local_ec + 0xb3;
        for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar15 = 0;
          piVar15 = piVar15 + 1;
        }
        local_ec[0xb1] = 0;
        if (local_c == 1) {
          local_ec[0xb5] = 1;
        }
        if (local_78 == 1) {
          local_ec[0xc5] = 1;
        }
        if (local_7c == (void *)0x1) {
          local_ec[0xbd] = 1;
        }
        if (((local_c == 1) || (local_78 == 1)) || (local_7c == (void *)0x1)) {
          local_ec[0xb1] = 1;
        }
      }
      if (local_ec[0xc5] == 1) {
        piVar15 = local_ec + 0xb3;
        for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar15 = 0;
          piVar15 = piVar15 + 1;
        }
        local_ec[0xc5] = 1;
        uVar12 = local_ec[0xf1];
      }
      if ((*(int *)((int)local_ec + 0x45d) == 0x14) && (local_ec[0x170] == 3)) {
        piVar15 = local_ec + 0xb3;
        for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar15 = 0;
          piVar15 = piVar15 + 1;
        }
        local_ec[0xb1] = 0;
        DAT_00858df8 = local_184;
        return 0;
      }
      if ((local_ec[0xb3] == 1) && (uVar12 < (uint)local_ec[0xca])) {
        uVar12 = local_ec[0xca];
      }
      if ((local_ec[0xb4] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x332))) {
        uVar12 = *(uint *)((int)local_ec + 0x332);
      }
      if ((local_ec[0xb5] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x343))) {
        uVar12 = *(uint *)((int)local_ec + 0x343);
      }
      if ((local_ec[0xb8] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x347))) {
        uVar12 = *(uint *)((int)local_ec + 0x347);
      }
      if ((local_ec[0xbe] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x34f))) {
        uVar12 = *(uint *)((int)local_ec + 0x34f);
      }
      if ((local_ec[0xc3] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x36f))) {
        uVar12 = *(uint *)((int)local_ec + 0x36f);
      }
      if ((local_ec[0xbf] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x392))) {
        uVar12 = *(uint *)((int)local_ec + 0x392);
      }
      if ((local_ec[0xb6] == 1) && (uVar12 < (uint)local_ec[0xe7])) {
        uVar12 = local_ec[0xe7];
      }
      if ((local_ec[0xb7] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x3a6))) {
        uVar12 = *(uint *)((int)local_ec + 0x3a6);
      }
      if ((local_ec[0xc1] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x3b6))) {
        uVar12 = *(uint *)((int)local_ec + 0x3b6);
      }
      if ((local_ec[0xc5] == 1) && (uVar12 < (uint)local_ec[0xf1])) {
        uVar12 = local_ec[0xf1];
      }
      if ((local_ec[0xc2] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x3ca))) {
        uVar12 = *(uint *)((int)local_ec + 0x3ca);
      }
      if ((local_ec[0xb9] == 1) && (uVar12 < (uint)local_ec[0xf5])) {
        uVar12 = local_ec[0xf5];
      }
      if ((local_ec[0xbc] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x3de))) {
        uVar12 = *(uint *)((int)local_ec + 0x3de);
      }
      if ((local_ec[0xbb] == 1) && (uVar12 < (uint)local_ec[0xfa])) {
        uVar12 = local_ec[0xfa];
      }
      if ((local_ec[199] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x3f3))) {
        uVar12 = *(uint *)((int)local_ec + 0x3f3);
      }
      if ((local_ec[0xc6] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x401))) {
        uVar12 = *(uint *)((int)local_ec + 0x401);
      }
      if ((local_ec[200] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x415))) {
        uVar12 = *(uint *)((int)local_ec + 0x415);
      }
      if ((local_ec[0xbd] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x41f))) {
        uVar12 = *(uint *)((int)local_ec + 0x41f);
      }
      if ((local_ec[0xc4] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x429))) {
        uVar12 = *(uint *)((int)local_ec + 0x429);
      }
      if ((local_ec[0xba] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x437))) {
        uVar12 = *(uint *)((int)local_ec + 0x437);
      }
      if ((local_ec[0xc0] == 1) && (uVar12 < *(uint *)((int)local_ec + 0x447))) {
        uVar12 = *(uint *)((int)local_ec + 0x447);
      }
      if ((local_ec[0xb3] == 1) && ((uint)local_ec[0xca] < uVar12)) {
        local_ec[0xb3] = 0;
      }
      if ((local_ec[0xb4] == 1) && (*(uint *)((int)local_ec + 0x332) < uVar12)) {
        local_ec[0xb4] = 0;
      }
      if ((local_ec[0xb5] == 1) && (*(uint *)((int)local_ec + 0x343) < uVar12)) {
        local_ec[0xb5] = 0;
      }
      if ((local_ec[0xb8] == 1) && (*(uint *)((int)local_ec + 0x347) < uVar12)) {
        local_ec[0xb8] = 0;
      }
      if ((local_ec[0xbe] == 1) && (*(uint *)((int)local_ec + 0x34f) < uVar12)) {
        local_ec[0xbe] = 0;
      }
      if ((local_ec[0xc3] == 1) && (*(uint *)((int)local_ec + 0x36f) < uVar12)) {
        local_ec[0xc3] = 0;
      }
      if ((local_ec[0xbf] == 1) && (*(uint *)((int)local_ec + 0x392) < uVar12)) {
        local_ec[0xbf] = 0;
      }
      if ((local_ec[0xb6] == 1) && ((uint)local_ec[0xe7] < uVar12)) {
        local_ec[0xb6] = 0;
      }
      if ((local_ec[0xb7] == 1) && (*(uint *)((int)local_ec + 0x3a6) < uVar12)) {
        local_ec[0xb7] = 0;
      }
      if ((local_ec[0xc1] == 1) && (*(uint *)((int)local_ec + 0x3b6) < uVar12)) {
        local_ec[0xc1] = 0;
      }
      if ((local_ec[0xc5] == 1) && ((uint)local_ec[0xf1] < uVar12)) {
        local_ec[0xc5] = 0;
      }
      if ((local_ec[0xc2] == 1) && (*(uint *)((int)local_ec + 0x3ca) < uVar12)) {
        local_ec[0xc2] = 0;
      }
      if ((local_ec[0xb9] == 1) && ((uint)local_ec[0xf5] < uVar12)) {
        local_ec[0xb9] = 0;
      }
      if ((local_ec[0xbc] == 1) && (*(uint *)((int)local_ec + 0x3de) < uVar12)) {
        local_ec[0xbc] = 0;
      }
      if ((local_ec[0xbb] == 1) && ((uint)local_ec[0xfa] < uVar12)) {
        local_ec[0xbb] = 0;
      }
      if ((local_ec[199] == 1) && (*(uint *)((int)local_ec + 0x3f3) < uVar12)) {
        local_ec[199] = 0;
      }
      if ((local_ec[0xc6] == 1) && (*(uint *)((int)local_ec + 0x401) < uVar12)) {
        local_ec[0xc6] = 0;
      }
      if ((local_ec[200] == 1) && (*(uint *)((int)local_ec + 0x415) < uVar12)) {
        local_ec[200] = 0;
      }
      if ((local_ec[0xbd] == 1) && (*(uint *)((int)local_ec + 0x41f) < uVar12)) {
        local_ec[0xbd] = 0;
      }
      if ((local_ec[0xc4] == 1) && (*(uint *)((int)local_ec + 0x429) < uVar12)) {
        local_ec[0xc4] = 0;
      }
      if ((local_ec[0xba] == 1) && (*(uint *)((int)local_ec + 0x437) < uVar12)) {
        local_ec[0xba] = 0;
      }
      if ((local_ec[0xc0] == 1) && (*(uint *)((int)local_ec + 0x447) < uVar12)) {
        local_ec[0xc0] = 0;
      }
      if (local_ec[0xb4] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 2;
          iVar9 = thunk_FUN_00462180(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x532);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x536;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x53e;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x549;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x544;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x567;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x56c;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x54e;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x580;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5a8;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x58a;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x585;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x59e;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x553;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x562;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5ad;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x571;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x57b;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x558;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5a3;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x55d;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x576;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x594;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x58f;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x599;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xbe] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0xc;
          iVar9 = thunk_FUN_00465c60(local_ec,uVar12,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x5b9;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5c0;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5cb;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5c6;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5e9;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5ee;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5d0;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x602;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x62a;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x60c;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x607;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x620;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5d5;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5e4;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x62f;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5f3;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5fd;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5da;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x625;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5df;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x5f8;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x616;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x611;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x61b;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xb3] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 1;
          iVar9 = thunk_FUN_004602e0(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x63b);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x63f;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x647;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x652;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x64d;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x670;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x675;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x657;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x689;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6b1;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x693;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x68e;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6a7;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x65c;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x66b;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6b6;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x67a;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x684;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x661;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6ac;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x666;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x67f;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x69d;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x698;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6a2;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xb8] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 6;
          iVar9 = thunk_FUN_004658d0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x6c2;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6c9;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6d4;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6cf;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6f2;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6f7;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6d9;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x70b;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x733;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x715;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x710;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x729;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6de;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6ed;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x738;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6fc;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x706;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6e3;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x72e;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x6e8;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x701;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x71f;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x71a;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x724;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xc3] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0x11;
          iVar9 = thunk_FUN_0046b100(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x744);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x748;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x750;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x75b;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x756;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x779;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x77e;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x760;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x792;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7ba;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x79c;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x797;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7b0;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x765;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x774;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7bf;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x783;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x78d;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x76a;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7b5;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x76f;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x788;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7a6;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7a1;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7ab;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xbf] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0xd;
          iVar9 = thunk_FUN_0046d450(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x7cb;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7d2;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7dc;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7d7;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7fa;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7ff;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7e1;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x813;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x83b;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x81d;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x818;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x831;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7e6;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7f5;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x840;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x804;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x80e;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7eb;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x836;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x7f0;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x809;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x827;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x822;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x82c;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xb6] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 4;
          iVar9 = thunk_FUN_0046f5c0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x84c;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x853;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x85d;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x858;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x87b;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x880;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x862;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x894;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8bc;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x89e;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x899;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8b2;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x867;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x876;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8c1;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x885;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x88f;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x86c;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8b7;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x871;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x88a;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8a8;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8a3;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8ad;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xb7] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 5;
          iVar9 = thunk_FUN_00471ac0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x8cd;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8d4;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8de;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8d9;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8fc;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x901;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8e3;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x915;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x93d;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x91f;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x91a;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x933;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8e8;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8f7;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x942;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x906;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x910;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8ed;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x938;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x8f2;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x90b;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x929;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x924;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x92e;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xc1] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0xf;
          iVar9 = thunk_FUN_004732f0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x94e;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x955;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x95f;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x95a;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x97d;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x982;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x964;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x996;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9be;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9a0;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x99b;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9b4;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x969;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x978;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9c3;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x987;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x991;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x96e;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9b9;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x973;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x98c;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9aa;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9a5;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9af;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xc5] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0x14;
          iVar9 = thunk_FUN_004749c0(local_ec,(void *)0x0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x9cf;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9d6;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9e0;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9db;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9fe;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa03;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9e5;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa17;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa3f;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa21;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa1c;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa35;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9ea;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9f9;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa44;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa08;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa12;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9ef;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa3a;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x9f4;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa0d;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa2b;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa26;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa30;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xc2] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0x10;
          iVar9 = thunk_FUN_004758e0(local_ec,(undefined4 *)0x0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xa50;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa57;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa61;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa5c;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa7f;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa84;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa66;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa98;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xac0;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xaa2;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa9d;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xab6;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa6b;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa7a;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xac5;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa89;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa93;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa70;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xabb;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa75;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xa8e;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xaac;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xaa7;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xab1;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xb9] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 7;
          iVar9 = thunk_FUN_004761b0(local_ec,uVar12,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xad1);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xad5;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xadd;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xae8;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xae3;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb06;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb0b;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xaed;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb1f;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb47;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb29;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb24;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb3d;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xaf2;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb01;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb4c;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb10;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb1a;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xaf7;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb42;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xafc;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb15;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb33;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb2e;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb38;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xbc] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 10;
          iVar9 = thunk_FUN_00476a10(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xb58);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xb5c;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb64;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb6f;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb6a;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb8d;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb92;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb74;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xba6;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbce;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbb0;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbab;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbc4;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb79;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb88;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbd3;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb97;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xba1;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb7e;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbc9;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb83;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xb9c;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbba;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbb5;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbbf;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xbb] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 9;
          iVar9 = thunk_FUN_00476ce0(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xbdf);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xbe3;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbeb;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbf6;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbf1;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc14;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc19;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xbfb;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc2d;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc55;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc37;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc32;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc4b;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc00;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc0f;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc5a;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc1e;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc28;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc05;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc50;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc0a;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc23;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc41;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc3c;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc46;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[199] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0x16;
          iVar9 = thunk_FUN_00478640(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xc66);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xc6a;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc72;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc7d;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc78;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc9b;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xca0;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc82;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcb4;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcdc;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcbe;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcb9;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcd2;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc87;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc96;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xce1;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xca5;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcaf;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc8c;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcd7;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xc91;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcaa;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcc8;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcc3;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xccd;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xc6] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0x15;
          iVar9 = thunk_FUN_00479600(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xced);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xcf1;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcf9;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd04;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xcff;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd22;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd27;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd09;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd3b;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd63;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd45;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd40;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd59;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd0e;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd1d;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd68;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd2c;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd36;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd13;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd5e;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd18;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd31;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd4f;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd4a;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd54;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[200] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0x17;
          iVar9 = thunk_FUN_0047c050(local_ec,(int *)0x0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xd74);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xd78;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd80;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd8b;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd86;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xda9;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdae;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd90;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdc2;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdea;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdcc;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdc7;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xde0;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd95;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xda4;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdef;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdb3;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdbd;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd9a;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xde5;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xd9f;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdb8;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdd6;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xdd1;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xddb;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xbd] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0xb;
          iVar9 = thunk_FUN_0047d080(local_ec,(undefined4 *)0x0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xdfb);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xdff;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe07;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe12;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe0d;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe30;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe35;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe17;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe49;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe71;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe53;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe4e;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe67;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe1c;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe2b;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe76;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe3a;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe44;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe21;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe6c;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe26;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe3f;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe5d;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe58;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe62;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xc4] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0x12;
          iVar9 = thunk_FUN_0047df00(local_ec,uVar12,(int *)0x0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xe82);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xe86;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe8e;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe99;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe94;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xeb7;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xebc;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xe9e;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xed0;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xef8;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xeda;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xed5;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xeee;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xea3;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xeb2;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xefd;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xec1;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xecb;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xea8;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xef3;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xead;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xec6;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xee4;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xedf;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xee9;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xba] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 8;
          iVar9 = thunk_FUN_0047fe10(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xf09);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xf0d;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf15;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf20;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf1b;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf3e;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf43;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf25;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf57;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf7f;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf61;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf5c;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf75;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf2a;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf39;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf84;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf48;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf52;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf2f;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf7a;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf34;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf4d;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf6b;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf66;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf70;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else if (local_ec[0xc0] == 1) {
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 0xe;
          iVar9 = thunk_FUN_004803d0(local_ec,0);
          local_8 = iVar9;
          if (iVar9 == -1) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0xf90);
          }
          if (iVar9 != 0) {
            DAT_00858df8 = local_184;
            return 0;
          }
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0xf94;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xf9c;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfa7;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfa2;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfc5;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfca;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfac;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfde;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1006;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfe8;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfe3;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xffc;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfb1;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfc0;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x100b;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfcf;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfd9;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfb6;
          local_8 = uVar12;
          break;
        case 0x12:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x76;
          uVar12 = thunk_FUN_0047fad0(local_ec,uVar12,(void *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1001;
          local_8 = uVar12;
          break;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfbb;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfd4;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xff2;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xfed;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0xff7;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        }
      }
      else {
        if (local_ec[0xb5] != 1) goto LAB_0045910d;
        if (*(int *)((int)local_ec + 0x45d) == 0) {
          *(undefined4 *)((int)local_ec + 0x45d) = 3;
          iVar9 = thunk_FUN_004608b0(local_ec,0);
          if (iVar9 != -1) {
            DAT_00858df8 = local_184;
            return 0;
          }
          uVar11 = 0x1017;
          local_8 = 0xffffffff;
          goto LAB_0045aee3;
        }
        switch(*(int *)((int)local_ec + 0x45d)) {
        case 1:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x65;
          uVar12 = thunk_FUN_00460360(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x101e;
          local_8 = uVar12;
          break;
        case 2:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x66;
          uVar12 = thunk_FUN_004653b0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1028;
          local_8 = uVar12;
          break;
        case 3:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x67;
          uVar12 = thunk_FUN_004620f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1023;
          local_8 = uVar12;
          break;
        case 4:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x68;
          uVar12 = thunk_FUN_004714d0(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1046;
          local_8 = uVar12;
          break;
        case 5:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x69;
          uVar12 = thunk_FUN_004732d0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x104b;
          local_8 = uVar12;
          break;
        case 6:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6a;
          uVar12 = thunk_FUN_00465be0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x102d;
          local_8 = uVar12;
          break;
        case 7:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6b;
          uVar12 = thunk_FUN_004769f0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x105f;
          local_8 = uVar12;
          break;
        case 8:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6c;
          uVar12 = thunk_FUN_004803b0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1082;
          local_8 = uVar12;
          break;
        case 9:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6d;
          uVar12 = thunk_FUN_00478030(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1069;
          local_8 = uVar12;
          break;
        case 10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6e;
          uVar12 = thunk_FUN_00476cc0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1064;
          local_8 = uVar12;
          break;
        case 0xb:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x6f;
          uVar12 = thunk_FUN_0047da50(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x107d;
          local_8 = uVar12;
          break;
        case 0xc:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x70;
          uVar12 = thunk_FUN_0046aa50(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1032;
          local_8 = uVar12;
          break;
        case 0xd:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x71;
          uVar12 = thunk_FUN_0046efd0(local_ec,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1041;
          local_8 = uVar12;
          break;
        case 0xe:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x72;
          uVar12 = thunk_FUN_004805b0(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1087;
          local_8 = uVar12;
          break;
        case 0xf:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x73;
          uVar12 = thunk_FUN_00474810(local_ec,(int *)0x0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1050;
          local_8 = uVar12;
          break;
        case 0x10:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x74;
          uVar12 = thunk_FUN_00476120(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x105a;
          local_8 = uVar12;
          break;
        case 0x11:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x75;
          uVar12 = thunk_FUN_0046c980(local_ec,uVar12,0);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1037;
          local_8 = uVar12;
          break;
        default:
          DAT_00858df8 = local_184;
          return 0;
        case 0x13:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x77;
          uVar12 = thunk_FUN_0046d400(local_ec,uVar12);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x103c;
          local_8 = uVar12;
          break;
        case 0x14:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x78;
          uVar12 = thunk_FUN_00475530(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1055;
          local_8 = uVar12;
          break;
        case 0x15:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x79;
          uVar12 = thunk_FUN_0047bf70(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1073;
          local_8 = uVar12;
          break;
        case 0x16:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7a;
          uVar12 = thunk_FUN_004795e0(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x106e;
          local_8 = uVar12;
          break;
        case 0x17:
          *(undefined4 *)((int)local_ec + 0x45d) = 0;
          *(undefined4 *)((int)local_ec + 0x459) = 0x7b;
          uVar12 = thunk_FUN_0047cf20(local_ec);
          if (uVar12 != -1) goto LAB_00458c5b;
          uVar11 = 0x1078;
          local_8 = uVar12;
        }
      }
      uVar12 = local_8;
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar11);
LAB_00458c5b:
      if (uVar12 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x459) = 0;
      DAT_00858df8 = local_184;
      return 0;
    }
LAB_0045910d:
    switch(*(undefined4 *)((int)local_ec + 0x45d)) {
    case 1:
      iVar9 = thunk_FUN_004602e0(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1094);
      }
      if (iVar9 == 0) {
        *(undefined4 *)((int)local_ec + 0x45d) = 3;
        iVar9 = thunk_FUN_004608b0(local_ec,0);
        if (iVar9 != -1) {
          DAT_00858df8 = local_184;
          return 0;
        }
        uVar11 = 0x1099;
        local_8 = 0xffffffff;
      }
      else {
        if (iVar9 != 3) {
          DAT_00858df8 = local_184;
          return 0;
        }
        if (((*(int *)((int)local_ec + 0xb3) == 0) &&
            (uVar12 = *(int *)((int)local_ec + 0xbb) - (int)*(short *)((int)local_ec + 0x5b),
            uVar21 = (int)uVar12 >> 0x1f, (int)((uVar12 ^ uVar21) - uVar21) < 2)) &&
           (uVar12 = *(int *)((int)local_ec + 0xbf) - (int)*(short *)((int)local_ec + 0x5d),
           uVar21 = (int)uVar12 >> 0x1f, (int)((uVar12 ^ uVar21) - uVar21) < 2)) {
          uVar12 = *(int *)((int)local_ec + 0xc3) - (int)*(short *)((int)local_ec + 0x5f);
          uVar21 = (int)uVar12 >> 0x1f;
          iVar9 = (uVar12 ^ uVar21) - uVar21;
          if ((iVar9 < 2) &&
             (uVar18 = (undefined2)((uint)iVar9 >> 0x10),
             iVar9 = (**(code **)(*local_ec + 0x18))
                               (CONCAT22(uVar18,*(undefined2 *)((int)local_ec + 0xbb)),
                                CONCAT22(*(short *)((int)local_ec + 0x5f) >> 0xf,
                                         *(undefined2 *)((int)local_ec + 0xbf)),
                                CONCAT22(uVar18,*(undefined2 *)((int)local_ec + 0xc3))), iVar9 == 0)
             ) {
            *(undefined4 *)((int)local_ec + 0x45d) = 3;
            iVar9 = thunk_FUN_004608b0(local_ec,0);
            if (iVar9 != -1) {
              DAT_00858df8 = local_184;
              return 0;
            }
            uVar11 = 0x10ad;
            local_8 = 0xffffffff;
            break;
          }
        }
        iVar9 = thunk_FUN_0040ae40(local_1c,(uint)*(ushort *)((int)local_ec + 0x32),'\0');
        if (iVar9 != -4) {
          uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
          local_ec[7] = uVar12;
          *(short *)(local_ec + 0x3e) = (short)((ulonglong)(uVar12 >> 0x10) % 0x1f) + 0x1e;
          DAT_00858df8 = local_184;
          return 0;
        }
        *(undefined4 *)((int)local_ec + 0x45d) = 3;
        iVar9 = thunk_FUN_004608b0(local_ec,0);
        if (iVar9 != -1) {
          DAT_00858df8 = local_184;
          return 0;
        }
        uVar11 = 0x10b3;
        local_8 = 0xffffffff;
      }
      break;
    case 2:
      iVar9 = thunk_FUN_00462180(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x10be);
      }
      if (iVar9 != 0) {
        if (iVar9 == 3) {
          thunk_FUN_0040ae40(local_1c,(uint)*(ushort *)((int)local_ec + 0x32),'\0');
          iVar9 = local_ec[7] * 0x41c64e6d + 0x3039;
          local_ec[7] = iVar9;
          *(ushort *)(local_ec + 0x3e) = ((ushort)((uint)iVar9 >> 0x10) & 0xf) + 0xf;
          DAT_00858df8 = local_184;
          return 0;
        }
        if (iVar9 == 4) {
          (**(code **)(*local_1c + 8))(0x66,(int)local_ec + 0x32);
          DAT_00858df8 = local_184;
          return 0;
        }
        if (iVar9 == 6) {
          (**(code **)(*local_1c + 8))(0x68,(int)local_ec + 0x32);
          DAT_00858df8 = local_184;
          return 0;
        }
        if (iVar9 != 7) {
          DAT_00858df8 = local_184;
          return 0;
        }
        (**(code **)(*local_1c + 8))(0x69,(int)local_ec + 0x32);
        DAT_00858df8 = local_184;
        return 0;
      }
      local_46 = *(undefined2 *)((int)local_ec + 0x7f2);
      local_48 = *(undefined2 *)((int)local_ec + 0x32);
      *(undefined2 *)((int)local_ec + 0x816) = 5;
      (**(code **)(*local_1c + 8))(0x67,&local_48);
      *(undefined2 *)((int)local_ec + 0x7f2) = 0xffff;
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x10c8;
      local_8 = 0xffffffff;
      break;
    case 3:
      iVar9 = thunk_FUN_004608b0(local_ec,2);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x10bb;
      local_8 = 0xffffffff;
      break;
    case 4:
      iVar9 = thunk_FUN_0046f5c0(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x111a);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      puVar16 = (undefined4 *)thunk_FUN_004357f0((char)local_ec[9]);
      if (puVar16 != (undefined4 *)0x0) {
        local_8c = 0x5d94;
        local_88 = (int *)CONCAT22(*(undefined2 *)((int)local_ec + 0x32),(short)local_ec[9]);
        local_84 = local_ec[6];
        (**(code **)*puVar16)(local_9c);
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1127;
      local_8 = 0xffffffff;
      break;
    case 5:
      iVar9 = thunk_FUN_00471ac0(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x112c);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1131;
      local_8 = 0xffffffff;
      break;
    case 6:
      iVar9 = thunk_FUN_004658d0(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x10e8);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x10ed;
      local_8 = 0xffffffff;
      break;
    case 7:
      iVar9 = thunk_FUN_004761b0(local_ec,uVar12,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1154);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1159;
      local_8 = 0xffffffff;
      break;
    case 8:
      iVar9 = thunk_FUN_0047fe10(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x11ac);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x11b1;
      local_8 = 0xffffffff;
      break;
    case 9:
      iVar9 = thunk_FUN_00476ce0(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1168);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x116d;
      local_8 = 0xffffffff;
      break;
    case 10:
      iVar9 = thunk_FUN_00476a10(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x115e);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1163;
      local_8 = 0xffffffff;
      break;
    case 0xb:
      iVar9 = thunk_FUN_0047d080(local_ec,(undefined4 *)0x2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1198);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x119d;
      local_8 = 0xffffffff;
      break;
    case 0xc:
      iVar9 = thunk_FUN_00465c60(local_ec,uVar12,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x10f2);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x10f7;
      local_8 = 0xffffffff;
      break;
    case 0xd:
      iVar9 = thunk_FUN_0046d450(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1110);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1115;
      local_8 = 0xffffffff;
      break;
    case 0xe:
      iVar9 = thunk_FUN_004803d0(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x11b6);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x11bb;
      local_8 = 0xffffffff;
      break;
    case 0xf:
      iVar9 = thunk_FUN_004732f0(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1136);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x113b;
      local_8 = 0xffffffff;
      break;
    case 0x10:
      iVar9 = thunk_FUN_004758e0(local_ec,(undefined4 *)0x2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x114a);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x114f;
      local_8 = 0xffffffff;
      break;
    case 0x11:
      iVar9 = thunk_FUN_0046b100(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x10fc);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1101;
      local_8 = 0xffffffff;
      break;
    case 0x12:
      iVar9 = thunk_FUN_0047df00(local_ec,uVar12,(int *)0x2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x11a2);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x11a7;
      local_8 = 0xffffffff;
      break;
    case 0x13:
      uVar12 = thunk_FUN_0046cf20(local_ec,uVar12);
      local_8 = uVar12;
      if (uVar12 == 0xffffffff) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1106);
      }
      if (uVar12 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x110b;
      local_8 = 0xffffffff;
      break;
    case 0x14:
      iVar9 = thunk_FUN_004749c0(local_ec,(void *)0x2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1140);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1145;
      local_8 = 0xffffffff;
      break;
    case 0x15:
      iVar9 = thunk_FUN_00479600(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1184);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1189;
      local_8 = 0xffffffff;
      break;
    case 0x16:
      iVar9 = thunk_FUN_00478640(local_ec,2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x1172);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      puVar16 = (undefined4 *)thunk_FUN_004357f0((char)local_ec[9]);
      if (puVar16 != (undefined4 *)0x0) {
        local_8c = 0x5d94;
        local_88 = (int *)CONCAT22(*(undefined2 *)((int)local_ec + 0x32),(short)local_ec[9]);
        local_84 = local_ec[6];
        (**(code **)*puVar16)(local_9c);
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x117f;
      local_8 = 0xffffffff;
      break;
    case 0x17:
      iVar9 = thunk_FUN_0047c050(local_ec,(int *)0x2);
      local_8 = iVar9;
      if (iVar9 == -1) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x118e);
      }
      if (iVar9 != 0) {
        DAT_00858df8 = local_184;
        return 0;
      }
      *(undefined4 *)((int)local_ec + 0x45d) = 3;
      iVar9 = thunk_FUN_004608b0(local_ec,0);
      if (iVar9 != -1) {
        DAT_00858df8 = local_184;
        return 0;
      }
      uVar11 = 0x1193;
      local_8 = 0xffffffff;
      break;
    default:
      DAT_00858df8 = local_184;
      return 0;
    }
LAB_0045aee3:
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar11);
    DAT_00858df8 = local_184;
    return 0;
  }
  lVar28 = (ulonglong)extraout_EDX << 0x20;
  if (uVar12 == 0) goto LAB_0045048a;
  if (uVar12 != 2) {
    DAT_00858df8 = local_184;
    return 0;
  }
  local_1c = *(int **)(param_1 + 0x14);
  thunk_FUN_00417a00(local_ec,0);
  if (local_1c[3] == 0) {
    iVar9 = *(int *)(param_1 + 0x14);
    *(undefined4 *)((int)local_ec + 0x6f3) = *(undefined4 *)(iVar9 + 0x14);
    *(undefined4 *)((int)local_ec + 0x6f7) = *(undefined4 *)(iVar9 + 0x18);
    iVar10 = *(int *)(iVar9 + 0x2a);
    if (iVar10 < 0) {
      *(undefined4 *)((int)local_ec + 0x7d6) = 0;
    }
    else if (iVar10 < 0x79) {
      *(int *)((int)local_ec + 0x7d6) = iVar10 / 3;
    }
    else {
      *(undefined4 *)((int)local_ec + 0x7d6) = 0x28;
    }
    iVar10 = *(int *)(iVar9 + 0x2e);
    if (iVar10 < 0) {
      *(undefined4 *)((int)local_ec + 0x7da) = 0;
    }
    else if (iVar10 < 0x321) {
      *(int *)((int)local_ec + 0x7da) = iVar10 / 0x14;
    }
    else {
      *(undefined4 *)((int)local_ec + 0x7da) = 0x28;
    }
    iVar10 = *(int *)((int)local_ec + 0x7da) + *(int *)((int)local_ec + 0x7d6);
    if (0x28 < iVar10) {
      iVar10 = (*(int *)((int)local_ec + 0x7d6) * 0x28) / iVar10;
      *(int *)((int)local_ec + 0x7d6) = iVar10;
      *(int *)((int)local_ec + 0x7da) = 0x28 - iVar10;
    }
    switch(*(int *)((int)local_ec + 0x6f7)) {
    case 0x16:
    case 0x25:
      *(undefined4 *)((int)local_ec + 0x726) = 0x28;
      break;
    case 0x17:
      *(undefined4 *)((int)local_ec + 0x72a) = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      *(undefined4 *)((int)local_ec + 0x71e) = 0x14;
      break;
    case 0x23:
      *(undefined4 *)((int)local_ec + 0x722) = 0x14;
    }
    sVar30 = *(short *)(iVar9 + 0x1c);
    local_c = CONCAT22((short)((uint)(*(int *)((int)local_ec + 0x6f7) + -0x16) >> 0x10),sVar30);
    sVar5 = *(short *)(iVar9 + 0x20);
    sVar6 = *(short *)(iVar9 + 0x1e);
    if (((sVar30 < 0) || (DAT_007fb240 <= sVar30)) ||
       ((sVar6 < 0 || (((DAT_007fb242 <= sVar6 || (sVar5 < 0)) || (DAT_007fb244 <= sVar5)))))) {
      local_10 = (int *)0x0;
    }
    else {
      local_10 = *(int **)(DAT_007fb248 +
                          ((uint)*(byte *)((int)local_ec + 0x8e) +
                          ((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 +
                          (int)sVar30) * 2) * 4);
    }
    if (local_10 != (int *)0x0) {
      iVar10 = (**(code **)(*local_10 + 0x114))(*(undefined4 *)((int)local_ec + 0x6f7));
      if (iVar10 == 0) {
        iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x197,0,0,&DAT_007a4ccc);
        if (iVar10 != 0) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return uVar11;
        }
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x198);
      }
      (**(code **)(*local_10 + 0x118))(local_ec[6]);
      iVar10 = *(int *)((int)local_ec + 0x6f7);
      if (((iVar10 == 7) || (iVar10 == 0x13)) || (iVar10 == 0x1b)) {
        *(int *)((int)local_ec + 0x7ca) = local_10[6];
        FUN_006ea3e0(*(void **)((int)local_ec + 0x211),*(uint *)((int)local_ec + 0x1ed),
                     *(int *)((int)local_10 + 0x1ed));
      }
    }
    *(undefined4 *)((int)local_ec + 0x6fb) = *(undefined4 *)(iVar9 + 0x36);
    *(undefined4 *)((int)local_ec + 0x6ff) = *(undefined4 *)(iVar9 + 0x3a);
    *(undefined4 *)((int)local_ec + 0x703) = *(undefined4 *)(iVar9 + 0x3e);
    *(undefined2 *)((int)local_ec + 0x707) = *(undefined2 *)(iVar9 + 0x42);
    *(undefined1 *)((int)local_ec + 0x709) = *(undefined1 *)(iVar9 + 0x44);
    *(undefined4 *)((int)local_ec + 0x73e) = *(undefined4 *)(iVar9 + 0x32);
    if (local_10 == (int *)0x0) {
      *(undefined4 *)((int)local_ec + 0x76) = 1;
      uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
      local_ec[7] = uVar12;
      *(short *)((int)local_ec + 0x6e) = (short)((ulonglong)(uVar12 >> 0x10) % 0x30);
    }
    else {
      *(undefined2 *)((int)local_ec + 0x6e) = *(undefined2 *)((int)local_10 + 0x6e);
      iVar10 = *(int *)((int)local_ec + 0x6f7);
      if (((iVar10 == 7) || (iVar10 == 0x13)) || (iVar10 == 0x1b)) {
        *(undefined4 *)((int)local_ec + 0x76) = 1;
      }
      else {
        *(undefined4 *)((int)local_ec + 0x76) = 0;
      }
    }
    thunk_FUN_00416390((int)local_ec);
    *(undefined1 *)((int)local_ec + 0xe3) = 0;
    thunk_FUN_0048a670(local_ec);
    iVar10 = *(int *)(iVar9 + 0x26);
    if (iVar10 < 0) {
      *(undefined4 *)((int)local_ec + 0x716) = 1;
    }
    else {
      if (iVar10 < 100) {
        iVar10 = (*(int *)((int)local_ec + 0x712) * iVar10) / 100;
      }
      else {
        iVar10 = *(int *)((int)local_ec + 0x712);
      }
      *(int *)((int)local_ec + 0x716) = iVar10;
    }
    thunk_FUN_0048a910((int)local_ec);
    thunk_FUN_0048a840((int)local_ec);
    if ((((local_10 == (int *)0x0) || (iVar10 = *(int *)((int)local_ec + 0x6f7), iVar10 == 7)) ||
        (iVar10 == 0x13)) || (iVar10 == 0x1b)) {
      thunk_FUN_00417a20(local_ec,*(short *)(iVar9 + 0x1c),*(short *)(iVar9 + 0x1e),
                         *(short *)(iVar9 + 0x20),1);
    }
    else {
      thunk_FUN_00417a20(local_ec,*(short *)(iVar9 + 0x1c),*(short *)(iVar9 + 0x1e),
                         *(short *)(iVar9 + 0x20),0);
      *(undefined2 *)((int)local_ec + 0x41) = *(undefined2 *)((int)local_10 + 0x41);
      *(undefined2 *)((int)local_ec + 0x43) = *(undefined2 *)((int)local_10 + 0x43);
      *(undefined2 *)((int)local_ec + 0x45) = *(undefined2 *)((int)local_10 + 0x45);
      *(undefined1 *)((int)local_ec + 0x4d) = *(undefined1 *)((int)local_10 + 0x4d);
    }
    if ((*(int *)((int)local_ec + 0x6f7) == 9) || (*(int *)((int)local_ec + 0x6f7) == 0x15)) {
      sVar30 = 8;
    }
    else {
      sVar30 = 0x18;
    }
    thunk_FUN_00417e70(local_ec,sVar30);
    if (local_10 == (int *)0x0) {
      iVar10 = local_ec[7] * 0x41c64e6d + 0x3039;
      local_ec[7] = iVar10;
      thunk_FUN_00417ee0(local_ec,((ushort)((uint)iVar10 >> 0x10) & 7) * 0x2d);
      uVar18 = extraout_var_02;
      uVar22 = extraout_var_05;
    }
    else {
      *(short *)(local_ec + 0x1b) = (short)local_10[0x1b];
      uVar18 = extraout_var_01;
      uVar22 = extraout_var_04;
    }
    thunk_FUN_0042e210(CONCAT31((int3)((uint)*(int *)(iVar9 + 0x49) >> 8),(char)local_ec[9]),
                       CONCAT22(uVar22,*(undefined2 *)(iVar9 + 0x24)),
                       CONCAT22(uVar18,*(undefined2 *)(iVar9 + 0x22)),local_ec,1,
                       *(int *)(iVar9 + 0x49));
    *(undefined4 *)((int)local_ec + 0x487) = 0xffffffff;
    *(undefined4 *)((int)local_ec + 0x48b) = 0xffff;
    *(short *)(local_ec + 0x205) = *(short *)((int)local_ec + 0x816) * 0xc9;
    if (((local_10 == (int *)0x0) || (iVar9 = *(int *)((int)local_ec + 0x6f7), iVar9 == 7)) ||
       ((iVar9 == 0x13 || (iVar9 == 0x1b)))) {
      *(undefined4 *)((int)local_ec + 0x82e) = 0xffffffff;
      *(undefined4 *)((int)local_ec + 0x836) = 4;
      *(undefined2 *)((int)local_ec + 0x475) = *(undefined2 *)((int)local_ec + 0x47);
      *(undefined2 *)((int)local_ec + 0x477) = *(undefined2 *)((int)local_ec + 0x49);
      *(undefined2 *)((int)local_ec + 0x479) = *(undefined2 *)((int)local_ec + 0x4b);
    }
    else {
      *(undefined4 *)((int)local_ec + 0x45d) = 0x14;
      *(undefined4 *)((int)local_ec + 0x7c2) = 1;
      (**(code **)(*local_ec + 0x100))(*(uint *)((int)local_ec + 0x1d1) | 0xd);
      local_ec[0x170] = 3;
      *(short *)(local_ec + 0x168) = (short)local_ec[0xc];
      *(int *)((int)local_ec + 0x5a2) = local_10[6];
      *(undefined4 *)((int)local_ec + 0x5a6) = 0;
      local_ec[0x171] = 7;
    }
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    local_d4 = (uVar12 >> 0x10) % 0x13;
    iVar9 = (**(code **)(*local_ec + 0x2c))();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar9 >> 8),(char)local_ec[9]),iVar9);
    if (local_ec[9] == (uint)*(byte *)(local_ec[4] + 0x112d)) {
      thunk_FUN_004d8b70((char)local_ec[9]);
    }
    switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)((int)local_ec + 0x70a) = 8;
      break;
    default:
      *(undefined4 *)((int)local_ec + 0x70a) = 5;
    }
    thunk_FUN_0041c3f0(local_ec,*(undefined **)((int)local_ec + 0x70a));
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    iVar9 = ((uVar12 >> 0x10) % 5) * 0x19;
    *(int *)((int)local_ec + 0x77e) = iVar9 + -0xf;
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    *(uint *)((int)local_ec + 0x77a) = (uVar12 >> 0x10) % (iVar9 - 0xeU);
  }
  if (local_1c[3] == 1) {
    iVar9 = *(int *)(param_1 + 0x14);
    *(undefined4 *)((int)local_ec + 0x6f3) = *(undefined4 *)(iVar9 + 0x14);
    *(undefined4 *)((int)local_ec + 0x6f7) = *(undefined4 *)(iVar9 + 0x18);
    *(undefined4 *)((int)local_ec + 0x6fb) = *(undefined4 *)(iVar9 + 0x32);
    *(undefined4 *)((int)local_ec + 0x6ff) = *(undefined4 *)(iVar9 + 0x36);
    *(undefined4 *)((int)local_ec + 0x703) = *(undefined4 *)(iVar9 + 0x3a);
    *(undefined2 *)((int)local_ec + 0x707) = *(undefined2 *)(iVar9 + 0x3e);
    *(undefined1 *)((int)local_ec + 0x709) = *(undefined1 *)(iVar9 + 0x40);
    *(undefined4 *)((int)local_ec + 0x81e) = *(undefined4 *)(iVar9 + 0x41);
    switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
    case 0x16:
    case 0x25:
      *(undefined4 *)((int)local_ec + 0x726) = 0x28;
      break;
    case 0x17:
      *(undefined4 *)((int)local_ec + 0x72a) = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      *(undefined4 *)((int)local_ec + 0x71e) = 0x14;
      break;
    case 0x23:
      *(undefined4 *)((int)local_ec + 0x722) = 0x14;
    }
    *(undefined4 *)((int)local_ec + 0x76) = 1;
    *(undefined2 *)((int)local_ec + 0x6e) = 0;
    thunk_FUN_00416390((int)local_ec);
    *(undefined1 *)((int)local_ec + 0xe3) = 0;
    thunk_FUN_0048a670(local_ec);
    thunk_FUN_0048a910((int)local_ec);
    uVar11 = thunk_FUN_0048a840((int)local_ec);
    thunk_FUN_00495ff0(*(short *)(iVar9 + 0x1c),*(short *)(iVar9 + 0x1e),*(short *)(iVar9 + 0x20),
                       CONCAT31((int3)((uint)uVar11 >> 8),*(undefined1 *)((int)local_ec + 0x8e)),
                       (int)local_ec);
    *(undefined2 *)((int)local_ec + 0x47) = *(undefined2 *)(iVar9 + 0x1c);
    *(undefined2 *)((int)local_ec + 0x41) = *(undefined2 *)(iVar9 + 0x22);
    *(undefined2 *)((int)local_ec + 0x49) = *(undefined2 *)(iVar9 + 0x1e);
    *(undefined2 *)((int)local_ec + 0x43) = *(undefined2 *)(iVar9 + 0x24);
    uVar18 = *(undefined2 *)(iVar9 + 0x20);
    *(undefined2 *)((int)local_ec + 0x4b) = uVar18;
    *(undefined2 *)((int)local_ec + 0x45) = *(undefined2 *)(iVar9 + 0x26);
    thunk_FUN_00495ec0(*(short *)((int)local_ec + 0x47),*(short *)((int)local_ec + 0x49),
                       *(short *)((int)local_ec + 0x4b),
                       CONCAT31((int3)(CONCAT22(extraout_var_06,uVar18) >> 8),
                                *(undefined1 *)((int)local_ec + 0x8e)),(int)local_ec);
    if ((*(int *)((int)local_ec + 0x6f7) == 9) || (*(int *)((int)local_ec + 0x6f7) == 0x15)) {
      sVar30 = 8;
    }
    else {
      sVar30 = 0x18;
    }
    thunk_FUN_00417e70(local_ec,sVar30);
    uVar11 = thunk_FUN_00417ee0(local_ec,0x5a);
    uVar11 = thunk_FUN_0042e210(CONCAT31((int3)((uint)extraout_ECX >> 8),(char)local_ec[9]),
                                CONCAT22((short)((uint)uVar11 >> 0x10),*(undefined2 *)(iVar9 + 0x2a)
                                        ),0xffff,local_ec,0,0);
    *(undefined4 *)((int)local_ec + 0x45d) = 0x13;
    *(undefined2 *)(local_ec + 0x144) = *(undefined2 *)(iVar9 + 0x1c);
    *(undefined2 *)((int)local_ec + 0x512) = *(undefined2 *)(iVar9 + 0x1e);
    *(undefined2 *)(local_ec + 0x145) = *(undefined2 *)(iVar9 + 0x20);
    *(undefined2 *)((int)local_ec + 0x516) = *(undefined2 *)(iVar9 + 0x22);
    *(undefined2 *)(local_ec + 0x146) = *(undefined2 *)(iVar9 + 0x24);
    *(undefined2 *)((int)local_ec + 0x51a) = *(undefined2 *)(iVar9 + 0x26);
    *(undefined2 *)(local_ec + 0x147) = *(undefined2 *)(iVar9 + 0x2c);
    uVar18 = *(undefined2 *)(iVar9 + 0x2e);
    *(undefined2 *)((int)local_ec + 0x51e) = uVar18;
    *(undefined2 *)(local_ec + 0x148) = *(undefined2 *)(iVar9 + 0x30);
    local_10 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(CONCAT22((short)((uint)uVar11 >> 0x10),
                                                                  uVar18) >> 8),(char)local_ec[9]),
                                         CONCAT22(extraout_var_07,*(undefined2 *)(iVar9 + 0x28)),1);
    if (local_10 == (int *)0x0) {
      local_ec[0x149] = 0;
    }
    else {
      local_ec[0x149] = local_10[6];
    }
    local_ec[0x14a] = 0;
    FUN_006ea460(*(void **)((int)local_ec + 0x211),*(uint *)((int)local_ec + 0x1ed),
                 *(int *)((int)local_10 + 0x1ed));
    local_d4 = DAT_008073fc * 5;
    iVar10 = (**(code **)(*local_ec + 0x2c))();
    thunk_FUN_004b76d0(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),(char)local_ec[9]),iVar10);
    if (local_ec[9] == (uint)*(byte *)(local_ec[4] + 0x112d)) {
      thunk_FUN_004d8b70((char)local_ec[9]);
    }
    switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)((int)local_ec + 0x70a) = 8;
      break;
    default:
      *(undefined4 *)((int)local_ec + 0x70a) = 5;
    }
    thunk_FUN_0041c3f0(local_ec,*(undefined **)((int)local_ec + 0x70a));
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    iVar10 = ((uVar12 >> 0x10) % 5) * 0x19;
    *(int *)((int)local_ec + 0x77e) = iVar10 + -0xf;
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    *(uint *)((int)local_ec + 0x77a) = (uVar12 >> 0x10) % (iVar10 - 0xeU);
    if (DAT_008117bc != (int *)0x0) {
      local_8c = 0x5dd0;
      local_88 = (int *)CONCAT22(*(undefined2 *)((int)local_ec + 0x32),(short)local_ec[9]);
      local_84 = CONCAT22(*(undefined2 *)(iVar9 + 0x28),(short)local_ec[9]);
      (**(code **)*DAT_008117bc)(local_9c);
    }
    switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
    case 1:
      uVar11 = 200;
      break;
    case 2:
      uVar11 = 0xce;
      break;
    case 3:
      uVar11 = 0xd4;
      break;
    case 4:
      uVar11 = 0xda;
      break;
    case 5:
      uVar11 = 0xe0;
      break;
    case 6:
      uVar11 = 0xe7;
      break;
    case 7:
      uVar11 = 0xee;
      break;
    case 8:
      uVar11 = 0xf5;
      break;
    case 9:
      uVar11 = 0xfd;
      break;
    case 10:
      uVar11 = 0x102;
      break;
    case 0xb:
      uVar11 = 0x108;
      break;
    case 0xc:
      uVar11 = 0x10e;
      break;
    case 0xd:
      uVar11 = 300;
      break;
    case 0xe:
      uVar11 = 0x132;
      break;
    case 0xf:
      uVar11 = 0x138;
      break;
    case 0x10:
      uVar11 = 0x13e;
      break;
    case 0x11:
      uVar11 = 0x144;
      break;
    case 0x12:
      uVar11 = 0x14b;
      break;
    case 0x13:
      uVar11 = 0x152;
      break;
    case 0x14:
      uVar11 = 0x159;
      break;
    case 0x15:
      uVar11 = 0x161;
      break;
    case 0x16:
      uVar11 = 0x166;
      break;
    case 0x17:
      uVar11 = 0x16e;
      break;
    case 0x18:
      uVar11 = 0x174;
      break;
    case 0x19:
      uVar11 = 400;
      break;
    case 0x1a:
      uVar11 = 0x198;
      break;
    case 0x1b:
      uVar11 = 0x1a0;
      break;
    case 0x1c:
      uVar11 = 0x1a6;
      break;
    case 0x1d:
      uVar11 = 0x1ac;
      break;
    case 0x1e:
      uVar11 = 0x1b3;
      break;
    case 0x1f:
      uVar11 = 0x1b9;
      break;
    case 0x20:
      uVar11 = 0x1bf;
      break;
    case 0x21:
      uVar11 = 0x1c5;
      break;
    case 0x22:
      uVar11 = 0x1cc;
      break;
    case 0x23:
      uVar11 = 0x1d3;
      break;
    case 0x24:
      uVar11 = 0x1d9;
      break;
    case 0x25:
      uVar11 = 0x17a;
      break;
    case 0x26:
      uVar11 = 0x114;
      break;
    case 0x27:
      uVar11 = 0x180;
      break;
    case 0x28:
      uVar11 = 0x1df;
      break;
    default:
      uVar11 = 0;
    }
    (**(code **)(*local_ec + 0x90))(4,uVar11);
  }
  if (local_1c[3] == 2) {
    iVar9 = *(int *)(param_1 + 0x14);
    local_d0 = (undefined4 *)FUN_006aac70(0x44);
    do {
      *(int **)(iVar23 + (int)local_d0) = DAT_0080677c;
      iVar23 = iVar23 + 4;
    } while (iVar23 < 0x44);
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
    thunk_FUN_004adba0((int *)&local_d0,(undefined4 *)(*(int *)(iVar9 + 0x5f6) + iVar9));
    FUN_006ab060(&local_d0);
    thunk_FUN_00422210((undefined4 *)(*(int *)(iVar9 + 0x5fe) + iVar9));
    thunk_FUN_004900e0(iVar9);
    *(undefined4 *)((int)local_ec + 0x5a6) = 0;
    thunk_FUN_0042e210(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),(char)local_ec[9]),
                       CONCAT22(extraout_var_03,(short)local_ec[0xc]),
                       CONCAT22(extraout_var,*(undefined2 *)((int)local_ec + 0x32)),local_ec,1,0);
    if ((*(int *)((int)local_ec + 0x45d) != 0x14) || (local_ec[0x170] != 3)) {
      thunk_FUN_00495ec0(*(short *)((int)local_ec + 0x5b),*(short *)((int)local_ec + 0x5d),
                         *(short *)((int)local_ec + 0x5f),0,(int)local_ec);
    }
    thunk_FUN_0048a910((int)local_ec);
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a9d3c,0x2a6);
  }
  local_74[0] = 0;
  local_e8[0] = 0;
  switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
  case 1:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e8c;
    break;
  case 2:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e84;
    break;
  case 3:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e7c;
    break;
  case 4:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e74;
    break;
  case 5:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e6c;
    break;
  case 6:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e64;
    break;
  case 7:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e5c;
    break;
  case 8:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e54;
    break;
  case 9:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e50;
    break;
  case 10:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e48;
    break;
  case 0xb:
    uVar12 = 0xffffffff;
    pcVar25 = &DAT_007a9e40;
    do {
      pcVar26 = pcVar25;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar26 = pcVar25 + 1;
      cVar1 = *pcVar25;
      pcVar25 = pcVar26;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar9 = -1;
    pbVar20 = local_74;
    do {
      pbVar27 = pbVar20;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar27 = pbVar20 + 1;
      bVar2 = *pbVar20;
      pbVar20 = pbVar27;
    } while (bVar2 != 0);
    pbVar24 = (byte *)(pcVar26 + -uVar12);
    pbVar27 = pbVar27 + -1;
    for (uVar21 = uVar12 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pbVar27 = *(undefined4 *)pbVar24;
      pbVar24 = pbVar24 + 4;
      pbVar27 = pbVar27 + 4;
    }
    pbVar20 = local_e8;
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pbVar27 = *pbVar24;
      pbVar24 = pbVar24 + 1;
      pbVar27 = pbVar27 + 1;
    }
    pcVar25 = &DAT_007a9e94;
    break;
  case 0xc:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e38;
    break;
  case 0xd:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e30;
    break;
  case 0xe:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e28;
    break;
  case 0xf:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e20;
    break;
  case 0x10:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e18;
    break;
  case 0x11:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e10;
    break;
  case 0x12:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e08;
    break;
  case 0x13:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9e00;
    break;
  case 0x14:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9df8;
    break;
  case 0x15:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9df4;
    break;
  case 0x16:
    uVar12 = 0xffffffff;
    pcVar25 = &DAT_007a9dec;
    do {
      pcVar26 = pcVar25;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar26 = pcVar25 + 1;
      cVar1 = *pcVar25;
      pcVar25 = pcVar26;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar9 = -1;
    pbVar20 = local_74;
    do {
      pbVar27 = pbVar20;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar27 = pbVar20 + 1;
      bVar2 = *pbVar20;
      pbVar20 = pbVar27;
    } while (bVar2 != 0);
    pbVar24 = (byte *)(pcVar26 + -uVar12);
    pbVar27 = pbVar27 + -1;
    for (uVar21 = uVar12 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pbVar27 = *(undefined4 *)pbVar24;
      pbVar24 = pbVar24 + 4;
      pbVar27 = pbVar27 + 4;
    }
    pbVar20 = local_e8;
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pbVar27 = *pbVar24;
      pbVar24 = pbVar24 + 1;
      pbVar27 = pbVar27 + 1;
    }
    pcVar25 = &DAT_007a9e9c;
    break;
  case 0x17:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9de4;
    break;
  case 0x18:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9ddc;
    break;
  case 0x19:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dd8;
    break;
  case 0x1a:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dd4;
    break;
  case 0x1b:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dd0;
    break;
  case 0x1c:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dcc;
    break;
  case 0x1d:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dc8;
    break;
  case 0x1e:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dc4;
    break;
  case 0x1f:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dc0;
    break;
  case 0x20:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dbc;
    break;
  case 0x21:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9db8;
    break;
  case 0x22:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9db4;
    break;
  case 0x23:
    uVar12 = 0xffffffff;
    pcVar25 = &DAT_007a9db0;
    do {
      pcVar26 = pcVar25;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar26 = pcVar25 + 1;
      cVar1 = *pcVar25;
      pcVar25 = pcVar26;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar9 = -1;
    pbVar20 = local_74;
    do {
      pbVar27 = pbVar20;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pbVar27 = pbVar20 + 1;
      bVar2 = *pbVar20;
      pbVar20 = pbVar27;
    } while (bVar2 != 0);
    pbVar24 = (byte *)(pcVar26 + -uVar12);
    pbVar27 = pbVar27 + -1;
    for (uVar21 = uVar12 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pbVar27 = *(undefined4 *)pbVar24;
      pbVar24 = pbVar24 + 4;
      pbVar27 = pbVar27 + 4;
    }
    pbVar20 = local_e8;
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pbVar27 = *pbVar24;
      pbVar24 = pbVar24 + 1;
      pbVar27 = pbVar27 + 1;
    }
    pcVar25 = &DAT_007a9ea4;
    break;
  case 0x24:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9dac;
    break;
  case 0x25:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9da4;
    break;
  case 0x26:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9d9c;
    break;
  case 0x27:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9d94;
    break;
  case 0x28:
    pbVar20 = local_74;
    pcVar25 = &DAT_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar12 = 0xffffffff;
  do {
    pcVar26 = pcVar25;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar26 = pcVar25 + 1;
    cVar1 = *pcVar25;
    pcVar25 = pcVar26;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar9 = -1;
  do {
    pbVar27 = pbVar20;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pbVar27 = pbVar20 + 1;
    bVar2 = *pbVar20;
    pbVar20 = pbVar27;
  } while (bVar2 != 0);
  pbVar20 = (byte *)(pcVar26 + -uVar12);
  pbVar27 = pbVar27 + -1;
  for (uVar21 = uVar12 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *(undefined4 *)pbVar27 = *(undefined4 *)pbVar20;
    pbVar20 = pbVar20 + 4;
    pbVar27 = pbVar27 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pbVar27 = *pbVar20;
    pbVar20 = pbVar20 + 1;
    pbVar27 = pbVar27 + 1;
  }
switchD_0044fb10_default:
  iVar9 = thunk_FUN_004ab880(0xe,DAT_0080677c,local_74,0x1d);
  if (iVar9 != 0) {
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2da);
  }
  iVar9 = *(int *)((int)local_ec + 0x6f7);
  if ((((iVar9 == 0xb) || (iVar9 == 0x16)) || (iVar9 == 0x23)) &&
     (iVar9 = thunk_FUN_004ab880(0xd,DAT_0080677c,local_e8,0x1d), iVar9 != 0)) {
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2de);
  }
  switch(*(undefined4 *)((int)local_ec + 0x6f3)) {
  case 0:
    pcVar25 = &DAT_007a9d88;
    break;
  case 1:
    pcVar25 = &DAT_007a4ffc;
    break;
  case 2:
    pcVar25 = &DAT_007aa028;
    break;
  case 3:
    pcVar25 = &DAT_007aa024;
    break;
  case 4:
    pcVar25 = &DAT_007aa020;
    break;
  case 5:
    pcVar25 = &DAT_007aa01c;
    break;
  case 6:
    pcVar25 = &DAT_007aa018;
    break;
  case 7:
    pcVar25 = &DAT_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar12 = 0xffffffff;
  do {
    pcVar26 = pcVar25;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar26 = pcVar25 + 1;
    cVar1 = *pcVar25;
    pcVar25 = pcVar26;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar9 = -1;
  pbVar20 = local_74;
  do {
    pbVar27 = pbVar20;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pbVar27 = pbVar20 + 1;
    bVar2 = *pbVar20;
    pbVar20 = pbVar27;
  } while (bVar2 != 0);
  pbVar20 = (byte *)(pcVar26 + -uVar12);
  pbVar27 = pbVar27 + -1;
  for (uVar21 = uVar12 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *(undefined4 *)pbVar27 = *(undefined4 *)pbVar20;
    pbVar20 = pbVar20 + 4;
    pbVar27 = pbVar27 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pbVar27 = *pbVar20;
    pbVar20 = pbVar20 + 1;
    pbVar27 = pbVar27 + 1;
  }
switchD_0044fe4c_default:
  pvVar13 = (void *)((int)local_ec + 0x1d5);
  iVar9 = thunk_FUN_004ab880(0xc,DAT_0080677c,local_74,0x1d);
  if (iVar9 != 0) {
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2eb);
  }
  switch(*(undefined4 *)((int)local_ec + 0x6f7)) {
  case 9:
    local_c = ((8 - (int)(short)local_ec[0x1b] / 0x2d) * 0xf) % 0x78;
    uVar21 = 0xe;
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    break;
  default:
    local_c = ((0x18 - (int)(short)local_ec[0x1b] / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
    goto LAB_0045003f;
  case 0x15:
    local_c = ((8 - (int)(short)local_ec[0x1b] / 0x2d) * 0x14) % 0xa0;
    uVar21 = 0x13;
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    break;
  case 0x24:
  case 0x25:
    uVar12 = local_ec[7] * 0x41c64e6d + 0x3039;
    local_ec[7] = uVar12;
    local_c = (uVar12 >> 0x10) % 10;
LAB_0045003f:
    thunk_FUN_004abe40(pvVar13,'\x0e',local_c);
    uVar12 = local_c;
    goto LAB_00450050;
  }
  uVar21 = (uVar12 >> 0x10) % uVar21;
  *(uint *)((int)local_ec + 0x822) = uVar21;
  thunk_FUN_004abe40(pvVar13,'\x0e',uVar21 + local_c);
  uVar12 = *(int *)((int)local_ec + 0x822) + local_c;
LAB_00450050:
  thunk_FUN_004abe40(pvVar13,'\f',uVar12);
  if ((*(int *)((int)local_ec + 0x6f7) != 0x25) && (*(int *)((int)local_ec + 0x6f7) != 0x24)) {
    thunk_FUN_004ac610(pvVar13,'\x0e');
    thunk_FUN_004ac610(pvVar13,'\f');
  }
  thunk_FUN_004ac1a0(0xe,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
  thunk_FUN_004ac1a0(0xc,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
  iVar9 = *(int *)((int)local_ec + 0x6f7);
  if (((iVar9 == 0xb) || (iVar9 == 0x16)) || (iVar9 == 0x23)) {
    thunk_FUN_004acd60(pvVar13,'\r',*(uint *)((int)DAT_00802a38 + 0xe4) & 1);
    thunk_FUN_004ac1a0(0xd,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
    thunk_FUN_004abe40(pvVar13,'\r',local_d4);
  }
  local_78 = (uint)*(short *)((int)local_ec + 0x41);
  thunk_FUN_004ad3c0(pvVar13,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)((int)local_ec + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)((int)local_ec + 0x45) * _DAT_007904f8 * _DAT_007904f0);
  uVar12 = local_c;
  if ((*(int *)((int)local_ec + 0x6f7) != 0x25) && (*(int *)((int)local_ec + 0x6f7) != 0x24)) {
    uVar12 = (0x18 - (int)(short)local_ec[0x1b] / 0xf) % 0x18;
  }
  thunk_FUN_004abf00('\x0e',uVar12);
  thunk_FUN_0041f630(local_ec);
  if (DAT_00807326 == '\0') {
    thunk_FUN_004ad5e0((int)pvVar13);
  }
  if (local_1c[3] == 0) {
    local_78 = *(uint *)(param_1 + 0x14);
    if (*(int *)(local_78 + 0x45) == 1) {
      iVar9 = thunk_FUN_004ab880(0xb,DAT_00806774,(byte *)s_forcef0_007aa008,0x1d);
      if (iVar9 != 0) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x31b);
      }
      thunk_FUN_004ad670(pvVar13,'\x0e');
      thunk_FUN_004ad150(pvVar13,'\v');
      thunk_FUN_004ac700(pvVar13,'\v');
      thunk_FUN_004ac1a0(0xb,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
    }
    if (*(int *)(local_78 + 0x45) == 3) {
      thunk_FUN_006377b0(*(uint *)((int)local_ec + 0x1ed),1,-1,-1,-1,0x12);
    }
  }
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a9d3c,0x329);
LAB_00450268:
  *(int *)((int)local_ec + 0x46b) = 0;
  FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x471),(int *)((int)local_ec + 0x46b));
  if (*(int *)((int)local_ec + 0x7ca) != 0) {
    iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x7ca),&local_30);
    if (iVar9 == -4) {
      iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x335,0,0,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return uVar11;
      }
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x336);
    }
    FUN_006ea3e0(*(void **)((int)local_ec + 0x211),*(uint *)((int)local_ec + 0x1ed),
                 *(int *)(local_30 + 0x1ed));
  }
  if ((*(int *)((int)local_ec + 0x45d) == 0xf) && (*(int *)((int)local_ec + 0x596) == 3)) {
    iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_ec + 0x58e),&local_30);
    if (iVar9 == -4) {
      iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33c,0,0,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return uVar11;
      }
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x33d);
    }
    FUN_006ea3e0(*(void **)((int)local_ec + 0x211),*(uint *)((int)local_ec + 0x1ed),
                 *(int *)(local_30 + 0x1ed));
    DAT_00858df8 = local_184;
    return 0;
  }
  DAT_00858df8 = local_184;
  return 0;
}

