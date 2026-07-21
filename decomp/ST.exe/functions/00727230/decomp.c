
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00727230(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  int local_10;
  int local_8;

  iVar2 = 0;
  local_8 = DAT_008570ec - DAT_00857064;
  iVar8 = 1;
  if (0 < local_8) {
    while (param_1[4] == 0) {
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 8;
      if (local_8 <= iVar2) {
        return;
      }
    }
    if (param_1[6] < 0) {
      iVar8 = -1;
    }
    if (iVar2 < local_8) {
      local_8 = local_8 - iVar2;
      local_10 = (DAT_00857064 + iVar2) * DAT_00857090 + DAT_0085708c;
      piVar4 = param_1;
      if (iVar8 < 0) {
LAB_00727639:
        DAT_008570f0 = piVar4[4];
        if (0 < (int)DAT_008570f0) {
          iVar8 = piVar4[6];
          iVar9 = iVar8;
          if ((short)iVar8 != 0) {
            iVar9 = iVar8 + 0x10000;
          }
          DAT_008570f4 = piVar4[7];
          uVar1 = DAT_008570f4;
          iVar10 = DAT_0085709c;
          if (((int)DAT_008570f4 < 0) && (iVar10 = -DAT_0085709c, (short)DAT_008570f4 != 0)) {
            uVar1 = DAT_008570f4 + 0x10000;
          }
          DAT_00857074 = (iVar9 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c;
          uVar3 = (iVar8 >> 1) + piVar4[2];
          uVar1 = ((int)DAT_008570f4 >> 1) + piVar4[3];
          puVar14 = (undefined1 *)(*piVar4 + local_10);
          puVar11 = (undefined1 *)
                    (((int)uVar3 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c + _DAT_00857100);
          if (iVar10 < 0) {
            DAT_008570f4 = -DAT_008570f4;
            uVar1 = ~uVar1;
          }
          DAT_00857084 = -DAT_00857074 - iVar10;
          _DAT_00857088 = -DAT_00857074;
          DAT_008570f4 = DAT_008570f4 << 0x10;
          uVar1 = uVar1 << 0x10;
          uVar5 = ~uVar3 << 0x10;
          uVar6 = DAT_008570f0;
          uVar3 = iVar8 * -0x10000;
          do {
            DAT_008570f0 = uVar6;
            uVar6 = DAT_008570f0;
            DAT_008570e0 = uVar3;
            if (DAT_008570f0 < 0x10) goto LAB_007278b0;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)CARRY4(uVar1,DAT_008570f4) * -4));
            bVar16 = CARRY4(uVar1 + DAT_008570f4,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4 + DAT_008570f4;
            *puVar14 = *puVar11;
            uVar6 = uVar5 + uVar3 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5 + uVar3,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[1] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[2] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[3] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[4] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[5] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[6] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[7] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[8] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[9] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[10] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xb] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xc] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar13 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xd] = *puVar12;
            uVar7 = uVar6 + uVar3;
            iVar8 = *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xe] = *puVar13;
            uVar5 = uVar7 + uVar3;
            puVar11 = puVar13 + (-(uint)CARRY4(uVar6,uVar3) - iVar8) +
                      (-(uint)CARRY4(uVar7,uVar3) - *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            puVar14[0xf] = puVar13[-(uint)CARRY4(uVar6,uVar3) - iVar8];
            puVar14 = puVar14 + 0x10;
            uVar6 = DAT_008570f0 - 0x10;
            uVar3 = DAT_008570e0;
          } while (DAT_008570f0 - 0x10 != 0);
        }
        goto LAB_007278ce;
      }
      do {
        DAT_008570f0 = piVar4[4];
        if (0 < (int)DAT_008570f0) {
          iVar8 = piVar4[6];
          DAT_008570f4 = piVar4[7];
          uVar1 = DAT_008570f4;
          iVar9 = DAT_0085709c;
          if (((int)DAT_008570f4 < 0) && (iVar9 = -DAT_0085709c, (short)DAT_008570f4 != 0)) {
            uVar1 = DAT_008570f4 + 0x10000;
          }
          DAT_00857074 = (iVar8 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c;
          iVar10 = (iVar8 >> 1) + piVar4[2];
          uVar1 = ((int)DAT_008570f4 >> 1) + piVar4[3];
          puVar14 = (undefined1 *)(*piVar4 + local_10);
          puVar11 = (undefined1 *)
                    ((iVar10 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c + _DAT_00857100);
          if (iVar9 < 0) {
            DAT_008570f4 = -DAT_008570f4;
            uVar1 = ~uVar1;
          }
          DAT_00857084 = iVar9 + DAT_00857074;
          DAT_008570f4 = DAT_008570f4 << 0x10;
          uVar5 = iVar10 * 0x10000;
          uVar1 = uVar1 << 0x10;
          uVar6 = DAT_008570f0;
          _DAT_00857088 = DAT_00857074;
          uVar3 = iVar8 << 0x10;
          do {
            DAT_008570f0 = uVar6;
            DAT_008570e0 = uVar3;
            if (DAT_008570f0 < 0x10) {
              uVar6 = DAT_008570f0;
              if (DAT_008570f0 < 8) goto LAB_007275f0;
              puVar12 = puVar11 + (uint)CARRY4(uVar5,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)CARRY4(uVar1,DAT_008570f4) * -4);
              bVar16 = CARRY4(uVar1 + DAT_008570f4,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4 + DAT_008570f4;
              *puVar14 = *puVar11;
              uVar6 = uVar5 + uVar3 + uVar3;
              puVar11 = puVar12 + (uint)CARRY4(uVar5 + uVar3,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[1] = *puVar12;
              uVar5 = uVar6 + uVar3;
              puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[2] = *puVar11;
              uVar6 = uVar5 + uVar3;
              puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[3] = *puVar12;
              uVar5 = uVar6 + uVar3;
              puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[4] = *puVar11;
              uVar6 = uVar5 + uVar3;
              puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[5] = *puVar12;
              uVar7 = uVar6 + uVar3;
              iVar8 = *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[6] = *puVar11;
              uVar5 = uVar7 + uVar3;
              puVar14[7] = puVar11[(uint)CARRY4(uVar6,uVar3) + iVar8];
              puVar11 = puVar11 + (uint)CARRY4(uVar6,uVar3) + iVar8 +
                        (uint)CARRY4(uVar7,uVar3) + *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              puVar14 = puVar14 + 8;
              uVar6 = DAT_008570f0 - 8;
              if (uVar6 != 0) {
LAB_007275f0:
                do {
                  bVar16 = CARRY4(uVar1,DAT_008570f4);
                  uVar1 = uVar1 + DAT_008570f4;
                  bVar17 = CARRY4(uVar5,DAT_008570e0);
                  uVar5 = uVar5 + DAT_008570e0;
                  *puVar14 = *puVar11;
                  puVar11 = puVar11 + (uint)bVar17 + *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
                  uVar3 = uVar6 - 1;
                  bVar16 = 0 < (int)uVar6;
                  uVar6 = uVar3;
                  puVar14 = puVar14 + 1;
                } while (uVar3 != 0 && bVar16);
              }
              break;
            }
            puVar12 = puVar11 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)CARRY4(uVar1,DAT_008570f4) * -4);
            bVar16 = CARRY4(uVar1 + DAT_008570f4,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4 + DAT_008570f4;
            *puVar14 = *puVar11;
            uVar6 = uVar5 + uVar3 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5 + uVar3,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[1] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[2] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[3] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[4] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[5] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[6] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[7] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[8] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[9] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[10] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xb] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xc] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xd] = *puVar12;
            uVar7 = uVar6 + uVar3;
            iVar8 = *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xe] = *puVar11;
            uVar5 = uVar7 + uVar3;
            puVar14[0xf] = puVar11[(uint)CARRY4(uVar6,uVar3) + iVar8];
            puVar11 = puVar11 + (uint)CARRY4(uVar6,uVar3) + iVar8 +
                      (uint)CARRY4(uVar7,uVar3) + *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            puVar14 = puVar14 + 0x10;
            uVar6 = DAT_008570f0 - 0x10;
            uVar3 = DAT_008570e0;
          } while (DAT_008570f0 - 0x10 != 0);
        }
        local_10 = local_10 + DAT_00857090;
        iVar8 = local_8 + -1;
        bVar16 = 0 < local_8;
        piVar4 = piVar4 + 8;
        local_8 = iVar8;
      } while (iVar8 != 0 && bVar16);
