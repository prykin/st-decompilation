
uint * __thiscall
STAllPlayersC::_AssignDocks(STAllPlayersC *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 unaff_ESI;
  uint uVar12;
  void *unaff_EDI;
  uint uVar13;
  short *psVar14;
  undefined4 *puVar15;
  undefined4 auStack_130 [13];
  short sStack_fc;
  short sStack_fa;
  short sStack_f8;
  int iStack_d0;
  InternalExceptionFrame IStack_c8;
  int iStack_84;
  int iStack_80;
  int *piStack_7c;
  uint *puStack_78;
  int iStack_74;
  uint *puStack_70;
  uint uStack_6c;
  int iStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  uint *puStack_54;
  uint uStack_50;
  short sStack_4c;
  undefined2 uStack_4a;
  uint uStack_48;
  uint *puStack_44;
  STAllPlayersC *pSStack_40;
  short sStack_3c;
  undefined4 uStack_3a;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  short sStack_22;
  uint uStack_20;
  uint uStack_1c;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  uint *puStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_70 = (uint *)0x0;
  IStack_c8.previous = g_currentExceptionFrame;
  iStack_80 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  g_currentExceptionFrame = &IStack_c8;
  pSStack_40 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_c8.previous;
    if (iVar3 != -0x5001fff7) {
      iVar8 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x234b,0,iVar3,
                                 &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_007a8040);
      if (iVar8 != 0) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uint *)(*pcVar1)();
        return puVar5;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x234c);
    }
    return puStack_70;
  }
  if ((((param_2 == 0) || (param_3 == 0)) ||
      (uVar13 = *(uint *)(param_2 + 0xc), uStack_20 = uVar13, uVar13 == 0)) ||
     (uStack_48 = *(uint *)(param_3 + 0xc), uStack_48 == 0)) {
    uVar13 = uStack_20;
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2215)
    ;
  }
  if ((iStack_80 == 0) || (iStack_84 = *(int *)(iStack_80 + 0xc), iStack_84 == 0)) {
    RaiseInternalException(-0x5001fff8,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2216)
    ;
  }
  uVar12 = 0;
  if (0 < (int)uVar13) {
    do {
      FUN_006acc70(param_2,uVar12,&uStack_28);
      if ((short)uStack_28 == -1) {
LAB_00440bab:
        FUN_006b0c70(param_2,uVar12);
        uVar13 = uVar13 - 1;
        uVar12 = uVar12 - 1;
        uStack_20 = uVar13;
      }
      else {
        piVar4 = (int *)GetObjPtr(pSStack_40,param_1,uStack_28,1);
        iVar3 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar3 == 0) goto LAB_00440bab;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  if (uVar13 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x221e)
    ;
  }
  uVar12 = 0;
  if (0 < (int)uStack_48) {
    do {
      FUN_006acc70(param_3,uVar12,&uStack_28);
      if ((short)uStack_28 == -1) {
LAB_00440c19:
        FUN_006b0c70(param_3,uVar12);
        uStack_48 = uStack_48 - 1;
        uVar12 = uVar12 - 1;
      }
      else {
        piVar4 = (int *)GetObjPtr(pSStack_40,param_1,uStack_28,1);
        iVar3 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar3 == 0) goto LAB_00440c19;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uStack_48);
  }
  if (uStack_48 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2225)
    ;
  }
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar13,0xc,1);
  uVar12 = 0;
  puStack_44 = puVar5;
  if (0 < (int)uVar13) {
    do {
      puStack_10 = (uint *)0x0;
      uStack_8 = 0;
      uStack_c = 0;
      Library::DKW::TBL::FUN_006ae140(puVar5,uVar12,&puStack_10);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  uStack_1c = 0;
  if (0 < iStack_84) {
    do {
      uVar13 = uStack_1c;
      FUN_006acc70(iStack_80,uStack_1c,&piStack_7c);
      if (((piStack_7c != (int *)0x0) && (iVar3 = (**(code **)(*piStack_7c + 0xc))(), iVar3 == 4))
         && (*(short *)((int)piStack_7c + 0x27) != 0)) {
        uStack_6c = *(uint *)((int)piStack_7c + 0x29);
        uStack_2c = 0;
        puStack_78 = *(uint **)(uStack_6c + 0xc);
        if (0 < (int)puStack_78) {
          do {
            FUN_006acc70(uStack_6c,uStack_2c,&uStack_28);
            if ((short)uStack_28 != -1) {
              pvVar6 = (void *)GetObjPtr(pSStack_40,param_1,uStack_28,1);
              if (pvVar6 == (void *)0x0) {
                iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2239,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_inva_007a8064
                                          );
                if (iVar3 != 0) {
                  pcVar1 = (code *)swi(3);
                  puVar5 = (uint *)(*pcVar1)();
                  return puVar5;
                }
                RaiseInternalException
                          (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x223a)
                ;
              }
              if ((*(int *)((int)pvVar6 + 0x20) == 0x14) &&
                 (iVar3 = thunk_FUN_0045ff10((int)pvVar6), iVar3 == 4)) {
                puVar7 = (undefined4 *)thunk_FUN_0048dcc0(pvVar6,auStack_130);
                psVar14 = &sStack_fc;
                for (iVar3 = 0xd; uVar13 = uStack_48, iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(undefined4 *)psVar14 = *puVar7;
                  puVar7 = puVar7 + 1;
                  psVar14 = psVar14 + 2;
                }
                if ((iStack_d0 != 6) && (iStack_d0 != 7)) {
                  uVar12 = 0;
                  if (0 < (int)uStack_48) {
                    do {
                      FUN_006acc70(param_3,uVar12,(undefined4 *)&sStack_22);
                      if ((short)uStack_28 == sStack_22) break;
                      uVar12 = uVar12 + 1;
                    } while ((int)uVar12 < (int)uVar13);
                  }
                  if ((int)uVar13 <= (int)uVar12) {
                    if ((((sStack_fc < 0) || (DAT_007fb240 <= sStack_fc)) || (sStack_fa < 0)) ||
                       (((DAT_007fb242 <= sStack_fa || (sStack_f8 < 0)) ||
                        (DAT_007fb244 <= sStack_f8)))) {
                      piVar4 = (int *)0x0;
                    }
                    else {
                      piVar4 = *(int **)(DAT_007fb248 +
                                        ((int)sStack_f8 * (int)DAT_007fb246 +
                                         (int)sStack_fa * (int)DAT_007fb240 + (int)sStack_fc) * 8);
                    }
                    if (((piVar4 != (int *)0x0) && (piVar4[9] == (int)(char)param_1)) &&
                       ((iVar3 = (**(code **)(*piVar4 + 0x2c))(), iVar3 == 0x33 &&
                        (iVar3 = (**(code **)(*piVar4 + 0xf8))(), uVar13 = uStack_20, iVar3 == 1))))
                    {
                      uVar12 = 0;
                      if (0 < (int)uStack_20) {
                        do {
                          FUN_006acc70(param_2,uVar12,(undefined4 *)&sStack_22);
                          if (sStack_22 == *(short *)((int)piVar4 + 0x32)) break;
                          uVar12 = uVar12 + 1;
                        } while ((int)uVar12 < (int)uVar13);
                      }
                      puVar5 = puStack_44;
                      if (uVar12 != uVar13) {
                        FUN_006acc70((int)puStack_44,uVar12,&puStack_10);
                        if (puStack_10 == (uint *)0x0) {
                          puStack_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
                          Library::DKW::TBL::FUN_006ae140(puVar5,uVar12,&puStack_10);
                        }
                        sStack_3c = (short)uStack_28;
                        Library::DKW::TBL::FUN_006ae1c0(puStack_10,(undefined4 *)&sStack_3c);
                      }
                    }
                  }
                }
              }
            }
            uStack_2c = uStack_2c + 1;
            uVar13 = uStack_1c;
          } while ((int)uStack_2c < (int)puStack_78);
        }
      }
      uStack_1c = uVar13 + 1;
    } while ((int)uStack_1c < iStack_84);
  }
  uVar13 = uStack_48;
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uStack_48,4,1);
  uVar12 = 0;
  puStack_78 = puVar5;
  if (0 < (int)uVar13) {
    do {
      puStack_54 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uStack_20,4,1);
      Library::DKW::TBL::FUN_006ae140(puVar5,uVar12,&puStack_54);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  uStack_1c = 0;
  if (0 < (int)uStack_20) {
    do {
      uVar13 = uStack_1c;
      FUN_006acc70(param_2,uStack_1c,&uStack_28);
      pvVar6 = (void *)GetObjPtr(pSStack_40,param_1,uStack_28,1);
      thunk_FUN_004162b0(pvVar6,&sStack_12,&sStack_14,&sStack_16);
      uVar12 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
      puVar7 = DAT_007fb280;
      puVar15 = DAT_007fb238;
      for (uVar10 = (uVar12 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar15 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar12 = uVar12 * 2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                   (int)sStack_12,(int)sStack_14,(int)sStack_16,-1,-1,-1);
      FUN_006acc70((int)puStack_44,uVar13,&puStack_10);
      if (((puStack_10 != (uint *)0x0) && (uStack_64 = puStack_10[3], uStack_64 != 0)) &&
         (uVar13 = 0, 0 < (int)uStack_64)) {
        do {
          FUN_006acc70((int)puStack_10,uVar13,(undefined4 *)&sStack_3c);
          piVar4 = (int *)GetObjPtr(pSStack_40,param_1,CONCAT22((undefined2)uStack_3a,sStack_3c),1);
          thunk_FUN_004162b0(piVar4,&sStack_12,&sStack_14,&sStack_16);
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          bVar2 = thunk_FUN_00430750(iVar3);
          uStack_3a = ((*(short *)((int)DAT_007fb238 +
                                  ((int)sStack_16 * (int)DAT_007fb27e +
                                   (int)sStack_14 * (int)DAT_007fb278 + (int)sStack_12) * 2) * 0xc9
                       + -0xc9) / 3) / (int)(uint)bVar2;
          Library::DKW::TBL::FUN_006ae140(puStack_10,uVar13,(undefined4 *)&sStack_3c);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uStack_64);
      }
      uVar13 = 0;
      if (0 < (int)uStack_48) {
        do {
          FUN_006acc70(param_3,uVar13,&uStack_28);
          piVar4 = (int *)GetObjPtr(pSStack_40,param_1,uStack_28,1);
          thunk_FUN_004162b0(piVar4,&sStack_12,&sStack_14,&sStack_16);
          iStack_68 = (int)*(short *)((int)DAT_007fb238 +
                                     ((int)sStack_16 * (int)DAT_007fb27e +
                                      (int)sStack_14 * (int)DAT_007fb278 + (int)sStack_12) * 2);
          if (iStack_68 < 1) {
            iStack_68 = -1;
          }
          else {
            iVar3 = (**(code **)(*piVar4 + 0x2c))();
            bVar2 = thunk_FUN_00430750(iVar3);
            iStack_68 = ((iStack_68 * 0xc9 + -0xc9) / 3) / (int)(uint)bVar2;
          }
          FUN_006acc70((int)puStack_78,uVar13,&puStack_54);
          Library::DKW::TBL::FUN_006ae140(puStack_54,uStack_1c,&iStack_68);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uStack_48);
      }
      uStack_1c = uStack_1c + 1;
    } while ((int)uStack_1c < (int)uStack_20);
  }
  uStack_1c = 0;
  uVar13 = uStack_20;
  puVar5 = puStack_44;
  if (0 < (int)uStack_20) {
    do {
      FUN_006acc70((int)puVar5,uStack_1c,&puStack_10);
      if ((puStack_10 != (uint *)0x0) && (uStack_64 = puStack_10[3], uStack_64 != 0)) {
        puVar11 = puStack_10;
        uVar13 = uStack_64;
        if (uStack_64 == 1) {
          FUN_006acc70((int)puStack_10,0,(undefined4 *)&sStack_3c);
          piVar4 = (int *)GetObjPtr(pSStack_40,param_1,CONCAT22((undefined2)uStack_3a,sStack_3c),1);
          uStack_60 = thunk_FUN_00486b40((int)piVar4);
          iVar3 = (**(code **)(*piVar4 + 0x78))();
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar8 = (**(code **)(*piVar4 + 0x2c))();
          uStack_c = (int)(*(int *)(&DAT_007e049c + iVar8 * 4) * uStack_60) / iVar3 + uStack_3a;
          Library::DKW::TBL::FUN_006ae140(puVar5,uStack_1c,&puStack_10);
          uVar13 = uStack_20;
        }
        else {
          while (uVar13 = uVar13 - 1, 0 < (int)uVar13) {
            uVar12 = 0;
            if (0 < (int)uVar13) {
              do {
                FUN_006acc70((int)puVar11,uVar12,(undefined4 *)&uStack_34);
                uVar10 = uVar12 + 1;
                FUN_006acc70((int)puStack_10,uVar10,(undefined4 *)&uStack_5c);
                if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                  Library::DKW::TBL::FUN_006ae140(puStack_10,uVar12,(undefined4 *)&uStack_5c);
                  Library::DKW::TBL::FUN_006ae140(puStack_10,uVar10,(undefined4 *)&uStack_34);
                }
                puVar11 = puStack_10;
                uVar12 = uVar10;
              } while ((int)uVar10 < (int)uVar13);
            }
          }
          FUN_006acc70((int)puVar11,0,(undefined4 *)&uStack_34);
          piVar4 = (int *)GetObjPtr(pSStack_40,param_1,CONCAT22(uStack_32,uStack_34),1);
          iVar3 = thunk_FUN_00486b40((int)piVar4);
          iVar8 = (**(code **)(*piVar4 + 0x78))();
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          iVar9 = (**(code **)(*piVar4 + 0x2c))();
          iStack_74 = (*(int *)(&DAT_007e049c + iVar9 * 4) * iVar3) / iVar8;
          iVar3 = 0;
          uStack_50 = CONCAT22(uStack_30,uStack_32) + iStack_74;
          uStack_2c = 1;
          if (1 < (int)uStack_64) {
            do {
              FUN_006acc70((int)puStack_10,uStack_2c,(undefined4 *)&uStack_5c);
              piVar4 = (int *)GetObjPtr(pSStack_40,param_1,CONCAT22(uStack_5a,uStack_5c),1);
              uStack_60 = thunk_FUN_00486b40((int)piVar4);
              iVar8 = (**(code **)(*piVar4 + 0x78))();
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              iVar9 = (**(code **)(*piVar4 + 0x2c))();
              iVar8 = (int)(*(int *)(&DAT_007e049c + iVar9 * 4) * uStack_60) / iVar8;
              uStack_50 = uStack_50 + iVar8;
              iVar3 = (iVar3 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                      iStack_74;
              if (iVar3 < 1) {
                uStack_50 = uStack_50 - iVar3;
                iVar3 = 0;
              }
              uStack_32 = uStack_5a;
              uStack_30 = uStack_58;
              uStack_2c = uStack_2c + 1;
              iStack_74 = iVar8;
            } while ((int)uStack_2c < (int)uStack_64);
          }
          uStack_c = uStack_50;
          Library::DKW::TBL::FUN_006ae140(puStack_44,uStack_1c,&puStack_10);
          uVar13 = uStack_20;
          puVar5 = puStack_44;
        }
      }
      uStack_1c = uStack_1c + 1;
    } while ((int)uStack_1c < (int)uVar13);
  }
  uStack_1c = 0;
  if (0 < (int)uStack_48) {
    do {
      FUN_006acc70(param_3,uStack_1c,(undefined4 *)&sStack_3c);
      uVar12 = 0;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70((int)puStack_78,uStack_1c,&puStack_54);
          FUN_006acc70((int)puStack_54,uVar12,&uStack_3a);
          FUN_006acc70((int)puVar5,uVar12,&puStack_10);
          if (uStack_3a == -1) {
            uStack_8 = 1000000000;
          }
          else {
            if (puStack_10 == (uint *)0x0) {
              puStack_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(puStack_10,(undefined4 *)&sStack_3c);
            uStack_8 = 0;
          }
          Library::DKW::TBL::FUN_006ae140(puVar5,uVar12,&puStack_10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar13);
      }
      uStack_2c = 0;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70((int)puVar5,uStack_2c,&puStack_10);
          if (uStack_8 != 1000000000) {
            uStack_64 = puStack_10[3];
            uVar13 = uStack_64;
            if (uStack_64 == 1) {
              FUN_006acc70((int)puStack_10,0,(undefined4 *)&sStack_3c);
              piVar4 = (int *)GetObjPtr(pSStack_40,param_1,CONCAT22((undefined2)uStack_3a,sStack_3c)
                                        ,1);
              iVar3 = thunk_FUN_00486b40((int)piVar4);
              iVar8 = (**(code **)(*piVar4 + 0x78))();
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              iVar9 = (**(code **)(*piVar4 + 0x2c))();
              uStack_8 = (*(int *)(&DAT_007e049c + iVar9 * 4) * iVar3) / iVar8 + uStack_3a;
            }
            else {
              while (uVar13 = uVar13 - 1, 0 < (int)uVar13) {
                uVar12 = 0;
                if (0 < (int)uVar13) {
                  do {
                    FUN_006acc70((int)puStack_10,uVar12,(undefined4 *)&uStack_34);
                    uVar10 = uVar12 + 1;
                    FUN_006acc70((int)puStack_10,uVar10,(undefined4 *)&uStack_5c);
                    if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                      Library::DKW::TBL::FUN_006ae140(puStack_10,uVar12,(undefined4 *)&uStack_5c);
                      Library::DKW::TBL::FUN_006ae140(puStack_10,uVar10,(undefined4 *)&uStack_34);
                    }
                    uVar12 = uVar10;
                  } while ((int)uVar10 < (int)uVar13);
                }
              }
              FUN_006acc70((int)puStack_10,0,(undefined4 *)&uStack_34);
              piVar4 = (int *)GetObjPtr(pSStack_40,param_1,CONCAT22(uStack_32,uStack_34),1);
              iVar3 = thunk_FUN_00486b40((int)piVar4);
              iVar8 = (**(code **)(*piVar4 + 0x78))();
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              iVar9 = (**(code **)(*piVar4 + 0x2c))();
              iStack_74 = (*(int *)(&DAT_007e049c + iVar9 * 4) * iVar3) / iVar8;
              iVar3 = 0;
              uStack_50 = CONCAT22(uStack_30,uStack_32) + iStack_74;
              uStack_6c = 1;
              if (1 < (int)uStack_64) {
                do {
                  FUN_006acc70((int)puStack_10,uStack_6c,(undefined4 *)&uStack_5c);
                  piVar4 = (int *)GetObjPtr(pSStack_40,param_1,CONCAT22(uStack_5a,uStack_5c),1);
                  uStack_60 = thunk_FUN_00486b40((int)piVar4);
                  iVar8 = (**(code **)(*piVar4 + 0x78))();
                  if (iVar8 < 1) {
                    iVar8 = 1;
                  }
                  iVar9 = (**(code **)(*piVar4 + 0x2c))();
                  iVar8 = (int)(*(int *)(&DAT_007e049c + iVar9 * 4) * uStack_60) / iVar8;
                  uStack_50 = uStack_50 + iVar8;
                  iVar3 = (iVar3 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                          iStack_74;
                  if (iVar3 < 1) {
                    uStack_50 = uStack_50 - iVar3;
                    iVar3 = 0;
                  }
                  uStack_32 = uStack_5a;
                  uStack_30 = uStack_58;
                  uStack_6c = uStack_6c + 1;
                  iStack_74 = iVar8;
                } while ((int)uStack_6c < (int)uStack_64);
              }
              uStack_8 = uStack_50;
            }
            Library::DKW::TBL::FUN_006ae140(puStack_44,uStack_2c,&puStack_10);
            uVar13 = uStack_20;
            puVar5 = puStack_44;
          }
          uStack_2c = uStack_2c + 1;
        } while ((int)uStack_2c < (int)uVar13);
      }
      if (puStack_70 == (uint *)0x0) {
        puStack_70 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      }
      FUN_006acc70(param_3,uStack_1c,(undefined4 *)&sStack_4c);
      uVar12 = 0;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70((int)puVar5,uVar12,&puStack_10);
          if (uStack_8 != 1000000000) break;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar13);
      }
      if (uVar12 == uVar13) {
        uStack_4a = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(puStack_70,(undefined4 *)&sStack_4c);
      }
      else if (uVar12 == uVar13 - 1) {
        FUN_006acc70(param_2,uVar12,(undefined4 *)&uStack_4a);
        Library::DKW::TBL::FUN_006ae1c0(puStack_70,(undefined4 *)&sStack_4c);
        uStack_c = uStack_8;
        Library::DKW::TBL::FUN_006ae140(puVar5,uVar12,&puStack_10);
      }
      else {
        uVar13 = uVar12 + 1;
        uStack_6c = uStack_8;
        uStack_60 = uVar12;
        if ((int)uVar13 < (int)uStack_20) {
          do {
            FUN_006acc70((int)puVar5,uVar13,&puStack_10);
            if ((uStack_8 != 1000000000) && ((int)uStack_8 < (int)uStack_6c)) {
              uStack_6c = uStack_8;
              uVar12 = uVar13;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uStack_20);
        }
        uStack_60 = uVar12;
        FUN_006acc70(param_2,uVar12,(undefined4 *)&uStack_4a);
        Library::DKW::TBL::FUN_006ae1c0(puStack_70,(undefined4 *)&sStack_4c);
        FUN_006acc70((int)puVar5,uVar12,&puStack_10);
        uStack_c = uStack_8;
        Library::DKW::TBL::FUN_006ae140(puVar5,uVar12,&puStack_10);
        uStack_2c = 0;
        if (0 < (int)uStack_20) {
          do {
            if (uStack_2c != uVar12) {
              FUN_006acc70((int)puVar5,uStack_2c,&puStack_10);
              if (uStack_8 != 1000000000) {
                uVar12 = 0;
                uVar13 = puStack_10[3];
                if (0 < (int)uVar13) {
                  do {
                    FUN_006acc70((int)puStack_10,uVar12,(undefined4 *)&sStack_3c);
                    if (sStack_3c == sStack_4c) {
                      FUN_006b0c70((int)puStack_10,uVar12);
                      puVar5 = puStack_44;
                      break;
                    }
                    uVar12 = uVar12 + 1;
                    puVar5 = puStack_44;
                  } while ((int)uVar12 < (int)uVar13);
                }
              }
            }
            uStack_2c = uStack_2c + 1;
            uVar12 = uStack_60;
          } while ((int)uStack_2c < (int)uStack_20);
        }
      }
      uStack_1c = uStack_1c + 1;
      uVar13 = uStack_20;
    } while ((int)uStack_1c < (int)uStack_48);
  }
  uVar12 = 0;
  if (0 < (int)uVar13) {
    do {
      FUN_006acc70((int)puVar5,uVar12,&puStack_10);
      if (puStack_10 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_10);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  FUN_006ae110((byte *)puVar5);
  uVar13 = uStack_48;
  puVar5 = puStack_78;
  uVar12 = 0;
  if (0 < (int)uStack_48) {
    do {
      FUN_006acc70((int)puVar5,uVar12,&puStack_54);
      if (puStack_54 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_54);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  FUN_006ae110((byte *)puVar5);
  g_currentExceptionFrame = IStack_c8.previous;
  return puStack_70;
}

