
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00704460(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,uint param_14,int param_15,int param_16,int param_17,
                 int param_18)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  ushort *puVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;

  pbVar3 = (byte *)(param_16 + (param_18 >> 3));
  _DAT_00857000 = 1;
  do {
    param_12 = param_12 + -1;
    if (param_12 < 0) {
      return;
    }
    while (((param_14 & 1) == 0 && (param_12 = param_12 + -1, -1 < param_12))) {
      uVar5 = (uint)*param_8;
      param_8 = param_8 + 1;
      iVar9 = param_9;
      if (uVar5 != 0) {
        while( true ) {
          if ((uVar5 & 0x80) == 0) {
            uVar1 = uVar5 & 0x7f;
          }
          else if ((uVar5 & 0x40) == 0) {
            param_8 = param_8 + (uVar5 & 0x3f);
            uVar1 = uVar5 & 0x3f;
          }
          else {
            param_8 = param_8 + 1;
            uVar1 = uVar5 & 0x3f;
          }
          if ((int)(iVar9 - uVar1) < 1) break;
          uVar5 = (uint)*param_8;
          param_8 = param_8 + 1;
          iVar9 = iVar9 - uVar1;
        }
      }
      param_14 = param_14 + 1;
      if (4 < (int)param_14) {
        param_14 = 0;
      }
    }
    local_18 = (uint)*param_8;
    param_8 = param_8 + 1;
    if (local_18 == 0) goto LAB_00704bf4;
    uVar5 = 0x80 >> ((byte)param_18 & 7);
    iVar9 = param_10;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar1 = local_18 & 0x7f;
        if (iVar9 < (int)uVar1) goto LAB_0070457d;
        iVar9 = iVar9 - uVar1;
        bVar4 = *param_8;
        param_8 = param_8 + 1;
        local_18 = (uint)bVar4;
      }
      uVar1 = local_18 & 0x3f;
      if (iVar9 < (int)uVar1) break;
      if ((local_18 & 0x40) == 0) {
        iVar9 = iVar9 - uVar1;
        local_18 = (uint)param_8[uVar1];
        param_8 = param_8 + uVar1 + 1;
      }
      else {
        iVar9 = iVar9 - uVar1;
        local_18 = (uint)param_8[1];
        param_8 = param_8 + 2;
      }
    }
LAB_0070457d:
    uVar1 = uVar1 - iVar9;
    if (((byte)local_18 & 0xc0) == 0x80) {
      param_8 = param_8 + iVar9;
    }
    local_14 = param_11;
    iVar9 = param_13;
    puVar12 = param_1;
    local_10 = param_3;
    local_c = pbVar3;
    local_8 = param_5;
    if ((int)uVar1 <= param_11) {
      do {
        local_14 = local_14 - uVar1;
        if ((local_18 & 0x80) == 0) {
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if (-1 < (int)(uVar1 - 1)) {
            do {
              if (((byte)iVar9 & 1) == 1) {
                puVar12 = puVar12 + 1;
                local_10 = local_10 + 1;
                local_8 = local_8 + 1;
                uVar5 = uVar5 >> 1;
                if (uVar5 == 0) {
                  uVar5 = 0x80;
                  local_c = local_c + 1;
                }
              }
              iVar9 = iVar9 + 1;
              if (4 < iVar9) {
                iVar9 = 0;
              }
              uVar1 = uVar1 - 1;
              pbVar8 = local_10;
              puVar7 = local_8;
            } while (uVar1 != 0);
          }
          goto LAB_00704965;
        }
        if ((local_18 & 0x40) != 0) {
          pbVar6 = param_8 + 1;
          if (iVar9 < 1) {
switchD_007045dc_default:
            pbVar8 = local_10;
            puVar7 = local_8;
            if (0 < (int)uVar1) {
              iVar2 = uVar1 - 1;
              iVar9 = 1;
              puVar11 = puVar12;
              if (0 < iVar2) {
                while( true ) {
                  if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                    *puVar11 = *(undefined1 *)((uint)*local_10 + param_15);
                  }
                  iVar9 = 2;
                  puVar7 = local_8 + 1;
                  puVar12 = puVar11 + 1;
                  pbVar8 = local_10 + 1;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_c = local_c + 1;
                  }
                  if ((iVar2 + -1 < 1) || (iVar9 = 3, iVar2 + -2 < 1)) break;
                  if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *puVar7)) {
                    *puVar12 = *(undefined1 *)((uint)*pbVar8 + param_15);
                  }
                  local_8 = local_8 + 2;
                  puVar12 = puVar11 + 2;
                  local_10 = local_10 + 2;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_c = local_c + 1;
                  }
                  iVar9 = 4;
                  pbVar8 = local_10;
                  puVar7 = local_8;
                  if ((iVar2 + -3 < 1) || (iVar9 = 0, iVar2 + -4 < 1)) break;
                  iVar2 = iVar2 + -5;
                  iVar9 = 1;
                  puVar11 = puVar12;
                  if (iVar2 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar9) {
            case 1:
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              iVar9 = 2;
              local_8 = local_8 + 1;
              puVar12 = puVar12 + 1;
              local_10 = local_10 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              uVar1 = uVar1 - 1;
              pbVar8 = local_10;
              puVar7 = local_8;
              if ((int)uVar1 < 1) goto LAB_00704965;
              break;
            case 2:
              break;
            case 3:
              goto switchD_007045dc_caseD_3;
            case 4:
              goto switchD_007045dc_caseD_4;
            default:
              goto switchD_007045dc_default;
            }
            uVar1 = uVar1 - 1;
            iVar9 = 3;
            pbVar8 = local_10;
            puVar7 = local_8;
            if (0 < (int)uVar1) {
switchD_007045dc_caseD_3:
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              local_8 = local_8 + 1;
              puVar12 = puVar12 + 1;
              local_10 = local_10 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              uVar1 = uVar1 - 1;
              iVar9 = 4;
              pbVar8 = local_10;
              puVar7 = local_8;
              if (0 < (int)uVar1) {
switchD_007045dc_caseD_4:
                iVar9 = 0;
                uVar1 = uVar1 - 1;
                goto switchD_007045dc_default;
              }
            }
          }
          goto LAB_00704965;
        }
        if (iVar9 < 1) goto switchD_00704798_default;
        switch(iVar9) {
        case 1:
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
            *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
          }
          iVar9 = 2;
          local_8 = local_8 + 1;
          puVar12 = puVar12 + 1;
          local_10 = local_10 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          param_8 = param_8 + 1;
          uVar1 = uVar1 - 1;
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if ((int)uVar1 < 1) break;
          goto LAB_007047fe;
        case 2:
