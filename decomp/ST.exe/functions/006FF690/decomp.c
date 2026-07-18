
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ff690(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13,int param_14,int param_15,int param_16,byte *param_17,
                 int param_18,int param_19)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;
  
  pbVar6 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar8 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar9 = param_7;
      if (uVar8 != 0) {
        while( true ) {
          if ((uVar8 & 0x80) == 0) {
            uVar3 = uVar8 & 0x7f;
          }
          else if ((uVar8 & 0x40) == 0) {
            param_6 = param_6 + (uVar8 & 0x3f);
            uVar3 = uVar8 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar3 = uVar8 & 0x3f;
          }
          if ((int)(iVar9 - uVar3) < 1) break;
          uVar8 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar9 = iVar9 - uVar3;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_1c = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_1c == 0) goto LAB_007000f4;
    uVar8 = 0x80 >> ((byte)param_15 & 7);
    iVar9 = param_8;
    while( true ) {
      while ((local_1c & 0x80) == 0) {
        uVar3 = local_1c & 0x7f;
        if (iVar9 < (int)uVar3) goto LAB_006ff7b0;
        iVar9 = iVar9 - uVar3;
        bVar7 = *param_6;
        param_6 = param_6 + 1;
        local_1c = (uint)bVar7;
      }
      uVar3 = local_1c & 0x3f;
      if (iVar9 < (int)uVar3) break;
      if ((local_1c & 0x40) == 0) {
        iVar9 = iVar9 - uVar3;
        local_1c = (uint)param_6[uVar3];
        param_6 = param_6 + uVar3 + 1;
      }
      else {
        iVar9 = iVar9 - uVar3;
        local_1c = (uint)param_6[1];
        param_6 = param_6 + 2;
      }
    }
LAB_006ff7b0:
    uVar3 = uVar3 - iVar9;
    if (((byte)local_1c & 0xc0) == 0x80) {
      param_6 = param_6 + iVar9;
    }
    local_18 = param_9;
    iVar9 = param_11;
    puVar14 = param_1;
    puVar15 = param_1;
    local_14 = param_1;
    local_10 = param_17;
    local_c = pbVar6;
    local_8 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_18 = local_18 - uVar3;
        if ((local_1c & 0x80) == 0) {
          puVar14 = puVar15;
          pbVar13 = param_6;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar9 & 1) == 1) {
                puVar15 = puVar15 + 1;
                local_10 = local_10 + 1;
                local_8 = local_8 + 1;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
              }
              iVar9 = iVar9 + 1;
              if (4 < iVar9) {
                iVar9 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar14 = puVar15;
              puVar2 = puVar15;
              pbVar11 = local_10;
              puVar10 = local_8;
            } while (uVar3 != 0);
          }
          goto LAB_006ffc16;
        }
        if ((local_1c & 0x40) == 0) {
          if (iVar9 < 1) goto switchD_006ffa14_default;
          switch(iVar9) {
          case 1:
            if ((*local_c & (byte)uVar8) == 0) {
              if (*local_8 < param_5) {
                *puVar15 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              else {
                *puVar15 = *(undefined1 *)((uint)*param_6 + param_16);
              }
            }
            iVar9 = 2;
            local_8 = local_8 + 1;
            puVar15 = puVar15 + 1;
            local_10 = local_10 + 1;
            uVar8 = uVar8 >> 1;
            if (uVar8 == 0) {
              uVar8 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            puVar14 = puVar15;
            pbVar13 = param_6;
            puVar2 = puVar15;
            local_14 = puVar15;
            pbVar11 = local_10;
            puVar10 = local_8;
            if ((int)uVar3 < 1) break;
            goto LAB_006ffa8e;
          case 2:
LAB_006ffa8e:
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar9 = 3;
            puVar14 = puVar15;
            pbVar13 = param_6;
            puVar2 = local_14;
            pbVar11 = local_10;
            puVar10 = local_8;
            if (0 < (int)uVar3) {
LAB_006ffaa5:
              if ((*local_c & (byte)uVar8) == 0) {
                if (*local_8 < param_5) {
                  bVar7 = *local_10;
                  iVar9 = param_19;
                }
                else {
                  bVar7 = *param_6;
                  iVar9 = param_16;
                }
                *puVar15 = *(undefined1 *)((uint)bVar7 + iVar9);
              }
              local_8 = local_8 + 1;
              puVar15 = puVar15 + 1;
              local_10 = local_10 + 1;
              uVar8 = uVar8 >> 1;
              if (uVar8 == 0) {
                uVar8 = 0x80;
                local_c = local_c + 1;
              }
              iVar9 = 4;
              puVar14 = puVar15;
              pbVar13 = param_6 + 1;
              puVar2 = puVar15;
              pbVar11 = local_10;
              puVar10 = local_8;
              if (0 < (int)(uVar3 - 1)) {
                param_6 = param_6 + 2;
                iVar9 = 0;
                uVar3 = uVar3 - 2;
                local_14 = puVar15;
                goto switchD_006ffa14_default;
              }
            }
            break;
          case 3:
            goto LAB_006ffaa5;
          case 4:
            iVar9 = 0;
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
          default:
switchD_006ffa14_default:
            puVar14 = puVar15;
            pbVar13 = param_6;
            puVar2 = local_14;
            pbVar11 = local_10;
            puVar10 = local_8;
            if (0 < (int)uVar3) {
              pbVar12 = param_6 + 1;
              for (iVar4 = uVar3 - 1; iVar9 = 1, puVar14 = puVar15, pbVar13 = pbVar12,
                  puVar2 = local_14, pbVar11 = local_10, puVar10 = local_8, 0 < iVar4;
                  iVar4 = iVar4 + -5) {
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*local_8 < param_5) {
                    bVar7 = *local_10;
                    iVar9 = param_19;
                  }
                  else {
                    bVar7 = *pbVar12;
                    iVar9 = param_16;
                  }
                  *puVar15 = *(undefined1 *)((uint)bVar7 + iVar9);
                }
                iVar9 = 2;
                puVar10 = local_8 + 1;
                puVar14 = puVar15 + 1;
                pbVar11 = local_10 + 1;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                pbVar13 = pbVar12 + 1;
                puVar2 = puVar14;
                if (iVar4 + -1 < 1) break;
                iVar9 = 3;
                pbVar13 = pbVar12 + 2;
                if (iVar4 + -2 < 1) break;
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*puVar10 < param_5) {
                    bVar7 = *pbVar11;
                    iVar9 = param_19;
                  }
                  else {
                    bVar7 = pbVar12[2];
                    iVar9 = param_16;
                  }
                  *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
                }
                local_8 = local_8 + 2;
                puVar15 = puVar15 + 2;
                local_10 = local_10 + 2;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                iVar9 = 4;
                puVar14 = puVar15;
                pbVar13 = pbVar12 + 3;
                puVar2 = puVar15;
                pbVar11 = local_10;
                puVar10 = local_8;
                if (iVar4 + -3 < 1) break;
                iVar9 = 0;
                pbVar13 = pbVar12 + 4;
                if (iVar4 + -4 < 1) break;
                pbVar12 = pbVar12 + 5;
                local_14 = puVar15;
              }
            }
          }
          goto LAB_006ffc16;
        }
        uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
        pbVar13 = param_6 + 1;
        if (iVar9 < 1) goto switchD_006ff820_default;
        switch(iVar9) {
        case 1:
          if ((*local_c & (byte)uVar8) == 0) {
            if (*local_8 < param_5) {
              *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
            }
            else {
              *local_14 = uVar1;
            }
          }
          iVar9 = 2;
          local_8 = local_8 + 1;
          local_14 = local_14 + 1;
          local_10 = local_10 + 1;
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          uVar3 = uVar3 - 1;
          puVar14 = local_14;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if ((int)uVar3 < 1) break;
          goto LAB_006ff891;
        case 2:
LAB_006ff891:
          uVar3 = uVar3 - 1;
          iVar9 = 3;
          puVar14 = local_14;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if (0 < (int)uVar3) {
LAB_006ff8a4:
            if ((*local_c & (byte)uVar8) == 0) {
              if (*local_8 < param_5) {
                *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              else {
                *local_14 = uVar1;
              }
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 1;
            local_10 = local_10 + 1;
            uVar8 = uVar8 >> 1;
            if (uVar8 == 0) {
              uVar8 = 0x80;
              local_c = local_c + 1;
            }
            iVar9 = 4;
            puVar14 = local_14;
            puVar2 = local_14;
            pbVar11 = local_10;
            puVar10 = local_8;
            if (0 < (int)(uVar3 - 1)) {
              iVar9 = 0;
              uVar3 = uVar3 - 2;
              goto switchD_006ff820_default;
            }
          }
          break;
        case 3:
          goto LAB_006ff8a4;
        case 4:
          iVar9 = 0;
          uVar3 = uVar3 - 1;
        default:
switchD_006ff820_default:
          puVar14 = local_14;
          puVar2 = local_14;
          pbVar11 = local_10;
          puVar10 = local_8;
          if (0 < (int)uVar3) {
            iVar4 = uVar3 - 1;
            iVar9 = 1;
            if (0 < iVar4) {
              while( true ) {
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*local_8 < param_5) {
                    *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
                  }
                  else {
                    *local_14 = uVar1;
                  }
                }
                iVar9 = 2;
                puVar10 = local_8 + 1;
                puVar14 = local_14 + 1;
                pbVar11 = local_10 + 1;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                puVar2 = puVar14;
                if ((iVar4 + -1 < 1) || (iVar9 = 3, iVar4 + -2 < 1)) break;
                if ((*local_c & (byte)uVar8) == 0) {
                  if (*puVar10 < param_5) {
                    *puVar14 = *(undefined1 *)((uint)*pbVar11 + param_19);
                  }
                  else {
                    *puVar14 = uVar1;
                  }
                }
                local_8 = local_8 + 2;
                local_14 = local_14 + 2;
                local_10 = local_10 + 2;
                uVar8 = uVar8 >> 1;
                if (uVar8 == 0) {
                  uVar8 = 0x80;
                  local_c = local_c + 1;
                }
                iVar9 = 4;
                puVar14 = local_14;
                puVar2 = local_14;
                pbVar11 = local_10;
                puVar10 = local_8;
                if ((iVar4 + -3 < 1) || (iVar9 = 0, iVar4 + -4 < 1)) break;
                iVar4 = iVar4 + -5;
                iVar9 = 1;
                if (iVar4 < 1) break;
              }
            }
          }
        }
