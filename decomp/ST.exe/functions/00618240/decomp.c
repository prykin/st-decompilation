
undefined4 __thiscall
FUN_00618240(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  undefined4 *puVar14;
  int iVar15;
  STWorldObject *this_00;
  int *piVar16;
  bool bVar17;
  short local_84 [2];
  int local_80;
  int *local_6c;
  int local_64;
  undefined1 *local_60;
  int local_5c;
  int local_58 [2];
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_38;
  int local_34;
  int local_2c;
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079cec0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff58;
  piVar16 = (int *)&stack0xffffff58;
  local_4c = 0;
  if (param_4 == (undefined4 *)0x0) {
    local_4c = 0;
  }
  else {
    sVar13 = (short)(param_1 >> 0x1f);
    if (param_1 < 0) {
      iVar15 = (short)(((short)(param_1 / 0xc9) + sVar13) -
                      (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar15 = (int)(short)(((short)(param_1 / 0xc9) + sVar13) -
                           (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    }
    sVar13 = (short)(param_2 >> 0x1f);
    if (param_2 < 0) {
      iVar9 = (short)(((short)(param_2 / 0xc9) + sVar13) -
                     (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(param_2 / 0xc9) + sVar13) -
                          (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    }
    sVar13 = (short)(param_3 >> 0x1f);
    if (param_3 < 0) {
      iVar4 = (short)(((short)(param_3 / 200) + sVar13) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(param_3 / 200) + sVar13) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
    }
    if (((((-1 < iVar15) && (-1 < iVar9)) && (-1 < iVar4)) &&
        ((iVar12 = (int)g_worldGrid.sizeX, iVar15 < iVar12 &&
         (iVar11 = (int)g_worldGrid.sizeY, iVar9 < iVar11)))) && (iVar4 < 5)) {
      local_2c = iVar9 + -5;
      if (local_2c < 0) {
        local_2c = 0;
      }
      iVar4 = local_2c;
      local_24 = iVar15 + -5;
      if (local_24 < 0) {
        local_24 = 0;
      }
      local_64 = iVar9 + 6;
      if (iVar11 < iVar9 + 6) {
        local_64 = iVar11;
      }
      local_5c = iVar15 + 6;
      if (iVar12 < iVar15 + 6) {
        local_5c = iVar12;
      }
      iVar15 = 0;
      local_8 = 0;
      ExceptionList = &local_14;
      Library::MSVCRT::FUN_0072da40();
      local_60 = &stack0xffffff58;
      local_1c = &stack0xffffff58;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_34 = 0;
      local_6c = (int *)&stack0xffffff58;
      local_1c = &stack0xffffff58;
      do {
        iVar9 = local_34;
        iVar12 = iVar4;
        local_38 = iVar4;
        if (iVar4 < local_64) {
          do {
            local_80 = local_24;
            iVar12 = local_24;
            local_38 = iVar4;
            if (local_24 < local_5c) {
              do {
                sVar13 = (short)iVar12;
                if (((sVar13 < 0) || (g_worldGrid.sizeX <= sVar13)) ||
                   ((sVar8 = (short)iVar4, sVar8 < 0 ||
                    (((g_worldGrid.sizeY <= sVar8 || (sVar10 = (short)iVar9, sVar10 < 0)) ||
                     (g_worldGrid.sizeZ <= sVar10)))))) {
                  this_00 = (STWorldObject *)0x0;
                }
                else {
                  this_00 = g_worldGrid.cells
                            [(int)g_worldGrid.planeStride * (int)sVar10 +
                             (int)g_worldGrid.sizeX * (int)sVar8 + (int)sVar13].objects[0];
                  iVar9 = local_34;
                }
                if (((this_00 != (STWorldObject *)0x0) &&
                    (local_80 = iVar12, iVar11 = (*this_00->vtable[5].slots_00_28[0])(),
                    iVar4 = local_38, iVar9 = local_34, iVar11 != 0)) &&
                   ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                    ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                     ((byte)(&DAT_008087e9)[(int)this_00[1].vtable * 0x51] < 8)))))) {
                  bVar1 = *(byte *)&this_00[1].vtable;
                  bVar2 = *(byte *)((int)this + 0x20);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar2) {
LAB_0061856a:
                      iVar11 = 0;
                    }
                    else {
                      bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                        iVar11 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                        iVar11 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                        iVar11 = 1;
                      }
                      else {
                        if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                        goto LAB_0061856a;
                        iVar11 = 2;
                      }
                    }
                    bVar17 = iVar11 < 0;
                  }
                  else {
                    bVar17 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                    iVar12 = local_80;
                  }
                  if ((bVar17) &&
                     (iVar11 = (*this_00->vtable[5].slots_00_28[2])(), iVar4 = local_38,
                     iVar9 = local_34, iVar11 != 0)) {
                    thunk_FUN_00416270(this_00,local_50,(int *)local_84,(int *)local_20);
                    puVar14 = (undefined4 *)(local_60 + iVar15 * 0x2c);
                    *puVar14 = this_00[1].vtable;
                    iVar9 = (*this_00->vtable->GetObjectTypeId)(this_00);
                    puVar14[1] = iVar9;
                    *(undefined4 *)((int)puVar14 + 0x26) = *(undefined4 *)&this_00->field_0x18;
                    *(undefined2 *)((int)puVar14 + 0x2a) = *(undefined2 *)&this_00[1].field_0xe;
                    *(STWorldObject **)((int)puVar14 + 0x1a) = this_00;
                    *(undefined2 *)(puVar14 + 5) = (undefined2)local_80;
                    *(undefined2 *)((int)puVar14 + 0x16) = (undefined2)local_38;
                    *(undefined2 *)(puVar14 + 6) = (undefined2)local_34;
                    puVar14[2] = (int)local_50[0];
                    puVar14[3] = (int)local_84[0];
                    puVar14[4] = (int)local_20[0];
                    uVar5 = FUN_006aced8(param_1,param_2,(int)local_50[0],(int)local_84[0]);
                    *(undefined4 *)((int)puVar14 + 0x1e) = uVar5;
                    iVar15 = iVar15 + 1;
                    iVar4 = local_38;
                    iVar9 = local_34;
                    iVar12 = local_80;
                  }
                }
                iVar12 = iVar12 + 1;
                local_80 = iVar12;
              } while (iVar12 < local_5c);
            }
            iVar4 = iVar4 + 1;
            iVar12 = local_2c;
            piVar16 = local_6c;
            local_38 = iVar4;
          } while (iVar4 < local_64);
        }
        local_34 = iVar9 + 1;
        iVar4 = iVar12;
      } while (local_34 < 5);
      if (0 < iVar15) {
        iVar9 = 0;
        if (0 < iVar15) {
          do {
            piVar16[iVar9] = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar15);
        }
        thunk_FUN_006189c0((int)local_60,piVar16,iVar15);
        local_58[0] = 1000;
        iVar9 = 0;
        if (0 < iVar15) {
          do {
            piVar16 = local_6c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar6 = thunk_FUN_00618a50(this,*(int *)(local_60 + local_6c[iVar9] * 0x2c + 0x26),
                                       local_58);
            if ((int)uVar6 < 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_48 = *(undefined4 *)(local_60 + piVar16[iVar9] * 0x2c + 0x26);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_44 = (uint)*(ushort *)(local_60 + piVar16[iVar9] * 0x2c + 0x2a);
              if (*(int *)((int)this + 0x62) == 0) {
                puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,7,8,10);
                *(uint **)((int)this + 0x62) = puVar7;
              }
              uVar6 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x62),&local_48);
              local_58[0] = 0;
              if (-1 < (int)uVar6) goto LAB_0061871c;
            }
            else {
LAB_0061871c:
              if (local_58[0] < 3) {
                puVar14 = (undefined4 *)(local_60 + piVar16[iVar9] * 0x2c);
                for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
                  *param_4 = *puVar14;
                  puVar14 = puVar14 + 1;
                  param_4 = param_4 + 1;
                }
                ExceptionList = local_14;
                return 1;
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar15);
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_4c;
}

