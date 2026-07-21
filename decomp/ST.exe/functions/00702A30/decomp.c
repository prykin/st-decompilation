
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00702a30(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,uint param_14,int param_15)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  uint local_10;
  uint local_c;
  int local_8;

  _DAT_00857000 = 1;
  pbVar9 = param_8;
joined_r0x00702a47:
  param_12 = param_12 + -1;
  if (param_12 < 0) {
    return;
  }
  while (((param_14 & 1) == 0 && (param_12 = param_12 + -1, -1 < param_12))) {
    uVar4 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    iVar6 = param_9;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          pbVar9 = pbVar9 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar6 - uVar3) < 1) break;
        uVar4 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar6 = iVar6 - uVar3;
      }
    }
    param_14 = param_14 + 1;
    if (4 < (int)param_14) {
      param_14 = 0;
    }
  }
  local_c = (uint)*pbVar9;
  pbVar9 = pbVar9 + 1;
  if (local_c != 0) {
    local_8 = param_10;
    param_8 = pbVar9;
    do {
      if ((local_c & 0x80) == 0) {
        uVar4 = local_c & 0x7f;
        if (local_8 < (int)uVar4) goto LAB_00702b17;
      }
      else {
        uVar4 = local_c & 0x3f;
        if (local_8 < (int)uVar4) goto LAB_00702b17;
        if ((local_c & 0x40) == 0) {
          param_8 = param_8 + uVar4;
        }
        else {
          param_8 = param_8 + 1;
        }
      }
      local_8 = local_8 - uVar4;
      local_c = (uint)*param_8;
      param_8 = param_8 + 1;
    } while( true );
  }
  goto LAB_00702f90;
