
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007012f0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,byte *param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;

  uVar1 = 0;
  _DAT_00857000 = 1;
  pbVar11 = param_6;
  iVar8 = param_10;
joined_r0x00701311:
  param_10 = iVar8 + -1;
  if (param_10 < 0) {
    return;
  }
  if (param_12 == 1) {
    param_10 = iVar8 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar4 = (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    iVar8 = param_7;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          pbVar11 = pbVar11 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          pbVar11 = pbVar11 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar8 - uVar3) < 1) break;
        uVar4 = (uint)*pbVar11;
        pbVar11 = pbVar11 + 1;
        iVar8 = iVar8 - uVar3;
      }
    }
    uVar4 = (uint)*param_13;
    param_13 = param_13 + 1;
    iVar8 = param_14;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          param_13 = param_13 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          param_13 = param_13 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar8 - uVar3) < 1) break;
        uVar4 = (uint)*param_13;
        param_13 = param_13 + 1;
        iVar8 = iVar8 - uVar3;
      }
    }
    param_12 = 2;
  }
  local_14 = (uint)*pbVar11;
  pbVar12 = pbVar11 + 1;
  if (local_14 != 0) {
    param_6 = (byte *)(local_14 & 0xc0);
    if (param_6 == (byte *)0xc0) {
      bVar7 = *pbVar12;
      pbVar12 = pbVar11 + 2;
      uVar1 = *(undefined1 *)((uint)bVar7 + param_16);
    }
    bVar7 = *param_13;
    local_10 = (uint)bVar7;
    if ((bVar7 & 0x80) == 0) {
      uVar4 = local_10 & 0x7f;
      param_13 = param_13 + 1;
    }
    else {
      uVar4 = local_10 & 0x3f;
      if ((bVar7 & 0x40) == 0) {
        param_13 = param_13 + 1 + uVar4;
      }
      else {
        param_13 = param_13 + 2;
      }
    }
    iVar8 = param_15;
    pbVar11 = param_13;
    if ((int)uVar4 <= param_15) {
      do {
        iVar8 = iVar8 - uVar4;
        bVar7 = *pbVar11;
        local_10 = (uint)bVar7;
        param_13 = pbVar11 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar4 = local_10 & 0x7f;
        }
        else {
          uVar4 = local_10 & 0x3f;
          if ((bVar7 & 0x40) == 0) {
            param_13 = param_13 + uVar4;
          }
          else {
            param_13 = pbVar11 + 2;
          }
        }
        pbVar11 = param_13;
      } while ((int)uVar4 <= iVar8);
    }
    local_8 = param_8;
    pbVar11 = pbVar12;
LAB_0070145c:
    pbVar12 = pbVar11;
    if ((local_14 & 0x80) == 0) {
      uVar3 = local_14 & 0x7f;
      if ((int)local_8 < (int)uVar3) goto LAB_007014bc;
    }
    else {
      uVar3 = local_14 & 0x3f;
      if ((int)local_8 < (int)uVar3) goto LAB_007014bc;
      if (param_6 == (byte *)0x80) {
        pbVar12 = pbVar12 + uVar3;
      }
    }
    local_8 = local_8 - uVar3;
    local_14 = (uint)*pbVar12;
    param_6 = (byte *)(local_14 & 0xc0);
    pbVar11 = pbVar12 + 1;
    if (param_6 == (byte *)0xc0) {
      uVar1 = *(undefined1 *)((uint)pbVar12[1] + param_16);
      pbVar11 = pbVar12 + 2;
    }
    goto LAB_0070145c;
  }
  goto LAB_00701a8c;
