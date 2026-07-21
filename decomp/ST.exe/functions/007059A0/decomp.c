
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007059a0(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9,int param_10)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint local_10;
  uint local_c;
  undefined1 *local_8;

  _DAT_00857000 = 1;
  pbVar7 = param_3;
  do {
    param_7 = param_7 + -1;
    if (param_7 < 0) {
      return;
    }
    while (((param_9 & 1) == 0 && (param_7 = param_7 + -1, -1 < param_7))) {
      uVar3 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar5 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar7 = pbVar7 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar7 = pbVar7 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar5 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar5 = iVar5 - uVar2;
        }
      }
      param_9 = param_9 + 1;
      if (4 < (int)param_9) {
        param_9 = 0;
      }
    }
    local_c = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    iVar5 = param_5;
    if (local_c == 0) goto LAB_00705d76;
    while( true ) {
      while ((local_c & 0x80) == 0) {
        uVar3 = local_c & 0x7f;
        if (iVar5 < (int)uVar3) goto LAB_00705a73;
        bVar6 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar5 = iVar5 - uVar3;
        local_c = (uint)bVar6;
      }
      uVar3 = local_c & 0x3f;
      if (iVar5 < (int)uVar3) break;
      if ((local_c & 0x40) == 0) {
        local_c = (uint)pbVar7[uVar3];
        pbVar7 = pbVar7 + uVar3 + 1;
        iVar5 = iVar5 - uVar3;
      }
      else {
        local_c = (uint)pbVar7[1];
        pbVar7 = pbVar7 + 2;
        iVar5 = iVar5 - uVar3;
      }
    }
