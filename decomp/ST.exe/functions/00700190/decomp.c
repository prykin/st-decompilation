
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00700190(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,int param_14,int param_15)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  bVar1 = 0;
  _DAT_00857000 = 1;
  pbVar7 = param_6;
  iVar8 = param_10;
joined_r0x007001b1:
  param_10 = iVar8 + -1;
  if (param_10 < 0) {
    return;
  }
  if (param_12 == 1) {
    param_10 = iVar8 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar4 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    iVar8 = param_7;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar3 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          pbVar7 = pbVar7 + (uVar4 & 0x3f);
          uVar3 = uVar4 & 0x3f;
        }
        else {
          pbVar7 = pbVar7 + 1;
          uVar3 = uVar4 & 0x3f;
        }
        if ((int)(iVar8 - uVar3) < 1) break;
        uVar4 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
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
  local_14 = (uint)*pbVar7;
  param_6 = pbVar7 + 1;
  if (local_14 != 0) {
    local_24 = local_14 & 0xc0;
    if (local_24 == 0xc0) {
      bVar1 = *param_6;
      param_6 = pbVar7 + 2;
    }
    bVar6 = *param_13;
    local_10 = (uint)bVar6;
    if ((bVar6 & 0x80) == 0) {
      uVar4 = local_10 & 0x7f;
      param_13 = param_13 + 1;
    }
    else {
      uVar4 = local_10 & 0x3f;
      if ((bVar6 & 0x40) == 0) {
        param_13 = param_13 + 1 + uVar4;
      }
      else {
        param_13 = param_13 + 2;
      }
    }
    iVar8 = param_15;
    pbVar7 = param_13;
    if ((int)uVar4 <= param_15) {
      do {
        iVar8 = iVar8 - uVar4;
        bVar6 = *pbVar7;
        local_10 = (uint)bVar6;
        param_13 = pbVar7 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar4 = local_10 & 0x7f;
        }
        else {
          uVar4 = local_10 & 0x3f;
          if ((bVar6 & 0x40) == 0) {
            param_13 = param_13 + uVar4;
          }
          else {
            param_13 = pbVar7 + 2;
          }
        }
        pbVar7 = param_13;
      } while ((int)uVar4 <= iVar8);
    }
    local_8 = param_8;
    pbVar7 = param_6;
LAB_007002fc:
    param_6 = pbVar7;
    if ((local_14 & 0x80) == 0) {
      uVar3 = local_14 & 0x7f;
      if ((int)local_8 < (int)uVar3) goto LAB_00700354;
    }
    else {
      uVar3 = local_14 & 0x3f;
      if ((int)local_8 < (int)uVar3) goto LAB_00700354;
      if (local_24 == 0x80) {
        param_6 = param_6 + uVar3;
      }
    }
    local_8 = local_8 - uVar3;
    local_14 = (uint)*param_6;
    local_24 = *param_6 & 0xc0;
    pbVar7 = param_6 + 1;
    if (local_24 == 0xc0) {
      bVar1 = param_6[1];
      pbVar7 = param_6 + 2;
    }
    goto LAB_007002fc;
  }
  goto LAB_007008dd;
