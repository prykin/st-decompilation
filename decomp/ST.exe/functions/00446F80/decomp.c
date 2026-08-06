#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DistributeGuardBoats
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00446F8D MOVSX ECX,byte ptr [EBP + 0x8] | 0044704C MOVSX
   EAX,byte ptr [EBP + 0x8] */

void __thiscall STAllPlayersC::DistributeGuardBoats(STAllPlayersC *this,char param_1)

{
  int iVar5;
  DArrayTy *pDVar3_mg3;
  int local_EAX_1391;
  DArrayTy *pDVar3_mg4;
  DArrayTy *pDVar3_mg5;
  int local_EAX_2865;
  int iVar4;
  int iVar2;
  DArrayTy *pDVar3;
  uint uVar4;
  dword dVar5;
  uint uVar6;
  DArrayTy *pDVar7;
  uint uVar8;
  undefined4 *puVar9;
  DArrayTy *pDVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_e4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  DArrayTy *local_88;
  DArrayTy *local_84;
  DArrayTy *local_80;
  DArrayTy *local_7c;
  int local_78;
  DArrayTy *local_74;
  DArrayTy *local_70;
  STAllPlayersC *local_6c;
  short local_66;
  DArrayTy *local_64;
  DArrayTy *local_60;
  int local_5c;
  uint local_58;
  ushort local_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  int local_4e;
  DArrayTy *local_48;
  int local_44;
  DArrayTy *local_40;
  uint local_3c;
  short local_38;
  short local_36;
  uint local_34;
  DArrayTy *local_30;
  uint local_2c;
  STFishC *local_28;
  ushort local_24;
  ushort uStack_22;
  DArrayTy *local_1c;
  short local_16;
  DArrayTy *local_14;
  short local_10;
  short local_e;
  DArrayTy *local_c;
  uint local_8;

  iVar2 = (int)param_1;
  local_7c = (DArrayTy *)g_packedRecords_A62x8[iVar2].field1976_0x9f6;
  local_48 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field1978_0x9fe;
  local_60 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field1977_0x9fa;
  local_64 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field1979_0xa02;
  if (local_60 != nullptr) {
    local_e4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_e4;
    local_6c = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_e4.jumpBuffer,0);
    pDVar3 = local_48;
    if (iVar5 == 0) {
      if (local_48 != nullptr) {
        dVar5 = local_48->count;
        local_8 = 0;
        if (0 < (int)dVar5) {
          do {
            DArrayGetElement(pDVar3,local_8,&local_c);
            DArrayDestroy(local_c);
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar5);
        }
        DArrayDestroy(pDVar3);
      }
      local_48 = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
      local_a0 = (int)param_1;
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar2 = local_a0 * 0xa62;
      g_packedRecords_A62x8[local_a0].field1978_0x9fe = local_48;
      pDVar3 = (DArrayTy *)local_60->count;
      local_5c = iVar2;
      local_30 = pDVar3;
      local_1c = pDVar3;
      pDVar7 = local_60;
joined_r0x0044707d:
      if (local_1c != nullptr) {
        local_8 = 0;
        if (0 < (int)pDVar3) {
          do {
            DArrayGetElement(pDVar7,local_8,&local_54);
            if (local_4e != 1) {
              local_4e = 1;
              Library::DKW::TBL::DArrayPut(pDVar7,local_8,&local_54);
              local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
              Library::DKW::TBL::DArrayAppend(local_c,&local_8);
              local_58 = Library::DKW::TBL::DArrayAppend(local_48,&local_c);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_40 = *(DArrayTy **)(CONCAT22(uStack_50,uStack_52) + 0xc);
              local_14 = nullptr;
              if (0 < (int)local_40) goto LAB_00447106;
              goto LAB_004471ad;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)pDVar3);
        }
        goto LAB_004471bd;
      }
LAB_0044738a:
      pDVar3 = local_64;
      if (local_64 != nullptr) {
        dVar5 = local_64->count;
        if ((dVar5 != 0) && (local_8 = 0, 0 < (int)dVar5)) {
          do {
            DArrayGetElement(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              DArrayDestroy(local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar5);
        }
        DArrayDestroy(pDVar3);
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + iVar2) = 0;
      }
      uVar4 = local_48->count;
      local_3c = uVar4;
      pDVar3_mg3 = Library::DKW::TBL::DArrayCreate(nullptr,uVar4,4,1);
      local_8 = 0;
      *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + iVar2) = pDVar3_mg3;
      local_64 = pDVar3_mg3;
      if (0 < (int)uVar4) {
        do {
          local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
          Library::DKW::TBL::DArrayAppend(pDVar3_mg3,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar4);
      }
      local_40 = (DArrayTy *)local_7c->count;
      local_8 = 0;
      if (0 < (int)local_40) {
        do {
          DArrayGetElement(local_7c,local_8,&local_78);
          uVar4 = 0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_30 = *(DArrayTy **)(local_78 + 0xc);
          dVar5 = local_74->count;
          local_1c = (DArrayTy *)local_70->count;
          local_14 = nullptr;
          if (0 < (int)local_1c) {
            do {
              DArrayGetElement(local_70,(uint)local_14,&local_24);
              local_2c = (uStack_22 * dVar5 * 10) / (uint)local_30;
              local_30 = (DArrayTy *)((int)local_30 - (uint)uStack_22);
              if (7 < (int)local_2c) {
                if ((local_2c == 8) || (local_2c == 9)) {
                  local_2c = 10;
                }
                local_2c = (int)local_2c / 10;
                dVar5 = dVar5 - local_2c;
                DArrayGetElement(local_64,(uint)local_24,&local_c);
                uVar8 = uVar4;
                if ((int)uVar4 < (int)(uVar4 + local_2c)) {
                  do {
                    local_EAX_1391 = DArrayGetElement(local_74,uVar8,&local_34);
                    if (local_EAX_1391 == -4) break;
                    Library::DKW::TBL::DArrayAppend(local_c,&local_34);
                    uVar8 = uVar8 + 1;
                  } while ((int)uVar8 < (int)(uVar4 + local_2c));
                }
                uVar4 = uVar4 + local_2c;
              }
              local_14 = (DArrayTy *)((int)&local_14->flags + 1);
            } while ((int)local_14 < (int)local_1c);
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_40);
      }
      uVar4 = local_3c;
      pDVar3_mg4 = Library::DKW::TBL::DArrayCreate(nullptr,local_3c,4,1);
      *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1980_0xa06 + local_5c) = pDVar3_mg4;
      local_8 = 0;
      local_40 = pDVar3_mg4;
      if (0 < (int)uVar4) {
        do {
          local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,0x18,1);
          Library::DKW::TBL::DArrayAppend(pDVar3_mg4,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar4);
      }
      local_8 = 0;
      if (0 < (int)uVar4) {
        do {
          DArrayGetElement(local_64,local_8,&local_c);
          if (local_c->count != 0) {
            DArrayGetElement(local_48,local_8,&local_c);
            DArrayGetElement(local_c,0,&local_34);
            DArrayGetElement(local_60,local_34 & 0xffff,&local_54);
            local_28 = (STFishC *)GetObjPtr(local_6c,param_1,local_54,CASE_1);
            if ((STGameObjC *)local_28 != nullptr) {
              STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
              DArrayGetElement(local_40,local_8,&local_c);
              pDVar3_mg5 = (DArrayTy *)
                           thunk_FUN_0043f7b0(param_1,nullptr,(uint *)(int)local_e,(int)local_10,
                                              (int)local_16,(int *)0x7,7,4,0);
              local_30 = pDVar3_mg5;
              if (pDVar3_mg5 != nullptr) {
                pDVar3 = (DArrayTy *)pDVar3_mg5->count;
                uVar4 = 0;
                local_1c = pDVar3;
                local_14 = pDVar3;
                if (0 < (int)pDVar3) {
                  do {
                    DArrayGetElement(pDVar3_mg5,uVar4,&local_28);
                    iVar2 = (*local_28->vtable->vfunc_F8)();
                    if (((iVar2 == 0) ||
                        (iVar2 = local_28->vfunc_F0(), iVar2 == 0)) ||
                       (iVar2 = (*local_28->vtable->vfunc_F4)(local_a0), iVar2 == 0)) {
                      DArrayRemoveAt(pDVar3_mg5,uVar4);
                      uVar4 = uVar4 - 1;
                      local_14 = (DArrayTy *)((int)&local_14[-1].data + 3);
                      pDVar3 = (DArrayTy *)((int)&pDVar3[-1].data + 3);
                    }
                    uVar4 = uVar4 + 1;
                  } while ((int)uVar4 < (int)local_14);
                }
                local_1c = pDVar3;
                pDVar3 = local_14;
                if (pDVar3_mg5->count != 0) {
                  pDVar3_mg5 = Library::DKW::TBL::DArrayCreate(nullptr,(uint)local_14,4,1);
                  Library::DKW::TBL::DArrayPut
                            (pDVar3_mg5,(uint)((int)&pDVar3[-1].data + 3),&local_44);
                  puVar9 = pDVar3_mg5->data;
                  for (; pDVar10 = local_1c, pDVar7 = local_14, pDVar3 != nullptr;
                      pDVar3 = (DArrayTy *)((int)&pDVar3[-1].data + 3)) {
                    *puVar9 = 0;
                    puVar9 = puVar9 + 1;
                  }
                  while (local_1c = pDVar10, local_14 = pDVar7, local_1c != nullptr) {
                    uVar4 = 0;
                    if (0 < (int)pDVar7) {
                      do {
                        DArrayGetElement(pDVar3_mg5,uVar4,&local_44);
                        if (local_44 != 1) {
                          local_44 = 1;
                          Library::DKW::TBL::DArrayPut(pDVar3_mg5,uVar4,&local_44);
                          DArrayGetElement(local_30,uVar4,&local_28);
                          STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
                          local_9c = (uint)local_e;
                          local_98 = (int)local_10;
                          local_94 = (int)local_16;
                          local_90 = 1;
                          local_8c = *(int *)&local_28->field_0x219;
                          local_88 = nullptr;
                          local_58 = Library::DKW::TBL::DArrayAppend(local_c,&local_9c);
                          local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
                          break;
                        }
                        uVar4 = uVar4 + 1;
                      } while ((int)uVar4 < (int)pDVar7);
                    }
                    if (local_1c == nullptr) break;
                    uVar4 = uVar4 + 1;
                    pDVar10 = local_1c;
                    pDVar7 = local_14;
                    if ((int)uVar4 < (int)local_14) {
                      do {
                        DArrayGetElement(pDVar3_mg5,uVar4,&local_44);
                        if (local_44 != 1) {
                          DArrayGetElement(local_30,uVar4,&local_28);
                          STFishC::sub_004162B0(local_28,&local_38,&local_36,&local_66);
                          uVar8 = (int)local_38 - (int)local_e >> 0x1f;
                          if (((int)(((int)local_38 - (int)local_e ^ uVar8) - uVar8) < 3) &&
                             (uVar8 = (int)local_36 - (int)local_10 >> 0x1f,
                             (int)(((int)local_36 - (int)local_10 ^ uVar8) - uVar8) < 3)) {
                            local_44 = 1;
                            Library::DKW::TBL::DArrayPut(pDVar3_mg5,uVar4,&local_44);
                            local_90 = local_90 + 1;
                            local_8c = local_8c + *(int *)&local_28->field_0x219;
                            Library::DKW::TBL::DArrayPut(local_c,local_58,&local_9c);
                            pDVar10 = (DArrayTy *)((int)&pDVar10[-1].data + 3);
                          }
                        }
                        uVar4 = uVar4 + 1;
                        pDVar7 = local_14;
                      } while ((int)uVar4 < (int)local_14);
                    }
                  }
                  DArrayDestroy(local_30);
                }
                DArrayDestroy(pDVar3_mg5);
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      local_8 = 0;
      if (0 < (int)local_3c) {
        do {
          DArrayGetElement(local_64,local_8,&local_84);
          local_30 = (DArrayTy *)local_84->count;
          if (local_30 != nullptr) {
            DArrayGetElement(local_40,local_8,&local_c);
            local_1c = (DArrayTy *)local_c->count;
            if (local_1c == nullptr) {
              DArrayGetElement(local_48,local_8,&local_80);
              DArrayGetElement(local_80,0,&local_34);
              DArrayGetElement(local_60,local_34 & 0xffff,&local_54);
              local_28 = (STFishC *)GetObjPtr(local_6c,param_1,local_54,CASE_1);
              if ((STGameObjC *)local_28 != nullptr) {
                STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
                PutOnPlaceGuardBoats
                          (local_6c,_param_1,(int)local_e,(int)local_10,local_16,(int)local_e,
                           (int)local_10,(int)local_16,local_84);
              }
            }
            else {
              uVar4 = 0;
              uVar8 = 0;
              if (0 < (int)local_1c) {
                do {
                  DArrayGetElement(local_c,uVar8,&local_9c);
                  uVar4 = uVar4 + local_8c;
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < (int)local_1c);
              }
              DArrayGetElement(local_48,local_8,&local_80);
              DArrayGetElement(local_80,0,&local_34);
              DArrayGetElement(local_60,local_34 & 0xffff,&local_54);
              local_28 = (STFishC *)GetObjPtr(local_6c,param_1,local_54,CASE_1);
              if ((STGameObjC *)local_28 != nullptr) {
                STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
                uVar8 = 0;
                local_14 = nullptr;
                if (0 < (int)local_1c) {
                  do {
                    if (uVar4 != 0) {
                      DArrayGetElement(local_c,(uint)local_14,&local_9c);
                      local_2c = (uint)(local_8c * (int)local_30 * 10) / uVar4;
                      uVar4 = uVar4 - local_8c;
                      if (7 < (int)local_2c) {
                        if ((local_2c == 8) || (local_2c == 9)) {
                          local_2c = 10;
                        }
                        local_2c = (int)local_2c / 10;
                        local_30 = (DArrayTy *)((int)local_30 - local_2c);
                        if (local_88 == nullptr) {
                          local_88 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                        }
                        uVar6 = uVar8;
                        if ((int)uVar8 < (int)(uVar8 + local_2c)) {
                          do {
                            local_EAX_2865 = DArrayGetElement(local_84,uVar6,&local_34);
                            if (local_EAX_2865 == -4) break;
                            Library::DKW::TBL::DArrayAppend(local_88,&local_34);
                            uVar6 = uVar6 + 1;
                          } while ((int)uVar6 < (int)(uVar8 + local_2c));
                        }
                        uVar8 = uVar8 + local_2c;
                        if ((local_88 != nullptr) && (local_88->count != 0)) {
                          PutOnPlaceGuardBoats
                                    (local_6c,_param_1,(int)local_e,(int)local_10,local_16,local_9c,
                                     local_98,local_94,local_88);
                          DArrayDestroy(local_88);
                          local_88 = nullptr;
                        }
                      }
                    }
                    local_14 = (DArrayTy *)((int)&local_14->flags + 1);
                  } while ((int)local_14 < (int)local_1c);
                }
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      pDVar3 = local_7c;
      *(uint *)((int)&g_packedRecords_A62x8[0].field1981_0xa0a + local_5c) =
           g_playSystem_00802A38->field_00E4;
      if (local_7c != nullptr) {
        dVar5 = local_7c->count;
        local_8 = 0;
        if (0 < (int)dVar5) {
          do {
            DArrayGetElement(pDVar3,local_8,&local_78);
            if (local_70 != nullptr) {
              DArrayDestroy(local_70);
              local_70 = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
              Library::DKW::TBL::DArrayPut(pDVar3,local_8,&local_78);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar5);
        }
      }
      pDVar3 = local_60;
      if (local_60 != nullptr) {
        dVar5 = local_60->count;
        local_8 = 0;
        if (0 < (int)dVar5) {
          do {
            DArrayGetElement(pDVar3,local_8,&local_54);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((DArrayTy *)CONCAT22(uStack_50,uStack_52) != nullptr) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              DArrayDestroy((DArrayTy *)CONCAT22(uStack_50,uStack_52));
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar5);
        }
        DArrayDestroy(pDVar3);
        local_60 = nullptr;
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1977_0x9fa + local_5c) = 0;
      }
      uVar4 = local_3c;
      pDVar3 = local_48;
      if (local_48 != nullptr) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            DArrayGetElement(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              DArrayDestroy(local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar4);
        }
        DArrayDestroy(pDVar3);
        local_48 = nullptr;
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1978_0x9fe + local_5c) = 0;
      }
      uVar4 = local_3c;
      pDVar3 = local_64;
      if (local_64 != nullptr) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            DArrayGetElement(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              DArrayDestroy(local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar4);
        }
        DArrayDestroy(pDVar3);
        local_64 = nullptr;
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + local_5c) = 0;
      }
      if (local_40 != nullptr) {
        local_8 = 0;
        pDVar3 = local_40;
        if (0 < (int)local_3c) {
          do {
            DArrayGetElement(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              dVar5 = local_c->count;
              if ((dVar5 != 0) && (uVar4 = 0, 0 < (int)dVar5)) {
                do {
                  DArrayGetElement(local_c,uVar4,&local_9c);
                  if (local_88 != nullptr) {
                    DArrayDestroy(local_88);
                  }
                  uVar4 = uVar4 + 1;
                } while ((int)uVar4 < (int)dVar5);
              }
              DArrayDestroy(local_c);
              pDVar3 = local_40;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)local_3c);
        }
        DArrayDestroy(pDVar3);
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1980_0xa06 + local_5c) = 0;
      }
      g_currentExceptionFrame = local_e4.previous;
      return;
    }
    g_currentExceptionFrame = local_e4.previous;
    if (iVar5 != -0x5001fff7) {
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2b90,0,0,"%s",
                                 "STAllPlayersC::DistributeGuardBoats");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2b91);
    }
  }
  return;
LAB_00447106:
  do {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    DArrayGetElement((DArrayTy *)CONCAT22(uStack_50,uStack_52),(uint)local_14,&local_2c);
    DArrayGetElement(local_7c,local_2c,&local_78);
    uVar8 = local_58;
    uVar4 = local_70->count;
    if (uVar4 == 0) {
      local_24 = (ushort)local_58;
LAB_00447196:
      uStack_22 = 1;
      Library::DKW::TBL::DArrayAppend(local_70,&local_24);
    }
    else {
      uVar6 = 0;
      if (0 < (int)uVar4) {
        do {
          DArrayGetElement(local_70,uVar6,&local_24);
          if (local_24 == uVar8) {
            uStack_22 = uStack_22 + 1;
            Library::DKW::TBL::DArrayPut(local_70,uVar6,&local_24);
            break;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar4);
      }
      if (uVar6 == uVar4) {
        local_24 = (ushort)local_58;
        goto LAB_00447196;
      }
    }
    local_14 = (DArrayTy *)((int)&local_14->flags + 1);
  } while ((int)local_14 < (int)local_40);
LAB_004471ad:
  local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
  iVar2 = local_5c;
  pDVar7 = local_60;
  pDVar3 = local_30;
LAB_004471bd:
  if (local_1c == nullptr) goto LAB_0044738a;
  local_28 = (STFishC *)GetObjPtr(local_6c,param_1,local_54,CASE_1);
  if ((STGameObjC *)local_28 != nullptr) {
    STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
    local_8 = local_8 + 1;
    if ((int)local_8 < (int)pDVar3) {
      do {
        DArrayGetElement(pDVar7,local_8,&local_54);
        if ((((local_4e != 1) &&
             (local_28 = (STFishC *)GetObjPtr(local_6c,param_1,local_54,CASE_1),
             (STGameObjC *)local_28 != nullptr)) &&
            (STFishC::sub_004162B0(local_28,&local_38,&local_36,&local_66),
            uVar4 = (int)local_38 - (int)local_e >> 0x1f,
            (int)(((int)local_38 - (int)local_e ^ uVar4) - uVar4) < 3)) &&
           (uVar4 = (int)local_36 - (int)local_10 >> 0x1f,
           (int)(((int)local_36 - (int)local_10 ^ uVar4) - uVar4) < 3)) {
          local_4e = 1;
          Library::DKW::TBL::DArrayPut(pDVar7,local_8,&local_54);
          Library::DKW::TBL::DArrayAppend(local_c,&local_8);
          local_14 = nullptr;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_40 = *(DArrayTy **)(CONCAT22(uStack_50,uStack_52) + 0xc);
          if (0 < (int)local_40) {
            do {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              DArrayGetElement((DArrayTy *)CONCAT22(uStack_50,uStack_52),(uint)local_14,&local_2c);
              DArrayGetElement(local_7c,local_2c,&local_78);
              uVar8 = local_58;
              uVar4 = local_70->count;
              if (uVar4 == 0) {
                local_24 = (ushort)local_58;
LAB_00447348:
                uStack_22 = 1;
                Library::DKW::TBL::DArrayAppend(local_70,&local_24);
              }
              else {
                uVar6 = 0;
                if (0 < (int)uVar4) {
                  do {
                    DArrayGetElement(local_70,uVar6,&local_24);
                    if (local_24 == uVar8) {
                      uStack_22 = uStack_22 + 1;
                      Library::DKW::TBL::DArrayPut(local_70,uVar6,&local_24);
                      break;
                    }
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < (int)uVar4);
                }
                if (uVar6 == uVar4) {
                  local_24 = (ushort)local_58;
                  goto LAB_00447348;
                }
              }
              local_14 = (DArrayTy *)((int)&local_14->flags + 1);
            } while ((int)local_14 < (int)local_40);
          }
          local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
          iVar2 = local_5c;
          pDVar7 = local_60;
          pDVar3 = local_30;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < (int)pDVar3);
    }
  }
  goto joined_r0x0044707d;
}

