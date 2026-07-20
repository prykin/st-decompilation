
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterObject */

undefined4 __thiscall
STAllPlayersC::RegisterObject
          (STAllPlayersC *this,int param_1,uint param_2,uint param_3,int *param_4,int param_5,
          int param_6)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  DArrayTy *pDVar4;
  AnonShape_006ACC70_C8641025 *pAVar5;
  bool bVar6;
  undefined3 extraout_var;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  short sVar12;
  undefined2 uVar13;
  undefined4 unaff_ESI;
  dword dVar14;
  uint uVar15;
  void *unaff_EDI;
  InternalExceptionFrame local_94;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_44;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  DArrayTy *local_28;
  AnonShape_006ACC70_C8641025 *local_24;
  uint local_20;
  DArrayTy *local_1c;
  STAllPlayersC *local_18;
  uint local_14;
  undefined1 local_10 [4];
  STGroupBoatC *local_c;
  short local_6;
  
  iVar11 = (int)(char)param_1;
  local_1c = g_playerRuntime[iVar11].groups;
  local_28 = g_playerRuntime[iVar11].objects;
  local_24 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[iVar11].field597_0x2e7;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  local_18 = this;
  iVar11 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_94.previous;
    iVar8 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x67e,0,iVar11,&DAT_007a4ccc
                               ,s_STAllPlayersC__RegisterObject_007a658c);
    if (iVar8 == 0) {
      RaiseInternalException(iVar11,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x67f);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return uVar10;
  }
  if (param_4 == (int *)0x0) {
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x5bd);
  }
  pDVar4 = local_28;
  if ((short)param_3 == -1) {
    dVar14 = local_28->count;
  }
  else {
    bVar6 = thunk_FUN_0042b5b0(param_1,param_3);
    if (CONCAT31(extraout_var,bVar6) == 1) {
      RaiseInternalException
                (-0x5001fffa,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x5c0);
    }
    dVar14 = param_3 & 0xffff;
  }
  local_20 = dVar14;
  Library::DKW::TBL::FUN_006ae140(&pDVar4->flags,dVar14,&param_4);
  thunk_FUN_00419c50(param_4,(short)dVar14);
  if (param_4[8] == 0x14) {
    iVar11 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar11 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar11 + 0x41U) & 0x1f)
        ) == 0) {
      iVar11 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar11 + 0x41U >> 5) * 4) &
          1 << ((byte)(iVar11 + 0x41U) & 0x1f)) == 0) {
        iVar11 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar11 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar11 + 0x41U) & 0x1f)) == 0) goto LAB_0042e3eb;
        piVar7 = (int *)&g_playerRuntime[(char)param_1].field_0x33;
      }
      else {
        piVar7 = &g_playerRuntime[(char)param_1].field23_0x2f;
      }
    }
    else {
      piVar7 = &g_playerRuntime[(char)param_1].field22_0x2b;
    }
    *piVar7 = *piVar7 + 1;
  }
LAB_0042e3eb:
  if (param_4[8] == 1000) {
    iVar11 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar11 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar11 - 0x32U) & 0x1f)
        ) == 0) {
      iVar11 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar11 - 0x32U >> 5) * 4) &
          1 << ((byte)(iVar11 - 0x32U) & 0x1f)) == 0) {
        iVar11 = (**(code **)(*param_4 + 0x2c))();
        if (((*(uint *)(&DAT_008014a0 + (iVar11 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar11 - 0x32U) & 0x1f)) == 0) &&
           (iVar11 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar11 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar11 - 0x32U) & 0x1f)) == 0)) goto LAB_0042e4fd;
        piVar7 = (int *)&g_playerRuntime[(char)param_1].field_0x43;
      }
      else {
        piVar7 = (int *)&g_playerRuntime[(char)param_1].field_0x3f;
      }
    }
    else {
      piVar7 = (int *)&g_playerRuntime[(char)param_1].field_0x3b;
    }
    *piVar7 = *piVar7 + 1;
  }
