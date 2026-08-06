#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0061ca90(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  STWorldObject *this_00;
  undefined4 uVar5;
  STWorldObjectVTable *pSVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  int iVar12;
  short sVar11;
  int iVar13;
  short sVar14;
  int iVar15;
  short sVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  bool bVar20;
  int local_800 [495];
  void *local_44;
  byte local_40;
  undefined3 uStack_3f;
  int local_3c;
  undefined4 local_38;
  int local_34;
  byte local_30;
  undefined3 uStack_2f;
  int local_2c;
  int local_28;
  short local_22;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_6;

  local_44 = this;
  local_38 = 0;
  if (param_4 == nullptr) {
    return 0;
  }
  sVar9 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar16 = (short)(((short)(param_1 / 0xc9) + sVar9) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar16 = (int)(short)(((short)(param_1 / 0xc9) + sVar9) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar13 = (short)(((short)(param_2 / 0xc9) + sVar9) -
                    (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar13 = (int)(short)(((short)(param_2 / 0xc9) + sVar9) -
                         (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar10 = (short)(((short)(param_3 / 200) + sVar9) -
                    (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar10 = (int)(short)(((short)(param_3 / 200) + sVar9) -
                         (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if (((((-1 < iVar16) && (-1 < iVar13)) && (-1 < iVar10)) &&
      ((iVar18 = (int)g_worldGrid.sizeX, iVar16 < iVar18 &&
       (iVar15 = (int)g_worldGrid.sizeY, iVar13 < iVar15)))) && (iVar10 < 5)) {
    local_20 = iVar13 + -1;
    if (iVar13 + -1 < 0) {
      local_20 = 0;
    }
    local_18 = iVar16 + -1;
    if (iVar16 + -1 < 0) {
      local_18 = 0;
    }
    local_2c = iVar13 + 2;
    if (iVar15 < iVar13 + 2) {
      local_2c = iVar15;
    }
    local_1c = iVar16 + 2;
    if (iVar18 < iVar16 + 2) {
      local_1c = iVar18;
    }
    iVar13 = 0;
    local_c = 0;
    local_34 = 0;
    local_3c = 0x18894;
    local_14 = 0;
    iVar16 = local_18;
    iVar10 = local_2c;
    sVar15 = g_worldGrid.sizeX;
    do {
      local_10 = local_20;
      local_28 = iVar16;
      iVar18 = local_14;
      if (local_20 < iVar10) {
        do {
          iVar16 = local_28;
          if (local_28 < local_1c) {
            piVar17 = local_800 + iVar13 * 0xb;
            do {
              sVar9 = (short)local_28;
              if ((((-1 < sVar9) && (sVar9 < sVar15)) &&
                  ((sVar11 = (short)local_10, -1 < sVar11 &&
                   (((sVar11 < g_worldGrid.sizeY && (sVar14 = (short)iVar18, -1 < sVar14)) &&
                    (sVar14 < g_worldGrid.sizeZ)))))) &&
                 (((this_00 = g_worldGrid.cells
                              [(int)sVar11 * (int)sVar15 +
                               (int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar9].objects[0],
                   this_00 != nullptr &&
                   (iVar16 = (*this_00->vtable[5].slots_00_28[0])(), iVar16 != 0)) &&
                  ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))))))
                 ) {
                bVar1 = *(byte *)&this_00[1].vtable;
                bVar2 = STField<byte>(local_44,0x51);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                _local_30 = CONCAT31(uStack_2f,bVar1);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                _local_40 = CONCAT31(uStack_3f,bVar2);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_0061cd61:
                    iVar16 = 0;
                  }
                  else {
                    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar16 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar16 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                      iVar16 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                      goto LAB_0061cd61;
                      iVar16 = 2;
                    }
                  }
                  bVar20 = iVar16 < 0;
                }
                else {
                  bVar20 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                }
                if ((bVar20) && (iVar16 = (*this_00->vtable[5].slots_00_28[2])(), iVar16 != 0)) {
                  thunk_FUN_00416270(this_00,(uint *)&local_6,(int *)((int)&param_3 + 2),&local_22);
                  uVar4 = *(undefined2 *)&this_00[1].field_0xe;
                  memset(piVar17, 0, 0x2c); /* compiler bulk-zero initialization */
                  uVar5 = *(undefined4 *)&this_00->field_0x18;
                  *piVar17 = (int)this_00[1].vtable;
                  uVar7 = (undefined2)local_28;
                  STField<undefined4>(piVar17,0x26) = uVar5;
                  uVar8 = (undefined2)local_10;
                  STField<undefined2>(piVar17,0x2a) = uVar4;
                  uVar4 = (undefined2)local_14;
                  STField<STWorldObject *>(piVar17,0x1a) = this_00;
                  *(undefined2 *)(piVar17 + 5) = uVar7;
                  iVar16 = (int)local_6;
                  STField<undefined2>(piVar17,0x16) = uVar8;
                  *(undefined2 *)(piVar17 + 6) = uVar4;
                  iVar13 = (int)local_22;
                  piVar17[2] = iVar16;
                  pSVar6 = this_00->vtable;
                  piVar17[3] = (int)STPiece<2,2>(param_3);
                  piVar17[4] = iVar13;
                  iVar16 = (*pSVar6->GetObjectTypeId)(this_00);
                  iVar13 = (int)local_6;
                  piVar17[1] = iVar16;
                  iVar12 = FUN_006aced8(param_1,param_2,iVar13,(int)STPiece<2,2>(param_3));
                  iVar16 = local_3c;
                  STField<int>(piVar17,0x1e) = iVar12;
                  STField<int>(piVar17,0x22) = iVar12;
                  if (STField<int>(piVar17,0x1e) < iVar16) {
                    local_3c = STField<int>(piVar17,0x1e);
                    local_34 = local_c;
                  }
                  piVar17 = piVar17 + 0xb;
                  local_c = local_c + 1;
                }
              }
              local_28 = local_28 + 1;
              iVar16 = local_18;
              iVar18 = local_14;
              iVar13 = local_c;
              iVar10 = local_2c;
              sVar15 = g_worldGrid.sizeX;
            } while (local_28 < local_1c);
          }
          local_10 = local_10 + 1;
          local_28 = iVar16;
        } while (local_10 < iVar10);
      }
      local_14 = iVar18 + 1;
    } while (iVar18 + 1 < 5);
    if (0 < iVar13) {
      local_38 = 1;
      piVar17 = local_800 + local_34 * 0xb;
      memmove(param_4, piVar17, 0x2c); /* compiler REP MOVS byte copy */
    }
  }
  return local_38;
}

