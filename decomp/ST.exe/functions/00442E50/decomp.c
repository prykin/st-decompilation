#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignMDPairs
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00442F42 MOVSX EAX,byte ptr [EBP + 0x8] | 0044319E MOVSX
   EAX,byte ptr [EBP + 0x8] */

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
  STGameObjC *objPtr;
  int local_EAX_1125;
  int local_EAX_2342;
  int local_EAX_2462;
  DArrayTy *pDVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  STWorldCell *pSVar11;
  undefined2 uVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  dword dVar13;
  uint uVar14;
  uint uVar15;
  DArrayTy *pDVar8;
  short *psVar16;
  dword dVar17;
  uint uVar18;
  short *psVar19;
  DArrayTy *pDVar20;
  undefined8 uVar21;
  undefined4 local_19c [17];
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
  undefined1 local_b0 [6];
  short local_aa;
  short local_a2;
  int local_94;
  int local_90;
  STAllPlayersC *local_8c;
  uint local_88;
  DArrayTy *local_84;
  short local_80;
  short local_7e;
  undefined2 local_7c;
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
  undefined4 local_8;

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
    uVar15 = param_3->count;
    local_3c = uVar15;
    if (((uVar15 != 0) && (local_2c = param_4->count, param_4->count != 0)) &&
       (local_38 = param_5->count, param_5->count != 0)) goto LAB_00442f1f;
  }
  uVar15 = local_3c;
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0x24ce
            );
