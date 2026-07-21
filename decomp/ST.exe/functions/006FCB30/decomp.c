
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fcb30(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 int param_13,int param_14,int param_15)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint local_18;
  int local_14;
  byte *local_10;
  ushort *local_c;
  byte *local_8;

  pbVar4 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar5 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar6 = param_7;
      if (uVar5 != 0) {
        while( true ) {
          if ((uVar5 & 0x80) == 0) {
            uVar2 = uVar5 & 0x7f;
          }
          else if ((uVar5 & 0x40) == 0) {
            param_6 = param_6 + (uVar5 & 0x3f);
            uVar2 = uVar5 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar2 = uVar5 & 0x3f;
          }
          if ((int)(iVar6 - uVar2) < 1) break;
          uVar5 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar6 = iVar6 - uVar2;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 == 0) goto LAB_006fd39e;
    uVar5 = 0x80 >> ((byte)param_15 & 7);
    iVar6 = param_8;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar2 = local_18 & 0x7f;
        if (iVar6 < (int)uVar2) goto LAB_006fcc2f;
        iVar6 = iVar6 - uVar2;
        bVar1 = *param_6;
        param_6 = param_6 + 1;
        local_18 = (uint)bVar1;
      }
      uVar2 = local_18 & 0x3f;
      if (iVar6 < (int)uVar2) break;
      if ((local_18 & 0x40) == 0) {
        iVar6 = iVar6 - uVar2;
        local_18 = (uint)param_6[uVar2];
        param_6 = param_6 + uVar2 + 1;
      }
      else {
        iVar6 = iVar6 - uVar2;
        local_18 = (uint)param_6[1];
        param_6 = param_6 + 2;
      }
    }
LAB_006fcc2f:
    uVar2 = uVar2 - iVar6;
    if (((byte)local_18 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar6;
    }
    local_14 = param_9;
    iVar6 = param_11;
    local_10 = pbVar4;
    local_c = param_3;
    local_8 = param_1;
    if ((int)uVar2 <= param_9) {
      do {
        local_14 = local_14 - uVar2;
        if ((local_18 & 0x80) == 0) {
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (((byte)iVar6 & 1) == 1) {
                local_8 = local_8 + 1;
                local_c = local_c + 1;
                uVar5 = uVar5 >> 1;
                if (uVar5 == 0) {
                  uVar5 = 0x80;
                  local_10 = local_10 + 1;
                }
              }
              iVar6 = iVar6 + 1;
              if (4 < iVar6) {
                iVar6 = 0;
              }
              uVar2 = uVar2 - 1;
              puVar7 = local_c;
              pbVar8 = local_8;
            } while (uVar2 != 0);
          }
          goto LAB_006fcfb4;
        }
        if ((local_18 & 0x40) != 0) {
          bVar1 = *param_6;
          pbVar9 = param_6 + 1;
          if (iVar6 < 1) {
switchD_006fcc99_default:
            puVar7 = local_c;
            pbVar8 = local_8;
            if (0 < (int)uVar2) {
              iVar3 = uVar2 - 1;
              iVar6 = 1;
              if (0 < iVar3) {
                while( true ) {
                  if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                    *local_8 = bVar1;
                  }
                  iVar6 = 2;
                  puVar7 = local_c + 1;
                  pbVar8 = local_8 + 1;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_10 = local_10 + 1;
                  }
                  if ((iVar3 + -1 < 1) || (iVar6 = 3, iVar3 + -2 < 1)) break;
                  if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *puVar7)) {
                    *pbVar8 = bVar1;
                  }
                  local_c = local_c + 2;
                  local_8 = local_8 + 2;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_10 = local_10 + 1;
                  }
                  iVar6 = 4;
                  puVar7 = local_c;
                  pbVar8 = local_8;
                  if ((iVar3 + -3 < 1) || (iVar6 = 0, iVar3 + -4 < 1)) break;
                  iVar3 = iVar3 + -5;
                  iVar6 = 1;
                  if (iVar3 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar6) {
            case 1:
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = bVar1;
              }
              iVar6 = 2;
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              uVar2 = uVar2 - 1;
              puVar7 = local_c;
              pbVar8 = local_8;
              if ((int)uVar2 < 1) goto LAB_006fcfb4;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006fcc99_caseD_3;
            case 4:
              goto switchD_006fcc99_caseD_4;
            default:
              goto switchD_006fcc99_default;
            }
            uVar2 = uVar2 - 1;
            iVar6 = 3;
            puVar7 = local_c;
            pbVar8 = local_8;
            if (0 < (int)uVar2) {
switchD_006fcc99_caseD_3:
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = bVar1;
              }
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              uVar2 = uVar2 - 1;
              iVar6 = 4;
              puVar7 = local_c;
              pbVar8 = local_8;
              if (0 < (int)uVar2) {
switchD_006fcc99_caseD_4:
                iVar6 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_006fcc99_default;
              }
            }
          }
          goto LAB_006fcfb4;
        }
        if (iVar6 < 1) goto switchD_006fce29_default;
        switch(iVar6) {
        case 1:
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
            *local_8 = *param_6;
          }
          local_c = local_c + 1;
          local_8 = local_8 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          param_6 = param_6 + 1;
          uVar2 = uVar2 - 1;
          iVar6 = 2;
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if ((int)uVar2 < 1) break;
          goto LAB_006fce8e;
        case 2:
