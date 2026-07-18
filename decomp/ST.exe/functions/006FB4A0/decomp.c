
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb4a0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13,byte *param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int local_14;
  uint local_10;
  byte *local_c;
  ushort *local_8;
  
  _DAT_00857000 = 1;
joined_r0x006fb4b7:
  param_10 = param_10 + -1;
  if (param_10 < 0) {
    return;
  }
  while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
    uVar4 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar6 = param_7;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          param_6 = param_6 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          param_6 = param_6 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar6 - uVar3) < 1) break;
        uVar4 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar6 = iVar6 - uVar3;
      }
    }
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  }
  local_10 = (uint)*param_6;
  param_6 = param_6 + 1;
  iVar6 = param_8;
  if (local_10 != 0) {
    do {
      if ((local_10 & 0x80) == 0) {
        uVar4 = local_10 & 0x7f;
        if (iVar6 < (int)uVar4) goto LAB_006fb58c;
      }
      else {
        uVar4 = local_10 & 0x3f;
        if (iVar6 < (int)uVar4) goto LAB_006fb58c;
        if ((local_10 & 0x40) == 0) {
          param_6 = param_6 + uVar4;
        }
        else {
          param_6 = param_6 + 1;
        }
      }
      local_10 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar6 = iVar6 - uVar4;
    } while( true );
  }
  goto LAB_006fbcae;
