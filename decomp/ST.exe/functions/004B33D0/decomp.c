
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b33d0(uint param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  short sVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  bool bVar23;
  byte bVar24;
  int local_35c;
  int local_358;
  int local_354;
  int local_34c;
  undefined4 local_320 [3];
  int aiStack_314 [4];
  int local_304 [4];
  undefined4 local_2f4;
  byte local_2ec;
  int local_2eb;
  undefined4 local_2e7;
  int local_2e3;
  int local_2df;
  int local_2db;
  undefined4 local_2d7;
  undefined4 local_2d3;
  InternalExceptionFrame local_2c0;
  undefined1 *local_27c;
  int local_274;
  int local_270;
  int local_26c;
  uint local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254 [2];
  int local_24c [8];
  uint *local_22c;
  uint *local_184;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_12c;
  uint local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int *local_110;
  int local_10c;
  int local_108 [4];
  undefined4 local_f8;
  int local_f4 [18];
  int local_ac;
  short local_a8 [2];
  uint *local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  short local_8c [2];
  int local_88;
  undefined4 local_80;
  short local_7c [2];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c [11];
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790a90;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffc94;
  local_2c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_2c0;
  ExceptionList = &local_14;
  iVar6 = Library::MSVCRT::__setjmp3
                    (local_2c0.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
  local_1c = &stack0xfffffc94;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_2c0.previous;
    iVar20 = ReportDebugMessage(s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x3c1,0,iVar6,
                                &DAT_007a4ccc,s_TLOAiBldPlacesFind_error___007ac7a8);
    if (iVar20 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x3c2);
      ExceptionList = local_14;
      return iVar6;
    }
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  local_1c = &stack0xfffffc94;
  if (param_2 == (int *)0x0) {
    local_1c = &stack0xfffffc94;
    RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x5d);
  }
  if (param_2[3] == 0) {
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[3] = (int)puVar7;
  }
  if (param_2[5] == 0) {
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[5] = (int)puVar7;
  }
  piVar11 = local_24c;
  for (iVar6 = 0x42; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_4c;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  iVar20 = 0;
  local_10c = 0;
  *(undefined4 *)(param_2[3] + 4) = 0;
  iVar6 = FUN_006b1190(param_2[3],local_108);
  if (-1 < iVar6) {
    do {
      local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] =
           local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] + 1;
      if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
        iVar20 = iVar20 + 1;
      }
      iVar6 = FUN_006b1190(param_2[3],local_108);
    } while (-1 < iVar6);
    local_10c = iVar20;
  }
  uVar16 = 0;
  iVar6 = param_2[5];
  if (0 < *(int *)(iVar6 + 0xc)) {
    do {
      FUN_006acc70(iVar6,uVar16,&local_a0);
      iVar6 = thunk_FUN_004ae0b0(local_9c,local_98,local_94,local_a0,param_1,(undefined4 *)0x0,
                                 (int *)0x0,(int *)0x0,0,(int *)0x0);
      if (iVar6 == 0) {
        local_304[0] = local_a0;
        local_2f4 = local_90;
        if (param_2[3] == 0) {
          puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
          param_2[3] = (int)puVar7;
        }
        Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_304);
        FUN_006b0c70(param_2[5],uVar16);
      }
      else {
        bVar23 = true;
        *(undefined4 *)(param_2[4] + 4) = 0;
        iVar6 = FUN_006b1190(param_2[4],&local_70);
        while (-1 < iVar6) {
          if (((local_70 == local_9c) && (local_6c == local_98)) && (local_68 == local_94)) {
            bVar23 = false;
          }
          iVar6 = FUN_006b1190(param_2[4],&local_70);
        }
        if (bVar23) {
          uVar16 = uVar16 + 1;
        }
        else {
          if (param_2[3] == 0) {
            puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
            param_2[3] = (int)puVar7;
          }
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_320);
          FUN_006b0c70(param_2[5],uVar16);
        }
      }
      iVar6 = param_2[5];
    } while ((int)uVar16 < *(int *)(iVar6 + 0xc));
  }
  bVar24 = (byte)param_1;
  if (((local_4c[0] != 0) || (local_4c[1] != 0)) && (DAT_007fa150 != 0)) {
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1d,10);
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    local_a4 = puVar7;
    iVar6 = FUN_006b1190(DAT_007fa150,&local_58);
    while (-1 < iVar6) {
      if (local_58 != (int *)0x0) {
        thunk_FUN_004162b0(local_58,local_7c,local_8c,local_a8);
        piVar11 = *(int **)(DAT_007fb248 +
                           ((int)local_8c[0] * (int)DAT_007fb240 +
                            (int)DAT_007fb246 * (int)local_a8[0] + (int)local_7c[0]) * 8);
        local_110 = piVar11;
        if (piVar11 == (int *)0x0) {
          pbVar19 = &local_2ec;
          for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
            pbVar19[0] = 0;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
            pbVar19 = pbVar19 + 4;
          }
          *pbVar19 = 0;
          local_2ec = 1;
          local_2e7 = (**(code **)(*local_58 + 0x2c))();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d7 = FUN_006aced8(*param_2,param_2[1],local_2e3,local_2df);
          local_2d3 = 0xffffffff;
          if (param_2[4] != 0) {
            *(undefined4 *)(param_2[4] + 4) = 0;
            iVar6 = FUN_006b1190(param_2[4],&local_70);
            while (-1 < iVar6) {
              if (((local_70 == local_2e3) && (local_6c == local_2df)) && (local_68 == local_2db)) {
                local_2ec = local_2ec | 0x20;
                break;
              }
              iVar6 = FUN_006b1190(param_2[4],&local_70);
            }
          }
        }
        else {
          if ((piVar11[9] != param_1) ||
             (((piVar11[8] != 1000 ||
               (iVar6 = (**(code **)(*piVar11 + 0x2c))(), *(int *)(&DAT_00790888 + iVar6 * 4) != 0))
              && ((piVar11[8] != 0x3e9 ||
                  (*(int *)(&DAT_00790888 + *(int *)((int)local_110 + 0x259) * 4) != 0))))))
          goto LAB_004b3895;
          pbVar19 = &local_2ec;
          for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
            pbVar19[0] = 0;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
            pbVar19 = pbVar19 + 4;
          }
          *pbVar19 = 0;
          local_2ec = 2;
          local_2eb = (**(code **)(*local_110 + 0x2c))();
          if (local_2eb == 0x61) {
            local_2ec = local_2ec | 8;
          }
          local_2e7 = (**(code **)(*local_58 + 0x2c))();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d3 = 0xffffffff;
        }
        Library::DKW::TBL::FUN_006ae1c0(puVar7,(undefined4 *)&local_2ec);
      }
