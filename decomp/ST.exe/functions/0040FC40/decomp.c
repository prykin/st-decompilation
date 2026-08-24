#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2635 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_0040fc40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar18;
  int iVar2_mg3;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  RuntimeRecord_007F4D3C_0014 *pRVar15;
  uint uVar16;
  uint *puVar17;
  int iVar19;
  int local_12c;
  int local_114;
  int *local_108;
  int local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_ac;
  uint local_9c;
  uint local_94;
  int local_8c;
  int local_88;
  int local_84;
  uint local_78;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [8];
  undefined4 *local_24;
  int local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_00790060;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffec8;
  local_50 = 0;
  if (param_6 == 0) {
    if (200 < DAT_007f4d20) {
      return -4;
    }
    if (param_1 < 0) {
      return -4;
    }
    if (DAT_007f4d2c <= param_1) {
      return -4;
    }
    if (param_2 < 0) {
      return -4;
    }
    if (DAT_007f4d30 <= param_2) {
      return -4;
    }
    if (param_3 < 0) {
      return -4;
    }
    if (DAT_007f4d34 <= param_3) {
      return -4;
    }
    g_runtimeRecordCount_007F4D14 = 0;
    local_44[6] = DAT_007f4d20;
  }
  else {
    local_44[6] = param_6;
  }
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_48 = DAT_007f4d30 * DAT_007f4d2c;
  local_44[5] = (int)(0 < DAT_007f4d24);
  local_24 = nullptr;
  if (0 < param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
  }
  uVar14 = *(uint *)(&DAT_007a4b88 + param_5 * 8);
  local_20 = *(int *)(&DAT_007a4b8c + param_5 * 8);
  if ((int)(local_20 * uVar14) < DAT_007f4d20) {
    local_20 = 5;
  }
  iVar10 = local_20 * uVar14;
  iVar2 = local_20 / 2;
  if (4 < iVar2 + param_3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 4 - iVar2;
  }
  if (param_3 - iVar2 < 0) {
    param_3 = iVar2;
  }
  iVar2 = param_3 - iVar2;
  param_1 = param_1 * 4 + 2;
  param_2 = param_2 * 4 + 2;
  local_5c = (int)(uVar14 + ((int)uVar14 >> 0x1f & 7U)) >> 3;
  if (local_5c == 0) {
    local_5c = 1;
  }
  uVar8 = DAT_007f4d28 * 4;
  uVar16 = DAT_007f4d38 * 4;
  iVar7 = (uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f);
  iVar3 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
  if (iVar3 < iVar7) {
    ExceptionList = &local_14;
    local_ac = FUN_006db610(uVar8,iVar7);
    local_ac = local_ac << 2;
    local_8c = (((int)uVar16 < 1) - 1 & 0x80000) - 0x40000;
  }
  else {
    ExceptionList = &local_14;
    local_1c = &stack0xfffffec8;
    local_8c = FUN_006db610(uVar16,iVar3);
    local_8c = local_8c << 2;
    local_ac = (((int)uVar8 < 1) - 1 & 0x80000) - 0x40000;
  }
  iVar11 = -((int)uVar14 / 2) * local_ac;
  iVar7 = -((int)uVar14 / 2) * local_8c;
  iVar3 = DAT_007f4d2c;
  do {
    local_84 = 0;
    if ((local_44[6] < iVar10) && (local_44[5] != 0)) {
      if (local_24 == nullptr) {
        local_1c = &stack0xfffffec8;
        local_24 = (undefined4 *)&stack0xfffffec8;
        local_8 = 0xffffffff;
      }
      puVar17 = local_24;
      for (uVar8 = uVar14 * 5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      for (uVar8 = uVar14 * 5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar17 = 0;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      local_78 = 0;
      iVar3 = DAT_007f4d2c;
      if (0 < local_20) {
        do {
          local_74 = local_78 * uVar14;
          iVar19 = 0;
          if (0 < (int)uVar14) {
            iVar9 = iVar7 + 0x8000;
            iVar4 = iVar11 + 0x8000;
            do {
              local_68 = (iVar4 >> 0x10) + param_1 >> 2;
              local_6c = (iVar9 >> 0x10) + param_2 >> 2;
              if ((((-1 < local_68) && (local_68 < iVar3)) && (-1 < local_6c)) &&
                 ((local_6c < DAT_007f4d30 &&
                  (uVar8 = iVar3 * local_6c + local_68 + (local_78 + iVar2) * local_48 ^ 7,
                  iVar3 = DAT_007f4d2c, (STBitTest(g_bitset_007F4CFC, uVar8)) != 0
                  )))) {
                local_84 = local_84 + 1;
                local_44[local_78 + iVar2] = local_44[local_78 + iVar2] + 1;
                *(undefined1 *)(iVar19 + local_74 + (int)local_24) = 1;
                iVar3 = DAT_007f4d2c;
              }
              iVar4 = iVar4 + local_ac;
              iVar9 = iVar9 + local_8c;
              iVar19 = iVar19 + 1;
            } while (iVar19 < (int)uVar14);
          }
          local_78 = local_78 + 1;
        } while ((int)local_78 < local_20);
      }
    }
    local_104 = local_44[6];
    if (local_84 < iVar10) {
      if (local_84 + local_44[6] < iVar10) {
        if (local_84 < 1) {
          if ((int)uVar14 / 2 < local_44[6]) {
            if ((int)uVar14 < local_44[6]) {
              local_78 = 0;
              if (0 < local_20) {
                do {
                  local_4c = ((int)(local_20 - local_78) / 2 + local_44[6]) /
                             (int)(local_20 - local_78);
                  iVar19 = iVar7 - local_8c;
                  iVar9 = iVar11 - local_ac;
                  if ((local_78 & 1) == 0) {
                    iVar9 = (iVar11 - local_ac) - (STSignedDiv4(local_ac));
                    iVar19 = (iVar7 - local_8c) - (STSignedDiv4(local_8c));
                  }
                  local_64 = (int)((uVar14 + 1) * local_ac) / (local_4c + 1);
                  local_58 = (int)((uVar14 + 1) * local_8c) / (local_4c + 1);
                  local_12c = local_4c;
                  if (0 < local_4c) {
                    do {
                      iVar9 = iVar9 + local_64;
                      iVar19 = iVar19 + local_58;
                      local_68 = (STRoundFixed16(iVar9)) + param_1 >> 2;
                      local_6c = (STRoundFixed16(iVar19)) + param_2 >> 2;
                      g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0000 = local_68
                      ;
                      g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0004 = local_6c
                      ;
                      g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0008 =
                           local_78 + iVar2;
                      g_runtimeRecordCount_007F4D14 = g_runtimeRecordCount_007F4D14 + 1;
                      if (((-1 < local_68) && (local_68 < DAT_007f4d2c)) &&
                         ((-1 < local_6c && (local_6c < DAT_007f4d30)))) {
                        uVar8 = DAT_007f4d2c * local_6c + local_68 + (local_78 + iVar2) * local_48 ^
                                7;
                        STBitSet(g_bitset_007F4CFC, uVar8);
                      }
                      local_12c = local_12c + -1;
                      iVar3 = DAT_007f4d2c;
                    } while (local_12c != 0);
                  }
                  local_44[6] = local_44[6] - local_4c;
                  local_78 = local_78 + 1;
                } while ((int)local_78 < local_20);
              }
            }
            else {
              iVar19 = iVar11 - local_ac;
              local_60 = iVar7 - local_8c;
              local_ac = (int)((uVar14 + 1) * local_ac) / (local_44[6] + 1);
              local_8c = (int)((uVar14 + 1) * local_8c) / (local_44[6] + 1);
              local_94 = 0;
              if (0 < local_44[6]) {
                iVar9 = local_60 + 0x8000;
                iVar19 = iVar19 + 0x8000;
                do {
                  local_78 = *(uint *)(&DAT_007a4bd8 + (local_94 & 7) * 4);
                  iVar19 = iVar19 + local_ac;
                  iVar9 = iVar9 + local_8c;
                  local_68 = (iVar19 >> 0x10) + param_1 >> 2;
                  local_6c = (iVar9 >> 0x10) + param_2 >> 2;
                  g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0000 = local_68;
                  g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0004 = local_6c;
                  g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0008 =
                       param_3 + local_78;
                  g_runtimeRecordCount_007F4D14 = g_runtimeRecordCount_007F4D14 + 1;
                  if ((((-1 < local_68) && (local_68 < DAT_007f4d2c)) && (-1 < local_6c)) &&
                     (local_6c < DAT_007f4d30)) {
                    uVar8 = DAT_007f4d2c * local_6c + local_68 + (local_78 + param_3) * local_48 ^ 7
                    ;
                    STBitSet(g_bitset_007F4CFC, uVar8);
                  }
                  local_94 = local_94 + 1;
                  iVar3 = DAT_007f4d2c;
                } while ((int)local_94 < local_44[6]);
              }
            }
          }
          else {
            iVar19 = iVar11 - local_ac;
            local_60 = iVar7 - local_8c;
            local_ac = (int)((uVar14 + 1) * local_ac) / (local_44[6] + 1);
            local_8c = (int)((uVar14 + 1) * local_8c) / (local_44[6] + 1);
            if (0 < local_44[6]) {
              iVar9 = local_60 + 0x8000;
              iVar19 = iVar19 + 0x8000;
              local_114 = local_44[6];
              do {
                iVar19 = iVar19 + local_ac;
                iVar9 = iVar9 + local_8c;
                local_68 = (iVar19 >> 0x10) + param_1 >> 2;
                local_6c = (iVar9 >> 0x10) + param_2 >> 2;
                g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0000 = local_68;
                g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0004 = local_6c;
                g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0008 = param_3;
                g_runtimeRecordCount_007F4D14 = g_runtimeRecordCount_007F4D14 + 1;
                if (((-1 < local_68) && (local_68 < DAT_007f4d2c)) &&
                   ((-1 < local_6c && (local_6c < DAT_007f4d30)))) {
                  uVar8 = local_48 * param_3 + local_68 + DAT_007f4d2c * local_6c ^ 7;
                  STBitSet(g_bitset_007F4CFC, uVar8);
                }
                local_114 = local_114 + -1;
                iVar3 = DAT_007f4d2c;
              } while (local_114 != 0);
            }
          }
        }
        else {
          local_78 = 0;
          if (0 < local_20) {
            do {
              if (local_44[local_78 + iVar2] < (int)uVar14) {
                FUN_0040f4d0((byte *)(local_78 * uVar14 + (int)local_24),uVar14,local_5c,0);
                iVar3 = DAT_007f4d2c;
              }
              local_78 = local_78 + 1;
            } while ((int)local_78 < local_20);
          }
          if (0 < local_104) {
            do {
              local_88 = 30000;
              uVar8 = 0;
              local_78 = 0;
              if (0 < local_20) {
                local_108 = local_44 + iVar2;
                iVar3 = 30000;
                uVar16 = local_9c;
                do {
                  iVar19 = *local_108;
                  iVar9 = iVar19;
                  local_9c = uVar8;
                  iVar4 = iVar19;
                  if (((iVar3 <= iVar19) &&
                      (iVar9 = iVar3, local_9c = uVar16, iVar4 = local_88, iVar3 == iVar19)) &&
                     (uVar5 = local_20 / 2 - uVar8, uVar12 = (int)uVar5 >> 0x1f,
                     uVar6 = local_20 / 2 - uVar16, uVar13 = (int)uVar6 >> 0x1f, iVar9 = iVar19,
                     local_9c = uVar8, iVar4 = iVar19,
                     (int)((uVar6 ^ uVar13) - uVar13) <= (int)((uVar5 ^ uVar12) - uVar12))) {
                    iVar9 = local_88;
                    local_9c = uVar16;
                    iVar4 = local_88;
                  }
                  local_88 = iVar4;
                  uVar8 = uVar8 + 1;
                  local_108 = local_108 + 1;
                  iVar3 = iVar9;
                  uVar16 = local_9c;
                  local_78 = uVar8;
                } while ((int)uVar8 < local_20);
              }
              iVar3 = local_9c + iVar2;
              local_44[iVar3] = local_44[iVar3] + 1;
              iVar18 = FUN_0040f840((byte *)(local_9c * uVar14 + (int)local_24),uVar14,local_5c,0);
              local_68 = (iVar18 * local_ac + 0x8000 + iVar11 >> 0x10) + param_1 >> 2;
              local_6c = (iVar18 * local_8c + 0x8000 + iVar7 >> 0x10) + param_2 >> 2;
              g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0000 = local_68;
              g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0004 = local_6c;
              g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0008 = iVar3;
              g_runtimeRecordCount_007F4D14 = g_runtimeRecordCount_007F4D14 + 1;
              if ((((-1 < local_68) && (local_68 < DAT_007f4d2c)) && (-1 < local_6c)) &&
                 (local_6c < DAT_007f4d30)) {
                uVar8 = DAT_007f4d2c * local_6c + local_68 + iVar3 * local_48 ^ 7;
                STBitSet(g_bitset_007F4CFC, uVar8);
              }
              local_104 = local_104 + -1;
              iVar3 = DAT_007f4d2c;
            } while (local_104 != 0);
          }
        }
        local_44[6] = 0;
      }
      else {
        local_78 = 0;
        if (0 < local_20) {
          do {
            if (0 < (int)uVar14) {
              local_f8 = iVar7 + 0x8000;
              local_fc = iVar11 + 0x8000;
              local_100 = uVar14;
              do {
                local_68 = (local_fc >> 0x10) + param_1 >> 2;
                local_6c = (local_f8 >> 0x10) + param_2 >> 2;
                if (((local_68 < 0) || (iVar3 <= local_68)) ||
                   ((local_6c < 0 || (DAT_007f4d30 <= local_6c)))) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if ((!bVar1) ||
                   (uVar8 = iVar3 * local_6c + local_68 + (local_78 + iVar2) * local_48 ^ 7,
                   (STBitTest(g_bitset_007F4CFC, uVar8)) == 0)) {
                  g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0000 = local_68;
                  g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0004 = local_6c;
                  g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_0008 =
                       local_78 + iVar2;
                  g_runtimeRecordCount_007F4D14 = g_runtimeRecordCount_007F4D14 + 1;
                  local_44[6] = local_44[6] + -1;
                  if (bVar1) {
                    uVar8 = DAT_007f4d2c * local_6c + local_68 + (local_78 + iVar2) * local_48 ^ 7;
                    STBitSet(g_bitset_007F4CFC, uVar8);
                  }
                }
                local_fc = local_fc + local_ac;
                local_f8 = local_f8 + local_8c;
                local_100 = local_100 - 1;
                iVar3 = DAT_007f4d2c;
              } while (local_100 != 0);
            }
            local_78 = local_78 + 1;
          } while ((int)local_78 < local_20);
        }
      }
    }
    iVar19 = 0;
    if (local_44[6] < 1) {
      iVar2 = local_50;
      if (param_6 != 0) goto cf_common_exit_0041098F;
      local_44[7] = 0;
      pRVar15 = g_runtimeRecords_007F4D3C;
      if (0 < g_runtimeRecordCount_007F4D14) goto LAB_00410872;
      goto LAB_00410987;
    }
    param_1 = param_1 - (DAT_007f4d38 * 4 >> 0x10);
    param_2 = param_2 + ((DAT_007f4d28 << 2) >> 0x10);
    local_44[5] = 1;
  } while (((-1 < param_1) && (param_1 < iVar3)) &&
          ((-1 < param_2 &&
           (((param_2 < DAT_007f4d30 && (-1 < param_3)) && (param_3 < DAT_007f4d34))))));
LAB_004109fd:
  iVar2 = -4;
  goto cf_common_exit_0041098F;
LAB_00410872:
  do {
    local_68 = STObjectAtByteOffset(pRVar15, iVar19).field_0000;
    local_6c = STObjectAtByteOffset(pRVar15, iVar19).field_0004;
    local_78 = STObjectAtByteOffset(pRVar15, iVar19).field_0008;
    if ((((local_68 < 0) || (iVar3 <= local_68)) || (local_6c < 0)) ||
       ((DAT_007f4d30 <= local_6c ||
        (PTR_007f4cf0[local_78 * local_48 + local_68 + iVar3 * local_6c] != 0)))) {
      iVar2_mg3 = FUN_0040f270(&local_68,&local_6c,(int *)&local_78,DAT_007f4d0c >> 2,
                               DAT_007f4d10 >> 2,DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,
                               param_3 >> 2);
      if (iVar2_mg3 != 0) goto LAB_004109fd;
      uVar14 = local_78 * local_48 + local_68 + DAT_007f4d2c * local_6c ^ 7;
      STBitSet(g_bitset_007F4CFC, uVar14);
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar19).field_0000 = local_68;
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar19).field_0004 = local_6c;
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar19).field_0008 = local_78;
      pRVar15 = g_runtimeRecords_007F4D3C;
      iVar3 = DAT_007f4d2c;
    }
    local_44[7] = local_44[7] + 1;
    iVar19 = iVar19 + 0x14;
  } while (local_44[7] < g_runtimeRecordCount_007F4D14);
LAB_00410987:
  FUN_0040eb90();
  iVar2 = local_50;
cf_common_exit_0041098F:
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  if (iVar2 == -4) {
    ExceptionList = local_14;
    return -4;
  }
  RaiseInternalException
            (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",0xa4b);
  ExceptionList = local_14;
  return iVar2;
}

