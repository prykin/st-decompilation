
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fadc0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 ushort *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  int local_10;
  uint local_c;
  undefined1 *local_8;

  _DAT_00857000 = 1;
  puVar11 = param_6;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar6 = (uint)(byte)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      iVar8 = param_7;
      if (uVar6 != 0) {
        while( true ) {
          if ((uVar6 & 0x80) == 0) {
            uVar5 = uVar6 & 0x7f;
          }
          else if ((uVar6 & 0x40) == 0) {
            puVar11 = (ushort *)((int)puVar11 + (uVar6 & 0x3f));
            uVar5 = uVar6 & 0x3f;
          }
          else {
            puVar11 = (ushort *)((int)puVar11 + 1);
            uVar5 = uVar6 & 0x3f;
          }
          if ((int)(iVar8 - uVar5) < 1) break;
          uVar6 = (uint)(byte)*puVar11;
          puVar11 = (ushort *)((int)puVar11 + 1);
          iVar8 = iVar8 - uVar5;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_c = (uint)(byte)*puVar11;
    puVar11 = (ushort *)((int)puVar11 + 1);
    iVar8 = param_8;
    if (local_c == 0) goto LAB_006fb415;
    while( true ) {
      while ((local_c & 0x80) == 0) {
        uVar6 = local_c & 0x7f;
        if (iVar8 < (int)uVar6) goto LAB_006faea8;
        uVar3 = *puVar11;
        puVar11 = (ushort *)((int)puVar11 + 1);
        iVar8 = iVar8 - uVar6;
        local_c = (uint)(byte)uVar3;
      }
      uVar6 = local_c & 0x3f;
      if (iVar8 < (int)uVar6) break;
      if ((local_c & 0x40) == 0) {
        local_c = (uint)*(byte *)((int)puVar11 + uVar6);
        puVar11 = (ushort *)((byte *)((int)puVar11 + uVar6) + 1);
        iVar8 = iVar8 - uVar6;
      }
      else {
        local_c = (uint)*(byte *)((int)puVar11 + 1);
        puVar11 = puVar11 + 1;
        iVar8 = iVar8 - uVar6;
      }
    }
LAB_006faea8:
    uVar6 = uVar6 - iVar8;
    if (((byte)local_c & 0xc0) == 0x80) {
      puVar11 = (ushort *)((int)puVar11 + iVar8);
    }
    local_10 = param_9;
    iVar8 = param_11;
    puVar10 = param_1;
    param_6 = param_3;
    local_8 = param_1;
    if ((int)uVar6 <= param_9) {
      do {
        local_10 = local_10 - uVar6;
        if ((local_c & 0x80) == 0) {
          puVar13 = param_6;
          puVar4 = local_8;
          if (-1 < (int)(uVar6 - 1)) {
            do {
              if (((byte)iVar8 & 1) == 1) {
                puVar10 = puVar10 + 1;
                param_6 = param_6 + 1;
              }
              iVar8 = iVar8 + 1;
              if (4 < iVar8) {
                iVar8 = 0;
              }
              uVar6 = uVar6 - 1;
              puVar13 = param_6;
              puVar4 = puVar10;
            } while (uVar6 != 0);
          }
          goto LAB_006fb183;
        }
        if ((local_c & 0x40) == 0) {
          if (iVar8 < 1) goto switchD_006fb02b_default;
          switch(iVar8) {
          case 1:
            if (param_5 <= *param_6) {
              *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
            }
            param_6 = param_6 + 1;
            puVar10 = puVar10 + 1;
            puVar11 = (ushort *)((int)puVar11 + 1);
            uVar6 = uVar6 - 1;
            iVar8 = 2;
            puVar13 = param_6;
            puVar4 = puVar10;
            local_8 = puVar10;
            if ((int)uVar6 < 1) break;
            goto LAB_006fb06b;
          case 2:
LAB_006fb06b:
            puVar11 = (ushort *)((int)puVar11 + 1);
            uVar6 = uVar6 - 1;
            iVar8 = 3;
            puVar12 = puVar11;
            puVar13 = param_6;
            puVar4 = local_8;
            if (0 < (int)uVar6) {
LAB_006fb07f:
              if (param_5 <= *param_6) {
                *puVar10 = *(undefined1 *)((uint)(byte)*puVar12 + param_13);
              }
              param_6 = param_6 + 1;
              puVar10 = puVar10 + 1;
              puVar11 = (ushort *)((int)puVar12 + 1);
              iVar8 = 4;
              puVar13 = param_6;
              puVar4 = puVar10;
              if (0 < (int)(uVar6 - 1)) {
                puVar11 = puVar12 + 1;
                iVar8 = 0;
                uVar6 = uVar6 - 2;
                local_8 = puVar10;
                goto switchD_006fb02b_default;
              }
            }
            break;
          case 3:
            puVar12 = puVar11;
            goto LAB_006fb07f;
          case 4:
            puVar11 = (ushort *)((int)puVar11 + 1);
            iVar8 = 0;
            uVar6 = uVar6 - 1;
          default:
switchD_006fb02b_default:
            puVar13 = param_6;
            puVar4 = local_8;
            if (0 < (int)uVar6) {
              puVar12 = (ushort *)((int)puVar11 + 1);
              puVar2 = puVar10;
              for (iVar7 = uVar6 - 1; iVar8 = 1, puVar10 = puVar2, puVar11 = puVar12,
                  puVar13 = param_6, puVar4 = local_8, 0 < iVar7; iVar7 = iVar7 + -5) {
                if (param_5 <= *param_6) {
                  *puVar2 = *(undefined1 *)((uint)(byte)*puVar12 + param_13);
                }
                puVar13 = param_6 + 1;
                puVar10 = puVar2 + 1;
                puVar11 = (ushort *)((int)puVar12 + 1);
                iVar8 = 2;
                puVar4 = puVar10;
                if (iVar7 + -1 < 1) break;
                puVar11 = puVar12 + 1;
                iVar8 = 3;
                if (iVar7 + -2 < 1) break;
                if (param_5 <= *puVar13) {
                  *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
                }
                param_6 = param_6 + 2;
                puVar10 = puVar2 + 2;
                puVar11 = (ushort *)((int)puVar12 + 3);
                iVar8 = 4;
                puVar13 = param_6;
                puVar4 = puVar10;
                if (iVar7 + -3 < 1) break;
                puVar11 = puVar12 + 2;
                iVar8 = 0;
                if (iVar7 + -4 < 1) break;
                puVar12 = (ushort *)((int)puVar12 + 5);
                puVar2 = puVar10;
                local_8 = puVar10;
              }
            }
          }
          goto LAB_006fb183;
        }
        uVar3 = *puVar11;
        puVar11 = (ushort *)((int)puVar11 + 1);
        uVar1 = *(undefined1 *)((uint)(byte)uVar3 + param_13);
        if (iVar8 < 1) goto switchD_006faf11_default;
        switch(iVar8) {
        case 1:
          if (param_5 <= *param_6) {
            *local_8 = uVar1;
          }
          param_6 = param_6 + 1;
          local_8 = local_8 + 1;
          uVar6 = uVar6 - 1;
          iVar8 = 2;
          puVar10 = local_8;
          puVar13 = param_6;
          puVar4 = local_8;
          if ((int)uVar6 < 1) break;
          goto LAB_006faf4f;
        case 2:
LAB_006faf4f:
          uVar6 = uVar6 - 1;
          iVar8 = 3;
          puVar10 = local_8;
          puVar13 = param_6;
          puVar4 = local_8;
          if (0 < (int)uVar6) {
LAB_006faf65:
            if (param_5 <= *param_6) {
              *local_8 = uVar1;
            }
            param_6 = param_6 + 1;
            local_8 = local_8 + 1;
            iVar8 = 4;
            puVar10 = local_8;
            puVar13 = param_6;
            puVar4 = local_8;
            if (0 < (int)(uVar6 - 1)) {
              iVar8 = 0;
              uVar6 = uVar6 - 2;
              goto switchD_006faf11_default;
            }
          }
          break;
        case 3:
          goto LAB_006faf65;
        case 4:
          iVar8 = 0;
          uVar6 = uVar6 - 1;
        default:
switchD_006faf11_default:
          puVar10 = local_8;
          puVar13 = param_6;
          puVar4 = local_8;
          if (0 < (int)uVar6) {
            iVar7 = uVar6 - 1;
            iVar8 = 1;
            if (0 < iVar7) {
              while( true ) {
                if (param_5 <= *param_6) {
                  *local_8 = uVar1;
                }
                puVar13 = param_6 + 1;
                puVar10 = local_8 + 1;
                iVar8 = 2;
                puVar4 = puVar10;
                if ((iVar7 + -1 < 1) || (iVar8 = 3, iVar7 + -2 < 1)) break;
                if (param_5 <= *puVar13) {
                  *puVar10 = uVar1;
                }
                param_6 = param_6 + 2;
                local_8 = local_8 + 2;
                iVar8 = 4;
                puVar10 = local_8;
                puVar13 = param_6;
                puVar4 = local_8;
                if ((iVar7 + -3 < 1) || (iVar8 = 0, iVar7 + -4 < 1)) break;
                iVar7 = iVar7 + -5;
                iVar8 = 1;
                if (iVar7 < 1) break;
              }
            }
          }
        }
LAB_006fb183:
        local_8 = puVar4;
        param_6 = puVar13;
        if (local_10 < 1) {
          uVar6 = 0;
          break;
        }
        uVar3 = *puVar11;
        local_c = (uint)(byte)uVar3;
        puVar11 = (ushort *)((int)puVar11 + 1);
        if (((byte)uVar3 & 0x80) == 0) {
          uVar6 = local_c & 0x7f;
        }
        else {
          uVar6 = local_c & 0x3f;
        }
      } while ((int)uVar6 <= local_10);
    }
    uVar6 = uVar6 - local_10;
    if ((local_10 < 1) || ((local_c & 0x80) == 0)) goto LAB_006fb3c9;
    if ((local_c & 0x40) == 0) {
      if (iVar8 < 1) {
switchD_006fb2ed_default:
        if (0 < local_10) {
          puVar11 = (ushort *)((int)puVar11 + 1);
          local_10 = local_10 + -1;
          puVar13 = puVar11;
          if (0 < local_10) {
            while( true ) {
              if (param_5 <= *param_6) {
                *puVar10 = *(undefined1 *)((uint)(byte)*puVar13 + param_13);
              }
              puVar11 = (ushort *)((int)puVar13 + 1);
              if ((local_10 + -1 < 1) || (puVar11 = puVar13 + 1, local_10 + -2 < 1)) break;
              if (param_5 <= param_6[1]) {
                puVar10[1] = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
              }
              param_6 = param_6 + 2;
              puVar10 = puVar10 + 2;
              puVar11 = (ushort *)((int)puVar13 + 3);
              if ((local_10 + -3 < 1) || (puVar11 = puVar13 + 2, local_10 + -4 < 1)) break;
              puVar11 = (ushort *)((int)puVar13 + 5);
              local_10 = local_10 + -5;
              puVar13 = puVar11;
              if (local_10 < 1) break;
            }
          }
        }
      }
      else {
        switch(iVar8) {
        case 1:
          if (param_5 <= *param_6) {
            *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
          }
          param_6 = param_6 + 1;
          puVar10 = puVar10 + 1;
          puVar11 = (ushort *)((int)puVar11 + 1);
          local_10 = local_10 + -1;
          if (local_10 < 1) goto LAB_006fb3c9;
          break;
        case 2:
          break;
        case 3:
          goto switchD_006fb2ed_caseD_3;
        case 4:
          goto switchD_006fb2ed_caseD_4;
        default:
          goto switchD_006fb2ed_default;
        }
        puVar11 = (ushort *)((int)puVar11 + 1);
        local_10 = local_10 + -1;
        if (0 < local_10) {
switchD_006fb2ed_caseD_3:
          if (param_5 <= *param_6) {
            *puVar10 = *(undefined1 *)((uint)(byte)*puVar11 + param_13);
          }
          param_6 = param_6 + 1;
          puVar10 = puVar10 + 1;
          puVar11 = (ushort *)((int)puVar11 + 1);
          local_10 = local_10 + -1;
          if (0 < local_10) {
switchD_006fb2ed_caseD_4:
            puVar11 = (ushort *)((int)puVar11 + 1);
            local_10 = local_10 + -1;
            goto switchD_006fb2ed_default;
          }
        }
      }
      goto LAB_006fb3c9;
    }
    uVar3 = *puVar11;
    puVar11 = (ushort *)((int)puVar11 + 1);
    uVar1 = *(undefined1 *)((uint)(byte)uVar3 + param_13);
    if (iVar8 < 1) goto switchD_006fb1f6_default;
    switch(iVar8) {
    case 1:
      if (param_5 <= *param_6) {
        *local_8 = uVar1;
      }
      param_6 = param_6 + 1;
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
      if (local_10 < 1) break;
      goto LAB_006fb22f;
    case 2:
LAB_006fb22f:
      local_10 = local_10 + -1;
      if (0 < local_10) {
LAB_006fb240:
        if (param_5 <= *param_6) {
          *local_8 = uVar1;
        }
        param_6 = param_6 + 1;
        local_8 = local_8 + 1;
        if (0 < local_10 + -1) {
          local_10 = local_10 + -2;
          goto switchD_006fb1f6_default;
        }
      }
      break;
    case 3:
      goto LAB_006fb240;
    case 4:
      local_10 = local_10 + -1;
    default:
switchD_006fb1f6_default:
      if ((0 < local_10) && (local_10 = local_10 + -1, 0 < local_10)) {
        while( true ) {
          if (param_5 <= *param_6) {
            *local_8 = uVar1;
          }
          if (local_10 + -2 < 1) break;
          if (param_5 <= param_6[1]) {
            local_8[1] = uVar1;
          }
          param_6 = param_6 + 2;
          local_8 = local_8 + 2;
          if ((local_10 + -4 < 1) || (local_10 = local_10 + -5, local_10 < 1)) break;
        }
      }
    }
LAB_006fb3c9:
    iVar8 = (param_7 - param_8) - param_9;
    bVar9 = (byte)local_c;
    if ((int)uVar6 < iVar8) {
      do {
        iVar8 = iVar8 - uVar6;
        puVar13 = puVar11;
        if (((byte)local_c & 0xc0) == 0x80) {
          puVar13 = (ushort *)((int)puVar11 + uVar6);
        }
        bVar9 = (byte)*puVar13;
        local_c = (uint)bVar9;
        puVar11 = (ushort *)((int)puVar13 + 1);
        uVar6 = local_c;
        if (((bVar9 & 0x80) != 0) && (uVar6 = local_c & 0x3f, (bVar9 & 0x40) != 0)) {
          puVar11 = puVar13 + 1;
        }
      } while ((int)uVar6 < iVar8);
    }
    if ((bVar9 & 0xc0) == 0x80) {
      puVar11 = (ushort *)((int)puVar11 + iVar8);
    }
LAB_006fb415:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