LAB_00702b17:
  uVar4 = uVar4 - local_8;
  if (((byte)local_c & 0xc0) == 0x80) {
    param_8 = param_8 + local_8;
  }
  local_8 = param_11;
  iVar6 = param_13;
  puVar8 = param_5;
  puVar11 = param_1;
  pbVar12 = param_3;
  if ((int)uVar4 <= param_11) {
    do {
      local_10 = local_c & 0x80;
      local_8 = local_8 - uVar4;
      if (local_10 == 0) {
        if (-1 < (int)(uVar4 - 1)) {
          do {
            if (((byte)iVar6 & 1) == 1) {
              puVar11 = puVar11 + 1;
              pbVar12 = pbVar12 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar6 = iVar6 + 1;
            if (4 < iVar6) {
              iVar6 = 0;
            }
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        goto LAB_00702de8;
      }
      if ((local_c & 0x40) == 0) {
        if (iVar6 < 1) {
switchD_00702c8d_default:
          if (0 < (int)uVar4) {
            pbVar9 = param_8 + 1;
            puVar7 = puVar8;
            puVar10 = puVar11;
            pbVar2 = pbVar12;
            for (iVar5 = uVar4 - 1; iVar6 = 1, puVar8 = puVar7, puVar11 = puVar10, pbVar12 = pbVar2,
                param_8 = pbVar9, 0 < iVar5; iVar5 = iVar5 + -5) {
              if (param_7 <= *puVar7) {
                *puVar10 = *(undefined1 *)((uint)*pbVar2 + param_15);
              }
              puVar8 = puVar7 + 1;
              puVar11 = puVar10 + 1;
              pbVar12 = pbVar2 + 1;
              param_8 = pbVar9 + 1;
              iVar6 = 2;
              if (iVar5 + -1 < 1) break;
              param_8 = pbVar9 + 2;
              iVar6 = 3;
              if (iVar5 + -2 < 1) break;
              if (param_7 <= *puVar8) {
                *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
              }
              puVar8 = puVar7 + 2;
              puVar11 = puVar10 + 2;
              pbVar12 = pbVar2 + 2;
              param_8 = pbVar9 + 3;
              iVar6 = 4;
              if (iVar5 + -3 < 1) break;
              param_8 = pbVar9 + 4;
              iVar6 = 0;
              if (iVar5 + -4 < 1) break;
              pbVar9 = pbVar9 + 5;
              puVar7 = puVar8;
              puVar10 = puVar11;
              pbVar2 = pbVar12;
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            param_8 = param_8 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 2;
            if ((int)uVar4 < 1) goto LAB_00702de8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00702c8d_caseD_3;
          case 4:
            goto switchD_00702c8d_caseD_4;
          default:
            goto switchD_00702c8d_default;
          }
          param_8 = param_8 + 1;
          uVar4 = uVar4 - 1;
          iVar6 = 3;
          if (0 < (int)uVar4) {
switchD_00702c8d_caseD_3:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            param_8 = param_8 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 4;
            if (0 < (int)uVar4) {
switchD_00702c8d_caseD_4:
              param_8 = param_8 + 1;
              iVar6 = 0;
              uVar4 = uVar4 - 1;
              goto switchD_00702c8d_default;
            }
          }
        }
      }
      else {
        param_8 = param_8 + 1;
        if (iVar6 < 1) {
switchD_00702b77_default:
          if (0 < (int)uVar4) {
            iVar5 = uVar4 - 1;
            iVar6 = 1;
            puVar7 = puVar8;
            puVar10 = puVar11;
            pbVar9 = pbVar12;
            if (0 < iVar5) {
              while( true ) {
                if (param_7 <= *puVar7) {
                  *puVar10 = *(undefined1 *)((uint)*pbVar9 + param_15);
                }
                puVar8 = puVar7 + 1;
                puVar11 = puVar10 + 1;
                pbVar12 = pbVar9 + 1;
                iVar6 = 2;
                if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
                if (param_7 <= *puVar8) {
                  *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
                }
                puVar8 = puVar7 + 2;
                puVar11 = puVar10 + 2;
                pbVar12 = pbVar9 + 2;
                iVar6 = 4;
                if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
                iVar5 = iVar5 + -5;
                iVar6 = 1;
                puVar7 = puVar8;
                puVar10 = puVar11;
                pbVar9 = pbVar12;
                if (iVar5 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 2;
            if ((int)uVar4 < 1) goto LAB_00702de8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00702b77_caseD_3;
          case 4:
            goto switchD_00702b77_caseD_4;
          default:
            goto switchD_00702b77_default;
          }
          uVar4 = uVar4 - 1;
          iVar6 = 3;
          if (0 < (int)uVar4) {
switchD_00702b77_caseD_3:
            if (param_7 <= *puVar8) {
              *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            pbVar12 = pbVar12 + 1;
            uVar4 = uVar4 - 1;
            iVar6 = 4;
            if (0 < (int)uVar4) {
switchD_00702b77_caseD_4:
              iVar6 = 0;
              uVar4 = uVar4 - 1;
              goto switchD_00702b77_default;
            }
          }
        }
      }
LAB_00702de8:
      if (local_8 < 1) {
        uVar4 = 0;
        break;
      }
      bVar1 = *param_8;
      local_c = (uint)bVar1;
      param_8 = param_8 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar4 = bVar1 & 0x7f;
      }
      else {
        uVar4 = bVar1 & 0x3f;
      }
    } while ((int)uVar4 <= local_8);
  }
  uVar4 = uVar4 - local_8;
  pbVar9 = param_8;
  if ((local_8 < 1) || ((local_c & 0x80) == 0)) goto cf_common_join_00702F3A;
  if ((local_c & 0x40) == 0) {
    if (iVar6 < 1) goto switchD_00702fe7_default;
    switch(iVar6) {
    case 1:
      if (param_7 <= *puVar8) {
        *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      pbVar12 = pbVar12 + 1;
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
      pbVar9 = param_8;
      if (local_8 < 1) goto cf_common_join_00702F3A;
      goto LAB_00703023;
    case 2:
LAB_00703023:
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
      pbVar9 = param_8;
      if (local_8 < 1) goto cf_common_join_00702F3A;
switchD_00702fe7_caseD_3:
      if (param_7 <= *puVar8) {
        *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      pbVar12 = pbVar12 + 1;
      pbVar9 = param_8 + 1;
      if (local_8 + -1 < 1) goto cf_common_join_00702F3A;
      param_8 = param_8 + 2;
      local_8 = local_8 + -2;
      break;
    case 3:
      goto switchD_00702fe7_caseD_3;
    case 4:
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
    }
switchD_00702fe7_default:
    pbVar9 = param_8;
    if (0 < local_8) {
      param_8 = param_8 + 1;
      local_8 = local_8 + -1;
      pbVar9 = param_8;
      if (0 < local_8) {
        while( true ) {
          if (param_7 <= *puVar8) {
            *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
          }
          pbVar9 = param_8 + 1;
          if ((local_8 + -1 < 1) || (pbVar9 = param_8 + 2, local_8 + -2 < 1)) break;
          if (param_7 <= puVar8[1]) {
            puVar11[1] = *(undefined1 *)((uint)pbVar12[1] + param_15);
          }
          puVar8 = puVar8 + 2;
          puVar11 = puVar11 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar9 = param_8 + 3;
          if ((local_8 + -3 < 1) || (pbVar9 = param_8 + 4, local_8 + -4 < 1)) break;
          param_8 = param_8 + 5;
          local_8 = local_8 + -5;
          pbVar9 = param_8;
          if (local_8 < 1) break;
        }
      }
    }
    goto cf_common_join_00702F3A;
  }
  pbVar9 = param_8 + 1;
  if (iVar6 < 1) goto switchD_00702e5a_default;
  switch(iVar6) {
  case 1:
    if (param_7 <= *puVar8) {
      *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    pbVar12 = pbVar12 + 1;
    local_8 = local_8 + -1;
    if (local_8 < 1) goto cf_common_join_00702F3A;
    goto LAB_00702e8d;
  case 2:
LAB_00702e8d:
    local_8 = local_8 + -1;
    if (local_8 < 1) goto cf_common_join_00702F3A;
switchD_00702e5a_caseD_3:
    if (param_7 <= *puVar8) {
      *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    pbVar12 = pbVar12 + 1;
    if (local_8 + -1 < 1) goto cf_common_join_00702F3A;
    local_8 = local_8 + -2;
    break;
  case 3:
    goto switchD_00702e5a_caseD_3;
  case 4:
    local_8 = local_8 + -1;
  }
switchD_00702e5a_default:
  if ((0 < local_8) && (local_8 = local_8 + -1, 0 < local_8)) {
    while( true ) {
      if (param_7 <= *puVar8) {
        *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_15);
      }
      if (local_8 + -2 < 1) break;
      if (param_7 <= puVar8[1]) {
        puVar11[1] = *(undefined1 *)((uint)pbVar12[1] + param_15);
      }
      puVar8 = puVar8 + 2;
      puVar11 = puVar11 + 2;
      pbVar12 = pbVar12 + 2;
      if ((local_8 + -4 < 1) || (local_8 = local_8 + -5, local_8 < 1)) break;
    }
  }
cf_common_join_00702F3A:
  iVar6 = (param_9 - param_10) - param_11;
  bVar1 = (byte)local_c;
  if ((int)uVar4 < iVar6) {
    do {
      iVar6 = iVar6 - uVar4;
      pbVar12 = pbVar9;
      if (((byte)local_c & 0xc0) == 0x80) {
        pbVar12 = pbVar9 + uVar4;
      }
      bVar1 = *pbVar12;
      local_c = (uint)bVar1;
      pbVar9 = pbVar12 + 1;
      uVar4 = local_c;
      if (((bVar1 & 0x80) != 0) && (uVar4 = local_c & 0x3f, (bVar1 & 0x40) != 0)) {
        pbVar9 = pbVar12 + 2;
      }
    } while ((int)uVar4 < iVar6);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c._0_1_ = bVar1;
  if (((byte)local_c & 0xc0) == 0x80) {
    pbVar9 = pbVar9 + iVar6;
  }
LAB_00702f90:
  param_1 = param_1 + param_2;
  param_3 = param_3 + param_4;
  param_5 = (ushort *)((int)param_5 + param_6);
  param_14 = param_14 + 1;
  if (4 < (int)param_14) {
    param_14 = 0;
  }
  goto joined_r0x00702a47;
}

