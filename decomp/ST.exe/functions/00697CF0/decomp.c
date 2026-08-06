#include "../../pseudocode_runtime.h"


void __thiscall FUN_00697cf0(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint local_EAX_231;
  int iVar4;
  undefined2 *puVar5;
  short *psVar6;
  uint local_EAX_1023;
  uint local_EAX_1070;
  uint local_EAX_1102;
  int iVar7;
  uint uVar4;
  uint uVar8;
  uint local_EAX_1988;
  uint local_EAX_2126;
  uint local_EAX_2144;
  uint local_EAX_2175;
  uint local_EAX_2197;
  uint local_EAX_2223;
  uint local_EAX_2245;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  AnonShape_00697CF0_36737CA3 *pAVar15;
  undefined4 *puVar16;
  int iVar17;
  bool bVar18;
  int local_c4;
  undefined1 local_c0 [4];
  uint local_bc;
  int local_b8;
  undefined1 *local_b4;
  uint local_ac;
  int local_a8;
  AnonShape_00697CF0_36737CA3 *local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_90;
  uint local_88;
  int local_84;
  int local_80;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  int local_5c;
  uint local_58;
  int local_50;
  uint local_48;
  int local_44;
  uint local_3c;
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
  local_1c = &stack0xffffff14;
  iVar13 = 0;
  local_6c = 0;
  local_48 = 0;
  local_5c = 0;
  local_ac = 0;
  local_b8 = 0;
  local_68 = 0;
  if (STField<int>(this,0x5853) != 0) {
    iVar4 = *(int *)(STField<int>(this,0x5853) + 0xc);
    local_8 = 0;
    ExceptionList = &local_14;
    local_70 = iVar4;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    local_88 = 0;
    local_28 = &stack0xffffff14;
    puVar2 = &stack0xffffff14;
    local_1c = &stack0xffffff14;
    puVar3 = &stack0xffffff14;
    if (0 < iVar4) {
      do {
        puVar2 = local_28;
        puVar3 = local_1c;
        if (param_1 < 1) break;
        iVar4 = STField<int>(this,0x5853);
        if (local_88 < *(uint *)(iVar4 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pAVar15 = (AnonShape_00697CF0_36737CA3 *)
                    (*(int *)(iVar4 + 8) * local_88 + *(int *)(iVar4 + 0x1c));
        }
        else {
          pAVar15 = nullptr;
        }
        local_a4 = pAVar15;
        if ((*(int *)pAVar15 == 0) && (pAVar15->field_0005 < 1)) {
          if (pAVar15->field_0015 != 0) {
            local_EAX_231 = Library::MSVCRT::FUN_0072e6c0();
            local_a0 = (int)local_EAX_231 % 6 + 1;
            local_74 = 0;
            local_90 = 0;
            local_94 = 0;
            iVar4 = pAVar15->field_0015;
            uVar9 = *(uint *)(iVar4 + 0xc);
            if (0 < (int)uVar9) {
              do {
                if (local_94 < uVar9) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pbVar14 = (byte *)(*(int *)(iVar4 + 8) * local_94 + *(int *)(iVar4 + 0x1c));
                }
                else {
                  pbVar14 = nullptr;
                }
                if (pbVar14 != nullptr) {
                  local_90 = local_90 + 1;
                  iVar4 = *(int *)(pbVar14 + 2) / STField<int>(this,0x5833);
                  uVar11 = *(int *)(pbVar14 + 2) % STField<int>(this,0x5833);
                  uVar9 = uVar11;
                  iVar13 = iVar4;
                  uVar12 = uVar11;
                  if (local_94 == 0) {
LAB_00697e8c:
                    local_48 = uVar12;
                    local_5c = iVar13;
                    local_ac = uVar9;
                    local_b8 = iVar4;
                  }
                  else {
                    if ((int)uVar11 < (int)local_48) {
                      local_48 = uVar11;
                    }
                    if (iVar4 < local_5c) {
                      local_5c = iVar4;
                    }
                    if ((int)local_ac < (int)uVar11) {
                      local_ac = uVar11;
                    }
                    uVar9 = local_ac;
                    iVar13 = local_5c;
                    uVar12 = local_48;
                    if (local_b8 < iVar4) goto LAB_00697e8c;
                  }
                  if ((*pbVar14 & 1) != 0) {
                    local_74 = local_74 + 1;
                    thunk_FUN_006a0c90(uVar11,iVar4,0,1,0,1,local_a0);
                  }
                }
                local_94 = local_94 + 1;
                iVar4 = local_a4->field_0015;
                uVar9 = *(uint *)(iVar4 + 0xc);
                iVar13 = local_6c;
              } while ((int)local_94 < (int)uVar9);
            }
            if (local_90 != 0) {
              puVar5 = (undefined2 *)(local_28 + iVar13 * 0x10);
              *puVar5 = (undefined2)local_88;
              puVar5[1] = (short)local_90;
              *(int *)(puVar5 + 2) = local_74;
              puVar5[4] = (undefined2)local_48;
              puVar5[5] = (undefined2)local_ac;
              puVar5[6] = (undefined2)local_5c;
              puVar5[7] = (undefined2)local_b8;
              iVar13 = iVar13 + 1;
              local_6c = iVar13;
            }
          }
        }
        else if (0 < *(int *)pAVar15) break;
        local_88 = local_88 + 1;
        puVar2 = local_28;
        puVar3 = local_1c;
      } while ((int)local_88 < local_70);
    }
    local_1c = puVar3;
    local_28 = puVar2;
    if (iVar13 != 0) {
      local_8 = 1;
      Library::MSVCRT::FUN_0072da40();
      local_b4 = &stack0xffffff14;
      local_1c = &stack0xffffff14;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_a8 = iVar13 * 2;
      local_1c = &stack0xffffff14;
      local_64 = (undefined4 *)&stack0xffffff14;
      while ((0 < param_2 && (iVar13 = local_6c, 0 < local_a8))) {
        local_a8 = local_a8 + -1;
        local_80 = thunk_FUN_0069f7f0((int)local_28,local_6c,0x10,4,3);
        iVar13 = local_6c;
        if (-1 < local_80) {
          psVar6 = (short *)(local_28 + local_80 * 0x10);
          iVar13 = STField<int>(this,0x5853);
          if ((uint)(int)*psVar6 < *(uint *)(iVar13 + 0xc)) {
            local_a4 = (AnonShape_00697CF0_36737CA3 *)
                       (*(int *)(iVar13 + 8) * (int)*psVar6 + *(int *)(iVar13 + 0x1c));
          }
          else {
            local_a4 = nullptr;
          }
          local_38 = ((int)psVar6[5] - (int)psVar6[4]) + 1;
          local_44 = ((int)psVar6[7] - (int)psVar6[6]) + 1;
          puVar16 = local_64;
          for (uVar9 = (local_44 * local_38 & 0x7fffffffU) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar16 = 0xffffffff;
            puVar16 = puVar16 + 1;
          }
          for (uVar9 = local_44 * local_38 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar16 = 0xff;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          local_94 = 0;
          iVar13 = local_a4->field_0015;
          if (0 < *(int *)(iVar13 + 0xc)) {
            bVar18 = *(int *)(iVar13 + 0xc) != 0;
            do {
              if (bVar18) {
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
              bVar18 = local_94 < *(uint *)(iVar13 + 0xc);
            } while ((int)local_94 < (int)*(uint *)(iVar13 + 0xc));
          }
          local_EAX_1023 = Library::MSVCRT::FUN_0072e6c0();
          local_9c = local_EAX_1023 & 0x80000007;
          if ((int)local_9c < 0) {
            local_9c = (local_9c - 1 | 0xfffffff8) + 1;
          }
          local_c4 = 10;
          local_3c = 0xffffff9c;
          local_98 = -100;
          local_EAX_1070 = Library::MSVCRT::FUN_0072e6c0();
          local_58 = local_EAX_1070 & 0x80000003;
          if ((int)local_58 < 0) {
            local_58 = (local_58 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar13 = local_a4->field_0015;
            uVar9 = *(uint *)(iVar13 + 0xc);
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
                && (iVar4 = (int)*(short *)(local_28 + local_80 * 0x10 + 8), iVar4 <= (int)local_78)
                ) && ((int)local_78 < (int)*(short *)(local_28 + local_80 * 0x10 + 10))) {
              local_68 = 1;
              iVar17 = local_58 * 0xe4;
              if (*(int *)(puVar1 + iVar17) < 1) {
                local_68 = 0;
              }
              else {
                local_94 = 0;
                do {
                  iVar7 = local_94 * 0x1c + iVar17;
                  iVar10 = (*(int *)(puVar1 + iVar7 + 4) - iVar4) + local_78;
                  iVar7 = (*(int *)(puVar1 + iVar7 + 8) - iVar13) + local_84;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if ((((-1 < iVar10) && (iVar10 < local_38)) &&
                      ((-1 < iVar7 && (iVar7 < local_44)))) &&
                     ((((int)local_78 < iVar4 ||
                       ((int)*(short *)(local_28 + local_80 * 0x10 + 10) < (int)local_78)) ||
                      ((local_84 < iVar13 ||
                       ((*(short *)(local_28 + local_80 * 0x10 + 0xe) < local_84 ||
                        (*(short *)((int)local_64 + (iVar7 * local_38 + iVar10) * 2) != 0)))))))) {
                    local_68 = 0;
                    break;
                  }
                  local_94 = local_94 + 1;
                } while ((int)local_94 < *(int *)(puVar1 + iVar17));
              }
              iVar13 = local_84;
              uVar9 = local_78;
              if (local_68 == 1) break;
            }
            local_c4 = local_c4 + -1;
            iVar13 = local_98;
            uVar9 = local_3c;
          } while (0 < local_c4);
          local_3c = uVar9;
          local_98 = iVar13;
          iVar13 = local_6c;
          if (local_68 != 0) {
            iVar4 = local_58 * 0xe4;
            thunk_FUN_006a0da0(this,local_3c,local_98,*(int *)(puVar1 + iVar4 + 4) + local_3c,
                               *(int *)(puVar1 + iVar4 + 8) + local_98,0,1);
            iVar13 = 0;
            if (*(int *)(puVar1 + iVar4) != 1 && -1 < *(int *)(puVar1 + iVar4) + -1) {
              do {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar7 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 0xcc) * 0x1c + iVar4;
                iVar17 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 200) * 0x1c + iVar4;
                thunk_FUN_006a0da0(this,*(int *)(puVar1 + iVar17 + 4) + local_3c,
                                   *(int *)(puVar1 + iVar17 + 8) + local_98,
                                   *(int *)(puVar1 + iVar7 + 4) + local_3c,
                                   *(int *)(puVar1 + iVar7 + 8) + local_98,0,1);
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(puVar1 + iVar4) + -1);
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + -1;
            *(undefined4 *)(local_28 + local_80 * 0x10 + 4) = 0;
            iVar13 = local_6c;
          }
        }
      }
    }
    local_a8 = iVar13 * 3;
    for (; (-1 < param_1 && (0 < local_a8)); local_a8 = local_a8 + -1) {
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      iVar4 = STField<int>(this,0x5853);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((uint)(int)*(short *)(local_28 + ((int)uVar4 % iVar13) * 0x10) < *(uint *)(iVar4 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_a4 = (AnonShape_00697CF0_36737CA3 *)
                   (*(int *)(iVar4 + 8) * (int)*(short *)(local_28 + ((int)uVar4 % iVar13) * 0x10) +
                   *(int *)(iVar4 + 0x1c));
      }
      else {
        local_a4 = nullptr;
      }
      if ((((*(int *)local_a4 == 0) && (local_a4->field_0005 < 2)) && (3 < local_a4->field_0011)) &&
         (local_a4->field_0015 != 0)) {
        local_50 = local_a4->field_0011 / 10 + 1;
        iVar13 = local_a4->field_0015;
        uVar9 = *(uint *)(iVar13 + 0xc);
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
              iVar4 = *(int *)(iVar13 + 2) / STField<int>(this,0x5833);
              uVar12 = *(int *)(iVar13 + 2) % STField<int>(this,0x5833);
              local_EAX_1988 = Library::MSVCRT::FUN_0072e6c0();
              uVar9 = local_EAX_1988 & 0x80000003;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
              }
              if (uVar9 == 1) {
                thunk_FUN_006a1370(STField<int *>(this,8),uVar12,iVar4,0,(int)local_c0);
                bVar18 = false;
                iVar13 = thunk_FUN_006a20e0(STField<int *>(this,8),uVar12,iVar4,0,0xff);
                if ((iVar13 == 0) ||
                   ((((local_bc & 0x2000) == 0x2000 && ((local_bc & 0xf) == 0)) &&
                    ((local_bc & 0x4000) == 0)))) {
                  bVar18 = true;
                }
                if (bVar18) {
                  local_EAX_2126 = Library::MSVCRT::FUN_0072e6c0();
                  if ((int)local_EAX_2126 % 6 == 1) {
                    local_EAX_2144 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)local_EAX_2144 % 3 + 1;
                    iVar17 = 0;
                    iVar13 = 1;
                    uVar9 = 1;
                    iVar7 = 0;
                  }
                  else if ((int)local_EAX_2126 % 6 == 2) {
                    local_EAX_2223 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)local_EAX_2223 % 6 + 1;
                    iVar17 = 0;
                    iVar13 = 0xff;
                    local_EAX_2245 = Library::MSVCRT::FUN_0072e6c0();
                    uVar9 = local_EAX_2245 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    uVar9 = uVar9 + 1;
                    iVar7 = 1;
                  }
                  else {
                    local_EAX_2175 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)local_EAX_2175 % 6 + 1;
                    iVar17 = 0;
                    iVar13 = 0xff;
                    local_EAX_2197 = Library::MSVCRT::FUN_0072e6c0();
                    uVar9 = local_EAX_2197 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    uVar9 = uVar9 + 2;
                    iVar7 = 0;
                  }
                  thunk_FUN_006a0c90(uVar12,iVar4,iVar7,uVar9,iVar13,iVar17,uVar11);
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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

