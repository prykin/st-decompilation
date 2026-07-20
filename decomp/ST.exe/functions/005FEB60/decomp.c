
int __thiscall FUN_005feb60(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  undefined4 *puVar15;
  int *this_00;
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
    puVar5 = &stack0xffffff64;
    if (0 < local_50) {
      do {
        iVar7 = local_50 - local_44;
        iVar11 = iVar14 - iVar7;
        local_24 = local_64 - iVar7;
        local_60 = iVar7 + 1 + iVar14;
        local_58 = iVar7 + 1 + local_64;
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        if (local_24 < 0) {
          local_24 = 0;
        }
        if (SHORT_007fb242 < local_60) {
          local_60 = (int)SHORT_007fb242;
        }
        if (SHORT_007fb240 < local_58) {
          local_58 = (int)SHORT_007fb240;
        }
        for (; iVar7 = local_24, iVar11 < local_60; iVar11 = iVar11 + 1) {
          for (; iVar7 < local_58; iVar7 = iVar7 + 1) {
            sVar13 = (short)iVar7;
            if (((((sVar13 < 0) || (SHORT_007fb240 <= sVar13)) || (sVar6 = (short)iVar11, sVar6 < 0)
                 ) || ((SHORT_007fb242 <= sVar6 || (sVar10 = (short)local_44, sVar10 < 0)))) ||
               (SHORT_007fb244 <= sVar10)) {
              this_00 = (int *)0x0;
            }
            else {
              this_00 = *(int **)(DAT_007fb248 +
                                 ((int)SHORT_007fb246 * (int)sVar10 +
                                  (int)SHORT_007fb240 * (int)sVar6 + (int)sVar13) * 8);
            }
            if (((this_00 != (int *)0x0) && (iVar8 = (**(code **)(*this_00 + 0xf0))(), iVar8 != 0))
               && (((uint)this_00[9] < 8 &&
                   ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[this_00[9] * 0x51] < 8)))))) {
              bVar1 = *(byte *)(this_00 + 9);
              bVar2 = *(byte *)((int)this + 0x24);
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_005fee45:
                  iVar8 = 0;
                }
                else {
                  uVar9 = (uint)bVar1;
                  uVar4 = (uint)bVar2;
                  cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4);
                  if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0')
                     ) {
                    iVar8 = -2;
                  }
                  else if ((cVar3 == '\x01') &&
                          (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0')) {
                    iVar8 = -1;
                  }
                  else if ((cVar3 == '\0') &&
                          (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\x01')) {
                    iVar8 = 1;
                  }
                  else {
                    if ((cVar3 != '\x01') ||
                       (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) != '\x01'))
                    goto LAB_005fee45;
                    iVar8 = 2;
                  }
                }
                bVar17 = iVar8 < 0;
              }
              else {
                bVar17 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
              }
              if ((bVar17) && (iVar8 = (**(code **)(*this_00 + 0xf8))(), iVar8 != 0)) {
                thunk_FUN_00416270(this_00,local_20,(int *)local_30,(int *)local_2c);
                iVar8 = FUN_006acf90(param_1,param_2,(int)local_20[0],(int)local_30[0]);
                iVar8 = thunk_FUN_005fe990(param_3 - local_2c[0],iVar8);
                if (iVar8 != 0) {
                  iVar8 = 0;
                  if (0 < iVar12) {
                    do {
                      if (((uint)*(ushort *)((int)this_00 + 0x32) == local_90[iVar8 * 6 + -3]) &&
                         (this_00[9] == local_90[iVar8 * 6 + -1])) goto LAB_005fef0e;
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < iVar12);
                  }
                  local_90[iVar12 * 6 + -1] = this_00[9];
                  local_90[iVar12 * 6 + -3] = (uint)*(ushort *)((int)this_00 + 0x32);
                  uVar9 = (**(code **)(*this_00 + 0x2c))();
                  local_90[iVar12 * 6 + -2] = uVar9;
                  local_90[iVar12 * 6] = *(uint *)((int)this_00 + 0x215);
                  local_90[iVar12 * 6 + 1] = *(uint *)((int)this_00 + 0x219);
                  iVar12 = iVar12 + 1;
                }
              }
            }
LAB_005fef0e:
          }
        }
        local_44 = local_44 + 1;
        puVar5 = local_1c;
      } while (local_44 < local_50);
    }
    local_1c = puVar5;
    if (iVar12 != 0) {
      *(int *)((int)this + 0x237) = iVar12;
      iVar14 = Library::DKW::LIB::FUN_006aac70(iVar12 * 0x18);
      *(int *)((int)this + 0x23b) = iVar14;
      iVar14 = Library::DKW::LIB::FUN_006aac70(iVar12 * 4);
      *(int *)((int)this + 0x23f) = iVar14;
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

