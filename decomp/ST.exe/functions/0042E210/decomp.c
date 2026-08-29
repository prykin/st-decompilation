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
  DArrayOf_STGameObjCPtr *array;
  DArrayTy *array_00;
  int iVar9;
  int local_EAX_168;
  int *piVar4;
  int iVar5;
  int iVar7;
  int local_EAX_1462;
  int local_EAX_2281;
  uint uVar8;
  int iVar6;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  dword index;
  uint uVar13;
  InternalExceptionFrame local_94;
  byte local_50 [4];
  int local_4c;
  uint local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  DArrayOf_STGameObjCPtr *local_28;
  DArrayTy *local_24;
  uint local_20;
  DArrayTy *local_1c;
  STAllPlayersC *local_18;
  uint local_14;
  uint local_10;
  STGroupBoatC *local_c;
  short local_6;

  iVar10 = (int)param_1;
  local_1c = g_packedRecords_A62x8[iVar10].field2_0x5;
  local_28 = g_packedRecords_A62x8[iVar10].field3_0x9;
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
  array = local_28;
  if ((ushort)param_3 == 0xffff) {
    index = local_28->count;
  }
  else {

    local_EAX_168 = thunk_FUN_0042b5b0(param_1,(ushort)param_3);
    if (local_EAX_168 == 1) {
      RaiseInternalException
                (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x5c0);
    }
    index = param_3 & 0xffff;
  }
  local_20 = index;

  Library::DKW::TBL::DArrayPut((DArrayTy *)array,index,&param_4);
  thunk_FUN_00419c50(param_4,(ushort)index);
  if (((STGameObjC *)param_4)->field_0020 == 0x14) {
    /* ST_CALLSITE[0042E318]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar10 = ((STGameObjC *)param_4)->vfunc_2C();
    if ((STBitTest(g_bitset_00801480, iVar10 + 0x41U)) == 0) {
      /* ST_CALLSITE[0042E362]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar10 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_00800F10, iVar10 + 0x41U)) == 0) {
        /* ST_CALLSITE[0042E3A9]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar10 = ((STGameObjC *)param_4)->vfunc_2C();
        if ((STBitTest(g_bitset_00801450, iVar10 + 0x41U)) == 0)
        goto LAB_0042e3eb;
        piVar4 = &g_packedRecords_A62x8[param_1].field20_0x33;
      }
      else {
        piVar4 = &g_packedRecords_A62x8[param_1].field19_0x2f;
      }
    }
    else {
      piVar4 = &g_packedRecords_A62x8[param_1].field18_0x2b;
    }
    *piVar4 = *piVar4 + 1;
  }
LAB_0042e3eb:
  if (((STGameObjC *)param_4)->field_0020 == 1000) {
    /* ST_CALLSITE[0042E3FD]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar10 = ((STGameObjC *)param_4)->vfunc_2C();
    if ((STBitTest(g_bitset_00800F90, iVar10 - 0x32U)) == 0) {
      /* ST_CALLSITE[0042E447]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar10 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_00801360, iVar10 - 0x32U)) == 0) {
        /* ST_CALLSITE[0042E48E]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar10 = ((STGameObjC *)param_4)->vfunc_2C();
        if (((STBitTest(g_bitset_008014A0, iVar10 - 0x32U)) == 0)
           /* ST_CALLSITE[0042E4BB]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           && (iVar10 = ((STGameObjC *)param_4)->vfunc_2C(),
              (STBitTest(g_bitset_00800F80, iVar10 - 0x32U)) == 0))
        goto LAB_0042e4fd;
        piVar4 = &g_packedRecords_A62x8[param_1].field24_0x43;
      }
      else {
        piVar4 = &g_packedRecords_A62x8[param_1].field23_0x3f;
      }
    }
    else {
      piVar4 = &g_packedRecords_A62x8[param_1].field22_0x3b;
    }
    *piVar4 = *piVar4 + 1;
  }
LAB_0042e4fd:
  iVar10 = param_5;
  pMVar3 = g_money_008016D4;
  if (((STGameObjC *)param_4)->field_0020 == 0x14) {
    iVar5 = (int)param_1;
    g_packedRecords_A62x8[iVar5].field4_0xd = g_packedRecords_A62x8[iVar5].field4_0xd + 1;
    if (pMVar3 != nullptr) {
      /* ST_CALLSITE[0042E53E]: CALL 0x0040161d; direct=0040161D MoneyTy::sub_0052BDA0 */
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar5].field4_0xd);
    }
    /* ST_CALLSITE[0042E548]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
    if (iVar7 != 0x19) {
      /* ST_CALLSITE[0042E559]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_00801000, iVar7 + 0x41U)) == 0) {
        /* ST_CALLSITE[0042E5A6]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
        if ((STBitTest(g_bitset_00801010, iVar7 + 0x41U)) == 0) {
          /* ST_CALLSITE[0042E5F3]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
          if ((STBitTest(g_bitset_00800F00, iVar7 + 0x41U)) == 0) {
            /* ST_CALLSITE[0042E640]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
            if ((STBitTest(g_bitset_00801370, iVar7 + 0x41U)) == 0)
            {
              /* ST_CALLSITE[0042E68D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
              if ((STBitTest(g_bitset_00800FA0, iVar7 + 0x41U)) == 0
                 ) {
                /* ST_CALLSITE[0042E6DA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
                if ((STBitTest(g_bitset_00800FF0, iVar7 + 0x41U)) ==
                    0) {
                  /* ST_CALLSITE[0042E727]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                  iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
                  if ((STBitTest(g_bitset_00801460, iVar7 + 0x41U))
                      == 0) {
                    /* ST_CALLSITE[0042E76D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                    iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
                    if ((STBitTest(g_bitset_00800FE0, iVar7 + 0x41U)
                        ) == 0) {

                      local_EAX_1462 =
                           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x613,0,0,
                                              "%s",
                                              "STAllPlayersC::RegisterObject unknown boat type");
                      if (local_EAX_1462 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar5].field54_0xbb =
                           g_packedRecords_A62x8[iVar5].field54_0xbb + 1;
                      if (iVar10 == 0) {
                        g_packedRecords_A62x8[iVar5].field55_0xbf =
                             g_packedRecords_A62x8[iVar5].field55_0xbf + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar5].field50_0xab =
                         g_packedRecords_A62x8[iVar5].field50_0xab + 1;
                    if (iVar10 == 0) {
                      g_packedRecords_A62x8[iVar5].field51_0xaf =
                           g_packedRecords_A62x8[iVar5].field51_0xaf + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar5].field46_0x9b =
                       g_packedRecords_A62x8[iVar5].field46_0x9b + 1;
                  if (iVar10 == 0) {
                    g_packedRecords_A62x8[iVar5].field47_0x9f =
                         g_packedRecords_A62x8[iVar5].field47_0x9f + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar5].field42_0x8b =
                     g_packedRecords_A62x8[iVar5].field42_0x8b + 1;
                if (iVar10 == 0) {
                  g_packedRecords_A62x8[iVar5].field43_0x8f =
                       g_packedRecords_A62x8[iVar5].field43_0x8f + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar5].field38_0x7b =
                   g_packedRecords_A62x8[iVar5].field38_0x7b + 1;
              if (iVar10 == 0) {
                g_packedRecords_A62x8[iVar5].field39_0x7f =
                     g_packedRecords_A62x8[iVar5].field39_0x7f + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar5].field34_0x6b =
                 g_packedRecords_A62x8[iVar5].field34_0x6b + 1;
            if (iVar10 == 0) {
              g_packedRecords_A62x8[iVar5].field35_0x6f =
                   g_packedRecords_A62x8[iVar5].field35_0x6f + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar5].field30_0x5b = g_packedRecords_A62x8[iVar5].field30_0x5b + 1;
          if (iVar10 == 0) {
            g_packedRecords_A62x8[iVar5].field31_0x5f =
                 g_packedRecords_A62x8[iVar5].field31_0x5f + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar5].field26_0x4b = g_packedRecords_A62x8[iVar5].field26_0x4b + 1;
        if (iVar10 == 0) {
          g_packedRecords_A62x8[iVar5].field27_0x4f = g_packedRecords_A62x8[iVar5].field27_0x4f + 1;
        }
      }
    }
  }
  pMVar3 = g_money_008016D4;
  if (((STGameObjC *)param_4)->field_0020 == 1000) {
    iVar5 = (int)param_1;
    g_packedRecords_A62x8[iVar5].field4_0xd = g_packedRecords_A62x8[iVar5].field4_0xd + 1;
    if (pMVar3 != nullptr) {
      /* ST_CALLSITE[0042E815]: CALL 0x0040161d; direct=0040161D MoneyTy::sub_0052BDA0 */
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar5].field4_0xd);
    }
    /* ST_CALLSITE[0042E81F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
    if (iVar7 == 0x33) {
      g_packedRecords_A62x8[iVar5].field94_0x15b = g_packedRecords_A62x8[iVar5].field94_0x15b + 1;
    }
    else if (iVar7 == 0x62) {
      g_packedRecords_A62x8[iVar5].field95_0x15f = g_packedRecords_A62x8[iVar5].field95_0x15f + 1;
    }
    /* ST_CALLSITE[0042E83F]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
    if ((STBitTest(g_bitset_00801420, iVar7 - 0x32U)) == 0) {
      /* ST_CALLSITE[0042E88C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_008013E0, iVar7 - 0x32U)) == 0) {
        /* ST_CALLSITE[0042E8D9]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
        if ((STBitTest(g_bitset_00800EE0, iVar7 - 0x32U)) == 0) {
          /* ST_CALLSITE[0042E926]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
          if ((STBitTest(g_bitset_00801490, iVar7 - 0x32U)) == 0) {
            /* ST_CALLSITE[0042E973]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
            if ((STBitTest(g_bitset_00800F20, iVar7 - 0x32U)) == 0)
            {
              /* ST_CALLSITE[0042E9C0]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
              if ((STBitTest(g_bitset_00800EF0, iVar7 - 0x32U)) == 0
                 ) {
                /* ST_CALLSITE[0042EA0D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
                if ((STBitTest(g_bitset_00801430, iVar7 - 0x32U)) ==
                    0) {
                  /* ST_CALLSITE[0042EA5A]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                  iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
                  if ((STBitTest(g_bitset_00801440, iVar7 - 0x32U))
                      == 0) {
                    /* ST_CALLSITE[0042EAA0]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                    iVar7 = ((STGameObjC *)param_4)->vfunc_2C();
                    if ((STBitTest(g_bitset_00800F60, iVar7 - 0x32U)
                        ) == 0) {

                      local_EAX_2281 =
                           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x653,0,0,
                                              "%s",
                                              "STAllPlayersC::RegisterObject unknown object type");
                      if (local_EAX_2281 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar5].field90_0x14b =
                           g_packedRecords_A62x8[iVar5].field90_0x14b + 1;
                      if (iVar10 == 0) {
                        g_packedRecords_A62x8[iVar5].field91_0x14f =
                             g_packedRecords_A62x8[iVar5].field91_0x14f + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar5].field86_0x13b =
                         g_packedRecords_A62x8[iVar5].field86_0x13b + 1;
                    if (iVar10 == 0) {
                      g_packedRecords_A62x8[iVar5].field87_0x13f =
                           g_packedRecords_A62x8[iVar5].field87_0x13f + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar5].field82_0x12b =
                       g_packedRecords_A62x8[iVar5].field82_0x12b + 1;
                  if (iVar10 == 0) {
                    g_packedRecords_A62x8[iVar5].field83_0x12f =
                         g_packedRecords_A62x8[iVar5].field83_0x12f + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar5].field78_0x11b =
                     g_packedRecords_A62x8[iVar5].field78_0x11b + 1;
                if (iVar10 == 0) {
                  g_packedRecords_A62x8[iVar5].field79_0x11f =
                       g_packedRecords_A62x8[iVar5].field79_0x11f + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar5].field74_0x10b =
                   g_packedRecords_A62x8[iVar5].field74_0x10b + 1;
              if (iVar10 == 0) {
                g_packedRecords_A62x8[iVar5].field75_0x10f =
                     g_packedRecords_A62x8[iVar5].field75_0x10f + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar5].field70_0xfb =
                 g_packedRecords_A62x8[iVar5].field70_0xfb + 1;
            if (iVar10 == 0) {
              g_packedRecords_A62x8[iVar5].field71_0xff =
                   g_packedRecords_A62x8[iVar5].field71_0xff + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar5].field66_0xeb = g_packedRecords_A62x8[iVar5].field66_0xeb + 1;
          if (iVar10 == 0) {
            g_packedRecords_A62x8[iVar5].field67_0xef =
                 g_packedRecords_A62x8[iVar5].field67_0xef + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar5].field62_0xdb = g_packedRecords_A62x8[iVar5].field62_0xdb + 1;
        if (iVar10 == 0) {
          g_packedRecords_A62x8[iVar5].field63_0xdf = g_packedRecords_A62x8[iVar5].field63_0xdf + 1;
        }
      }
    }
    else {
      g_packedRecords_A62x8[iVar5].field58_0xcb = g_packedRecords_A62x8[iVar5].field58_0xcb + 1;
      if (iVar10 == 0) {
        g_packedRecords_A62x8[iVar5].field59_0xcf = g_packedRecords_A62x8[iVar5].field59_0xcf + 1;
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
    /* ST_CALLSITE[0042EBA5]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STPlaySystemC;/int;pointer:/undefined4;pointer:/int;/undefined2;/int */
    g_playSystem_00802A38->vfunc_8(0x10ff,&local_10,(int *)&local_c,(short)local_50,0);

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
  /* ST_CALLSITE[0042EBFA]: CALL 0x004033be; direct=004033BE STGameObjC::sub_00419C30 */
  STGameObjC::sub_00419C30((STGameObjC *)param_4,uVar12);
  if (((iVar10 == 0) || (param_6 == 1)) && (uVar11 != 0xffff)) {
    /* ST_CALLSITE[0042EC28]: CALL 0x0040340e; direct=0040340E STGroupC::AddObj */
    STGroupC::AddObj((STGroupC *)local_c,local_20,(uint)(uVar11 != 0xfffe));
  }
  /* ST_CALLSITE[0042EC32]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
  iVar10 = ((STGameObjC *)param_4)->vfunc_2C();
  if (iVar10 == 0x1d) {
    if (local_24 == nullptr) {
      local_24 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      g_packedRecords_A62x8[param_1].field355_0x2e7 = local_24;
    }
    array_00 = local_24;
    uVar13 = local_24->count;
    uVar2 = uVar13;
    if (uVar13 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {

        DArrayGetElement(array_00,uVar2,&local_6);
        if (local_6 == -1) {
          uVar13 = uVar2;
        }
      }
    }

    Library::DKW::TBL::DArrayPut(array_00,uVar13,(void *)((int)param_4 + 0x32));
  }
  g_currentExceptionFrame = local_94.previous;
  return 0;
}

