#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042E21D MOVSX ECX,byte ptr [EBP + 0x8] | 0042EB6F MOVSX
   EAX,byte ptr [EBP + 0x8] | 0042EC4D MOVSX ECX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
STAllPlayersC::RegisterObject
          (STAllPlayersC *this,char param_1,uint param_2,uint param_3,int *param_4,int param_5,
          int param_6)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  DArrayTy *pDVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  short sVar10;
  undefined2 uVar11;
  dword dVar12;
  uint uVar13;
  InternalExceptionFrame local_94;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_44;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  DArrayTy *local_28;
  DArrayTy *local_24;
  uint local_20;
  DArrayTy *local_1c;
  STAllPlayersC *local_18;
  uint local_14;
  undefined1 local_10 [4];
  STGroupBoatC *local_c;
  short local_6;

  iVar9 = (int)param_1;
  local_1c = g_playerRuntime[iVar9].groups;
  local_28 = g_playerRuntime[iVar9].objects;
  local_24 = (DArrayTy *)g_playerRuntime[iVar9].field479_0x2e7;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  local_18 = this;
  iVar9 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_94.previous;
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x67e,0,iVar9,&DAT_007a4ccc,
                               s_STAllPlayersC__RegisterObject_007a658c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar9,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x67f);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_4 == (int *)0x0) {
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x5bd);
  }
  pDVar4 = local_28;
  if ((short)param_3 == -1) {
    dVar12 = local_28->count;
  }
  else {
    iVar9 = thunk_FUN_0042b5b0(param_1,param_3);
    if (iVar9 == 1) {
      RaiseInternalException
                (-0x5001fffa,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x5c0);
    }
    dVar12 = param_3 & 0xffff;
  }
  local_20 = dVar12;
  Library::DKW::TBL::FUN_006ae140(&pDVar4->flags,dVar12,&param_4);
  thunk_FUN_00419c50(param_4,(short)dVar12);
  if (param_4[8] == 0x14) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar9 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar9 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar9 + 0x41U) & 0x1f))
        == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar9 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar9 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)
          ) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar9 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar9 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) goto LAB_0042e3eb;
        piVar5 = (int *)&g_playerRuntime[param_1].field_0x33;
      }
      else {
        piVar5 = &g_playerRuntime[param_1].field20_0x2f;
      }
    }
    else {
      piVar5 = &g_playerRuntime[param_1].field19_0x2b;
    }
    *piVar5 = *piVar5 + 1;
  }
