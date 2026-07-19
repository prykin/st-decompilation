
undefined4 __thiscall
thunk_FUN_00618240(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  short asStack_84 [2];
  int iStack_80;
  int *piStack_6c;
  int iStack_64;
  undefined1 *puStack_60;
  int iStack_5c;
  int aiStack_58 [2];
  short asStack_50 [2];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  int iStack_24;
  short asStack_20 [2];
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_0079cec0;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff58;
  piVar18 = (int *)&stack0xffffff58;
  uStack_4c = 0;
  if (param_4 == (undefined4 *)0x0) {
    uStack_4c = 0;
  }
  else {
    sVar15 = (short)(param_1 >> 0x1f);
    if (param_1 < 0) {
      iVar17 = (short)(((short)(param_1 / 0xc9) + sVar15) -
                      (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar17 = (int)(short)(((short)(param_1 / 0xc9) + sVar15) -
                           (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    }
    sVar15 = (short)(param_2 >> 0x1f);
    if (param_2 < 0) {
      iVar11 = (short)(((short)(param_2 / 0xc9) + sVar15) -
                      (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(param_2 / 0xc9) + sVar15) -
                           (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    }
    sVar15 = (short)(param_3 >> 0x1f);
    if (param_3 < 0) {
      iVar6 = (short)(((short)(param_3 / 200) + sVar15) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(param_3 / 200) + sVar15) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
    }
    if (((((-1 < iVar17) && (-1 < iVar11)) && (-1 < iVar6)) &&
        ((iVar14 = (int)DAT_007fb240, iVar17 < iVar14 &&
         (iVar13 = (int)DAT_007fb242, iVar11 < iVar13)))) && (iVar6 < 5)) {
      iStack_2c = iVar11 + -5;
      if (iStack_2c < 0) {
        iStack_2c = 0;
      }
      iVar6 = iStack_2c;
      iStack_24 = iVar17 + -5;
      if (iStack_24 < 0) {
        iStack_24 = 0;
      }
      iStack_64 = iVar11 + 6;
      if (iVar13 < iVar11 + 6) {
        iStack_64 = iVar13;
      }
      iStack_5c = iVar17 + 6;
      if (iVar14 < iVar17 + 6) {
        iStack_5c = iVar14;
      }
      iVar17 = 0;
      uStack_8 = 0;
      ExceptionList = &pvStack_14;
      Library::MSVCRT::FUN_0072da40();
      puStack_60 = &stack0xffffff58;
      puStack_1c = &stack0xffffff58;
      Library::MSVCRT::FUN_0072da40();
      uStack_8 = 0xffffffff;
      iStack_34 = 0;
      piStack_6c = (int *)&stack0xffffff58;
      puStack_1c = &stack0xffffff58;
      do {
        iVar11 = iStack_34;
        iVar14 = iVar6;
        iStack_38 = iVar6;
        if (iVar6 < iStack_64) {
          do {
            iStack_80 = iStack_24;
            iVar14 = iStack_24;
            iStack_38 = iVar6;
            if (iStack_24 < iStack_5c) {
              do {
                sVar15 = (short)iVar14;
                if (((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
                   ((sVar10 = (short)iVar6, sVar10 < 0 ||
                    (((DAT_007fb242 <= sVar10 || (sVar12 = (short)iVar11, sVar12 < 0)) ||
                     (DAT_007fb244 <= sVar12)))))) {
                  piVar18 = (int *)0x0;
                }
                else {
                  piVar18 = *(int **)(DAT_007fb248 +
                                     ((int)DAT_007fb246 * (int)sVar12 +
                                      (int)DAT_007fb240 * (int)sVar10 + (int)sVar15) * 8);
                  iVar11 = iStack_34;
                }
                if (((piVar18 != (int *)0x0) &&
                    (iStack_80 = iVar14, iVar13 = (**(code **)(*piVar18 + 0xf0))(),
                    iVar6 = iStack_38, iVar11 = iStack_34, iVar13 != 0)) &&
                   (((uint)piVar18[9] < 8 &&
                    ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar18[9] * 0x51] < 8)))))) {
                  bVar2 = *(byte *)(piVar18 + 9);
                  bVar3 = *(byte *)((int)this + 0x20);
                  if (DAT_00808a8f == '\0') {
                    if (bVar2 == bVar3) {
LAB_0061856a:
                      iVar13 = 0;
                    }
                    else {
                      uVar8 = (uint)bVar2;
                      uVar5 = (uint)bVar3;
                      cVar4 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar5);
                      if ((cVar4 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\0')) {
                        iVar13 = -2;
                      }
                      else if ((cVar4 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\0')) {
                        iVar13 = -1;
                      }
                      else if ((cVar4 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\x01')) {
                        iVar13 = 1;
                      }
                      else {
                        if ((cVar4 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) != '\x01'))
                        goto LAB_0061856a;
                        iVar13 = 2;
                      }
                    }
                    bVar19 = iVar13 < 0;
                  }
                  else {
                    bVar19 = (&DAT_008087ea)[(uint)bVar3 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar2 * 0x51];
                    iVar14 = iStack_80;
                  }
                  if ((bVar19) &&
                     (iVar13 = (**(code **)(*piVar18 + 0xf8))(), iVar6 = iStack_38,
                     iVar11 = iStack_34, iVar13 != 0)) {
                    thunk_FUN_00416270(piVar18,asStack_50,asStack_84,asStack_20);
                    piVar1 = (int *)(puStack_60 + iVar17 * 0x2c);
                    *piVar1 = piVar18[9];
                    iVar11 = (**(code **)(*piVar18 + 0x2c))();
                    piVar1[1] = iVar11;
                    *(int *)((int)piVar1 + 0x26) = piVar18[6];
                    *(undefined2 *)((int)piVar1 + 0x2a) = *(undefined2 *)((int)piVar18 + 0x32);
                    *(int **)((int)piVar1 + 0x1a) = piVar18;
                    *(undefined2 *)(piVar1 + 5) = (undefined2)iStack_80;
                    *(undefined2 *)((int)piVar1 + 0x16) = (undefined2)iStack_38;
                    *(undefined2 *)(piVar1 + 6) = (undefined2)iStack_34;
                    piVar1[2] = (int)asStack_50[0];
                    piVar1[3] = (int)asStack_84[0];
                    piVar1[4] = (int)asStack_20[0];
                    uVar7 = FUN_006aced8(param_1,param_2,(int)asStack_50[0],(int)asStack_84[0]);
                    *(undefined4 *)((int)piVar1 + 0x1e) = uVar7;
                    iVar17 = iVar17 + 1;
                    iVar6 = iStack_38;
                    iVar11 = iStack_34;
                    iVar14 = iStack_80;
                  }
                }
                iVar14 = iVar14 + 1;
                iStack_80 = iVar14;
              } while (iVar14 < iStack_5c);
            }
            iVar6 = iVar6 + 1;
            iVar14 = iStack_2c;
            piVar18 = piStack_6c;
            iStack_38 = iVar6;
          } while (iVar6 < iStack_64);
        }
        iStack_34 = iVar11 + 1;
        iVar6 = iVar14;
      } while (iStack_34 < 5);
      if (0 < iVar17) {
        iVar11 = 0;
        if (0 < iVar17) {
          do {
            piVar18[iVar11] = iVar11;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar17);
        }
        thunk_FUN_006189c0((int)puStack_60,piVar18,iVar17);
        aiStack_58[0] = 1000;
        iVar11 = 0;
        if (0 < iVar17) {
          do {
            piVar18 = piStack_6c;
            uVar8 = thunk_FUN_00618a50(this,*(int *)(puStack_60 + piStack_6c[iVar11] * 0x2c + 0x26),
                                       aiStack_58);
            if ((int)uVar8 < 0) {
              uStack_48 = *(undefined4 *)(puStack_60 + piVar18[iVar11] * 0x2c + 0x26);
              uStack_44 = (uint)*(ushort *)(puStack_60 + piVar18[iVar11] * 0x2c + 0x2a);
              if (*(int *)((int)this + 0x62) == 0) {
                puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,7,8,10);
                *(uint **)((int)this + 0x62) = puVar9;
              }
              uVar8 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x62),&uStack_48);
              aiStack_58[0] = 0;
              if (-1 < (int)uVar8) goto LAB_0061871c;
            }
            else {
LAB_0061871c:
              if (aiStack_58[0] < 3) {
                puVar16 = (undefined4 *)(puStack_60 + piVar18[iVar11] * 0x2c);
                for (iVar17 = 0xb; iVar17 != 0; iVar17 = iVar17 + -1) {
                  *param_4 = *puVar16;
                  puVar16 = puVar16 + 1;
                  param_4 = param_4 + 1;
                }
                ExceptionList = pvStack_14;
                return 1;
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar17);
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return uStack_4c;
}

