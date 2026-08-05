#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042F2BA MOVSX ECX,byte ptr [EBP + 0x8] | 0042F37C MOVSX
   ECX,byte ptr [EBP + 0x8] | 0042F3C7 MOVSX ECX,byte ptr [EBP + 0x8] | 0042F40F MOVSX ECX,byte ptr
   [EBP + 0x8] | 0042F468 MOVSX ECX,byte ptr [EBP + 0x8] | 0042F4B3 MOVSX ECX,byte ptr [EBP + 0x8] |
   0042F527 MOVSX ECX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
STAllPlayersC::UnRegisterObject
          (STAllPlayersC *this,char param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int *piVar1;
  MoneyTy *pMVar3;
  STAllPlayersC *this_00;
  STGroupBoatC *pSVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  STGameObjC *pSVar8;
  DArrayTy *pDVar9;
  int iVar10;
  uint uVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_68;
  dword local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  STAllPlayersC *local_18;
  DArrayTy *local_14;
  STGroupBoatC *local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar10 = (int)param_1;
  local_c = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[iVar10].field3_0x9;
  local_1c = (DArrayTy *)g_packedRecords_A62x8[iVar10].field2_0x5;
  local_20 = (DArrayTy *)g_packedRecords_A62x8[iVar10].field355_0x2e7;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar10 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar10 == -0x5001fff7) {
      return 0;
    }
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x7cd,0,iVar10,"%s"
                               ,"STAllPlayersC::UnRegisterObject");
    if (iVar6 == 0) {
      RaiseInternalException(iVar10,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x7ce);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((ushort)param_3 == 0xffff) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x6cd);
  }
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
            1 << ((byte)(iVar10 + 0x41U) & 0x1f)) == 0) goto LAB_0042f42f;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field20_0x33 =
             g_packedRecords_A62x8[param_1].field20_0x33 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field19_0x2f =
             g_packedRecords_A62x8[param_1].field19_0x2f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar10 = param_1 * 0xa62;
      g_packedRecords_A62x8[param_1].field18_0x2b = g_packedRecords_A62x8[param_1].field18_0x2b + -1
      ;
    }
    piVar1 = (int *)((int)&g_packedRecords_A62x8[0].field21_0x37 + iVar10);
    *piVar1 = *piVar1 + 1;
  }
LAB_0042f42f:
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
           1 << ((byte)(iVar10 - 0x32U) & 0x1f)) == 0)) goto LAB_0042f547;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field24_0x43 =
             g_packedRecords_A62x8[param_1].field24_0x43 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field23_0x3f =
             g_packedRecords_A62x8[param_1].field23_0x3f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar10 = param_1 * 0xa62;
      g_packedRecords_A62x8[param_1].field22_0x3b = g_packedRecords_A62x8[param_1].field22_0x3b + -1
      ;
    }
    piVar1 = (int *)((int)&g_packedRecords_A62x8[0].field25_0x47 + iVar10);
    *piVar1 = *piVar1 + 1;
  }