LAB_004b3895:
      iVar6 = FUN_006b1190(DAT_007fa150,&local_58);
    }
    if (local_4c[0] != 0) {
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar6 = FUN_006b1190(param_2[3],local_108);
      while (-1 < iVar6) {
        switch(local_108[0]) {
        case 0x39:
        case 0x5e:
          iVar6 = 0xdd;
          puVar7[1] = 0;
          pbVar19 = (byte *)0x0;
          break;
        default:
          goto switchD_004b38f0_caseD_3a;
        case 0x4f:
        case 0x61:
          iVar6 = 0xde;
          puVar7[1] = 0;
          pbVar19 = (byte *)0x0;
        }
        while( true ) {
          pbVar18 = pbVar19;
          uVar16 = puVar7[1];
          if (uVar16 < puVar7[3]) {
            pbVar8 = (byte *)(puVar7[2] * uVar16 + puVar7[7]);
            puVar7[1] = uVar16 + 1;
          }
          else {
            pbVar8 = (byte *)0x0;
          }
          if (pbVar8 == (byte *)0x0) break;
          bVar2 = *pbVar8;
          pbVar19 = pbVar18;
          if ((((((bVar2 & 1) != 0) && ((bVar2 & 4) == 0)) && (*(int *)(pbVar8 + 5) == iVar6)) &&
              (pbVar19 = pbVar8, pbVar18 != (byte *)0x0)) &&
             ((puVar7 = local_a4, (bVar2 & 0x20) < (*pbVar18 & 0x20) ||
              ((pbVar19 = pbVar18, ((*pbVar18 ^ *pbVar8) & 0x20) == 0 &&
               (*(int *)(pbVar8 + 0x15) < *(int *)(pbVar18 + 0x15))))))) {
            pbVar19 = pbVar8;
          }
        }
        if (pbVar18 != (byte *)0x0) {
          *pbVar18 = *pbVar18 | 4;
          if (local_108[0] == 0x61) {
            *pbVar18 = *pbVar18 | 8;
          }
          local_9c = *(int *)(pbVar18 + 9);
          local_98 = *(int *)(pbVar18 + 0xd);
          local_94 = *(int *)(pbVar18 + 0x11);
          local_a0 = local_108[0];
          local_90 = local_f8;
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
          local_4c[0] = local_4c[0] + -1;
          FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
        }
        if (local_4c[0] == 0) break;
switchD_004b38f0_caseD_3a:
        iVar6 = FUN_006b1190(param_2[3],local_108);
      }
    }
    piVar11 = (int *)(&DAT_007f580a + param_1 * 0xa62);
    if (*piVar11 != 0) {
      *(undefined4 *)(*piVar11 + 4) = 0;
      iVar6 = FUN_006b1190(*piVar11,&local_58);
      while (iVar6 != 0) {
        thunk_FUN_004162b0(local_58,local_7c,local_8c,local_a8);
        local_88 = -1;
        puVar7[1] = 0;
        pbVar19 = (byte *)0x0;
        while( true ) {
          uVar16 = puVar7[1];
          if (uVar16 < puVar7[3]) {
            pbVar18 = (byte *)(puVar7[2] * uVar16 + puVar7[7]);
            puVar7[1] = uVar16 + 1;
          }
          else {
            pbVar18 = (byte *)0x0;
          }
          if (pbVar18 == (byte *)0x0) break;
          if ((((*pbVar18 & 6) != 0) && ((*pbVar18 & 0x18) == 0)) &&
             ((iVar6 = FUN_006aced8((int)local_7c[0],(int)local_8c[0],*(int *)(pbVar18 + 9),
                                    *(int *)(pbVar18 + 0xd)), pbVar19 == (byte *)0x0 ||
              (iVar6 < local_88)))) {
            pbVar19 = pbVar18;
            local_88 = iVar6;
          }
        }
        if (pbVar19 != (byte *)0x0) {
          if (local_88 < 0xf) {
            *pbVar19 = *pbVar19 | 0x10;
          }
          else if ((*(int *)(pbVar19 + 0x19) < 0) || (local_88 < *(int *)(pbVar19 + 0x19))) {
            *(int *)(pbVar19 + 0x19) = local_88;
          }
        }
        iVar6 = FUN_006b1190(*piVar11,&local_58);
      }
    }
    if (local_4c[1] != 0) {
      uVar16 = 0;
      if (0 < (int)puVar7[3]) {
        do {
          FUN_006acc70((int)puVar7,uVar16,(undefined4 *)&local_2ec);
          if (((local_2ec & 0x18) == 0) && (((local_2ec & 1) == 0 || ((local_2ec & 4) != 0)))) {
            uVar16 = uVar16 + 1;
          }
          else {
            FUN_006b0c70((int)puVar7,uVar16);
          }
        } while ((int)uVar16 < (int)puVar7[3]);
      }
      uVar16 = puVar7[3];
      if (local_4c[1] < (int)uVar16) {
        do {
          local_50 = 0;
          puVar17 = puVar7;
          uVar13 = 0;
          if (uVar16 != 1 && -1 < (int)(uVar16 - 1)) {
            do {
              puVar7 = local_a4;
              if (uVar13 < uVar16) {
                pbVar19 = (byte *)(puVar17[2] * uVar13 + puVar17[7]);
              }
              else {
                pbVar19 = (byte *)0x0;
              }
              uVar1 = uVar13 + 1;
              if (uVar1 < uVar16) {
                pbVar18 = (byte *)(puVar17[2] * uVar1 + puVar17[7]);
              }
              else {
                pbVar18 = (byte *)0x0;
              }
              if (((*pbVar18 & 0x20) < (*pbVar19 & 0x20)) ||
                 ((((*pbVar19 ^ *pbVar18) & 0x20) == 0 &&
                  (*(int *)(pbVar18 + 0x15) < *(int *)(pbVar19 + 0x15))))) {
                FUN_006b0cd0((int)local_a4,uVar13,uVar1);
                local_50 = 1;
              }
              uVar16 = puVar7[3];
              puVar17 = puVar7;
              uVar13 = uVar1;
            } while ((int)uVar1 < (int)(uVar16 - 1));
          }
        } while (local_50 != 0);
      }
      puVar7[1] = 0;
      iVar6 = thunk_FUN_004406c0(bVar24);
      local_134 = (-(uint)((char)iVar6 != '\x03') & 0xffffffdb) + 0x60;
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar6 = FUN_006b1190(param_2[3],local_108);
      while (-1 < iVar6) {
        if (local_108[0] == local_134) {
          uVar16 = puVar7[1];
          if (uVar16 < puVar7[3]) {
            pbVar19 = (byte *)(puVar7[2] * uVar16 + puVar7[7]);
            puVar7[1] = uVar16 + 1;
          }
          else {
            pbVar19 = (byte *)0x0;
          }
          if (pbVar19 == (byte *)0x0) break;
          local_11c = *(int *)(pbVar19 + 9);
          local_138 = *(int *)(pbVar19 + 0xd);
          local_254[0] = *(int *)(pbVar19 + 0x11);
          iVar6 = thunk_FUN_004b1120(param_1,local_134,&local_11c,&local_138,local_254,0,1);
          if ((iVar6 != 0) &&
             ((*(int *)(pbVar19 + 0x19) < 0 ||
              (iVar6 = FUN_006aced8(local_11c,local_138,*(int *)(pbVar19 + 9),
                                    *(int *)(pbVar19 + 0xd)), iVar6 < *(int *)(pbVar19 + 0x19))))) {
            *pbVar19 = *pbVar19 | 0x10;
            local_a0 = local_108[0];
            local_90 = local_f8;
            local_9c = local_11c;
            local_98 = local_138;
            local_94 = local_254[0];
            Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
            local_4c[1] = local_4c[1] + -1;
            FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
          }
          if (local_4c[1] == 0) break;
        }
        iVar6 = FUN_006b1190(param_2[3],local_108);
      }
    }
    FUN_006ae110((byte *)puVar7);
  }
  iVar6 = 0;
