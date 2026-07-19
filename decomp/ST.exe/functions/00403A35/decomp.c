
uint * __thiscall
STAllPlayersC::_AssignMDPairs
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 unaff_ESI;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  void *unaff_EDI;
  short *psVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined4 auStack_19c [17];
  short asStack_158 [3];
  int iStack_152;
  short sStack_14e;
  short sStack_14c;
  short sStack_14a;
  int iStack_148;
  int iStack_13e;
  int iStack_13a;
  InternalExceptionFrame IStack_114;
  int aiStack_d0 [6];
  uint uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  short sStack_aa;
  short sStack_a2;
  int iStack_94;
  int iStack_90;
  STAllPlayersC *pSStack_8c;
  uint uStack_88;
  int iStack_84;
  short sStack_80;
  short sStack_7e;
  undefined2 uStack_7c;
  int iStack_7a;
  int iStack_76;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short sStack_62;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint uStack_44;
  int *piStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint *puStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  STGroupC *pSStack_1c;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  int iStack_e;
  uint uStack_8;
  
  aiStack_d0[4] = 4;
  aiStack_d0[0] = 0x38;
  aiStack_d0[1] = 0x39;
  aiStack_d0[2] = 0x4f;
  aiStack_d0[3] = 0x5e;
  iStack_84 = 0;
  puStack_4c = (uint *)0x0;
  IStack_114.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_114;
  pSStack_8c = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_114.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_114.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ed,0,iVar4,
                                 &DAT_007a4ccc,s_STAllPlayersC___AssignMDPairs_007a8114);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uint *)(*pcVar1)();
        return puVar5;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ee);
    }
    return puStack_4c;
  }
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    uVar10 = *(uint *)(param_3 + 0xc);
    uStack_3c = uVar10;
    if (((uVar10 != 0) && (uStack_2c = *(uint *)(param_4 + 0xc), *(uint *)(param_4 + 0xc) != 0)) &&
       (uStack_38 = *(uint *)(param_5 + 0xc), *(uint *)(param_5 + 0xc) != 0)) goto LAB_00442f1f;
  }
  uVar10 = uStack_3c;
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x24ce);
LAB_00442f1f:
  iVar4 = 0;
  if (0 < aiStack_d0[4]) {
    piVar7 = aiStack_d0;
    do {
      if (param_2 == *piVar7) {
        iStack_84 = *(int *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iVar4 * 4);
        break;
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar4 < aiStack_d0[4]);
  }
  if ((iStack_84 == 0) || (uStack_28 = *(int *)(iStack_84 + 0xc), uStack_28 == 0)) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x24d1)
    ;
  }
  uVar9 = 0;
  if (0 < (int)uVar10) {
    do {
      FUN_006acc70(param_3,uVar9,&uStack_8);
      if ((short)uStack_8 != -1) break;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar10);
  }
  if (uVar9 == uVar10) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x24e2)
    ;
  }
  piVar7 = piStack_40;
  uVar10 = 0;
  if (0 < (int)uStack_2c) {
    do {
      FUN_006acc70(param_4,uVar10,&uStack_8);
      if ((piVar7 != (int *)0x0) && ((short)uStack_8 != -1)) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uStack_2c);
  }
  if (uVar10 == uStack_2c) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x24f4)
    ;
  }
  uVar10 = 0;
  if (0 < (int)uStack_38) {
    do {
      FUN_006acc70(param_5,uVar10,&uStack_8);
      if ((short)uStack_8 != -1) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uStack_38);
  }
  if (uVar10 == uStack_38) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2507)
    ;
  }
  puStack_34 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,0x24,1);
  uVar10 = 0;
  if (0 < (int)uStack_28) {
    do {
      FUN_006acc70(iStack_84,uVar10,(undefined4 *)&sStack_70);
      if ((sStack_6a != -1) && (sStack_62 != -1)) {
        bVar2 = false;
        uVar9 = 0;
        if (0 < (int)uStack_3c) {
          do {
            FUN_006acc70(param_3,uVar9,&uStack_8);
            if (sStack_6a == (short)uStack_8) {
              bVar2 = true;
              break;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uStack_3c);
        }
        if (bVar2) {
          bVar2 = false;
          uVar9 = 0;
          if (0 < (int)uStack_2c) {
            do {
              FUN_006acc70(param_4,uVar9,&uStack_8);
              if (sStack_62 == (short)uStack_8) {
                bVar2 = true;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uStack_2c);
          }
          if (bVar2) {
            Library::DKW::TBL::FUN_006ae1c0(puStack_34,(undefined4 *)&sStack_70);
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uStack_28);
  }
  if (puStack_34[3] == 0) {
    FUN_006ae110((byte *)puStack_34);
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2522,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___AssignMDPairs_pa_007a81fc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar1)();
      return puVar5;
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2524)
    ;
  }
  puStack_20 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uStack_3c,6,1);
  puStack_30 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uStack_2c,6,1);
  iVar4 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  aiStack_d0[5] = iVar4;
  if (iVar4 == 0) {
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x252c,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___AssignMDPairs_gr_007a81c8);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar1)();
      return puVar5;
    }
    RaiseInternalException(-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x252d)
    ;
  }
  uVar10 = *(uint *)(iVar4 + 0xc);
  uStack_24 = 0;
  uStack_28 = uVar10;
  if (0 < (int)uVar10) {
    do {
      uVar9 = uStack_24;
      FUN_006acc70(iVar4,uStack_24,&pSStack_1c);
      if ((pSStack_1c != (STGroupC *)0x0) &&
         (iVar6 = (**(code **)(*(int *)pSStack_1c + 0xc))(), iVar6 == 8)) {
        puStack_48 = STGroupC::GetGroupContent(pSStack_1c,(int)unaff_EDI);
        uStack_b8 = puStack_48[3];
        if ((uStack_b8 != 0) && (uStack_44 = 0, 0 < (int)uStack_b8)) {
LAB_0044326c:
          uVar10 = uStack_38;
          FUN_006acc70((int)puStack_48,uStack_44,&uStack_8);
          if ((short)uStack_8 != -1) {
            piVar7 = (int *)GetObjPtr(pSStack_8c,param_1,uStack_8,1);
            piStack_40 = piVar7;
            if (piVar7 == (int *)0x0) {
              iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2539,0,0,
                                         &DAT_007a4ccc,s_STAllPlayersC___AssignMDPairs_pt_007a8198);
              if (iVar4 != 0) {
                pcVar1 = (code *)swi(3);
                puVar5 = (uint *)(*pcVar1)();
                return puVar5;
              }
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x253a);
            }
            iVar4 = (**(code **)(*piVar7 + 0x2c))();
            if ((((iVar4 != 8) && (iVar4 = (**(code **)(*piVar7 + 0x2c))(), iVar4 != 0x14)) &&
                (iVar4 = (**(code **)(*piVar7 + 0x2c))(), iVar4 != 0x1a)) ||
               (iVar4 = thunk_FUN_0045ff10((int)piVar7), iVar4 != 0xc)) goto LAB_004435cd;
            uVar9 = 0;
            if (0 < (int)uVar10) {
              do {
                FUN_006acc70(param_5,uVar9,(undefined4 *)&sStack_12);
                if ((short)uStack_8 == sStack_12) break;
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)uVar10);
            }
            if ((int)uVar9 < (int)uVar10) goto LAB_004435cd;
            uVar15 = thunk_FUN_0048dc90(piVar7,auStack_19c);
            iVar4 = (int)((ulonglong)uVar15 >> 0x20);
            psVar11 = (short *)uVar15;
            psVar13 = asStack_158;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)psVar13 = *(undefined4 *)psVar11;
              psVar11 = psVar11 + 2;
              psVar13 = psVar13 + 2;
            }
            *psVar13 = *psVar11;
            uVar10 = uStack_3c;
            if ((iStack_152 == -1) || (iStack_148 == -1)) goto LAB_004435cd;
            if ((((asStack_158[0] < 0) ||
                 ((DAT_007fb240 <= asStack_158[0] ||
                  (iVar4 = CONCAT22((short)((ulonglong)uVar15 >> 0x30),asStack_158[1]),
                  asStack_158[1] < 0)))) || (DAT_007fb242 <= asStack_158[1])) ||
               ((asStack_158[2] < 0 || (DAT_007fb244 <= asStack_158[2])))) {
              piStack_40 = (int *)0x0;
            }
            else {
              piStack_40 = *(int **)(DAT_007fb248 +
                                    ((int)asStack_158[2] * (int)DAT_007fb246 +
                                     (int)asStack_158[1] * (int)DAT_007fb240 + (int)asStack_158[0])
                                    * 8);
              iVar4 = DAT_007fb248;
            }
            uVar8 = (undefined2)((uint)iVar4 >> 0x10);
            if (piStack_40 == (int *)0x0) goto LAB_004435cd;
            uStack_8 = CONCAT22((short)((uint)piStack_40 >> 0x10),
                                *(undefined2 *)((int)piStack_40 + 0x32));
            uVar9 = 0;
            if (0 < (int)uStack_3c) {
              do {
                FUN_006acc70(param_3,uVar9,(undefined4 *)&sStack_12);
                iVar4 = iStack_13e;
                uVar8 = extraout_var;
                if ((short)uStack_8 == sStack_12) {
                  uVar10 = puStack_20[3];
                  if (uVar10 == 0) {
                    uVar9 = 0;
                    sStack_10 = (short)uStack_8;
                    goto LAB_0044349d;
                  }
                  uVar9 = 0;
                  if ((int)uVar10 < 1) goto LAB_00443473;
                  goto LAB_0044343c;
                }
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)uVar10);
            }
            goto LAB_004434a2;
          }
          goto LAB_004435cd;
        }