LAB_00442f1f:
  iVar10 = 0;
  if (0 < local_d0[4]) {
    piVar5 = local_d0;
    do {
      if (param_2 == *piVar5) {
        local_84 = *(DArrayTy **)(iVar10 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xF));
        break;
      }
      iVar10 = iVar10 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar10 < local_d0[4]);
  }
  if ((local_84 == nullptr) || (local_28 = local_84->count, local_28 == 0)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24d1);
  }
  uVar14 = 0;
  if (0 < (int)uVar15) {
    do {
      DArrayGetElement(param_3,uVar14,&local_8);
      if ((short)local_8 != -1) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar15);
  }
  if (uVar14 == uVar15) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24e2);
  }
  pSVar3 = local_40;
  uVar15 = 0;
  if (0 < (int)local_2c) {
    do {
      DArrayGetElement(param_4,uVar15,&local_8);
      if ((pSVar3 != nullptr) && ((short)local_8 != -1)) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)local_2c);
  }
  if (uVar15 == local_2c) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24f4);
  }
  uVar15 = 0;
  if (0 < (int)local_38) {
    do {
      DArrayGetElement(param_5,uVar15,&local_8);
      if ((short)local_8 != -1) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)local_38);
  }
  if (uVar15 == local_38) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2507);
  }
  local_34 = Library::DKW::TBL::DArrayCreate(nullptr,0,0x24,1);
  uVar15 = 0;
  if (0 < (int)local_28) {
    do {
      DArrayGetElement(local_84,uVar15,&local_70);
      if ((local_6a != -1) && (local_62 != -1)) {
        bVar2 = false;
        uVar14 = 0;
        if (0 < (int)local_3c) {
          do {
            DArrayGetElement(param_3,uVar14,&local_8);
            if (local_6a == (short)local_8) {
              bVar2 = true;
              break;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_3c);
        }
        if (bVar2) {
          bVar2 = false;
          uVar14 = 0;
          if (0 < (int)local_2c) {
            do {
              DArrayGetElement(param_4,uVar14,&local_8);
              if (local_62 == (short)local_8) {
                bVar2 = true;
                break;
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)local_2c);
          }
          if (bVar2) {
            Library::DKW::TBL::DArrayAppend(local_34,&local_70);
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)local_28);
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
  pDVar8 = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
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
  dVar13 = pDVar8->count;
  local_24 = 0;
  local_28 = dVar13;
  if (0 < (int)dVar13) {
    do {
      uVar15 = local_24;
      DArrayGetElement(pDVar8,local_24,&local_1c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((local_1c != nullptr) &&
         (iVar10 = (**(code **)(local_1c->vtable + 0xc))(), iVar10 == 8)) {
        local_48 = (DArrayTy *)STGroupC::GetGroupContent(local_1c);
        local_b8 = local_48->count;
        if ((local_b8 != 0) && (local_44 = nullptr, 0 < (int)local_b8)) {
LAB_0044326c:
          uVar15 = local_38;
          DArrayGetElement(local_48,(uint)local_44,&local_8);
          if ((ushort)local_8 != 0xffff) {
            objPtr = GetObjPtr(local_8c,param_1,(ushort)local_8,CASE_1);
            local_40 = (STFishC *)objPtr;
            if (objPtr == nullptr) {
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
            iVar10 = (*objPtr->vtable->vfunc_2C)();
            if ((((iVar10 != 8) && (iVar10 = (*objPtr->vtable->vfunc_2C)(), iVar10 != 0x14)) &&
                (iVar10 = (*objPtr->vtable->vfunc_2C)(), iVar10 != 0x1a)) ||
               (iVar10 = thunk_FUN_0045ff10(objPtr), iVar10 != 0xc)) goto cf_common_join_004435CD;
            uVar14 = 0;
            if (0 < (int)uVar15) {
              do {
                DArrayGetElement(param_5,uVar14,&local_12);
                if ((short)local_8 == local_12) break;
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar15);
            }
            if ((int)uVar14 < (int)uVar15) goto cf_common_join_004435CD;
            uVar21 = thunk_FUN_0048dc90(objPtr,local_19c);
            pSVar11 = (STWorldCell *)((ulonglong)uVar21 >> 0x20);
            psVar16 = (short *)uVar21;
            psVar19 = local_158;
            for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined4 *)psVar19 = *(undefined4 *)psVar16;
              psVar16 = psVar16 + 2;
              psVar19 = psVar19 + 2;
            }
            *psVar19 = *psVar16;
            uVar15 = local_3c;
            if ((local_152 == -1) || (local_148 == -1)) goto cf_common_join_004435CD;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((((local_158[0] < 0) ||
                 ((g_worldGrid.sizeX <= local_158[0] ||
                  (pSVar11 = (STWorldCell *)
                             CONCAT22((short)((ulonglong)uVar21 >> 0x30),local_158[1]),
                  local_158[1] < 0)))) || (g_worldGrid.sizeY <= local_158[1])) ||
               ((local_158[2] < 0 || (g_worldGrid.sizeZ <= local_158[2])))) {
              local_40 = nullptr;
            }
            else {
              local_40 = (STFishC *)
                         STGridAt3D(g_worldGrid, local_158[0], local_158[1], local_158[2]).objects[0]
              ;
              pSVar11 = g_worldGrid.cells;
            }
            uVar12 = (undefined2)((uint)pSVar11 >> 0x10);
            if (local_40 == nullptr) goto cf_common_join_004435CD;
            local_8 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)(*(undefined2 *)&local_40->field_0x32));
            uVar14 = 0;
            if (0 < (int)local_3c) {
              do {
                DArrayGetElement(param_3,uVar14,&local_12);
                iVar10 = local_13e;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                uVar12 = extraout_var;
                if ((short)local_8 == local_12) {
                  uVar15 = local_20->count;
                  if (uVar15 == 0) {
                    uVar14 = 0;
                    local_10 = (short)local_8;
                    goto LAB_0044349d;
                  }
                  uVar14 = 0;
                  if ((int)uVar15 < 1) goto LAB_00443473;
                  goto LAB_0044343c;
                }
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)uVar15);
            }
            goto LAB_004434a2;
          }
          goto cf_common_join_004435CD;
        }
LAB_004435f1:
        DArrayDestroy(local_48);
      }
      local_24 = uVar15 + 1;
    } while ((int)local_24 < (int)dVar13);
  }
  local_24 = 0;
  if (0 < (int)local_3c) {
    do {
      DArrayGetElement(param_3,local_24,&local_8);
      pDVar7 = local_20;
      sVar4 = (short)local_8;
      if (sVar4 != -1) {
        dVar17 = 0;
        dVar13 = local_20->count;
        local_28 = dVar13;
        if (dVar13 != 0) {
          if (0 < (int)dVar13) {
            do {
              DArrayGetElement(pDVar7,dVar17,&local_10);
              sVar4 = (short)local_8;
              if (local_10 == sVar4) break;
              dVar17 = dVar17 + 1;
            } while ((int)dVar17 < (int)dVar13);
          }
          if (dVar17 != dVar13) goto LAB_00443676;
        }
        local_10 = sVar4;
        local_e = 0;
        Library::DKW::TBL::DArrayAppend(pDVar7,&local_10);
      }
LAB_00443676:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_3c);
  }
  local_24 = 0;
  if (0 < (int)local_2c) {
    do {
      DArrayGetElement(param_4,local_24,&local_8);
      pDVar7 = local_30;
      sVar4 = (short)local_8;
      if (sVar4 != -1) {
        dVar17 = 0;
        dVar13 = local_30->count;
        local_28 = dVar13;
        if (dVar13 != 0) {
          if (0 < (int)dVar13) {
            do {
              DArrayGetElement(pDVar7,dVar17,&local_10);
              sVar4 = (short)local_8;
              if (local_10 == sVar4) break;
              dVar17 = dVar17 + 1;
            } while ((int)dVar17 < (int)dVar13);
          }
          if (dVar17 != dVar13) goto LAB_004436f7;
        }
        local_10 = sVar4;
        local_e = 0;
        Library::DKW::TBL::DArrayAppend(pDVar7,&local_10);
      }
LAB_004436f7:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_2c);
  }
  uVar15 = 0;
  local_28 = local_34->count;
  if (0 < (int)local_28) {
    do {
      DArrayGetElement(local_34,uVar15,&local_70);
      uVar18 = 0;
      uVar14 = local_20->count;
      local_3c = uVar14;
      if (0 < (int)uVar14) {
        do {
          DArrayGetElement(local_20,uVar18,&local_10);
          if (local_10 == local_6a) {
            local_54 = local_e;
            break;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar14);
      }
      if (uVar18 == uVar14) {
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
      uVar14 = local_30->count;
      local_2c = uVar14;
      if (0 < (int)uVar14) {
        do {
          DArrayGetElement(local_30,uVar18,&local_10);
          if (local_10 == local_62) {
            local_50 = local_e;
            break;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar14);
      }
      if (uVar18 == uVar14) {
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
      Library::DKW::TBL::DArrayPut(local_34,uVar15,&local_70);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)local_28);
  }
  DArrayDestroy(local_20);
  DArrayDestroy(local_30);
  uVar15 = local_38;
  pDVar20 = nullptr;
  uVar14 = 0;
  local_30 = nullptr;
  pDVar7 = local_30;
  if (0 < (int)local_38) {
    do {
      DArrayGetElement(param_5,uVar14,&local_8);
      if ((short)local_8 != -1) {
        pDVar20 = (DArrayTy *)((int)&pDVar20->flags + 1);
      }
      uVar14 = uVar14 + 1;
      pDVar7 = pDVar20;
    } while ((int)uVar14 < (int)uVar15);
  }
  local_30 = pDVar7;
  pDVar7 = local_30;
  local_20 = Library::DKW::TBL::DArrayCreate(nullptr,(uint)local_30,0x24,1);
  pDVar20 = local_34;
  if (0 < (int)pDVar7) {
    do {
      local_44 = pDVar7;
      uVar15 = 0;
      local_48 = (DArrayTy *)0x5f5e100;
      if (0 < (int)local_28) {
        do {
          DArrayGetElement(pDVar20,uVar15,&local_70);
          if (local_5c + local_54 < 0x65) {
            iVar10 = 0;
          }
          else {
            iVar10 = ((local_5c + local_54 + -100) * local_60) / 100;
          }
          if (local_58 + local_50 < 0x65) {
            local_88 = 0;
          }
          else {
            local_88 = ((local_58 + local_50 + -100) * local_60) / 100;
          }
          pDVar7 = (DArrayTy *)(local_88 + local_60 + iVar10);
          if ((int)pDVar7 < (int)local_48) {
            local_b4 = uVar15;
            local_48 = pDVar7;
          }
          uVar15 = uVar15 + 1;
          pDVar20 = local_34;
        } while ((int)uVar15 < (int)local_28);
      }
      dVar13 = local_28;
      uVar15 = local_b4;
      DArrayGetElement(pDVar20,local_b4,&local_70);
      local_54 = local_54 + local_5c;
      local_50 = local_50 + local_58;
      Library::DKW::TBL::DArrayPut(pDVar20,uVar15,&local_70);
      Library::DKW::TBL::DArrayAppend(local_20,&local_70);
      uVar15 = 0;
      if (0 < (int)dVar13) {
        do {
          DArrayGetElement(pDVar20,uVar15,local_b0);
          if (local_aa == local_6a) {
            local_94 = local_54;
          }
          if (local_a2 == local_62) {
            local_90 = local_50;
          }
          if (local_a2 == local_62 || local_aa == local_6a) {
            Library::DKW::TBL::DArrayPut(pDVar20,uVar15,local_b0);
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)dVar13);
      }
      pDVar7 = (DArrayTy *)((int)&local_44[-1].data + 3);
    } while (pDVar7 != nullptr);
    local_44 = nullptr;
  }
  DArrayDestroy(pDVar20);
  uVar15 = local_38;
  pDVar7 = Library::DKW::TBL::DArrayCreate(nullptr,local_38,2,1);
  uVar14 = 0;
  if (0 < (int)uVar15) {
    do {
      DArrayGetElement(param_5,uVar14,&local_8);
      Library::DKW::TBL::DArrayPut(pDVar7,uVar14,&local_8);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar15);
  }
  pDVar20 = local_30;
  local_4c = Library::DKW::TBL::DArrayCreate(nullptr,(uint)local_30,0xe,1);
  local_24 = 0;
  if (0 < (int)pDVar20) {
    do {
      DArrayGetElement(local_20,local_24,&local_70);
      uVar15 = 0;
      iVar10 = 100000000;
      if (0 < (int)local_38) {
        do {
          DArrayGetElement(pDVar7,uVar15,&local_8);
          if ((ushort)local_8 != 0xffff) {
            local_40 = (STFishC *)GetObjPtr(local_8c,param_1,(ushort)local_8,CASE_1);
            STFishC::sub_004162B0(local_40,&local_18,&local_14,&local_16);
            iVar8 = FUN_006aadd0((int)local_18,(int)local_14,(int)local_16,(int)local_70,
                                 (int)local_6e,(int)local_6c);
            if (iVar8 < iVar10) {
              iVar10 = iVar8;
              local_88 = uVar15;
            }
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_38);
      }
      uVar15 = local_88;
      DArrayGetElement(pDVar7,local_88,&local_8);
      local_80 = local_6a;
      local_7c = (short)local_8;
      local_7a = local_5c;
      local_7e = local_62;
      local_76 = local_58;
      Library::DKW::TBL::DArrayAppend(local_4c,&local_80);
      local_8 = 0xffff;
      Library::DKW::TBL::DArrayPut(pDVar7,uVar15,&local_8);
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_30);
  }
  DArrayDestroy(pDVar7);
  DArrayDestroy(local_20);
  g_currentExceptionFrame = local_114.previous;
  return &local_4c->flags;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  while (uVar14 = uVar14 + 1, uVar12 = extraout_var_00, (int)uVar14 < (int)uVar15) {
LAB_0044343c:
    DArrayGetElement(local_20,uVar14,&local_10);
    if (local_10 == (short)local_8) {
      local_e = local_e + iVar10;
      Library::DKW::TBL::DArrayPut(local_20,uVar14,&local_10);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar12 = extraout_var_01;
      break;
    }
  }
LAB_00443473:
  if (uVar14 == uVar15) {
    local_10 = (short)local_8;
LAB_0044349d:
    local_e = iVar10;
    Library::DKW::TBL::DArrayPut(local_20,uVar14,&local_10);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar12 = extraout_var_02;
  }
LAB_004434a2:
  uVar15 = local_2c;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar10 = CONCAT22(uVar12,local_14e);
  if ((((local_14e < 0) || (g_worldGrid.sizeX <= local_14e)) || (local_14c < 0)) ||
     (((g_worldGrid.sizeY <= local_14c || (local_14a < 0)) || (g_worldGrid.sizeZ <= local_14a)))) {
    local_40 = nullptr;
  }
  else {
    iVar10 = (int)local_14e;
    local_40 = (STFishC *)
               STGridAt3D(g_worldGrid, iVar10, local_14c, local_14a).objects[0];
  }
  if (local_40 != nullptr) {
    local_8 = STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(*(undefined2 *)&local_40->field_0x32));
    uVar14 = 0;
    if (0 < (int)local_2c) {
      do {
        DArrayGetElement(param_4,uVar14,&local_12);
        pDVar7 = local_30;
        sVar4 = (short)local_8;
        if (sVar4 == local_12) {
          uVar15 = local_30->count;
          if (uVar15 == 0) {
            uVar14 = 0;
            goto LAB_004435c8;
          }
          uVar14 = 0;
          if ((int)uVar15 < 1) goto LAB_00443598;
          goto LAB_0044355f;
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar15);
    }
  }
cf_common_join_004435CD:
  local_44 = (DArrayTy *)((int)local_44 + 1);
  dVar13 = local_28;
  pDVar8 = local_bc;
  uVar15 = local_24;
  if ((int)local_b8 <= (int)local_44) goto LAB_004435f1;
  goto LAB_0044326c;
  while (uVar14 = uVar14 + 1, (int)uVar14 < (int)uVar15) {
LAB_0044355f:
    DArrayGetElement(pDVar7,uVar14,&local_10);
    sVar4 = (short)local_8;
    if (local_10 == sVar4) {
      local_e = local_e + local_13a;
      Library::DKW::TBL::DArrayPut(pDVar7,uVar14,&local_10);
      sVar4 = (short)local_8;
      break;
    }
  }
LAB_00443598:
  if (uVar14 == uVar15) {
LAB_004435c8:
    local_10 = sVar4;
    local_e = local_13a;
    Library::DKW::TBL::DArrayPut(local_30,uVar14,&local_10);
  }
  goto cf_common_join_004435CD;
}