LAB_004b3d9a:
  if (10 < iVar6) {
LAB_004b60cd:
    if (local_20 != (uint *)0x0) {
      FUN_006ae110((byte *)local_20);
    }
    piVar11 = local_24c;
    iVar6 = 0x42;
    do {
      if ((byte *)*piVar11 != (byte *)0x0) {
        FUN_006ae110((byte *)*piVar11);
      }
      piVar11 = piVar11 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    g_currentExceptionFrame = local_2c0.previous;
    ExceptionList = local_14;
    return 0;
  }
  if (local_4c[iVar6] == 0) {
    iVar6 = iVar6 + 1;
    goto LAB_004b3d9a;
  }
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  puVar21 = (undefined4 *)&stack0xfffffc94;
  for (uVar16 = ((int)DAT_007fb244 * (int)DAT_007fb246 & 0x7fffffffU) >> 1; uVar16 != 0;
      uVar16 = uVar16 - 1) {
    *puVar21 = 0xffffffff;
    puVar21 = puVar21 + 1;
  }
  for (uVar16 = (int)DAT_007fb244 * (int)DAT_007fb246 * 2 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined1 *)puVar21 = 0xff;
    puVar21 = (undefined4 *)((int)puVar21 + 1);
  }
  local_27c = &stack0xfffffc94;
  iVar6 = local_144;
  iVar20 = local_140;
  iVar15 = local_13c;
  local_1c = &stack0xfffffc94;
  if (local_4c[2] != 0) {
    local_27c = &stack0xfffffc94;
    local_1c = &stack0xfffffc94;
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    local_22c = puVar7;
    if ((DAT_007fa16c != 0) && (uVar16 = 0, 0 < *(int *)(DAT_007fa16c + 0xc))) {
      do {
        FUN_006acc70(DAT_007fa16c,uVar16,&local_58);
        thunk_FUN_004162b0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0(puVar7,&local_144);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(DAT_007fa16c + 0xc));
    }
    iVar9 = param_2[5];
    iVar6 = local_144;
    iVar20 = local_140;
    iVar15 = local_13c;
    if ((iVar9 != 0) && (*(int *)(iVar9 + 0xc) != 0)) {
      *(undefined4 *)(iVar9 + 4) = 0;
      iVar9 = FUN_006b1190(param_2[5],&local_a0);
      iVar6 = local_144;
      iVar20 = local_140;
      iVar15 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar9) {
        if (local_a0 == 0x3a) {
          Library::DKW::TBL::FUN_006ae1c0(puVar7,&local_144);
          iVar6 = local_144;
          iVar20 = local_140;
          iVar15 = local_13c;
        }
        local_13c = iVar15;
        local_140 = iVar20;
        local_144 = iVar6;
        iVar9 = FUN_006b1190(param_2[5],&local_a0);
        iVar6 = local_144;
        iVar20 = local_140;
        iVar15 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar15;
  local_140 = iVar20;
  local_144 = iVar6;
  iVar6 = local_144;
  iVar20 = local_140;
  iVar15 = local_13c;
  if (local_4c[3] != 0) {
    local_184 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    iVar6 = *(int *)(&DAT_007f57f6 + param_1 * 0xa62);
    if ((iVar6 != 0) && (uVar16 = 0, 0 < *(int *)(iVar6 + 0xc))) {
      do {
        FUN_006acc70(iVar6,uVar16,&local_58);
        thunk_FUN_004162b0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0(local_184,&local_144);
        uVar16 = uVar16 + 1;
        iVar6 = *(int *)(&DAT_007f57f6 + param_1 * 0xa62);
      } while ((int)uVar16 < *(int *)(iVar6 + 0xc));
    }
    iVar9 = param_2[5];
    iVar6 = local_144;
    iVar20 = local_140;
    iVar15 = local_13c;
    if ((iVar9 != 0) && (*(int *)(iVar9 + 0xc) != 0)) {
      *(undefined4 *)(iVar9 + 4) = 0;
      iVar9 = FUN_006b1190(param_2[5],&local_a0);
      iVar6 = local_144;
      iVar20 = local_140;
      iVar15 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar9) {
        if (local_a0 == 100) {
          Library::DKW::TBL::FUN_006ae1c0(local_184,&local_144);
          iVar6 = local_144;
          iVar20 = local_140;
          iVar15 = local_13c;
        }
        local_13c = iVar15;
        local_140 = iVar20;
        local_144 = iVar6;
        iVar9 = FUN_006b1190(param_2[5],&local_a0);
        iVar6 = local_144;
        iVar20 = local_140;
        iVar15 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar15;
  local_140 = iVar20;
  local_144 = iVar6;
  local_54 = local_4c[10] + local_4c[8] + local_4c[9] + local_4c[7] + local_4c[4] + 5 + local_4c[6];
  local_20 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x30,10);
  local_64 = 0;
  local_114 = 0;
LAB_004b40f9:
  do {
    sVar12 = (short)_DAT_007fb240;
    if ((short)_DAT_007fb240 <= DAT_007fb242) {
      sVar12 = DAT_007fb242;
    }
    if (sVar12 <= local_64) {
LAB_004b4689:
      *(undefined4 *)(param_2[5] + 4) = 0;
      iVar10 = FUN_006b1190(param_2[5],&local_a0);
      puVar22 = local_27c;
      iVar6 = local_a0;
      iVar20 = local_9c;
      iVar15 = local_98;
      iVar9 = local_94;
      while (local_27c = puVar22, local_a0 = iVar6, local_9c = iVar20, local_98 = iVar15,
            local_94 = iVar9, -1 < iVar10) {
        if (*(int *)(&DAT_00791d68 + iVar6 * 4) == 1) {
          uVar16 = 0;
          do {
            uVar13 = uVar16 & 0x80000001;
            if ((int)uVar13 < 0) {
              uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
            }
            iVar10 = (int)uVar16 / 2 + iVar15;
            *(ushort *)
             (puVar22 + (DAT_007fb240 * iVar10 + uVar13 + iVar20 + DAT_007fb246 * iVar9) * 2) =
                 *(ushort *)(&DAT_00790888 + iVar6 * 4) | 0x200;
            uVar16 = uVar16 + 1;
            local_138 = iVar10;
            local_11c = uVar13 + iVar20;
          } while ((int)uVar16 < 4);
        }
        else {
          *(ushort *)(puVar22 + (DAT_007fb246 * iVar9 + iVar20 + DAT_007fb240 * iVar15) * 2) =
               *(ushort *)(&DAT_00790888 + iVar6 * 4) | 0x200;
          local_138 = iVar15;
          local_11c = iVar20;
        }
        local_254[0] = iVar9;
        iVar10 = FUN_006b1190(param_2[5],&local_a0);
        puVar22 = local_27c;
        iVar6 = local_a0;
        iVar20 = local_9c;
        iVar15 = local_98;
        iVar9 = local_94;
      }
      iVar20 = 0;
      *(undefined4 *)(DAT_007fa150 + 4) = 0;
      iVar6 = FUN_006b1190(DAT_007fa150,&local_58);
      puVar22 = local_27c;
      while (-1 < iVar6) {
        if (local_58 != (int *)0x0) {
          thunk_FUN_004162b0(local_58,local_7c,local_8c,local_a8);
          iVar6 = (int)local_8c[0] * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)local_a8[0] +
                  (int)local_7c[0];
          sVar12 = *(short *)(puVar22 + iVar6 * 2);
          if ((sVar12 == 0) || (sVar12 == -1)) {
            *(undefined2 *)(puVar22 + iVar6 * 2) = 0x80;
          }
        }
        iVar6 = FUN_006b1190(DAT_007fa150,&local_58);
      }
      if ((local_4c[4] != 0) || (local_4c[5] != 0)) {
        *(undefined4 *)(param_2[3] + 4) = 0;
        iVar6 = FUN_006b1190(param_2[3],local_108);
        while (-1 < iVar6) {
          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 4) {
            piVar11 = local_f4;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar11 = 0;
              piVar11 = piVar11 + 1;
            }
            local_f4[0] = 0;
            Library::DKW::TBL::FUN_006ae1c0(local_20,local_f4);
          }
          iVar6 = FUN_006b1190(param_2[3],local_108);
        }
      }
      local_5c = 0;
      local_26c = 0;
      local_274 = 0;
      local_60 = 0;
      while( true ) {
        local_64 = iVar20;
        sVar12 = (short)_DAT_007fb240;
        if ((short)_DAT_007fb240 <= DAT_007fb242) {
          sVar12 = DAT_007fb242;
        }
        if (sVar12 <= iVar20) break;
LAB_004b48cc:
        for (local_74 = 0; local_74 < local_64 * 8; local_74 = local_74 + 1) {
          if (local_74 < local_64 * 2) {
            local_11c = (*param_2 - local_64) + local_74;
            local_138 = param_2[1] - local_64;
LAB_004b4958:
          }
          else {
            if (local_64 * 4 <= local_74) {
              if (local_74 < local_64 * 6) {
                local_11c = (local_64 * 5 - local_74) + *param_2;
                local_138 = param_2[1] + local_64;
              }
              else {
                local_11c = *param_2 - local_64;
                local_138 = (local_64 * 7 + param_2[1]) - local_74;
              }
              goto LAB_004b4958;
            }
            local_11c = local_64 + *param_2;
            local_138 = param_2[1] + local_64 * -3 + local_74;
          }
          if ((((-1 < local_11c) && (local_11c < DAT_007fb240)) && (-1 < local_138)) &&
             (local_138 < DAT_007fb242)) {
            local_254[0] = 0;
            if (DAT_007fb244 != 1 && -1 < DAT_007fb244 + -1) {
LAB_004b49b4:
              iVar15 = (int)DAT_007fb246;
              iVar9 = iVar15 * local_254[0];
              iVar6 = DAT_007fb240 * local_138;
              iVar20 = iVar6 + iVar9 + local_11c;
              if (*(short *)(local_27c + iVar20 * 2) != -1) {
                if ((*(short *)(local_27c + iVar20 * 2) == 0) &&
                   (*(short *)(local_27c + ((local_254[0] + 1) * iVar15 + iVar6 + local_11c) * 2) ==
                    0)) {
                  local_124 = 0;
                  if ((local_10c != 0) &&
                     (local_118 = iVar20 + 1, *(short *)(local_27c + local_118 * 2) == 0)) {
                    iVar20 = (local_138 + 1) * (int)DAT_007fb240 + iVar9 + local_11c;
                    local_118 = iVar20;
                    if ((*(short *)(local_27c + iVar20 * 2) == 0) &&
                       (local_118 = iVar20 + 1, *(short *)(local_27c + (iVar20 + 1) * 2) == 0)) {
                      local_124 = 1;
                    }
                  }
                  if (local_254[0] < 1) {
                    bVar23 = true;
                  }
                  else {
                    iVar15 = (local_254[0] + -1) * iVar15;
                    iVar6 = iVar15 + iVar6 + local_11c;
                    local_118 = iVar6;
                    bVar23 = *(short *)(local_27c + iVar6 * 2) == 0x20;
                    if (!bVar23) goto LAB_004b5fb6;
                    if ((local_10c != 0) && (local_124 != 0)) {
                      local_124 = 0;
                      local_118 = iVar6 + 1;
                      if (*(short *)(local_27c + (iVar6 + 1) * 2) == 0x20) {
                        iVar6 = (local_138 + 1) * (int)DAT_007fb240 + iVar15 + local_11c;
                        local_118 = iVar6;
                        if ((*(short *)(local_27c + iVar6 * 2) == 0x20) &&
                           (local_118 = iVar6 + 1, *(short *)(local_27c + (iVar6 + 1) * 2) == 0x20))
                        {
                          local_124 = 1;
                        }
                      }
                    }
                  }
                  iVar6 = local_118;
                  if (bVar23) {
                    local_80 = 1;
                    iVar20 = 0;
                    do {
                      if (iVar20 != 4) {
                        iVar15 = iVar20 / 3 + -1 + local_138;
                        iVar10 = iVar20 % 3 + -1 + local_11c;
                        if ((((-1 < iVar15) && (iVar15 < DAT_007fb242)) && (-1 < iVar10)) &&
                           (((iVar10 < DAT_007fb240 &&
                             (sVar12 = *(short *)(local_27c +
                                                 (iVar15 * DAT_007fb240 + iVar10 + iVar9) * 2),
                             sVar12 != 0)) && ((sVar12 != 0x10 && (sVar12 != 0x20)))))) {
                          bVar23 = false;
                          goto LAB_004b4bd1;
                        }
                      }
                      iVar20 = iVar20 + 1;
                    } while (iVar20 < 9);
                    bVar23 = true;
LAB_004b4bd1:
                    if (bVar23) {
                      iVar20 = thunk_FUN_004406c0(bVar24);
                      puVar17 = local_184;
                      puVar7 = local_22c;
                      local_270 = 0;
                      if ((char)iVar20 == '\x03') {
                        if (local_4c[3] != 0) {
                          if ((local_184 == (uint *)0x0) || (local_184[3] == 0)) {
                            local_270 = 1;
                          }
                          else {
                            local_270 = 1;
                            uVar16 = 0;
                            if (0 < (int)local_184[3]) {
                              do {
                                FUN_006acc70((int)puVar17,uVar16,&local_144);
                                uVar13 = local_144 - local_11c >> 0x1f;
                                if (((int)((local_144 - local_11c ^ uVar13) - uVar13) < 0x10) ||
                                   (uVar13 = local_140 - local_138 >> 0x1f,
                                   (int)((local_140 - local_138 ^ uVar13) - uVar13) < 0x10)) {
                                  local_270 = 0;
                                  break;
                                }
                                uVar16 = uVar16 + 1;
                              } while ((int)uVar16 < (int)puVar17[3]);
                            }
                          }
                        }
                      }
                      else if (local_4c[2] != 0) {
                        if ((local_22c != (uint *)0x0) && (local_22c[3] != 0)) {
                          iVar20 = -1;
                          uVar16 = 0;
                          if (0 < (int)local_22c[3]) {
                            do {
                              FUN_006acc70((int)puVar7,uVar16,&local_144);
                              iVar6 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                              if ((iVar20 < 0) || (iVar6 < iVar20)) {
                                iVar20 = iVar6;
                              }
                              uVar16 = uVar16 + 1;
                            } while ((int)uVar16 < (int)puVar7[3]);
                          }
                          if ((-1 < iVar20) && (iVar6 = local_118, iVar20 < 0xe)) goto LAB_004b4c78;
                        }
                        local_270 = 1;
                        iVar6 = local_118;
                      }
LAB_004b4c78:
                      if (((local_270 == 0) ||
                          (iVar20 = thunk_FUN_004406c0(bVar24), (char)iVar20 == '\x03')) &&
                         (local_10c != 0)) {
                        if (local_124 != 0) {
                          uVar16 = 0;
                          do {
                            if (((uVar16 != 4) && (uVar16 != 5)) && ((uVar16 != 8 && (uVar16 != 9)))
                               ) {
                              iVar20 = ((int)(uVar16 + ((int)uVar16 >> 0x1f & 3U)) >> 2) + -1 +
                                       local_138;
                              uVar13 = uVar16 & 0x80000003;
                              if ((int)uVar13 < 0) {
                                uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
                              }
                              iVar15 = (uVar13 - 1) + local_11c;
                              if (((-1 < iVar20) && (iVar20 < DAT_007fb242)) && (-1 < iVar15)) {
                                if ((((iVar15 < DAT_007fb240) &&
                                     (sVar12 = *(short *)(local_27c +
                                                         (iVar20 * DAT_007fb240 +
                                                         iVar15 + DAT_007fb246 * local_254[0]) * 2),
                                     sVar12 != 0)) && (sVar12 != 0x10)) && (sVar12 != 0x20)) {
                                  local_124 = 0;
                                  break;
                                }
                              }
                            }
                            uVar16 = uVar16 + 1;
                          } while ((int)uVar16 < 0x10);
                          goto LAB_004b4e09;
                        }
LAB_004b4f55:
                        uVar16 = 0;
                      }
                      else {
LAB_004b4e09:
                        if ((local_124 == 0) || (local_4c[4] == 0)) goto LAB_004b4f55;
                        iVar20 = 0;
                        local_12c = 0;
                        do {
                          iVar15 = iVar20 / 6;
                          if (((iVar15 == 0) || (iVar15 == 5)) ||
                             ((iVar20 % 6 == 0 || (iVar20 % 6 == 5)))) {
                            iVar15 = iVar15 + -2 + local_138;
                            iVar9 = iVar20 % 6 + -2 + local_11c;
                            if (((-1 < iVar15) && (iVar15 < DAT_007fb242)) && (-1 < iVar9)) {
                              if (iVar9 < DAT_007fb240) {
                                iVar15 = iVar15 * DAT_007fb240;
                                iVar10 = DAT_007fb246 * local_254[0] + iVar15 + iVar9;
                                if (0 < local_254[0]) {
                                  iVar6 = (local_254[0] + -1) * (int)DAT_007fb246 + iVar15 + iVar9;
                                  local_118 = iVar6;
                                }
                                if ((*(short *)(local_27c + iVar10 * 2) == 0) &&
                                   ((local_254[0] == 0 ||
                                    (*(short *)(local_27c + iVar6 * 2) == 0x20)))) {
LAB_004b4f35:
                                  local_12c = local_12c + 1;
                                }
                                else if (*(short *)(local_27c + iVar10 * 2) == 0x205) {
                                  local_58 = *(int **)(DAT_007fb248 + iVar10 * 8);
                                  if (((local_58 != (int *)0x0) &&
                                      (iVar15 = (**(code **)(*local_58 + 0x2c))(), 0x53 < iVar15))
                                     && ((iVar15 = (**(code **)(*local_58 + 0x2c))(), iVar15 < 0x5b
                                         && (*(int *)((int)local_58 + 0x5d3) == 0))))
                                  goto LAB_004b4f35;
                                }
                              }
                            }
                          }
                          iVar20 = iVar20 + 1;
                        } while (iVar20 < 0x24);
                        uVar16 = (uint)(6 < local_12c);
                      }
                      local_268 = uVar16;
                      if ((local_4c[4] == 0) || (uVar16 != 0)) {
                        if ((local_124 == 0) || (local_10c == 0)) {
                          iVar6 = 0;
                        }
                        else {
                          iVar6 = 1;
                        }
                        *(undefined4 *)(param_2[3] + 4) = 0;
                        local_ac = iVar6;
                        iVar20 = FUN_006b1190(param_2[3],local_108);
                        puVar7 = local_20;
                        while (local_20 = puVar7, -1 < iVar20) {
                          iVar20 = *(int *)(&DAT_00790888 + local_108[0] * 4);
                          if (iVar20 == 4) {
                            if ((uVar16 == 0) ||
                               (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar6))
                            goto LAB_004b5648;
                            local_a0 = local_108[0];
                            local_9c = local_11c;
                            local_98 = local_138;
                            local_94 = local_254[0];
                            local_90 = local_f8;
                            Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                            FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
                            puVar7[1] = 0;
                            goto LAB_004b56e4;
                          }
                          if (local_4c[4] != 0) goto LAB_004b5648;
                          if (((iVar20 == 1) || (iVar20 == 6)) || ((iVar20 == 2 || (iVar20 == 3))))
                          {
                            iVar20 = thunk_FUN_004406c0(bVar24);
                            iVar20 = (-(uint)((char)iVar20 != '\x03') & 0xffffffd6) + 100;
                            if (local_270 == 0) {
                              if (local_108[0] == iVar20) goto LAB_004b5648;
LAB_004b5614:
                              if (((local_270 != 0) &&
                                  (iVar20 = thunk_FUN_004406c0(bVar24), (char)iVar20 != '\x03')) ||
                                 (*(int *)(&DAT_00791d68 + local_108[0] * 4) == iVar6)) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
                                if (local_108[0] == 0x3a) {
                                  local_4c[2] = local_4c[2] + -1;
                                  local_144 = local_11c;
                                  local_140 = local_138;
                                  local_13c = local_254[0];
                                  Library::DKW::TBL::FUN_006ae1c0(local_22c,&local_144);
                                }
                                else if (local_108[0] == 100) {
                                  local_4c[3] = local_4c[3] + -1;
                                  local_144 = local_11c;
                                  local_140 = local_138;
                                  local_13c = local_254[0];
                                  Library::DKW::TBL::FUN_006ae1c0(local_184,&local_144);
                                }
                                else if ((*(int *)(&DAT_00790888 + local_108[0] * 4) == 1) &&
                                        (local_4c[1] != 0)) {
                                  local_4c[1] = local_4c[1] + -1;
                                }
                                else {
                                  local_4c[6] = local_4c[6] + -1;
                                }
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                  local_10c = local_10c + -1;
                                  uVar16 = 0;
                                  do {
                                    uVar13 = uVar16 & 0x80000001;
                                    if ((int)uVar13 < 0) {
                                      uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar13 + DAT_007fb246 * local_254[0] + local_11c +
                                               ((int)uVar16 / 2 + local_138) * (int)DAT_007fb240) *
                                     2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar16 = uVar16 + 1;
                                  } while ((int)uVar16 < 4);
                                  break;
                                }
LAB_004b5f7b:
                                *(ushort *)
                                 (local_27c +
                                 (DAT_007fb240 * local_138 + local_11c + DAT_007fb246 * local_254[0]
                                 ) * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                break;
                              }
                            }
                            else if (local_108[0] == iVar20) goto LAB_004b5614;
                          }
                          else {
                            if ((local_4c[6] != 0) || (local_4c[1] != 0)) goto LAB_004b5648;
                            if (local_60 == 0) {
                              local_64 = local_64 + -5;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_60 = 1;
                              goto LAB_004b48cc;
                            }
                            if (iVar20 == 7) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar6)
                              goto LAB_004b5648;
                              iVar6 = aiStack_314[local_108[0]];
                              if ((iVar6 == 0) || (*(int *)(iVar6 + 0xc) == 0)) {
LAB_004b50f4:
                                bVar23 = true;
                              }
                              else {
                                bVar23 = false;
                                iVar20 = -1;
                                uVar16 = 0;
                                if (0 < *(int *)(iVar6 + 0xc)) {
                                  do {
                                    FUN_006acc70(iVar6,uVar16,&local_144);
                                    iVar6 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar20 < 0) || (iVar6 < iVar20)) {
                                      iVar20 = iVar6;
                                    }
                                    uVar16 = uVar16 + 1;
                                    iVar6 = aiStack_314[local_108[0]];
                                  } while ((int)uVar16 < *(int *)(iVar6 + 0xc));
                                }
                                if ((iVar20 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar20)) goto LAB_004b50f4;
                              }
                              if (!bVar23) goto LAB_004b5101;
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              local_a0 = local_108[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                              FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
                              piVar11 = aiStack_314 + local_108[0];
                              if (*piVar11 == 0) {
                                piVar11 = aiStack_314 + local_108[0];
                                puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                *piVar11 = (int)puVar7;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar11,&local_144);
                              local_4c[7] = local_4c[7] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar16 = 0;
                              do {
                                uVar13 = uVar16 & 0x80000001;
                                if ((int)uVar13 < 0) {
                                  uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar13 + DAT_007fb246 * local_254[0] + local_11c +
                                           ((int)uVar16 / 2 + local_138) * (int)DAT_007fb240) * 2) =
                                     *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar16 = uVar16 + 1;
                              } while ((int)uVar16 < 4);
                              break;
                            }
LAB_004b5101:
                            if (local_4c[7] != 0) goto LAB_004b5648;
                            if (local_274 == 0) {
                              local_64 = local_64 + -2;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_274 = 1;
                              goto LAB_004b48cc;
                            }
                            if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 8) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != local_ac)
                              goto LAB_004b5648;
                              iVar6 = aiStack_314[local_108[0]];
                              if ((iVar6 == 0) || (*(int *)(iVar6 + 0xc) == 0)) {
LAB_004b51da:
                                bVar23 = true;
                              }
                              else {
                                bVar23 = false;
                                iVar20 = -1;
                                uVar16 = 0;
                                if (0 < *(int *)(iVar6 + 0xc)) {
                                  do {
                                    FUN_006acc70(iVar6,uVar16,&local_144);
                                    iVar6 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar20 < 0) || (iVar6 < iVar20)) {
                                      iVar20 = iVar6;
                                    }
                                    uVar16 = uVar16 + 1;
                                    iVar6 = aiStack_314[local_108[0]];
                                  } while ((int)uVar16 < *(int *)(iVar6 + 0xc));
                                }
                                if ((iVar20 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar20)) goto LAB_004b51da;
                              }
                              if (bVar23) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
                                piVar11 = aiStack_314 + local_108[0];
                                if (*piVar11 == 0) {
                                  piVar11 = aiStack_314 + local_108[0];
                                  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar11 = (int)puVar7;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar11,&local_144);
                                local_4c[8] = local_4c[8] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar16 = 0;
                                do {
                                  uVar13 = uVar16 & 0x80000001;
                                  if ((int)uVar13 < 0) {
                                    uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar13 + DAT_007fb246 * local_254[0] + local_11c +
                                             ((int)uVar16 / 2 + local_138) * (int)DAT_007fb240) * 2)
                                       = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar16 = uVar16 + 1;
                                } while ((int)uVar16 < 4);
                                break;
                              }
                            }
                            if (local_4c[8] != 0) goto LAB_004b5648;
                            if (local_26c == 0) {
                              local_64 = local_64 + -2;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_26c = 1;
                              goto LAB_004b48cc;
                            }
                            if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 9) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != local_ac)
                              goto LAB_004b5648;
                              iVar6 = aiStack_314[local_108[0]];
                              if ((iVar6 == 0) || (*(int *)(iVar6 + 0xc) == 0)) {
LAB_004b52b6:
                                bVar23 = true;
                              }
                              else {
                                bVar23 = false;
                                iVar20 = -1;
                                uVar16 = 0;
                                if (0 < *(int *)(iVar6 + 0xc)) {
                                  do {
                                    FUN_006acc70(iVar6,uVar16,&local_144);
                                    iVar6 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar20 < 0) || (iVar6 < iVar20)) {
                                      iVar20 = iVar6;
                                    }
                                    uVar16 = uVar16 + 1;
                                    iVar6 = aiStack_314[local_108[0]];
                                  } while ((int)uVar16 < *(int *)(iVar6 + 0xc));
                                }
                                if ((local_108[0] == 0x69) || (local_108[0] == 0x6a)) {
                                  iVar6 = 10;
                                }
                                else {
                                  iVar6 = 0;
                                }
                                if ((iVar20 < 0) || ((int)((uint)(iVar6 * 3) / 2) < iVar20))
                                goto LAB_004b52b6;
                              }
                              if (bVar23) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
                                piVar11 = aiStack_314 + local_108[0];
                                if (*piVar11 == 0) {
                                  piVar11 = aiStack_314 + local_108[0];
                                  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar11 = (int)puVar7;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar11,&local_144);
                                local_4c[9] = local_4c[9] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar16 = 0;
                                do {
                                  uVar13 = uVar16 & 0x80000001;
                                  if ((int)uVar13 < 0) {
                                    uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar13 + DAT_007fb246 * local_254[0] + local_11c +
                                             ((int)uVar16 / 2 + local_138) * (int)DAT_007fb240) * 2)
                                       = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar16 = uVar16 + 1;
                                } while ((int)uVar16 < 4);
                                break;
                              }
                            }
                            if (local_4c[9] != 0) goto LAB_004b5648;
                            if (local_5c == 0) {
                              local_64 = local_64 + -1;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_5c = 1;
                              goto LAB_004b48cc;
                            }
                            if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 10) {
                              local_128 = 0;
                              iVar20 = -1;
                              local_354 = 0;
                              iVar6 = local_108[0];
                              do {
                                if (((*(int *)(&DAT_00790950 + local_354) == 10) &&
                                    (iVar15 = *(int *)((int)local_24c + local_354), iVar15 != 0)) &&
                                   (uVar16 = 0, 0 < *(int *)(iVar15 + 0xc))) {
                                  do {
                                    FUN_006acc70(iVar15,uVar16,&local_144);
                                    iVar6 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar20 < 0) || (iVar6 < iVar20)) {
                                      iVar20 = iVar6;
                                    }
                                    uVar16 = uVar16 + 1;
                                    iVar6 = local_108[0];
                                  } while ((int)uVar16 < *(int *)(iVar15 + 0xc));
                                }
                                local_354 = local_354 + 4;
                              } while (local_354 < 0x108);
                              local_78 = thunk_FUN_004e81b0(param_1,iVar6 + -0x32,0);
                              puVar22 = local_27c;
                              if ((iVar20 < 0) || (uVar16 = local_128, local_78 < iVar20)) {
                                local_258 = 0;
                                local_264 = 0;
                                local_260 = 0;
                                local_25c = 0;
                                local_12c = 0;
                                local_120 = 1;
                                if (local_78 < 1) {
                                  uVar16 = (uint)(local_78 * 2 < 1);
                                }
                                else {
                                  local_35c = local_138;
                                  local_358 = local_138;
                                  do {
                                    local_358 = local_358 + 1;
                                    local_35c = local_35c + -1;
                                    if ((local_264 == 0) &&
                                       ((local_11c - local_138) + local_358 < DAT_007fb240 + -1)) {
                                      if (*(short *)(local_27c +
                                                    (DAT_007fb240 * local_138 +
                                                     local_11c + DAT_007fb246 * local_254[0] +
                                                    local_120) * 2) == 0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_264 = 1;
                                      }
                                    }
                                    if ((local_260 == 0) &&
                                       (0 < (local_11c - local_138) + local_358)) {
                                      if (*(short *)(local_27c +
                                                    (((DAT_007fb246 * local_254[0] +
                                                      DAT_007fb240 * local_138) - local_120) +
                                                    local_11c) * 2) == 0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_260 = 1;
                                      }
                                    }
                                    if ((local_25c == 0) && (local_358 < DAT_007fb242 + -1)) {
                                      if (*(short *)(local_27c +
                                                    (DAT_007fb246 * local_254[0] +
                                                    local_11c + DAT_007fb240 * local_358) * 2) == 0)
                                      {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_25c = 1;
                                      }
                                    }
                                    if ((local_258 == 0) && (0 < local_358)) {
                                      if (*(short *)(local_27c +
                                                    (DAT_007fb246 * local_254[0] +
                                                    local_11c + DAT_007fb240 * local_35c) * 2) == 0)
                                      {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_258 = 1;
                                      }
                                    }
                                    local_120 = local_120 + 1;
                                  } while (local_120 <= local_78);
                                  uVar16 = (uint)(local_78 * 2 <= local_12c);
                                }
                              }
                              if (uVar16 != 0) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70(param_2[3],*(int *)(param_2[3] + 4) - 1);
                                piVar11 = aiStack_314 + local_108[0];
                                if (*piVar11 == 0) {
                                  piVar11 = aiStack_314 + local_108[0];
                                  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar11 = (int)puVar7;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar11,&local_144);
                                local_4c[10] = local_4c[10] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                  local_10c = local_10c + -1;
                                  uVar16 = 0;
                                  do {
                                    uVar13 = uVar16 & 0x80000001;
                                    if ((int)uVar13 < 0) {
                                      uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar13 + DAT_007fb246 * local_254[0] + local_11c +
                                               ((int)uVar16 / 2 + local_138) * (int)DAT_007fb240) *
                                     2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar16 = uVar16 + 1;
                                  } while ((int)uVar16 < 4);
                                }
                                else {
                                  *(ushort *)
                                   (puVar22 +
                                   (DAT_007fb240 * local_138 +
                                   local_11c + DAT_007fb246 * local_254[0]) * 2) =
                                       *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                }
                                break;
                              }
                            }
                          }