LAB_004435f1:
        FUN_006ae110((byte *)puStack_48);
      }
      uStack_24 = uVar9 + 1;
    } while ((int)uStack_24 < (int)uVar10);
  }
  uStack_24 = 0;
  if (0 < (int)uStack_3c) {
    do {
      FUN_006acc70(param_3,uStack_24,&uStack_8);
      puVar5 = puStack_20;
      sVar3 = (short)uStack_8;
      if (sVar3 != -1) {
        uVar9 = 0;
        uVar10 = puStack_20[3];
        uStack_28 = uVar10;
        if (uVar10 != 0) {
          if (0 < (int)uVar10) {
            do {
              FUN_006acc70((int)puVar5,uVar9,(undefined4 *)&sStack_10);
              sVar3 = (short)uStack_8;
              if (sStack_10 == sVar3) break;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar10);
          }
          if (uVar9 != uVar10) goto LAB_00443676;
        }
        sStack_10 = sVar3;
        iStack_e = 0;
        Library::DKW::TBL::FUN_006ae1c0(puVar5,(undefined4 *)&sStack_10);
      }
LAB_00443676:
      uStack_24 = uStack_24 + 1;
    } while ((int)uStack_24 < (int)uStack_3c);
  }
  uStack_24 = 0;
  if (0 < (int)uStack_2c) {
    do {
      FUN_006acc70(param_4,uStack_24,&uStack_8);
      puVar5 = puStack_30;
      sVar3 = (short)uStack_8;
      if (sVar3 != -1) {
        uVar9 = 0;
        uVar10 = puStack_30[3];
        uStack_28 = uVar10;
        if (uVar10 != 0) {
          if (0 < (int)uVar10) {
            do {
              FUN_006acc70((int)puVar5,uVar9,(undefined4 *)&sStack_10);
              sVar3 = (short)uStack_8;
              if (sStack_10 == sVar3) break;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar10);
          }
          if (uVar9 != uVar10) goto LAB_004436f7;
        }
        sStack_10 = sVar3;
        iStack_e = 0;
        Library::DKW::TBL::FUN_006ae1c0(puVar5,(undefined4 *)&sStack_10);
      }
LAB_004436f7:
      uStack_24 = uStack_24 + 1;
    } while ((int)uStack_24 < (int)uStack_2c);
  }
  uVar10 = 0;
  uStack_28 = puStack_34[3];
  if (0 < (int)uStack_28) {
    do {
      FUN_006acc70((int)puStack_34,uVar10,(undefined4 *)&sStack_70);
      uVar12 = 0;
      uVar9 = puStack_20[3];
      uStack_3c = uVar9;
      if (0 < (int)uVar9) {
        do {
          FUN_006acc70((int)puStack_20,uVar12,(undefined4 *)&sStack_10);
          if (sStack_10 == sStack_6a) {
            iStack_54 = iStack_e;
            break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar9);
      }
      if (uVar12 == uVar9) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25a4,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC___AssignMDPairs_M_a_007a8168);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar1)();
          return puVar5;
        }
        RaiseInternalException
                  (-0x5001fff8,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x25a5);
      }
      uVar12 = 0;
      uVar9 = puStack_30[3];
      uStack_2c = uVar9;
      if (0 < (int)uVar9) {
        do {
          FUN_006acc70((int)puStack_30,uVar12,(undefined4 *)&sStack_10);
          if (sStack_10 == sStack_62) {
            iStack_50 = iStack_e;
            break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar9);
      }
      if (uVar12 == uVar9) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ad,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC___AssignMDPairs_D_a_007a8138);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar1)();
          return puVar5;
        }
        RaiseInternalException
                  (-0x5001fff8,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ae);
      }
      Library::DKW::TBL::FUN_006ae140(puStack_34,uVar10,(undefined4 *)&sStack_70);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uStack_28);
  }
  FUN_006ae110((byte *)puStack_20);
  FUN_006ae110((byte *)puStack_30);
  uVar10 = uStack_38;
  uVar12 = 0;
  uVar9 = 0;
  puStack_30 = (uint *)0x0;
  puVar5 = puStack_30;
  if (0 < (int)uStack_38) {
    do {
      FUN_006acc70(param_5,uVar9,&uStack_8);
      if ((short)uStack_8 != -1) {
        uVar12 = uVar12 + 1;
      }
      uVar9 = uVar9 + 1;
      puVar5 = (uint *)uVar12;
    } while ((int)uVar9 < (int)uVar10);
  }
  puStack_30 = puVar5;
  puVar5 = puStack_30;
  puStack_20 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)puStack_30,0x24,1);
  puVar14 = puStack_34;
  if (0 < (int)puVar5) {
    do {
      uStack_44 = (uint)puVar5;
      uVar10 = 0;
      puStack_48 = (uint *)0x5f5e100;
      if (0 < (int)uStack_28) {
        do {
          FUN_006acc70((int)puVar14,uVar10,(undefined4 *)&sStack_70);
          if (iStack_5c + iStack_54 < 0x65) {
            iVar4 = 0;
          }
          else {
            iVar4 = ((iStack_5c + iStack_54 + -100) * iStack_60) / 100;
          }
          if (iStack_58 + iStack_50 < 0x65) {
            uStack_88 = 0;
          }
          else {
            uStack_88 = ((iStack_58 + iStack_50 + -100) * iStack_60) / 100;
          }
          puVar5 = (uint *)(uStack_88 + iStack_60 + iVar4);
          if ((int)puVar5 < (int)puStack_48) {
            uStack_b4 = uVar10;
            puStack_48 = puVar5;
          }
          uVar10 = uVar10 + 1;
          puVar14 = puStack_34;
        } while ((int)uVar10 < (int)uStack_28);
      }
      uVar9 = uStack_28;
      uVar10 = uStack_b4;
      FUN_006acc70((int)puVar14,uStack_b4,(undefined4 *)&sStack_70);
      iStack_54 = iStack_54 + iStack_5c;
      iStack_50 = iStack_50 + iStack_58;
      Library::DKW::TBL::FUN_006ae140(puVar14,uVar10,(undefined4 *)&sStack_70);
      Library::DKW::TBL::FUN_006ae1c0(puStack_20,(undefined4 *)&sStack_70);
      uVar10 = 0;
      if (0 < (int)uVar9) {
        do {
          FUN_006acc70((int)puVar14,uVar10,&uStack_b0);
          if (sStack_aa == sStack_6a) {
            iStack_94 = iStack_54;
          }
          if (sStack_a2 == sStack_62) {
            iStack_90 = iStack_50;
          }
          if (sStack_a2 == sStack_62 || sStack_aa == sStack_6a) {
            Library::DKW::TBL::FUN_006ae140(puVar14,uVar10,&uStack_b0);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
      }
      puVar5 = (uint *)(uStack_44 - 1);
    } while (uStack_44 - 1 != 0);
    uStack_44 = 0;
  }
  FUN_006ae110((byte *)puVar14);
  uVar10 = uStack_38;
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uStack_38,2,1);
  uVar9 = 0;
  if (0 < (int)uVar10) {
    do {
      FUN_006acc70(param_5,uVar9,&uStack_8);
      Library::DKW::TBL::FUN_006ae140(puVar5,uVar9,&uStack_8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar10);
  }
  puVar14 = puStack_30;
  puStack_4c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)puStack_30,0xe,1);
  uStack_24 = 0;
  if (0 < (int)puVar14) {
    do {
      FUN_006acc70((int)puStack_20,uStack_24,(undefined4 *)&sStack_70);
      uVar10 = 0;
      iVar4 = 100000000;
      if (0 < (int)uStack_38) {
        do {
          FUN_006acc70((int)puVar5,uVar10,&uStack_8);
          if ((short)uStack_8 != -1) {
            piStack_40 = (int *)GetObjPtr(pSStack_8c,param_1,uStack_8,1);
            thunk_FUN_004162b0(piStack_40,&sStack_18,&sStack_14,&sStack_16);
            iVar6 = FUN_006aadd0((int)sStack_18,(int)sStack_14,(int)sStack_16,(int)sStack_70,
                                 (int)sStack_6e,(int)sStack_6c);
            if (iVar6 < iVar4) {
              iVar4 = iVar6;
              uStack_88 = uVar10;
            }
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uStack_38);
      }
      uVar10 = uStack_88;
      FUN_006acc70((int)puVar5,uStack_88,&uStack_8);
      sStack_80 = sStack_6a;
      uStack_7c = (short)uStack_8;
      iStack_7a = iStack_5c;
      sStack_7e = sStack_62;
      iStack_76 = iStack_58;
      Library::DKW::TBL::FUN_006ae1c0(puStack_4c,(undefined4 *)&sStack_80);
      uStack_8 = 0xffff;
      Library::DKW::TBL::FUN_006ae140(puVar5,uVar10,&uStack_8);
      uStack_24 = uStack_24 + 1;
    } while ((int)uStack_24 < (int)puStack_30);
  }
  FUN_006ae110((byte *)puVar5);
  FUN_006ae110((byte *)puStack_20);
  g_currentExceptionFrame = IStack_114.previous;
  return puStack_4c;
  while (uVar9 = uVar9 + 1, uVar8 = extraout_var_00, (int)uVar9 < (int)uVar10) {
LAB_0044343c:
    FUN_006acc70((int)puStack_20,uVar9,(undefined4 *)&sStack_10);
    if (sStack_10 == (short)uStack_8) {
      iStack_e = iStack_e + iVar4;
      Library::DKW::TBL::FUN_006ae140(puStack_20,uVar9,(undefined4 *)&sStack_10);
      uVar8 = extraout_var_01;
      break;
    }
  }
LAB_00443473:
  if (uVar9 == uVar10) {
    sStack_10 = (short)uStack_8;
LAB_0044349d:
    iStack_e = iVar4;
    Library::DKW::TBL::FUN_006ae140(puStack_20,uVar9,(undefined4 *)&sStack_10);
    uVar8 = extraout_var_02;
  }
LAB_004434a2:
  uVar10 = uStack_2c;
  iVar4 = CONCAT22(uVar8,sStack_14e);
  if ((((sStack_14e < 0) || (DAT_007fb240 <= sStack_14e)) || (sStack_14c < 0)) ||
     (((DAT_007fb242 <= sStack_14c || (sStack_14a < 0)) || (DAT_007fb244 <= sStack_14a)))) {
    piStack_40 = (int *)0x0;
  }
  else {
    iVar4 = (int)sStack_14e;
    piStack_40 = *(int **)(DAT_007fb248 +
                          ((int)sStack_14a * (int)DAT_007fb246 + (int)sStack_14c * (int)DAT_007fb240
                          + iVar4) * 8);
  }
  if (piStack_40 != (int *)0x0) {
    uStack_8 = CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)((int)piStack_40 + 0x32));
    uVar9 = 0;
    if (0 < (int)uStack_2c) {
      do {
        FUN_006acc70(param_4,uVar9,(undefined4 *)&sStack_12);
        puVar5 = puStack_30;
        sVar3 = (short)uStack_8;
        if (sVar3 == sStack_12) {
          uVar10 = puStack_30[3];
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_004435c8;
          }
          uVar9 = 0;
          if ((int)uVar10 < 1) goto LAB_00443598;
          goto LAB_0044355f;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
  }
LAB_004435cd:
  uStack_44 = uStack_44 + 1;
  uVar10 = uStack_28;
  iVar4 = aiStack_d0[5];
  uVar9 = uStack_24;
  if ((int)uStack_b8 <= (int)uStack_44) goto LAB_004435f1;
  goto LAB_0044326c;
  while (uVar9 = uVar9 + 1, (int)uVar9 < (int)uVar10) {
LAB_0044355f:
    FUN_006acc70((int)puVar5,uVar9,(undefined4 *)&sStack_10);
    sVar3 = (short)uStack_8;
    if (sStack_10 == sVar3) {
      iStack_e = iStack_e + iStack_13a;
      Library::DKW::TBL::FUN_006ae140(puVar5,uVar9,(undefined4 *)&sStack_10);
      sVar3 = (short)uStack_8;
      break;
    }
  }
LAB_00443598:
  if (uVar9 == uVar10) {
LAB_004435c8:
    sStack_10 = sVar3;
    iStack_e = iStack_13a;
    Library::DKW::TBL::FUN_006ae140(puStack_30,uVar9,(undefined4 *)&sStack_10);
  }
  goto LAB_004435cd;
}

