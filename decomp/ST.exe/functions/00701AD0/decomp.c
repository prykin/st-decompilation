
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00701ad0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,byte *param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_28;
  byte *local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  uint local_10;
  ushort *local_c;
  byte *local_8;
  
  uVar1 = 0;
  _DAT_00857000 = 1;
  pbVar12 = param_6;
joined_r0x00701aee:
  param_10 = param_10 + -1;
  if (param_10 < 0) {
    return;
  }
  while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
    uVar5 = (uint)*pbVar12;
    pbVar12 = pbVar12 + 1;
    iVar9 = param_7;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar3 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          pbVar12 = pbVar12 + (uVar5 & 0x3f);
          uVar3 = uVar5 & 0x3f;
        }
        else {
          pbVar12 = pbVar12 + 1;
          uVar3 = uVar5 & 0x3f;
        }
        if ((int)(iVar9 - uVar3) < 1) break;
        uVar5 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
        iVar9 = iVar9 - uVar3;
      }
    }
    uVar5 = (uint)*param_13;
    param_13 = param_13 + 1;
    iVar9 = param_14;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar3 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          param_13 = param_13 + (uVar5 & 0x3f);
          uVar3 = uVar5 & 0x3f;
        }
        else {
          param_13 = param_13 + 1;
          uVar3 = uVar5 & 0x3f;
        }
        if ((int)(iVar9 - uVar3) < 1) break;
        uVar5 = (uint)*param_13;
        param_13 = param_13 + 1;
        iVar9 = iVar9 - uVar3;
      }
    }
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  }
  local_18 = (uint)*pbVar12;
  pbVar13 = pbVar12 + 1;
  if (local_18 != 0) {
    param_6 = (byte *)(local_18 & 0xc0);
    if (param_6 == (byte *)0xc0) {
      bVar8 = *pbVar13;
      pbVar13 = pbVar12 + 2;
      uVar1 = *(undefined1 *)((uint)bVar8 + param_16);
    }
    bVar8 = *param_13;
    local_10 = (uint)bVar8;
    if ((bVar8 & 0x80) == 0) {
      uVar5 = local_10 & 0x7f;
      param_13 = param_13 + 1;
    }
    else {
      uVar5 = local_10 & 0x3f;
      if ((bVar8 & 0x40) == 0) {
        param_13 = param_13 + 1 + uVar5;
      }
      else {
        param_13 = param_13 + 2;
      }
    }
    iVar9 = param_15;
    pbVar12 = param_13;
    if ((int)uVar5 <= param_15) {
      do {
        iVar9 = iVar9 - uVar5;
        bVar8 = *pbVar12;
        local_10 = (uint)bVar8;
        param_13 = pbVar12 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar5 = local_10 & 0x7f;
        }
        else {
          uVar5 = local_10 & 0x3f;
          if ((bVar8 & 0x40) == 0) {
            param_13 = param_13 + uVar5;
          }
          else {
            param_13 = pbVar12 + 2;
          }
        }
        pbVar12 = param_13;
      } while ((int)uVar5 <= iVar9);
    }
    local_8 = (byte *)param_8;
    pbVar12 = pbVar13;
LAB_00701c4f:
    pbVar13 = pbVar12;
    if ((local_18 & 0x80) == 0) {
      uVar3 = local_18 & 0x7f;
      if ((int)local_8 < (int)uVar3) goto LAB_00701caf;
    }
    else {
      uVar3 = local_18 & 0x3f;
      if ((int)local_8 < (int)uVar3) goto LAB_00701caf;
      if (param_6 == (byte *)0x80) {
        pbVar13 = pbVar13 + uVar3;
      }
    }
    local_8 = (byte *)((int)local_8 - uVar3);
    local_18 = (uint)*pbVar13;
    param_6 = (byte *)(local_18 & 0xc0);
    pbVar12 = pbVar13 + 1;
    if (param_6 == (byte *)0xc0) {
      uVar1 = *(undefined1 *)((uint)pbVar13[1] + param_16);
      pbVar12 = pbVar13 + 2;
    }
    goto LAB_00701c4f;
  }
  goto LAB_0070248f;
