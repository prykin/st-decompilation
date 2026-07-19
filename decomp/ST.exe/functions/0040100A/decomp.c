
void __thiscall STAllPlayersC::DistributeGuardBoats(STAllPlayersC *this,uint param_1)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  void *unaff_EDI;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  InternalExceptionFrame IStack_e4;
  int iStack_a0;
  uint uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  uint *puStack_88;
  int iStack_84;
  int iStack_80;
  uint *puStack_7c;
  int iStack_78;
  int iStack_74;
  uint *puStack_70;
  STAllPlayersC *pSStack_6c;
  undefined2 uStack_66;
  uint *puStack_64;
  uint *puStack_60;
  int iStack_5c;
  uint uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  int iStack_4e;
  uint *puStack_48;
  int iStack_44;
  uint *puStack_40;
  uint uStack_3c;
  short sStack_38;
  short sStack_36;
  uint uStack_34;
  uint *puStack_30;
  uint uStack_2c;
  int *piStack_28;
  ushort uStack_24;
  ushort uStack_22;
  uint *puStack_1c;
  short sStack_16;
  uint *puStack_14;
  short sStack_10;
  short sStack_e;
  uint *puStack_c;
  uint uStack_8;
  
  iVar3 = (char)(byte)param_1 * 0xa62;
  puStack_7c = *(uint **)((int)&DAT_007f5816 + iVar3);
  puStack_48 = *(uint **)((int)&DAT_007f581e + iVar3);
  puStack_60 = *(uint **)((int)&DAT_007f581a + iVar3);
  puStack_64 = *(uint **)((int)&DAT_007f5822 + iVar3);
  if (puStack_60 != (uint *)0x0) {
    IStack_e4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_e4;
    pSStack_6c = this;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_e4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar4 = puStack_48;
    if (iVar3 == 0) {
      if (puStack_48 != (uint *)0x0) {
        iVar3 = *(int *)((int)puStack_48 + 0xc);
        uStack_8 = 0;
        if (0 < iVar3) {
          do {
            FUN_006acc70((int)puVar4,uStack_8,&puStack_c);
            FUN_006ae110((byte *)puStack_c);
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < iVar3);
        }
        FUN_006ae110((byte *)puVar4);
      }
      puStack_48 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      iStack_a0 = (int)(char)(byte)param_1;
      iVar3 = iStack_a0 * 0xa62;
      *(uint **)((int)&DAT_007f581e + iVar3) = puStack_48;
      puVar4 = (uint *)puStack_60[3];
      iStack_5c = iVar3;
      puStack_30 = puVar4;
      puStack_1c = puVar4;
      puVar8 = puStack_60;
joined_r0x0044707d:
      if (puStack_1c != (uint *)0x0) {
        uStack_8 = 0;
        if (0 < (int)puVar4) {
          do {
            FUN_006acc70((int)puVar8,uStack_8,(undefined4 *)&uStack_54);
            if (iStack_4e != 1) {
              iStack_4e = 1;
              Library::DKW::TBL::FUN_006ae140(puVar8,uStack_8,(undefined4 *)&uStack_54);
              puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
              Library::DKW::TBL::FUN_006ae1c0(puStack_c,&uStack_8);
              uStack_58 = Library::DKW::TBL::FUN_006ae1c0(puStack_48,&puStack_c);
              puStack_40 = *(uint **)(CONCAT22(uStack_50,uStack_52) + 0xc);
              puStack_14 = (uint *)0x0;
              if (0 < (int)puStack_40) goto LAB_00447106;
              goto LAB_004471ad;
            }
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < (int)puVar4);
        }
        goto LAB_004471bd;
      }
LAB_0044738a:
      puVar4 = puStack_64;
      if (puStack_64 != (uint *)0x0) {
        iVar6 = *(int *)((int)puStack_64 + 0xc);
        if ((iVar6 != 0) && (uStack_8 = 0, 0 < iVar6)) {
          do {
            FUN_006acc70((int)puVar4,uStack_8,&puStack_c);
            if (puStack_c != (uint *)0x0) {
              FUN_006ae110((byte *)puStack_c);
            }
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < iVar6);
        }
        FUN_006ae110((byte *)puVar4);
        *(undefined4 *)((int)&DAT_007f5822 + iVar3) = 0;
      }
      uVar7 = puStack_48[3];
      uStack_3c = uVar7;
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar7,4,1);
      uStack_8 = 0;
      *(uint **)((int)&DAT_007f5822 + iVar3) = puVar4;
      puStack_64 = puVar4;
      if (0 < (int)uVar7) {
        do {
          puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
          Library::DKW::TBL::FUN_006ae1c0(puVar4,&puStack_c);
          uStack_8 = uStack_8 + 1;
        } while ((int)uStack_8 < (int)uVar7);
      }
      puStack_40 = (uint *)puStack_7c[3];
      uStack_8 = 0;
      if (0 < (int)puStack_40) {
        do {
          FUN_006acc70((int)puStack_7c,uStack_8,&iStack_78);
          uVar7 = 0;
          puStack_30 = *(uint **)(iStack_78 + 0xc);
          iVar3 = *(int *)(iStack_74 + 0xc);
          puStack_1c = (uint *)puStack_70[3];
          puStack_14 = (uint *)0x0;
          if (0 < (int)puStack_1c) {
            do {
              FUN_006acc70((int)puStack_70,(uint)puStack_14,(undefined4 *)&uStack_24);
              uStack_2c = ((uint)uStack_22 * iVar3 * 10) / (uint)puStack_30;
              puStack_30 = (uint *)((int)puStack_30 - (uint)uStack_22);
              if (7 < (int)uStack_2c) {
                if ((uStack_2c == 8) || (uStack_2c == 9)) {
                  uStack_2c = 10;
                }
                uStack_2c = (int)uStack_2c / 10;
                iVar3 = iVar3 - uStack_2c;
                FUN_006acc70((int)puStack_64,(uint)uStack_24,&puStack_c);
                uVar10 = uVar7;
                if ((int)uVar7 < (int)(uVar7 + uStack_2c)) {
                  do {
                    uVar9 = FUN_006acc70(iStack_74,uVar10,&uStack_34);
                    if (uVar9 == 0xfffffffc) break;
                    Library::DKW::TBL::FUN_006ae1c0(puStack_c,&uStack_34);
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)(uVar7 + uStack_2c));
                }
                uVar7 = uVar7 + uStack_2c;
              }
              puStack_14 = (uint *)((int)puStack_14 + 1);
            } while ((int)puStack_14 < (int)puStack_1c);
          }
          uStack_8 = uStack_8 + 1;
        } while ((int)uStack_8 < (int)puStack_40);
      }
      uVar7 = uStack_3c;
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uStack_3c,4,1);
      *(uint **)((int)&DAT_007f5826 + iStack_5c) = puVar4;
      uStack_8 = 0;
      puStack_40 = puVar4;
      if (0 < (int)uVar7) {
        do {
          puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,0x18,1);
          Library::DKW::TBL::FUN_006ae1c0(puVar4,&puStack_c);
          uStack_8 = uStack_8 + 1;
        } while ((int)uStack_8 < (int)uVar7);
      }
      uStack_8 = 0;
      if (0 < (int)uVar7) {
        do {
          FUN_006acc70((int)puStack_64,uStack_8,&puStack_c);
          if (puStack_c[3] != 0) {
            FUN_006acc70((int)puStack_48,uStack_8,&puStack_c);
            FUN_006acc70((int)puStack_c,0,&uStack_34);
            FUN_006acc70((int)puStack_60,uStack_34 & 0xffff,(undefined4 *)&uStack_54);
            piStack_28 = (int *)GetObjPtr(pSStack_6c,param_1,CONCAT22(uStack_52,uStack_54),1);
            if (piStack_28 != (int *)0x0) {
              thunk_FUN_004162b0(piStack_28,&sStack_e,&sStack_10,&sStack_16);
              FUN_006acc70((int)puStack_40,uStack_8,&puStack_c);
              puVar4 = thunk_FUN_0043f7b0((byte)param_1,(int *)0x0,(int)sStack_e,(int)sStack_10,
                                          (int)sStack_16,(int *)0x7,7,4,0);
              puStack_30 = puVar4;
              if (puVar4 != (uint *)0x0) {
                puVar8 = (uint *)puVar4[3];
                uVar7 = 0;
                puStack_1c = puVar8;
                puStack_14 = puVar8;
                if (0 < (int)puVar8) {
                  do {
                    FUN_006acc70((int)puVar4,uVar7,&piStack_28);
                    iVar3 = (**(code **)(*piStack_28 + 0xf8))();
                    if (((iVar3 == 0) || (iVar3 = (**(code **)(*piStack_28 + 0xf0))(), iVar3 == 0))
                       || (iVar3 = (**(code **)(*piStack_28 + 0xf4))(iStack_a0), iVar3 == 0)) {
                      FUN_006b0c70((int)puVar4,uVar7);
                      uVar7 = uVar7 - 1;
                      puStack_14 = (uint *)((int)puStack_14 - 1);
                      puVar8 = (uint *)((int)puVar8 - 1);
                    }
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < (int)puStack_14);
                }
                puStack_1c = puVar8;
                puVar8 = puStack_14;
                if (puVar4[3] != 0) {
                  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)puStack_14,4,1);
                  Library::DKW::TBL::FUN_006ae140(puVar4,(int)puVar8 - 1,&iStack_44);
                  puVar11 = (undefined4 *)puVar4[7];
                  for (; puVar12 = puStack_1c, puVar2 = puStack_14, puVar8 != (uint *)0x0;
                      puVar8 = (uint *)((int)puVar8 + -1)) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                  }
                  while (puStack_1c = puVar12, puStack_14 = puVar2, puStack_1c != (uint *)0x0) {
                    uVar7 = 0;
                    if (0 < (int)puVar2) {
                      do {
                        FUN_006acc70((int)puVar4,uVar7,&iStack_44);
                        if (iStack_44 != 1) {
                          iStack_44 = 1;
                          Library::DKW::TBL::FUN_006ae140(puVar4,uVar7,&iStack_44);
                          FUN_006acc70((int)puStack_30,uVar7,&piStack_28);
                          thunk_FUN_004162b0(piStack_28,&sStack_e,&sStack_10,&sStack_16);
                          uStack_9c = (uint)sStack_e;
                          iStack_98 = (int)sStack_10;
                          iStack_94 = (int)sStack_16;
                          iStack_90 = 1;
                          iStack_8c = *(int *)((int)piStack_28 + 0x219);
                          puStack_88 = (uint *)0x0;
                          uStack_58 = Library::DKW::TBL::FUN_006ae1c0(puStack_c,&uStack_9c);
                          puStack_1c = (uint *)((int)puStack_1c - 1);
                          break;
                        }
                        uVar7 = uVar7 + 1;
                      } while ((int)uVar7 < (int)puVar2);
                    }
                    if (puStack_1c == (uint *)0x0) break;
                    uVar7 = uVar7 + 1;
                    puVar12 = puStack_1c;
                    puVar2 = puStack_14;
                    if ((int)uVar7 < (int)puStack_14) {
                      do {
                        FUN_006acc70((int)puVar4,uVar7,&iStack_44);
                        if (iStack_44 != 1) {
                          FUN_006acc70((int)puStack_30,uVar7,&piStack_28);
                          thunk_FUN_004162b0(piStack_28,&sStack_38,&sStack_36,&uStack_66);
                          uVar10 = (int)sStack_38 - (int)sStack_e >> 0x1f;
                          if (((int)(((int)sStack_38 - (int)sStack_e ^ uVar10) - uVar10) < 3) &&
                             (uVar10 = (int)sStack_36 - (int)sStack_10 >> 0x1f,
                             (int)(((int)sStack_36 - (int)sStack_10 ^ uVar10) - uVar10) < 3)) {
                            iStack_44 = 1;
                            Library::DKW::TBL::FUN_006ae140(puVar4,uVar7,&iStack_44);
                            iStack_90 = iStack_90 + 1;
                            iStack_8c = iStack_8c + *(int *)((int)piStack_28 + 0x219);
                            Library::DKW::TBL::FUN_006ae140(puStack_c,uStack_58,&uStack_9c);
                            puVar12 = (uint *)((int)puVar12 - 1);
                          }
                        }
                        uVar7 = uVar7 + 1;
                        puVar2 = puStack_14;
                      } while ((int)uVar7 < (int)puStack_14);
                    }
                  }
                  FUN_006ae110((byte *)puStack_30);
                }
                FUN_006ae110((byte *)puVar4);
              }
            }
          }
          uStack_8 = uStack_8 + 1;
        } while ((int)uStack_8 < (int)uStack_3c);
      }
      uStack_8 = 0;
      if (0 < (int)uStack_3c) {
        do {
          FUN_006acc70((int)puStack_64,uStack_8,&iStack_84);
          puStack_30 = *(uint **)(iStack_84 + 0xc);
          if (puStack_30 != (uint *)0x0) {
            FUN_006acc70((int)puStack_40,uStack_8,&puStack_c);
            puStack_1c = (uint *)puStack_c[3];
            if (puStack_1c == (uint *)0x0) {
              FUN_006acc70((int)puStack_48,uStack_8,&iStack_80);
              FUN_006acc70(iStack_80,0,&uStack_34);
              FUN_006acc70((int)puStack_60,uStack_34 & 0xffff,(undefined4 *)&uStack_54);
              piStack_28 = (int *)GetObjPtr(pSStack_6c,param_1,CONCAT22(uStack_52,uStack_54),1);
              if (piStack_28 != (int *)0x0) {
                thunk_FUN_004162b0(piStack_28,&sStack_e,&sStack_10,&sStack_16);
                PutOnPlaceGuardBoats
                          (pSStack_6c,param_1,(int)sStack_e,(int)sStack_10,sStack_16,(int)sStack_e,
                           (int)sStack_10,(int)sStack_16,iStack_84);
              }
            }
            else {
              uVar7 = 0;
              uVar10 = 0;
              if (0 < (int)puStack_1c) {
                do {
                  FUN_006acc70((int)puStack_c,uVar10,&uStack_9c);
                  uVar7 = uVar7 + iStack_8c;
                  uVar10 = uVar10 + 1;
                } while ((int)uVar10 < (int)puStack_1c);
              }
              FUN_006acc70((int)puStack_48,uStack_8,&iStack_80);
              FUN_006acc70(iStack_80,0,&uStack_34);
              FUN_006acc70((int)puStack_60,uStack_34 & 0xffff,(undefined4 *)&uStack_54);
              piStack_28 = (int *)GetObjPtr(pSStack_6c,param_1,CONCAT22(uStack_52,uStack_54),1);
              if (piStack_28 != (int *)0x0) {
                thunk_FUN_004162b0(piStack_28,&sStack_e,&sStack_10,&sStack_16);
                uVar10 = 0;
                puStack_14 = (uint *)0x0;
                if (0 < (int)puStack_1c) {
                  do {
                    if (uVar7 != 0) {
                      FUN_006acc70((int)puStack_c,(uint)puStack_14,&uStack_9c);
                      uStack_2c = (uint)(iStack_8c * (int)puStack_30 * 10) / uVar7;
                      uVar7 = uVar7 - iStack_8c;
                      if (7 < (int)uStack_2c) {
                        if ((uStack_2c == 8) || (uStack_2c == 9)) {
                          uStack_2c = 10;
                        }
                        uStack_2c = (int)uStack_2c / 10;
                        puStack_30 = (uint *)((int)puStack_30 - uStack_2c);
                        if (puStack_88 == (uint *)0x0) {
                          puStack_88 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                        }
                        uVar9 = uVar10;
                        if ((int)uVar10 < (int)(uVar10 + uStack_2c)) {
                          do {
                            uVar5 = FUN_006acc70(iStack_84,uVar9,&uStack_34);
                            if (uVar5 == 0xfffffffc) break;
                            Library::DKW::TBL::FUN_006ae1c0(puStack_88,&uStack_34);
                            uVar9 = uVar9 + 1;
                          } while ((int)uVar9 < (int)(uVar10 + uStack_2c));
                        }
                        uVar10 = uVar10 + uStack_2c;
                        if ((puStack_88 != (uint *)0x0) && (puStack_88[3] != 0)) {
                          PutOnPlaceGuardBoats
                                    (pSStack_6c,param_1,(int)sStack_e,(int)sStack_10,sStack_16,
                                     uStack_9c,iStack_98,iStack_94,(int)puStack_88);
                          FUN_006ae110((byte *)puStack_88);
                          puStack_88 = (uint *)0x0;
                        }
                      }
                    }
                    puStack_14 = (uint *)((int)puStack_14 + 1);
                  } while ((int)puStack_14 < (int)puStack_1c);
                }
              }
            }
          }
          uStack_8 = uStack_8 + 1;
        } while ((int)uStack_8 < (int)uStack_3c);
      }
      puVar4 = puStack_7c;
      *(undefined4 *)((int)&DAT_007f582a + iStack_5c) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (puStack_7c != (uint *)0x0) {
        uVar7 = puStack_7c[3];
        uStack_8 = 0;
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)puVar4,uStack_8,&iStack_78);
            if (puStack_70 != (uint *)0x0) {
              FUN_006ae110((byte *)puStack_70);
              puStack_70 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
              Library::DKW::TBL::FUN_006ae140(puVar4,uStack_8,&iStack_78);
            }
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < (int)uVar7);
        }
      }
      puVar4 = puStack_60;
      if (puStack_60 != (uint *)0x0) {
        uVar7 = puStack_60[3];
        uStack_8 = 0;
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)puVar4,uStack_8,(undefined4 *)&uStack_54);
            if ((byte *)CONCAT22(uStack_50,uStack_52) != (byte *)0x0) {
              FUN_006ae110((byte *)CONCAT22(uStack_50,uStack_52));
            }
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < (int)uVar7);
        }
        FUN_006ae110((byte *)puVar4);
        puStack_60 = (uint *)0x0;
        *(undefined4 *)((int)&DAT_007f581a + iStack_5c) = 0;
      }
      uVar7 = uStack_3c;
      puVar4 = puStack_48;
      if (puStack_48 != (uint *)0x0) {
        uStack_8 = 0;
        if (0 < (int)uStack_3c) {
          do {
            FUN_006acc70((int)puVar4,uStack_8,&puStack_c);
            if (puStack_c != (uint *)0x0) {
              FUN_006ae110((byte *)puStack_c);
            }
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < (int)uVar7);
        }
        FUN_006ae110((byte *)puVar4);
        puStack_48 = (uint *)0x0;
        *(undefined4 *)((int)&DAT_007f581e + iStack_5c) = 0;
      }
      uVar7 = uStack_3c;
      puVar4 = puStack_64;
      if (puStack_64 != (uint *)0x0) {
        uStack_8 = 0;
        if (0 < (int)uStack_3c) {
          do {
            FUN_006acc70((int)puVar4,uStack_8,&puStack_c);
            if (puStack_c != (uint *)0x0) {
              FUN_006ae110((byte *)puStack_c);
            }
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < (int)uVar7);
        }
        FUN_006ae110((byte *)puVar4);
        puStack_64 = (uint *)0x0;
        *(undefined4 *)((int)&DAT_007f5822 + iStack_5c) = 0;
      }
      if (puStack_40 != (uint *)0x0) {
        uStack_8 = 0;
        puVar4 = puStack_40;
        if (0 < (int)uStack_3c) {
          do {
            FUN_006acc70((int)puVar4,uStack_8,&puStack_c);
            if (puStack_c != (uint *)0x0) {
              uVar7 = puStack_c[3];
              if ((uVar7 != 0) && (uVar10 = 0, 0 < (int)uVar7)) {
                do {
                  FUN_006acc70((int)puStack_c,uVar10,&uStack_9c);
                  if (puStack_88 != (uint *)0x0) {
                    FUN_006ae110((byte *)puStack_88);
                  }
                  uVar10 = uVar10 + 1;
                } while ((int)uVar10 < (int)uVar7);
              }
              FUN_006ae110((byte *)puStack_c);
              puVar4 = puStack_40;
            }
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < (int)uStack_3c);
        }
        FUN_006ae110((byte *)puVar4);
        *(undefined4 *)((int)&DAT_007f5826 + iStack_5c) = 0;
      }
      g_currentExceptionFrame = IStack_e4.previous;
      return;
    }
    g_currentExceptionFrame = IStack_e4.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2b90,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__DistributeGuardBo_007a8458);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2b91);
    }
  }
  return;