LAB_004b5648:
                          iVar20 = FUN_006b1190(param_2[3],local_108);
                          iVar6 = local_ac;
                          uVar16 = local_268;
                          puVar7 = local_20;
                        }
                      }
                    }
                  }
                }
                goto LAB_004b5fb6;
              }
              local_114 = local_54;
              local_64 = local_54;
              local_54 = local_54 * 2;
              goto LAB_004b40f9;
            }
LAB_004b5fd6:
            if ((((((local_4c[1] == 0) && (local_4c[6] == 0)) && (local_4c[2] == 0)) &&
                 ((local_4c[3] == 0 && (local_4c[7] == 0)))) && (local_4c[8] == 0)) &&
               ((local_4c[9] == 0 && (local_4c[10] == 0)))) goto LAB_004b60cd;
          }
        }
        iVar20 = local_64 + 1;
      }
      goto LAB_004b60cd;
    }
    local_74 = 0;
    if (0 < local_64 << 3) {
      do {
        if (local_74 < local_64 * 2) {
          local_11c = (*param_2 - local_64) + local_74;
          local_138 = param_2[1] - local_64;
        }
        else if (local_74 < local_64 * 4) {
          local_11c = local_64 + *param_2;
          local_138 = param_2[1] + local_64 * -3 + local_74;
        }
        else if (local_74 < local_64 * 6) {
          local_11c = (local_64 * 5 - local_74) + *param_2;
          local_138 = param_2[1] + local_64;
        }
        else {
          local_11c = *param_2 - local_64;
          local_138 = (local_64 * 7 + param_2[1]) - local_74;
        }
        if ((((-1 < local_11c) && (local_11c < DAT_007fb240)) && (-1 < local_138)) &&
           ((local_138 < DAT_007fb242 && (local_254[0] = 0, puVar22 = local_27c, 0 < DAT_007fb244)))
           ) {
          do {
            iVar6 = DAT_007fb240 * local_138 + local_11c + DAT_007fb246 * local_254[0];
            local_58 = *(int **)(DAT_007fb248 + iVar6 * 8);
            if (local_58 == (int *)0x0) {
              sVar12 = (short)local_11c;
              if (((((sVar12 < 0) || (DAT_007fb240 <= sVar12)) ||
                   (sVar5 = (short)local_138, sVar5 < 0)) ||
                  ((DAT_007fb242 <= sVar5 || (sVar14 = (short)local_254[0], sVar14 < 0)))) ||
                 (DAT_007fb244 <= sVar14)) {
                sVar12 = -1;
              }
              else {
                sVar12 = *(short *)(DAT_007fb280 +
                                   ((int)sVar5 * (int)DAT_007fb278 + (int)sVar14 * (int)DAT_007fb27e
                                   + (int)sVar12) * 2);
              }
              if (sVar12 == 0) {
                local_58 = *(int **)(DAT_007fb248 + 4 + iVar6 * 8);
                if ((local_58 == (int *)0x0) ||
                   (((iVar20 = (**(code **)(*local_58 + 0x2c))(), iVar20 != 0xa6 &&
                     (iVar20 = (**(code **)(*local_58 + 0x2c))(), iVar20 != 0xbd)) &&
                    ((iVar20 = (**(code **)(*local_58 + 0x2c))(), iVar20 != 0xa7 &&
                     (iVar20 = (**(code **)(*local_58 + 0x2c))(), iVar20 != 0xaf)))))) {
LAB_004b432d:
                  *(undefined2 *)(puVar22 + iVar6 * 2) = 0;
                }
                else {
                  *(undefined2 *)(puVar22 + iVar6 * 2) = 0x40;
                }
              }
              else {
                if (sVar12 != -1) goto LAB_004b4634;
                *(undefined2 *)(puVar22 + iVar6 * 2) = 0x20;
              }
            }
            else {
              if (local_58[8] == 1000) {
                local_34c = (**(code **)(*local_58 + 0x2c))();
              }
              else {
                if (local_58[8] != 0x3e9) goto LAB_004b432d;
                local_34c = *(int *)((int)local_58 + 0x259);
              }
              uVar16 = local_58[9];
              if (uVar16 == param_1) {
                *(ushort *)(puVar22 + iVar6 * 2) =
                     *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x200;
                local_114 = local_64;
                iVar6 = *(int *)(&DAT_00790888 + local_34c * 4);
                if (((iVar6 == 7) || (iVar6 == 8)) || (iVar6 == 9)) {
                  thunk_FUN_004162b0(local_58,local_7c,local_8c,local_a8);
                  if (((local_7c[0] == local_11c) && (local_8c[0] == local_138)) &&
                     (local_a8[0] == local_254[0])) {
                    piVar11 = aiStack_314 + local_34c;
                    if (*piVar11 == 0) {
                      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                      *piVar11 = (int)puVar7;
                    }
                    local_144 = (int)local_7c[0];
                    local_140 = (int)local_8c[0];
                    local_13c = (int)local_a8[0];
                    Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar11,&local_144);
                  }
                }
                else if (iVar6 == 4) {
                  thunk_FUN_004162b0(local_58,local_7c,local_8c,local_a8);
                  iVar6 = (int)local_7c[0];
                  if (((iVar6 == local_11c) && (iVar20 = (int)local_8c[0], iVar20 == local_138)) &&
                     (iVar15 = (int)local_a8[0], iVar15 == local_254[0])) {
                    piVar11 = local_f4;
                    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *piVar11 = 0;
                      piVar11 = piVar11 + 1;
                    }
                    local_f4[0] = 1;
                    local_f4[1] = iVar6;
                    local_f4[2] = iVar20;
                    local_f4[3] = iVar15;
                    Library::DKW::TBL::FUN_006ae1c0(local_20,local_f4);
                    puVar22 = local_27c;
                  }
                }
              }
              else {
                if ((uVar16 < 8) &&
                   ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[uVar16 * 0x51] < 8)))) {
                  bVar2 = *(byte *)(local_58 + 9);
                  if (*(char *)(DAT_00806728 + 0x146f) == '\0') {
                    if (bVar2 == bVar24) {
                      iVar20 = 0;
                    }
                    else {
                      uVar16 = (uint)bVar2;
                      uVar13 = param_1 & 0xff;
                      cVar3 = *(char *)(uVar13 + uVar16 * 8 + 0x142f + DAT_00806728);
                      puVar22 = local_27c;
                      if ((cVar3 == '\0') &&
                         (*(char *)(uVar16 + uVar13 * 8 + 0x142f + DAT_00806728) == '\0')) {
                        iVar20 = -2;
                      }
                      else if ((cVar3 == '\x01') &&
                              (*(char *)(uVar16 + uVar13 * 8 + 0x142f + DAT_00806728) == '\0')) {
                        iVar20 = -1;
                      }
                      else if ((cVar3 == '\0') &&
                              (*(char *)(uVar16 + uVar13 * 8 + 0x142f + DAT_00806728) == '\x01')) {
                        iVar20 = 1;
                      }
                      else if ((cVar3 == '\x01') &&
                              (*(char *)(uVar16 + uVar13 * 8 + 0x142f + DAT_00806728) == '\x01')) {
                        iVar20 = 2;
                      }
                      else {
                        iVar20 = 0;
                      }
                    }
                    bVar23 = iVar20 < 0;
                  }
                  else {
                    bVar23 = *(char *)((param_1 & 0xff) * 0x51 + 0x11ca + DAT_00806728) !=
                             *(char *)((uint)bVar2 * 0x51 + 0x11ca + DAT_00806728);
                  }
                  if (bVar23) {
                    *(ushort *)(puVar22 + iVar6 * 2) =
                         *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x100;
                    goto LAB_004b463a;
                  }
                }
LAB_004b4634:
                *(undefined2 *)(puVar22 + iVar6 * 2) = 0x10;
              }
            }
