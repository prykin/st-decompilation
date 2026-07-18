
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00700920(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 byte *param_13,int param_14,int param_15)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  ushort *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  ushort *local_8;
  
  bVar1 = 0;
  _DAT_00857000 = 1;
  pbVar10 = param_6;
joined_r0x0070093e:
  param_10 = param_10 + -1;
  if (param_10 < 0) {
    return;
  }
  while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
    uVar5 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    iVar8 = param_7;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar4 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          pbVar10 = pbVar10 + (uVar5 & 0x3f);
          uVar4 = uVar5 & 0x3f;
        }
        else {
          pbVar10 = pbVar10 + 1;
          uVar4 = uVar5 & 0x3f;
        }
        if ((int)(iVar8 - uVar4) < 1) break;
        uVar5 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
        iVar8 = iVar8 - uVar4;
      }
    }
    uVar5 = (uint)*param_13;
    param_13 = param_13 + 1;
    iVar8 = param_14;
    if (uVar5 != 0) {
      while( true ) {
        if ((uVar5 & 0x80) == 0) {
          uVar4 = uVar5 & 0x7f;
        }
        else if ((uVar5 & 0x40) == 0) {
          param_13 = param_13 + (uVar5 & 0x3f);
          uVar4 = uVar5 & 0x3f;
        }
        else {
          param_13 = param_13 + 1;
          uVar4 = uVar5 & 0x3f;
        }
        if ((int)(iVar8 - uVar4) < 1) break;
        uVar5 = (uint)*param_13;
        param_13 = param_13 + 1;
        iVar8 = iVar8 - uVar4;
      }
    }
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  }
  local_18 = (uint)*pbVar10;
  param_6 = pbVar10 + 1;
  if (local_18 != 0) {
    local_24 = local_18 & 0xc0;
    if (local_24 == 0xc0) {
      bVar1 = *param_6;
      param_6 = pbVar10 + 2;
    }
    bVar2 = *param_13;
    local_c = (uint)bVar2;
    if ((bVar2 & 0x80) == 0) {
      local_1c = local_c & 0x7f;
      param_13 = param_13 + 1;
    }
    else {
      local_1c = local_c & 0x3f;
      if ((bVar2 & 0x40) == 0) {
        param_13 = param_13 + 1 + local_1c;
      }
      else {
        param_13 = param_13 + 2;
      }
    }
    pbVar10 = param_13;
    iVar8 = param_15;
    if ((int)local_1c <= param_15) {
      do {
        iVar8 = iVar8 - local_1c;
        bVar2 = *pbVar10;
        local_c = (uint)bVar2;
        param_13 = pbVar10 + 1;
        if ((bVar2 & 0x80) == 0) {
          local_1c = local_c & 0x7f;
        }
        else {
          local_1c = local_c & 0x3f;
          if ((bVar2 & 0x40) == 0) {
            param_13 = param_13 + local_1c;
          }
          else {
            param_13 = pbVar10 + 2;
          }
        }
        pbVar10 = param_13;
      } while ((int)local_1c <= iVar8);
    }
    local_1c = local_1c - iVar8;
    iVar8 = param_8;
    pbVar10 = param_6;
LAB_00700a87:
    param_6 = pbVar10;
    if ((local_18 & 0x80) == 0) {
      uVar5 = local_18 & 0x7f;
      if (iVar8 < (int)uVar5) goto LAB_00700acb;
    }
    else {
      uVar5 = local_18 & 0x3f;
      if (iVar8 < (int)uVar5) goto LAB_00700acb;
      if (local_24 == 0x80) {
        param_6 = param_6 + uVar5;
      }
    }
    iVar8 = iVar8 - uVar5;
    local_18 = (uint)*param_6;
    local_24 = local_18 & 0xc0;
    pbVar10 = param_6 + 1;
    if (local_24 == 0xc0) {
      bVar1 = param_6[1];
      pbVar10 = param_6 + 2;
    }
    goto LAB_00700a87;
  }
  goto LAB_00701272;