LAB_007047fe:
          param_8 = param_8 + 1;
          uVar1 = uVar1 - 1;
          iVar9 = 3;
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if (0 < (int)uVar1) {
LAB_00704815:
            if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
              *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
            }
            local_8 = local_8 + 1;
            puVar12 = puVar12 + 1;
            local_10 = local_10 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            iVar9 = 4;
            pbVar6 = param_8 + 1;
            pbVar8 = local_10;
            puVar7 = local_8;
            if (0 < (int)(uVar1 - 1)) {
              param_8 = param_8 + 2;
              iVar9 = 0;
              uVar1 = uVar1 - 2;
              goto switchD_00704798_default;
            }
          }
          break;
        case 3:
          goto LAB_00704815;
        case 4:
          iVar9 = 0;
          param_8 = param_8 + 1;
          uVar1 = uVar1 - 1;
        default:
switchD_00704798_default:
          pbVar6 = param_8;
          pbVar8 = local_10;
          puVar7 = local_8;
          if (0 < (int)uVar1) {
            pbVar10 = param_8 + 1;
            puVar11 = puVar12;
            for (iVar2 = uVar1 - 1; iVar9 = 1, puVar12 = puVar11, pbVar6 = pbVar10,
                pbVar8 = local_10, puVar7 = local_8, 0 < iVar2; iVar2 = iVar2 + -5) {
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar11 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              iVar9 = 2;
              puVar7 = local_8 + 1;
              puVar12 = puVar11 + 1;
              pbVar8 = local_10 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              pbVar6 = pbVar10 + 1;
              if (iVar2 + -1 < 1) break;
              iVar9 = 3;
              pbVar6 = pbVar10 + 2;
              if (iVar2 + -2 < 1) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *puVar7)) {
                *puVar12 = *(undefined1 *)((uint)*pbVar8 + param_15);
              }
              local_8 = local_8 + 2;
              puVar12 = puVar11 + 2;
              local_10 = local_10 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar9 = 4;
              pbVar6 = pbVar10 + 3;
              pbVar8 = local_10;
              puVar7 = local_8;
              if (iVar2 + -3 < 1) break;
              iVar9 = 0;
              pbVar6 = pbVar10 + 4;
              if (iVar2 + -4 < 1) break;
              pbVar10 = pbVar10 + 5;
              puVar11 = puVar12;
            }
          }
        }
LAB_00704965:
        local_8 = puVar7;
        local_10 = pbVar8;
        param_8 = pbVar6;
        if (local_14 < 1) {
          uVar1 = 0;
          break;
        }
        bVar4 = *param_8;
        local_18 = (uint)bVar4;
        param_8 = param_8 + 1;
        if ((bVar4 & 0x80) == 0) {
          uVar1 = bVar4 & 0x7f;
        }
        else {
          uVar1 = bVar4 & 0x3f;
        }
      } while ((int)uVar1 <= local_14);
    }
    uVar1 = uVar1 - local_14;
    pbVar6 = param_8;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_00704b9c;
    if ((local_18 & 0x40) == 0) {
      if (iVar9 < 1) goto switchD_00704c56_default;
      switch(iVar9) {
      case 1:
        if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
          *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
        }
        local_8 = local_8 + 1;
        puVar12 = puVar12 + 1;
        local_10 = local_10 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_c = local_c + 1;
        }
        param_8 = param_8 + 1;
        local_14 = local_14 + -1;
        pbVar6 = param_8;
        if (local_14 < 1) break;
        goto LAB_00704cbb;
      case 2:
