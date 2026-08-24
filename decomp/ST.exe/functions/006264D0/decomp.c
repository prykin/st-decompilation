#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006264d0(void *this,int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  STWorldObject *this_00;
  byte bVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  short sVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  int *piVar9;
  int *piVar10;
  short sVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  short sVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
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
  uint local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48;
  byte local_44;
  undefined3 uStack_43;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puVar13 = local_bc;
  local_18 = this;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  iVar4 = param_2 * 6;
  sVar8 = *(short *)(&DAT_007d046c + iVar4) + STField<short>(this,0x2c2);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_20 = STReplaceLowWord((uint32_t)(unaff_EBX), (uint16_t)(sVar8));
  sVar12 = *(short *)(&DAT_007d046e + iVar4) + STField<short>(this,0x2c6);
  local_54 = STReplaceLowWord((uint32_t)(puVar13), (uint16_t)(sVar12));
  sVar11 = *(short *)(&DAT_007d0470 + iVar4) + STField<short>(this,0x2ca);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_40 = STReplaceLowWord((uint32_t)(unaff_ESI), (uint16_t)(sVar11));
  if (param_1 == nullptr) {
    return 0;
  }
  thunk_FUN_00416270(param_1,&local_28,(short *)&local_24,(short *)&local_38);
  iVar4 = (int)sVar11;
  iVar14 = (int)sVar12;
  iVar5 = FUN_006acf0d((int)sVar8,iVar14,iVar4,(int)(short)local_28,(int)(short)local_24,
                       (int)(short)local_38);
  bVar3 = thunk_FUN_00430750(CASE_9B);
  local_10 = iVar5 / (int)(uint)bVar3;
  if (local_10 < 1) {
    local_10 = 1;
  }
  auto param_2_after_write = 1; /* compiler stack-slot lifetime split */
  piVar9 = local_18;
  local_1c = (int)(short)local_20;
  local_14 = iVar14;
  local_8 = iVar4;
  if (0 < local_10) {
    do {
      iVar4 = (((int)(short)local_28 - (int)(short)local_20) * param_2_after_write) / local_10 +
              (int)(short)local_20;
      local_34 = (((int)(short)local_24 - (int)(short)local_54) * param_2_after_write) / local_10 +
                 (int)(short)local_54;
      local_4c = (((int)(short)local_38 - (int)(short)local_40) * param_2_after_write) / local_10 +
                 (int)(short)local_40;
      local_60 = iVar4;
      local_c = FUN_006acf0d(local_1c,local_14,local_8,iVar4,local_34,local_4c);
      local_c = local_c / 0x32;
      if (local_c < 1) {
        local_c = 1;
      }
      local_48 = 1;
      if (0 < local_c) {
        local_5c = local_4c - local_8;
        local_64 = local_34 - local_14;
        local_58 = iVar4 - local_1c;
        piVar10 = piVar9;
        iVar14 = local_c;
        local_3c = local_5c;
        local_30 = local_58;
        local_2c = local_64;
        do {
          piVar9 = local_18;
          iVar4 = local_1c + local_30 / iVar14;
          iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
          iVar6 = local_14 + local_2c / iVar14;
          iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = local_8 + local_3c / iVar14;
          iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
          sVar8 = (short)iVar4;
          if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar11 = (short)iVar6, sVar11 < 0)
               ) || ((g_worldGrid.sizeY <= sVar11 || (sVar12 = (short)iVar7, sVar12 < 0)))) ||
             ((g_worldGrid.sizeZ <= sVar12 ||
              (this_00 = STGridAt3D(g_worldGrid, sVar8, sVar11, sVar12).objects[0],
              piVar10 = local_18, iVar14 = local_c, this_00 == nullptr)))) {
            piVar9 = piVar10;
            if (STGridAt3D(g_pathingGrid, iVar4, iVar6, iVar7) < 0) {
              return 0;
            }
          }
          else if (local_18[6] != *(int *)&this_00->field_0x18) {
            /* ST_CALLSITE[00626798]: CALL dword ptr [EDX + 0xf0] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar4 = (**(code **)(*param_1 + 0xf0))();
            if (iVar4 == 0) {
              return 0;
            }
            if (((uint)param_1[9] < 8) &&
               ((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[param_1[9]].field_0022 < 8)))) {
              bVar3 = *(byte *)&this_00[1].vtable;
              bVar1 = ((byte *)piVar9)[9];
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_50 = CONCAT31(uStack_4f,bVar3);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_44 = CONCAT31(uStack_43,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar3 == bVar1) {
LAB_0062687f:
                  iVar4 = 0;
                }
                else {
                  bVar2 = g_playerRelationMatrix[bVar3][bVar1];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar3] == 0)) {
                    iVar4 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar3] == 0)) {
                    iVar4 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar3] == 1)) {
                    iVar4 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar3] != 1))
                    goto LAB_0062687f;
                    iVar4 = 2;
                  }
                }
                bVar15 = iVar4 < 0;
              }
              else {
                bVar15 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar3].field_0023;
              }
              if (!bVar15) {
                return 0;
              }
            }
            /* ST_CALLSITE[00626896]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
            iVar4 = (*this_00->vtable[5].slots_00_28[2])(this_00);
            iVar14 = local_c;
            if (iVar4 == 0) {
              return 0;
            }
          }
          local_30 = local_30 + local_58;
          local_2c = local_2c + local_64;
          local_48 = local_48 + 1;
          local_3c = local_3c + local_5c;
          piVar10 = piVar9;
          iVar4 = local_60;
        } while (local_48 <= iVar14);
      }
      local_14 = local_34;
      local_8 = local_4c;
      param_2_after_write = param_2_after_write + 1;
      local_1c = iVar4;
    } while (param_2_after_write <= local_10);
  }
  local_bc[3] = 1;
  local_bc[2] = 1;
  local_bc[1] = STField<undefined4>(piVar9,0x262);
  local_9e = (short)local_40;
  local_a2 = (short)local_20;
  local_98 = (undefined2)local_38;
  local_9c = (undefined2)local_28;
  local_9a = (undefined2)local_24;
  local_bc[0] = 0x28;
  local_a0 = (undefined2)local_54;
  local_94 = 0x9b;
  /* ST_CALLSITE[0062697A]: CALL dword ptr [EDI + 0x10] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  local_96 = (**(code **)(*piVar9 + 0x10))(local_20,local_54,local_40,local_28,local_24,local_38);
  local_8f = piVar9[6];
  local_8b = 0xffff;
  /* ST_CALLSITE[006269AB]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x28,0,0,local_bc,0);
  return 1;
}

