#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PutOnPlaceGuardBoats

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00446F80 -> 00448120 @ 004478E3; MOVSX at 004478C9 establishes signed source width 2 |
   00446F80 -> 00448120 @ 00447B1A; MOVSX at 00447B03 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00446F80 -> 00448120 @ 004478E3; MOVSX at 004478C9 establishes signed source width 2 */

void __thiscall
STAllPlayersC::PutOnPlaceGuardBoats
          (STAllPlayersC *this,uint param_1,uint param_2,int param_3,short param_4,uint param_5,
          int param_6,int param_7,DArrayTy *param_8)

{
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar6;
  int iVar5;
  int local_EAX_1180;
  int local_EAX_1553;
  int local_EAX_1893;
  int iVar8;
  uint uVar7;
  int local_EAX_2921;
  STBoatC *pSVar8;
  int iVar9;
  int local_EAX_3288;
  int local_EAX_3660;
  int local_EAX_4031;
  int local_EAX_4414;
  int local_EAX_4754;
  short sVar10;
  short sVar11;
  dword dVar12;
  undefined2 *puVar13;
  short *psVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  char objPtr;
  int local_104 [8];
  int local_e4 [7];
  undefined4 local_c8;
  short sStack_c6;
  int local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  short local_6a [33];
  STAllPlayersC *local_28;
  STBoatC *local_24;
  uint local_20_mg0;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;

  uVar15 = param_5;
  local_c0 = 0;
  local_be = 2;
  local_bc = 0;
  local_ba = 0xffff;
  local_b8 = 2;
  local_b6 = 0;
  local_b4 = 1;
  local_b2 = 2;
  local_b0 = 0;
  local_ae = 0;
  local_ac = 3;
  local_aa = 0;
  local_a8 = 0;
  local_a6 = 1;
  local_a4 = 0;
  local_a2 = 0xffff;
  local_a0 = 3;
  local_9e = 0;
  local_9c = 1;
  local_9a = 3;
  local_98 = 0;
  local_96 = 0xffff;
  local_94 = 1;
  local_92 = 0;
  local_90 = 1;
  local_8e = 1;
  local_8c = 0;
  local_8a = 0;
  local_88 = 4;
  local_86 = 0;
  local_84 = 0xffff;
  local_82 = 4;
  local_80 = 0;
  local_7e = 1;
  local_7c = 4;
  local_7a = 0;
  local_78 = 0;
  local_76 = 0;
  local_74 = 0;
  local_72 = 0xffff;
  local_70 = 0;
  local_6e = 0;
  local_6c = 1;
  local_6a[0] = 0;
  local_6a[1] = 0;
  local_6a[3] = 0;
  local_6a[4] = 2;
  local_6a[5] = 0;
  local_6a[6] = 0;
  local_6a[7] = 2;
  local_6a[8] = 1;
  local_6a[9] = 0;
  local_6a[10] = 3;
  local_6a[0xb] = 0;
  local_6a[0xc] = 0;
  local_6a[0xd] = 1;
  local_6a[0xe] = 1;
  local_6a[0xf] = 0;
  local_6a[0x10] = 3;
  local_6a[0x11] = 1;
  local_6a[0x12] = 0;
  local_6a[0x13] = 1;
  local_6a[0x14] = 0;
  local_6a[0x15] = 0;
  local_6a[0x16] = 4;
  local_6a[0x17] = 0;
  local_6a[0x18] = 0;
  local_6a[0x19] = 0;
  local_6a[0x1a] = 1;
  local_6a[0x1b] = 0;
  local_6a[0x1c] = 4;
  local_6a[0x1d] = 1;
  local_6a[0x1e] = 0;
  local_6a[0x1f] = 0;
  local_6a[0x20] = 0;
  local_e4[0] = 0;
  local_e4[1] = 0xb4;
  local_e4[2] = 0x5a;
  local_e4[3] = 0x10e;
  local_e4[4] = 0x2d;
  local_e4[5] = 0xe1;
  local_e4[6] = 0x87;
  local_c8 = 0x13b;
  if ((param_8 != nullptr) && (dVar12 = param_8->count, dVar12 != 0)) {
    sVar3 = (short)param_2;
    sVar2 = (short)param_3;
    local_28 = this;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((param_2 == param_5) && (param_3 == param_6)) {
      iVar6 = -1;
    }
    else {
      sVar4 = (short)param_6;
      iVar5 = FUN_006acf0d((int)(short)(sVar3 * 0xc9 + 100),(int)(short)(sVar2 * 0xc9 + 100),0,
                           (int)(short)((short)param_5 * 0xc9 + 100),
                           (int)(short)(sVar4 * 0xc9 + 100),0);
      iVar6 = ((short)((sVar4 - sVar2) * 0xc9 + 100) * 1000) / iVar5;
      if (iVar6 < -0x39c) {
        iVar6 = 0x5a;
      }
      else if ((iVar6 < -0x39c) || (-0x180 < iVar6)) {
        if ((iVar6 < -0x17f) || (0x17e < iVar6)) {
          if ((iVar6 < 0x17f) || (0x39b < iVar6)) {
            iVar6 = 0x10e;
          }
          else {
            iVar6 = (((int)uVar15 <= (int)param_2) - 1 & 0x5a) + 0xe1;
          }
        }
        else {
          iVar6 = (((int)uVar15 <= (int)param_2) - 1 & 0xffffff4c) + 0xb4;
        }
      }
      else {
        iVar6 = (((int)uVar15 <= (int)param_2) - 1 & 0xffffffa6) + 0x87;
      }
    }
    local_18 = g_playSystem_00802A38->field_00E4;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT22(sVar2,sVar3);
    local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(param_4));
    objPtr = (char)param_1;
    local_1c = dVar12;
    local_20_mg0 = dVar12;
    if (iVar6 < 0x88) {
      if (iVar6 == 0x87) {
        local_24 = (STBoatC *)((int)(dVar12 - 1) / 10);
        iVar6 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_20_mg0;
            if (9 < (int)local_20_mg0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 10;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              psVar14 = local_6a;
              local_8 = local_1c;
              do {
                psVar14 = psVar14 + 3;
                DArrayGetElement(param_8,local_8,&param_5);
                pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar8 == nullptr) {
                  local_EAX_3288 =
                       ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2d64,0,0,
                                          "%s","STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_135");
                  if (local_EAX_3288 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sVar4 = (short)iVar6;
                if (psVar14[2] == 0) {
                  sVar11 = (sVar3 - sVar4) + -3;
                  sVar4 = ((sVar2 - sVar4) - *psVar14) + -2;
                }
                else {
                  sVar11 = (sVar3 - sVar4) + *psVar14 + -2;
                  sVar4 = (sVar2 - sVar4) + -3;
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(sVar11,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(psVar14[1],sVar4);
                iVar9 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                if (iVar9 == 5) {
                  STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < (int)_param_4);
            }
            iVar6 = iVar6 + 1;
            local_1c = local_1c + 10;
            local_20_mg0 = local_20_mg0 - 10;
          } while (iVar6 <= (int)local_24);
          return;
        }
      }
      else {
        switch(iVar6) {
        case 0:
          local_20_mg0 = (int)(dVar12 - 1) / 0xf;
          local_24 = nullptr;
          if (-1 < (int)local_20_mg0) {
            local_8 = 0;
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = local_1c;
              if (0xe < (int)local_1c) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 0xf;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              if (0 < (int)_param_4) {
                puVar13 = &local_be;
                uVar15 = local_8;
                do {
                  DArrayGetElement(param_8,uVar15,&param_5);
                  pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (pSVar8 == nullptr) {
                    local_EAX_1893 =
                         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2d83,0,0,
                                            "%s",
                                            "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_0");
                    if (local_EAX_1893 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22((short)local_24 + 3 + sVar3,(undefined2)local_10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(*puVar13,puVar13[-1] + sVar2);
                  iVar6 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                  if (iVar6 == 5) {
                    STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                  }
                  else {
                    STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  uVar15 = uVar15 + 1;
                  puVar13 = puVar13 + 3;
                } while (param_6 < (int)_param_4);
              }
              local_24 = (STBoatC *)((int)local_24 + 1);
              local_8 = local_8 + 0xf;
              local_1c = local_1c - 0xf;
            } while ((int)local_24 <= (int)local_20_mg0);
            return;
          }
          break;
        case 0x2d:
          local_24 = (STBoatC *)((int)(dVar12 - 1) / 10);
          iVar6 = 0;
          if (-1 < (int)local_24) {
            local_1c = 0;
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = local_20_mg0;
              if (9 < (int)local_20_mg0) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 10;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              if (0 < (int)_param_4) {
                psVar14 = local_6a;
                local_8 = local_1c;
                do {
                  psVar14 = psVar14 + 3;
                  DArrayGetElement(param_8,local_8,&param_5);
                  pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (pSVar8 == nullptr) {
                    local_EAX_1553 =
                         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2d45,0,0,
                                            "%s",
                                            "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_45");
                    if (local_EAX_1553 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  sVar4 = (short)iVar6;
                  if (psVar14[2] == 0) {
                    sVar11 = *psVar14 + sVar4 + 2;
                    sVar4 = (sVar2 - sVar4) + -3;
                  }
                  else {
                    sVar11 = sVar4 + 3;
                    sVar4 = (*psVar14 - sVar4) + -2 + sVar2;
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22(sVar11 + sVar3,(undefined2)local_10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(psVar14[1],sVar4);
                  iVar9 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                  if (iVar9 == 5) {
                    STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                  }
                  else {
                    STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  local_8 = local_8 + 1;
                } while (param_6 < (int)_param_4);
              }
              iVar6 = iVar6 + 1;
              local_1c = local_1c + 10;
              local_20_mg0 = local_20_mg0 - 10;
            } while (iVar6 <= (int)local_24);
            return;
          }
          break;
        case 0x5a:
          local_20_mg0 = (int)(dVar12 - 1) / 0xf;
          local_24 = nullptr;
          if (-1 < (int)local_20_mg0) {
            local_1c = 0;
            local_8 = dVar12;
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = local_8;
              if (0xe < (int)local_8) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 0xf;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              if (0 < (int)_param_4) {
                puVar13 = &local_be;
                uVar15 = local_1c;
                do {
                  DArrayGetElement(param_8,uVar15,&param_5);
                  pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (pSVar8 == nullptr) {
                    local_EAX_1180 =
                         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2d2c,0,0,
                                            "%s",
                                            "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_90");
                    if (local_EAX_1180 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22(puVar13[-1] + sVar3,(undefined2)local_10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(*puVar13,(sVar2 - (short)local_24) + -3);
                  iVar6 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                  if (iVar6 == 5) {
                    STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                  }
                  else {
                    STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  uVar15 = uVar15 + 1;
                  puVar13 = puVar13 + 3;
                } while (param_6 < (int)_param_4);
              }
              local_24 = (STBoatC *)((int)local_24 + 1);
              local_1c = local_1c + 0xf;
              local_8 = local_8 - 0xf;
            } while ((int)local_24 <= (int)local_20_mg0);
            return;
          }
          break;
        case -1:
          local_c4 = (int)(dVar12 - 1) / 100;
          iVar6 = 0;
          local_20_mg0 = 0xffffffff;
          if (-1 < local_c4) {
            local_8 = 0;
            do {
              piVar16 = local_104;
              local_1c = dVar12;
              for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                *piVar16 = 0;
                piVar16 = piVar16 + 1;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = dVar12;
              if (99 < (int)dVar12) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 100;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              uVar15 = local_8;
              if (0 < (int)_param_4) {
                do {
                  DArrayGetElement(param_8,uVar15,&param_5);
                  local_24 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (local_24 == nullptr) {
                    local_EAX_2921 =
                         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2e0b,0,0,
                                            "%s",
                                            "STAllPlayersC::PutOnPlaceGuardBoats NULL dir==-1");
                    if (local_EAX_2921 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  do {
                    while( true ) {
                      local_20_mg0 = local_20_mg0 + 1 & 0x80000007;
                      if ((int)local_20_mg0 < 0) {
                        local_20_mg0 = (local_20_mg0 - 1 | 0xfffffff8) + 1;
                      }
                      iVar9 = local_e4[local_20_mg0];
                      if (iVar9 % 0x5a != 0) break;
                      if (local_104[local_20_mg0] != 0xf) goto LAB_00448970;
                    }
                  } while (local_104[local_20_mg0] == 10);
LAB_00448970:
                  iVar17 = local_104[local_20_mg0] + 1;
                  local_104[local_20_mg0] = iVar17;
                  sVar4 = (short)iVar6;
                  if (iVar9 < 0xb5) {
                    if (iVar9 == 0xb4) {
                      sVar11 = (sVar3 - sVar4) + -3;
                      sVar4 = (&sStack_c6)[iVar17 * 3] + sVar2;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00448aaf:
                      local_10 = CONCAT22(sVar11,(undefined2)local_10);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_c = CONCAT22(*(undefined2 *)((int)&local_c4 + iVar17 * 6),sVar4);
                    }
                    else {
                      switch(iVar9) {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      case 0:
                        local_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)local_10);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = CONCAT22(*(undefined2 *)((int)&local_c4 + iVar17 * 6),
                                           (&sStack_c6)[iVar17 * 3] + sVar2);
                        break;
                      default:
switchD_004489a9_caseD_1:
                        iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2e63,0
                                                   ,0,"%s",
                                                   "STAllPlayersC::PutOnPlaceGuardBoats incorrect direction");
                        if (iVar8 != 0) {
                          STDebugBreak(); /* noreturn in standalone pseudocode */
                        }
                        break;
                      case 0x2d:
                        if (local_6a[iVar17 * 3 + 2] == 0) {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_10 = CONCAT22(local_6a[iVar17 * 3] + sVar4 + 2 + sVar3,
                                              (undefined2)local_10);
                          sVar4 = (sVar2 - sVar4) + -3;
                          goto LAB_00448bc0;
                        }
                        sVar11 = (sVar2 - sVar4) + -2 + local_6a[iVar17 * 3];
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00448b30:
                        local_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)local_10);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = CONCAT22(local_6a[iVar17 * 3 + 1],sVar11);
                        break;
                      case 0x5a:
                        sVar11 = (&sStack_c6)[iVar17 * 3] + sVar3;
                        sVar4 = (sVar2 - sVar4) + -3;
                        goto LAB_00448aaf;
                      case 0x87:
                        if (local_6a[iVar17 * 3 + 2] != 0) {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_10 = CONCAT22(-sVar4 + -2 + sVar3 + local_6a[iVar17 * 3],
                                              (undefined2)local_10);
                          sVar4 = -sVar4 + -3 + sVar2;
                          goto LAB_00448bc0;
                        }
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22(-sVar4 + -3 + sVar3,(undefined2)local_10);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = CONCAT22(local_6a[iVar17 * 3 + 1],
                                           ((-sVar4 + sVar2) - local_6a[iVar17 * 3]) + -2);
                      }
                    }
                  }
                  else {
                    if (iVar9 == 0xe1) {
                      if (local_6a[iVar17 * 3 + 2] == 0) {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22(((sVar3 - sVar4) - local_6a[iVar17 * 3]) + -2,
                                            (undefined2)local_10);
                        sVar4 = sVar4 + 3 + sVar2;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22((sVar3 - sVar4) + -3,(undefined2)local_10);
                        sVar4 = ((sVar4 + sVar2) - local_6a[iVar17 * 3]) + 2;
                      }
LAB_00448bc0:
                      sVar11 = local_6a[iVar17 * 3 + 1];
                    }
                    else {
                      if (iVar9 != 0x10e) {
                        if (iVar9 != 0x13b) goto switchD_004489a9_caseD_1;
                        if (local_6a[iVar17 * 3 + 2] == 0) {
                          sVar11 = local_6a[iVar17 * 3] + sVar4 + 2 + sVar2;
                          goto LAB_00448b30;
                        }
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22(((sVar4 + sVar3) - local_6a[iVar17 * 3]) + 2,
                                            (undefined2)local_10);
                        sVar4 = sVar4 + 3 + sVar2;
                        goto LAB_00448bc0;
                      }
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_10 = CONCAT22((&sStack_c6)[iVar17 * 3] + sVar3,(undefined2)local_10);
                      sVar4 = sVar4 + 3 + sVar2;
                      sVar11 = *(short *)((int)&local_c4 + iVar17 * 6);
                    }
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_c = CONCAT22(sVar11,sVar4);
                  }
                  pSVar8 = local_24;
                  iVar9 = thunk_FUN_0045ff10((STGameObjC *)local_24);
                  if (((iVar9 == 5) && (uVar7 = STBoatC::CheckPBoxCmd(pSVar8,CASE_3), uVar7 == 1))
                     || (iVar9 = thunk_FUN_0045ff10((STGameObjC *)pSVar8), iVar9 != 5)) {
                    STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                  }
                  else {
                    STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  uVar15 = uVar15 + 1;
                } while (param_6 < (int)_param_4);
              }
              local_8 = local_8 + 100;
              iVar6 = iVar6 + 1;
              dVar12 = local_1c - 100;
              if (local_c4 < iVar6) {
                return;
              }
            } while( true );
          }
        }
      }
    }
    else {
      switch(iVar6) {
      case 0xb4:
        local_20_mg0 = (int)(dVar12 - 1) / 0xf;
        local_24 = nullptr;
        if (-1 < (int)local_20_mg0) {
          local_8 = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_1c;
            if (0xe < (int)local_1c) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0xf;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              puVar13 = &local_be;
              uVar15 = local_8;
              do {
                DArrayGetElement(param_8,uVar15,&param_5);
                pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar8 == nullptr) {
                  local_EAX_3660 =
                       ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2d9b,0,0,
                                          "%s","STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_180");
                  if (local_EAX_3660 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22((sVar3 - (short)local_24) + -3,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(*puVar13,puVar13[-1] + sVar2);
                iVar6 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                if (iVar6 == 5) {
                  STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                uVar15 = uVar15 + 1;
                puVar13 = puVar13 + 3;
              } while (param_6 < (int)_param_4);
            }
            local_24 = (STBoatC *)((int)local_24 + 1);
            local_8 = local_8 + 0xf;
            local_1c = local_1c - 0xf;
          } while ((int)local_24 <= (int)local_20_mg0);
          return;
        }
        break;
      case 0xe1:
        local_24 = (STBoatC *)((int)(dVar12 - 1) / 0x14);
        iVar6 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_20_mg0;
            if (0x13 < (int)local_20_mg0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0x14;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              psVar14 = local_6a;
              local_8 = local_1c;
              do {
                psVar14 = psVar14 + 3;
                DArrayGetElement(param_8,local_8,&param_5);
                pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar8 == nullptr) {
                  local_EAX_4414 =
                       ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2dd2,0,0,
                                          "%s","STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_225");
                  if (local_EAX_4414 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sVar4 = (short)iVar6;
                if (psVar14[2] == 0) {
                  sVar10 = sVar4 + 3 + sVar2;
                  local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(sVar10));
                  sVar11 = ((sVar3 - sVar4) - *psVar14) + -2;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(psVar14[1],sVar10);
                }
                else {
                  sVar11 = (sVar3 - sVar4) + -3;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(psVar14[1],(sVar4 - *psVar14) + 2 + sVar2);
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(sVar11,(undefined2)local_10);
                iVar9 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                if (iVar9 == 5) {
                  STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < (int)_param_4);
            }
            iVar6 = iVar6 + 1;
            local_1c = local_1c + 0x14;
            local_20_mg0 = local_20_mg0 - 0x14;
          } while (iVar6 <= (int)local_24);
          return;
        }
        break;
      case 0x10e:
        local_20_mg0 = (int)(dVar12 - 1) / 0xf;
        local_24 = nullptr;
        if (-1 < (int)local_20_mg0) {
          local_8 = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_1c;
            if (0xe < (int)local_1c) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0xf;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              puVar13 = &local_be;
              uVar15 = local_8;
              do {
                DArrayGetElement(param_8,uVar15,&param_5);
                pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar8 == nullptr) {
                  local_EAX_4754 =
                       ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2df1,0,0,
                                          "%s","STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_270");
                  if (local_EAX_4754 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(puVar13[-1] + sVar3,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(*puVar13,(short)local_24 + 3 + sVar2);
                iVar6 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                if (iVar6 == 5) {
                  STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                uVar15 = uVar15 + 1;
                puVar13 = puVar13 + 3;
              } while (param_6 < (int)_param_4);
            }
            local_24 = (STBoatC *)((int)local_24 + 1);
            local_8 = local_8 + 0xf;
            local_1c = local_1c - 0xf;
          } while ((int)local_24 <= (int)local_20_mg0);
          return;
        }
        break;
      case 0x13b:
        local_24 = (STBoatC *)((int)(dVar12 - 1) / 0x14);
        iVar6 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_20_mg0;
            if (0x13 < (int)local_20_mg0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0x14;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              psVar14 = local_6a;
              local_8 = local_1c;
              do {
                psVar14 = psVar14 + 3;
                DArrayGetElement(param_8,local_8,&param_5);
                pSVar8 = (STBoatC *)GetObjPtr(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar8 == nullptr) {
                  local_EAX_4031 =
                       ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2db3,0,0,
                                          "%s","STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_315");
                  if (local_EAX_4031 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sVar4 = (short)iVar6;
                if (psVar14[2] == 0) {
                  sVar11 = sVar4 + 3;
                  sVar4 = sVar4 + sVar2 + *psVar14 + 2;
                }
                else {
                  sVar11 = (sVar4 - *psVar14) + 2;
                  sVar4 = sVar4 + 3 + sVar2;
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(sVar11 + sVar3,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(psVar14[1],sVar4);
                iVar9 = thunk_FUN_0045ff10((STGameObjC *)pSVar8);
                if (iVar9 == 5) {
                  STBoatC::sub_00490CD0(pSVar8,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar8,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < (int)_param_4);
            }
            iVar6 = iVar6 + 1;
            local_1c = local_1c + 0x14;
            local_20_mg0 = local_20_mg0 - 0x14;
          } while (iVar6 <= (int)local_24);
          return;
        }
      }
    }
  }
  return;
}

