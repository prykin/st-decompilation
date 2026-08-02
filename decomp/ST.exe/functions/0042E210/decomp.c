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
  MoneyTy *pMVar3;
  DArrayTy *pDVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
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
  local_1c = (DArrayTy *)g_packedRecords_A62x8[iVar9].field5_0x5;
  local_28 = (DArrayTy *)g_packedRecords_A62x8[iVar9].field6_0x9;
  local_24 = (DArrayTy *)g_packedRecords_A62x8[iVar9].field603_0x2e7;
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
    uVar12 = local_28->count;
  }
  else {
    iVar9 = thunk_FUN_0042b5b0(param_1,(ushort)param_3);
    if (iVar9 == 1) {
      RaiseInternalException
                (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x5c0);
    }
    uVar12 = param_3 & 0xffff;
  }
  local_20 = uVar12;
  Library::DKW::TBL::DArrayPut(pDVar4,uVar12,&param_4);
  thunk_FUN_00419c50(param_4,(ushort)uVar12);
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
        piVar5 = (int *)&g_packedRecords_A62x8[param_1].field_0x33;
      }
      else {
        piVar5 = (int *)&g_packedRecords_A62x8[param_1].field_0x2f;
      }
    }
    else {
      piVar5 = (int *)&g_packedRecords_A62x8[param_1].field_0x2b;
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
        piVar5 = (int *)&g_packedRecords_A62x8[param_1].field_0x43;
      }
      else {
        piVar5 = (int *)&g_packedRecords_A62x8[param_1].field_0x3f;
      }
    }
    else {
      piVar5 = (int *)&g_packedRecords_A62x8[param_1].field_0x3b;
    }
    *piVar5 = *piVar5 + 1;
  }
