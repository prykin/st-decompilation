#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

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
  int iVar17;
  int iVar18;
  STWorldObject *this_00;
  short sVar19;
  bool bVar20;
  undefined4 auStack_c0 [2];
  ushort auStack_b8 [2];
  int iStack_b4;
  ushort auStack_b0 [2];
  int aiStack_ac [3];
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
  iVar18 = local_6c - iVar11;
  if (iVar18 < 0) {
    local_64 = -iVar18;
    iVar18 = 0;
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
  iVar11 = (local_5c - local_20) * (local_6c - iVar18);
  aiStack_ac[2] = 0x60c437;
  local_1c = (undefined1 *)(local_80 + iVar11 * -0x1e + -0x10);
  local_68 = (undefined1 *)(local_80 + iVar11 * -0x1e + -0x10);
  local_8 = 0xffffffff;
  local_40 = iVar18;
  ExceptionList = &local_14;
  ppvVar9 = &local_14;
  if (iVar18 < local_6c) {
    do {
      local_7c = local_20;
      local_58 = local_44;
      iVar10 = local_20;
      local_40 = iVar18;
      if (local_20 < local_5c) {
        do {
          local_3c = 0;
          local_7c = iVar10;
          do {
            iVar17 = local_3c;
            if ((&DAT_007abc64)[local_64 + local_58 * 0xf] != '\0') {
              sVar19 = (short)iVar10;
              if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) ||
                   (sVar15 = (short)iVar18, sVar15 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar15 || (sVar16 = (short)local_3c, sVar16 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar16)) {
                this_00 = nullptr;
              }
              else {
                this_00 = STGridAt3D(g_worldGrid, sVar19, sVar15, sVar16).objects[0];
              }
              if (this_00 != nullptr) {
                pcVar6 = this_00->vtable[5].slots_00_28[0];
                aiStack_ac[iVar11 * 0xfffffff1U + 2] = 0x60c4f6;
                /* ST_CALLSITE[0060C4F0]: [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                iVar12 = (*pcVar6)(this_00);
                iVar18 = local_40;
                if (((iVar12 != 0) && (this_00[1].vtable < (STWorldObjectVTable *)0x8)) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))) {
                  bVar3 = *(byte *)&this_00[1].vtable;
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
                    bVar20 = iVar12 < 0;
                  }
                  else {
                    bVar20 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  if (bVar20) {
                    pcVar6 = this_00->vtable[5].slots_00_28[2];
                    aiStack_ac[iVar11 * 0xfffffff1U + 2] = 0x60c612;
                    /* ST_CALLSITE[0060C60C]: [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                    iVar14 = (*pcVar6)(this_00);
                    iVar12 = local_74;
                    iVar18 = local_40;
                    if (iVar14 != 0) {
                      puVar1 = (undefined4 *)(local_68 + local_74 * 0xc);
                      *puVar1 = this_00;
                      pcVar6 = this_00->vtable[2].slots_00_28[6];
                      aiStack_ac[iVar11 * 0xfffffff1U + 2] = 0x60c62f;
                      /* ST_CALLSITE[0060C62C]: [STIndirectCallsiteApplier] exact slot 0x78; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                      iVar14 = (*pcVar6)(this_00);
                      iVar14 = iVar14 + 1;
                      iVar18 = local_40;
                      iVar17 = local_3c;
                      iVar10 = local_7c;
                      if (0 < iVar14) {
                        puVar1[1] = iVar14;
                        iVar18 = STField<int>(param_1,0x1ed);
                        iVar18 = STBiasedDiv16(iVar18, 0xc9); /* exact signed 16-bit grid-index division */
                        iVar10 = STField<int>(param_1,0x1e9);
                        iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
                        aiStack_ac[iVar11 * 0xfffffff1U + 2] = iVar18;
                        aiStack_ac[iVar11 * 0xfffffff1U + 1] = iVar10;
                        aiStack_ac[iVar11 * -0xf] = local_40;
                        *(int *)(auStack_b0 + iVar11 * -0x1e) = local_7c;
                        (&iStack_b4)[iVar11 * -0xf] = 0x60c6b4;
                        iVar13 = FUN_006acf90(*(int *)(auStack_b0 + iVar11 * -0x1e),
                                              aiStack_ac[iVar11 * -0xf],
                                              aiStack_ac[iVar11 * 0xfffffff1U + 1],
                                              aiStack_ac[iVar11 * 0xfffffff1U + 2]);
                        puVar1[2] = iVar13;
                        local_2c = local_2c + iVar14;
                        local_74 = iVar12 + 1;
                        iVar18 = local_40;
                        iVar17 = local_3c;
                        iVar10 = local_7c;
                      }
                    }
                  }
                }
              }
            }
            local_3c = iVar17 + 1;
          } while (iVar17 + 1 < 5);
          iVar10 = iVar10 + 1;
          local_7c = iVar10;
          local_58 = local_58 + 1;
        } while (iVar10 < local_5c);
      }
      iVar18 = iVar18 + 1;
      local_40 = iVar18;
      local_64 = local_64 + 1;
      ppvVar9 = ExceptionList;
    } while (iVar18 < local_6c);
  }
  ExceptionList = ppvVar9;
  if (local_2c != 0) {
    iVar18 = 0;
    if (0 < local_74) {
      do {
        local_64 = 0;
        if (0 < iVar18) {
          do {
            puVar1 = (undefined4 *)(local_68 + iVar18 * 0xc);
            puVar2 = (undefined4 *)(local_68 + local_64 * 0xc);
            iVar10 = puVar2[2];
            if (iVar10 < (int)puVar1[2]) {
              uVar7 = puVar2[1];
              local_4c = uVar7;
              uVar8 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar10;
              puVar1[1] = uVar7;
              *puVar1 = uVar8;
            }
            local_64 = local_64 + 1;
          } while (local_64 < iVar18);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < local_74);
    }
    local_58 = 0;
    if (0 < local_74) {
      do {
        iVar18 = *(int *)((int)(local_68 + local_58 * 0xc) + 4);
        iVar10 = STField<int>(param_1,0x209);
        bVar20 = iVar10 <= iVar18;
        if (bVar20) {
          iVar18 = iVar18 - iVar10;
        }
        this = *(void **)(local_68 + local_58 * 0xc);
        aiStack_ac[iVar11 * 0xfffffff1U + 2] = (int)local_28;
        aiStack_ac[iVar11 * 0xfffffff1U + 1] = (int)local_80;
        aiStack_ac[iVar11 * -0xf] = (int)local_54;
        (auStack_b0 + iVar11 * -0x1e)[0] = 0xc7b4;
        (auStack_b0 + iVar11 * -0x1e)[1] = 0x60;
        thunk_FUN_00416270(this,(uint *)aiStack_ac[iVar11 * -0xf],
                           (int *)aiStack_ac[iVar11 * 0xfffffff1U + 1],
                           (short *)aiStack_ac[iVar11 * 0xfffffff1U + 2]);
        aiStack_ac[iVar11 * 0xfffffff1U + 2] = (int)local_28[0];
        aiStack_ac[iVar11 * 0xfffffff1U + 1] = (int)local_80[0];
        aiStack_ac[iVar11 * -0xf] = (int)local_54[0];
        *(int *)(auStack_b0 + iVar11 * -0x1e) = STField<int>(param_1,0x1f1) + 0xb4;
        (&iStack_b4)[iVar11 * -0xf] = STField<int>(param_1,0x1ed) + 100;
        *(int *)(auStack_b8 + iVar11 * -0x1e) = STField<int>(param_1,0x1e9) + 100;
        auStack_c0[iVar11 * -0xf + 1] = STField<undefined4>(param_1,0x1d9);
        auStack_c0[iVar11 * -0xf] = 0x60c7f6;
        thunk_FUN_0061f5c0(auStack_c0[iVar11 * -0xf + 1],auStack_b8[iVar11 * -0x1e],
                           *(ushort *)(&iStack_b4 + iVar11 * -0xf),auStack_b0[iVar11 * -0x1e],
                           (short)aiStack_ac[iVar11 * -0xf],
                           (short)aiStack_ac[iVar11 * 0xfffffff1U + 1],
                           (short)aiStack_ac[iVar11 * 0xfffffff1U + 2]);
        if (bVar20) {
          aiStack_ac[iVar11 * 0xfffffff1U + 2] = iVar18;
          aiStack_ac[iVar11 * 0xfffffff1U + 1] = (int)this;
          aiStack_ac[iVar11 * -0xf] = 0x60c826;
          thunk_FUN_0060bd30(param_1,(undefined4 *)aiStack_ac[iVar11 * 0xfffffff1U + 1],
                             aiStack_ac[iVar11 * 0xfffffff1U + 2]);
          STField<undefined4>(param_1,0x209) = 0;
        }
        else {
          aiStack_ac[iVar11 * 0xfffffff1U + 2] = iVar18 * 5;
          aiStack_ac[iVar11 * 0xfffffff1U + 1] = (int)this;
          aiStack_ac[iVar11 * -0xf] = 0x60c80f;
          thunk_FUN_0060bd30(param_1,(undefined4 *)aiStack_ac[iVar11 * 0xfffffff1U + 1],
                             aiStack_ac[iVar11 * 0xfffffff1U + 2]);
          STField<int>(param_1,0x209) = STField<int>(param_1,0x209) - iVar18;
        }
      } while ((STField<int>(param_1,0x209) != 0) &&
              (local_58 = local_58 + 1, local_58 < local_74));
    }
    aiStack_ac[iVar11 * 0xfffffff1U + 2] = STField<undefined4>(param_1,0x209);
    aiStack_ac[iVar11 * 0xfffffff1U + 1] = 0x60c85c;
    thunk_FUN_0060bcb0(param_1,aiStack_ac[iVar11 * 0xfffffff1U + 2]);
  }
  ExceptionList = local_14;
  return local_74;
}

