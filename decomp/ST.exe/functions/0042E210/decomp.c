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
  uint uVar2;
  MoneyTy *pMVar3;
  DArrayTy *pDVar4;
  int iVar9;
  int local_EAX_168;
  int *piVar5;
  int iVar7;
  int iVar8;
  int local_EAX_1462;
  int local_EAX_2281;
  undefined4 uVar9;
  int iVar6;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
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

  iVar10 = (int)param_1;
  local_1c = (DArrayTy *)g_packedRecords_A62x8[iVar10].field2_0x5;
  local_28 = (DArrayTy *)g_packedRecords_A62x8[iVar10].field3_0x9;
  local_24 = (DArrayTy *)g_packedRecords_A62x8[iVar10].field355_0x2e7;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  local_18 = this;
  iVar9 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_94.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x67e,0,iVar9,"%s",
                               "STAllPlayersC::RegisterObject");
    if (iVar6 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x67f);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_4 == nullptr) {
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x5bd);
  }
  pDVar4 = local_28;
  if ((ushort)param_3 == 0xffff) {
    uVar13 = local_28->count;
  }
  else {
    local_EAX_168 = thunk_FUN_0042b5b0(param_1,(ushort)param_3);
    if (local_EAX_168 == 1) {
      RaiseInternalException
                (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x5c0);
    }
    uVar13 = param_3 & 0xffff;
  }
  local_20 = uVar13;
  Library::DKW::TBL::DArrayPut(pDVar4,uVar13,&param_4);
  thunk_FUN_00419c50(param_4,(ushort)uVar13);
  if (param_4[8] == 0x14) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar10 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar10 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar10 + 0x41U) & 0x1f)
        ) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar10 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar10 + 0x41U >> 5) * 4) &
          1 << ((byte)(iVar10 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar10 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar10 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar10 + 0x41U) & 0x1f)) == 0) goto LAB_0042e3eb;
        piVar5 = &g_packedRecords_A62x8[param_1].field20_0x33;
      }
      else {
        piVar5 = &g_packedRecords_A62x8[param_1].field19_0x2f;
      }
    }
    else {
      piVar5 = &g_packedRecords_A62x8[param_1].field18_0x2b;
    }
    *piVar5 = *piVar5 + 1;
  }
LAB_0042e3eb:
  if (param_4[8] == 1000) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar10 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar10 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar10 - 0x32U) & 0x1f)
        ) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar10 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar10 - 0x32U >> 5) * 4) &
          1 << ((byte)(iVar10 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar10 = (**(code **)(*param_4 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((*(uint *)(&DAT_008014a0 + (iVar10 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar10 - 0x32U) & 0x1f)) == 0) &&
           (iVar10 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar10 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar10 - 0x32U) & 0x1f)) == 0)) goto LAB_0042e4fd;
        piVar5 = &g_packedRecords_A62x8[param_1].field24_0x43;
      }
      else {
        piVar5 = &g_packedRecords_A62x8[param_1].field23_0x3f;
      }
    }
    else {
      piVar5 = &g_packedRecords_A62x8[param_1].field22_0x3b;
    }
    *piVar5 = *piVar5 + 1;
  }