LAB_0042e4fd:
  iVar9 = param_5;
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 0x14) {
    iVar6 = (int)param_1;
    *(short *)&g_packedRecords_A62x8[iVar6].field_0xd =
         *(short *)&g_packedRecords_A62x8[iVar6].field_0xd + 1;
    if (pMVar3 != nullptr) {
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)*(ushort *)&g_packedRecords_A62x8[iVar6].field_0xd);
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
                      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x613,0,0,
                                                 "%s",
                                                 "STAllPlayersC::RegisterObject unknown boat type");
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      *(int *)&g_packedRecords_A62x8[iVar6].field_0xbb =
                           *(int *)&g_packedRecords_A62x8[iVar6].field_0xbb + 1;
                      if (iVar9 == 0) {
                        *(int *)&g_packedRecords_A62x8[iVar6].field_0xbf =
                             *(int *)&g_packedRecords_A62x8[iVar6].field_0xbf + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_packedRecords_A62x8[iVar6].field_0xab =
                         *(int *)&g_packedRecords_A62x8[iVar6].field_0xab + 1;
                    if (iVar9 == 0) {
                      *(int *)&g_packedRecords_A62x8[iVar6].field_0xaf =
                           *(int *)&g_packedRecords_A62x8[iVar6].field_0xaf + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_packedRecords_A62x8[iVar6].field_0x9b =
                       *(int *)&g_packedRecords_A62x8[iVar6].field_0x9b + 1;
                  if (iVar9 == 0) {
                    *(int *)&g_packedRecords_A62x8[iVar6].field_0x9f =
                         *(int *)&g_packedRecords_A62x8[iVar6].field_0x9f + 1;
                  }
                }
              }
              else {
                *(int *)&g_packedRecords_A62x8[iVar6].field_0x8b =
                     *(int *)&g_packedRecords_A62x8[iVar6].field_0x8b + 1;
                if (iVar9 == 0) {
                  *(int *)&g_packedRecords_A62x8[iVar6].field_0x8f =
                       *(int *)&g_packedRecords_A62x8[iVar6].field_0x8f + 1;
                }
              }
            }
            else {
              *(int *)&g_packedRecords_A62x8[iVar6].field_0x7b =
                   *(int *)&g_packedRecords_A62x8[iVar6].field_0x7b + 1;
              if (iVar9 == 0) {
                *(int *)&g_packedRecords_A62x8[iVar6].field_0x7f =
                     *(int *)&g_packedRecords_A62x8[iVar6].field_0x7f + 1;
              }
            }
          }
          else {
            *(int *)&g_packedRecords_A62x8[iVar6].field_0x6b =
                 *(int *)&g_packedRecords_A62x8[iVar6].field_0x6b + 1;
            if (iVar9 == 0) {
              *(int *)&g_packedRecords_A62x8[iVar6].field_0x6f =
                   *(int *)&g_packedRecords_A62x8[iVar6].field_0x6f + 1;
            }
          }
        }
        else {
          *(int *)&g_packedRecords_A62x8[iVar6].field_0x5b =
               *(int *)&g_packedRecords_A62x8[iVar6].field_0x5b + 1;
          if (iVar9 == 0) {
            *(int *)&g_packedRecords_A62x8[iVar6].field_0x5f =
                 *(int *)&g_packedRecords_A62x8[iVar6].field_0x5f + 1;
          }
        }
      }
      else {
        *(int *)&g_packedRecords_A62x8[iVar6].field_0x4b =
             *(int *)&g_packedRecords_A62x8[iVar6].field_0x4b + 1;
        if (iVar9 == 0) {
          *(int *)&g_packedRecords_A62x8[iVar6].field_0x4f =
               *(int *)&g_packedRecords_A62x8[iVar6].field_0x4f + 1;
        }
      }
    }
  }
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 1000) {
    iVar6 = (int)param_1;
    *(short *)&g_packedRecords_A62x8[iVar6].field_0xd =
         *(short *)&g_packedRecords_A62x8[iVar6].field_0xd + 1;
    if (pMVar3 != nullptr) {
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)*(ushort *)&g_packedRecords_A62x8[iVar6].field_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*param_4 + 0x2c))();
    if (iVar7 == 0x33) {
      *(int *)&g_packedRecords_A62x8[iVar6].field326_0x15b =
           *(int *)&g_packedRecords_A62x8[iVar6].field326_0x15b + 1;
    }
    else if (iVar7 == 0x62) {
      *(int *)&g_packedRecords_A62x8[iVar6].field329_0x15f =
           *(int *)&g_packedRecords_A62x8[iVar6].field329_0x15f + 1;
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
                      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x653,0,0,
                                                 "%s",
                                                 "STAllPlayersC::RegisterObject unknown object type");
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      *(int *)&g_packedRecords_A62x8[iVar6].field_0x14b =
                           *(int *)&g_packedRecords_A62x8[iVar6].field_0x14b + 1;
                      if (iVar9 == 0) {
                        *(int *)&g_packedRecords_A62x8[iVar6].field_0x14f =
                             *(int *)&g_packedRecords_A62x8[iVar6].field_0x14f + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_packedRecords_A62x8[iVar6].field_0x13b =
                         *(int *)&g_packedRecords_A62x8[iVar6].field_0x13b + 1;
                    if (iVar9 == 0) {
                      *(int *)&g_packedRecords_A62x8[iVar6].field_0x13f =
                           *(int *)&g_packedRecords_A62x8[iVar6].field_0x13f + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_packedRecords_A62x8[iVar6].field_0x12b =
                       *(int *)&g_packedRecords_A62x8[iVar6].field_0x12b + 1;
                  if (iVar9 == 0) {
                    *(int *)&g_packedRecords_A62x8[iVar6].field_0x12f =
                         *(int *)&g_packedRecords_A62x8[iVar6].field_0x12f + 1;
                  }
                }
              }
              else {
                *(int *)&g_packedRecords_A62x8[iVar6].field_0x11b =
                     *(int *)&g_packedRecords_A62x8[iVar6].field_0x11b + 1;
                if (iVar9 == 0) {
                  *(int *)&g_packedRecords_A62x8[iVar6].field_0x11f =
                       *(int *)&g_packedRecords_A62x8[iVar6].field_0x11f + 1;
                }
              }
            }
            else {
              *(int *)&g_packedRecords_A62x8[iVar6].field_0x10b =
                   *(int *)&g_packedRecords_A62x8[iVar6].field_0x10b + 1;
              if (iVar9 == 0) {
                *(int *)&g_packedRecords_A62x8[iVar6].field_0x10f =
                     *(int *)&g_packedRecords_A62x8[iVar6].field_0x10f + 1;
              }
            }
          }
          else {
            *(int *)&g_packedRecords_A62x8[iVar6].field_0xfb =
                 *(int *)&g_packedRecords_A62x8[iVar6].field_0xfb + 1;
            if (iVar9 == 0) {
              *(int *)&g_packedRecords_A62x8[iVar6].field_0xff =
                   *(int *)&g_packedRecords_A62x8[iVar6].field_0xff + 1;
            }
          }
        }
        else {
          *(int *)&g_packedRecords_A62x8[iVar6].field_0xeb =
               *(int *)&g_packedRecords_A62x8[iVar6].field_0xeb + 1;
          if (iVar9 == 0) {
            *(int *)&g_packedRecords_A62x8[iVar6].field_0xef =
                 *(int *)&g_packedRecords_A62x8[iVar6].field_0xef + 1;
          }
        }
      }
      else {
        *(int *)&g_packedRecords_A62x8[iVar6].field_0xdb =
             *(int *)&g_packedRecords_A62x8[iVar6].field_0xdb + 1;
        if (iVar9 == 0) {
          *(int *)&g_packedRecords_A62x8[iVar6].field_0xdf =
               *(int *)&g_packedRecords_A62x8[iVar6].field_0xdf + 1;
        }
      }
    }
    else {
      *(int *)&g_packedRecords_A62x8[iVar6].field_0xcb =
           *(int *)&g_packedRecords_A62x8[iVar6].field_0xcb + 1;
      if (iVar9 == 0) {
        *(int *)&g_packedRecords_A62x8[iVar6].field_0xcf =
             *(int *)&g_packedRecords_A62x8[iVar6].field_0xcf + 1;
      }
    }
  }
  uVar10 = (ushort)param_2;
  if (uVar10 == 0xfffe) {
LAB_0042eb3e:
    uVar12 = local_1c->count;
    local_14 = uVar12;
    uVar2 = uVar12;
    if (uVar12 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        DArrayGetElement(local_1c,uVar2,&local_c);
        if (local_c == nullptr) {
          uVar12 = uVar2;
          local_14 = uVar2;
        }
      }
    }
    local_4c = (int)param_1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_44 = 1;
    local_3c = uVar12;
    g_playSystem_00802A38->vfunc_08(0x10ff,local_10,&local_c,local_50,0);
    Library::DKW::TBL::DArrayPut(local_1c,uVar12,&local_c);
    iVar9 = param_5;
  }
  else {
    if (((uVar10 != 0xffff) && (iVar9 == 0)) &&
       (local_c = thunk_FUN_0042b760(param_1,uVar10), local_c == nullptr)) {
      param_2 = 0xfffe;
    }
    uVar12 = local_14;
    if ((short)param_2 == -2) goto LAB_0042eb3e;
  }
  uVar10 = (ushort)param_2;
  if (uVar10 == 0xfffe) {
LAB_0042ebe7:
    uVar11 = (ushort)uVar12;
    if (uVar10 != 0xffff) goto LAB_0042ebf6;
  }
  else if (uVar10 != 0xffff) {
    local_c = thunk_FUN_0042b760(param_1,uVar10);
    uVar12 = param_2 & 0xffff;
    local_14 = uVar12;
    goto LAB_0042ebe7;
  }
  uVar11 = 0xffff;
  local_14 = 0xffff;
LAB_0042ebf6:
  thunk_FUN_00419c30(param_4,uVar11);
  if (((iVar9 == 0) || (param_6 == 1)) && (uVar10 != 0xffff)) {
    STGroupC::AddObj((STGroupC *)local_c,local_20,(uint)(uVar10 != 0xfffe));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar9 = (**(code **)(*param_4 + 0x2c))();
  if (iVar9 == 0x1d) {
    if (local_24 == nullptr) {
      local_24 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      g_packedRecords_A62x8[param_1].field603_0x2e7 = local_24;
    }
    pDVar4 = local_24;
    uVar12 = local_24->count;
    uVar2 = uVar12;
    if (uVar12 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        DArrayGetElement(pDVar4,uVar2,&local_6);
        if (local_6 == -1) {
          uVar12 = uVar2;
        }
      }
    }
    Library::DKW::TBL::DArrayPut(pDVar4,uVar12,(void *)((int)param_4 + 0x32));
  }
  g_currentExceptionFrame = local_94.previous;
  return 0;
}