LAB_00700acb:
  uVar5 = uVar5 - iVar8;
  if (((byte)local_18 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar8;
  }
  local_24 = 0;
  iVar8 = param_11;
  local_8 = param_3;
  pbVar10 = param_1;
  for (local_20 = param_9; 0 < local_20; local_20 = local_20 - local_14) {
    local_14 = local_1c;
    if ((int)local_1c < local_20) {
      do {
        bVar2 = *param_13;
        uVar4 = (uint)bVar2;
        if ((bVar2 & 0x80) != (local_c & 0x80)) break;
        local_20 = local_20 - local_14;
        if ((bVar2 & 0x80) == 0) {
          local_14 = uVar4 & 0x7f;
          param_13 = param_13 + 1;
        }
        else {
          local_14 = uVar4 & 0x3f;
          if ((bVar2 & 0x40) == 0) {
            param_13 = param_13 + 1 + local_14;
          }
          else {
            param_13 = param_13 + 2;
          }
        }
        local_1c = local_1c + local_14;
        local_c = uVar4;
      } while ((int)local_14 < local_20);
    }
    if (param_9 < (int)(local_24 + local_1c)) {
      local_1c = param_9 - local_24;
    }
    local_24 = local_24 + local_1c;
    pbVar7 = pbVar10;
    if ((int)uVar5 <= (int)local_1c) {
      do {
        local_1c = local_1c - uVar5;
        pbVar3 = param_6;
        if ((local_18 & 0x80) == 0) {
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if (-1 < (int)(uVar5 - 1)) {
            do {
              if (((byte)iVar8 & 1) == 1) {
                pbVar7 = pbVar7 + 1;
                local_8 = local_8 + 1;
              }
              iVar8 = iVar8 + 1;
              if (4 < iVar8) {
                iVar8 = 0;
              }
              uVar5 = uVar5 - 1;
              pbVar10 = pbVar7;
              puVar9 = local_8;
            } while (uVar5 != 0);
          }
          goto LAB_00700e36;
        }
        if ((local_18 & 0x40) == 0) {
          if (iVar8 < 1) goto switchD_00700d02_default;
          switch(iVar8) {
          case 1:
            if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
              *pbVar7 = *param_6;
            }
            local_8 = local_8 + 1;
            pbVar7 = pbVar7 + 1;
            param_6 = param_6 + 1;
            uVar5 = uVar5 - 1;
            iVar8 = 2;
            pbVar10 = pbVar7;
            pbVar3 = param_6;
            puVar9 = local_8;
            if ((int)uVar5 < 1) break;
            goto LAB_00700d4e;
          case 2:
LAB_00700d4e:
            param_6 = param_6 + 1;
            uVar5 = uVar5 - 1;
            iVar8 = 3;
            pbVar10 = pbVar7;
            pbVar3 = param_6;
            puVar9 = local_8;
            if (0 < (int)uVar5) {
LAB_00700d68:
              if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                *pbVar7 = *param_6;
              }
              local_8 = local_8 + 1;
              pbVar7 = pbVar7 + 1;
              iVar8 = 4;
              pbVar10 = pbVar7;
              pbVar3 = param_6 + 1;
              puVar9 = local_8;
              if (0 < (int)(uVar5 - 1)) {
                param_6 = param_6 + 2;
                iVar8 = 0;
                uVar5 = uVar5 - 2;
                goto switchD_00700d02_default;
              }
            }
            break;
          case 3:
            goto LAB_00700d68;
          case 4:
            param_6 = param_6 + 1;
            iVar8 = 0;
            uVar5 = uVar5 - 1;
          default:
switchD_00700d02_default:
            pbVar10 = pbVar7;
            pbVar3 = param_6;
            puVar9 = local_8;
            if (0 < (int)uVar5) {
              pbVar11 = param_6 + 1;
              iVar6 = uVar5 - 1;
              iVar8 = 1;
              pbVar3 = pbVar11;
              if (0 < iVar6) {
                do {
                  if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                    *pbVar7 = *pbVar11;
                  }
                  puVar9 = local_8 + 1;
                  pbVar10 = pbVar7 + 1;
                  iVar8 = 2;
                  pbVar3 = pbVar11 + 1;
                  if (iVar6 + -1 < 1) break;
                  iVar8 = 3;
                  pbVar3 = pbVar11 + 2;
                  if (iVar6 + -2 < 1) break;
                  if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
                    *pbVar10 = pbVar11[2];
                  }
                  local_8 = local_8 + 2;
                  pbVar7 = pbVar7 + 2;
                  iVar8 = 4;
                  pbVar10 = pbVar7;
                  pbVar3 = pbVar11 + 3;
                  puVar9 = local_8;
                  if (iVar6 + -3 < 1) break;
                  iVar8 = 0;
                  pbVar3 = pbVar11 + 4;
                  if (iVar6 + -4 < 1) break;
                  pbVar11 = pbVar11 + 5;
                  iVar6 = iVar6 + -5;
                  iVar8 = 1;
                  pbVar3 = pbVar11;
                } while (0 < iVar6);
              }
            }
          }
          goto LAB_00700e36;
        }
        if (iVar8 < 1) goto switchD_00700bdf_default;
        switch(iVar8) {
        case 1:
          if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
            *pbVar7 = bVar1;
          }
          local_8 = local_8 + 1;
          pbVar7 = pbVar7 + 1;
          uVar5 = uVar5 - 1;
          iVar8 = 2;
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if ((int)uVar5 < 1) break;
          goto LAB_00700c1f;
        case 2:
LAB_00700c1f:
          uVar5 = uVar5 - 1;
          iVar8 = 3;
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if (0 < (int)uVar5) {
LAB_00700c32:
            if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
              *pbVar7 = bVar1;
            }
            local_8 = local_8 + 1;
            pbVar7 = pbVar7 + 1;
            iVar8 = 4;
            pbVar10 = pbVar7;
            puVar9 = local_8;
            if (0 < (int)(uVar5 - 1)) {
              iVar8 = 0;
              uVar5 = uVar5 - 2;
              goto switchD_00700bdf_default;
            }
          }
          break;
        case 3:
          goto LAB_00700c32;
        case 4:
          iVar8 = 0;
          uVar5 = uVar5 - 1;
        default:
switchD_00700bdf_default:
          pbVar10 = pbVar7;
          puVar9 = local_8;
          if (0 < (int)uVar5) {
            iVar6 = uVar5 - 1;
            iVar8 = 1;
            if (0 < iVar6) {
              while( true ) {
                if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                  *pbVar7 = bVar1;
                }
                puVar9 = local_8 + 1;
                pbVar10 = pbVar7 + 1;
                iVar8 = 2;
                if ((iVar6 + -1 < 1) || (iVar8 = 3, iVar6 + -2 < 1)) break;
                if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
                  *pbVar10 = bVar1;
                }
                local_8 = local_8 + 2;
                pbVar7 = pbVar7 + 2;
                iVar8 = 4;
                pbVar10 = pbVar7;
                puVar9 = local_8;
                if ((iVar6 + -3 < 1) || (iVar8 = 0, iVar6 + -4 < 1)) break;
                iVar6 = iVar6 + -5;
                iVar8 = 1;
                if (iVar6 < 1) break;
              }
            }
          }
        }