LAB_00447106:
  do {
    FUN_006acc70(CONCAT22(uStack_50,uStack_52),(uint)puStack_14,&uStack_2c);
    FUN_006acc70((int)puStack_7c,uStack_2c,&iStack_78);
    uVar10 = uStack_58;
    uVar7 = puStack_70[3];
    if (uVar7 == 0) {
      uStack_24 = (ushort)uStack_58;
LAB_00447196:
      uStack_22 = 1;
      Library::DKW::TBL::FUN_006ae1c0(puStack_70,(undefined4 *)&uStack_24);
    }
    else {
      uVar9 = 0;
      if (0 < (int)uVar7) {
        do {
          FUN_006acc70((int)puStack_70,uVar9,(undefined4 *)&uStack_24);
          if (uStack_24 == uVar10) {
            uStack_22 = uStack_22 + 1;
            Library::DKW::TBL::FUN_006ae140(puStack_70,uVar9,(undefined4 *)&uStack_24);
            break;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar7);
      }
      if (uVar9 == uVar7) {
        uStack_24 = (ushort)uStack_58;
        goto LAB_00447196;
      }
    }
    puStack_14 = (uint *)((int)puStack_14 + 1);
  } while ((int)puStack_14 < (int)puStack_40);
LAB_004471ad:
  puStack_1c = (uint *)((int)puStack_1c - 1);
  iVar3 = iStack_5c;
  puVar8 = puStack_60;
  puVar4 = puStack_30;
LAB_004471bd:
  if (puStack_1c == (uint *)0x0) goto LAB_0044738a;
  piStack_28 = (int *)GetObjPtr(pSStack_6c,param_1,CONCAT22(uStack_52,uStack_54),1);
  if (piStack_28 != (int *)0x0) {
    thunk_FUN_004162b0(piStack_28,&sStack_e,&sStack_10,&sStack_16);
    uStack_8 = uStack_8 + 1;
    if ((int)uStack_8 < (int)puVar4) {
      do {
        FUN_006acc70((int)puVar8,uStack_8,(undefined4 *)&uStack_54);
        if ((((iStack_4e != 1) &&
             (piStack_28 = (int *)GetObjPtr(pSStack_6c,param_1,CONCAT22(uStack_52,uStack_54),1),
             piStack_28 != (int *)0x0)) &&
            (thunk_FUN_004162b0(piStack_28,&sStack_38,&sStack_36,&uStack_66),
            uVar7 = (int)sStack_38 - (int)sStack_e >> 0x1f,
            (int)(((int)sStack_38 - (int)sStack_e ^ uVar7) - uVar7) < 3)) &&
           (uVar7 = (int)sStack_36 - (int)sStack_10 >> 0x1f,
           (int)(((int)sStack_36 - (int)sStack_10 ^ uVar7) - uVar7) < 3)) {
          iStack_4e = 1;
          Library::DKW::TBL::FUN_006ae140(puVar8,uStack_8,(undefined4 *)&uStack_54);
          Library::DKW::TBL::FUN_006ae1c0(puStack_c,&uStack_8);
          puStack_14 = (uint *)0x0;
          puStack_40 = *(uint **)(CONCAT22(uStack_50,uStack_52) + 0xc);
          if (0 < (int)puStack_40) {
            do {
              FUN_006acc70(CONCAT22(uStack_50,uStack_52),(uint)puStack_14,&uStack_2c);
              FUN_006acc70((int)puStack_7c,uStack_2c,&iStack_78);
              uVar10 = uStack_58;
              uVar7 = puStack_70[3];
              if (uVar7 == 0) {
                uStack_24 = (ushort)uStack_58;
LAB_00447348:
                uStack_22 = 1;
                Library::DKW::TBL::FUN_006ae1c0(puStack_70,(undefined4 *)&uStack_24);
              }
              else {
                uVar9 = 0;
                if (0 < (int)uVar7) {
                  do {
                    FUN_006acc70((int)puStack_70,uVar9,(undefined4 *)&uStack_24);
                    if (uStack_24 == uVar10) {
                      uStack_22 = uStack_22 + 1;
                      Library::DKW::TBL::FUN_006ae140(puStack_70,uVar9,(undefined4 *)&uStack_24);
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar7);
                }
                if (uVar9 == uVar7) {
                  uStack_24 = (ushort)uStack_58;
                  goto LAB_00447348;
                }
              }
              puStack_14 = (uint *)((int)puStack_14 + 1);
            } while ((int)puStack_14 < (int)puStack_40);
          }
          puStack_1c = (uint *)((int)puStack_1c - 1);
          iVar3 = iStack_5c;
          puVar8 = puStack_60;
          puVar4 = puStack_30;
        }
        uStack_8 = uStack_8 + 1;
      } while ((int)uStack_8 < (int)puVar4);
    }
  }
  goto joined_r0x0044707d;
}