LAB_00705a73:
    uVar3 = uVar3 - iVar5;
    pbVar8 = pbVar7;
    if (((byte)local_c & 0xc0) == 0x80) {
      pbVar8 = pbVar7 + iVar5;
    }
    param_3 = (byte *)param_6;
    iVar5 = param_8;
    puVar9 = param_1;
    local_8 = param_1;
    if ((int)uVar3 <= param_6) {
      do {
        local_10 = local_c & 0x80;
        param_3 = param_3 + -uVar3;
        if (local_10 == 0) {
          puVar11 = local_8;
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar5 & 1) == 1) {
                puVar9 = puVar9 + 1;
              }
              iVar5 = iVar5 + 1;
              if (4 < iVar5) {
                iVar5 = 0;
              }
              uVar3 = uVar3 - 1;
              puVar11 = puVar9;
            } while (uVar3 != 0);
          }
          goto LAB_00705c54;
        }
        if ((local_c & 0x40) == 0) {
          if (iVar5 < 1) {
switchD_00705b83_default:
            puVar11 = local_8;
            if (0 < (int)uVar3) {
              pbVar7 = pbVar8 + 1;
              puVar10 = puVar9;
              for (iVar4 = uVar3 - 1; iVar5 = 1, pbVar8 = pbVar7, puVar9 = puVar10,
                  puVar11 = local_8, 0 < iVar4; iVar4 = iVar4 + -5) {
                puVar9 = puVar10 + 1;
                pbVar8 = pbVar7 + 1;
                *puVar10 = *(undefined1 *)((uint)*pbVar7 + param_10);
                iVar5 = 2;
                puVar11 = puVar9;
                if (iVar4 + -1 < 1) break;
                pbVar8 = pbVar7 + 2;
                iVar5 = 3;
                if (iVar4 + -2 < 1) break;
                local_8 = puVar10 + 2;
                bVar6 = *pbVar8;
                pbVar8 = pbVar7 + 3;
                puVar10[1] = *(undefined1 *)((uint)bVar6 + param_10);
                iVar5 = 4;
                puVar9 = local_8;
                puVar11 = local_8;
                if (iVar4 + -3 < 1) break;
                pbVar8 = pbVar7 + 4;
                iVar5 = 0;
                if (iVar4 + -4 < 1) break;
                pbVar7 = pbVar7 + 5;
                puVar10 = local_8;
              }
            }
          }
          else {
            puVar10 = puVar9;
            switch(iVar5) {
            case 1:
              bVar6 = *pbVar8;
              puVar10 = puVar9 + 1;
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar6 + param_10);
              iVar5 = 2;
              puVar9 = puVar10;
              puVar11 = puVar10;
              local_8 = puVar10;
              if ((int)uVar3 < 1) goto LAB_00705c54;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00705b83_caseD_3;
            case 4:
              goto switchD_00705b83_caseD_4;
            default:
              goto switchD_00705b83_default;
            }
            pbVar8 = pbVar8 + 1;
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            puVar9 = puVar10;
            puVar11 = local_8;
            if (0 < (int)uVar3) {
switchD_00705b83_caseD_3:
              bVar6 = *pbVar8;
              puVar9 = puVar10 + 1;
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              *puVar10 = *(undefined1 *)((uint)bVar6 + param_10);
              iVar5 = 4;
              puVar11 = puVar9;
              local_8 = puVar9;
              if (0 < (int)uVar3) {
switchD_00705b83_caseD_4:
                pbVar8 = pbVar8 + 1;
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_00705b83_default;
              }
            }
          }
          goto LAB_00705c54;
        }
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar1 = *(undefined1 *)((uint)bVar6 + param_10);
        if (iVar5 < 1) goto switchD_00705adb_default;
        switch(iVar5) {
        case 1:
          iVar5 = 2;
          *local_8 = uVar1;
          local_8 = local_8 + 1;
          uVar3 = uVar3 - 1;
          puVar9 = local_8;
          puVar11 = local_8;
          if ((int)uVar3 < 1) break;
          goto LAB_00705afa;
        case 2:
LAB_00705afa:
          uVar3 = uVar3 - 1;
          iVar5 = 3;
          puVar9 = local_8;
          puVar11 = local_8;
          if (0 < (int)uVar3) {
LAB_00705b09:
            *local_8 = uVar1;
            local_8 = local_8 + 1;
            iVar5 = 4;
            puVar9 = local_8;
            puVar11 = local_8;
            if (0 < (int)(uVar3 - 1)) {
              iVar5 = 0;
              uVar3 = uVar3 - 2;
              goto switchD_00705adb_default;
            }
          }
          break;
        case 3:
          goto LAB_00705b09;
        case 4:
          iVar5 = 0;
          uVar3 = uVar3 - 1;
        default:
switchD_00705adb_default:
          puVar9 = local_8;
          puVar11 = local_8;
          if (0 < (int)uVar3) {
            iVar4 = uVar3 - 1;
            iVar5 = 1;
            if (0 < iVar4) {
              while( true ) {
                *local_8 = uVar1;
                puVar9 = local_8 + 1;
                iVar5 = 2;
                puVar11 = puVar9;
                if ((iVar4 + -1 < 1) || (iVar5 = 3, iVar4 + -2 < 1)) break;
                *puVar9 = uVar1;
                local_8 = local_8 + 2;
                iVar5 = 4;
                puVar9 = local_8;
                puVar11 = local_8;
                if ((iVar4 + -3 < 1) || (iVar5 = 0, iVar4 + -4 < 1)) break;
                iVar4 = iVar4 + -5;
                iVar5 = 1;
                if (iVar4 < 1) break;
              }
            }
          }
        }
