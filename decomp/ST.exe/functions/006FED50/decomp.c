
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fed50(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_18;
  int local_14;
  undefined1 *local_10;
  byte *local_c;
  ushort *local_8;

  pbVar5 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  pbVar10 = param_6;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar6 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar7 = param_7;
      if (uVar6 != 0) {
        while( true ) {
          if ((uVar6 & 0x80) == 0) {
            uVar3 = uVar6 & 0x7f;
          }
          else if ((uVar6 & 0x40) == 0) {
            pbVar10 = pbVar10 + (uVar6 & 0x3f);
            uVar3 = uVar6 & 0x3f;
          }
          else {
            pbVar10 = pbVar10 + 1;
            uVar3 = uVar6 & 0x3f;
          }
          if ((int)(iVar7 - uVar3) < 1) break;
          uVar6 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar7 = iVar7 - uVar3;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_18 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    if (local_18 == 0) goto LAB_006ff454;
    uVar6 = 0x80 >> ((byte)param_15 & 7);
    iVar7 = param_8;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar3 = local_18 & 0x7f;
        if (iVar7 < (int)uVar3) goto LAB_006fee4f;
        iVar7 = iVar7 - uVar3;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        local_18 = (uint)bVar2;
      }
      uVar3 = local_18 & 0x3f;
      if (iVar7 < (int)uVar3) break;
      if ((local_18 & 0x40) == 0) {
        iVar7 = iVar7 - uVar3;
        local_18 = (uint)pbVar10[uVar3];
        pbVar10 = pbVar10 + uVar3 + 1;
      }
      else {
        iVar7 = iVar7 - uVar3;
        local_18 = (uint)pbVar10[1];
        pbVar10 = pbVar10 + 2;
      }
    }
LAB_006fee4f:
    uVar3 = uVar3 - iVar7;
    if (((byte)local_18 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + iVar7;
    }
    local_14 = param_9;
    iVar7 = param_11;
    param_6 = pbVar10;
    local_10 = param_1;
    local_c = pbVar5;
    local_8 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_14 = local_14 - uVar3;
        if ((local_18 & 0x80) == 0) {
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar7 & 1) == 1) {
                local_10 = local_10 + 1;
                local_8 = local_8 + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_c = local_c + 1;
                }
              }
              iVar7 = iVar7 + 1;
              if (4 < iVar7) {
                iVar7 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar9 = local_10;
              puVar8 = local_8;
            } while (uVar3 != 0);
          }
          goto LAB_006ff204;
        }
        if ((local_18 & 0x40) != 0) {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
          pbVar10 = param_6 + 1;
          if (iVar7 < 1) {
switchD_006feec1_default:
            puVar9 = local_10;
            puVar8 = local_8;
            if (0 < (int)uVar3) {
              iVar4 = uVar3 - 1;
              iVar7 = 1;
              if (0 < iVar4) {
                while( true ) {
                  if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                    *local_10 = uVar1;
                  }
                  iVar7 = 2;
                  puVar8 = local_8 + 1;
                  puVar9 = local_10 + 1;
                  uVar6 = uVar6 >> 1;
                  if (uVar6 == 0) {
                    uVar6 = 0x80;
                    local_c = local_c + 1;
                  }
                  if ((iVar4 + -1 < 1) || (iVar7 = 3, iVar4 + -2 < 1)) break;
                  if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *puVar8)) {
                    *puVar9 = uVar1;
                  }
                  local_8 = local_8 + 2;
                  local_10 = local_10 + 2;
                  uVar6 = uVar6 >> 1;
                  if (uVar6 == 0) {
                    uVar6 = 0x80;
                    local_c = local_c + 1;
                  }
                  iVar7 = 4;
                  puVar9 = local_10;
                  puVar8 = local_8;
                  if ((iVar4 + -3 < 1) || (iVar7 = 0, iVar4 + -4 < 1)) break;
                  iVar4 = iVar4 + -5;
                  iVar7 = 1;
                  if (iVar4 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar7) {
            case 1:
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                *local_10 = uVar1;
              }
              iVar7 = 2;
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              uVar3 = uVar3 - 1;
              puVar9 = local_10;
              puVar8 = local_8;
              if ((int)uVar3 < 1) goto LAB_006ff204;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006feec1_caseD_3;
            case 4:
              goto switchD_006feec1_caseD_4;
            default:
              goto switchD_006feec1_default;
            }
            uVar3 = uVar3 - 1;
            iVar7 = 3;
            puVar9 = local_10;
            puVar8 = local_8;
            if (0 < (int)uVar3) {
switchD_006feec1_caseD_3:
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                *local_10 = uVar1;
              }
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              uVar3 = uVar3 - 1;
              iVar7 = 4;
              puVar9 = local_10;
              puVar8 = local_8;
              if (0 < (int)uVar3) {
switchD_006feec1_caseD_4:
                iVar7 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006feec1_default;
              }
            }
          }
          goto LAB_006ff204;
        }
        if (iVar7 < 1) goto switchD_006ff051_default;
        switch(iVar7) {
        case 1:
          if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
            *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
          }
          iVar7 = 2;
          local_8 = local_8 + 1;
          local_10 = local_10 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_c = local_c + 1;
          }
          param_6 = param_6 + 1;
          uVar3 = uVar3 - 1;
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if ((int)uVar3 < 1) break;
          goto LAB_006ff0b5;
        case 2:
LAB_006ff0b5:
          param_6 = param_6 + 1;
          uVar3 = uVar3 - 1;
          iVar7 = 3;
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if (0 < (int)uVar3) {
LAB_006ff0cc:
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
              *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
            }
            local_8 = local_8 + 1;
            local_10 = local_10 + 1;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            iVar7 = 4;
            pbVar10 = param_6 + 1;
            puVar9 = local_10;
            puVar8 = local_8;
            if (0 < (int)(uVar3 - 1)) {
              param_6 = param_6 + 2;
              iVar7 = 0;
              uVar3 = uVar3 - 2;
              goto switchD_006ff051_default;
            }
          }
          break;
        case 3:
          goto LAB_006ff0cc;
        case 4:
          param_6 = param_6 + 1;
          iVar7 = 0;
          uVar3 = uVar3 - 1;
        default:
switchD_006ff051_default:
          pbVar10 = param_6;
          puVar9 = local_10;
          puVar8 = local_8;
          if (0 < (int)uVar3) {
            pbVar11 = param_6 + 1;
            for (iVar4 = uVar3 - 1; iVar7 = 1, pbVar10 = pbVar11, puVar9 = local_10,
                puVar8 = local_8, 0 < iVar4; iVar4 = iVar4 + -5) {
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
                *local_10 = *(undefined1 *)((uint)*pbVar11 + param_16);
              }
              iVar7 = 2;
              puVar8 = local_8 + 1;
              puVar9 = local_10 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              pbVar10 = pbVar11 + 1;
              if (iVar4 + -1 < 1) break;
              iVar7 = 3;
              pbVar10 = pbVar11 + 2;
              if (iVar4 + -2 < 1) break;
              if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *puVar8)) {
                *puVar9 = *(undefined1 *)((uint)pbVar11[2] + param_16);
              }
              local_8 = local_8 + 2;
              local_10 = local_10 + 2;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 4;
              pbVar10 = pbVar11 + 3;
              puVar9 = local_10;
              puVar8 = local_8;
              if (iVar4 + -3 < 1) break;
              iVar7 = 0;
              pbVar10 = pbVar11 + 4;
              if (iVar4 + -4 < 1) break;
              pbVar11 = pbVar11 + 5;
            }
          }
        }
LAB_006ff204:
        local_8 = puVar8;
        local_10 = puVar9;
        param_6 = pbVar10;
        if (local_14 < 1) {
          uVar3 = 0;
          break;
        }
        bVar2 = *param_6;
        local_18 = (uint)bVar2;
        param_6 = param_6 + 1;
        if ((bVar2 & 0x80) == 0) {
          uVar3 = bVar2 & 0x7f;
        }
        else {
          uVar3 = bVar2 & 0x3f;
        }
      } while ((int)uVar3 <= local_14);
    }
    uVar3 = uVar3 - local_14;
    pbVar10 = param_6;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_006ff401;
    if ((local_18 & 0x40) != 0) {
      uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
      pbVar10 = param_6 + 1;
      if (iVar7 < 1) goto switchD_006ff2be_default;
      switch(iVar7) {
      case 1:
        if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
          *local_10 = uVar1;
        }
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_c = local_c + 1;
        }
        local_14 = local_14 + -1;
        if (local_14 < 1) break;
        goto LAB_006ff313;
      case 2:
LAB_006ff313:
        local_14 = local_14 + -1;
        if (0 < local_14) {
LAB_006ff324:
          if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
            *local_10 = uVar1;
          }
          local_8 = local_8 + 1;
          local_10 = local_10 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_c = local_c + 1;
          }
          if (0 < local_14 + -1) {
            local_14 = local_14 + -2;
            goto switchD_006ff2be_default;
          }
        }
        break;
      case 3:
        goto LAB_006ff324;
      case 4:
        local_14 = local_14 + -1;
      default:
switchD_006ff2be_default:
        if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
          while( true ) {
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
              *local_10 = uVar1;
            }
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            if (local_14 + -2 < 1) break;
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= local_8[1])) {
              local_10[1] = uVar1;
            }
            local_8 = local_8 + 2;
            local_10 = local_10 + 2;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
          }
        }
      }
      goto LAB_006ff401;
    }
    if (iVar7 < 1) goto switchD_006ff4ab_default;
    switch(iVar7) {
    case 1:
      if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
        *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) {
        uVar6 = 0x80;
        local_c = local_c + 1;
      }
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar10 = param_6;
      if (local_14 < 1) break;
      goto LAB_006ff509;
    case 2:
LAB_006ff509:
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
      pbVar10 = param_6;
      if (0 < local_14) {
LAB_006ff518:
        if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
          *local_10 = *(undefined1 *)((uint)*param_6 + param_16);
        }
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_c = local_c + 1;
        }
        pbVar10 = param_6 + 1;
        if (0 < local_14 + -1) {
          param_6 = param_6 + 2;
          local_14 = local_14 + -2;
          goto switchD_006ff4ab_default;
        }
      }
      break;
    case 3:
      goto LAB_006ff518;
    case 4:
      param_6 = param_6 + 1;
      local_14 = local_14 + -1;
    default:
switchD_006ff4ab_default:
      pbVar10 = param_6;
      if (0 < local_14) {
        pbVar11 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar10 = pbVar11;
        if (0 < local_14) {
          while( true ) {
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= *local_8)) {
              *local_10 = *(undefined1 *)((uint)*pbVar11 + param_16);
            }
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            pbVar10 = pbVar11 + 1;
            if ((local_14 + -1 < 1) || (pbVar10 = pbVar11 + 2, local_14 + -2 < 1)) break;
            if (((*local_c & (byte)uVar6) == 0) && (param_5 <= local_8[1])) {
              local_10[1] = *(undefined1 *)((uint)pbVar11[2] + param_16);
            }
            local_8 = local_8 + 2;
            local_10 = local_10 + 2;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_c = local_c + 1;
            }
            pbVar10 = pbVar11 + 3;
            if ((local_14 + -3 < 1) || (pbVar10 = pbVar11 + 4, local_14 + -4 < 1)) break;
            pbVar11 = pbVar11 + 5;
            local_14 = local_14 + -5;
            pbVar10 = pbVar11;
            if (local_14 < 1) break;
          }
        }
      }
    }
LAB_006ff401:
    iVar7 = (param_7 - param_8) - param_9;
    bVar2 = (byte)local_18;
    if ((int)uVar3 < iVar7) {
      do {
        iVar7 = iVar7 - uVar3;
        pbVar11 = pbVar10;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar11 = pbVar10 + uVar3;
        }
        bVar2 = *pbVar11;
        local_18 = (uint)bVar2;
        pbVar10 = pbVar11 + 1;
        uVar3 = local_18;
        if (((bVar2 & 0x80) != 0) && (uVar3 = local_18 & 0x3f, (bVar2 & 0x40) != 0)) {
          pbVar10 = pbVar11 + 2;
        }
      } while ((int)uVar3 < iVar7);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18._0_1_ = bVar2;
    if (((byte)local_18 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + iVar7;
    }
LAB_006ff454:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar5 = pbVar5 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