LAB_0042e3eb:
  if (param_4[8] == 1000) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar9 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar9 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar9 - 0x32U) & 0x1f))
        == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar9 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar9 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)
          ) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar9 = (**(code **)(*param_4 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((*(uint *)(&DAT_008014a0 + (iVar9 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0) &&
           (iVar9 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar9 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0)) goto LAB_0042e4fd;
        piVar5 = (int *)&g_playerRuntime[param_1].field_0x43;
      }
      else {
        piVar5 = (int *)&g_playerRuntime[param_1].field_0x3f;
      }
    }
    else {
      piVar5 = (int *)&g_playerRuntime[param_1].field_0x3b;
    }
    *piVar5 = *piVar5 + 1;
  }
LAB_0042e4fd:
  iVar9 = param_5;
  pvVar3 = DAT_008016d4;
  if (param_4[8] == 0x14) {
    iVar6 = (int)param_1;
    *(short *)&g_playerRuntime[iVar6].field_0xd = *(short *)&g_playerRuntime[iVar6].field_0xd + 1;
    if (pvVar3 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar3,param_1,(uint)*(ushort *)&g_playerRuntime[iVar6].field_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*param_4 + 0x2c))();
    if (iVar7 != 0x19) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar7 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar7 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar7 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar7 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar7 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar7 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f))
                        == 0) {
                      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x613,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STAllPlayersC__RegisterObject_un_007a65ec);
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      *(int *)&g_playerRuntime[iVar6].field_0xbb =
                           *(int *)&g_playerRuntime[iVar6].field_0xbb + 1;
                      if (iVar9 == 0) {
                        *(int *)&g_playerRuntime[iVar6].field_0xbf =
                             *(int *)&g_playerRuntime[iVar6].field_0xbf + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_playerRuntime[iVar6].field_0xab =
                         *(int *)&g_playerRuntime[iVar6].field_0xab + 1;
                    if (iVar9 == 0) {
                      *(int *)&g_playerRuntime[iVar6].field_0xaf =
                           *(int *)&g_playerRuntime[iVar6].field_0xaf + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_playerRuntime[iVar6].field_0x9b =
                       *(int *)&g_playerRuntime[iVar6].field_0x9b + 1;
                  if (iVar9 == 0) {
                    *(int *)&g_playerRuntime[iVar6].field_0x9f =
                         *(int *)&g_playerRuntime[iVar6].field_0x9f + 1;
                  }
                }
              }
              else {
                *(int *)&g_playerRuntime[iVar6].field_0x8b =
                     *(int *)&g_playerRuntime[iVar6].field_0x8b + 1;
                if (iVar9 == 0) {
                  *(int *)&g_playerRuntime[iVar6].field_0x8f =
                       *(int *)&g_playerRuntime[iVar6].field_0x8f + 1;
                }
              }
            }
            else {
              *(int *)&g_playerRuntime[iVar6].field_0x7b =
                   *(int *)&g_playerRuntime[iVar6].field_0x7b + 1;
              if (iVar9 == 0) {
                *(int *)&g_playerRuntime[iVar6].field_0x7f =
                     *(int *)&g_playerRuntime[iVar6].field_0x7f + 1;
              }
            }
          }
          else {
            *(int *)&g_playerRuntime[iVar6].field_0x6b =
                 *(int *)&g_playerRuntime[iVar6].field_0x6b + 1;
            if (iVar9 == 0) {
              *(int *)&g_playerRuntime[iVar6].field_0x6f =
                   *(int *)&g_playerRuntime[iVar6].field_0x6f + 1;
            }
          }
        }
        else {
          *(int *)&g_playerRuntime[iVar6].field_0x5b =
               *(int *)&g_playerRuntime[iVar6].field_0x5b + 1;
          if (iVar9 == 0) {
            *(int *)&g_playerRuntime[iVar6].field_0x5f =
                 *(int *)&g_playerRuntime[iVar6].field_0x5f + 1;
          }
        }
      }
      else {
        *(int *)&g_playerRuntime[iVar6].field_0x4b = *(int *)&g_playerRuntime[iVar6].field_0x4b + 1;
        if (iVar9 == 0) {
          *(int *)&g_playerRuntime[iVar6].field_0x4f =
               *(int *)&g_playerRuntime[iVar6].field_0x4f + 1;
        }
      }
    }
  }
  pvVar3 = DAT_008016d4;
  if (param_4[8] == 1000) {
    iVar6 = (int)param_1;
    *(short *)&g_playerRuntime[iVar6].field_0xd = *(short *)&g_playerRuntime[iVar6].field_0xd + 1;
    if (pvVar3 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar3,param_1,(uint)*(ushort *)&g_playerRuntime[iVar6].field_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*param_4 + 0x2c))();
    if (iVar7 == 0x33) {
      *(int *)&g_playerRuntime[iVar6].field317_0x15b =
           *(int *)&g_playerRuntime[iVar6].field317_0x15b + 1;
    }
    else if (iVar7 == 0x62) {
      *(int *)&g_playerRuntime[iVar6].field320_0x15f =
           *(int *)&g_playerRuntime[iVar6].field320_0x15f + 1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar7 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar7 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar7 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar7 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) ==
                      0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar7 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f))
                        == 0) {
                      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x653,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STAllPlayersC__RegisterObject_un_007a65b0);
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      *(int *)&g_playerRuntime[iVar6].field_0x14b =
                           *(int *)&g_playerRuntime[iVar6].field_0x14b + 1;
                      if (iVar9 == 0) {
                        *(int *)&g_playerRuntime[iVar6].field_0x14f =
                             *(int *)&g_playerRuntime[iVar6].field_0x14f + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_playerRuntime[iVar6].field_0x13b =
                         *(int *)&g_playerRuntime[iVar6].field_0x13b + 1;
                    if (iVar9 == 0) {
                      *(int *)&g_playerRuntime[iVar6].field_0x13f =
                           *(int *)&g_playerRuntime[iVar6].field_0x13f + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_playerRuntime[iVar6].field_0x12b =
                       *(int *)&g_playerRuntime[iVar6].field_0x12b + 1;
                  if (iVar9 == 0) {
                    *(int *)&g_playerRuntime[iVar6].field_0x12f =
                         *(int *)&g_playerRuntime[iVar6].field_0x12f + 1;
                  }
                }
              }
              else {
                *(int *)&g_playerRuntime[iVar6].field_0x11b =
                     *(int *)&g_playerRuntime[iVar6].field_0x11b + 1;
                if (iVar9 == 0) {
                  *(int *)&g_playerRuntime[iVar6].field_0x11f =
                       *(int *)&g_playerRuntime[iVar6].field_0x11f + 1;
                }
              }
            }
            else {
              *(int *)&g_playerRuntime[iVar6].field_0x10b =
                   *(int *)&g_playerRuntime[iVar6].field_0x10b + 1;
              if (iVar9 == 0) {
                *(int *)&g_playerRuntime[iVar6].field_0x10f =
                     *(int *)&g_playerRuntime[iVar6].field_0x10f + 1;
              }
            }
          }
          else {
            *(int *)&g_playerRuntime[iVar6].field_0xfb =
                 *(int *)&g_playerRuntime[iVar6].field_0xfb + 1;
            if (iVar9 == 0) {
              *(int *)&g_playerRuntime[iVar6].field_0xff =
                   *(int *)&g_playerRuntime[iVar6].field_0xff + 1;
            }
          }
        }
        else {
          *(int *)&g_playerRuntime[iVar6].field_0xeb =
               *(int *)&g_playerRuntime[iVar6].field_0xeb + 1;
          if (iVar9 == 0) {
            *(int *)&g_playerRuntime[iVar6].field_0xef =
                 *(int *)&g_playerRuntime[iVar6].field_0xef + 1;
          }
        }
      }
      else {
        *(int *)&g_playerRuntime[iVar6].field_0xdb = *(int *)&g_playerRuntime[iVar6].field_0xdb + 1;
        if (iVar9 == 0) {
          *(int *)&g_playerRuntime[iVar6].field_0xdf =
               *(int *)&g_playerRuntime[iVar6].field_0xdf + 1;
        }
      }
    }
    else {
      *(int *)&g_playerRuntime[iVar6].field_0xcb = *(int *)&g_playerRuntime[iVar6].field_0xcb + 1;
      if (iVar9 == 0) {
        *(int *)&g_playerRuntime[iVar6].field_0xcf = *(int *)&g_playerRuntime[iVar6].field_0xcf + 1;
      }
    }
  }
  if ((short)param_2 == -2) {
LAB_0042eb3e:
    uVar13 = local_1c->count;
    local_14 = uVar13;
    uVar2 = uVar13;
    if (uVar13 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        DArrayGetElement(local_1c,uVar2,&local_c);
        if (local_c == (STGroupBoatC *)0x0) {
          uVar13 = uVar2;
          local_14 = uVar2;
        }
      }
    }
    local_4c = (int)param_1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_44 = 1;
    local_3c = uVar13;
    (*PTR_00802a38->vtable->vfunc_08)(0x10ff,local_10,&local_c,local_50,0);
    Library::DKW::TBL::FUN_006ae140(&local_1c->flags,uVar13,&local_c);
    iVar9 = param_5;
  }
  else {
    if ((((short)param_2 != -1) && (iVar9 == 0)) &&
       (local_c = thunk_FUN_0042b760(param_1,param_2), local_c == (STGroupBoatC *)0x0)) {
      param_2 = 0xfffe;
    }
    uVar13 = local_14;
    if ((short)param_2 == -2) goto LAB_0042eb3e;
  }
  sVar10 = (short)param_2;
  if (sVar10 == -2) {
LAB_0042ebe7:
    uVar11 = (undefined2)uVar13;
    if (sVar10 != -1) goto LAB_0042ebf6;
  }
  else if (sVar10 != -1) {
    local_c = thunk_FUN_0042b760(param_1,param_2);
    uVar13 = param_2 & 0xffff;
    local_14 = uVar13;
    goto LAB_0042ebe7;
  }
  uVar11 = 0xffff;
  local_14 = 0xffff;
LAB_0042ebf6:
  thunk_FUN_00419c30(param_4,uVar11);
  if (((iVar9 == 0) || (param_6 == 1)) && (sVar10 != -1)) {
    STGroupC::AddObj((STGroupC *)local_c,local_20,(uint)(sVar10 != -2));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar9 = (**(code **)(*param_4 + 0x2c))();
  if (iVar9 == 0x1d) {
    if (local_24 == (DArrayTy *)0x0) {
      local_24 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      g_playerRuntime[param_1].field479_0x2e7 = local_24;
    }
    pDVar4 = local_24;
    uVar13 = local_24->count;
    uVar2 = uVar13;
    if (uVar13 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        DArrayGetElement(pDVar4,uVar2,&local_6);
        if (local_6 == -1) {
          uVar13 = uVar2;
        }
      }
    }
    Library::DKW::TBL::FUN_006ae140(&pDVar4->flags,uVar13,(undefined4 *)((int)param_4 + 0x32));
  }
  g_currentExceptionFrame = local_94.previous;
  return 0;
}