LAB_0042f547:
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 0x14) {
    iVar10 = (int)param_1;
    g_packedRecords_A62x8[iVar10].field4_0xd = g_packedRecords_A62x8[iVar10].field4_0xd + -1;
    if (pMVar3 != nullptr) {
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar10].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (iVar6 != 0x19) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar6 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar6 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar6 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar6 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar6 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar6 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f))
                        == 0) {
                      iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x73c,0,0
                                                  ,"%s",
                                                  "STAllPlayersC::UnRegisterObject unknown boat type");
                      if (iVar10 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar10].field54_0xbb =
                           g_packedRecords_A62x8[iVar10].field54_0xbb + -1;
                      if ((param_5 != 0xfe) &&
                         (g_packedRecords_A62x8[iVar10].field56_0xc3 =
                               g_packedRecords_A62x8[iVar10].field56_0xc3 + 1, param_5 != 0xff)) {
                        g_packedRecords_A62x8[param_5].field57_0xc7 =
                             g_packedRecords_A62x8[param_5].field57_0xc7 + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar10].field50_0xab =
                         g_packedRecords_A62x8[iVar10].field50_0xab + -1;
                    if ((param_5 != 0xfe) &&
                       (g_packedRecords_A62x8[iVar10].field52_0xb3 =
                             g_packedRecords_A62x8[iVar10].field52_0xb3 + 1, param_5 != 0xff)) {
                      g_packedRecords_A62x8[param_5].field53_0xb7 =
                           g_packedRecords_A62x8[param_5].field53_0xb7 + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar10].field46_0x9b =
                       g_packedRecords_A62x8[iVar10].field46_0x9b + -1;
                  if ((param_5 != 0xfe) &&
                     (g_packedRecords_A62x8[iVar10].field48_0xa3 =
                           g_packedRecords_A62x8[iVar10].field48_0xa3 + 1, param_5 != 0xff)) {
                    g_packedRecords_A62x8[param_5].field49_0xa7 =
                         g_packedRecords_A62x8[param_5].field49_0xa7 + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar10].field42_0x8b =
                     g_packedRecords_A62x8[iVar10].field42_0x8b + -1;
                if ((param_5 != 0xfe) &&
                   (g_packedRecords_A62x8[iVar10].field44_0x93 =
                         g_packedRecords_A62x8[iVar10].field44_0x93 + 1, param_5 != 0xff)) {
                  g_packedRecords_A62x8[param_5].field45_0x97 =
                       g_packedRecords_A62x8[param_5].field45_0x97 + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar10].field38_0x7b =
                   g_packedRecords_A62x8[iVar10].field38_0x7b + -1;
              if ((param_5 != 0xfe) &&
                 (g_packedRecords_A62x8[iVar10].field40_0x83 =
                       g_packedRecords_A62x8[iVar10].field40_0x83 + 1, param_5 != 0xff)) {
                g_packedRecords_A62x8[param_5].field41_0x87 =
                     g_packedRecords_A62x8[param_5].field41_0x87 + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar10].field34_0x6b =
                 g_packedRecords_A62x8[iVar10].field34_0x6b + -1;
            if ((param_5 != 0xfe) &&
               (g_packedRecords_A62x8[iVar10].field36_0x73 =
                     g_packedRecords_A62x8[iVar10].field36_0x73 + 1, param_5 != 0xff)) {
              g_packedRecords_A62x8[param_5].field37_0x77 =
                   g_packedRecords_A62x8[param_5].field37_0x77 + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar10].field30_0x5b =
               g_packedRecords_A62x8[iVar10].field30_0x5b + -1;
          if ((param_5 != 0xfe) &&
             (g_packedRecords_A62x8[iVar10].field32_0x63 =
                   g_packedRecords_A62x8[iVar10].field32_0x63 + 1, param_5 != 0xff)) {
            g_packedRecords_A62x8[param_5].field33_0x67 =
                 g_packedRecords_A62x8[param_5].field33_0x67 + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar10].field26_0x4b = g_packedRecords_A62x8[iVar10].field26_0x4b + -1
        ;
        if ((param_5 != 0xfe) &&
           (g_packedRecords_A62x8[iVar10].field28_0x53 =
                 g_packedRecords_A62x8[iVar10].field28_0x53 + 1, param_5 != 0xff)) {
          g_packedRecords_A62x8[param_5].field29_0x57 =
               g_packedRecords_A62x8[param_5].field29_0x57 + 1;
        }
      }
    }
  }
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 1000) {
    iVar10 = (int)param_1;
    g_packedRecords_A62x8[iVar10].field4_0xd = g_packedRecords_A62x8[iVar10].field4_0xd + -1;
    if (pMVar3 != nullptr) {
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar10].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (iVar6 == 0x33) {
      g_packedRecords_A62x8[iVar10].field94_0x15b = g_packedRecords_A62x8[iVar10].field94_0x15b + -1
      ;
    }
    else if (iVar6 == 0x62) {
      g_packedRecords_A62x8[iVar10].field95_0x15f = g_packedRecords_A62x8[iVar10].field95_0x15f + -1
      ;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar6 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar6 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar6 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar6 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) ==
                      0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar6 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f))
                        == 0) {
                      iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x797,0,0
                                                  ,"%s",
                                                  "STAllPlayersC::UnRegisterObject unknown object type");
                      if (iVar10 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar10].field90_0x14b =
                           g_packedRecords_A62x8[iVar10].field90_0x14b + -1;
                      if ((param_5 != 0xfe) &&
                         (g_packedRecords_A62x8[iVar10].field92_0x153 =
                               g_packedRecords_A62x8[iVar10].field92_0x153 + 1, param_5 != 0xff)) {
                        g_packedRecords_A62x8[param_5].field93_0x157 =
                             g_packedRecords_A62x8[param_5].field93_0x157 + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar10].field86_0x13b =
                         g_packedRecords_A62x8[iVar10].field86_0x13b + -1;
                    if ((param_5 != 0xfe) &&
                       (g_packedRecords_A62x8[iVar10].field88_0x143 =
                             g_packedRecords_A62x8[iVar10].field88_0x143 + 1, param_5 != 0xff)) {
                      g_packedRecords_A62x8[param_5].field89_0x147 =
                           g_packedRecords_A62x8[param_5].field89_0x147 + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar10].field82_0x12b =
                       g_packedRecords_A62x8[iVar10].field82_0x12b + -1;
                  if ((param_5 != 0xfe) &&
                     (g_packedRecords_A62x8[iVar10].field84_0x133 =
                           g_packedRecords_A62x8[iVar10].field84_0x133 + 1, param_5 != 0xff)) {
                    g_packedRecords_A62x8[param_5].field85_0x137 =
                         g_packedRecords_A62x8[param_5].field85_0x137 + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar10].field78_0x11b =
                     g_packedRecords_A62x8[iVar10].field78_0x11b + -1;
                if ((param_5 != 0xfe) &&
                   (g_packedRecords_A62x8[iVar10].field80_0x123 =
                         g_packedRecords_A62x8[iVar10].field80_0x123 + 1, param_5 != 0xff)) {
                  g_packedRecords_A62x8[param_5].field81_0x127 =
                       g_packedRecords_A62x8[param_5].field81_0x127 + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar10].field74_0x10b =
                   g_packedRecords_A62x8[iVar10].field74_0x10b + -1;
              if ((param_5 != 0xfe) &&
                 (g_packedRecords_A62x8[iVar10].field76_0x113 =
                       g_packedRecords_A62x8[iVar10].field76_0x113 + 1, param_5 != 0xff)) {
                g_packedRecords_A62x8[param_5].field77_0x117 =
                     g_packedRecords_A62x8[param_5].field77_0x117 + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar10].field70_0xfb =
                 g_packedRecords_A62x8[iVar10].field70_0xfb + -1;
            if ((param_5 != 0xfe) &&
               (g_packedRecords_A62x8[iVar10].field72_0x103 =
                     g_packedRecords_A62x8[iVar10].field72_0x103 + 1, param_5 != 0xff)) {
              g_packedRecords_A62x8[param_5].field73_0x107 =
                   g_packedRecords_A62x8[param_5].field73_0x107 + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar10].field66_0xeb =
               g_packedRecords_A62x8[iVar10].field66_0xeb + -1;
          if ((param_5 != 0xfe) &&
             (g_packedRecords_A62x8[iVar10].field68_0xf3 =
                   g_packedRecords_A62x8[iVar10].field68_0xf3 + 1, param_5 != 0xff)) {
            g_packedRecords_A62x8[param_5].field69_0xf7 =
                 g_packedRecords_A62x8[param_5].field69_0xf7 + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar10].field62_0xdb = g_packedRecords_A62x8[iVar10].field62_0xdb + -1
        ;
        if ((param_5 != 0xfe) &&
           (g_packedRecords_A62x8[iVar10].field64_0xe3 =
                 g_packedRecords_A62x8[iVar10].field64_0xe3 + 1, param_5 != 0xff)) {
          g_packedRecords_A62x8[param_5].field65_0xe7 =
               g_packedRecords_A62x8[param_5].field65_0xe7 + 1;
        }
      }
    }
    else {
      g_packedRecords_A62x8[iVar10].field58_0xcb = g_packedRecords_A62x8[iVar10].field58_0xcb + -1;
      if ((param_5 != 0xfe) &&
         (g_packedRecords_A62x8[iVar10].field60_0xd3 =
               g_packedRecords_A62x8[iVar10].field60_0xd3 + 1, param_5 != 0xff)) {
        g_packedRecords_A62x8[param_5].field61_0xd7 =
             g_packedRecords_A62x8[param_5].field61_0xd7 + 1;
      }
    }
  }
  this_00 = local_18;
  pSVar8 = GetObjPtr(local_18,param_1,(ushort)param_3,CASE_1);
  if (pSVar8 != (STGameObjC *)param_4) {
    RaiseInternalException
              (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x7a3);
  }
  if ((ushort)param_2 != 0xffff) {
    local_10 = thunk_FUN_0042b760(param_1,(ushort)param_2);
    if (local_10 == nullptr) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x7a5);
    }
    iVar10 = thunk_FUN_004237d0(local_10,(ushort)param_3);
    if (iVar10 == 0) {
      RaiseInternalException
                (-0x5001fffd,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x7a6);
    }
  }
  thunk_FUN_00440820(_param_1,param_3);
  DelObjFromTmps(this_00,DAT_0080874d,param_4[8],param_1,param_3);
  DelObjFromSaveTmps(this_00,param_4[8],param_1,(ushort)param_3);
  pSVar4 = local_10;
  pDVar9 = local_14;
  uVar11 = param_3;
  if ((ushort)param_2 != 0xffff) {
    local_10->vfunc_04((ushort)param_3);
    Library::DKW::TBL::DArrayPut(local_14,param_3 & 0xffff,&local_c);
    sVar5 = thunk_FUN_004233c0(pSVar4);
    if ((sVar5 != 0) || (iVar10 = thunk_FUN_004233a0((int)pSVar4), iVar10 != 0)) goto LAB_00430018;
    thunk_FUN_0054cf70(g_playSystem_00802A38,pSVar4->field_0008);
    pDVar9 = local_1c;
    uVar11 = param_2;
  }
  Library::DKW::TBL::DArrayPut(pDVar9,uVar11 & 0xffff,&local_c);
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00430018:
  iVar10 = (**(code **)(*param_4 + 0x2c))();
  pDVar9 = local_20;
  if ((iVar10 == 0x1d) && (local_20 != nullptr)) {
    local_24 = local_20->count;
    uVar11 = 0;
    if (0 < (int)local_24) {
      while( true ) {
        DArrayGetElement(pDVar9,uVar11,&local_8);
        if ((ushort)local_8 == (ushort)param_3) break;
        uVar11 = uVar11 + 1;
        if ((int)local_24 <= (int)uVar11) {
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      local_8 = 0xffff;
      Library::DKW::TBL::DArrayPut(pDVar9,uVar11,&local_8);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