LAB_00704cbb:
        param_8 = param_8 + 1;
        local_14 = local_14 + -1;
        pbVar6 = param_8;
        if (0 < local_14) {
LAB_00704cd0:
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
            *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
          }
          local_8 = local_8 + 1;
          puVar12 = puVar12 + 1;
          local_10 = local_10 + 1;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          pbVar6 = param_8 + 1;
          if (0 < local_14 + -1) {
            param_8 = param_8 + 2;
            local_14 = local_14 + -2;
            goto switchD_00704c56_default;
          }
        }
        break;
      case 3:
        goto LAB_00704cd0;
      case 4:
        param_8 = param_8 + 1;
        local_14 = local_14 + -1;
      default:
switchD_00704c56_default:
        pbVar6 = param_8;
        if (0 < local_14) {
          param_8 = param_8 + 1;
          local_14 = local_14 + -1;
          pbVar6 = param_8;
          if (0 < local_14) {
            while( true ) {
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
                *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              pbVar6 = param_8 + 1;
              if ((local_14 + -1 < 1) || (pbVar6 = param_8 + 2, local_14 + -2 < 1)) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_7 <= local_8[1])) {
                puVar12[1] = *(undefined1 *)((uint)local_10[1] + param_15);
              }
              local_8 = local_8 + 2;
              puVar12 = puVar12 + 2;
              local_10 = local_10 + 2;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              pbVar6 = param_8 + 3;
              if ((local_14 + -3 < 1) || (pbVar6 = param_8 + 4, local_14 + -4 < 1)) break;
              param_8 = param_8 + 5;
              local_14 = local_14 + -5;
              pbVar6 = param_8;
              if (local_14 < 1) break;
            }
          }
        }
      }
      goto LAB_00704b9c;
    }
    pbVar6 = param_8 + 1;
    if (iVar9 < 1) goto switchD_00704a13_default;
    switch(iVar9) {
    case 1:
      if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
        *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
      }
      local_8 = local_8 + 1;
      puVar12 = puVar12 + 1;
      local_10 = local_10 + 1;
      uVar5 = uVar5 >> 1;
      if (uVar5 == 0) {
        uVar5 = 0x80;
        local_c = local_c + 1;
      }
      local_14 = local_14 + -1;
      if (local_14 < 1) break;
      goto LAB_00704a76;
    case 2:
LAB_00704a76:
      local_14 = local_14 + -1;
      if (0 < local_14) {
LAB_00704a8a:
        if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
          *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
        }
        local_8 = local_8 + 1;
        puVar12 = puVar12 + 1;
        local_10 = local_10 + 1;
        uVar5 = uVar5 >> 1;
        if (uVar5 == 0) {
          uVar5 = 0x80;
          local_c = local_c + 1;
        }
        if (0 < local_14 + -1) {
          local_14 = local_14 + -2;
          goto switchD_00704a13_default;
        }
      }
      break;
    case 3:
      goto LAB_00704a8a;
    case 4:
      local_14 = local_14 + -1;
    default:
switchD_00704a13_default:
      if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
        while( true ) {
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= *local_8)) {
            *puVar12 = *(undefined1 *)((uint)*local_10 + param_15);
          }
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          if (local_14 + -2 < 1) break;
          if (((*local_c & (byte)uVar5) == 0) && (param_7 <= local_8[1])) {
            puVar12[1] = *(undefined1 *)((uint)local_10[1] + param_15);
          }
          local_8 = local_8 + 2;
          puVar12 = puVar12 + 2;
          local_10 = local_10 + 2;
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) {
            uVar5 = 0x80;
            local_c = local_c + 1;
          }
          if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
        }
      }
    }
LAB_00704b9c:
    param_8 = pbVar6;
    iVar9 = (param_9 - param_10) - param_11;
    bVar4 = (byte)local_18;
    if ((int)uVar1 < iVar9) {
      do {
        iVar9 = iVar9 - uVar1;
        pbVar6 = param_8;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar6 = param_8 + uVar1;
        }
        bVar4 = *pbVar6;
        local_18 = (uint)bVar4;
        param_8 = pbVar6 + 1;
        uVar1 = local_18;
        if (((bVar4 & 0x80) != 0) && (uVar1 = local_18 & 0x3f, (bVar4 & 0x40) != 0)) {
          param_8 = pbVar6 + 2;
        }
      } while ((int)uVar1 < iVar9);
    }
    if ((bVar4 & 0xc0) == 0x80) {
      param_8 = param_8 + iVar9;
    }
LAB_00704bf4:
    param_1 = param_1 + param_2;
    param_5 = (ushort *)((int)param_5 + param_6);
    param_3 = param_3 + param_4;
    pbVar3 = pbVar3 + param_17;
    param_14 = param_14 + 1;
    if (4 < (int)param_14) {
      param_14 = 0;
    }
  } while( true );
}