LAB_00700354:
  uVar3 = uVar3 - local_8;
  if (((byte)local_14 & 0xc0) == 0x80) {
    param_6 = param_6 + local_8;
  }
  local_24 = 0;
  local_20 = uVar4 - iVar8;
  iVar8 = param_11;
  pbVar7 = param_6;
  pbVar10 = param_1;
  puVar11 = param_3;
  local_1c = param_9;
  while (param_6 = pbVar7, 0 < local_1c) {
    local_8 = local_20;
    if ((int)local_20 < local_1c) {
      do {
        local_c = local_10 & 0x80;
        bVar6 = *param_13;
        uVar4 = (uint)bVar6;
        if ((bVar6 & 0x80) != local_c) break;
        local_1c = local_1c - local_20;
        if ((bVar6 & 0x80) == 0) {
          local_20 = uVar4 & 0x7f;
          param_13 = param_13 + 1;
        }
        else {
          local_20 = uVar4 & 0x3f;
          if ((bVar6 & 0x40) == 0) {
            param_13 = param_13 + 1 + local_20;
          }
          else {
            param_13 = param_13 + 2;
          }
        }
        local_8 = local_8 + local_20;
        local_10 = uVar4;
      } while ((int)local_20 < local_1c);
    }
    if (param_9 < (int)(local_24 + local_8)) {
      local_8 = param_9 - local_24;
    }
    local_24 = local_24 + local_8;
    pbVar9 = pbVar10;
    puVar12 = puVar11;
    if ((int)uVar3 <= (int)local_8) {
      do {
        local_c = local_14 & 0x80;
        local_8 = local_8 - uVar3;
        pbVar10 = pbVar9;
        puVar11 = puVar12;
        if (local_c == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (iVar8 != 1) {
                pbVar9 = pbVar9 + 1;
                puVar12 = puVar12 + 1;
              }
              iVar8 = iVar8 + 1;
              if (2 < iVar8) {
                iVar8 = 0;
              }
              uVar3 = uVar3 - 1;
              pbVar10 = pbVar9;
              puVar11 = puVar12;
            } while (uVar3 != 0);
          }
        }
        else if ((local_14 & 0x40) == 0) {
          pbVar5 = pbVar7;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar7 = pbVar7 + 1;
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            if ((int)uVar3 < 1) goto LAB_007005d2;
            if (((local_10 & 0x80) == 0) || (*puVar12 < param_5)) {
              puVar12 = puVar12 + 1;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              pbVar5 = pbVar7 + 1;
            }
            else {
              puVar12 = puVar12 + 1;
              *pbVar9 = *pbVar7;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
              pbVar5 = pbVar7 + 1;
            }
          }
          pbVar7 = pbVar5;
          pbVar10 = pbVar9;
          puVar11 = puVar12;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
                *pbVar9 = *pbVar5;
              }
              puVar11 = puVar12 + 1;
              pbVar10 = pbVar9 + 1;
              iVar8 = 1;
              pbVar7 = pbVar5 + 1;
              if ((int)(uVar3 - 1) < 1) break;
              iVar8 = 2;
              pbVar7 = pbVar5 + 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
                *pbVar10 = pbVar5[2];
              }
              puVar12 = puVar12 + 2;
              pbVar9 = pbVar9 + 2;
              pbVar5 = pbVar5 + 3;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              pbVar7 = pbVar5;
              pbVar10 = pbVar9;
              puVar11 = puVar12;
            } while (0 < (int)uVar3);
          }
        }
        else {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              iVar8 = 2;
              uVar3 = uVar3 - 1;
            }
            if ((int)uVar3 < 1) goto LAB_007005d2;
            if (((local_10 & 0x80) == 0) || (*puVar12 < param_5)) {
              puVar12 = puVar12 + 1;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
            else {
              puVar12 = puVar12 + 1;
              *pbVar9 = bVar1;
              pbVar9 = pbVar9 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
          }
          pbVar10 = pbVar9;
          puVar11 = puVar12;
          if (0 < (int)uVar3) {
            do {
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
                *pbVar9 = bVar1;
              }
              puVar11 = puVar12 + 1;
              pbVar10 = pbVar9 + 1;
              iVar8 = 1;
              if (((int)(uVar3 - 1) < 1) || (iVar8 = 2, (int)(uVar3 - 2) < 1)) break;
              if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
                *pbVar10 = bVar1;
              }
              puVar11 = puVar12 + 2;
              pbVar10 = pbVar9 + 2;
              iVar8 = 0;
              uVar3 = uVar3 - 3;
              pbVar9 = pbVar10;
              puVar12 = puVar11;
            } while (0 < (int)uVar3);
          }
        }