LAB_007014bc:
  uVar3 = uVar3 - local_8;
  if (((byte)local_14 & 0xc0) == 0x80) {
    pbVar12 = pbVar12 + local_8;
  }
  local_24 = 0;
  local_1c = uVar4 - iVar8;
  iVar8 = param_11;
  puVar10 = param_1;
  puVar6 = param_3;
  local_20 = param_9;
  while (0 < local_20) {
    local_8 = local_1c;
    if ((int)local_1c < local_20) {
      do {
        param_6 = (byte *)(local_10 & 0x80);
        bVar7 = *param_13;
        uVar4 = (uint)bVar7;
        if ((byte *)(bVar7 & 0x80) != param_6) break;
        local_20 = local_20 - local_1c;
        if ((bVar7 & 0x80) == 0) {
          local_1c = uVar4 & 0x7f;
          param_13 = param_13 + 1;
        }
        else {
          local_1c = uVar4 & 0x3f;
          if ((bVar7 & 0x40) == 0) {
            param_13 = param_13 + 1 + local_1c;
          }
          else {
            param_13 = param_13 + 2;
          }
        }
        local_8 = local_8 + local_1c;
        local_10 = uVar4;
      } while ((int)local_1c < local_20);
    }
    if (param_9 < (int)(local_24 + local_8)) {
      local_8 = param_9 - local_24;
    }
    local_24 = local_24 + local_8;
    puVar9 = puVar10;
    local_c = puVar6;
    if ((int)uVar3 <= (int)local_8) {
      do {
        local_28 = local_14 & 0x80;
        local_8 = local_8 - uVar3;
        puVar5 = puVar6;
        puVar10 = puVar9;
        pbVar11 = pbVar12;
        if (local_28 == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (iVar8 != 1) {
                puVar9 = puVar9 + 1;
                puVar6 = puVar6 + 1;
              }
              iVar8 = iVar8 + 1;
              if (2 < iVar8) {
                iVar8 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar5 = puVar6;
              puVar10 = puVar9;
              local_c = puVar6;
            } while (uVar3 != 0);
          }
        }
        else if ((local_14 & 0x40) == 0) {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar12 = pbVar12 + 1;
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            pbVar11 = pbVar12;
            if ((int)uVar3 < 1) goto LAB_0070174d;
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar9 = *(undefined1 *)((uint)*pbVar12 + param_16);
            }
            puVar6 = puVar6 + 1;
            puVar9 = puVar9 + 1;
            pbVar12 = pbVar12 + 1;
            iVar8 = 0;
            uVar3 = uVar3 - 1;
            local_c = puVar6;
          }
          puVar5 = puVar6;
          puVar10 = puVar9;
          pbVar11 = pbVar12;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar9 = *(undefined1 *)((uint)*pbVar12 + param_16);
              }
              puVar5 = puVar6 + 1;
              puVar10 = puVar9 + 1;
              iVar8 = 1;
              pbVar11 = pbVar12 + 1;
              local_c = puVar5;
              if ((int)(uVar3 - 1) < 1) break;
              iVar8 = 2;
              pbVar11 = pbVar12 + 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar5)) {
                *puVar10 = *(undefined1 *)((uint)pbVar12[2] + param_16);
              }
              puVar6 = puVar6 + 2;
              puVar9 = puVar9 + 2;
              pbVar12 = pbVar12 + 3;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              puVar5 = puVar6;
              puVar10 = puVar9;
              pbVar11 = pbVar12;
              local_c = puVar6;
            } while (0 < (int)uVar3);
          }
        }
        else {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            if ((int)uVar3 < 1) goto LAB_0070174d;
            if (((local_10 & 0x80) == 0) || (*puVar6 < param_5)) {
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              local_c = puVar6;
            }
            else {
              puVar6 = puVar6 + 1;
              *puVar9 = uVar1;
              puVar9 = puVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              local_c = puVar6;
            }
          }
          puVar5 = puVar6;
          puVar10 = puVar9;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
                *puVar9 = uVar1;
              }
              puVar5 = puVar6 + 1;
              puVar10 = puVar9 + 1;
              iVar8 = 1;
              local_c = puVar5;
              if (((int)(uVar3 - 1) < 1) || (iVar8 = 2, (int)(uVar3 - 2) < 1)) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar5)) {
                *puVar10 = uVar1;
              }
              puVar6 = puVar6 + 2;
              puVar9 = puVar9 + 2;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              puVar5 = puVar6;
              puVar10 = puVar9;
              local_c = puVar6;
            } while (0 < (int)uVar3);
          }
        }
