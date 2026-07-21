
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fd430(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 int param_13,int param_14,int param_15,byte *param_16,int param_17,int param_18)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_18;
  int local_14;
  byte *local_10;
  ushort *local_c;
  byte *local_8;

  pbVar5 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar6 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar8 = param_7;
      if (uVar6 != 0) {
        while( true ) {
          if ((uVar6 & 0x80) == 0) {
            uVar1 = uVar6 & 0x7f;
          }
          else if ((uVar6 & 0x40) == 0) {
            param_6 = param_6 + (uVar6 & 0x3f);
            uVar1 = uVar6 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar1 = uVar6 & 0x3f;
          }
          if ((int)(iVar8 - uVar1) < 1) break;
          uVar6 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar8 = iVar8 - uVar1;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 == 0) goto LAB_006fdbfd;
    uVar6 = 0x80 >> ((byte)param_15 & 7);
    iVar8 = param_8;
    while( true ) {
      while ((local_18 & 0x80) == 0) {
        uVar1 = local_18 & 0x7f;
        if (iVar8 < (int)uVar1) goto LAB_006fd54d;
        iVar8 = iVar8 - uVar1;
        bVar4 = *param_6;
        param_6 = param_6 + 1;
        local_18 = (uint)bVar4;
      }
      uVar1 = local_18 & 0x3f;
      if (iVar8 < (int)uVar1) break;
      if ((local_18 & 0x40) == 0) {
        iVar8 = iVar8 - uVar1;
        local_18 = (uint)param_6[uVar1];
        param_6 = param_6 + uVar1 + 1;
      }
      else {
        iVar8 = iVar8 - uVar1;
        local_18 = (uint)param_6[1];
        param_6 = param_6 + 2;
      }
    }
LAB_006fd54d:
    uVar1 = uVar1 - iVar8;
    if (((byte)local_18 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar8;
    }
    local_14 = param_9;
    iVar8 = param_11;
    pbVar12 = param_1;
    pbVar13 = param_1;
    local_10 = pbVar5;
    local_c = param_3;
    local_8 = param_16;
    if ((int)uVar1 <= param_9) {
      do {
        local_14 = local_14 - uVar1;
        if ((local_18 & 0x80) == 0) {
          pbVar12 = pbVar13;
          pbVar9 = param_6;
          puVar7 = local_c;
          pbVar10 = local_8;
          if (-1 < (int)(uVar1 - 1)) {
            do {
              if (((byte)iVar8 & 1) == 1) {
                pbVar13 = pbVar13 + 1;
                local_8 = local_8 + 1;
                local_c = local_c + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
              }
              iVar8 = iVar8 + 1;
              if (4 < iVar8) {
                iVar8 = 0;
              }
              uVar1 = uVar1 - 1;
              pbVar12 = pbVar13;
              puVar7 = local_c;
              pbVar10 = local_8;
            } while (uVar1 != 0);
          }
          goto LAB_006fd956;
        }
        if ((local_18 & 0x40) == 0) {
          if (iVar8 < 1) goto switchD_006fd774_default;
          switch(iVar8) {
          case 1:
            if ((*local_10 & (byte)uVar6) == 0) {
              if (*local_c < param_5) {
                *pbVar13 = *(byte *)((uint)*local_8 + param_18);
              }
              else {
                *pbVar13 = *param_6;
              }
            }
            iVar8 = 2;
            local_c = local_c + 1;
            pbVar13 = pbVar13 + 1;
            local_8 = local_8 + 1;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_10 = local_10 + 1;
            }
            param_6 = param_6 + 1;
            uVar1 = uVar1 - 1;
            pbVar12 = pbVar13;
            pbVar9 = param_6;
            puVar7 = local_c;
            pbVar10 = local_8;
            if ((int)uVar1 < 1) break;
            goto LAB_006fd7e3;
          case 2:
LAB_006fd7e3:
            param_6 = param_6 + 1;
            uVar1 = uVar1 - 1;
            iVar8 = 3;
            pbVar12 = pbVar13;
            pbVar9 = param_6;
            puVar7 = local_c;
            pbVar10 = local_8;
            if (0 < (int)uVar1) {
LAB_006fd7fa:
              if ((*local_10 & (byte)uVar6) == 0) {
                if (*local_c < param_5) {
                  bVar4 = *(byte *)((uint)*local_8 + param_18);
                }
                else {
                  bVar4 = *param_6;
                }
                *pbVar13 = bVar4;
              }
              local_c = local_c + 1;
              pbVar13 = pbVar13 + 1;
              local_8 = local_8 + 1;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_10 = local_10 + 1;
              }
              iVar8 = 4;
              pbVar12 = pbVar13;
              pbVar9 = param_6 + 1;
              puVar7 = local_c;
              pbVar10 = local_8;
              if (0 < (int)(uVar1 - 1)) {
                param_6 = param_6 + 2;
                iVar8 = 0;
                uVar1 = uVar1 - 2;
                goto switchD_006fd774_default;
              }
            }
            break;
          case 3:
            goto LAB_006fd7fa;
          case 4:
            iVar8 = 0;
            param_6 = param_6 + 1;
            uVar1 = uVar1 - 1;
          default:
switchD_006fd774_default:
            pbVar12 = pbVar13;
            pbVar9 = param_6;
            puVar7 = local_c;
            pbVar10 = local_8;
            if (0 < (int)uVar1) {
              pbVar11 = param_6 + 1;
              for (iVar2 = uVar1 - 1; iVar8 = 1, pbVar12 = pbVar13, pbVar9 = pbVar11,
                  puVar7 = local_c, pbVar10 = local_8, 0 < iVar2; iVar2 = iVar2 + -5) {
                if ((*local_10 & (byte)uVar6) == 0) {
                  if (*local_c < param_5) {
                    bVar4 = *(byte *)((uint)*local_8 + param_18);
                  }
                  else {
                    bVar4 = *pbVar11;
                  }
                  *pbVar13 = bVar4;
                }
                iVar8 = 2;
                puVar7 = local_c + 1;
                pbVar12 = pbVar13 + 1;
                pbVar10 = local_8 + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                pbVar9 = pbVar11 + 1;
                if (iVar2 + -1 < 1) break;
                iVar8 = 3;
                pbVar9 = pbVar11 + 2;
                if (iVar2 + -2 < 1) break;
                if ((*local_10 & (byte)uVar6) == 0) {
                  if (*puVar7 < param_5) {
                    bVar4 = *(byte *)((uint)*pbVar10 + param_18);
                  }
                  else {
                    bVar4 = pbVar11[2];
                  }
                  *pbVar12 = bVar4;
                }
                local_c = local_c + 2;
                pbVar13 = pbVar13 + 2;
                local_8 = local_8 + 2;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                iVar8 = 4;
                pbVar12 = pbVar13;
                pbVar9 = pbVar11 + 3;
                puVar7 = local_c;
                pbVar10 = local_8;
                if (iVar2 + -3 < 1) break;
                iVar8 = 0;
                pbVar9 = pbVar11 + 4;
                if (iVar2 + -4 < 1) break;
                pbVar11 = pbVar11 + 5;
              }
            }
          }
          goto LAB_006fd956;
        }
        bVar4 = *param_6;
        pbVar9 = param_6 + 1;
        if (iVar8 < 1) goto switchD_006fd5b3_default;
        switch(iVar8) {
        case 1:
          if ((*local_10 & (byte)uVar6) == 0) {
            if (*local_c < param_5) {
              *pbVar13 = *(byte *)((uint)*local_8 + param_18);
            }
            else {
              *pbVar13 = bVar4;
            }
          }
          iVar8 = 2;
          local_c = local_c + 1;
          pbVar13 = pbVar13 + 1;
          local_8 = local_8 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          uVar1 = uVar1 - 1;
          pbVar12 = pbVar13;
          puVar7 = local_c;
          pbVar10 = local_8;
          if ((int)uVar1 < 1) break;
          goto LAB_006fd616;
        case 2:
LAB_006fd616:
          uVar1 = uVar1 - 1;
          iVar8 = 3;
          pbVar12 = pbVar13;
          puVar7 = local_c;
          pbVar10 = local_8;
          if (0 < (int)uVar1) {
LAB_006fd629:
            if ((*local_10 & (byte)uVar6) == 0) {
              bVar3 = bVar4;
              if (*local_c < param_5) {
                bVar3 = *(byte *)((uint)*local_8 + param_18);
              }
              *pbVar13 = bVar3;
            }
            local_c = local_c + 1;
            pbVar13 = pbVar13 + 1;
            local_8 = local_8 + 1;
            uVar6 = uVar6 >> 1;
            if (uVar6 == 0) {
              uVar6 = 0x80;
              local_10 = local_10 + 1;
            }
            iVar8 = 4;
            pbVar12 = pbVar13;
            puVar7 = local_c;
            pbVar10 = local_8;
            if (0 < (int)(uVar1 - 1)) {
              iVar8 = 0;
              uVar1 = uVar1 - 2;
              goto switchD_006fd5b3_default;
            }
          }
          break;
        case 3:
          goto LAB_006fd629;
        case 4:
          iVar8 = 0;
          uVar1 = uVar1 - 1;
        default:
switchD_006fd5b3_default:
          pbVar12 = pbVar13;
          puVar7 = local_c;
          pbVar10 = local_8;
          if (0 < (int)uVar1) {
            iVar2 = uVar1 - 1;
            iVar8 = 1;
            if (0 < iVar2) {
              while( true ) {
                if ((*local_10 & (byte)uVar6) == 0) {
                  bVar3 = bVar4;
                  if (*local_c < param_5) {
                    bVar3 = *(byte *)((uint)*local_8 + param_18);
                  }
                  *pbVar13 = bVar3;
                }
                iVar8 = 2;
                puVar7 = local_c + 1;
                pbVar12 = pbVar13 + 1;
                pbVar10 = local_8 + 1;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                if ((iVar2 + -1 < 1) || (iVar8 = 3, iVar2 + -2 < 1)) break;
                if ((*local_10 & (byte)uVar6) == 0) {
                  bVar3 = bVar4;
                  if (*puVar7 < param_5) {
                    bVar3 = *(byte *)((uint)*pbVar10 + param_18);
                  }
                  *pbVar12 = bVar3;
                }
                local_c = local_c + 2;
                pbVar13 = pbVar13 + 2;
                local_8 = local_8 + 2;
                uVar6 = uVar6 >> 1;
                if (uVar6 == 0) {
                  uVar6 = 0x80;
                  local_10 = local_10 + 1;
                }
                iVar8 = 4;
                pbVar12 = pbVar13;
                puVar7 = local_c;
                pbVar10 = local_8;
                if ((iVar2 + -3 < 1) || (iVar8 = 0, iVar2 + -4 < 1)) break;
                iVar2 = iVar2 + -5;
                iVar8 = 1;
                if (iVar2 < 1) break;
              }
            }
          }
        }
LAB_006fd956:
        local_8 = pbVar10;
        local_c = puVar7;
        param_6 = pbVar9;
        if (local_14 < 1) {
          uVar1 = 0;
          break;
        }
        bVar4 = *param_6;
        local_18 = (uint)bVar4;
        param_6 = param_6 + 1;
        if ((bVar4 & 0x80) == 0) {
          uVar1 = bVar4 & 0x7f;
        }
        else {
          uVar1 = bVar4 & 0x3f;
        }
        pbVar13 = pbVar12;
      } while ((int)uVar1 <= local_14);
    }
    uVar1 = uVar1 - local_14;
    pbVar13 = param_6;
    if ((local_14 < 1) || ((local_18 & 0x80) == 0)) goto LAB_006fdba5;
    if ((local_18 & 0x40) == 0) {
      if (iVar8 < 1) goto switchD_006fdc5f_default;
      switch(iVar8) {
      case 1:
        if ((*local_10 & (byte)uVar6) == 0) {
          if (*local_c < param_5) {
            bVar4 = *(byte *)((uint)*local_8 + param_18);
          }
          else {
            bVar4 = *param_6;
          }
          *pbVar12 = bVar4;
        }
        local_c = local_c + 1;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_10 = local_10 + 1;
        }
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar13 = param_6;
        if (local_14 < 1) break;
        goto LAB_006fdccb;
      case 2:
LAB_006fdccb:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
        pbVar13 = param_6;
        if (0 < local_14) {
LAB_006fdce0:
          if ((*local_10 & (byte)uVar6) == 0) {
            if (*local_c < param_5) {
              bVar4 = *(byte *)((uint)*local_8 + param_18);
            }
            else {
              bVar4 = *param_6;
            }
            *pbVar12 = bVar4;
          }
          local_c = local_c + 1;
          pbVar12 = pbVar12 + 1;
          local_8 = local_8 + 1;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          pbVar13 = param_6 + 1;
          if (0 < local_14 + -1) {
            param_6 = param_6 + 2;
            local_14 = local_14 + -2;
            goto switchD_006fdc5f_default;
          }
        }
        break;
      case 3:
        goto LAB_006fdce0;
      case 4:
        param_6 = param_6 + 1;
        local_14 = local_14 + -1;
      default:
switchD_006fdc5f_default:
        pbVar13 = param_6;
        if (0 < local_14) {
          param_6 = param_6 + 1;
          local_14 = local_14 + -1;
          pbVar13 = param_6;
          if (0 < local_14) {
            while( true ) {
              if ((*local_10 & (byte)uVar6) == 0) {
                if (*local_c < param_5) {
                  bVar4 = *(byte *)((uint)*local_8 + param_18);
                }
                else {
                  bVar4 = *param_6;
                }
                *pbVar12 = bVar4;
              }
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_10 = local_10 + 1;
              }
              pbVar13 = param_6 + 1;
              if ((local_14 + -1 < 1) || (pbVar13 = param_6 + 2, local_14 + -2 < 1)) break;
              if ((*local_10 & (byte)uVar6) == 0) {
                if (local_c[1] < param_5) {
                  bVar4 = *(byte *)((uint)local_8[1] + param_18);
                }
                else {
                  bVar4 = param_6[2];
                }
                pbVar12[1] = bVar4;
              }
              local_c = local_c + 2;
              pbVar12 = pbVar12 + 2;
              local_8 = local_8 + 2;
              uVar6 = uVar6 >> 1;
              if (uVar6 == 0) {
                uVar6 = 0x80;
                local_10 = local_10 + 1;
              }
              pbVar13 = param_6 + 3;
              if ((local_14 + -3 < 1) || (pbVar13 = param_6 + 4, local_14 + -4 < 1)) break;
              param_6 = param_6 + 5;
              local_14 = local_14 + -5;
              pbVar13 = param_6;
              if (local_14 < 1) break;
            }
          }
        }
      }
      goto LAB_006fdba5;
    }
    bVar4 = *param_6;
    pbVar13 = param_6 + 1;
    if (iVar8 < 1) goto switchD_006fda0b_default;
    switch(iVar8) {
    case 1:
      if ((*local_10 & (byte)uVar6) == 0) {
        if (*local_c < param_5) {
          *pbVar12 = *(byte *)((uint)*local_8 + param_18);
        }
        else {
          *pbVar12 = bVar4;
        }
      }
      local_c = local_c + 1;
      pbVar12 = pbVar12 + 1;
      local_8 = local_8 + 1;
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) {
        uVar6 = 0x80;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + -1;
      if (local_14 < 1) break;
      goto LAB_006fda70;
    case 2:
LAB_006fda70:
      local_14 = local_14 + -1;
      if (0 < local_14) {
LAB_006fda84:
        if ((*local_10 & (byte)uVar6) == 0) {
          bVar3 = bVar4;
          if (*local_c < param_5) {
            bVar3 = *(byte *)((uint)*local_8 + param_18);
          }
          *pbVar12 = bVar3;
        }
        local_c = local_c + 1;
        pbVar12 = pbVar12 + 1;
        local_8 = local_8 + 1;
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          uVar6 = 0x80;
          local_10 = local_10 + 1;
        }
        if (0 < local_14 + -1) {
          local_14 = local_14 + -2;
          goto switchD_006fda0b_default;
        }
      }
      break;
    case 3:
      goto LAB_006fda84;
    case 4:
      local_14 = local_14 + -1;
    default:
switchD_006fda0b_default:
      if ((0 < local_14) && (local_14 = local_14 + -1, 0 < local_14)) {
        while( true ) {
          if ((*local_10 & (byte)uVar6) == 0) {
            bVar3 = bVar4;
            if (*local_c < param_5) {
              bVar3 = *(byte *)((uint)*local_8 + param_18);
            }
            *pbVar12 = bVar3;
          }
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          if (local_14 + -2 < 1) break;
          if ((*local_10 & (byte)uVar6) == 0) {
            bVar3 = bVar4;
            if (local_c[1] < param_5) {
              bVar3 = *(byte *)((uint)local_8[1] + param_18);
            }
            pbVar12[1] = bVar3;
          }
          local_c = local_c + 2;
          pbVar12 = pbVar12 + 2;
          local_8 = local_8 + 2;
          uVar6 = uVar6 >> 1;
          if (uVar6 == 0) {
            uVar6 = 0x80;
            local_10 = local_10 + 1;
          }
          if ((local_14 + -4 < 1) || (local_14 = local_14 + -5, local_14 < 1)) break;
        }
      }
    }
LAB_006fdba5:
    param_6 = pbVar13;
    iVar8 = (param_7 - param_8) - param_9;
    bVar4 = (byte)local_18;
    if ((int)uVar1 < iVar8) {
      do {
        iVar8 = iVar8 - uVar1;
        pbVar13 = param_6;
        if (((byte)local_18 & 0xc0) == 0x80) {
          pbVar13 = param_6 + uVar1;
        }
        bVar4 = *pbVar13;
        local_18 = (uint)bVar4;
        param_6 = pbVar13 + 1;
        uVar1 = local_18;
        if (((bVar4 & 0x80) != 0) && (uVar1 = local_18 & 0x3f, (bVar4 & 0x40) != 0)) {
          param_6 = pbVar13 + 2;
        }
      } while ((int)uVar1 < iVar8);
    }
    if ((bVar4 & 0xc0) == 0x80) {
      param_6 = param_6 + iVar8;
    }
LAB_006fdbfd:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_16 = param_16 + param_17;
    pbVar5 = pbVar5 + param_14;
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

