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
  DArrayTy *array;
  STAllPlayersC *this_00;
  STGroupBoatC *this_01;
  ushort uVar4;
  int iVar10;
  int iVar5;
  int local_EAX_1804;
  int local_EAX_3102;
  uint uVar6;
  STGameObjC *pSVar7;
  DArrayOf_STGameObjCPtr *array_00;
  int iVar6;
  int iVar8;
  uint uVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_68;
  dword local_24;
  DArrayTy *local_20;
  DArrayOf_STGameObjCPtr *local_1c;
  STAllPlayersC *local_18;
  DArrayOf_STGameObjCPtr *local_14;
  STGroupBoatC *local_10;
  uint local_c;
  uint local_8;
  iVar8 = (int)param_1;
  local_c = 0;
  local_14 = g_packedRecords_A62x8[iVar8].field3_0x9;
  local_1c = (DArrayOf_STGameObjCPtr *)g_packedRecords_A62x8[iVar8].field2_0x5;
  local_20 = (DArrayTy *)g_packedRecords_A62x8[iVar8].field355_0x2e7;
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
  if (((STGameObjC *)param_4)->field_0020 == 0x14) {
    /* ST_CALLSITE[0042F354]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar8 = ((STGameObjC *)param_4)->vfunc_2C();
    if ((STBitTest(g_bitset_00801480, iVar8 + 0x41U)) == 0) {
      /* ST_CALLSITE[0042F39F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar8 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_00800F10, iVar8 + 0x41U)) == 0) {
        /* ST_CALLSITE[0042F3E7]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar8 = ((STGameObjC *)param_4)->vfunc_2C();
        if ((STBitTest(g_bitset_00801450, iVar8 + 0x41U)) == 0)
        goto LAB_0042f42f;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar8 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field20_0x33 =
             g_packedRecords_A62x8[param_1].field20_0x33 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar8 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field19_0x2f =
             g_packedRecords_A62x8[param_1].field19_0x2f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar8 = param_1 * 0xa62;
      g_packedRecords_A62x8[param_1].field18_0x2b = g_packedRecords_A62x8[param_1].field18_0x2b + -1
      ;
    }
    piVar1 = (int *)((int)&g_packedRecords_A62x8[0].field21_0x37 + iVar8);
    *piVar1 = *piVar1 + 1;
  }
LAB_0042f42f:
  if (((STGameObjC *)param_4)->field_0020 == 1000) {
    /* ST_CALLSITE[0042F440]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar8 = ((STGameObjC *)param_4)->vfunc_2C();
    if ((STBitTest(g_bitset_00800F90, iVar8 - 0x32U)) == 0) {
      /* ST_CALLSITE[0042F48B]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar8 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_00801360, iVar8 - 0x32U)) == 0) {
        /* ST_CALLSITE[0042F4D3]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar8 = ((STGameObjC *)param_4)->vfunc_2C();
        if (((STBitTest(g_bitset_008014A0, iVar8 - 0x32U)) == 0) &&
           /* ST_CALLSITE[0042F4FF]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           (iVar8 = ((STGameObjC *)param_4)->vfunc_2C(),
           (STBitTest(g_bitset_00800F80, iVar8 - 0x32U)) == 0))
        goto LAB_0042f547;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar8 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field24_0x43 =
             g_packedRecords_A62x8[param_1].field24_0x43 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar8 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field23_0x3f =
             g_packedRecords_A62x8[param_1].field23_0x3f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar8 = param_1 * 0xa62;
      g_packedRecords_A62x8[param_1].field22_0x3b = g_packedRecords_A62x8[param_1].field22_0x3b + -1
      ;
    }
    piVar1 = (int *)((int)&g_packedRecords_A62x8[0].field25_0x47 + iVar8);
    *piVar1 = *piVar1 + 1;
  }
LAB_0042f547:
  pMVar3 = g_money_008016D4;
  if (((STGameObjC *)param_4)->field_0020 == 0x14) {
    iVar8 = (int)param_1;
    g_packedRecords_A62x8[iVar8].field4_0xd = g_packedRecords_A62x8[iVar8].field4_0xd + -1;
    if (pMVar3 != nullptr) {
      /* ST_CALLSITE[0042F58A]: CALL 0x0040161d; direct=0040161D MoneyTy::sub_0052BDA0 */
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar8].field4_0xd);
    }
    /* ST_CALLSITE[0042F593]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
    if (iVar5 != 0x19) {
      /* ST_CALLSITE[0042F5A3]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_00801000, iVar5 + 0x41U)) == 0) {
        /* ST_CALLSITE[0042F625]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
        if ((STBitTest(g_bitset_00801010, iVar5 + 0x41U)) == 0) {
          /* ST_CALLSITE[0042F6A7]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
          if ((STBitTest(g_bitset_00800F00, iVar5 + 0x41U)) == 0) {
            /* ST_CALLSITE[0042F729]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
            if ((STBitTest(g_bitset_00801370, iVar5 + 0x41U)) == 0)
            {
              /* ST_CALLSITE[0042F7AB]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
              if ((STBitTest(g_bitset_00800FA0, iVar5 + 0x41U)) == 0
                 ) {
                /* ST_CALLSITE[0042F82D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
                if ((STBitTest(g_bitset_00800FF0, iVar5 + 0x41U)) ==
                    0) {
                  /* ST_CALLSITE[0042F8AF]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                  iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
                  if ((STBitTest(g_bitset_00801460, iVar5 + 0x41U))
                      == 0) {
                    /* ST_CALLSITE[0042F931]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                    iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
                    if ((STBitTest(g_bitset_00800FE0, iVar5 + 0x41U)
                        ) == 0) {

                      local_EAX_1804 =
                           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x73c,0,0,
                                              "%s",
                                              "STAllPlayersC::UnRegisterObject unknown boat type");
                      if (local_EAX_1804 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar8].field54_0xbb =
                           g_packedRecords_A62x8[iVar8].field54_0xbb + -1;
                      if ((param_5 != 0xfe) &&
                         (g_packedRecords_A62x8[iVar8].field56_0xc3 =
                               g_packedRecords_A62x8[iVar8].field56_0xc3 + 1, param_5 != 0xff)) {
                        g_packedRecords_A62x8[param_5].field57_0xc7 =
                             g_packedRecords_A62x8[param_5].field57_0xc7 + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar8].field50_0xab =
                         g_packedRecords_A62x8[iVar8].field50_0xab + -1;
                    if ((param_5 != 0xfe) &&
                       (g_packedRecords_A62x8[iVar8].field52_0xb3 =
                             g_packedRecords_A62x8[iVar8].field52_0xb3 + 1, param_5 != 0xff)) {
                      g_packedRecords_A62x8[param_5].field53_0xb7 =
                           g_packedRecords_A62x8[param_5].field53_0xb7 + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar8].field46_0x9b =
                       g_packedRecords_A62x8[iVar8].field46_0x9b + -1;
                  if ((param_5 != 0xfe) &&
                     (g_packedRecords_A62x8[iVar8].field48_0xa3 =
                           g_packedRecords_A62x8[iVar8].field48_0xa3 + 1, param_5 != 0xff)) {
                    g_packedRecords_A62x8[param_5].field49_0xa7 =
                         g_packedRecords_A62x8[param_5].field49_0xa7 + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar8].field42_0x8b =
                     g_packedRecords_A62x8[iVar8].field42_0x8b + -1;
                if ((param_5 != 0xfe) &&
                   (g_packedRecords_A62x8[iVar8].field44_0x93 =
                         g_packedRecords_A62x8[iVar8].field44_0x93 + 1, param_5 != 0xff)) {
                  g_packedRecords_A62x8[param_5].field45_0x97 =
                       g_packedRecords_A62x8[param_5].field45_0x97 + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar8].field38_0x7b =
                   g_packedRecords_A62x8[iVar8].field38_0x7b + -1;
              if ((param_5 != 0xfe) &&
                 (g_packedRecords_A62x8[iVar8].field40_0x83 =
                       g_packedRecords_A62x8[iVar8].field40_0x83 + 1, param_5 != 0xff)) {
                g_packedRecords_A62x8[param_5].field41_0x87 =
                     g_packedRecords_A62x8[param_5].field41_0x87 + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar8].field34_0x6b =
                 g_packedRecords_A62x8[iVar8].field34_0x6b + -1;
            if ((param_5 != 0xfe) &&
               (g_packedRecords_A62x8[iVar8].field36_0x73 =
                     g_packedRecords_A62x8[iVar8].field36_0x73 + 1, param_5 != 0xff)) {
              g_packedRecords_A62x8[param_5].field37_0x77 =
                   g_packedRecords_A62x8[param_5].field37_0x77 + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar8].field30_0x5b = g_packedRecords_A62x8[iVar8].field30_0x5b + -1
          ;
          if ((param_5 != 0xfe) &&
             (g_packedRecords_A62x8[iVar8].field32_0x63 =
                   g_packedRecords_A62x8[iVar8].field32_0x63 + 1, param_5 != 0xff)) {
            g_packedRecords_A62x8[param_5].field33_0x67 =
                 g_packedRecords_A62x8[param_5].field33_0x67 + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar8].field26_0x4b = g_packedRecords_A62x8[iVar8].field26_0x4b + -1;
        if ((param_5 != 0xfe) &&
           (g_packedRecords_A62x8[iVar8].field28_0x53 =
                 g_packedRecords_A62x8[iVar8].field28_0x53 + 1, param_5 != 0xff)) {
          g_packedRecords_A62x8[param_5].field29_0x57 =
               g_packedRecords_A62x8[param_5].field29_0x57 + 1;
        }
      }
    }
  }
  pMVar3 = g_money_008016D4;
  if (((STGameObjC *)param_4)->field_0020 == 1000) {
    iVar8 = (int)param_1;
    g_packedRecords_A62x8[iVar8].field4_0xd = g_packedRecords_A62x8[iVar8].field4_0xd + -1;
    if (pMVar3 != nullptr) {
      /* ST_CALLSITE[0042FA0B]: CALL 0x0040161d; direct=0040161D MoneyTy::sub_0052BDA0 */
      MoneyTy::sub_0052BDA0(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar8].field4_0xd);
    }
    /* ST_CALLSITE[0042FA14]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
    if (iVar5 == 0x33) {
      g_packedRecords_A62x8[iVar8].field94_0x15b = g_packedRecords_A62x8[iVar8].field94_0x15b + -1;
    }
    else if (iVar5 == 0x62) {
      g_packedRecords_A62x8[iVar8].field95_0x15f = g_packedRecords_A62x8[iVar8].field95_0x15f + -1;
    }
    /* ST_CALLSITE[0042FA33]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
    if ((STBitTest(g_bitset_00801420, iVar5 - 0x32U)) == 0) {
      /* ST_CALLSITE[0042FAB5]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
      if ((STBitTest(g_bitset_008013E0, iVar5 - 0x32U)) == 0) {
        /* ST_CALLSITE[0042FB37]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
        if ((STBitTest(g_bitset_00800EE0, iVar5 - 0x32U)) == 0) {
          /* ST_CALLSITE[0042FBB9]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
          if ((STBitTest(g_bitset_00801490, iVar5 - 0x32U)) == 0) {
            /* ST_CALLSITE[0042FC3B]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
            if ((STBitTest(g_bitset_00800F20, iVar5 - 0x32U)) == 0)
            {
              /* ST_CALLSITE[0042FCBD]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
              if ((STBitTest(g_bitset_00800EF0, iVar5 - 0x32U)) == 0
                 ) {
                /* ST_CALLSITE[0042FD3F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
                if ((STBitTest(g_bitset_00801430, iVar5 - 0x32U)) ==
                    0) {
                  /* ST_CALLSITE[0042FDC1]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                  iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
                  if ((STBitTest(g_bitset_00801440, iVar5 - 0x32U))
                      == 0) {
                    /* ST_CALLSITE[0042FE43]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                    iVar5 = ((STGameObjC *)param_4)->vfunc_2C();
                    if ((STBitTest(g_bitset_00800F60, iVar5 - 0x32U)
                        ) == 0) {

                      local_EAX_3102 =
                           ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x797,0,0,
                                              "%s",
                                              "STAllPlayersC::UnRegisterObject unknown object type");
                      if (local_EAX_3102 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar8].field90_0x14b =
                           g_packedRecords_A62x8[iVar8].field90_0x14b + -1;
                      if ((param_5 != 0xfe) &&
                         (g_packedRecords_A62x8[iVar8].field92_0x153 =
                               g_packedRecords_A62x8[iVar8].field92_0x153 + 1, param_5 != 0xff)) {
                        g_packedRecords_A62x8[param_5].field93_0x157 =
                             g_packedRecords_A62x8[param_5].field93_0x157 + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar8].field86_0x13b =
                         g_packedRecords_A62x8[iVar8].field86_0x13b + -1;
                    if ((param_5 != 0xfe) &&
                       (g_packedRecords_A62x8[iVar8].field88_0x143 =
                             g_packedRecords_A62x8[iVar8].field88_0x143 + 1, param_5 != 0xff)) {
                      g_packedRecords_A62x8[param_5].field89_0x147 =
                           g_packedRecords_A62x8[param_5].field89_0x147 + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar8].field82_0x12b =
                       g_packedRecords_A62x8[iVar8].field82_0x12b + -1;
                  if ((param_5 != 0xfe) &&
                     (g_packedRecords_A62x8[iVar8].field84_0x133 =
                           g_packedRecords_A62x8[iVar8].field84_0x133 + 1, param_5 != 0xff)) {
                    g_packedRecords_A62x8[param_5].field85_0x137 =
                         g_packedRecords_A62x8[param_5].field85_0x137 + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar8].field78_0x11b =
                     g_packedRecords_A62x8[iVar8].field78_0x11b + -1;
                if ((param_5 != 0xfe) &&
                   (g_packedRecords_A62x8[iVar8].field80_0x123 =
                         g_packedRecords_A62x8[iVar8].field80_0x123 + 1, param_5 != 0xff)) {
                  g_packedRecords_A62x8[param_5].field81_0x127 =
                       g_packedRecords_A62x8[param_5].field81_0x127 + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar8].field74_0x10b =
                   g_packedRecords_A62x8[iVar8].field74_0x10b + -1;
              if ((param_5 != 0xfe) &&
                 (g_packedRecords_A62x8[iVar8].field76_0x113 =
                       g_packedRecords_A62x8[iVar8].field76_0x113 + 1, param_5 != 0xff)) {
                g_packedRecords_A62x8[param_5].field77_0x117 =
                     g_packedRecords_A62x8[param_5].field77_0x117 + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar8].field70_0xfb =
                 g_packedRecords_A62x8[iVar8].field70_0xfb + -1;
            if ((param_5 != 0xfe) &&
               (g_packedRecords_A62x8[iVar8].field72_0x103 =
                     g_packedRecords_A62x8[iVar8].field72_0x103 + 1, param_5 != 0xff)) {
              g_packedRecords_A62x8[param_5].field73_0x107 =
                   g_packedRecords_A62x8[param_5].field73_0x107 + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar8].field66_0xeb = g_packedRecords_A62x8[iVar8].field66_0xeb + -1
          ;
          if ((param_5 != 0xfe) &&
             (g_packedRecords_A62x8[iVar8].field68_0xf3 =
                   g_packedRecords_A62x8[iVar8].field68_0xf3 + 1, param_5 != 0xff)) {
            g_packedRecords_A62x8[param_5].field69_0xf7 =
                 g_packedRecords_A62x8[param_5].field69_0xf7 + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar8].field62_0xdb = g_packedRecords_A62x8[iVar8].field62_0xdb + -1;
        if ((param_5 != 0xfe) &&
           (g_packedRecords_A62x8[iVar8].field64_0xe3 =
                 g_packedRecords_A62x8[iVar8].field64_0xe3 + 1, param_5 != 0xff)) {
          g_packedRecords_A62x8[param_5].field65_0xe7 =
               g_packedRecords_A62x8[param_5].field65_0xe7 + 1;
        }
      }
    }
    else {
      g_packedRecords_A62x8[iVar8].field58_0xcb = g_packedRecords_A62x8[iVar8].field58_0xcb + -1;
      if ((param_5 != 0xfe) &&
         (g_packedRecords_A62x8[iVar8].field60_0xd3 = g_packedRecords_A62x8[iVar8].field60_0xd3 + 1,
         param_5 != 0xff)) {
        g_packedRecords_A62x8[param_5].field61_0xd7 =
             g_packedRecords_A62x8[param_5].field61_0xd7 + 1;
      }
    }
  }
  this_00 = local_18;
  /* ST_CALLSITE[0042FEEA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  pSVar7 = GetObjPtr(local_18,param_1,(ushort)param_3,CASE_1);
  if (pSVar7 != (STGameObjC *)param_4) {
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

    iVar8 = thunk_FUN_004237d0(local_10,(ushort)param_3);
    if (iVar8 == 0) {
      RaiseInternalException
                (-0x5001fffd,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x7a6);
    }
  }
  /* ST_CALLSITE[0042FF76]: CALL 0x00402653; direct=00402653 thunk_FUN_00440820; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
  thunk_FUN_00440820(_param_1,param_3);
  /* ST_CALLSITE[0042FF8C]: CALL 0x004021a3; direct=004021A3 STAllPlayersC::DelObjFromTmps */
  DelObjFromTmps(this_00,DAT_0080874d,((STGameObjC *)param_4)->field_0020,param_1,param_3);
  /* ST_CALLSITE[0042FF9C]: CALL 0x00403643; direct=00403643 STAllPlayersC::DelObjFromSaveTmps */
  DelObjFromSaveTmps(this_00,((STGameObjC *)param_4)->field_0020,param_1,(ushort)param_3);
  this_01 = local_10;
  array_00 = local_14;
  uVar9 = param_3;
  if ((ushort)param_2 != 0xffff) {
    /* ST_CALLSITE[0042FFB1]: CALL dword ptr [EAX + 0x4] */
    local_10->vfunc_4((ushort)param_3);

    Library::DKW::TBL::DArrayPut((DArrayTy *)local_14,param_3 & 0xffff,&local_c);
    /* ST_CALLSITE[0042FFCC]: CALL 0x00401735; direct=00401735 STGroupBoatC::sub_004233C0 */
    uVar4 = STGroupBoatC::sub_004233C0(this_01);
    if ((uVar4 != 0) ||

       (iVar8 = thunk_FUN_004233a0((RecoveredRecord_004233A0_9E2D1712 *)this_01), iVar8 != 0))
    goto LAB_00430018;
    /* ST_CALLSITE[0042FFEB]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
    STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,this_01->field_0008);
    array_00 = local_1c;
    uVar9 = param_2;
  }

  Library::DKW::TBL::DArrayPut((DArrayTy *)array_00,uVar9 & 0xffff,&local_c);
LAB_00430018:
  /* ST_CALLSITE[0043001C]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
  iVar8 = ((STGameObjC *)param_4)->vfunc_2C();
  array = local_20;
  if ((iVar8 == 0x1d) && (local_20 != nullptr)) {
    local_24 = local_20->count;
    uVar9 = 0;
    if (0 < (int)local_24) {
      while( true ) {

        DArrayGetElement(array,uVar9,&local_8);
        if ((ushort)local_8 == (ushort)param_3) break;
        uVar9 = uVar9 + 1;
        if ((int)local_24 <= (int)uVar9) {
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      local_8 = 0xffff;

      Library::DKW::TBL::DArrayPut(array,uVar9,&local_8);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