LAB_006ffc16:
        local_8 = puVar10;
        local_10 = pbVar11;
        local_14 = puVar2;
        param_6 = pbVar13;
        if (local_18 < 1) {
          uVar3 = 0;
          break;
        }
        bVar7 = *param_6;
        local_1c = (uint)bVar7;
        param_6 = param_6 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar3 = bVar7 & 0x7f;
        }
        else {
          uVar3 = bVar7 & 0x3f;
        }
        puVar15 = puVar14;
      } while ((int)uVar3 <= local_18);
    }
    uVar3 = uVar3 - local_18;
    pbVar13 = param_6;
    if ((local_18 < 1) || ((local_1c & 0x80) == 0)) goto LAB_0070009c;
    if ((local_1c & 0x40) == 0) {
      if (iVar9 < 1) goto switchD_006ffea8_default;
      switch(iVar9) {
      case 1:
        if ((*local_c & (byte)uVar8) == 0) {
          if (*local_8 < param_5) {
            bVar7 = *local_10;
            iVar9 = param_19;
          }
          else {
            bVar7 = *param_6;
            iVar9 = param_16;
          }
          *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
        }
        local_8 = local_8 + 1;
        puVar14 = puVar14 + 1;
        local_10 = local_10 + 1;
        uVar8 = uVar8 >> 1;
        if (uVar8 == 0) {
          uVar8 = 0x80;
          local_c = local_c + 1;
        }
        param_6 = param_6 + 1;
        local_18 = local_18 + -1;
        pbVar13 = param_6;
        if (local_18 < 1) break;
        goto LAB_006fff19;
      case 2:
LAB_006fff19:
        param_6 = param_6 + 1;
        local_18 = local_18 + -1;
        pbVar13 = param_6;
        if (0 < local_18) {
LAB_006fff2e:
          if ((*local_c & (byte)uVar8) == 0) {
            if (*local_8 < param_5) {
              bVar7 = *local_10;
              iVar9 = param_19;
            }
            else {
              bVar7 = *param_6;
              iVar9 = param_16;
            }
            *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
          }
          local_8 = local_8 + 1;
          puVar14 = puVar14 + 1;
          local_10 = local_10 + 1;
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          pbVar13 = param_6 + 1;
          if (0 < local_18 + -1) {
            param_6 = param_6 + 2;
            local_18 = local_18 + -2;
            goto switchD_006ffea8_default;
          }
        }
        break;
      case 3:
        goto LAB_006fff2e;
      case 4:
        param_6 = param_6 + 1;
        local_18 = local_18 + -1;
      default:
switchD_006ffea8_default:
        pbVar13 = param_6;
        if (0 < local_18) {
          param_6 = param_6 + 1;
          local_18 = local_18 + -1;
          pbVar13 = param_6;
          if (0 < local_18) {
            while( true ) {
              if ((*local_c & (byte)uVar8) == 0) {
                if (*local_8 < param_5) {
                  bVar7 = *local_10;
                  iVar9 = param_19;
                }
                else {
                  bVar7 = *param_6;
                  iVar9 = param_16;
                }
                *puVar14 = *(undefined1 *)((uint)bVar7 + iVar9);
              }
              uVar8 = uVar8 >> 1;
              if (uVar8 == 0) {
                uVar8 = 0x80;
                local_c = local_c + 1;
              }
              pbVar13 = param_6 + 1;
              if ((local_18 + -1 < 1) || (pbVar13 = param_6 + 2, local_18 + -2 < 1)) break;
              if ((*local_c & (byte)uVar8) == 0) {
                if (local_8[1] < param_5) {
                  bVar7 = local_10[1];
                  iVar9 = param_19;
                }
                else {
                  bVar7 = param_6[2];
                  iVar9 = param_16;
                }
                puVar14[1] = *(undefined1 *)((uint)bVar7 + iVar9);
              }
              local_8 = local_8 + 2;
              puVar14 = puVar14 + 2;
              local_10 = local_10 + 2;
              uVar8 = uVar8 >> 1;
              if (uVar8 == 0) {
                uVar8 = 0x80;
                local_c = local_c + 1;
              }
              pbVar13 = param_6 + 3;
              if ((local_18 + -3 < 1) || (pbVar13 = param_6 + 4, local_18 + -4 < 1)) break;
              param_6 = param_6 + 5;
              local_18 = local_18 + -5;
              pbVar13 = param_6;
              if (local_18 < 1) break;
            }
          }
        }
      }
      goto LAB_0070009c;
    }
    uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
    pbVar13 = param_6 + 1;
    if (iVar9 < 1) goto switchD_006ffcd8_default;
    switch(iVar9) {
    case 1:
      if ((*local_c & (byte)uVar8) == 0) {
        if (*local_8 < param_5) {
          *local_14 = *(undefined1 *)((uint)*local_10 + param_19);
        }
        else {
          *local_14 = uVar1;
        }
      }
      local_8 = local_8 + 1;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      uVar8 = uVar8 >> 1;
      if (uVar8 == 0) {
        uVar8 = 0x80;
        local_c = local_c + 1;
      }
      local_18 = local_18 + -1;
      if (local_18 < 1) break;
      goto LAB_006ffd48;
    case 2:
LAB_006ffd48:
      local_18 = local_18 + -1;
      if (0 < local_18) {
LAB_006ffd5f:
        if ((*local_c & (byte)uVar8) == 0) {
          uVar5 = uVar1;
          if (*local_8 < param_5) {
            uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
          }
          *local_14 = uVar5;
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        local_10 = local_10 + 1;
        uVar8 = uVar8 >> 1;
        if (uVar8 == 0) {
          uVar8 = 0x80;
          local_c = local_c + 1;
        }
        if (0 < local_18 + -1) {
          local_18 = local_18 + -2;
          goto switchD_006ffcd8_default;
        }
      }
      break;
    case 3:
      goto LAB_006ffd5f;
    case 4:
      local_18 = local_18 + -1;
    default:
switchD_006ffcd8_default:
      if ((0 < local_18) && (local_18 = local_18 + -1, 0 < local_18)) {
        while( true ) {
          if ((*local_c & (byte)uVar8) == 0) {
            uVar5 = uVar1;
            if (*local_8 < param_5) {
              uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
            }
            *local_14 = uVar5;
          }
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          if (local_18 + -2 < 1) break;
          if ((*local_c & (byte)uVar8) == 0) {
            uVar5 = uVar1;
            if (local_8[1] < param_5) {
              uVar5 = *(undefined1 *)((uint)local_10[1] + param_19);
            }
            local_14[1] = uVar5;
          }
          local_8 = local_8 + 2;
          local_14 = local_14 + 2;
          local_10 = local_10 + 2;
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) {
            uVar8 = 0x80;
            local_c = local_c + 1;
          }
          if ((local_18 + -4 < 1) || (local_18 = local_18 + -5, local_18 < 1)) break;
        }
      }
    }
LAB_0070009c:
    param_6 = pbVar13;
    iVar9 = (param_7 - param_8) - param_9;
    bVar7 = (byte)local_1c;
    if ((int)uVar3 < iVar9) {
      do {
        iVar9 = iVar9 - uVar3;
        pbVar13 = param_6;
        if (((byte)local_1c & 0xc0) == 0x80) {
          pbVar13 = param_6 + uVar3;
        }
        bVar7 = *pbVar13;
        local_1c = (uint)bVar7;
        param_6 = pbVar13 + 1;
        uVar3 = local_1c;
        if (((bVar7 & 0x80) != 0) && (uVar3 = local_1c & 0x3f, (bVar7 & 0x40) != 0)) {
          param_6 = pbVar13 + 2;
        }
      } while ((int)uVar3 < iVar9);
    }
    if ((bVar7 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar9;
    }
LAB_007000f4:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_17 = param_17 + param_18;
    pbVar6 = pbVar6 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

