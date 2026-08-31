#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignMDPairs
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00442F42 MOVSX EAX,byte ptr [EBP + 0x8] | 0044319E MOVSX
   EAX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/char
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

uint * __thiscall
STAllPlayersC::_AssignMDPairs
          (STAllPlayersC *this,char param_1,int param_2,DArrayTy *param_3,DArrayTy *param_4,
          DArrayTy *param_5)

{
  bool bVar2;
  STFishC *pSVar3;
  short sVar4;
  int local_EAX_107;
  int *piVar5;
  int iVar5;
  uint *puVar6;
  int local_EAX_903;
  STGameObjC *this_00;
  int local_EAX_1125;
  short *psVar7;
  int local_EAX_2342;
  int local_EAX_2462;
  DArrayTy *pDVar9;
  int iVar10;
  int iVar9;
  int iVar11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STWorldCell *extraout_EDX;
  STWorldCell *pSVar12;
  ushort uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  dword dVar14;
  uint uVar15;
  uint uVar16;
  DArrayTy *pDVar8;
  dword dVar17;
  uint uVar18;
  short *psVar19;
  DArrayTy *pDVar20;
  uint local_19c [17];
  short local_158 [3];
  int local_152;
  short local_14e;
  short local_14c;
  short local_14a;
  int local_148;
  int local_13e;
  int local_13a;
  InternalExceptionFrame local_114;
  int local_d0 [5];
  DArrayTy *local_bc;
  dword local_b8;
  uint local_b4;
  byte local_b0 [6];
  short local_aa;
  short local_a2;
  int local_94;
  int local_90;
  STAllPlayersC *local_8c;
  uint local_88;
  DArrayTy *local_84;
  short local_80;
  short local_7e;
  ushort local_7c;
  int local_7a;
  int local_76;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_62;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  DArrayTy *local_4c;
  DArrayTy *local_48;
  DArrayTy *local_44;
  STFishC *local_40;
  uint local_3c;
  uint local_38;
  DArrayTy *local_34;
  DArrayTy *local_30;
  uint local_2c;
  dword local_28;
  uint local_24;
  DArrayTy *local_20;
  STGroupC *local_1c;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  int local_e;
  uint local_8;
  local_d0[4] = 4;
  local_d0[0] = 0x38;
  local_d0[1] = 0x39;
  local_d0[2] = 0x4f;
  local_d0[3] = 0x5e;
  local_84 = nullptr;
  local_4c = nullptr;
  local_114.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_114;
  local_8c = this;

  local_EAX_107 = Library::MSVCRT::__setjmp3(local_114.jumpBuffer,0);
  if (local_EAX_107 != 0) {
    g_currentExceptionFrame = local_114.previous;
    if (local_EAX_107 != -0x5001fff7) {

      iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x25ed,0,local_EAX_107,
                                 "%s","STAllPlayersC::_AssignMDPairs");
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_107,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x25ee);
    }
    return &local_4c->flags;
  }
  if (((param_3 != nullptr) && (param_4 != nullptr)) && (param_5 != nullptr)
     ) {
    uVar16 = param_3->count;
    local_3c = uVar16;
    if (((uVar16 != 0) && (local_2c = param_4->count, param_4->count != 0)) &&
       (local_38 = param_5->count, param_5->count != 0)) goto LAB_00442f1f;
  }
  uVar16 = local_3c;
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0x24ce
            );
