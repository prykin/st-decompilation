
int __thiscall thunk_FUN_005feb60(void *this,int param_1,int param_2,int param_3)

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
  uint auStack_90 [11];
  int iStack_64;
  int iStack_60;
  int iStack_58;
  int iStack_50;
  int iStack_44;
  short asStack_30 [2];
  short asStack_2c [4];
  int iStack_24;
  short asStack_20 [2];
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_0079c9a0;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff64;
  iVar12 = 0;
  sVar13 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iStack_50 = (short)(((short)(param_3 / 200) + sVar13) -
                       (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_50 = (int)(short)(((short)(param_3 / 200) + sVar13) -
                            (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if (iStack_50 < 1) {
    iVar12 = 0;
  }
  else {
    sVar13 = *(short *)((int)this + 0x21a);
    if (sVar13 < 0) {
      iStack_64 = (short)((sVar13 / 0xc9 + (sVar13 >> 0xf)) -
                         (short)((longlong)(int)sVar13 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iStack_64 = (int)(short)((sVar13 / 0xc9 + (sVar13 >> 0xf)) -
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
    uStack_8 = 0;
    ExceptionList = &pvStack_14;
    Library::MSVCRT::FUN_0072da40();
    uStack_8 = 0xffffffff;
    iStack_44 = 0;
    puStack_1c = &stack0xffffff64;
    puVar5 = &stack0xffffff64;
    if (0 < iStack_50) {
      do {
        iVar7 = iStack_50 - iStack_44;
        iVar11 = iVar14 - iVar7;
        iStack_24 = iStack_64 - iVar7;
        iStack_60 = iVar7 + 1 + iVar14;
        iStack_58 = iVar7 + 1 + iStack_64;
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        if (iStack_24 < 0) {
          iStack_24 = 0;
        }
        if (DAT_007fb242 < iStack_60) {
          iStack_60 = (int)DAT_007fb242;
        }
        if (DAT_007fb240 < iStack_58) {
          iStack_58 = (int)DAT_007fb240;
        }
        for (; iVar7 = iStack_24, iVar11 < iStack_60; iVar11 = iVar11 + 1) {
          for (; iVar7 < iStack_58; iVar7 = iVar7 + 1) {
            sVar13 = (short)iVar7;
            if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar6 = (short)iVar11, sVar6 < 0))
                || ((DAT_007fb242 <= sVar6 || (sVar10 = (short)iStack_44, sVar10 < 0)))) ||
               (DAT_007fb244 <= sVar10)) {
              this_00 = (int *)0x0;
            }
            else {
              this_00 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar10 + (int)DAT_007fb240 * (int)sVar6 +
                                 (int)sVar13) * 8);
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
                thunk_FUN_00416270(this_00,asStack_20,asStack_30,asStack_2c);
                iVar8 = FUN_006acf90(param_1,param_2,(int)asStack_20[0],(int)asStack_30[0]);
                iVar8 = thunk_FUN_005fe990(param_3 - asStack_2c[0],iVar8);
                if (iVar8 != 0) {
                  iVar8 = 0;
                  if (0 < iVar12) {
                    do {
                      if (((uint)*(ushort *)((int)this_00 + 0x32) == auStack_90[iVar8 * 6 + -3]) &&
                         (this_00[9] == auStack_90[iVar8 * 6 + -1])) goto LAB_005fef0e;
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < iVar12);
                  }
                  auStack_90[iVar12 * 6 + -1] = this_00[9];
                  auStack_90[iVar12 * 6 + -3] = (uint)*(ushort *)((int)this_00 + 0x32);
                  uVar9 = (**(code **)(*this_00 + 0x2c))();
                  auStack_90[iVar12 * 6 + -2] = uVar9;
                  auStack_90[iVar12 * 6] = *(uint *)((int)this_00 + 0x215);
                  auStack_90[iVar12 * 6 + 1] = *(uint *)((int)this_00 + 0x219);
                  iVar12 = iVar12 + 1;
                }
              }
            }
LAB_005fef0e:
          }
        }
        iStack_44 = iStack_44 + 1;
        puVar5 = puStack_1c;
      } while (iStack_44 < iStack_50);
    }
    puStack_1c = puVar5;
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
  ExceptionList = pvStack_14;
  return iVar12;
}