LAB_007278f0:
      piVar4 = param_1;
      param_1 = (int *)(DAT_0085707c + (DAT_00857064 + iVar2) * DAT_00857090 * 2);
      local_8 = (DAT_008570ec - DAT_00857064) - iVar2;
      do {
        uVar1 = piVar4[4];
        puVar15 = (uint *)(*piVar4 * 2 + (int)param_1);
        if (0 < (int)uVar1) {
          uVar3 = piVar4[1];
          iVar2 = piVar4[5];
          uVar5 = uVar1;
          if (((uint)puVar15 & 2) != 0) {
            *(short *)puVar15 = (short)(uVar3 >> 0x10);
            puVar15 = (uint *)((int)puVar15 + 2);
            uVar3 = uVar3 + iVar2;
            uVar5 = uVar1 - 1;
            if (uVar5 == 0 || (int)uVar1 < 1) goto LAB_0072797d;
          }
          while (1 < (int)uVar5) {
            uVar6 = uVar3 + iVar2;
            uVar1 = uVar3 >> 0x10;
            uVar3 = uVar6 + iVar2;
            *puVar15 = uVar1 | uVar6 & 0xffff0000;
            puVar15 = puVar15 + 1;
            uVar5 = uVar5 - 2;
          }
          if ((uVar5 - 2 & 1) != 0) {
            *(short *)puVar15 = (short)(uVar3 >> 0x10);
          }
        }
LAB_0072797d:
        param_1 = (int *)((int)param_1 + DAT_00857090 * 2);
        piVar4 = piVar4 + 8;
        iVar2 = local_8 + -1;
        bVar16 = 0 < local_8;
        local_8 = iVar2;
      } while (iVar2 != 0 && bVar16);
    }
  }
  return;
LAB_007278b0:
  do {
    bVar16 = CARRY4(uVar1,DAT_008570f4);
    uVar1 = uVar1 + DAT_008570f4;
    bVar17 = CARRY4(uVar5,DAT_008570e0);
    uVar5 = uVar5 + DAT_008570e0;
    *puVar14 = *puVar11;
    puVar14 = puVar14 + 1;
    puVar11 = puVar11 + (-(uint)bVar17 - *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
    uVar3 = uVar6 - 1;
    bVar16 = 0 < (int)uVar6;
    uVar6 = uVar3;
  } while (uVar3 != 0 && bVar16);
LAB_007278ce:
  local_10 = local_10 + DAT_00857090;
  iVar8 = local_8 + -1;
  bVar16 = local_8 < 1;
  piVar4 = piVar4 + 8;
  local_8 = iVar8;
  if (iVar8 == 0 || bVar16) goto LAB_007278f0;
  goto LAB_00727639;
}

