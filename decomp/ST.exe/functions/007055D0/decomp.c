
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007055d0(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint local_10;
  uint local_c;
  int local_8;
  
  _DAT_00857000 = 1;
  iVar8 = param_7;
  do {
    param_7 = iVar8 + -1;
    if (param_7 < 0) {
      return;
    }
    if (param_9 == 1) {
      param_7 = iVar8 + -2;
      if (param_7 < 0) {
        return;
      }
      uVar3 = (uint)*param_3;
      param_3 = param_3 + 1;
      iVar8 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            param_3 = param_3 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            param_3 = param_3 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar8 - uVar2) < 1) break;
          uVar3 = (uint)*param_3;
          param_3 = param_3 + 1;
          iVar8 = iVar8 - uVar2;
        }
      }
      param_9 = 2;
    }
    local_c = (uint)*param_3;
    param_3 = param_3 + 1;
    iVar8 = param_5;
    if (local_c != 0) {
      while( true ) {
        while ((local_c & 0x80) == 0) {
          uVar3 = local_c & 0x7f;
          if (iVar8 < (int)uVar3) goto LAB_0070569c;
          bVar7 = *param_3;
          param_3 = param_3 + 1;
          iVar8 = iVar8 - uVar3;
          local_c = (uint)bVar7;
        }
        uVar3 = local_c & 0x3f;
        if (iVar8 < (int)uVar3) break;
        if ((local_c & 0x40) == 0) {
          local_c = (uint)param_3[uVar3];
          param_3 = param_3 + uVar3 + 1;
          iVar8 = iVar8 - uVar3;
        }
        else {
          local_c = (uint)param_3[1];
          param_3 = param_3 + 2;
          iVar8 = iVar8 - uVar3;
        }
      }
LAB_0070569c:
      uVar3 = uVar3 - iVar8;
      if (((byte)local_c & 0xc0) == 0x80) {
        param_3 = param_3 + iVar8;
      }
      local_8 = param_6;
      puVar5 = param_1;
      iVar8 = param_8;
      if ((int)uVar3 <= param_6) {
        do {
          local_10 = local_c & 0x80;
          local_8 = local_8 - uVar3;
          if (local_10 == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar8 != 1) {
                  puVar5 = puVar5 + 1;
                }
                iVar8 = iVar8 + 1;
                if (2 < iVar8) {
                  iVar8 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else if ((local_c & 0x40) == 0) {
            puVar6 = puVar5;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                param_3 = param_3 + 1;
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_007057dc;
              bVar7 = *param_3;
              puVar6 = puVar5 + 1;
              param_3 = param_3 + 1;
              iVar8 = 0;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_10);
              uVar3 = uVar3 - 1;
            }
            puVar5 = puVar6;
            if (0 < (int)uVar3) {
              pbVar9 = param_3 + 1;
              *puVar6 = *(undefined1 *)((uint)*param_3 + param_10);
              puVar6 = puVar6 + 1;
              for (iVar4 = uVar3 - 1; iVar8 = 1, puVar5 = puVar6, param_3 = pbVar9, 0 < iVar4;
                  iVar4 = iVar4 + -3) {
                param_3 = pbVar9 + 1;
                iVar8 = 2;
                if (iVar4 + -1 < 1) break;
                bVar7 = *param_3;
                param_3 = pbVar9 + 2;
                iVar8 = 0;
                *puVar6 = *(undefined1 *)((uint)bVar7 + param_10);
                puVar5 = puVar6 + 1;
                if (iVar4 + -2 < 1) break;
                pbVar9 = pbVar9 + 3;
                puVar6[1] = *(undefined1 *)((uint)*param_3 + param_10);
                puVar6 = puVar6 + 2;
              }
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_3 + param_10);
            param_3 = param_3 + 1;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_007057dc;
              *puVar5 = uVar1;
              puVar5 = puVar5 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *puVar5 = uVar1;
              puVar6 = puVar5 + 1;
              for (iVar4 = uVar3 - 1;
                  (iVar8 = 1, puVar5 = puVar6, 0 < iVar4 && (iVar8 = 2, 0 < iVar4 + -1));
                  iVar4 = iVar4 + -3) {
                *puVar6 = uVar1;
                puVar5 = puVar6 + 1;
                iVar8 = 0;
                if (iVar4 + -2 < 1) break;
                *puVar5 = uVar1;
                puVar6 = puVar6 + 2;
              }
            }
          }
LAB_007057dc:
          if (local_8 < 1) {
            uVar3 = 0;
            break;
          }
          bVar7 = *param_3;
          local_c = (uint)bVar7;
          param_3 = param_3 + 1;
          if ((bVar7 & 0x80) == 0) {
            uVar3 = local_c & 0x7f;
          }
          else {
            uVar3 = local_c & 0x3f;
          }
        } while ((int)uVar3 <= local_8);
      }
      uVar3 = uVar3 - local_8;
      if ((0 < local_8) && ((local_c & 0x80) != 0)) {
        if ((local_c & 0x40) == 0) {
          puVar6 = puVar5;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              param_3 = param_3 + 1;
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_0070588d;
            bVar7 = *param_3;
            puVar6 = puVar5 + 1;
            param_3 = param_3 + 1;
            *puVar5 = *(undefined1 *)((uint)bVar7 + param_10);
            local_8 = local_8 + -1;
          }
          if (0 < local_8) {
            pbVar9 = param_3 + 1;
            *puVar6 = *(undefined1 *)((uint)*param_3 + param_10);
            puVar5 = puVar6 + 1;
            for (local_8 = local_8 + -1;
                (param_3 = pbVar9, 0 < local_8 && (param_3 = pbVar9 + 1, 0 < local_8 + -1));
                local_8 = local_8 + -3) {
              bVar7 = *param_3;
              param_3 = pbVar9 + 2;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_10);
              if (local_8 + -2 < 1) break;
              pbVar9 = pbVar9 + 3;
              puVar5[1] = *(undefined1 *)((uint)*param_3 + param_10);
              puVar5 = puVar5 + 2;
            }
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_3 + param_10);
          param_3 = param_3 + 1;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_0070588d;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
            local_8 = local_8 + -1;
          }
          if (0 < local_8) {
            *puVar5 = uVar1;
            for (local_8 = local_8 + -1; (0 < local_8 && (0 < local_8 + -1)); local_8 = local_8 + -3
                ) {
              puVar5[1] = uVar1;
              puVar5 = puVar5 + 2;
              if (local_8 + -2 < 1) break;
              *puVar5 = uVar1;
            }
          }
        }
      }
LAB_0070588d:
      bVar7 = (byte)local_c;
      iVar8 = (param_4 - param_5) - param_6;
      if ((int)uVar3 < iVar8) {
        do {
          iVar8 = iVar8 - uVar3;
          pbVar9 = param_3;
          if (((byte)local_c & 0xc0) == 0x80) {
            pbVar9 = param_3 + uVar3;
          }
          bVar7 = *pbVar9;
          local_c = (uint)bVar7;
          param_3 = pbVar9 + 1;
          uVar3 = local_c;
          if (((bVar7 & 0x80) != 0) && (uVar3 = local_c & 0x3f, (bVar7 & 0x40) != 0)) {
            param_3 = pbVar9 + 2;
          }
        } while ((int)uVar3 < iVar8);
      }
      if ((bVar7 & 0xc0) == 0x80) {
        param_3 = param_3 + iVar8;
      }
    }
    param_1 = param_1 + param_2;
    param_9 = param_9 + 1;
    iVar8 = param_7;
    if (2 < param_9) {
      param_9 = 0;
    }
  } while( true );
}