LAB_00701caf:
  uVar3 = uVar3 - (int)local_8;
  if (((byte)local_18 & 0xc0) == 0x80) {
    pbVar13 = pbVar13 + (int)local_8;
  }
  local_24 = (byte *)0x0;
  local_1c = (byte *)(uVar5 - iVar9);
  iVar9 = param_11;
  puVar6 = param_3;
  puVar10 = param_1;
  local_20 = param_9;
  while (0 < local_20) {
    local_8 = local_1c;
    if ((int)local_1c < local_20) {
      do {
        param_6 = (byte *)(local_10 & 0x80);
        bVar8 = *param_13;
        uVar5 = (uint)bVar8;
        if ((byte *)(bVar8 & 0x80) != param_6) break;
        local_20 = local_20 - (int)local_1c;
        if ((bVar8 & 0x80) == 0) {
          local_1c = (byte *)(uVar5 & 0x7f);
          param_13 = param_13 + 1;
        }
        else {
          local_1c = (byte *)(uVar5 & 0x3f);
          if ((bVar8 & 0x40) == 0) {
            param_13 = param_13 + 1 + (int)local_1c;
          }
          else {
            param_13 = param_13 + 2;
          }
        }
        local_8 = local_8 + (int)local_1c;
        local_10 = uVar5;
      } while ((int)local_1c < local_20);
    }
    if (param_9 < (int)(local_24 + (int)local_8)) {
      local_8 = (byte *)(param_9 - (int)local_24);
    }
    local_24 = local_24 + (int)local_8;
    puVar7 = puVar6;
    puVar11 = puVar10;
    pbVar12 = pbVar13;
    local_c = puVar6;
    if ((int)uVar3 <= (int)local_8) {
      do {
        local_28 = local_18 & 0x80;
        local_8 = local_8 + -uVar3;
        if (local_28 == 0) {
          puVar7 = puVar6;
          puVar10 = puVar11;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar9 & 1) == 1) {
                puVar11 = puVar11 + 1;
                puVar6 = puVar6 + 1;
              }
              iVar9 = iVar9 + 1;
              if (4 < iVar9) {
                iVar9 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar7 = puVar6;
              puVar10 = puVar11;
              local_c = puVar6;
            } while (uVar3 != 0);
          }
          goto LAB_0070201e;
        }
        if ((local_18 & 0x40) == 0) {
          if (iVar9 < 1) {
switchD_00701edb_default:
            puVar7 = puVar6;
            puVar10 = puVar11;
            if (0 < (int)uVar3) {
              pbVar12 = pbVar13 + 1;
              iVar4 = uVar3 - 1;
              iVar9 = 1;
              pbVar13 = pbVar12;
              if (0 < iVar4) {
                do {
                  if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                    *puVar11 = *(undefined1 *)((uint)*pbVar12 + param_16);
                  }
                  puVar7 = puVar6 + 1;
                  puVar10 = puVar11 + 1;
                  iVar9 = 2;
                  pbVar13 = pbVar12 + 1;
                  local_c = puVar7;
                  if (iVar4 + -1 < 1) break;
                  iVar9 = 3;
                  pbVar13 = pbVar12 + 2;
                  if (iVar4 + -2 < 1) break;
                  if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
                    *puVar10 = *(undefined1 *)((uint)pbVar12[2] + param_16);
                  }
                  puVar6 = puVar6 + 2;
                  puVar11 = puVar11 + 2;
                  iVar9 = 4;
                  puVar7 = puVar6;
                  puVar10 = puVar11;
                  pbVar13 = pbVar12 + 3;
                  local_c = puVar6;
                  if (iVar4 + -3 < 1) break;
                  iVar9 = 0;
                  pbVar13 = pbVar12 + 4;
                  if (iVar4 + -4 < 1) break;
                  pbVar12 = pbVar12 + 5;
                  iVar4 = iVar4 + -5;
                  iVar9 = 1;
                  pbVar13 = pbVar12;
                } while (0 < iVar4);
              }
            }
          }
          else {
            switch(iVar9) {
            case 1:
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar11 = *(undefined1 *)((uint)*pbVar13 + param_16);
              }
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar3 = uVar3 - 1;
              iVar9 = 2;
              puVar7 = puVar6;
              puVar10 = puVar11;
              local_c = puVar6;
              if ((int)uVar3 < 1) goto LAB_0070201e;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00701edb_caseD_3;
            case 4:
              goto switchD_00701edb_caseD_4;
            default:
              goto switchD_00701edb_default;
            }
            pbVar13 = pbVar13 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 3;
            puVar7 = puVar6;
            puVar10 = puVar11;
            if (0 < (int)uVar3) {
switchD_00701edb_caseD_3:
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar11 = *(undefined1 *)((uint)*pbVar13 + param_16);
              }
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
              pbVar13 = pbVar13 + 1;
              uVar3 = uVar3 - 1;
              iVar9 = 4;
              puVar7 = puVar6;
              puVar10 = puVar11;
              local_c = puVar6;
              if (0 < (int)uVar3) {
switchD_00701edb_caseD_4:
                pbVar13 = pbVar13 + 1;
                iVar9 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_00701edb_default;
              }
            }
          }
        }
        else if (iVar9 < 1) {
switchD_00701dba_default:
          puVar7 = puVar6;
          puVar10 = puVar11;
          if (0 < (int)uVar3) {
            iVar4 = uVar3 - 1;
            iVar9 = 1;
            if (0 < iVar4) {
              while( true ) {
                if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                  *puVar11 = uVar1;
                }
                puVar7 = puVar6 + 1;
                puVar10 = puVar11 + 1;
                iVar9 = 2;
                local_c = puVar7;
                if ((iVar4 + -1 < 1) || (iVar9 = 3, iVar4 + -2 < 1)) break;
                if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
                  *puVar10 = uVar1;
                }
                puVar6 = puVar6 + 2;
                puVar11 = puVar11 + 2;
                iVar9 = 4;
                puVar7 = puVar6;
                puVar10 = puVar11;
                local_c = puVar6;
                if ((iVar4 + -3 < 1) || (iVar9 = 0, iVar4 + -4 < 1)) break;
                iVar4 = iVar4 + -5;
                iVar9 = 1;
                if (iVar4 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar9) {
          case 1:
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar11 = uVar1;
            }
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 2;
            puVar7 = puVar6;
            puVar10 = puVar11;
            local_c = puVar6;
            if ((int)uVar3 < 1) goto LAB_0070201e;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00701dba_caseD_3;
          case 4:
            goto switchD_00701dba_caseD_4;
          default:
            goto switchD_00701dba_default;
          }
          uVar3 = uVar3 - 1;
          iVar9 = 3;
          puVar7 = puVar6;
          puVar10 = puVar11;
          if (0 < (int)uVar3) {
switchD_00701dba_caseD_3:
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar11 = uVar1;
            }
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 4;
            puVar7 = puVar6;
            puVar10 = puVar11;
            local_c = puVar6;
            if (0 < (int)uVar3) {
switchD_00701dba_caseD_4:
              iVar9 = 0;
              uVar3 = uVar3 - 1;
              goto switchD_00701dba_default;
            }
          }
        }
