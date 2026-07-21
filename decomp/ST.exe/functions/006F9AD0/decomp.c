
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ad0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,ushort *param_6
                 ,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                 byte *param_13,int param_14,int param_15)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint local_10;
  uint local_c;
  int local_8;

  _DAT_00857000 = 1;
  puVar8 = param_6;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar3 = (uint)(byte)*puVar8;
      puVar8 = (ushort *)((int)puVar8 + 1);
      iVar7 = param_7;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            puVar8 = (ushort *)((int)puVar8 + (uVar3 & 0x3f));
            uVar2 = uVar3 & 0x3f;
          }
          else {
            puVar8 = (ushort *)((int)puVar8 + 1);
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar7 - uVar2) < 1) break;
          uVar3 = (uint)(byte)*puVar8;
          puVar8 = (ushort *)((int)puVar8 + 1);
          iVar7 = iVar7 - uVar2;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_c = (uint)(byte)*puVar8;
    puVar8 = (ushort *)((int)puVar8 + 1);
    if (local_c == 0) goto LAB_006fa1f3;
    local_8 = param_8;
    while( true ) {
      while ((local_c & 0x80) == 0) {
        uVar3 = local_c & 0x7f;
        if (local_8 < (int)uVar3) goto LAB_006f9bc6;
        local_8 = local_8 - uVar3;
        uVar1 = *puVar8;
        puVar8 = (ushort *)((int)puVar8 + 1);
        local_c = (uint)(byte)uVar1;
      }
      uVar3 = local_c & 0x3f;
      if (local_8 < (int)uVar3) break;
      if ((local_c & 0x40) == 0) {
        local_8 = local_8 - uVar3;
        local_c = (uint)*(byte *)((int)puVar8 + uVar3);
        puVar8 = (ushort *)((byte *)((int)puVar8 + uVar3) + 1);
      }
      else {
        local_8 = local_8 - uVar3;
        local_c = (uint)*(byte *)((int)puVar8 + 1);
        puVar8 = puVar8 + 1;
      }
    }