LAB_0070174d:
        puVar6 = puVar5;
        if ((int)local_8 < 1) {
          uVar3 = 0;
          pbVar12 = pbVar11;
          break;
        }
        bVar7 = *pbVar11;
        local_14 = (uint)bVar7;
        pbVar12 = pbVar11 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar3 = local_14 & 0x7f;
        }
        else {
          uVar3 = local_14 & 0x3f;
          if ((bVar7 & 0x40) != 0) {
            uVar1 = *(undefined1 *)((uint)*pbVar12 + param_16);
            pbVar12 = pbVar11 + 2;
            puVar6 = local_c;
          }
        }
        puVar9 = puVar10;
      } while ((int)uVar3 <= (int)local_8);
    }
    uVar3 = uVar3 - local_8;
    puVar9 = puVar10;
    pbVar11 = pbVar12;
    if (0 < (int)local_8) {
      if ((local_14 & 0x80) == 0) {
        if (-1 < (int)(local_8 - 1)) {
          do {
            if (iVar8 != 1) {
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar8 = iVar8 + 1;
            if (2 < iVar8) {
              iVar8 = 0;
            }
            local_8 = local_8 - 1;
            puVar9 = puVar10;
            local_c = puVar6;
          } while (local_8 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            pbVar12 = pbVar12 + 1;
            local_8 = local_8 - 1;
            iVar8 = 2;
          }
          pbVar11 = pbVar12;
          if ((int)local_8 < 1) goto LAB_00701989;
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
            *puVar10 = *(undefined1 *)((uint)*pbVar12 + param_16);
          }
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
          pbVar12 = pbVar12 + 1;
          iVar8 = 0;
          local_8 = local_8 - 1;
          local_c = puVar6;
        }
        puVar9 = puVar10;
        pbVar11 = pbVar12;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar10 = *(undefined1 *)((uint)*pbVar12 + param_16);
            }
            local_c = puVar6 + 1;
            puVar9 = puVar10 + 1;
            iVar8 = 1;
            pbVar11 = pbVar12 + 1;
            if ((int)(local_8 - 1) < 1) break;
            iVar8 = 2;
            pbVar11 = pbVar12 + 2;
            if ((int)(local_8 - 2) < 1) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
              *puVar9 = *(undefined1 *)((uint)pbVar12[2] + param_16);
            }
            puVar6 = puVar6 + 2;
            puVar10 = puVar10 + 2;
            pbVar12 = pbVar12 + 3;
            iVar8 = 0;
            local_8 = local_8 - 3;
            puVar9 = puVar10;
            pbVar11 = pbVar12;
            local_c = puVar6;
          } while (0 < (int)local_8);
        }
      }
      else {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            local_8 = local_8 - 1;
          }
          iVar8 = 2;
          if ((int)local_8 < 1) goto LAB_00701989;
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
            *puVar10 = uVar1;
          }
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
          iVar8 = 0;
          local_8 = local_8 - 1;
          local_c = puVar6;
        }
        puVar9 = puVar10;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar6)) {
              *puVar10 = uVar1;
            }
            local_c = puVar6 + 1;
            puVar9 = puVar10 + 1;
            iVar8 = 1;
            if (((int)(local_8 - 1) < 1) || (iVar8 = 2, (int)(local_8 - 2) < 1)) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *local_c)) {
              *puVar9 = uVar1;
            }
            puVar6 = puVar6 + 2;
            puVar10 = puVar10 + 2;
            iVar8 = 0;
            local_8 = local_8 - 3;
            puVar9 = puVar10;
            local_c = puVar6;
          } while (0 < (int)local_8);
        }
      }
    }
LAB_00701989:
    pbVar12 = pbVar11;
    if (((int)uVar3 < 1) && (local_24 < param_9)) {
      bVar7 = *pbVar11;
      local_14 = (uint)bVar7;
      pbVar12 = pbVar11 + 1;
      if ((bVar7 & 0x80) == 0) {
        uVar3 = local_14 & 0x7f;
      }
      else {
        uVar3 = local_14 & 0x3f;
        if ((bVar7 & 0x40) != 0) {
          uVar1 = *(undefined1 *)((uint)*pbVar12 + param_16);
          pbVar12 = pbVar11 + 2;
        }
      }
    }
    if (local_20 <= (int)local_1c) {
      local_1c = local_1c - local_20;
      break;
    }
    local_10 = (uint)*param_13;
    local_20 = local_20 - local_1c;
    local_1c = 0;
    puVar10 = puVar9;
    puVar6 = local_c;
  }
  bVar7 = (byte)local_14;
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
  if ((int)uVar3 < iVar8) {
    do {
      iVar8 = iVar8 - uVar3;
      pbVar11 = pbVar12;
      if (((byte)local_14 & 0xc0) == 0x80) {
        pbVar11 = pbVar12 + uVar3;
      }
      bVar7 = *pbVar11;
      local_14 = (uint)bVar7;
      pbVar12 = pbVar11 + 1;
      uVar3 = local_14;
      if (((bVar7 & 0x80) != 0) && (uVar3 = local_14 & 0x3f, (bVar7 & 0x40) != 0)) {
        pbVar12 = pbVar11 + 2;
      }
    } while ((int)uVar3 < iVar8);
  }
  if ((bVar7 & 0xc0) == 0x80) {
    pbVar12 = pbVar12 + iVar8;
  }
LAB_00701a8c:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_12 = param_12 + 1;
  pbVar11 = pbVar12;
  iVar8 = param_10;
  if (2 < param_12) {
    param_12 = 0;
  }
  goto joined_r0x00701311;
}

