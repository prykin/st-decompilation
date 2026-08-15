#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_00697cf0(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  void **ppvVar3;
  uint local_EAX_231;
  undefined2 *puVar4;
  short *psVar5;
  uint local_EAX_1023;
  uint local_EAX_1070;
  uint local_EAX_1102;
  int iVar6;
  uint uVar4;
  uint uVar8;
  int iVar7;
  uint local_EAX_1988;
  int iVar8;
  uint local_EAX_2126;
  uint local_EAX_2144;
  uint local_EAX_2175;
  uint local_EAX_2197;
  uint local_EAX_2223;
  uint local_EAX_2245;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  AnonShape_00697CF0_36737CA3 *pAVar18;
  undefined4 *puVar19;
  int iVar20;
  bool bVar21;
  uint auStack_10c [8];
  int local_c4;
  undefined1 local_c0 [4];
  uint local_bc;
  int local_b8;
  undefined1 *local_b4;
  int local_ac;
  int local_a8;
  AnonShape_00697CF0_36737CA3 *local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_90;
  uint local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  int local_5c;
  uint local_58;
  int local_50;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d798;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  iVar13 = 0;
  local_6c = 0;
  local_48 = 0;
  local_5c = 0;
  local_ac = 0;
  local_b8 = 0;
  local_68 = 0;
  if (STField<int>(this,0x5853) != 0) {
    iVar7 = *(int *)(STField<int>(this,0x5853) + 0xc);
    local_70 = iVar7;
    auStack_10c[7] = 0x697d61;
    iVar8 = iVar7 * -0x10;
    local_1c = &stack0xffffff14 + iVar8;
    local_28 = &stack0xffffff14 + iVar8;
    local_8 = 0xffffffff;
    local_88 = 0;
    ExceptionList = &local_14;
    ppvVar3 = &local_14;
    puVar17 = &stack0xffffff14 + iVar8;
    if (0 < iVar7) {
      do {
        ppvVar3 = ExceptionList;
        puVar17 = local_1c;
        if (param_1 < 1) break;
        iVar11 = STField<int>(this,0x5853);
        if (local_88 < *(uint *)(iVar11 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pAVar18 = (AnonShape_00697CF0_36737CA3 *)
                    (*(int *)(iVar11 + 8) * local_88 + *(int *)(iVar11 + 0x1c));
        }
        else {
          pAVar18 = nullptr;
        }
        local_a4 = pAVar18;
        if ((*(int *)pAVar18 == 0) && (pAVar18->field_0005 < 1)) {
          if (pAVar18->field_0015 != 0) {
            auStack_10c[iVar7 * -4 + 7] = 0x697ddc;
            local_EAX_231 = Library::MSVCRT::FUN_0072e6c0();
            local_a0 = (int)local_EAX_231 % 6 + 1;
            local_74 = 0;
            local_90 = 0;
            local_94 = 0;
            iVar11 = pAVar18->field_0015;
            uVar9 = *(uint *)(iVar11 + 0xc);
            if (0 < (int)uVar9) {
              do {
                if (local_94 < uVar9) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pbVar14 = (byte *)(*(int *)(iVar11 + 8) * local_94 + *(int *)(iVar11 + 0x1c));
                }
                else {
                  pbVar14 = nullptr;
                }
                if (pbVar14 != nullptr) {
                  local_90 = local_90 + 1;
                  iVar13 = *(int *)(pbVar14 + 2) / STField<int>(this,0x5833);
                  iVar11 = *(int *)(pbVar14 + 2) % STField<int>(this,0x5833);
                  if (local_94 == 0) {
                    local_48 = iVar11;
                    local_5c = iVar13;
                    local_ac = iVar11;
LAB_00697e8c:
                    local_b8 = iVar13;
                  }
                  else {
                    if (iVar11 < local_48) {
                      local_48 = iVar11;
                    }
                    if (iVar13 < local_5c) {
                      local_5c = iVar13;
                    }
                    if (local_ac < iVar11) {
                      local_ac = iVar11;
                    }
                    if (local_b8 < iVar13) goto LAB_00697e8c;
                  }
                  if ((*pbVar14 & 1) != 0) {
                    local_74 = local_74 + 1;
                    auStack_10c[iVar7 * -4 + 7] = local_a0;
                    auStack_10c[iVar7 * -4 + 6] = 1;
                    auStack_10c[iVar7 * -4 + 5] = 0;
                    auStack_10c[iVar7 * -4 + 4] = 1;
                    auStack_10c[iVar7 * -4 + 3] = 0;
                    auStack_10c[iVar7 * -4 + 2] = iVar13;
                    auStack_10c[iVar7 * -4 + 1] = iVar11;
                    auStack_10c[iVar7 * -4] = 0x697eb6;
                    thunk_FUN_006a0c90(auStack_10c[iVar7 * -4 + 1],auStack_10c[iVar7 * -4 + 2],
                                       auStack_10c[iVar7 * -4 + 3],auStack_10c[iVar7 * -4 + 4],
                                       auStack_10c[iVar7 * -4 + 5],auStack_10c[iVar7 * -4 + 6],
                                       auStack_10c[iVar7 * -4 + 7]);
                  }
                }
                local_94 = local_94 + 1;
                iVar11 = local_a4->field_0015;
                uVar9 = *(uint *)(iVar11 + 0xc);
                iVar13 = local_6c;
              } while ((int)local_94 < (int)uVar9);
            }
            if (local_90 != 0) {
              puVar4 = (undefined2 *)(local_28 + iVar13 * 0x10);
              *puVar4 = (undefined2)local_88;
              puVar4[1] = (short)local_90;
              *(int *)(puVar4 + 2) = local_74;
              puVar4[4] = (undefined2)local_48;
              puVar4[5] = (undefined2)local_ac;
              puVar4[6] = (undefined2)local_5c;
              puVar4[7] = (undefined2)local_b8;
              iVar13 = iVar13 + 1;
              local_6c = iVar13;
            }
          }
        }
        else if (0 < *(int *)pAVar18) break;
        local_88 = local_88 + 1;
        ppvVar3 = ExceptionList;
        puVar17 = local_1c;
      } while ((int)local_88 < local_70);
    }
    local_1c = puVar17;
    ExceptionList = ppvVar3;
    puVar17 = &stack0xffffff14 + iVar8;
    if (iVar13 != 0) {
      iVar11 = STField<int>(this,0x5837) * STField<int>(this,0x5833) * 2;
      auStack_10c[iVar7 * -4 + 7] = 0x697f78;
      iVar7 = -(iVar11 + 3U & 0xfffffffc);
      iVar2 = iVar7 + iVar8 + -0xec;
      local_b4 = &stack0xffffff14 + iVar7 + iVar8;
      *(undefined4 *)((int)auStack_10c + iVar7 + iVar8 + 0x1c) = 0x697f8f;
      iVar11 = -(iVar11 + 3U & 0xfffffffc);
      puVar16 = &stack0xffffff14 + iVar11 + iVar2 + 0xec;
      local_1c = &stack0xffffff14 + iVar11 + iVar7 + iVar8;
      local_64 = (undefined4 *)(&stack0xffffff14 + iVar11 + iVar7 + iVar8);
      local_8 = 0xffffffff;
      local_a8 = iVar13 * 2;
      puVar17 = &stack0xffffff14 + iVar11 + iVar7 + iVar8;
      while ((0 < param_2 &&
             (iVar13 = local_6c, puVar17 = &stack0xffffff14 + iVar11 + iVar2 + 0xec, 0 < local_a8)))
      {
        local_a8 = local_a8 + -1;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c) = 3;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x18) = 4;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x14) = 0x10;
        *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x10) = local_6c;
        *(undefined1 **)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0xc) = local_28;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 8) = 0x697fd6;
        local_80 = thunk_FUN_0069f7f0(*(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0xc),
                                      *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x10),
                                      *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x14),
                                      *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x18),
                                      *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c));
        iVar13 = local_6c;
        puVar17 = puVar16;
        if (-1 < local_80) {
          psVar5 = (short *)(local_28 + local_80 * 0x10);
          iVar13 = STField<int>(this,0x5853);
          if ((uint)(int)*psVar5 < *(uint *)(iVar13 + 0xc)) {
            local_a4 = (AnonShape_00697CF0_36737CA3 *)
                       (*(int *)(iVar13 + 8) * (int)*psVar5 + *(int *)(iVar13 + 0x1c));
          }
          else {
            local_a4 = nullptr;
          }
          local_38 = ((int)psVar5[5] - (int)psVar5[4]) + 1;
          local_44 = ((int)psVar5[7] - (int)psVar5[6]) + 1;
          puVar19 = local_64;
          for (uVar9 = (local_44 * local_38 & 0x7fffffffU) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar19 = 0xffffffff;
            puVar19 = puVar19 + 1;
          }
          for (uVar9 = local_44 * local_38 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar19 = 0xff;
            puVar19 = (undefined4 *)((int)puVar19 + 1);
          }
          local_94 = 0;
          iVar13 = local_a4->field_0015;
          if (0 < *(int *)(iVar13 + 0xc)) {
            bVar21 = *(int *)(iVar13 + 0xc) != 0;
            do {
              if (bVar21) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pbVar14 = (byte *)(*(int *)(iVar13 + 8) * local_94 + *(int *)(iVar13 + 0x1c));
              }
              else {
                pbVar14 = nullptr;
              }
              if ((*pbVar14 & 1) != 0) {
                *(undefined2 *)
                 /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                 ((int)local_64 +
                 (((*(int *)(pbVar14 + 2) / STField<int>(this,0x5833) -
                   (int)*(short *)(local_28 + local_80 * 0x10 + 0xc)) * local_38 -
                  (int)*(short *)(local_28 + local_80 * 0x10 + 8)) +
                 *(int *)(pbVar14 + 2) % STField<int>(this,0x5833)) * 2) = 0;
              }
              local_94 = local_94 + 1;
              iVar13 = local_a4->field_0015;
              bVar21 = local_94 < *(uint *)(iVar13 + 0xc);
            } while ((int)local_94 < (int)*(uint *)(iVar13 + 0xc));
          }
          *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c) = 0x6980f4;
          local_EAX_1023 = Library::MSVCRT::FUN_0072e6c0();
          local_9c = local_EAX_1023 & 0x80000007;
          if ((int)local_9c < 0) {
            local_9c = (local_9c - 1 | 0xfffffff8) + 1;
          }
          local_c4 = 10;
          local_3c = -100;
          local_98 = -100;
          *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c) = 0x698123;
          local_EAX_1070 = Library::MSVCRT::FUN_0072e6c0();
          local_58 = local_EAX_1070 & 0x80000003;
          if ((int)local_58 < 0) {
            local_58 = (local_58 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar13 = local_a4->field_0015;
            uVar9 = *(uint *)(iVar13 + 0xc);
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c) = 0x698143;
            local_EAX_1102 = Library::MSVCRT::FUN_0072e6c0();
            uVar12 = (int)local_EAX_1102 % (int)uVar9;
            puVar1 = (&PTR_DAT_007d7f70)[local_9c];
            if (uVar12 < uVar9) {
              iVar13 = *(int *)(iVar13 + 8) * uVar12 + *(int *)(iVar13 + 0x1c);
            }
            else {
              iVar13 = 0;
            }
            local_84 = *(int *)(iVar13 + 2) / STField<int>(this,0x5833);
            local_78 = *(int *)(iVar13 + 2) % STField<int>(this,0x5833);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar13 = (int)*(short *)(local_28 + local_80 * 0x10 + 0xc);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((((iVar13 <= local_84) && (local_84 < *(short *)(local_28 + local_80 * 0x10 + 0xe)))
                && (iVar15 = (int)*(short *)(local_28 + local_80 * 0x10 + 8), iVar15 <= local_78))
               && (local_78 < *(short *)(local_28 + local_80 * 0x10 + 10))) {
              local_68 = 1;
              iVar20 = local_58 * 0xe4;
              if (*(int *)(puVar1 + iVar20) < 1) {
                local_68 = 0;
              }
              else {
                local_94 = 0;
                do {
                  iVar6 = local_94 * 0x1c + iVar20;
                  iVar10 = (*(int *)(puVar1 + iVar6 + 4) - iVar15) + local_78;
                  iVar6 = (*(int *)(puVar1 + iVar6 + 8) - iVar13) + local_84;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if ((((-1 < iVar10) && (iVar10 < local_38)) &&
                      ((-1 < iVar6 && (iVar6 < local_44)))) &&
                     (((local_78 < iVar15 ||
                       (*(short *)(local_28 + local_80 * 0x10 + 10) < local_78)) ||
                      ((local_84 < iVar13 ||
                       ((*(short *)(local_28 + local_80 * 0x10 + 0xe) < local_84 ||
                        (*(short *)((int)local_64 + (iVar6 * local_38 + iVar10) * 2) != 0)))))))) {
                    local_68 = 0;
                    break;
                  }
                  local_94 = local_94 + 1;
                } while ((int)local_94 < *(int *)(puVar1 + iVar20));
              }
              if (local_68 == 1) {
                local_3c = local_78;
                local_98 = local_84;
                break;
              }
            }
            local_c4 = local_c4 + -1;
          } while (0 < local_c4);
          iVar13 = local_6c;
          if (local_68 != 0) {
            iVar20 = local_58 * 0xe4;
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c) = 1;
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x18) = 0;
            iVar13 = local_98;
            *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x14) =
                 *(int *)(puVar1 + iVar20 + 8) + local_98;
            iVar15 = local_3c;
            *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x10) =
                 *(int *)(puVar1 + iVar20 + 4) + local_3c;
            *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0xc) = iVar13;
            *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 8) = iVar15;
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 4) = 0x698306;
            thunk_FUN_006a0da0(this,*(uint *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 8),
                               *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0xc),
                               *(uint *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x10),
                               *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x14),
                               *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x18),
                               *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c));
            iVar13 = 0;
            if (*(int *)(puVar1 + iVar20) != 1 && -1 < *(int *)(puVar1 + iVar20) + -1) {
              do {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 0xcc) * 0x1c + iVar20;
                iVar6 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 200) * 0x1c + iVar20;
                *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c) = 1;
                *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x18) = 0;
                *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x14) =
                     *(int *)(puVar1 + iVar10 + 8) + local_98;
                iVar15 = local_3c;
                *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x10) =
                     *(int *)(puVar1 + iVar10 + 4) + local_3c;
                *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0xc) =
                     *(int *)(puVar1 + iVar6 + 8) + local_98;
                *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 8) =
                     *(int *)(puVar1 + iVar6 + 4) + iVar15;
                *(undefined4 *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 4) = 0x69836f;
                thunk_FUN_006a0da0(this,*(uint *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 8),
                                   *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0xc),
                                   *(uint *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x10),
                                   *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x14),
                                   *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x18),
                                   *(int *)((int)auStack_10c + iVar11 + iVar7 + iVar8 + 0x1c));
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(puVar1 + iVar20) + -1);
            }
            param_2 = param_2 + -1;
            *(undefined4 *)(local_28 + local_80 * 0x10 + 4) = 0;
            iVar13 = local_6c;
          }
        }
      }
    }
    local_a8 = iVar13 * 3;
    for (; (-1 < param_1 && (0 < local_a8)); local_a8 = local_a8 + -1) {
      *(undefined4 *)(puVar17 + -4) = 0x6983d9;
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      iVar7 = STField<int>(this,0x5853);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((uint)(int)*(short *)(local_28 + ((int)uVar4 % iVar13) * 0x10) < *(uint *)(iVar7 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_a4 = (AnonShape_00697CF0_36737CA3 *)
                   (*(int *)(iVar7 + 8) * (int)*(short *)(local_28 + ((int)uVar4 % iVar13) * 0x10) +
                   *(int *)(iVar7 + 0x1c));
      }
      else {
        local_a4 = nullptr;
      }
      if ((((*(int *)local_a4 == 0) && (local_a4->field_0005 < 2)) && (3 < local_a4->field_0011)) &&
         (local_a4->field_0015 != 0)) {
        local_50 = local_a4->field_0011 / 10 + 1;
        iVar13 = local_a4->field_0015;
        uVar9 = *(uint *)(iVar13 + 0xc);
        *(undefined4 *)(puVar17 + -4) = 0x698455;
        uVar8 = Library::MSVCRT::FUN_0072e6c0();
        local_2c = (int)uVar8 % (int)uVar9;
        local_94 = 0;
        if (0 < (int)uVar9) {
          do {
            uVar12 = local_94 + local_2c;
            if ((int)uVar9 < (int)uVar12) {
              uVar12 = uVar12 - uVar9;
            }
            if (uVar12 < uVar9) {
              iVar13 = *(int *)(iVar13 + 8) * uVar12 + *(int *)(iVar13 + 0x1c);
            }
            else {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              iVar7 = *(int *)(iVar13 + 2) / STField<int>(this,0x5833);
              iVar13 = *(int *)(iVar13 + 2) % STField<int>(this,0x5833);
              *(undefined4 *)(puVar17 + -4) = 0x6984b9;
              local_EAX_1988 = Library::MSVCRT::FUN_0072e6c0();
              uVar9 = local_EAX_1988 & 0x80000003;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
              }
              if (uVar9 == 1) {
                *(undefined1 **)(puVar17 + -4) = local_c0;
                *(undefined4 *)(puVar17 + -8) = 0;
                *(int *)(puVar17 + -0xc) = iVar7;
                *(int *)(puVar17 + -0x10) = iVar13;
                *(undefined4 *)(puVar17 + -0x14) = STField<undefined4>(this,8);
                *(undefined4 *)(puVar17 + -0x18) = 0x6984e3;
                thunk_FUN_006a1370(*(int **)(puVar17 + -0x14),*(int *)(puVar17 + -0x10),
                                   *(int *)(puVar17 + -0xc),*(int *)(puVar17 + -8),
                                   *(int *)(puVar17 + -4));
                bVar21 = false;
                *(undefined4 *)(puVar17 + -0x18) = 0xff;
                *(undefined4 *)(puVar17 + -0x1c) = 0;
                *(int *)(puVar17 + -0x20) = iVar7;
                *(int *)(puVar17 + -0x24) = iVar13;
                *(undefined4 *)(puVar17 + -0x28) = STField<undefined4>(this,8);
                *(undefined4 *)(puVar17 + -0x2c) = 0x698500;
                iVar8 = thunk_FUN_006a20e0(*(int **)(puVar17 + -0x28),*(int *)(puVar17 + -0x24),
                                           *(int *)(puVar17 + -0x20),*(int *)(puVar17 + -0x1c),
                                           *(int *)(puVar17 + -0x18));
                if ((iVar8 == 0) ||
                   ((((local_bc & 0x2000) == 0x2000 && ((local_bc & 0xf) == 0)) &&
                    ((local_bc & 0x4000) == 0)))) {
                  bVar21 = true;
                }
                if (bVar21) {
                  *(undefined4 *)(puVar17 + -4) = 0x698543;
                  local_EAX_2126 = Library::MSVCRT::FUN_0072e6c0();
                  if ((int)local_EAX_2126 % 6 == 1) {
                    *(undefined4 *)(puVar17 + -4) = 0x698555;
                    local_EAX_2144 = Library::MSVCRT::FUN_0072e6c0();
                    *(int *)(puVar17 + -4) = (int)local_EAX_2144 % 3 + 1;
                    *(undefined4 *)(puVar17 + -8) = 0;
                    *(undefined4 *)(puVar17 + -0xc) = 1;
                    *(undefined4 *)(puVar17 + -0x10) = 1;
                    *(undefined4 *)(puVar17 + -0x14) = 0;
                  }
                  else if ((int)local_EAX_2126 % 6 == 2) {
                    *(undefined4 *)(puVar17 + -4) = 0x6985a4;
                    local_EAX_2223 = Library::MSVCRT::FUN_0072e6c0();
                    *(int *)(puVar17 + -4) = (int)local_EAX_2223 % 6 + 1;
                    *(undefined4 *)(puVar17 + -8) = 0;
                    *(undefined4 *)(puVar17 + -0xc) = 0xff;
                    *(undefined4 *)(puVar17 + -0x10) = 0x6985ba;
                    local_EAX_2245 = Library::MSVCRT::FUN_0072e6c0();
                    uVar9 = local_EAX_2245 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    *(uint *)(puVar17 + -0x10) = uVar9 + 1;
                    *(undefined4 *)(puVar17 + -0x14) = 1;
                  }
                  else {
                    *(undefined4 *)(puVar17 + -4) = 0x698574;
                    local_EAX_2175 = Library::MSVCRT::FUN_0072e6c0();
                    *(int *)(puVar17 + -4) = (int)local_EAX_2175 % 6 + 1;
                    *(undefined4 *)(puVar17 + -8) = 0;
                    *(undefined4 *)(puVar17 + -0xc) = 0xff;
                    *(undefined4 *)(puVar17 + -0x10) = 0x69858a;
                    local_EAX_2197 = Library::MSVCRT::FUN_0072e6c0();
                    uVar9 = local_EAX_2197 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    *(uint *)(puVar17 + -0x10) = uVar9 + 2;
                    *(undefined4 *)(puVar17 + -0x14) = 0;
                  }
                  *(int *)(puVar17 + -0x18) = iVar7;
                  *(int *)(puVar17 + -0x1c) = iVar13;
                  *(undefined4 *)(puVar17 + -0x20) = 0x6985d3;
                  thunk_FUN_006a0c90(*(uint *)(puVar17 + -0x1c),*(int *)(puVar17 + -0x18),
                                     *(int *)(puVar17 + -0x14),*(uint *)(puVar17 + -0x10),
                                     *(int *)(puVar17 + -0xc),*(int *)(puVar17 + -8),
                                     *(uint *)(puVar17 + -4));
                  param_1 = param_1 + -1;
                  local_50 = local_50 + -1;
                  if ((local_50 < 1) || (param_1 < 1)) break;
                }
              }
            }
            local_94 = local_94 + 1;
            iVar13 = local_a4->field_0015;
            uVar9 = *(uint *)(iVar13 + 0xc);
          } while ((int)local_94 < (int)uVar9);
        }
      }
      iVar13 = local_6c;
    }
  }
  ExceptionList = local_14;
  return;
}