LAB_006f9bc6:
    uVar3 = uVar3 - local_8;
    if (((byte)local_c & 0xc0) == 0x80) {
      puVar8 = (ushort *)((int)puVar8 + local_8);
    }
    local_8 = param_9;
    iVar7 = param_11;
    pbVar12 = param_1;
    pbVar14 = param_13;
    param_6 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_10 = local_c & 0x80;
        local_8 = local_8 - uVar3;
        if (local_10 == 0) {
          puVar10 = param_6;
          local_10 = uVar3;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar7 & 1) == 1) {
                pbVar12 = pbVar12 + 1;
                pbVar14 = pbVar14 + 1;
                param_6 = param_6 + 1;
              }
              iVar7 = iVar7 + 1;
              if (4 < iVar7) {
                iVar7 = 0;
              }
              local_10 = local_10 - 1;
              puVar10 = param_6;
            } while (local_10 != 0);
          }
          goto LAB_006f9ed5;
        }
        if ((local_c & 0x40) == 0) {
          if (iVar7 < 1) {
switchD_006f9d79_default:
            puVar10 = param_6;
            if (0 < (int)uVar3) {
              puVar9 = (ushort *)((int)puVar8 + 1);
              pbVar11 = pbVar12;
              pbVar13 = pbVar14;
              for (iVar4 = uVar3 - 1; iVar7 = 1, puVar8 = puVar9, pbVar12 = pbVar11,
                  pbVar14 = pbVar13, puVar10 = param_6, 0 < iVar4; iVar4 = iVar4 + -5) {
                if (*param_6 < param_5) {
                  bVar6 = *(byte *)((uint)*pbVar13 + param_15);
                }
                else {
                  bVar6 = (byte)*puVar9;
                }
                *pbVar11 = bVar6;
                iVar7 = 2;
                puVar10 = param_6 + 1;
                pbVar12 = pbVar11 + 1;
                pbVar14 = pbVar13 + 1;
                puVar8 = (ushort *)((int)puVar9 + 1);
                if (iVar4 + -1 < 1) break;
                puVar8 = puVar9 + 1;
                iVar7 = 3;
                if (iVar4 + -2 < 1) break;
                if (*puVar10 < param_5) {
                  bVar6 = *(byte *)((uint)*pbVar14 + param_15);
                }
                else {
                  bVar6 = (byte)*puVar8;
                }
                *pbVar12 = bVar6;
                param_6 = param_6 + 2;
                pbVar12 = pbVar11 + 2;
                pbVar14 = pbVar13 + 2;
                puVar8 = (ushort *)((int)puVar9 + 3);
                iVar7 = 4;
                puVar10 = param_6;
                if (iVar4 + -3 < 1) break;
                puVar8 = puVar9 + 2;
                iVar7 = 0;
                if (iVar4 + -4 < 1) break;
                puVar9 = (ushort *)((int)puVar9 + 5);
                pbVar11 = pbVar12;
                pbVar13 = pbVar14;
              }
            }
          }
          else {
            switch(iVar7) {
            case 1:
              if (*param_6 < param_5) {
                bVar6 = *(byte *)((uint)*pbVar14 + param_15);
              }
              else {
                bVar6 = (byte)*puVar8;
              }
              *pbVar12 = bVar6;
              iVar7 = 2;
              param_6 = param_6 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar14 = pbVar14 + 1;
              puVar8 = (ushort *)((int)puVar8 + 1);
              uVar3 = uVar3 - 1;
              puVar10 = param_6;
              if ((int)uVar3 < 1) goto LAB_006f9ed5;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9d79_caseD_3;
            case 4:
              goto switchD_006f9d79_caseD_4;
            default:
              goto switchD_006f9d79_default;
            }
            puVar8 = (ushort *)((int)puVar8 + 1);
            uVar3 = uVar3 - 1;
            iVar7 = 3;
            puVar10 = param_6;
            if (0 < (int)uVar3) {
switchD_006f9d79_caseD_3:
              if (*param_6 < param_5) {
                bVar6 = *(byte *)((uint)*pbVar14 + param_15);
              }
              else {
                bVar6 = (byte)*puVar8;
              }
              *pbVar12 = bVar6;
              param_6 = param_6 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar14 = pbVar14 + 1;
              puVar8 = (ushort *)((int)puVar8 + 1);
              uVar3 = uVar3 - 1;
              iVar7 = 4;
              puVar10 = param_6;
              if (0 < (int)uVar3) {
switchD_006f9d79_caseD_4:
                puVar8 = (ushort *)((int)puVar8 + 1);
                iVar7 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006f9d79_default;
              }
            }
          }
        }
        else {
          bVar6 = (byte)*puVar8;
          puVar8 = (ushort *)((int)puVar8 + 1);
          if (iVar7 < 1) {
switchD_006f9c2c_default:
            puVar10 = param_6;
            if (0 < (int)uVar3) {
              iVar4 = uVar3 - 1;
              iVar7 = 1;
              pbVar11 = pbVar12;
              pbVar13 = pbVar14;
              if (0 < iVar4) {
                while( true ) {
                  bVar5 = bVar6;
                  if (*param_6 < param_5) {
                    bVar5 = *(byte *)((uint)*pbVar13 + param_15);
                  }
                  *pbVar11 = bVar5;
                  iVar7 = 2;
                  puVar10 = param_6 + 1;
                  pbVar12 = pbVar11 + 1;
                  pbVar14 = pbVar13 + 1;
                  if ((iVar4 + -1 < 1) || (iVar7 = 3, iVar4 + -2 < 1)) break;
                  bVar5 = bVar6;
                  if (*puVar10 < param_5) {
                    bVar5 = *(byte *)((uint)*pbVar14 + param_15);
                  }
                  *pbVar12 = bVar5;
                  param_6 = param_6 + 2;
                  pbVar12 = pbVar11 + 2;
                  pbVar14 = pbVar13 + 2;
                  iVar7 = 4;
                  puVar10 = param_6;
                  if ((iVar4 + -3 < 1) || (iVar7 = 0, iVar4 + -4 < 1)) break;
                  iVar4 = iVar4 + -5;
                  iVar7 = 1;
                  pbVar11 = pbVar12;
                  pbVar13 = pbVar14;
                  if (iVar4 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar7) {
            case 1:
              bVar5 = bVar6;
              if (*param_6 < param_5) {
                bVar5 = *(byte *)((uint)*pbVar14 + param_15);
              }
              *pbVar12 = bVar5;
              iVar7 = 2;
              param_6 = param_6 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar14 = pbVar14 + 1;
              uVar3 = uVar3 - 1;
              puVar10 = param_6;
              if ((int)uVar3 < 1) goto LAB_006f9ed5;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9c2c_caseD_3;
            case 4:
              goto switchD_006f9c2c_caseD_4;
            default:
              goto switchD_006f9c2c_default;
            }
            uVar3 = uVar3 - 1;
            iVar7 = 3;
            puVar10 = param_6;
            if (0 < (int)uVar3) {
switchD_006f9c2c_caseD_3:
              bVar5 = bVar6;
              if (*param_6 < param_5) {
                bVar5 = *(byte *)((uint)*pbVar14 + param_15);
              }
              *pbVar12 = bVar5;
              param_6 = param_6 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar14 = pbVar14 + 1;
              uVar3 = uVar3 - 1;
              iVar7 = 4;
              puVar10 = param_6;
              if (0 < (int)uVar3) {
switchD_006f9c2c_caseD_4:
                iVar7 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006f9c2c_default;
              }
            }
          }
        }
LAB_006f9ed5:
        param_6 = puVar10;
        if (local_8 < 1) {
          uVar3 = 0;
          break;
        }
        bVar6 = (byte)*puVar8;
        local_c = (uint)bVar6;
        puVar8 = (ushort *)((int)puVar8 + 1);
        if ((bVar6 & 0x80) == 0) {
          uVar3 = bVar6 & 0x7f;
        }
        else {
          uVar3 = bVar6 & 0x3f;
        }
      } while ((int)uVar3 <= local_8);
    }
    uVar3 = uVar3 - local_8;
    if ((local_8 < 1) || ((local_c & 0x80) == 0)) goto LAB_006fa1a7;
    if ((local_c & 0x40) == 0) {
      if (iVar7 < 1) goto switchD_006fa07d_default;
      puVar10 = puVar8;
      switch(iVar7) {
      case 1:
        if (*param_6 < param_5) {
          bVar6 = *(byte *)((uint)*pbVar14 + param_15);
        }
        else {
          bVar6 = (byte)*puVar8;
        }
        *pbVar12 = bVar6;
        param_6 = param_6 + 1;
        pbVar12 = pbVar12 + 1;
        pbVar14 = pbVar14 + 1;
        puVar8 = (ushort *)((int)puVar8 + 1);
        local_8 = local_8 + -1;
        if (local_8 < 1) break;
        goto LAB_006fa0be;
      case 2:
LAB_006fa0be:
        puVar10 = (ushort *)((int)puVar8 + 1);
        local_8 = local_8 + -1;
        puVar8 = puVar10;
        if (0 < local_8) {
switchD_006fa07d_caseD_3:
          if (*param_6 < param_5) {
            bVar6 = *(byte *)((uint)*pbVar14 + param_15);
          }
          else {
            bVar6 = (byte)*puVar10;
          }
          *pbVar12 = bVar6;
          param_6 = param_6 + 1;
          pbVar12 = pbVar12 + 1;
          pbVar14 = pbVar14 + 1;
          puVar8 = (ushort *)((int)puVar10 + 1);
          if (0 < local_8 + -1) {
            puVar8 = puVar10 + 1;
            local_8 = local_8 + -2;
            goto switchD_006fa07d_default;
          }
        }
        break;
      case 3:
        goto switchD_006fa07d_caseD_3;
      case 4:
        puVar8 = (ushort *)((int)puVar8 + 1);
        local_8 = local_8 + -1;
      default:
switchD_006fa07d_default:
        if (0 < local_8) {
          puVar10 = (ushort *)((int)puVar8 + 1);
          local_8 = local_8 + -1;
          puVar8 = puVar10;
          if (0 < local_8) {
            while( true ) {
              if (*param_6 < param_5) {
                bVar6 = *(byte *)((uint)*pbVar14 + param_15);
              }
              else {
                bVar6 = (byte)*puVar10;
              }
              *pbVar12 = bVar6;
              puVar8 = (ushort *)((int)puVar10 + 1);
              if ((local_8 + -1 < 1) || (puVar8 = puVar10 + 1, local_8 + -2 < 1)) break;
              if (param_6[1] < param_5) {
                bVar6 = *(byte *)((uint)pbVar14[1] + param_15);
              }
              else {
                bVar6 = (byte)puVar10[1];
              }
              pbVar12[1] = bVar6;
              param_6 = param_6 + 2;
              pbVar12 = pbVar12 + 2;
              pbVar14 = pbVar14 + 2;
              puVar8 = (ushort *)((int)puVar10 + 3);
              if ((local_8 + -3 < 1) || (puVar8 = puVar10 + 2, local_8 + -4 < 1)) break;
              puVar10 = (ushort *)((int)puVar10 + 5);
              local_8 = local_8 + -5;
              puVar8 = puVar10;
              if (local_8 < 1) break;
            }
          }
        }
      }
      goto LAB_006fa1a7;
    }
    bVar6 = (byte)*puVar8;
    puVar8 = (ushort *)((int)puVar8 + 1);
    if (iVar7 < 1) goto switchD_006f9f43_default;
    switch(iVar7) {
    case 1:
      bVar5 = bVar6;
      if (*param_6 < param_5) {
        bVar5 = *(byte *)((uint)*pbVar14 + param_15);
      }
      *pbVar12 = bVar5;
      param_6 = param_6 + 1;
      pbVar12 = pbVar12 + 1;
      pbVar14 = pbVar14 + 1;
      local_8 = local_8 + -1;
      if (local_8 < 1) break;
      goto LAB_006f9f86;
    case 2:
LAB_006f9f86:
      local_8 = local_8 + -1;
      if (0 < local_8) {
switchD_006f9f43_caseD_3:
        bVar5 = bVar6;
        if (*param_6 < param_5) {
          bVar5 = *(byte *)((uint)*pbVar14 + param_15);
        }
        *pbVar12 = bVar5;
        param_6 = param_6 + 1;
        pbVar12 = pbVar12 + 1;
        pbVar14 = pbVar14 + 1;
        if (0 < local_8 + -1) {
          local_8 = local_8 + -2;
          goto switchD_006f9f43_default;
        }
      }
      break;
    case 3:
      goto switchD_006f9f43_caseD_3;
    case 4:
      local_8 = local_8 + -1;
    default:
switchD_006f9f43_default:
      if ((0 < local_8) && (local_8 = local_8 + -1, 0 < local_8)) {
        while( true ) {
          bVar5 = bVar6;
          if (*param_6 < param_5) {
            bVar5 = *(byte *)((uint)*pbVar14 + param_15);
          }
          *pbVar12 = bVar5;
          if (local_8 + -2 < 1) break;
          bVar5 = bVar6;
          if (param_6[1] < param_5) {
            bVar5 = *(byte *)((uint)pbVar14[1] + param_15);
          }
          pbVar12[1] = bVar5;
          param_6 = param_6 + 2;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
          if ((local_8 + -4 < 1) || (local_8 = local_8 + -5, local_8 < 1)) break;
        }
      }
    }
LAB_006fa1a7:
    bVar6 = (byte)local_c;
    iVar7 = (param_7 - param_8) - param_9;
    if ((int)uVar3 < iVar7) {
      do {
        iVar7 = iVar7 - uVar3;
        puVar10 = puVar8;
        if (((byte)local_c & 0xc0) == 0x80) {
          puVar10 = (ushort *)((int)puVar8 + uVar3);
        }
        bVar6 = (byte)*puVar10;
        local_c = (uint)bVar6;
        puVar8 = (ushort *)((int)puVar10 + 1);
        uVar3 = local_c;
        if (((bVar6 & 0x80) != 0) && (uVar3 = local_c & 0x3f, (bVar6 & 0x40) != 0)) {
          puVar8 = puVar10 + 1;
        }
      } while ((int)uVar3 < iVar7);
    }
    if ((bVar6 & 0xc0) == 0x80) {
      puVar8 = (ushort *)((int)puVar8 + iVar7);
    }
LAB_006fa1f3:
    param_1 = param_1 + param_2;
    param_13 = param_13 + param_14;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

