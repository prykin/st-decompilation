
undefined4 __thiscall
STAllPlayersC::RegisterObject
          (STAllPlayersC *this,int param_1,uint param_2,uint param_3,int *param_4,int param_5,
          int param_6)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  short sVar10;
  undefined2 uVar11;
  undefined4 unaff_ESI;
  uint uVar12;
  int iVar13;
  void *unaff_EDI;
  undefined4 uStack_94;
  undefined4 auStack_90 [16];
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_44;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint *puStack_28;
  uint *puStack_24;
  uint uStack_20;
  uint *puStack_1c;
  STAllPlayersC *pSStack_18;
  uint uStack_14;
  undefined1 auStack_10 [4];
  STGroupC *pSStack_c;
  short sStack_6;
  
  iVar6 = (char)param_1 * 0xa62;
  puStack_1c = *(uint **)((int)&DAT_007f4e24 + iVar6 + 1);
  puStack_28 = *(uint **)((int)&DAT_007f4e29 + iVar6);
  puStack_24 = *(uint **)((int)&DAT_007f5107 + iVar6);
  uStack_94 = DAT_00858df8;
  DAT_00858df8 = &uStack_94;
  pSStack_18 = this;
  iVar6 = __setjmp3(auStack_90,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_94;
    iVar13 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x67e,0,iVar6,&DAT_007a4ccc);
    if (iVar13 == 0) {
      FUN_006a5e40(iVar6,0,0x7a6004,0x67f);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  if (param_4 == (int *)0x0) {
    FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x5bd);
  }
  puVar4 = puStack_28;
  if ((short)param_3 == -1) {
    uVar12 = puStack_28[3];
  }
  else {
    bVar5 = thunk_FUN_0042b5b0(param_1,param_3);
    if (CONCAT31(extraout_var,bVar5) == 1) {
      FUN_006a5e40(-0x5001fffa,DAT_007ed77c,0x7a6004,0x5c0);
    }
    uVar12 = param_3 & 0xffff;
  }
  uStack_20 = uVar12;
  FUN_006ae140(puVar4,uVar12,&param_4);
  thunk_FUN_00419c50(param_4,(short)uVar12);
  if (param_4[8] == 0x14) {
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar6 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar6 + 0x41U) & 0x1f))
        == 0) {
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar6 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)
          ) == 0) {
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar6 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) goto LAB_0042e3eb;
        piVar7 = (int *)(&DAT_007f4e53 + (char)param_1 * 0xa62);
      }
      else {
        piVar7 = (int *)((int)&DAT_007f4e4f + (char)param_1 * 0xa62);
      }
    }
    else {
      piVar7 = (int *)((int)&DAT_007f4e4b + (char)param_1 * 0xa62);
    }
    *piVar7 = *piVar7 + 1;
  }
