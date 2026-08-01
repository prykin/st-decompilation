
int __thiscall FUN_005feb60(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  undefined4 *puVar15;
  STWorldObject *this_00;
  undefined4 *puVar16;
  bool bVar17;
  uint local_90 [11];
  int local_64;
  int local_60;
  int local_58;
  int local_50;
  int local_44;
  short local_30 [2];
  short local_2c [4];
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079c9a0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff64;
  iVar12 = 0;
  sVar13 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    local_50 = (short)(((short)(param_3 / 200) + sVar13) -
                      (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_50 = (int)(short)(((short)(param_3 / 200) + sVar13) -
                           (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if (local_50 < 1) {
    iVar12 = 0;
  }
  else {
    sVar13 = *(short *)((int)this + 0x21a);
    if (sVar13 < 0) {
      local_64 = (short)((sVar13 / 0xc9 + (sVar13 >> 0xf)) -
                        (short)((longlong)(int)sVar13 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_64 = (int)(short)((sVar13 / 0xc9 + (sVar13 >> 0xf)) -
                             (short)((longlong)(int)sVar13 * 0x28c1979 >> 0x3f));
    }
    sVar13 = *(short *)((int)this + 0x21c);
    if (sVar13 < 0) {
      iVar14 = (short)((sVar13 / 0xc9 + (sVar13 >> 0xf)) -
                      (short)((longlong)(int)sVar13 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar14 = (int)(short)((sVar13 / 0xc9 + (sVar13 >> 0xf)) -
                           (short)((longlong)(int)sVar13 * 0x28c1979 >> 0x3f));
    }
    local_8 = 0;
    ExceptionList = &local_14;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    local_44 = 0;
    local_1c = &stack0xffffff64;
    puVar4 = &stack0xffffff64;
    if (0 < local_50) {
      do {
        iVar6 = local_50 - local_44;
        iVar11 = iVar14 - iVar6;
        local_24 = local_64 - iVar6;
        local_60 = iVar6 + 1 + iVar14;
        local_58 = iVar6 + 1 + local_64;
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        if (local_24 < 0) {
          local_24 = 0;
        }
        if (g_worldGrid.sizeY < local_60) {
          local_60 = (int)g_worldGrid.sizeY;
        }
        if (g_worldGrid.sizeX < local_58) {
          local_58 = (int)g_worldGrid.sizeX;
        }
        for (; iVar6 = local_24, iVar11 < local_60; iVar11 = iVar11 + 1) {
          for (; iVar6 < local_58; iVar6 = iVar6 + 1) {
            sVar13 = (short)iVar6;
            if (((((sVar13 < 0) || (g_worldGrid.sizeX <= sVar13)) ||
                 (sVar5 = (short)iVar11, sVar5 < 0)) ||
                ((g_worldGrid.sizeY <= sVar5 || (sVar10 = (short)local_44, sVar10 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar10)) {
              this_00 = (STWorldObject *)0x0;
            }
            else {
              this_00 = g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar10 +
                         (int)g_worldGrid.sizeX * (int)sVar5 + (int)sVar13].objects[0];
            }
            if (((this_00 != (STWorldObject *)0x0) &&
                (iVar7 = (*this_00->vtable[5].slots_00_28[0])(), iVar7 != 0)) &&
               ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
                 ((byte)(&DAT_008087e9)[(int)this_00[1].vtable * 0x51] < 8)))))) {
              bVar1 = *(byte *)&this_00[1].vtable;
              bVar2 = *(byte *)((int)this + 0x24);
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_005fee45:
                  iVar7 = 0;
                }
                else {
                  bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                  if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar7 = -2;
                  }
                  else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar7 = -1;
                  }
                  else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                    iVar7 = 1;
                  }
                  else {
                    if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                    goto LAB_005fee45;
                    iVar7 = 2;
                  }
                }
                bVar17 = iVar7 < 0;
              }
              else {
                bVar17 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
              }
              if ((bVar17) && (iVar7 = (*this_00->vtable[5].slots_00_28[2])(), iVar7 != 0)) {
                thunk_FUN_00416270(this_00,local_20,(int *)local_30,(int *)local_2c);
                iVar7 = FUN_006acf90(param_1,param_2,(int)local_20[0],(int)local_30[0]);
                iVar7 = thunk_FUN_005fe990(param_3 - local_2c[0],iVar7);
                if (iVar7 != 0) {
                  iVar7 = 0;
                  if (0 < iVar12) {
                    do {
                      if (((uint)*(ushort *)&this_00[1].field_0xe == local_90[iVar7 * 6 + -3]) &&
                         (this_00[1].vtable == (STWorldObjectVTable *)local_90[iVar7 * 6 + -1]))
                      goto LAB_005fef0e;
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < iVar12);
                  }
                  local_90[iVar12 * 6 + -1] = (uint)this_00[1].vtable;
                  local_90[iVar12 * 6 + -3] = (uint)*(ushort *)&this_00[1].field_0xe;
                  uVar8 = this_00->GetObjectTypeId();
                  local_90[iVar12 * 6 + -2] = uVar8;
                  local_90[iVar12 * 6] = *(uint *)&this_00[0xe].field_0x1d;
                  local_90[iVar12 * 6 + 1] = *(uint *)((int)&this_00[0xe].value_20 + 1);
                  iVar12 = iVar12 + 1;
                }
              }
            }
LAB_005fef0e:
          }
        }
        local_44 = local_44 + 1;
        puVar4 = local_1c;
      } while (local_44 < local_50);
    }
    local_1c = puVar4;
    if (iVar12 != 0) {
      *(int *)((int)this + 0x237) = iVar12;
      pvVar9 = Library::DKW::LIB::MemAlloc(iVar12 * 0x18);
      *(void **)((int)this + 0x23b) = pvVar9;
      pvVar9 = Library::DKW::LIB::MemAlloc(iVar12 * 4);
      *(void **)((int)this + 0x23f) = pvVar9;
      puVar15 = (undefined4 *)&stack0xffffff64;
      puVar16 = *(undefined4 **)((int)this + 0x23b);
      for (iVar14 = (iVar12 * 3 & 0x1fffffffU) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      iVar14 = 0;
      if (0 < iVar12) {
        do {
          *(int *)(*(int *)((int)this + 0x23f) + iVar14 * 4) = iVar14;
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar12);
      }
      if (*(int *)((int)this + 0x226) < iVar12) {
        thunk_FUN_005ff150(*(int *)((int)this + 0x23b),*(int **)((int)this + 0x23f),iVar12);
      }
    }
  }
  ExceptionList = local_14;
  return iVar12;
}