LAB_00700e36:
        local_8 = puVar9;
        param_6 = pbVar3;
        if ((int)local_1c < 1) {
          uVar5 = 0;
          break;
        }
        bVar2 = *param_6;
        local_18 = (uint)bVar2;
        pbVar7 = param_6 + 1;
        if ((bVar2 & 0x80) == 0) {
          uVar5 = local_18 & 0x7f;
        }
        else {
          uVar5 = local_18 & 0x3f;
          if ((bVar2 & 0x40) != 0) {
            bVar1 = *pbVar7;
            pbVar7 = param_6 + 2;
          }
        }
        param_6 = pbVar7;
        pbVar7 = pbVar10;
      } while ((int)uVar5 <= (int)local_1c);
    }
    uVar5 = uVar5 - local_1c;
    pbVar7 = pbVar10;
    pbVar3 = param_6;
    puVar9 = local_8;
    if ((int)local_1c < 1) goto LAB_0070116a;
    if ((local_18 & 0x80) == 0) {
      if (-1 < (int)(local_1c - 1)) {
        do {
          if (((byte)iVar8 & 1) == 1) {
            pbVar10 = pbVar10 + 1;
            local_8 = local_8 + 1;
          }
          iVar8 = iVar8 + 1;
          if (4 < iVar8) {
            iVar8 = 0;
          }
          local_1c = local_1c - 1;
          pbVar7 = pbVar10;
          puVar9 = local_8;
        } while (local_1c != 0);
      }
      goto LAB_0070116a;
    }
    if ((local_18 & 0x40) == 0) {
      if (iVar8 < 1) goto switchD_00700fff_default;
      switch(iVar8) {
      case 1:
        if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
          *pbVar10 = *param_6;
        }
        local_8 = local_8 + 1;
        pbVar10 = pbVar10 + 1;
        param_6 = param_6 + 1;
        local_1c = local_1c - 1;
        iVar8 = 2;
        pbVar7 = pbVar10;
        pbVar3 = param_6;
        puVar9 = local_8;
        if ((int)local_1c < 1) break;
        goto LAB_0070104b;
      case 2:
LAB_0070104b:
        param_6 = param_6 + 1;
        local_1c = local_1c - 1;
        iVar8 = 3;
        pbVar7 = pbVar10;
        pbVar3 = param_6;
        puVar9 = local_8;
        if (0 < (int)local_1c) {
LAB_00701065:
          if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
            *pbVar10 = *param_6;
          }
          local_8 = local_8 + 1;
          pbVar10 = pbVar10 + 1;
          iVar8 = 4;
          pbVar7 = pbVar10;
          pbVar3 = param_6 + 1;
          puVar9 = local_8;
          if (0 < (int)(local_1c - 1)) {
            iVar8 = 0;
            param_6 = param_6 + 2;
            local_1c = local_1c - 2;
            goto switchD_00700fff_default;
          }
        }
        break;
      case 3:
        goto LAB_00701065;
      case 4:
        iVar8 = 0;
        param_6 = param_6 + 1;
        local_1c = local_1c - 1;
      default:
switchD_00700fff_default:
        pbVar7 = pbVar10;
        pbVar3 = param_6;
        puVar9 = local_8;
        if (0 < (int)local_1c) {
          pbVar11 = param_6 + 1;
          iVar6 = local_1c - 1;
          iVar8 = 1;
          pbVar3 = pbVar11;
          if (0 < iVar6) {
            do {
              if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
                *pbVar10 = *pbVar11;
              }
              puVar9 = local_8 + 1;
              pbVar7 = pbVar10 + 1;
              iVar8 = 2;
              pbVar3 = pbVar11 + 1;
              if (iVar6 + -1 < 1) break;
              iVar8 = 3;
              pbVar3 = pbVar11 + 2;
              if (iVar6 + -2 < 1) break;
              if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
                *pbVar7 = pbVar11[2];
              }
              local_8 = local_8 + 2;
              pbVar10 = pbVar10 + 2;
              iVar8 = 4;
              pbVar7 = pbVar10;
              pbVar3 = pbVar11 + 3;
              puVar9 = local_8;
              if (iVar6 + -3 < 1) break;
              iVar8 = 0;
              pbVar3 = pbVar11 + 4;
              if (iVar6 + -4 < 1) break;
              pbVar11 = pbVar11 + 5;
              iVar6 = iVar6 + -5;
              iVar8 = 1;
              pbVar3 = pbVar11;
            } while (0 < iVar6);
          }
        }
      }
      goto LAB_0070116a;
    }
    if (iVar8 < 1) goto switchD_00700ed8_default;
    switch(iVar8) {
    case 1:
      if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
        *pbVar10 = bVar1;
      }
      local_8 = local_8 + 1;
      pbVar10 = pbVar10 + 1;
      local_1c = local_1c - 1;
      iVar8 = 2;
      pbVar7 = pbVar10;
      puVar9 = local_8;
      if ((int)local_1c < 1) break;
      goto LAB_00700f18;
    case 2:
LAB_00700f18:
      local_1c = local_1c - 1;
      iVar8 = 3;
      pbVar7 = pbVar10;
      puVar9 = local_8;
      if (0 < (int)local_1c) {
LAB_00700f2b:
        if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
          *pbVar10 = bVar1;
        }
        local_8 = local_8 + 1;
        pbVar10 = pbVar10 + 1;
        iVar8 = 4;
        pbVar7 = pbVar10;
        puVar9 = local_8;
        if (0 < (int)(local_1c - 1)) {
          iVar8 = 0;
          local_1c = local_1c - 2;
          goto switchD_00700ed8_default;
        }
      }
      break;
    case 3:
      goto LAB_00700f2b;
    case 4:
      iVar8 = 0;
      local_1c = local_1c - 1;
    default:
switchD_00700ed8_default:
      pbVar7 = pbVar10;
      puVar9 = local_8;
      if (0 < (int)local_1c) {
        iVar6 = local_1c - 1;
        iVar8 = 1;
        if (0 < iVar6) {
          while( true ) {
            if (((local_c & 0x80) != 0) && (param_5 <= *local_8)) {
              *pbVar10 = bVar1;
            }
            puVar9 = local_8 + 1;
            pbVar7 = pbVar10 + 1;
            iVar8 = 2;
            if ((iVar6 + -1 < 1) || (iVar8 = 3, iVar6 + -2 < 1)) break;
            if (((local_c & 0x80) != 0) && (param_5 <= *puVar9)) {
              *pbVar7 = bVar1;
            }
            local_8 = local_8 + 2;
            pbVar10 = pbVar10 + 2;
            iVar8 = 4;
            pbVar7 = pbVar10;
            puVar9 = local_8;
            if ((iVar6 + -3 < 1) || (iVar8 = 0, iVar6 + -4 < 1)) break;
            iVar6 = iVar6 + -5;
            iVar8 = 1;
            if (iVar6 < 1) break;
          }
        }
      }
    }
LAB_0070116a:
    local_8 = puVar9;
    param_6 = pbVar3;
    pbVar10 = param_6;
    if (((int)uVar5 < 1) && ((int)local_24 < param_9)) {
      bVar2 = *param_6;
      local_18 = (uint)bVar2;
      pbVar10 = param_6 + 1;
      if ((bVar2 & 0x80) == 0) {
        uVar5 = local_18 & 0x7f;
      }
      else {
        uVar5 = local_18 & 0x3f;
        if ((bVar2 & 0x40) != 0) {
          bVar1 = *pbVar10;
          pbVar10 = param_6 + 2;
        }
      }
    }
    param_6 = pbVar10;
    if (local_20 <= (int)local_14) {
      local_1c = local_14 - local_20;
      break;
    }
    local_c = (uint)*param_13;
    local_1c = 0;
    pbVar10 = pbVar7;
  }
  iVar8 = (param_14 - param_9) - param_15;
  if ((int)local_1c < iVar8) {
    do {
      iVar8 = iVar8 - local_1c;
      bVar2 = *param_13;
      if ((bVar2 & 0x80) == 0) {
        local_1c = bVar2 & 0x7f;
        param_13 = param_13 + 1;
      }
      else {
        local_1c = bVar2 & 0x3f;
        if ((bVar2 & 0x40) == 0) {
          param_13 = param_13 + 1 + local_1c;
        }
        else {
          param_13 = param_13 + 2;
        }
      }
    } while ((int)local_1c < iVar8);
  }
  iVar8 = (param_7 - param_8) - param_9;
  bVar2 = (byte)local_18;
  if ((int)uVar5 < iVar8) {
    do {
      iVar8 = iVar8 - uVar5;
      pbVar10 = param_6;
      if (((byte)local_18 & 0xc0) == 0x80) {
        pbVar10 = param_6 + uVar5;
      }
      bVar2 = *pbVar10;
      local_18 = (uint)bVar2;
      param_6 = pbVar10 + 1;
      uVar5 = local_18;
      if (((bVar2 & 0x80) != 0) && (uVar5 = local_18 & 0x3f, (bVar2 & 0x40) != 0)) {
        param_6 = pbVar10 + 2;
      }
    } while ((int)uVar5 < iVar8);
  }
  local_18._0_1_ = bVar2;
  if (((byte)local_18 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar8;
  }
LAB_00701272:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_12 = param_12 + 1;
  pbVar10 = param_6;
  if (4 < (int)param_12) {
    param_12 = 0;
  }
  goto joined_r0x0070093e;
}