LAB_00442f1f:
  iVar11 = 0;
  if (0 < local_d0[4]) {
    piVar5 = local_d0;
    do {
      if (param_2 == *piVar5) {
        local_84 = *(DArrayTy **)(iVar11 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xF));
        break;
      }
      iVar11 = iVar11 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar11 < local_d0[4]);
  }
  if ((local_84 == nullptr) || (local_28 = local_84->count, local_28 == 0)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24d1);
  }
  uVar15 = 0;
  if (0 < (int)uVar16) {
    do {

      DArrayGetElement(param_3,uVar15,&local_8);
      if ((short)local_8 != -1) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  if (uVar15 == uVar16) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24e2);
  }
  pSVar3 = local_40;
  uVar16 = 0;
  if (0 < (int)local_2c) {
    do {

      DArrayGetElement(param_4,uVar16,&local_8);
      if ((pSVar3 != nullptr) && ((short)local_8 != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)local_2c);
  }
  if (uVar16 == local_2c) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24f4);
  }
  uVar16 = 0;
  if (0 < (int)local_38) {
    do {

      DArrayGetElement(param_5,uVar16,&local_8);
      if ((short)local_8 != -1) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)local_38);
  }
  if (uVar16 == local_38) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2507);
  }
  local_34 = Library::DKW::TBL::DArrayCreate(nullptr,0,0x24,1);
  uVar16 = 0;
  if (0 < (int)local_28) {
    do {

      DArrayGetElement(local_84,uVar16,&local_70);
      if ((local_6a != -1) && (local_62 != -1)) {
        bVar2 = false;
        uVar15 = 0;
        if (0 < (int)local_3c) {
          do {

            DArrayGetElement(param_3,uVar15,&local_8);
            if (local_6a == (short)local_8) {
              bVar2 = true;
              break;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_3c);
        }
        if (bVar2) {
          bVar2 = false;
          uVar15 = 0;
          if (0 < (int)local_2c) {
            do {

              DArrayGetElement(param_4,uVar15,&local_8);
              if (local_62 == (short)local_8) {
                bVar2 = true;
                break;
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < (int)local_2c);
          }
          if (bVar2) {

            Library::DKW::TBL::DArrayAppend(local_34,&local_70);
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)local_28);
  }
  if (local_34->count == 0) {
    DArrayDestroy(local_34);

    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2522,0,0,"%s",
                               "STAllPlayersC::_AssignMDPairs pair==NULL");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2524);
  }
  local_20 = Library::DKW::TBL::DArrayCreate(nullptr,local_3c,6,1);
  local_30 = Library::DKW::TBL::DArrayCreate(nullptr,local_2c,6,1);
  pDVar8 = g_packedRecords_A62x8[param_1].field2_0x5;
  local_bc = pDVar8;
  if (pDVar8 == nullptr) {

    local_EAX_903 =
         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x252c,0,0,"%s",
                            "STAllPlayersC::_AssignMDPairs grps==NULL");
    if (local_EAX_903 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x252d);
  }
  dVar14 = pDVar8->count;
  local_24 = 0;
  local_28 = dVar14;
  if (0 < (int)dVar14) {
    do {
      uVar16 = local_24;

      DArrayGetElement(pDVar8,local_24,&local_1c);
      if ((local_1c != nullptr) &&
         /* ST_CALLSITE[0044322C]: CALL dword ptr [EDX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
         /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
         (iVar11 = (**(code **)(local_1c->vtable + 0xc))(), iVar11 == 8)) {
        /* ST_CALLSITE[0044323B]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
        local_48 = (DArrayTy *)STGroupC::GetGroupContent(local_1c);
        local_b8 = local_48->count;
        if ((local_b8 != 0) && (local_44 = nullptr, 0 < (int)local_b8)) {
LAB_0044326c:
          uVar16 = local_38;

          DArrayGetElement(local_48,(uint)local_44,&local_8);
          if ((ushort)local_8 != 0xffff) {
            /* ST_CALLSITE[00443291]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            this_00 = GetObjPtr(local_8c,param_1,(ushort)local_8,CASE_1);
            local_40 = (STFishC *)this_00;
            if (this_00 == nullptr) {

              local_EAX_1125 =
                   ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2539,0,0,
                                      "%s","STAllPlayersC::_AssignMDPairs ptr==NULL");
              if (local_EAX_1125 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_allpl.cpp",0x253a);
            }
            /* ST_CALLSITE[004432E0]: CALL dword ptr [EDX + 0x2c] */
            iVar11 = this_00->vfunc_2C();
            /* ST_CALLSITE[004432EC]: CALL dword ptr [EAX + 0x2c] */
            if ((((iVar11 != 8) && (iVar11 = this_00->vfunc_2C(), iVar11 != 0x14))
                /* ST_CALLSITE[004432F8]: CALL dword ptr [EDX + 0x2c] */
                && (iVar11 = this_00->vfunc_2C(), iVar11 != 0x1a)) ||
               /* ST_CALLSITE[00443306]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
               (iVar11 = STGameObjC::sub_0045FF10(this_00), iVar11 != 0xc))
            goto cf_common_join_004435CD;
            uVar15 = 0;
            if (0 < (int)uVar16) {
              do {

                DArrayGetElement(param_5,uVar15,&local_12);
                if ((short)local_8 == local_12) break;
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < (int)uVar16);
            }
            if ((int)uVar15 < (int)uVar16) goto cf_common_join_004435CD;
            /* ST_CALLSITE[00443348]: CALL 0x004024cd; direct=004024CD STGameObjC::sub_0048DC90 */
            psVar7 = STPointerBoundaryCast<short *>(STGameObjC::sub_0048DC90(this_00,local_19c));
            psVar19 = local_158;
            for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
              *(undefined4 *)psVar19 = *(undefined4 *)psVar7;
              psVar7 = psVar7 + 2;
              psVar19 = psVar19 + 2;
            }
            *psVar19 = *psVar7;
            uVar16 = local_3c;
            if ((local_152 == -1) || (local_148 == -1)) goto cf_common_join_004435CD;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            pSVar12 = extraout_EDX;
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            if ((((local_158[0] < 0) ||
                 ((g_worldGrid.sizeX <= local_158[0] ||
                  (pSVar12 = (STWorldCell *)
                             STReplaceLowWord((uint32_t)(extraout_EDX), (uint16_t)(local_158[1])),
                  local_158[1] < 0)))) || (g_worldGrid.sizeY <= local_158[1])) ||
               ((local_158[2] < 0 || (g_worldGrid.sizeZ <= local_158[2])))) {
              local_40 = nullptr;
            }
            else {
              local_40 = (STFishC *)
                         STGridAt3D(g_worldGrid, local_158[0], local_158[1], local_158[2]).objects[0]
              ;
              pSVar12 = g_worldGrid.cells;
            }
            uVar13 = (undefined2)((uint)pSVar12 >> 0x10);
            if (local_40 == nullptr) goto cf_common_join_004435CD;
            local_8 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)(*(undefined2 *)&local_40->field_0x32));
            uVar15 = 0;
            if (0 < (int)local_3c) {
              do {

                DArrayGetElement(param_3,uVar15,&local_12);
                iVar11 = local_13e;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                uVar13 = extraout_var;
                if ((short)local_8 == local_12) {
                  uVar16 = local_20->count;
                  if (uVar16 == 0) {
                    uVar15 = 0;
                    local_10 = (short)local_8;
                    goto LAB_0044349d;
                  }
                  uVar15 = 0;
                  if ((int)uVar16 < 1) goto LAB_00443473;
                  goto LAB_0044343c;
                }
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < (int)uVar16);
            }
            goto LAB_004434a2;
          }
          goto cf_common_join_004435CD;
        }
