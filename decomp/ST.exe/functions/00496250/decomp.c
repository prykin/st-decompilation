
uint FUN_00496250(int param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  
  if (param_3 < 10) {
switchD_0049655f_caseD_0:
    return 0x7f;
  }
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    uVar13 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) - 1;
  }
  else {
    uVar13 = (uint)(short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    uVar10 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                         (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) - 1;
  }
  else {
    uVar10 = (uint)(short)(((short)(param_2 / 0xc9) + sVar1) -
                          (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar12 = (short)(((short)(param_3 / 200) + sVar1) -
                    (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar12 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                         (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((-1 < (int)uVar13) && ((int)uVar13 <= (int)g_worldGrid.sizeX)) && (-1 < (int)uVar10)) &&
     ((((int)uVar10 <= (int)g_worldGrid.sizeY && (-1 < iVar12)) &&
      ((iVar12 <= g_worldGrid.sizeZ &&
       (sVar1 = g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * uVar10 + uVar13 + g_pathingGrid.planeStride * iVar12],
       sVar1 != 0)))))) {
    if (sVar1 == -1) {
      return 0x7f;
    }
    if ((sVar1 == -2) || (sVar1 == -0x4001)) {
      iVar8 = (int)DAT_00806750[1] * (int)*DAT_00806750;
      iVar11 = iVar12 + 1;
      iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
      if (iVar11 < 6) {
        piVar14 = (int *)((int)DAT_00806750 +
                         (((int)uVar10 >> 1) * ((int)*DAT_00806750 / 2) + iVar11 * iVar8 +
                         ((int)uVar13 >> 1)) * 4 + 0x459);
        while (iVar3 = *piVar14, iVar3 == 0) {
          iVar11 = iVar11 + 1;
          piVar14 = piVar14 + iVar8;
          if (5 < iVar11) {
            return 0xffffffff;
          }
        }
        sVar1 = *(short *)(iVar3 + 8);
        iVar11 = (int)sVar1;
        iVar8 = iVar11 - (uint)*(byte *)(iVar3 + 0x48);
        if (iVar12 < iVar8) {
          return 0xffffffff;
        }
        uVar2 = *(ushort *)(iVar3 + 0x4e);
        if ((uVar2 & 0x4000) != 0) {
          return 0x7f;
        }
        iVar4 = PTR_00807598->field_0380;
        if (sVar1 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = PTR_00807598->field_0384 * iVar8;
        }
        if ((int)(*(byte *)(*(int *)(iVar3 + 0x40) +
                            iVar4 * (((iVar4 * param_2) / 0xc9) % (iVar4 * 2)) * 2 +
                           ((iVar4 * param_1) / 0xc9) % (iVar4 * 2)) + 4 + iVar8) <
            ((param_3 + 400) * 0x100) / 0x640) {
          return 0xffffffff;
        }
        iVar8 = (uVar13 & 0xfffffffe) * -0xc9 + param_1;
        iVar6 = iVar8 / 100;
        iVar4 = (uVar10 & 0xfffffffe) * -0xc9 + param_2;
        iVar7 = iVar4 / 100;
        if ((uVar2 & 0x2000) != 0) {
          uVar10 = uVar10 & 1;
          uVar13 = uVar13 & 1;
          bVar9 = ((char)sVar1 - (char)iVar12) - 1;
          uVar5 = *(uint *)(iVar3 + 0x2c + (uVar13 + uVar10 * 2) * 4);
          if ((uVar5 & 8 >> (bVar9 & 0x1f)) == 0) {
            return 0xffffffff;
          }
          if ((uVar5 & 0x80 >> (bVar9 & 0x1f)) != 0) {
            return 0x7f;
          }
          switch(uVar2 & 0xf) {
          case 0:
            goto switchD_0049655f_caseD_0;
          case 1:
            if (iVar6 == iVar7) {
              return 3;
            }
            if (iVar6 < 3) {
              return (2 < iVar7) + 3;
            }
            return 2;
          case 2:
            if (3 - iVar6 == iVar7) {
              return 5;
            }
            if (iVar6 < 3) {
              return (iVar7 != 0) + 4;
            }
            return 6;
          case 3:
            if (iVar6 != iVar7) {
              if (iVar6 != 0) {
                return -(uint)(iVar7 != 0) & 7;
              }
              return 6;
            }
            break;
          case 4:
            if (iVar6 == 3 - iVar7) {
              return 1;
            }
            if (iVar6 != 0) {
              return (uint)(iVar7 < 3);
            }
            return 2;
          case 5:
            goto cf_common_exit_0049679C;
          case 6:
switchD_0049655f_caseD_6:
            return 6;
          case 7:
            goto cf_common_exit_004967AA;
          case 8:
switchD_0049655f_caseD_8:
            return 2;
          case 9:
            if (iVar12 != iVar11) {
              return 3;
            }
            if (uVar13 != 0) {
              if (uVar10 != 0) {
                return 0x7f;
              }
              return 3;
            }
            return 3;
          case 10:
            if (iVar12 != iVar11) {
              return 5;
            }
            if (uVar13 == 0) {
              return 5;
            }
            if (uVar10 != 0) {
              return 5;
            }
            return 0x7f;
          case 0xb:
            if (((iVar12 == iVar11) && (uVar13 == 0)) && (uVar10 == 0)) {
              return 0x7f;
            }
            break;
          case 0xc:
            if (iVar12 != iVar11) {
              return 1;
            }
            if (uVar13 != 0) {
              return 1;
            }
            if (uVar10 == 0) {
              return 1;
            }
            return 0x7f;
          case 0xd:
            return ((0x192 - iVar4 <= iVar8) - 1 & 0xfffffffc) + 7;
          case 0xe:
            return ((iVar4 <= iVar8) - 1 & 4) + 1;
          default:
            goto switchD_0049655f_default;
          }
cf_common_exit_004965EF:
          return 7;
        }
        switch(iVar7) {
        case 0:
          switch(iVar6) {
          case 0:
            goto switchD_00496785_caseD_1;
          case 1:
          case 2:
            goto switchD_0049655f_caseD_8;
          case 3:
switchD_00496785_caseD_2:
            return 1;
          default:
            return 0xffffffff;
          }
        case 1:
          switch(iVar6) {
          case 0:
cf_common_exit_0049679C:
            return 4;
          case 1:
switchD_00496785_caseD_1:
            return 3;
          case 2:
            goto switchD_00496785_caseD_2;
          case 3:
cf_common_exit_004967AA:
            return 0;
          default:
            return 0xffffffff;
          }
        case 2:
          switch(iVar6) {
          case 0:
            goto cf_common_exit_0049679C;
          case 1:
switchD_004967be_caseD_0:
            return 5;
          case 2:
            goto cf_common_exit_004965EF;
          case 3:
            goto cf_common_exit_004967AA;
          }
          break;
        case 3:
          switch(iVar6) {
          case 0:
            goto switchD_004967be_caseD_0;
          case 1:
          case 2:
            goto switchD_0049655f_caseD_6;
          case 3:
            goto cf_common_exit_004965EF;
          }
        }
      }
    }
  }
switchD_0049655f_default:
  return 0xffffffff;
}