LAB_0042e4fd:
  iVar11 = param_5;
  pvVar3 = DAT_008016d4;
  if (param_4[8] == 0x14) {
    iVar8 = (int)(char)param_1;
    *(short *)&g_playerRuntime[iVar8].field_0xd = *(short *)&g_playerRuntime[iVar8].field_0xd + 1;
    if (pvVar3 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar3,(char)param_1,(uint)*(ushort *)&g_playerRuntime[iVar8].field_0xd);
    }
    iVar9 = (**(code **)(*param_4 + 0x2c))();
    if (iVar9 != 0x19) {
      iVar9 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar9 + 0x41U >> 5] & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) {
        iVar9 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar9 + 0x41U >> 5] & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) {
          iVar9 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar9 + 0x41U >> 5] & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) {
            iVar9 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar9 + 0x41U >> 5] & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) {
              iVar9 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar9 + 0x41U >> 5] & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0)
              {
                iVar9 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar9 + 0x41U >> 5] & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0
                   ) {
                  iVar9 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar9 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) {
                    iVar9 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar9 + 0x41U >> 5] & 1 << ((byte)(iVar9 + 0x41U) & 0x1f))
                        == 0) {
                      iVar8 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x613,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STAllPlayersC__RegisterObject_un_007a65ec);
                      if (iVar8 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar10 = (*pcVar1)();
                        return uVar10;
                      }
                    }
                    else {
                      *(int *)&g_playerRuntime[iVar8].field_0xbb =
                           *(int *)&g_playerRuntime[iVar8].field_0xbb + 1;
                      if (iVar11 == 0) {
                        *(int *)&g_playerRuntime[iVar8].field_0xbf =
                             *(int *)&g_playerRuntime[iVar8].field_0xbf + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_playerRuntime[iVar8].field_0xab =
                         *(int *)&g_playerRuntime[iVar8].field_0xab + 1;
                    if (iVar11 == 0) {
                      *(int *)&g_playerRuntime[iVar8].field_0xaf =
                           *(int *)&g_playerRuntime[iVar8].field_0xaf + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_playerRuntime[iVar8].field_0x9b =
                       *(int *)&g_playerRuntime[iVar8].field_0x9b + 1;
                  if (iVar11 == 0) {
                    *(int *)&g_playerRuntime[iVar8].field_0x9f =
                         *(int *)&g_playerRuntime[iVar8].field_0x9f + 1;
                  }
                }
              }
              else {
                *(int *)&g_playerRuntime[iVar8].field_0x8b =
                     *(int *)&g_playerRuntime[iVar8].field_0x8b + 1;
                if (iVar11 == 0) {
                  *(int *)&g_playerRuntime[iVar8].field_0x8f =
                       *(int *)&g_playerRuntime[iVar8].field_0x8f + 1;
                }
              }
            }
            else {
              *(int *)&g_playerRuntime[iVar8].field_0x7b =
                   *(int *)&g_playerRuntime[iVar8].field_0x7b + 1;
              if (iVar11 == 0) {
                *(int *)&g_playerRuntime[iVar8].field_0x7f =
                     *(int *)&g_playerRuntime[iVar8].field_0x7f + 1;
              }
            }
          }
          else {
            *(int *)&g_playerRuntime[iVar8].field_0x6b =
                 *(int *)&g_playerRuntime[iVar8].field_0x6b + 1;
            if (iVar11 == 0) {
              *(int *)&g_playerRuntime[iVar8].field_0x6f =
                   *(int *)&g_playerRuntime[iVar8].field_0x6f + 1;
            }
          }
        }
        else {
          *(int *)&g_playerRuntime[iVar8].field_0x5b =
               *(int *)&g_playerRuntime[iVar8].field_0x5b + 1;
          if (iVar11 == 0) {
            *(int *)&g_playerRuntime[iVar8].field_0x5f =
                 *(int *)&g_playerRuntime[iVar8].field_0x5f + 1;
          }
        }
      }
      else {
        *(int *)&g_playerRuntime[iVar8].field_0x4b = *(int *)&g_playerRuntime[iVar8].field_0x4b + 1;
        if (iVar11 == 0) {
          *(int *)&g_playerRuntime[iVar8].field_0x4f =
               *(int *)&g_playerRuntime[iVar8].field_0x4f + 1;
        }
      }
    }
  }
  pvVar3 = DAT_008016d4;
  if (param_4[8] == 1000) {
    iVar8 = (int)(char)param_1;
    *(short *)&g_playerRuntime[iVar8].field_0xd = *(short *)&g_playerRuntime[iVar8].field_0xd + 1;
    if (pvVar3 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar3,(char)param_1,(uint)*(ushort *)&g_playerRuntime[iVar8].field_0xd);
    }
    iVar9 = (**(code **)(*param_4 + 0x2c))();
    if (iVar9 == 0x33) {
      *(int *)&g_playerRuntime[iVar8].field320_0x15b =
           *(int *)&g_playerRuntime[iVar8].field320_0x15b + 1;
    }
    else if (iVar9 == 0x62) {
      *(int *)&g_playerRuntime[iVar8].field323_0x15f =
           *(int *)&g_playerRuntime[iVar8].field323_0x15f + 1;
    }
    iVar9 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0) {
      iVar9 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0) {
        iVar9 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0) {
          iVar9 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0) {
            iVar9 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0) {
              iVar9 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0)
              {
                iVar9 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0
                   ) {
                  iVar9 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)) ==
                      0) {
                    iVar9 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar9 - 0x32U >> 5] & 1 << ((byte)(iVar9 - 0x32U) & 0x1f))
                        == 0) {
                      iVar8 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x653,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STAllPlayersC__RegisterObject_un_007a65b0);
                      if (iVar8 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar10 = (*pcVar1)();
                        return uVar10;
                      }
                    }
                    else {
                      *(int *)&g_playerRuntime[iVar8].field_0x14b =
                           *(int *)&g_playerRuntime[iVar8].field_0x14b + 1;
                      if (iVar11 == 0) {
                        *(int *)&g_playerRuntime[iVar8].field_0x14f =
                             *(int *)&g_playerRuntime[iVar8].field_0x14f + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_playerRuntime[iVar8].field_0x13b =
                         *(int *)&g_playerRuntime[iVar8].field_0x13b + 1;
                    if (iVar11 == 0) {
                      *(int *)&g_playerRuntime[iVar8].field_0x13f =
                           *(int *)&g_playerRuntime[iVar8].field_0x13f + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_playerRuntime[iVar8].field_0x12b =
                       *(int *)&g_playerRuntime[iVar8].field_0x12b + 1;
                  if (iVar11 == 0) {
                    *(int *)&g_playerRuntime[iVar8].field_0x12f =
                         *(int *)&g_playerRuntime[iVar8].field_0x12f + 1;
                  }
                }
              }
              else {
                *(int *)&g_playerRuntime[iVar8].field_0x11b =
                     *(int *)&g_playerRuntime[iVar8].field_0x11b + 1;
                if (iVar11 == 0) {
                  *(int *)&g_playerRuntime[iVar8].field_0x11f =
                       *(int *)&g_playerRuntime[iVar8].field_0x11f + 1;
                }
              }
            }
            else {
              *(int *)&g_playerRuntime[iVar8].field_0x10b =
                   *(int *)&g_playerRuntime[iVar8].field_0x10b + 1;
              if (iVar11 == 0) {
                *(int *)&g_playerRuntime[iVar8].field_0x10f =
                     *(int *)&g_playerRuntime[iVar8].field_0x10f + 1;
              }
            }
          }
          else {
            *(int *)&g_playerRuntime[iVar8].field_0xfb =
                 *(int *)&g_playerRuntime[iVar8].field_0xfb + 1;
            if (iVar11 == 0) {
              *(int *)&g_playerRuntime[iVar8].field_0xff =
                   *(int *)&g_playerRuntime[iVar8].field_0xff + 1;
            }
          }
        }
        else {
          *(int *)&g_playerRuntime[iVar8].field_0xeb =
               *(int *)&g_playerRuntime[iVar8].field_0xeb + 1;
          if (iVar11 == 0) {
            *(int *)&g_playerRuntime[iVar8].field_0xef =
                 *(int *)&g_playerRuntime[iVar8].field_0xef + 1;
          }
        }
      }
      else {
        *(int *)&g_playerRuntime[iVar8].field_0xdb = *(int *)&g_playerRuntime[iVar8].field_0xdb + 1;
        if (iVar11 == 0) {
          *(int *)&g_playerRuntime[iVar8].field_0xdf =
               *(int *)&g_playerRuntime[iVar8].field_0xdf + 1;
        }
      }
    }
    else {
      *(int *)&g_playerRuntime[iVar8].field_0xcb = *(int *)&g_playerRuntime[iVar8].field_0xcb + 1;
      if (iVar11 == 0) {
        *(int *)&g_playerRuntime[iVar8].field_0xcf = *(int *)&g_playerRuntime[iVar8].field_0xcf + 1;
      }
    }
  }
  if ((short)param_2 == -2) {
LAB_0042eb3e:
    uVar15 = local_1c->count;
    local_14 = uVar15;
    uVar2 = uVar15;
    if (uVar15 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_1c,uVar2,&local_c);
        if (local_c == (STGroupBoatC *)0x0) {
          uVar15 = uVar2;
          local_14 = uVar2;
        }
      }
    }
    local_4c = (int)(char)param_1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_44 = 1;
    local_3c = uVar15;
    (*PTR_00802a38->vtable->vfunc_08)(0x10ff,local_10,&local_c,local_50,0);
    Library::DKW::TBL::FUN_006ae140(&local_1c->flags,uVar15,&local_c);
    iVar11 = param_5;
  }
  else {
    if ((((short)param_2 != -1) && (iVar11 == 0)) &&
       (local_c = thunk_FUN_0042b760(param_1,param_2), local_c == (STGroupBoatC *)0x0)) {
      param_2 = 0xfffe;
    }
    uVar15 = local_14;
    if ((short)param_2 == -2) goto LAB_0042eb3e;
  }
  sVar12 = (short)param_2;
  if (sVar12 == -2) {
LAB_0042ebe7:
    uVar13 = (undefined2)uVar15;
    if (sVar12 != -1) goto LAB_0042ebf6;
  }
  else if (sVar12 != -1) {
    local_c = thunk_FUN_0042b760(param_1,param_2);
    uVar15 = param_2 & 0xffff;
    local_14 = uVar15;
    goto LAB_0042ebe7;
  }
  uVar13 = 0xffff;
  local_14 = 0xffff;
LAB_0042ebf6:
  thunk_FUN_00419c30(param_4,uVar13);
  if (((iVar11 == 0) || (param_6 == 1)) && (sVar12 != -1)) {
    STGroupC::AddObj((STGroupC *)local_c,local_20,(uint)(sVar12 != -2));
  }
  iVar11 = (**(code **)(*param_4 + 0x2c))();
  if (iVar11 == 0x1d) {
    if (local_24 == (AnonShape_006ACC70_C8641025 *)0x0) {
      local_24 = (AnonShape_006ACC70_C8641025 *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      g_playerRuntime[(char)param_1].field597_0x2e7 = local_24;
    }
    pAVar5 = local_24;
    uVar15 = local_24->field_000C;
    uVar2 = uVar15;
    if (uVar15 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        FUN_006acc70(pAVar5,uVar2,(undefined4 *)&local_6);
        if (local_6 == -1) {
          uVar15 = uVar2;
        }
      }
    }
    Library::DKW::TBL::FUN_006ae140((uint *)pAVar5,uVar15,(undefined4 *)((int)param_4 + 0x32));
  }
  g_currentExceptionFrame = local_94.previous;
  return 0;
}