LAB_00705c54:
        local_8 = puVar11;
        if ((int)param_3 < 1) {
          uVar3 = 0;
          break;
        }
        bVar6 = *pbVar8;
        local_c = (uint)bVar6;
        pbVar8 = pbVar8 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar3 = local_c & 0x7f;
        }
        else {
          uVar3 = local_c & 0x3f;
        }
      } while ((int)uVar3 <= (int)param_3);
    }
    uVar3 = uVar3 - (int)param_3;
    pbVar7 = pbVar8;
    if (((int)param_3 < 1) || ((local_c & 0x80) == 0)) goto LAB_00705d28;
    if ((local_c & 0x40) != 0) {
      pbVar7 = pbVar8 + 1;
      uVar1 = *(undefined1 *)((uint)*pbVar8 + param_10);
      if (iVar5 < 1) goto switchD_00705cbf_default;
      switch(iVar5) {
      case 1:
        *local_8 = uVar1;
        local_8 = local_8 + 1;
        param_3 = param_3 + -1;
        if ((int)param_3 < 1) break;
        goto LAB_00705cdc;
      case 2:
LAB_00705cdc:
        param_3 = param_3 + -1;
        if (0 < (int)param_3) {
LAB_00705ce9:
          *local_8 = uVar1;
          local_8 = local_8 + 1;
          if (0 < (int)(param_3 + -1)) {
            param_3 = param_3 + -2;
            goto switchD_00705cbf_default;
          }
        }
        break;
      case 3:
        goto LAB_00705ce9;
      case 4:
        param_3 = param_3 + -1;
      default:
switchD_00705cbf_default:
        if ((0 < (int)param_3) && (pbVar8 = param_3 + -1, 0 < (int)pbVar8)) {
          while( true ) {
            *local_8 = uVar1;
            if ((int)(pbVar8 + -2) < 1) break;
            local_8[1] = uVar1;
            local_8 = local_8 + 2;
            if (((int)(pbVar8 + -4) < 1) || (pbVar8 = pbVar8 + -5, (int)pbVar8 < 1)) break;
          }
        }
      }
      goto LAB_00705d28;
    }
    if (iVar5 < 1) goto switchD_00705db1_default;
    puVar11 = puVar9;
    switch(iVar5) {
    case 1:
      bVar6 = *pbVar8;
      puVar11 = puVar9 + 1;
      pbVar8 = pbVar8 + 1;
      *puVar9 = *(undefined1 *)((uint)bVar6 + param_10);
      param_3 = param_3 + -1;
      pbVar7 = pbVar8;
      if ((int)param_3 < 1) break;
      goto LAB_00705ddb;
    case 2:
LAB_00705ddb:
      pbVar8 = pbVar8 + 1;
      param_3 = param_3 + -1;
      pbVar7 = pbVar8;
      if (0 < (int)param_3) {
LAB_00705df0:
        puVar9 = puVar11 + 1;
        *puVar11 = *(undefined1 *)((uint)*pbVar8 + param_10);
        pbVar7 = pbVar8 + 1;
        if (0 < (int)(param_3 + -1)) {
          pbVar8 = pbVar8 + 2;
          param_3 = param_3 + -2;
          goto switchD_00705db1_default;
        }
      }
      break;
    case 3:
      goto LAB_00705df0;
    case 4:
      pbVar8 = pbVar8 + 1;
      param_3 = param_3 + -1;
    default:
switchD_00705db1_default:
      pbVar7 = pbVar8;
      if (0 < (int)param_3) {
        pbVar8 = pbVar8 + 1;
        param_3 = param_3 + -1;
        pbVar7 = pbVar8;
        if (0 < (int)param_3) {
          while( true ) {
            *puVar9 = *(undefined1 *)((uint)*pbVar8 + param_10);
            pbVar7 = pbVar8 + 1;
            if (((int)(param_3 + -1) < 1) || (pbVar7 = pbVar8 + 2, (int)(param_3 + -2) < 1)) break;
            puVar9[1] = *(undefined1 *)((uint)pbVar8[2] + param_10);
            pbVar7 = pbVar8 + 3;
            if (((int)(param_3 + -3) < 1) || (pbVar7 = pbVar8 + 4, (int)(param_3 + -4) < 1)) break;
            pbVar8 = pbVar8 + 5;
            param_3 = param_3 + -5;
            pbVar7 = pbVar8;
            puVar9 = puVar9 + 2;
            if ((int)param_3 < 1) break;
          }
        }
      }
    }
LAB_00705d28:
    bVar6 = (byte)local_c;
    iVar5 = (param_4 - param_5) - param_6;
    if ((int)uVar3 < iVar5) {
      do {
        iVar5 = iVar5 - uVar3;
        pbVar8 = pbVar7;
        if (((byte)local_c & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + uVar3;
        }
        bVar6 = *pbVar8;
        local_c = (uint)bVar6;
        pbVar7 = pbVar8 + 1;
        uVar3 = local_c;
        if (((bVar6 & 0x80) != 0) && (uVar3 = local_c & 0x3f, (bVar6 & 0x40) != 0)) {
          pbVar7 = pbVar8 + 2;
        }
      } while ((int)uVar3 < iVar5);
    }
    if ((bVar6 & 0xc0) == 0x80) {
      pbVar7 = pbVar7 + iVar5;
    }
LAB_00705d76:
    param_1 = param_1 + param_2;
    param_9 = param_9 + 1;
    if (4 < (int)param_9) {
      param_9 = 0;
    }
  } while( true );
}