LAB_006fb58c:
  uVar4 = uVar4 - iVar6;
  if (((byte)local_10 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar6;
  }
  local_14 = param_9;
  iVar6 = param_11;
  pbVar10 = param_14;
  pbVar11 = param_14;
  puVar12 = param_1;
  puVar13 = param_1;
  local_c = param_14;
  local_8 = param_3;
  if ((int)uVar4 <= param_9) {
    do {
      local_14 = local_14 - uVar4;
      if ((local_10 & 0x80) == 0) {
        pbVar10 = pbVar11;
        puVar12 = puVar13;
        pbVar14 = param_6;
        pbVar2 = local_c;
        puVar9 = local_8;
        if (-1 < (int)(uVar4 - 1)) {
          do {
            if (((byte)iVar6 & 1) == 1) {
              puVar13 = puVar13 + 1;
              pbVar11 = pbVar11 + 1;
              local_8 = local_8 + 1;
            }
            iVar6 = iVar6 + 1;
            if (4 < iVar6) {
              iVar6 = 0;
            }
            uVar4 = uVar4 - 1;
            pbVar10 = pbVar11;
            puVar12 = puVar13;
            pbVar2 = pbVar11;
            puVar9 = local_8;
          } while (uVar4 != 0);
        }
        goto LAB_006fb934;
      }
      if ((local_10 & 0x40) == 0) {
        if (iVar6 < 1) goto switchD_006fb77a_default;
        switch(iVar6) {
        case 1:
          if (*local_8 < param_5) {
            *puVar13 = *(undefined1 *)((uint)*pbVar11 + param_16);
          }
          else {
            *puVar13 = *(undefined1 *)((uint)*param_6 + param_13);
          }
          iVar6 = 2;
          local_8 = local_8 + 1;
          puVar13 = puVar13 + 1;
          pbVar11 = pbVar11 + 1;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
          pbVar10 = pbVar11;
          puVar12 = puVar13;
          pbVar14 = param_6;
          pbVar2 = pbVar11;
          local_c = pbVar11;
          puVar9 = local_8;
          if ((int)uVar4 < 1) break;
          goto LAB_006fb7d4;
        case 2:
LAB_006fb7d4:
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
          iVar6 = 3;
          pbVar10 = pbVar11;
          puVar12 = puVar13;
          pbVar14 = param_6;
          pbVar2 = local_c;
          puVar9 = local_8;
          if (0 < (int)uVar4) {
LAB_006fb7eb:
            if (*local_8 < param_5) {
              *puVar13 = *(undefined1 *)((uint)*pbVar11 + param_16);
            }
            else {
              *puVar13 = *(undefined1 *)((uint)*param_6 + param_13);
            }
            iVar6 = 4;
            local_8 = local_8 + 1;
            puVar13 = puVar13 + 1;
            pbVar11 = pbVar11 + 1;
            pbVar10 = pbVar11;
            puVar12 = puVar13;
            pbVar14 = param_6 + 1;
            pbVar2 = pbVar11;
            puVar9 = local_8;
            if (0 < (int)(uVar4 - 1)) {
              param_6 = param_6 + 2;
              iVar6 = 0;
              uVar4 = uVar4 - 2;
              local_c = pbVar11;
              goto switchD_006fb77a_default;
            }
          }
          break;
        case 3:
          goto LAB_006fb7eb;
        case 4:
          iVar6 = 0;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
        default:
switchD_006fb77a_default:
          pbVar10 = pbVar11;
          puVar12 = puVar13;
          pbVar14 = param_6;
          pbVar2 = local_c;
          puVar9 = local_8;
          if (0 < (int)uVar4) {
            pbVar15 = param_6 + 1;
            for (iVar5 = uVar4 - 1; iVar6 = 1, pbVar10 = pbVar11, puVar12 = puVar13,
                pbVar14 = pbVar15, pbVar2 = local_c, puVar9 = local_8, 0 < iVar5; iVar5 = iVar5 + -5
                ) {
              if (*local_8 < param_5) {
                *puVar13 = *(undefined1 *)((uint)*pbVar11 + param_16);
              }
              else {
                *puVar13 = *(undefined1 *)((uint)*pbVar15 + param_13);
              }
              iVar6 = 2;
              puVar9 = local_8 + 1;
              puVar12 = puVar13 + 1;
              pbVar10 = pbVar11 + 1;
              pbVar14 = pbVar15 + 1;
              pbVar2 = pbVar10;
              if (iVar5 + -1 < 1) break;
              iVar6 = 3;
              pbVar14 = pbVar15 + 2;
              if (iVar5 + -2 < 1) break;
              if (*puVar9 < param_5) {
                *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
              }
              else {
                *puVar12 = *(undefined1 *)((uint)pbVar15[2] + param_13);
              }
              iVar6 = 4;
              local_8 = local_8 + 2;
              puVar13 = puVar13 + 2;
              pbVar11 = pbVar11 + 2;
              pbVar10 = pbVar11;
              puVar12 = puVar13;
              pbVar14 = pbVar15 + 3;
              pbVar2 = pbVar11;
              puVar9 = local_8;
              if (iVar5 + -3 < 1) break;
              iVar6 = 0;
              pbVar14 = pbVar15 + 4;
              if (iVar5 + -4 < 1) break;
              pbVar15 = pbVar15 + 5;
              local_c = pbVar11;
            }
          }
        }
        goto LAB_006fb934;
      }
      uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
      pbVar14 = param_6 + 1;
      if (iVar6 < 1) goto switchD_006fb5ff_default;
      switch(iVar6) {
      case 1:
        if (*local_8 < param_5) {
          *puVar13 = *(undefined1 *)((uint)*local_c + param_16);
        }
        else {
          *puVar13 = uVar1;
        }
        iVar6 = 2;
        local_8 = local_8 + 1;
        puVar13 = puVar13 + 1;
        local_c = local_c + 1;
        uVar4 = uVar4 - 1;
        pbVar10 = local_c;
        puVar12 = puVar13;
        pbVar2 = local_c;
        puVar9 = local_8;
        if ((int)uVar4 < 1) break;
        goto LAB_006fb64e;
      case 2:
LAB_006fb64e:
        uVar4 = uVar4 - 1;
        iVar6 = 3;
        pbVar10 = local_c;
        puVar12 = puVar13;
        pbVar2 = local_c;
        puVar9 = local_8;
        if (0 < (int)uVar4) {
LAB_006fb661:
          if (*local_8 < param_5) {
            *puVar13 = *(undefined1 *)((uint)*local_c + param_16);
          }
          else {
            *puVar13 = uVar1;
          }
          local_8 = local_8 + 1;
          puVar13 = puVar13 + 1;
          local_c = local_c + 1;
          iVar6 = 4;
          pbVar10 = local_c;
          puVar12 = puVar13;
          pbVar2 = local_c;
          puVar9 = local_8;
          if (0 < (int)(uVar4 - 1)) {
            iVar6 = 0;
            uVar4 = uVar4 - 2;
            goto switchD_006fb5ff_default;
          }
        }
        break;
      case 3:
        goto LAB_006fb661;
      case 4:
        iVar6 = 0;
        uVar4 = uVar4 - 1;
      default:
switchD_006fb5ff_default:
        pbVar10 = local_c;
        puVar12 = puVar13;
        pbVar2 = local_c;
        puVar9 = local_8;
        if (0 < (int)uVar4) {
          iVar5 = uVar4 - 1;
          iVar6 = 1;
          if (0 < iVar5) {
            while( true ) {
              if (*local_8 < param_5) {
                *puVar13 = *(undefined1 *)((uint)*local_c + param_16);
              }
              else {
                *puVar13 = uVar1;
              }
              iVar6 = 2;
              puVar9 = local_8 + 1;
              puVar12 = puVar13 + 1;
              pbVar10 = local_c + 1;
              pbVar2 = pbVar10;
              if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
              if (*puVar9 < param_5) {
                *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
              }
              else {
                *puVar12 = uVar1;
              }
              local_8 = local_8 + 2;
              puVar13 = puVar13 + 2;
              local_c = local_c + 2;
              iVar6 = 4;
              pbVar10 = local_c;
              puVar12 = puVar13;
              pbVar2 = local_c;
              puVar9 = local_8;
              if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
              iVar5 = iVar5 + -5;
              iVar6 = 1;
              if (iVar5 < 1) break;
            }
          }
        }
      }
LAB_006fb934:
      local_8 = puVar9;
      local_c = pbVar2;
      param_6 = pbVar14;
      if (local_14 < 1) {
        uVar4 = 0;
        break;
      }
      bVar8 = *param_6;
      local_10 = (uint)bVar8;
      param_6 = param_6 + 1;
      if ((bVar8 & 0x80) == 0) {
        uVar4 = local_10 & 0x7f;
      }
      else {
        uVar4 = local_10 & 0x3f;
      }
      pbVar11 = pbVar10;
      puVar13 = puVar12;
    } while ((int)uVar4 <= local_14);
  }
  uVar4 = uVar4 - local_14;
  pbVar11 = param_6;
  if ((local_14 < 1) || ((local_10 & 0x80) == 0)) goto LAB_006fbc59;
  if ((local_10 & 0x40) == 0) {
    if (0 < iVar6) {
      switch(iVar6) {
      case 1:
        if (*local_8 < param_5) {
          *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
        }
        else {
          *puVar12 = *(undefined1 *)((uint)*param_6 + param_13);
        }
        local_8 = local_8 + 1;
        puVar12 = puVar12 + 1;
        pbVar10 = pbVar10 + 1;
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar11 = param_6;
        if (local_14 < 1) goto LAB_006fbc59;
        break;
      case 2:
        break;
      case 3:
        goto switchD_006fbaf2_caseD_3;
      case 4:
        goto switchD_006fbaf2_caseD_4;
      default:
        goto switchD_006fbaf2_default;
      }
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar11 = param_6;
      if (local_14 < 1) goto LAB_006fbc59;
switchD_006fbaf2_caseD_3:
      if (*local_8 < param_5) {
        *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
      }
      else {
        *puVar12 = *(undefined1 *)((uint)*param_6 + param_13);
      }
      local_8 = local_8 + 1;
      puVar12 = puVar12 + 1;
      pbVar10 = pbVar10 + 1;
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar11 = param_6;
      if (local_14 < 1) goto LAB_006fbc59;
switchD_006fbaf2_caseD_4:
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
    }
switchD_006fbaf2_default:
    pbVar11 = param_6;
    if (0 < local_14) {
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar11 = param_6;
      if (0 < local_14) {
        while( true ) {
          if (*local_8 < param_5) {
            *puVar12 = *(undefined1 *)((uint)*pbVar10 + param_16);
          }
          else {
            *puVar12 = *(undefined1 *)((uint)*param_6 + param_13);
          }
          pbVar11 = param_6 + 1;
          if ((local_14 + -1 < 1) || (pbVar11 = param_6 + 2, local_14 + -2 < 1)) break;
          if (local_8[1] < param_5) {
            puVar12[1] = *(undefined1 *)((uint)pbVar10[1] + param_16);
          }
          else {
            puVar12[1] = *(undefined1 *)((uint)param_6[2] + param_13);
          }
          local_8 = local_8 + 2;
          puVar12 = puVar12 + 2;
          pbVar10 = pbVar10 + 2;
          pbVar11 = param_6 + 3;
          if ((local_14 + -3 < 1) || (pbVar11 = param_6 + 4, local_14 + -4 < 1)) break;
          param_6 = param_6 + 5;
          local_14 = local_14 + -5;
          pbVar11 = param_6;
          if (local_14 < 1) break;
        }
      }
    }
    goto LAB_006fbc59;
  }
  uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
  pbVar11 = param_6 + 1;
  if (iVar6 < 1) goto switchD_006fb9b7_default;
  switch(iVar6) {
  case 1:
    if (*local_8 < param_5) {
      *puVar12 = *(undefined1 *)((uint)*local_c + param_16);
    }
    else {
      *puVar12 = uVar1;
    }
    local_8 = local_8 + 1;
    puVar12 = puVar12 + 1;
    local_c = local_c + 1;
    local_14 = local_14 + -1;
    if (local_14 < 1) goto LAB_006fbc59;
    goto LAB_006fba02;
  case 2:
LAB_006fba02:
    local_14 = local_14 + -1;
    if (local_14 < 1) goto LAB_006fbc59;
LAB_006fba13:
    uVar7 = uVar1;
    if (*local_8 < param_5) {
      uVar7 = *(undefined1 *)((uint)*local_c + param_16);
    }
    *puVar12 = uVar7;
    local_8 = local_8 + 1;
    puVar12 = puVar12 + 1;
    local_c = local_c + 1;
    if (local_14 + -1 < 1) goto LAB_006fbc59;
    local_14 = local_14 + -2;
    break;
  case 3:
    goto LAB_006fba13;
  case 4:
    local_14 = local_14 + -1;
  }
switchD_006fb9b7_default:
  if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
    while( true ) {
      uVar7 = uVar1;
      if (*local_8 < param_5) {
        uVar7 = *(undefined1 *)((uint)*local_c + param_16);
      }
      *puVar12 = uVar7;
      if (local_14 + -2 < 1) break;
      uVar7 = uVar1;
      if (local_8[1] < param_5) {
        uVar7 = *(undefined1 *)((uint)local_c[1] + param_16);
      }
      puVar12[1] = uVar7;
      local_8 = local_8 + 2;
      puVar12 = puVar12 + 2;
      local_c = local_c + 2;
      if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
    }
  }
LAB_006fbc59:
  param_6 = pbVar11;
  iVar6 = (param_7 - param_8) - param_9;
  bVar8 = (byte)local_10;
  if ((int)uVar4 < iVar6) {
    do {
      iVar6 = iVar6 - uVar4;
      pbVar11 = param_6;
      if (((byte)local_10 & 0xc0) == 0x80) {
        pbVar11 = param_6 + uVar4;
      }
      bVar8 = *pbVar11;
      local_10 = (uint)bVar8;
      param_6 = pbVar11 + 1;
      uVar4 = local_10;
      if (((bVar8 & 0x80) != 0) && (uVar4 = local_10 & 0x3f, (bVar8 & 0x40) != 0)) {
        param_6 = pbVar11 + 2;
      }
    } while ((int)uVar4 < iVar6);
  }
  if ((bVar8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar6;
  }
LAB_006fbcae:
  param_3 = (ushort *)((int)param_3 + param_4);
  param_1 = param_1 + param_2;
  param_14 = param_14 + param_15;
  param_12 = param_12 + 1;
  if (4 < (int)param_12) {
    param_12 = 0;
  }
  goto joined_r0x006fb4b7;
}