LAB_0042e3eb:
  if (param_4[8] == 1000) {
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar6 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar6 - 0x32U) & 0x1f))
        == 0) {
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar6 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)
          ) == 0) {
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if (((*(uint *)(&DAT_008014a0 + (iVar6 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) &&
           (iVar6 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar6 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0)) goto LAB_0042e4fd;
        piVar7 = (int *)(&DAT_007f4e63 + (char)param_1 * 0xa62);
      }
      else {
        piVar7 = (int *)(&DAT_007f4e5f + (char)param_1 * 0xa62);
      }
    }
    else {
      piVar7 = (int *)(&DAT_007f4e5b + (char)param_1 * 0xa62);
    }
    *piVar7 = *piVar7 + 1;
  }
LAB_0042e4fd:
  iVar6 = param_5;
  pvVar3 = DAT_008016d4;
  if (param_4[8] == 0x14) {
    iVar13 = (char)param_1 * 0xa62;
    *(short *)(&DAT_007f4e2d + iVar13) = *(short *)(&DAT_007f4e2d + iVar13) + 1;
    if (pvVar3 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar3,(char)param_1,(uint)*(ushort *)(&DAT_007f4e2d + iVar13));
    }
    iVar8 = (**(code **)(*param_4 + 0x2c))();
    if (iVar8 != 0x19) {
      iVar8 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
        iVar8 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
          iVar8 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
            iVar8 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
              iVar8 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0)
              {
                iVar8 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0
                   ) {
                  iVar8 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar8 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
                    iVar8 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f))
                        == 0) {
                      iVar13 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x613,0,0,
                                            &DAT_007a4ccc);
                      if (iVar13 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return uVar9;
                      }
                    }
                    else {
                      *(int *)(&DAT_007f4edb + iVar13) = *(int *)(&DAT_007f4edb + iVar13) + 1;
                      if (iVar6 == 0) {
                        *(int *)(&DAT_007f4edf + iVar13) = *(int *)(&DAT_007f4edf + iVar13) + 1;
                      }
                    }
                  }
                  else {
                    *(int *)(&DAT_007f4ecb + iVar13) = *(int *)(&DAT_007f4ecb + iVar13) + 1;
                    if (iVar6 == 0) {
                      *(int *)(&DAT_007f4ecf + iVar13) = *(int *)(&DAT_007f4ecf + iVar13) + 1;
                    }
                  }
                }
                else {
                  *(int *)(&DAT_007f4ebb + iVar13) = *(int *)(&DAT_007f4ebb + iVar13) + 1;
                  if (iVar6 == 0) {
                    *(int *)(&DAT_007f4ebf + iVar13) = *(int *)(&DAT_007f4ebf + iVar13) + 1;
                  }
                }
              }
              else {
                *(int *)(&DAT_007f4eab + iVar13) = *(int *)(&DAT_007f4eab + iVar13) + 1;
                if (iVar6 == 0) {
                  *(int *)(&DAT_007f4eaf + iVar13) = *(int *)(&DAT_007f4eaf + iVar13) + 1;
                }
              }
            }
            else {
              *(int *)(&DAT_007f4e9b + iVar13) = *(int *)(&DAT_007f4e9b + iVar13) + 1;
              if (iVar6 == 0) {
                *(int *)(&DAT_007f4e9f + iVar13) = *(int *)(&DAT_007f4e9f + iVar13) + 1;
              }
            }
          }
          else {
            *(int *)(&DAT_007f4e8b + iVar13) = *(int *)(&DAT_007f4e8b + iVar13) + 1;
            if (iVar6 == 0) {
              *(int *)(&DAT_007f4e8f + iVar13) = *(int *)(&DAT_007f4e8f + iVar13) + 1;
            }
          }
        }
        else {
          *(int *)(&DAT_007f4e7b + iVar13) = *(int *)(&DAT_007f4e7b + iVar13) + 1;
          if (iVar6 == 0) {
            *(int *)(&DAT_007f4e7f + iVar13) = *(int *)(&DAT_007f4e7f + iVar13) + 1;
          }
        }
      }
      else {
        *(int *)(&DAT_007f4e6b + iVar13) = *(int *)(&DAT_007f4e6b + iVar13) + 1;
        if (iVar6 == 0) {
          *(int *)(&DAT_007f4e6f + iVar13) = *(int *)(&DAT_007f4e6f + iVar13) + 1;
        }
      }
    }
  }
  pvVar3 = DAT_008016d4;
  if (param_4[8] == 1000) {
    iVar13 = (char)param_1 * 0xa62;
    *(short *)(&DAT_007f4e2d + iVar13) = *(short *)(&DAT_007f4e2d + iVar13) + 1;
    if (pvVar3 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar3,(char)param_1,(uint)*(ushort *)(&DAT_007f4e2d + iVar13));
    }
    iVar8 = (**(code **)(*param_4 + 0x2c))();
    if (iVar8 == 0x33) {
      *(int *)(&DAT_007f4f7b + iVar13) = *(int *)(&DAT_007f4f7b + iVar13) + 1;
    }
    else if (iVar8 == 0x62) {
      *(int *)(&DAT_007f4f7f + iVar13) = *(int *)(&DAT_007f4f7f + iVar13) + 1;
    }
    iVar8 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
      iVar8 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
        iVar8 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
          iVar8 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
            iVar8 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
              iVar8 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0)
              {
                iVar8 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0
                   ) {
                  iVar8 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) ==
                      0) {
                    iVar8 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f))
                        == 0) {
                      iVar13 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x653,0,0,
                                            &DAT_007a4ccc);
                      if (iVar13 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return uVar9;
                      }
                    }
                    else {
                      *(int *)(&DAT_007f4f6b + iVar13) = *(int *)(&DAT_007f4f6b + iVar13) + 1;
                      if (iVar6 == 0) {
                        *(int *)(&DAT_007f4f6f + iVar13) = *(int *)(&DAT_007f4f6f + iVar13) + 1;
                      }
                    }
                  }
                  else {
                    *(int *)(&DAT_007f4f5b + iVar13) = *(int *)(&DAT_007f4f5b + iVar13) + 1;
                    if (iVar6 == 0) {
                      *(int *)(&DAT_007f4f5f + iVar13) = *(int *)(&DAT_007f4f5f + iVar13) + 1;
                    }
                  }
                }
                else {
                  *(int *)(&DAT_007f4f4b + iVar13) = *(int *)(&DAT_007f4f4b + iVar13) + 1;
                  if (iVar6 == 0) {
                    *(int *)(&DAT_007f4f4f + iVar13) = *(int *)(&DAT_007f4f4f + iVar13) + 1;
                  }
                }
              }
              else {
                *(int *)(&DAT_007f4f3b + iVar13) = *(int *)(&DAT_007f4f3b + iVar13) + 1;
                if (iVar6 == 0) {
                  *(int *)(&DAT_007f4f3f + iVar13) = *(int *)(&DAT_007f4f3f + iVar13) + 1;
                }
              }
            }
            else {
              *(int *)(&DAT_007f4f2b + iVar13) = *(int *)(&DAT_007f4f2b + iVar13) + 1;
              if (iVar6 == 0) {
                *(int *)(&DAT_007f4f2f + iVar13) = *(int *)(&DAT_007f4f2f + iVar13) + 1;
              }
            }
          }
          else {
            *(int *)(&DAT_007f4f1b + iVar13) = *(int *)(&DAT_007f4f1b + iVar13) + 1;
            if (iVar6 == 0) {
              *(int *)(&DAT_007f4f1f + iVar13) = *(int *)(&DAT_007f4f1f + iVar13) + 1;
            }
          }
        }
        else {
          *(int *)(&DAT_007f4f0b + iVar13) = *(int *)(&DAT_007f4f0b + iVar13) + 1;
          if (iVar6 == 0) {
            *(int *)(&DAT_007f4f0f + iVar13) = *(int *)(&DAT_007f4f0f + iVar13) + 1;
          }
        }
      }
      else {
        *(int *)(&DAT_007f4efb + iVar13) = *(int *)(&DAT_007f4efb + iVar13) + 1;
        if (iVar6 == 0) {
          *(int *)(&DAT_007f4eff + iVar13) = *(int *)(&DAT_007f4eff + iVar13) + 1;
        }
      }
    }
    else {
      *(int *)(&DAT_007f4eeb + iVar13) = *(int *)(&DAT_007f4eeb + iVar13) + 1;
      if (iVar6 == 0) {
        *(int *)(&DAT_007f4eef + iVar13) = *(int *)(&DAT_007f4eef + iVar13) + 1;
      }
    }
  }
  if ((short)param_2 == -2) {
LAB_0042eb3e:
    uVar12 = puStack_1c[3];
    uStack_14 = uVar12;
    uVar2 = uVar12;
    if (uVar12 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        FUN_006acc70((int)puStack_1c,uVar2,&pSStack_c);
        if (pSStack_c == (STGroupC *)0x0) {
          uVar12 = uVar2;
          uStack_14 = uVar2;
        }
      }
    }
    iStack_4c = (int)(char)param_1;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_44 = 1;
    uStack_3c = uVar12;
    (**(code **)(*DAT_00802a38 + 8))(0x10ff,auStack_10,&pSStack_c,auStack_50,0);
    FUN_006ae140(puStack_1c,uVar12,&pSStack_c);
    iVar6 = param_5;
  }
  else {
    if ((((short)param_2 != -1) && (iVar6 == 0)) &&
       (pSStack_c = (STGroupC *)thunk_FUN_0042b760(param_1,param_2), pSStack_c == (STGroupC *)0x0))
    {
      param_2 = 0xfffe;
    }
    uVar12 = uStack_14;
    if ((short)param_2 == -2) goto LAB_0042eb3e;
  }
  sVar10 = (short)param_2;
  if (sVar10 == -2) {
LAB_0042ebe7:
    uVar11 = (undefined2)uVar12;
    if (sVar10 != -1) goto LAB_0042ebf6;
  }
  else if (sVar10 != -1) {
    pSStack_c = (STGroupC *)thunk_FUN_0042b760(param_1,param_2);
    uVar12 = param_2 & 0xffff;
    uStack_14 = uVar12;
    goto LAB_0042ebe7;
  }
  uVar11 = 0xffff;
  uStack_14 = 0xffff;
LAB_0042ebf6:
  thunk_FUN_00419c30(param_4,uVar11);
  if (((iVar6 == 0) || (param_6 == 1)) && (sVar10 != -1)) {
    STGroupC::AddObj(pSStack_c,uStack_20,(uint)(sVar10 != -2));
  }
  iVar6 = (**(code **)(*param_4 + 0x2c))();
  if (iVar6 == 0x1d) {
    if (puStack_24 == (uint *)0x0) {
      puStack_24 = FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)&DAT_007f5107 + (char)param_1 * 0xa62) = puStack_24;
    }
    puVar4 = puStack_24;
    uVar12 = puStack_24[3];
    uVar2 = uVar12;
    if (uVar12 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        FUN_006acc70((int)puVar4,uVar2,(undefined4 *)&sStack_6);
        if (sStack_6 == -1) {
          uVar12 = uVar2;
        }
      }
    }
    FUN_006ae140(puVar4,uVar12,(undefined4 *)((int)param_4 + 0x32));
  }
  DAT_00858df8 = (undefined4 *)uStack_94;
  return 0;
}

