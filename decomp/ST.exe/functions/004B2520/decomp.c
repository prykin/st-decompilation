
undefined4 __cdecl
FUN_004b2520(uint param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6
            ,undefined4 *param_7,undefined4 *param_8,int param_9,int *param_10)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  int iVar13;
  int *piVar14;
  STWorldObject *this;
  bool bVar15;
  int local_68;
  int local_64;
  int local_48;
  int local_34;
  STWorldObject *local_30;
  int local_2c;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_00790940;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_30 = (STWorldObject *)0x0;
  ExceptionList = &local_14;
  *param_8 = 0xffffffff;
  *param_7 = 0xffffffff;
  *param_6 = 0xffffffff;
  *param_10 = 0;
  local_48 = 1;
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_34 = 0;
  local_8 = 0xffffffff;
  iVar6 = thunk_FUN_004b2390(param_1,param_3,param_4,param_5,param_10,1);
  if (iVar6 != 0) {
    local_34 = 1;
    goto cf_common_exit_004B2601;
  }
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    if ((0 < param_2) && (param_2 < 0x29)) {
      local_2c = *(int *)(&DAT_007dfbac + param_2 * 4);
      goto LAB_004b266b;
    }
    local_2c = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar11 = g_worldGrid._0_4_;
    this = local_30;
  }
  else {
    uVar7 = GetPlayerRaceId((byte)param_1);
    local_2c = *(int *)(&DAT_007e3f20 + ((uVar7 & 0xff) + param_2 * 3) * 4);
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_004b266b:
    uVar11 = g_worldGrid._0_4_;
    for (iVar6 = param_3 + -8; this = local_30, iVar6 <= param_3 + 8; iVar6 = iVar6 + 1) {
      if ((-1 < iVar6) && (iVar6 < (short)uVar11)) {
        for (iVar9 = param_4 + -8; iVar9 <= param_4 + 8; iVar9 = iVar9 + 1) {
          if (((-1 < iVar9) && (iVar9 < g_worldGrid.sizeY)) &&
             (iVar13 = 0, 0 < g_worldGrid.sizeZ + -1)) {
            do {
              sVar4 = (short)iVar6;
              if ((((sVar4 < 0) || ((short)uVar11 <= sVar4)) ||
                  ((sVar5 = (short)iVar9, sVar5 < 0 ||
                   ((g_worldGrid.sizeY <= sVar5 || (sVar12 = (short)iVar13, sVar12 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar12)) {
                this = (STWorldObject *)0x0;
              }
              else {
                this = g_worldGrid.cells
                       [(int)sVar5 * (int)(short)uVar11 + (int)sVar12 * (int)g_worldGrid.planeStride
                        + (int)sVar4].objects[0];
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if (((this != (STWorldObject *)0x0) && (this[1].vtable < (STWorldObjectVTable *)0x8))
                 && (((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                      ((byte)(&DAT_008087e9)[(int)this[1].vtable * 0x51] < 8)) &&
                     (iVar8 = (*this->vtable->GetObjectTypeId)(this), uVar11 = g_worldGrid._0_4_,
                     iVar8 == 0x6f)))) {
                bVar2 = *(byte *)&this[1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_004b281d:
                    iVar8 = 0;
                  }
                  else {
                    uVar7 = param_1 & 0xff;
                    bVar3 = g_playerRelationMatrix[bVar2][uVar7];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[uVar7][bVar2] == 0)) {
                      iVar8 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[uVar7][bVar2] == 0)) {
                      iVar8 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[uVar7][bVar2] == 1)) {
                      iVar8 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[uVar7][bVar2] != 1))
                      goto LAB_004b281d;
                      iVar8 = 2;
                    }
                  }
                  bVar15 = iVar8 < 0;
                }
                else {
                  bVar15 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar2 * 0x51];
                }
                if ((bVar15) && (local_2c < *(int *)&this[0x22].field_0x8)) goto LAB_004b288e;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < g_worldGrid.sizeZ + -1);
          }
        }
      }
    }
  }