LAB_004b463a:
            local_254[0] = local_254[0] + 1;
          } while (local_254[0] < DAT_007fb244);
        }
        local_74 = local_74 + 1;
      } while (local_74 < local_64 * 8);
    }
    if (local_54 < local_64 - local_114) goto LAB_004b4689;
    local_64 = local_64 + 1;
  } while( true );
  while (*piVar11 != 0) {
LAB_004b56e4:
    uVar16 = puVar7[1];
    if (uVar16 < puVar7[3]) {
      piVar11 = (int *)(puVar7[2] * uVar16 + puVar7[7]);
      puVar7[1] = uVar16 + 1;
    }
    else {
      piVar11 = (int *)0x0;
    }
    if (piVar11 == (int *)0x0) goto LAB_004b5727;
  }
  *piVar11 = 1;
  piVar11[1] = local_11c;
  piVar11[2] = local_138;
  piVar11[3] = local_254[0];
LAB_004b5727:
  iVar6 = local_4c[4] + -1;
  local_4c[4] = iVar6;
  local_10c = local_10c + -1;
  iVar20 = 0;
  do {
    iVar15 = iVar20 / 6 + -2 + local_138;
    iVar9 = iVar20 % 6 + -2 + local_11c;
    if (((-1 < iVar15) && (iVar15 < DAT_007fb242)) && (-1 < iVar9)) {
      if ((iVar9 < DAT_007fb240) &&
         (iVar15 = iVar15 * DAT_007fb240 + iVar9 + DAT_007fb246 * local_254[0],
         *(short *)(local_27c + iVar15 * 2) == 0)) {
        *(ushort *)(local_27c + iVar15 * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
      }
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 < 0x24);
  if (iVar6 == 0) {
    local_64 = 0;
    goto LAB_004b48cc;
  }
LAB_004b5fb6:
  local_254[0] = local_254[0] + 1;
  if (DAT_007fb244 + -1 <= local_254[0]) goto LAB_004b5fd6;
  goto LAB_004b49b4;
}