LAB_004435f1:
        DArrayDestroy(local_48);
      }
      local_24 = uVar16 + 1;
    } while ((int)local_24 < (int)dVar14);
  }
  local_24 = 0;
  if (0 < (int)local_3c) {
    do {

      DArrayGetElement(param_3,local_24,&local_8);
      pDVar9 = local_20;
      sVar4 = (short)local_8;
      if (sVar4 != -1) {
        dVar17 = 0;
        dVar14 = local_20->count;
        local_28 = dVar14;
        if (dVar14 != 0) {
          if (0 < (int)dVar14) {
            do {

              DArrayGetElement(pDVar9,dVar17,&local_10);
              sVar4 = (short)local_8;
              if (local_10 == sVar4) break;
              dVar17 = dVar17 + 1;
            } while ((int)dVar17 < (int)dVar14);
          }
          if (dVar17 != dVar14) goto LAB_00443676;
        }
        local_10 = sVar4;
        local_e = 0;

        Library::DKW::TBL::DArrayAppend(pDVar9,&local_10);
      }
LAB_00443676:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_3c);
  }
  local_24 = 0;
  if (0 < (int)local_2c) {
    do {

      DArrayGetElement(param_4,local_24,&local_8);
      pDVar9 = local_30;
      sVar4 = (short)local_8;
      if (sVar4 != -1) {
        dVar17 = 0;
        dVar14 = local_30->count;
        local_28 = dVar14;
        if (dVar14 != 0) {
          if (0 < (int)dVar14) {
            do {

              DArrayGetElement(pDVar9,dVar17,&local_10);
              sVar4 = (short)local_8;
              if (local_10 == sVar4) break;
              dVar17 = dVar17 + 1;
            } while ((int)dVar17 < (int)dVar14);
          }
          if (dVar17 != dVar14) goto LAB_004436f7;
        }
        local_10 = sVar4;
        local_e = 0;

        Library::DKW::TBL::DArrayAppend(pDVar9,&local_10);
      }
LAB_004436f7:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_2c);
  }
  uVar16 = 0;
  local_28 = local_34->count;
  if (0 < (int)local_28) {
    do {

      DArrayGetElement(local_34,uVar16,&local_70);
      uVar18 = 0;
      uVar15 = local_20->count;
      local_3c = uVar15;
      if (0 < (int)uVar15) {
        do {

          DArrayGetElement(local_20,uVar18,&local_10);
          if (local_10 == local_6a) {
            local_54 = local_e;
            break;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar15);
      }
      if (uVar18 == uVar15) {

        local_EAX_2342 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x25a4,0,0,"%s",
                                "STAllPlayersC::_AssignMDPairs M absent");
        if (local_EAX_2342 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x25a5);
      }
      uVar18 = 0;
      uVar15 = local_30->count;
      local_2c = uVar15;
      if (0 < (int)uVar15) {
        do {

          DArrayGetElement(local_30,uVar18,&local_10);
          if (local_10 == local_62) {
            local_50 = local_e;
            break;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar15);
      }
      if (uVar18 == uVar15) {

        local_EAX_2462 =
             ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x25ad,0,0,"%s",
                                "STAllPlayersC::_AssignMDPairs D absent");
        if (local_EAX_2462 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x25ae);
      }

      Library::DKW::TBL::DArrayPut(local_34,uVar16,&local_70);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)local_28);
  }
  DArrayDestroy(local_20);
  DArrayDestroy(local_30);
  uVar16 = local_38;
  pDVar20 = nullptr;
  uVar15 = 0;
  local_30 = nullptr;
  pDVar9 = local_30;
  if (0 < (int)local_38) {
    do {

      DArrayGetElement(param_5,uVar15,&local_8);
      if ((short)local_8 != -1) {
        pDVar20 = (DArrayTy *)((int)&pDVar20->flags + 1);
      }
      uVar15 = uVar15 + 1;
      pDVar9 = pDVar20;
    } while ((int)uVar15 < (int)uVar16);
  }
  local_30 = pDVar9;
  pDVar9 = local_30;
  local_20 = Library::DKW::TBL::DArrayCreate(nullptr,(uint)local_30,0x24,1);
  pDVar20 = local_34;
  if (0 < (int)pDVar9) {
    do {
      local_44 = pDVar9;
      uVar16 = 0;
      local_48 = (DArrayTy *)0x5f5e100;
      if (0 < (int)local_28) {
        do {

          DArrayGetElement(pDVar20,uVar16,&local_70);
          if (local_5c + local_54 < 0x65) {
            iVar11 = 0;
          }
          else {
            iVar11 = ((local_5c + local_54 + -100) * local_60) / 100;
          }
          if (local_58 + local_50 < 0x65) {
            local_88 = 0;
          }
          else {
            local_88 = ((local_58 + local_50 + -100) * local_60) / 100;
          }
          pDVar9 = (DArrayTy *)(local_88 + local_60 + iVar11);
          if ((int)pDVar9 < (int)local_48) {
            local_b4 = uVar16;
            local_48 = pDVar9;
          }
          uVar16 = uVar16 + 1;
          pDVar20 = local_34;
        } while ((int)uVar16 < (int)local_28);
      }
      dVar14 = local_28;
      uVar16 = local_b4;

      DArrayGetElement(pDVar20,local_b4,&local_70);
      local_54 = local_54 + local_5c;
      local_50 = local_50 + local_58;

      Library::DKW::TBL::DArrayPut(pDVar20,uVar16,&local_70);

      Library::DKW::TBL::DArrayAppend(local_20,&local_70);
      uVar16 = 0;
      if (0 < (int)dVar14) {
        do {

          DArrayGetElement(pDVar20,uVar16,local_b0);
          if (local_aa == local_6a) {
            local_94 = local_54;
          }
          if (local_a2 == local_62) {
            local_90 = local_50;
          }
          if (local_a2 == local_62 || local_aa == local_6a) {

            Library::DKW::TBL::DArrayPut(pDVar20,uVar16,local_b0);
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)dVar14);
      }
      pDVar9 = (DArrayTy *)((int)&local_44[-1].data + 3);
    } while (pDVar9 != nullptr);
    local_44 = nullptr;
  }
  DArrayDestroy(pDVar20);
  uVar16 = local_38;
  pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,local_38,2,1);
  uVar15 = 0;
  if (0 < (int)uVar16) {
    do {

      DArrayGetElement(param_5,uVar15,&local_8);

      Library::DKW::TBL::DArrayPut(pDVar9,uVar15,&local_8);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  pDVar20 = local_30;
  local_4c = Library::DKW::TBL::DArrayCreate(nullptr,(uint)local_30,0xe,1);
  local_24 = 0;
  if (0 < (int)pDVar20) {
    do {

      DArrayGetElement(local_20,local_24,&local_70);
      uVar16 = 0;
      iVar11 = 100000000;
      if (0 < (int)local_38) {
        do {

          DArrayGetElement(pDVar9,uVar16,&local_8);
          if ((ushort)local_8 != 0xffff) {
            /* ST_CALLSITE[00443A8E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            local_40 = GetObjPtr(local_8c,param_1,(ushort)local_8,CASE_1);
            /* ST_CALLSITE[00443AA4]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            STFishC::sub_004162B0(local_40,&local_18,&local_14,&local_16);

            iVar10 = FUN_006aadd0((int)local_18,(int)local_14,(int)local_16,(int)local_70,
                                  (int)local_6e,(int)local_6c);
            if (iVar10 < iVar11) {
              iVar11 = iVar10;
              local_88 = uVar16;
            }
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_38);
      }
      uVar16 = local_88;

      DArrayGetElement(pDVar9,local_88,&local_8);
      local_80 = local_6a;
      local_7c = (short)local_8;
      local_7a = local_5c;
      local_7e = local_62;
      local_76 = local_58;

      Library::DKW::TBL::DArrayAppend(local_4c,&local_80);
      local_8 = 0xffff;

      Library::DKW::TBL::DArrayPut(pDVar9,uVar16,&local_8);
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_30);
  }
  DArrayDestroy(pDVar9);
  DArrayDestroy(local_20);
  g_currentExceptionFrame = local_114.previous;
  return &local_4c->flags;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  while (uVar15 = uVar15 + 1, uVar13 = extraout_var_00, (int)uVar15 < (int)uVar16) {
LAB_0044343c:

    DArrayGetElement(local_20,uVar15,&local_10);
    if (local_10 == (short)local_8) {
      local_e = local_e + iVar11;

      Library::DKW::TBL::DArrayPut(local_20,uVar15,&local_10);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar13 = extraout_var_01;
      break;
    }
  }
LAB_00443473:
  if (uVar15 == uVar16) {
    local_10 = (short)local_8;
LAB_0044349d:
    local_e = iVar11;

    Library::DKW::TBL::DArrayPut(local_20,uVar15,&local_10);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar13 = extraout_var_02;
  }
LAB_004434a2:
  uVar16 = local_2c;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar11 = CONCAT22(uVar13,local_14e);
  if ((((local_14e < 0) || (g_worldGrid.sizeX <= local_14e)) || (local_14c < 0)) ||
     (((g_worldGrid.sizeY <= local_14c || (local_14a < 0)) || (g_worldGrid.sizeZ <= local_14a)))) {
    local_40 = nullptr;
  }
  else {
    iVar11 = (int)local_14e;
    local_40 = (STFishC *)
               STGridAt3D(g_worldGrid, iVar11, local_14c, local_14a).objects[0];
  }
  if (local_40 != nullptr) {
    local_8 = STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(*(undefined2 *)&local_40->field_0x32));
    uVar15 = 0;
    if (0 < (int)local_2c) {
      do {

        DArrayGetElement(param_4,uVar15,&local_12);
        pDVar9 = local_30;
        sVar4 = (short)local_8;
        if (sVar4 == local_12) {
          uVar16 = local_30->count;
          if (uVar16 == 0) {
            uVar15 = 0;
            goto LAB_004435c8;
          }
          uVar15 = 0;
          if ((int)uVar16 < 1) goto LAB_00443598;
          goto LAB_0044355f;
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar16);
    }
  }
cf_common_join_004435CD:
  local_44 = (DArrayTy *)((int)local_44 + 1);
  dVar14 = local_28;
  pDVar8 = local_bc;
  uVar16 = local_24;
  if ((int)local_b8 <= (int)local_44) goto LAB_004435f1;
  goto LAB_0044326c;
  while (uVar15 = uVar15 + 1, (int)uVar15 < (int)uVar16) {
LAB_0044355f:

    DArrayGetElement(pDVar9,uVar15,&local_10);
    sVar4 = (short)local_8;
    if (local_10 == sVar4) {
      local_e = local_e + local_13a;

      Library::DKW::TBL::DArrayPut(pDVar9,uVar15,&local_10);
      sVar4 = (short)local_8;
      break;
    }
  }
LAB_00443598:
  if (uVar15 == uVar16) {
LAB_004435c8:
    local_10 = sVar4;
    local_e = local_13a;

    Library::DKW::TBL::DArrayPut(local_30,uVar15,&local_10);
  }
  goto cf_common_join_004435CD;
}