LAB_004b288e:
  local_30 = this;
  if (local_30 == (STWorldObject *)0x0) {
    if (*param_10 != 0) {
      *param_10 = 0;
      local_34 = 1;
      goto cf_common_exit_004B2601;
    }
    local_48 = 0;
  }
  else {
    puVar1 = &local_30[0x22].field_0x8;
    *(int *)puVar1 = *(int *)puVar1 - local_2c;
    if (*(int *)puVar1 < 0) {
      *(undefined4 *)&local_30[0x22].field_0x8 = 0;
    }
    *(uint *)&local_30[0x22].field_0xc = PTR_00802a38->field_00E4;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar11 = g_worldGrid._0_4_;
  }
  local_28 = 1;
  iVar6 = param_4 - param_3;
  local_64 = param_3;
  while( true ) {
    local_64 = local_64 + 1;
    local_68 = param_3 + -1;
    sVar4 = g_worldGrid.sizeY;
    if (g_worldGrid.sizeY < (short)uVar11) {
      sVar4 = (short)uVar11;
    }
    if (sVar4 <= local_28) break;
    iVar9 = 0;
    if (0 < g_worldGrid.sizeZ + -1) {
      do {
        if (local_68 <= local_64) {
          piVar14 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          iVar13 = local_68;
          do {
            if ((-1 < iVar13) && (iVar13 < (short)uVar11)) {
              iVar8 = local_68 + iVar6;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((-1 < iVar8) &&
                 ((iVar8 < g_worldGrid.sizeY &&
                  (iVar10 = thunk_FUN_004b2390(param_1,iVar13,iVar8,iVar9,param_10,local_48),
                  uVar11 = g_worldGrid._0_4_, iVar10 != 0)))) {
                *piVar14 = iVar13;
                piVar14[1] = iVar8;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              iVar8 = local_64 + iVar6;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if (((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) &&
                 (iVar10 = thunk_FUN_004b2390(param_1,iVar13,iVar8,iVar9,param_10,local_48),
                 uVar11 = g_worldGrid._0_4_, iVar10 != 0)) {
                *piVar14 = iVar13;
                piVar14[1] = iVar8;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 <= local_64);
        }
        iVar13 = iVar6 + 1 + local_68;
        iVar8 = iVar6 + -1 + local_64;
        if (iVar13 <= iVar8) {
          piVar14 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          do {
            if ((-1 < iVar13) && (iVar13 < g_worldGrid.sizeY)) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((-1 < local_68) &&
                 ((local_68 < (short)uVar11 &&
                  (iVar10 = thunk_FUN_004b2390(param_1,local_68,iVar13,iVar9,param_10,local_48),
                  uVar11 = g_worldGrid._0_4_, iVar10 != 0)))) {
                *piVar14 = local_68;
                piVar14[1] = iVar13;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if (((-1 < local_64) && (local_64 < (short)uVar11)) &&
                 (iVar10 = thunk_FUN_004b2390(param_1,local_64,iVar13,iVar9,param_10,local_48),
                 uVar11 = g_worldGrid._0_4_, iVar10 != 0)) {
                *piVar14 = local_64;
                piVar14[1] = iVar13;
                piVar14[2] = iVar9;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 <= iVar8);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < g_worldGrid.sizeZ + -1);
    }
    local_28 = local_28 + 1;
    param_3 = local_68;
  }
cf_common_exit_004B2601:
  if (local_34 != 0) {
    if (local_34 < 2) {
      local_34 = 0;
    }
    else {
      local_34 = param_9 % local_34;
    }
    local_34 = local_34 * 0xc;
    *param_6 = *(undefined4 *)(&stack0xffffff7c + local_34);
    *param_7 = *(undefined4 *)(&stack0xffffff80 + local_34);
    *param_8 = *(undefined4 *)(&stack0xffffff84 + local_34);
  }
  ExceptionList = local_14;
  return 0;
}