LAB_0042e4fd:
  iVar10 = param_5;
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 0x14) {
    iVar7 = (int)param_1;
    g_packedRecords_A62x8[iVar7].field4_0xd = g_packedRecords_A62x8[iVar7].field4_0xd + 1;
    if (pMVar3 != nullptr) {
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar7].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar8 = (**(code **)(*param_4 + 0x2c))();
    if (iVar8 != 0x19) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar8 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar8 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar8 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar8 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar8 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar8 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar8 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar8 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar8 + 0x41U) & 0x1f)) == 0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar8 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar8 + 0x41U >> 5] & 1 << ((byte)(iVar8 + 0x41U) & 0x1f))
                        == 0) {
                      local_EAX_1462 =
                           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x613,0,0,
                                              "%s",
                                              "STAllPlayersC::RegisterObject unknown boat type");
                      if (local_EAX_1462 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar7].field54_0xbb =
                           g_packedRecords_A62x8[iVar7].field54_0xbb + 1;
                      if (iVar10 == 0) {
                        g_packedRecords_A62x8[iVar7].field55_0xbf =
                             g_packedRecords_A62x8[iVar7].field55_0xbf + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar7].field50_0xab =
                         g_packedRecords_A62x8[iVar7].field50_0xab + 1;
                    if (iVar10 == 0) {
                      g_packedRecords_A62x8[iVar7].field51_0xaf =
                           g_packedRecords_A62x8[iVar7].field51_0xaf + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar7].field46_0x9b =
                       g_packedRecords_A62x8[iVar7].field46_0x9b + 1;
                  if (iVar10 == 0) {
                    g_packedRecords_A62x8[iVar7].field47_0x9f =
                         g_packedRecords_A62x8[iVar7].field47_0x9f + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar7].field42_0x8b =
                     g_packedRecords_A62x8[iVar7].field42_0x8b + 1;
                if (iVar10 == 0) {
                  g_packedRecords_A62x8[iVar7].field43_0x8f =
                       g_packedRecords_A62x8[iVar7].field43_0x8f + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar7].field38_0x7b =
                   g_packedRecords_A62x8[iVar7].field38_0x7b + 1;
              if (iVar10 == 0) {
                g_packedRecords_A62x8[iVar7].field39_0x7f =
                     g_packedRecords_A62x8[iVar7].field39_0x7f + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar7].field34_0x6b =
                 g_packedRecords_A62x8[iVar7].field34_0x6b + 1;
            if (iVar10 == 0) {
              g_packedRecords_A62x8[iVar7].field35_0x6f =
                   g_packedRecords_A62x8[iVar7].field35_0x6f + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar7].field30_0x5b = g_packedRecords_A62x8[iVar7].field30_0x5b + 1;
          if (iVar10 == 0) {
            g_packedRecords_A62x8[iVar7].field31_0x5f =
                 g_packedRecords_A62x8[iVar7].field31_0x5f + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar7].field26_0x4b = g_packedRecords_A62x8[iVar7].field26_0x4b + 1;
        if (iVar10 == 0) {
          g_packedRecords_A62x8[iVar7].field27_0x4f = g_packedRecords_A62x8[iVar7].field27_0x4f + 1;
        }
      }
    }
  }
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 1000) {
    iVar7 = (int)param_1;
    g_packedRecords_A62x8[iVar7].field4_0xd = g_packedRecords_A62x8[iVar7].field4_0xd + 1;
    if (pMVar3 != nullptr) {
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar7].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar8 = (**(code **)(*param_4 + 0x2c))();
    if (iVar8 == 0x33) {
      g_packedRecords_A62x8[iVar7].field94_0x15b = g_packedRecords_A62x8[iVar7].field94_0x15b + 1;
    }
    else if (iVar8 == 0x62) {
      g_packedRecords_A62x8[iVar7].field95_0x15f = g_packedRecords_A62x8[iVar7].field95_0x15f + 1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar8 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar8 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar8 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar8 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar8 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar8 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar8 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar8 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f)) ==
                      0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar8 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar8 - 0x32U >> 5] & 1 << ((byte)(iVar8 - 0x32U) & 0x1f))
                        == 0) {
                      local_EAX_2281 =
                           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x653,0,0,
                                              "%s",
                                              "STAllPlayersC::RegisterObject unknown object type");
                      if (local_EAX_2281 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar7].field90_0x14b =
                           g_packedRecords_A62x8[iVar7].field90_0x14b + 1;
                      if (iVar10 == 0) {
                        g_packedRecords_A62x8[iVar7].field91_0x14f =
                             g_packedRecords_A62x8[iVar7].field91_0x14f + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar7].field86_0x13b =
                         g_packedRecords_A62x8[iVar7].field86_0x13b + 1;
                    if (iVar10 == 0) {
                      g_packedRecords_A62x8[iVar7].field87_0x13f =
                           g_packedRecords_A62x8[iVar7].field87_0x13f + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar7].field82_0x12b =
                       g_packedRecords_A62x8[iVar7].field82_0x12b + 1;
                  if (iVar10 == 0) {
                    g_packedRecords_A62x8[iVar7].field83_0x12f =
                         g_packedRecords_A62x8[iVar7].field83_0x12f + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar7].field78_0x11b =
                     g_packedRecords_A62x8[iVar7].field78_0x11b + 1;
                if (iVar10 == 0) {
                  g_packedRecords_A62x8[iVar7].field79_0x11f =
                       g_packedRecords_A62x8[iVar7].field79_0x11f + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar7].field74_0x10b =
                   g_packedRecords_A62x8[iVar7].field74_0x10b + 1;
              if (iVar10 == 0) {
                g_packedRecords_A62x8[iVar7].field75_0x10f =
                     g_packedRecords_A62x8[iVar7].field75_0x10f + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar7].field70_0xfb =
                 g_packedRecords_A62x8[iVar7].field70_0xfb + 1;
            if (iVar10 == 0) {
              g_packedRecords_A62x8[iVar7].field71_0xff =
                   g_packedRecords_A62x8[iVar7].field71_0xff + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar7].field66_0xeb = g_packedRecords_A62x8[iVar7].field66_0xeb + 1;
          if (iVar10 == 0) {
            g_packedRecords_A62x8[iVar7].field67_0xef =
                 g_packedRecords_A62x8[iVar7].field67_0xef + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar7].field62_0xdb = g_packedRecords_A62x8[iVar7].field62_0xdb + 1;
        if (iVar10 == 0) {
          g_packedRecords_A62x8[iVar7].field63_0xdf = g_packedRecords_A62x8[iVar7].field63_0xdf + 1;
        }
      }
    }
    else {
      g_packedRecords_A62x8[iVar7].field58_0xcb = g_packedRecords_A62x8[iVar7].field58_0xcb + 1;
      if (iVar10 == 0) {
        g_packedRecords_A62x8[iVar7].field59_0xcf = g_packedRecords_A62x8[iVar7].field59_0xcf + 1;
      }
    }
  }
  uVar11 = (ushort)param_2;
  if (uVar11 == 0xfffe) {
LAB_0042eb3e:
    uVar13 = local_1c->count;
    local_14 = uVar13;
    uVar2 = uVar13;
    if (uVar13 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        DArrayGetElement(local_1c,uVar2,&local_c);
        if (local_c == nullptr) {
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
    g_playSystem_00802A38->vfunc_08(0x10ff,(short)local_10,(short)&local_c,(short)local_50,0);
    Library::DKW::TBL::DArrayPut(local_1c,uVar13,&local_c);
    iVar10 = param_5;
  }
  else {
    if (((uVar11 != 0xffff) && (iVar10 == 0)) &&
       (local_c = thunk_FUN_0042b760(param_1,uVar11), local_c == nullptr)) {
      param_2 = 0xfffe;
    }
    uVar13 = local_14;
    if ((short)param_2 == -2) goto LAB_0042eb3e;
  }
  uVar11 = (ushort)param_2;
  if (uVar11 == 0xfffe) {
LAB_0042ebe7:
    uVar12 = (ushort)uVar13;
    if (uVar11 != 0xffff) goto LAB_0042ebf6;
  }
  else if (uVar11 != 0xffff) {
    local_c = thunk_FUN_0042b760(param_1,uVar11);
    uVar13 = param_2 & 0xffff;
    local_14 = uVar13;
    goto LAB_0042ebe7;
  }
  uVar12 = 0xffff;
  local_14 = 0xffff;
LAB_0042ebf6:
  thunk_FUN_00419c30(param_4,uVar12);
  if (((iVar10 == 0) || (param_6 == 1)) && (uVar11 != 0xffff)) {
    STGroupC::AddObj((STGroupC *)local_c,local_20,(uint)(uVar11 != 0xfffe));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar10 = (**(code **)(*param_4 + 0x2c))();
  if (iVar10 == 0x1d) {
    if (local_24 == nullptr) {
      local_24 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      g_packedRecords_A62x8[param_1].field355_0x2e7 = local_24;
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
    Library::DKW::TBL::DArrayPut(pDVar4,uVar13,(void *)((int)param_4 + 0x32));
  }
  g_currentExceptionFrame = local_94.previous;
  return 0;
}