LAB_006fce8e:
          param_6 = param_6 + 1;
          uVar2 = uVar2 - 1;
          iVar6 = 3;
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if (0 < (int)uVar2) {
LAB_006fcea8:
            if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
              *local_8 = *param_6;
            }
            local_c = local_c + 1;
            local_8 = local_8 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_10 = local_10 + 1;
            }
            iVar6 = 4;
            pbVar9 = param_6 + 1;
            puVar7 = local_c;
            pbVar8 = local_8;
            if (0 < (int)(uVar2 - 1)) {
              param_6 = param_6 + 2;
              iVar6 = 0;
              uVar2 = uVar2 - 2;
              goto switchD_006fce29_default;
            }
          }
          break;
        case 3:
          goto LAB_006fcea8;
        case 4:
          param_6 = param_6 + 1;
          iVar6 = 0;
          uVar2 = uVar2 - 1;
        default:
switchD_006fce29_default:
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar8 = local_8;
          if (0 < (int)uVar2) {
            pbVar10 = param_6 + 1;
            for (iVar3 = uVar2 - 1; iVar6 = 1, pbVar9 = pbVar10, puVar7 = local_c, pbVar8 = local_8,
                0 < iVar3; iVar3 = iVar3 + -5) {
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = *pbVar10;
              }
              puVar7 = local_c + 1;
              pbVar8 = local_8 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              iVar6 = 2;
              pbVar9 = pbVar10 + 1;
              if (iVar3 + -1 < 1) break;
              iVar6 = 3;
              pbVar9 = pbVar10 + 2;
              if (iVar3 + -2 < 1) break;
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *puVar7)) {
                *pbVar8 = pbVar10[2];
              }
              local_c = local_c + 2;
              local_8 = local_8 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              iVar6 = 4;
              pbVar9 = pbVar10 + 3;
              puVar7 = local_c;
              pbVar8 = local_8;
              if (iVar3 + -3 < 1) break;
              iVar6 = 0;
              pbVar9 = pbVar10 + 4;
              if (iVar3 + -4 < 1) break;
              pbVar10 = pbVar10 + 5;
            }
          }
        }
LAB_006fcfb4:
        local_8 = pbVar8;
        local_c = puVar7;
        param_6 = pbVar9;
        if (local_14 < 1) {
          uVar2 = 0;
          break;
        }
        bVar1 = *param_6;
        local_18 = (uint)bVar1;
        param_6 = param_6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar2 = bVar1 & 0x7f;
        }
        else {
          uVar2 = bVar1 & 0x3f;
        }
      } while ((int)uVar2 <= local_14);
    }
    uVar2 = uVar2 - local_14;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_006fd34b;
    if ((local_18 & 0x40) == 0) {
      if (iVar6 < 1) goto switchD_006fd1e3_default;
      switch(iVar6) {
      case 1:
        if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
          *local_8 = *param_6;
        }
        local_c = local_c + 1;
        local_8 = local_8 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_10 = local_10 + 1;
        }
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        if (local_14 < 1) break;
        goto LAB_006fd239;
      case 2:
LAB_006fd239:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar9 = param_6;
        if (0 < local_14) {
LAB_006fd248:
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
            *local_8 = *pbVar9;
          }
          local_c = local_c + 1;
          local_8 = local_8 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          param_6 = pbVar9 + 1;
          if (0 < local_14 + -1) {
            param_6 = pbVar9 + 2;
            local_14 = local_14 + -2;
            goto switchD_006fd1e3_default;
          }
        }
        break;
      case 3:
        pbVar9 = param_6;
        goto LAB_006fd248;
      case 4:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
      default:
switchD_006fd1e3_default:
        if (0 < local_14) {
          param_6 = param_6 + 1;
          local_14 = local_14 + -1;
          pbVar9 = param_6;
          if (0 < local_14) {
            while( true ) {
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
                *local_8 = *pbVar9;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              param_6 = pbVar9 + 1;
              if ((local_14 + -1 < 1) || (param_6 = pbVar9 + 2, local_14 + -2 < 1)) break;
              if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= local_c[1])) {
                local_8[1] = *param_6;
              }
              local_c = local_c + 2;
              local_8 = local_8 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_10 = local_10 + 1;
              }
              param_6 = pbVar9 + 3;
              if ((local_14 + -3 < 1) || (param_6 = pbVar9 + 4, local_14 + -4 < 1)) break;
              param_6 = pbVar9 + 5;
              local_14 = local_14 + -5;
              pbVar9 = param_6;
              if (local_14 < 1) break;
            }
          }
        }
      }
      goto LAB_006fd34b;
    }
    bVar1 = *param_6;
    param_6 = param_6 + 1;
    if (iVar6 < 1) goto switchD_006fd060_default;
    switch(iVar6) {
    case 1:
      if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
        *local_8 = bVar1;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
      uVar5 = uVar5 >> 1;
      if (uVar5 == 0) {
        uVar5 = 0x80;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + -1;
      if (local_14 < 1) break;
      goto LAB_006fd0b3;
    case 2:
LAB_006fd0b3:
      local_14 = local_14 + -1;
      if (0 < local_14) {
LAB_006fd0c4:
        if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
          *local_8 = bVar1;
        }
        local_c = local_c + 1;
        local_8 = local_8 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_10 = local_10 + 1;
        }
        if (0 < local_14 + -1) {
          local_14 = local_14 + -2;
          goto switchD_006fd060_default;
        }
      }
      break;
    case 3:
      goto LAB_006fd0c4;
    case 4:
      local_14 = local_14 + -1;
    default:
switchD_006fd060_default:
      if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
        while( true ) {
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= *local_c)) {
            *local_8 = bVar1;
          }
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          if (local_14 + -2 < 1) break;
          if (((*local_10 & (byte)uVar5) == 0) && (param_5 <= local_c[1])) {
            local_8[1] = bVar1;
          }
          local_c = local_c + 2;
          local_8 = local_8 + 2;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_10 = local_10 + 1;
          }
          if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
        }
      }
    }
LAB_006fd34b:
    iVar6 = (param_7 - param_8) - param_9;
    bVar1 = (byte)local_18;
    if ((int)uVar2 < iVar6) {
      do {
        iVar6 = iVar6 - uVar2;
        pbVar9 = param_6;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar9 = param_6 + uVar2;
        }
        bVar1 = *pbVar9;
        local_18 = (uint)bVar1;
        param_6 = pbVar9 + 1;
        uVar2 = local_18;
        if (((bVar1 & 0x80) != 0) && (uVar2 = local_18 & 0x3f, (bVar1 & 0x40) != 0)) {
          param_6 = pbVar9 + 2;
        }
      } while ((int)uVar2 < iVar6);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18._0_1_ = bVar1;
    if (((byte)local_18 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar6;
    }
LAB_006fd39e:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar4 = pbVar4 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