LAB_007005d2:
        if ((int)local_8 < 1) {
          uVar3 = 0;
          param_6 = pbVar7;
          break;
        }
        bVar6 = *pbVar7;
        local_14 = (uint)bVar6;
        param_6 = pbVar7 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar3 = local_14 & 0x7f;
        }
        else {
          uVar3 = local_14 & 0x3f;
          if ((bVar6 & 0x40) != 0) {
            bVar1 = *param_6;
            param_6 = pbVar7 + 2;
          }
        }
        pbVar7 = param_6;
        pbVar9 = pbVar10;
        puVar12 = puVar11;
      } while ((int)uVar3 <= (int)local_8);
    }
    uVar3 = uVar3 - local_8;
    pbVar9 = pbVar10;
    puVar12 = puVar11;
    pbVar7 = param_6;
    if (0 < (int)local_8) {
      if ((local_14 & 0x80) == 0) {
        if (-1 < (int)(local_8 - 1)) {
          do {
            if (iVar8 != 1) {
              pbVar10 = pbVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar8 = iVar8 + 1;
            if (2 < iVar8) {
              iVar8 = 0;
            }
            local_8 = local_8 - 1;
            pbVar9 = pbVar10;
            puVar12 = puVar11;
          } while (local_8 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            param_6 = param_6 + 1;
            local_8 = local_8 - 1;
            iVar8 = 2;
          }
          pbVar7 = param_6;
          if ((int)local_8 < 1) goto LAB_007007bd;
          if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
            *pbVar10 = *param_6;
          }
          puVar11 = puVar11 + 1;
          pbVar10 = pbVar10 + 1;
          param_6 = param_6 + 1;
          iVar8 = 0;
          local_8 = local_8 - 1;
        }
        pbVar9 = pbVar10;
        puVar12 = puVar11;
        pbVar7 = param_6;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
              *pbVar10 = *param_6;
            }
            puVar12 = puVar11 + 1;
            pbVar9 = pbVar10 + 1;
            iVar8 = 1;
            pbVar7 = param_6 + 1;
            if ((int)(local_8 - 1) < 1) break;
            iVar8 = 2;
            pbVar7 = param_6 + 2;
            if ((int)(local_8 - 2) < 1) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
              *pbVar9 = param_6[2];
            }
            puVar11 = puVar11 + 2;
            pbVar10 = pbVar10 + 2;
            param_6 = param_6 + 3;
            iVar8 = 0;
            local_8 = local_8 - 3;
            pbVar9 = pbVar10;
            puVar12 = puVar11;
            pbVar7 = param_6;
          } while (0 < (int)local_8);
        }
      }
      else {
        if (0 < iVar8) {
          if (iVar8 == 1) {
            local_8 = local_8 - 1;
          }
          iVar8 = 2;
          if ((int)local_8 < 1) goto LAB_007007bd;
          if (((local_10 & 0x80) == 0) || (*puVar11 < param_5)) {
            puVar11 = puVar11 + 1;
            pbVar10 = pbVar10 + 1;
            iVar8 = 0;
            local_8 = local_8 - 1;
          }
          else {
            puVar11 = puVar11 + 1;
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
            iVar8 = 0;
            local_8 = local_8 - 1;
          }
        }
        pbVar9 = pbVar10;
        puVar12 = puVar11;
        if (0 < (int)local_8) {
          do {
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar11)) {
              *pbVar10 = bVar1;
            }
            puVar12 = puVar11 + 1;
            pbVar9 = pbVar10 + 1;
            iVar8 = 1;
            if (((int)(local_8 - 1) < 1) || (iVar8 = 2, (int)(local_8 - 2) < 1)) break;
            if (((local_10 & 0x80) != 0) && (param_5 <= *puVar12)) {
              *pbVar9 = bVar1;
            }
            puVar11 = puVar11 + 2;
            pbVar10 = pbVar10 + 2;
            iVar8 = 0;
            local_8 = local_8 - 3;
            pbVar9 = pbVar10;
            puVar12 = puVar11;
          } while (0 < (int)local_8);
        }
      }
    }
LAB_007007bd:
    param_6 = pbVar7;
    pbVar7 = param_6;
    if (((int)uVar3 < 1) && ((int)local_24 < param_9)) {
      bVar6 = *param_6;
      local_14 = (uint)bVar6;
      pbVar7 = param_6 + 1;
      if ((bVar6 & 0x80) == 0) {
        uVar3 = local_14 & 0x7f;
      }
      else {
        uVar3 = local_14 & 0x3f;
        if ((bVar6 & 0x40) != 0) {
          bVar1 = *pbVar7;
          pbVar7 = param_6 + 2;
        }
      }
    }
    param_6 = pbVar7;
    if (local_1c <= (int)local_20) {
      local_20 = local_20 - local_1c;
      break;
    }
    local_10 = (uint)*param_13;
    local_1c = local_1c - local_20;
    local_20 = 0;
    pbVar7 = param_6;
    pbVar10 = pbVar9;
    puVar11 = puVar12;
  }
  bVar6 = (byte)local_14;
  iVar8 = (param_14 - param_9) - param_15;
  if ((int)local_20 < iVar8) {
    do {
      iVar8 = iVar8 - local_20;
      bVar2 = *param_13;
      if ((bVar2 & 0x80) == 0) {
        local_20 = bVar2 & 0x7f;
        param_13 = param_13 + 1;
      }
      else {
        local_20 = bVar2 & 0x3f;
        if ((bVar2 & 0x40) == 0) {
          param_13 = param_13 + 1 + local_20;
        }
        else {
          param_13 = param_13 + 2;
        }
      }
    } while ((int)local_20 < iVar8);
  }
  iVar8 = (param_7 - param_8) - param_9;
  if ((int)uVar3 < iVar8) {
    do {
      iVar8 = iVar8 - uVar3;
      pbVar7 = param_6;
      if (((byte)local_14 & 0xc0) == 0x80) {
        pbVar7 = param_6 + uVar3;
      }
      bVar6 = *pbVar7;
      local_14 = (uint)bVar6;
      param_6 = pbVar7 + 1;
      uVar3 = local_14;
      if (((bVar6 & 0x80) != 0) && (uVar3 = local_14 & 0x3f, (bVar6 & 0x40) != 0)) {
        param_6 = pbVar7 + 2;
      }
    } while ((int)uVar3 < iVar8);
  }
  if ((bVar6 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar8;
  }
LAB_007008dd:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_12 = param_12 + 1;
  pbVar7 = param_6;
  iVar8 = param_10;
  if (2 < param_12) {
    param_12 = 0;
  }
  goto joined_r0x007001b1;
}

