#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_0060c320(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *this;
  void **ppvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar14;
  int iVar13;
  short sVar15;
  short sVar16;
  short *psVar17;
  undefined4 *puVar19;
  undefined4 *puVar20;
  short *psVar21;
  int iVar22;
  STWorldObject *pSVar23;
  short sVar24;
  bool bVar25;
  short local_80 [2];
  int local_7c;
  int local_74;
  int local_6c;
  undefined1 *local_68;
  int local_64;
  int local_5c;
  int local_58;
  short local_54 [4];
  undefined4 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_2c;
  short local_28 [4];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  undefined4 *puVar18;

  puStack_c = &DAT_0079cd68;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_64 = 0;
  local_74 = 0;
  local_2c = 0;
  iVar11 = STField<int>(param_1,0x1e9);
  local_5c = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
  iVar11 = STField<int>(param_1,0x1ed);
  local_6c = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
  iVar11 = STField<int>(param_1,0x24c);
  iVar22 = local_6c - iVar11;
  if (iVar22 < 0) {
    local_64 = -iVar22;
    iVar22 = 0;
  }
  local_20 = local_5c - iVar11;
  if (local_20 < 0) {
    local_44 = -local_20;
    local_20 = 0;
  }
  else {
    local_44 = 0;
  }
  local_6c = iVar11 + 1 + local_6c;
  iVar10 = (int)g_worldGrid.sizeY;
  if (iVar10 < local_6c) {
    local_6c = iVar10;
  }
  local_5c = iVar11 + 1 + local_5c;
  iVar11 = (int)g_worldGrid.sizeX;
  if (iVar11 < local_5c) {
    local_5c = iVar11;
  }
  iVar11 = (local_5c - local_20) * (local_6c - iVar22);
  psVar17 = local_80 + iVar11 * -0x1e + -0x10;
  local_1c = (undefined1 *)(local_80 + iVar11 * -0x1e + -0x10);
  local_68 = (undefined1 *)(local_80 + iVar11 * -0x1e + -0x10);
  local_8 = 0xffffffff;
  local_40 = iVar22;
  psVar21 = local_80 + iVar11 * -0x1e + -0x10;
  ExceptionList = &local_14;
  ppvVar9 = &local_14;
  if (iVar22 < local_6c) {
    do {
      local_7c = local_20;
      local_58 = local_44;
      iVar11 = local_20;
      local_40 = iVar22;
      if (local_20 < local_5c) {
        do {
          local_3c = 0;
          local_7c = iVar11;
          do {
            iVar10 = local_3c;
            if ((&DAT_007abc64)[local_64 + local_58 * 0xf] != '\0') {
              sVar24 = (short)iVar11;
              if (((((sVar24 < 0) || (g_worldGrid.sizeX <= sVar24)) ||
                   (sVar15 = (short)iVar22, sVar15 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar15 || (sVar16 = (short)local_3c, sVar16 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar16)) {
                pSVar23 = nullptr;
              }
              else {
                pSVar23 = STGridAt3D(g_worldGrid, sVar24, sVar15, sVar16).objects[0];
              }
              if (pSVar23 != nullptr) {
                pcVar6 = pSVar23->vtable[5].slots_00_28[0];
                puVar18 = (undefined4 *)((int)psVar17 + -4);
                psVar17 = (short *)((int)psVar17 + -4);
                *puVar18 = 0x60c4f6;
                iVar12 = (*pcVar6)();
                iVar22 = local_40;
                if (((iVar12 != 0) && (pSVar23[1].vtable < (STWorldObjectVTable *)0x8)) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[(int)pSVar23[1].vtable].field_0022 < 8)))) {
                  bVar3 = *(byte *)&pSVar23[1].vtable;
                  bVar4 = STField<byte>(param_1,0x1d9);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060c5f5:
                      iVar12 = 0;
                    }
                    else {
                      bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                      if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar12 = -2;
                      }
                      else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar12 = -1;
                      }
                      else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                        iVar12 = 1;
                      }
                      else {
                        if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                        goto LAB_0060c5f5;
                        iVar12 = 2;
                      }
                    }
                    bVar25 = iVar12 < 0;
                  }
                  else {
                    bVar25 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  if (bVar25) {
                    pcVar6 = pSVar23->vtable[5].slots_00_28[2];
                    puVar19 = (undefined4 *)((int)psVar17 + -4);
                    psVar17 = (short *)((int)psVar17 + -4);
                    *puVar19 = 0x60c612;
                    iVar14 = (*pcVar6)();
                    iVar12 = local_74;
                    iVar22 = local_40;
                    if (iVar14 != 0) {
                      puVar1 = (undefined4 *)(local_68 + local_74 * 0xc);
                      *puVar1 = pSVar23;
                      pcVar6 = pSVar23->vtable[2].slots_00_28[6];
                      puVar20 = (undefined4 *)((int)psVar17 + -4);
                      psVar17 = (short *)((int)psVar17 + -4);
                      *puVar20 = 0x60c62f;
                      iVar14 = (*pcVar6)();
                      iVar14 = iVar14 + 1;
                      iVar22 = local_40;
                      iVar10 = local_3c;
                      iVar11 = local_7c;
                      if (0 < iVar14) {
                        puVar1[1] = iVar14;
                        iVar11 = STField<int>(param_1,0x1ed);
                        iVar11 = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
                        iVar22 = STField<int>(param_1,0x1e9);
                        iVar22 = STBiasedDiv16(iVar22, 0xc9); /* exact signed 16-bit grid-index division */
                        *(int *)((int)psVar17 + -4) = iVar11;
                        *(int *)((int)psVar17 + -8) = iVar22;
                        *(int *)((int)psVar17 + -0xc) = local_40;
                        *(int *)((int)psVar17 + -0x10) = local_7c;
                        *(undefined4 *)((int)psVar17 + -0x14) = 0x60c6b4;
                        iVar13 = FUN_006acf90(*(int *)((int)psVar17 + -0x10),
                                              *(int *)((int)psVar17 + -0xc),
                                              *(int *)((int)psVar17 + -8),
                                              *(int *)((int)psVar17 + -4));
                        puVar1[2] = iVar13;
                        local_2c = local_2c + iVar14;
                        local_74 = iVar12 + 1;
                        iVar22 = local_40;
                        iVar10 = local_3c;
                        iVar11 = local_7c;
                      }
                    }
                  }
                }
              }
            }
            local_3c = iVar10 + 1;
          } while (iVar10 + 1 < 5);
          iVar11 = iVar11 + 1;
          local_7c = iVar11;
          local_58 = local_58 + 1;
        } while (iVar11 < local_5c);
      }
      iVar22 = iVar22 + 1;
      local_40 = iVar22;
      local_64 = local_64 + 1;
      psVar21 = psVar17;
      ppvVar9 = ExceptionList;
    } while (iVar22 < local_6c);
  }
  ExceptionList = ppvVar9;
  if (local_2c != 0) {
    iVar11 = 0;
    if (0 < local_74) {
      do {
        local_64 = 0;
        if (0 < iVar11) {
          do {
            puVar1 = (undefined4 *)(local_68 + iVar11 * 0xc);
            puVar2 = (undefined4 *)(local_68 + local_64 * 0xc);
            iVar22 = puVar2[2];
            if (iVar22 < (int)puVar1[2]) {
              uVar7 = puVar2[1];
              local_4c = uVar7;
              uVar8 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar22;
              puVar1[1] = uVar7;
              *puVar1 = uVar8;
            }
            local_64 = local_64 + 1;
          } while (local_64 < iVar11);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_74);
    }
    local_58 = 0;
    if (0 < local_74) {
      do {
        iVar11 = *(int *)((int)(local_68 + local_58 * 0xc) + 4);
        iVar22 = STField<int>(param_1,0x209);
        bVar25 = iVar22 <= iVar11;
        if (bVar25) {
          iVar11 = iVar11 - iVar22;
        }
        this = *(void **)(local_68 + local_58 * 0xc);
        *(short **)((int)psVar21 + -4) = local_28;
        *(short **)((int)psVar21 + -8) = local_80;
        *(short **)((int)psVar21 + -0xc) = local_54;
        *(undefined4 *)((int)psVar21 + -0x10) = 0x60c7b4;
        thunk_FUN_00416270(this,*(uint **)((int)psVar21 + -0xc),*(int **)((int)psVar21 + -8),
                           *(short **)((int)psVar21 + -4));
        *(int *)((int)psVar21 + -4) = (int)local_28[0];
        *(int *)((int)psVar21 + -8) = (int)local_80[0];
        *(int *)((int)psVar21 + -0xc) = (int)local_54[0];
        *(int *)((int)psVar21 + -0x10) = STField<int>(param_1,0x1f1) + 0xb4;
        *(int *)((int)psVar21 + -0x14) = STField<int>(param_1,0x1ed) + 100;
        *(int *)((int)psVar21 + -0x18) = STField<int>(param_1,0x1e9) + 100;
        *(undefined4 *)((int)psVar21 + -0x1c) = STField<undefined4>(param_1,0x1d9);
        *(undefined4 *)((int)psVar21 + -0x20) = 0x60c7f6;
        thunk_FUN_0061f5c0(*(undefined4 *)((int)psVar21 + -0x1c),*(ushort *)((int)psVar21 + -0x18),
                           *(ushort *)((int)psVar21 + -0x14),*(ushort *)((int)psVar21 + -0x10),
                           *(short *)((int)psVar21 + -0xc),*(short *)((int)psVar21 + -8),
                           *(short *)((int)psVar21 + -4));
        if (bVar25) {
          *(int *)((int)psVar21 + -4) = iVar11;
          *(void **)((int)psVar21 + -8) = this;
          *(undefined4 *)((int)psVar21 + -0xc) = 0x60c826;
          thunk_FUN_0060bd30(param_1,*(undefined4 **)((int)psVar21 + -8),
                             *(undefined4 *)((int)psVar21 + -4));
          STField<undefined4>(param_1,0x209) = 0;
        }
        else {
          *(int *)((int)psVar21 + -4) = iVar11 * 5;
          *(void **)((int)psVar21 + -8) = this;
          *(undefined4 *)((int)psVar21 + -0xc) = 0x60c80f;
          thunk_FUN_0060bd30(param_1,*(undefined4 **)((int)psVar21 + -8),
                             *(undefined4 *)((int)psVar21 + -4));
          STField<int>(param_1,0x209) = STField<int>(param_1,0x209) - iVar11;
        }
      } while ((STField<int>(param_1,0x209) != 0) &&
              (local_58 = local_58 + 1, local_58 < local_74));
    }
    *(undefined4 *)((int)psVar21 + -4) = STField<undefined4>(param_1,0x209);
    *(undefined4 *)((int)psVar21 + -8) = 0x60c85c;
    thunk_FUN_0060bcb0(param_1,*(int *)((int)psVar21 + -4));
  }
  ExceptionList = local_14;
  return local_74;
}

