#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006264d0(void *this,int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  STWorldObject *pSVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  int *piVar10;
  int *piVar11;
  short sVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  short sVar13;
  undefined4 *puVar14;
  int iVar15;
  bool bVar16;
  undefined4 local_bc [6];
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  int local_8f;
  undefined2 local_8b;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48;
  byte local_44;
  undefined3 uStack_43;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puVar14 = local_bc;
  local_18 = this;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  iVar6 = param_2 * 6;
  sVar9 = *(short *)(&DAT_007d046c + iVar6) + STField<short>(this,0x2c2);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_20 = STReplaceLowWord((uint32_t)(unaff_EBX), (uint16_t)(sVar9));
  sVar13 = *(short *)(&DAT_007d046e + iVar6) + STField<short>(this,0x2c6);
  local_54 = STReplaceLowWord((uint32_t)(puVar14), (uint16_t)(sVar13));
  sVar12 = *(short *)(&DAT_007d0470 + iVar6) + STField<short>(this,0x2ca);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_40 = STReplaceLowWord((uint32_t)(unaff_ESI), (uint16_t)(sVar12));
  if (param_1 == nullptr) {
    return 0;
  }
  thunk_FUN_00416270(param_1,&local_28,&local_24,(short *)&local_38);
  iVar6 = (int)sVar12;
  iVar15 = (int)sVar13;
  iVar5 = FUN_006acf0d((int)sVar9,iVar15,iVar6,(int)(short)local_28,(int)(short)local_24,
                       (int)(short)local_38);
  bVar4 = thunk_FUN_00430750(CASE_9B);
  local_10 = iVar5 / (int)(uint)bVar4;
  if (local_10 < 1) {
    local_10 = 1;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = 1;
  piVar10 = local_18;
  local_1c = (int)(short)local_20;
  local_14 = iVar15;
  local_8 = iVar6;
  if (0 < local_10) {
    do {
      iVar6 = (((int)(short)local_28 - (int)(short)local_20) * param_2) / local_10 +
              (int)(short)local_20;
      local_34 = (((int)(short)local_24 - (int)(short)local_54) * param_2) / local_10 +
                 (int)(short)local_54;
      local_4c = (((int)(short)local_38 - (int)(short)local_40) * param_2) / local_10 +
                 (int)(short)local_40;
      local_60 = iVar6;
      local_c = FUN_006acf0d(local_1c,local_14,local_8,iVar6,local_34,local_4c);
      local_c = local_c / 0x32;
      if (local_c < 1) {
        local_c = 1;
      }
      local_48 = 1;
      if (0 < local_c) {
        local_5c = local_4c - local_8;
        local_64 = local_34 - local_14;
        local_58 = iVar6 - local_1c;
        piVar11 = piVar10;
        iVar15 = local_c;
        local_3c = local_5c;
        local_30 = local_58;
        local_2c = local_64;
        do {
          piVar10 = local_18;
          iVar6 = local_1c + local_30 / iVar15;
          iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = local_14 + local_2c / iVar15;
          iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          iVar8 = local_8 + local_3c / iVar15;
          iVar8 = STBiasedDiv16(iVar8, 200); /* exact signed 16-bit grid-index division */
          sVar9 = (short)iVar6;
          if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar12 = (short)iVar7, sVar12 < 0)
               ) || ((g_worldGrid.sizeY <= sVar12 || (sVar13 = (short)iVar8, sVar13 < 0)))) ||
             ((g_worldGrid.sizeZ <= sVar13 ||
              (pSVar3 = STGridAt3D(g_worldGrid, sVar9, sVar12, sVar13).objects[0],
              piVar11 = local_18, iVar15 = local_c, pSVar3 == nullptr)))) {
            piVar10 = piVar11;
            if (STGridAt3D(g_pathingGrid, iVar6, iVar7, iVar8) < 0) {
              return 0;
            }
          }
          else if (local_18[6] != *(int *)&pSVar3->field_0x18) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar6 = (**(code **)(*param_1 + 0xf0))();
            if (iVar6 == 0) {
              return 0;
            }
            if (((uint)param_1[9] < 8) &&
               ((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[param_1[9]].field_0022 < 8)))) {
              bVar4 = *(byte *)&pSVar3[1].vtable;
              bVar1 = *(byte *)(piVar10 + 9);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_50 = CONCAT31(uStack_4f,bVar4);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_44 = CONCAT31(uStack_43,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar4 == bVar1) {
LAB_0062687f:
                  iVar6 = 0;
                }
                else {
                  bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                    goto LAB_0062687f;
                    iVar6 = 2;
                  }
                }
                bVar16 = iVar6 < 0;
              }
              else {
                bVar16 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar4].field_0023;
              }
              if (!bVar16) {
                return 0;
              }
            }
            iVar6 = (*pSVar3->vtable[5].slots_00_28[2])();
            iVar15 = local_c;
            if (iVar6 == 0) {
              return 0;
            }
          }
          local_30 = local_30 + local_58;
          local_2c = local_2c + local_64;
          local_48 = local_48 + 1;
          local_3c = local_3c + local_5c;
          piVar11 = piVar10;
          iVar6 = local_60;
        } while (local_48 <= iVar15);
      }
      local_14 = local_34;
      local_8 = local_4c;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 1;
      local_1c = iVar6;
    } while (param_2 <= local_10);
  }
  local_bc[3] = 1;
  local_bc[2] = 1;
  local_bc[1] = STField<undefined4>(piVar10,0x262);
  local_9e = (short)local_40;
  local_a2 = (short)local_20;
  local_98 = (undefined2)local_38;
  local_9c = (undefined2)local_28;
  local_9a = (undefined2)local_24;
  local_bc[0] = 0x28;
  local_a0 = (undefined2)local_54;
  local_94 = 0x9b;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  local_96 = (**(code **)(*piVar10 + 0x10))(local_20,local_54,local_40,local_28,local_24,local_38);
  local_8f = piVar10[6];
  local_8b = 0xffff;
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x28,0,0,local_bc,0);
  return 1;
}