LAB_0070201e:
        if ((int)local_8 < 1) {
          uVar3 = 0;
          pbVar12 = pbVar13;
          break;
        }
        bVar8 = *pbVar13;
        local_18 = (uint)bVar8;
        pbVar12 = pbVar13 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar3 = local_18 & 0x7f;
        }
        else {
          uVar3 = local_18 & 0x3f;
          if ((bVar8 & 0x40) != 0) {
            uVar1 = *(undefined1 *)((uint)*pbVar12 + param_16);
            pbVar12 = pbVar13 + 2;
            puVar7 = local_c;
          }
        }
        puVar6 = puVar7;
        puVar11 = puVar10;
        pbVar13 = pbVar12;
      } while ((int)uVar3 <= (int)local_8);
    }
    uVar3 = uVar3 - (int)local_8;
    puVar11 = puVar10;
    if ((int)local_8 < 1) goto LAB_0070238b;
    if ((local_18 & 0x80) == 0) {
      if (-1 < (int)(local_8 + -1)) {
        param_6 = local_8;
        do {
          if (((byte)iVar9 & 1) == 1) {
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + 1;
          }
          iVar9 = iVar9 + 1;
          if (4 < iVar9) {
            iVar9 = 0;
          }
          param_6 = param_6 + -1;
          puVar11 = puVar10;
          local_c = puVar7;
        } while (param_6 != (byte *)0x0);
      }
      goto LAB_0070238b;
    }
    if ((local_18 & 0x40) == 0) {
      if (iVar9 < 1) goto switchD_00702204_default;
      switch(iVar9) {
      case 1:
        if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
          *puVar10 = *(undefined1 *)((uint)*pbVar12 + param_16);
        }
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + -1;
        iVar9 = 2;
        puVar11 = puVar10;
        local_c = puVar7;
        if ((int)local_8 < 1) break;
        goto LAB_00702247;
      case 2:
LAB_00702247:
        pbVar13 = pbVar12 + 1;
        local_8 = local_8 + -1;
        iVar9 = 3;
        puVar11 = puVar10;
        pbVar12 = pbVar13;
        if (0 < (int)local_8) {
LAB_0070225e:
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
            *puVar10 = *(undefined1 *)((uint)*pbVar13 + param_16);
          }
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          iVar9 = 4;
          puVar11 = puVar10;
          pbVar12 = pbVar13 + 1;
          local_c = puVar7;
          if (0 < (int)(local_8 + -1)) {
            iVar9 = 0;
            pbVar12 = pbVar13 + 2;
            local_8 = local_8 + -2;
            goto switchD_00702204_default;
          }
        }
        break;
      case 3:
        pbVar13 = pbVar12;
        goto LAB_0070225e;
      case 4:
        iVar9 = 0;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + -1;
      default:
switchD_00702204_default:
        puVar11 = puVar10;
        if (0 < (int)local_8) {
          pbVar13 = pbVar12 + 1;
          local_8 = local_8 + -1;
          iVar9 = 1;
          pbVar12 = pbVar13;
          if (0 < (int)local_8) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
                *puVar10 = *(undefined1 *)((uint)*pbVar13 + param_16);
              }
              local_c = puVar7 + 1;
              puVar11 = puVar10 + 1;
              iVar9 = 2;
              pbVar12 = pbVar13 + 1;
              if ((int)(local_8 + -1) < 1) break;
              iVar9 = 3;
              pbVar12 = pbVar13 + 2;
              if ((int)(local_8 + -2) < 1) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
                *puVar11 = *(undefined1 *)((uint)pbVar13[2] + param_16);
              }
              puVar7 = puVar7 + 2;
              puVar10 = puVar10 + 2;
              iVar9 = 4;
              puVar11 = puVar10;
              pbVar12 = pbVar13 + 3;
              local_c = puVar7;
              if ((int)(local_8 + -3) < 1) break;
              iVar9 = 0;
              pbVar12 = pbVar13 + 4;
              if ((int)(local_8 + -4) < 1) break;
              pbVar13 = pbVar13 + 5;
              local_8 = local_8 + -5;
              iVar9 = 1;
              pbVar12 = pbVar13;
            } while (0 < (int)local_8);
          }
        }
      }
      goto LAB_0070238b;
    }
    if (iVar9 < 1) goto switchD_007020ad_default;
    switch(iVar9) {
    case 1:
      if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
        *puVar10 = uVar1;
      }
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
      local_8 = local_8 + -1;
      iVar9 = 2;
      puVar11 = puVar10;
      local_c = puVar7;
      if ((int)local_8 < 1) break;
      goto LAB_007020e8;
    case 2:
LAB_007020e8:
      local_8 = local_8 + -1;
      iVar9 = 3;
      puVar11 = puVar10;
      if (0 < (int)local_8) {
LAB_007020fe:
        if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
          *puVar10 = uVar1;
        }
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
        iVar9 = 4;
        puVar11 = puVar10;
        local_c = puVar7;
        if (0 < (int)(local_8 + -1)) {
          iVar9 = 0;
          local_8 = local_8 + -2;
          goto switchD_007020ad_default;
        }
      }
      break;
    case 3:
      goto LAB_007020fe;
    case 4:
      iVar9 = 0;
      local_8 = local_8 + -1;
    default:
switchD_007020ad_default:
      puVar11 = puVar10;
      if (0 < (int)local_8) {
        local_8 = local_8 + -1;
        iVar9 = 1;
        if (0 < (int)local_8) {
          while( true ) {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar7)) {
              *puVar10 = uVar1;
            }
            local_c = puVar7 + 1;
            puVar11 = puVar10 + 1;
            iVar9 = 2;
            if (((int)(local_8 + -1) < 1) || (iVar9 = 3, (int)(local_8 + -2) < 1)) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
              *puVar11 = uVar1;
            }
            puVar7 = puVar7 + 2;
            puVar10 = puVar10 + 2;
            iVar9 = 4;
            puVar11 = puVar10;
            local_c = puVar7;
            if (((int)(local_8 + -3) < 1) || (iVar9 = 0, (int)(local_8 + -4) < 1)) break;
            local_8 = local_8 + -5;
            iVar9 = 1;
            if ((int)local_8 < 1) break;
          }
        }
      }
    }
LAB_0070238b:
    pbVar13 = pbVar12;
    if (((int)uVar3 < 1) && ((int)local_24 < param_9)) {
      bVar8 = *pbVar12;
      local_18 = (uint)bVar8;
      pbVar13 = pbVar12 + 1;
      if ((bVar8 & 0x80) == 0) {
        uVar3 = local_18 & 0x7f;
      }
      else {
        uVar3 = local_18 & 0x3f;
        if ((bVar8 & 0x40) != 0) {
          uVar1 = *(undefined1 *)((uint)*pbVar13 + param_16);
          pbVar13 = pbVar12 + 2;
        }
      }
    }
    if (local_20 <= (int)local_1c) {
      local_1c = local_1c + -local_20;
      break;
    }
    local_10 = (uint)*param_13;
    local_20 = local_20 - (int)local_1c;
    local_1c = (byte *)0x0;
    puVar6 = local_c;
    puVar10 = puVar11;
  }
  bVar8 = (byte)local_18;
  iVar9 = (param_14 - param_9) - param_15;
  if ((int)local_1c < iVar9) {
    do {
      iVar9 = iVar9 - (int)local_1c;
      bVar2 = *param_13;
      if ((bVar2 & 0x80) == 0) {
        local_1c = (byte *)(bVar2 & 0x7f);
        param_13 = param_13 + 1;
      }
      else {
        local_1c = (byte *)(bVar2 & 0x3f);
        if ((bVar2 & 0x40) == 0) {
          param_13 = param_13 + 1 + (int)local_1c;
        }
        else {
          param_13 = param_13 + 2;
        }
      }
    } while ((int)local_1c < iVar9);
  }
  iVar9 = (param_7 - param_8) - param_9;
  if ((int)uVar3 < iVar9) {
    do {
      iVar9 = iVar9 - uVar3;
      pbVar12 = pbVar13;
      if (((byte)local_18 & 0xc0) == 0x80) {
        pbVar12 = pbVar13 + uVar3;
      }
      bVar8 = *pbVar12;
      local_18 = (uint)bVar8;
      pbVar13 = pbVar12 + 1;
      uVar3 = local_18;
      if (((bVar8 & 0x80) != 0) && (uVar3 = local_18 & 0x3f, (bVar8 & 0x40) != 0)) {
        pbVar13 = pbVar12 + 2;
      }
    } while ((int)uVar3 < iVar9);
  }
  if ((bVar8 & 0xc0) == 0x80) {
    pbVar13 = pbVar13 + iVar9;
  }
LAB_0070248f:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_12 = param_12 + 1;
  pbVar12 = pbVar13;
  if (4 < (int)param_12) {
    param_12 = 0;
  }
  goto joined_r0x00701aee;
}

