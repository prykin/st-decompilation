
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00705ed0(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint local_c;
  uint local_8;
  
  _DAT_00857000 = 1;
  pbVar6 = param_5;
  iVar12 = param_9;
  do {
    param_9 = iVar12 + -1;
    if (param_9 < 0) {
      return;
    }
    if (param_11 == 1) {
      param_9 = iVar12 + -2;
      if (param_9 < 0) {
        return;
      }
      uVar2 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar12 = param_6;
      if (uVar2 != 0) {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar1 = uVar2 & 0x7f;
          }
          else if ((uVar2 & 0x40) == 0) {
            pbVar6 = pbVar6 + (uVar2 & 0x3f);
            uVar1 = uVar2 & 0x3f;
          }
          else {
            pbVar6 = pbVar6 + 1;
            uVar1 = uVar2 & 0x3f;
          }
          if ((int)(iVar12 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar12 = iVar12 - uVar1;
        }
      }
      param_11 = 2;
    }
    local_8 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    if (local_8 != 0) {
      param_5 = (byte *)param_7;
      while( true ) {
        while ((local_8 & 0x80) == 0) {
          uVar2 = local_8 & 0x7f;
          if ((int)param_5 < (int)uVar2) goto LAB_00705fb2;
          param_5 = param_5 + -uVar2;
          bVar7 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          local_8 = (uint)bVar7;
        }
        uVar2 = local_8 & 0x3f;
        if ((int)param_5 < (int)uVar2) break;
        if ((local_8 & 0x40) == 0) {
          param_5 = param_5 + -uVar2;
          local_8 = (uint)pbVar6[uVar2];
          pbVar6 = pbVar6 + uVar2 + 1;
        }
        else {
          param_5 = param_5 + -uVar2;
          local_8 = (uint)pbVar6[1];
          pbVar6 = pbVar6 + 2;
        }
      }
LAB_00705fb2:
      uVar2 = uVar2 - (int)param_5;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + (int)param_5;
      }
      param_5 = (byte *)param_8;
      puVar5 = param_1;
      pbVar8 = param_3;
      iVar12 = param_10;
      if ((int)uVar2 <= param_8) {
        do {
          local_c = local_8 & 0x80;
          param_5 = param_5 + -uVar2;
          if (local_c == 0) {
            if (-1 < (int)(uVar2 - 1)) {
              do {
                if (iVar12 != 1) {
                  puVar5 = puVar5 + 1;
                  pbVar8 = pbVar8 + 1;
                }
                iVar12 = iVar12 + 1;
                if (2 < iVar12) {
                  iVar12 = 0;
                }
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
            }
          }
          else if ((local_8 & 0x40) == 0) {
            puVar4 = puVar5;
            if (0 < iVar12) {
              if (iVar12 == 1) {
                pbVar6 = pbVar6 + 1;
                iVar12 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_0070612e;
              bVar7 = *pbVar8;
              puVar4 = puVar5 + 1;
              pbVar8 = pbVar8 + 1;
              pbVar6 = pbVar6 + 1;
              iVar12 = 0;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
              uVar2 = uVar2 - 1;
            }
            puVar5 = puVar4;
            if (0 < (int)uVar2) {
              pbVar9 = pbVar8 + 1;
              pbVar10 = pbVar6 + 1;
              *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar4 = puVar4 + 1;
              for (iVar3 = uVar2 - 1; iVar12 = 1, puVar5 = puVar4, pbVar6 = pbVar10, pbVar8 = pbVar9
                  , 0 < iVar3; iVar3 = iVar3 + -3) {
                pbVar6 = pbVar10 + 1;
                iVar12 = 2;
                if (iVar3 + -1 < 1) break;
                puVar5 = puVar4 + 1;
                pbVar8 = pbVar9 + 1;
                pbVar6 = pbVar10 + 2;
                iVar12 = 0;
                *puVar4 = *(undefined1 *)((uint)*pbVar9 + param_12);
                if (iVar3 + -2 < 1) break;
                pbVar9 = pbVar9 + 2;
                pbVar10 = pbVar10 + 3;
                puVar4[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
                puVar4 = puVar4 + 2;
              }
            }
          }
          else {
            pbVar6 = pbVar6 + 1;
            puVar4 = puVar5;
            if (0 < iVar12) {
              if (iVar12 == 1) {
                iVar12 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_0070612e;
              bVar7 = *pbVar8;
              puVar4 = puVar5 + 1;
              pbVar8 = pbVar8 + 1;
              iVar12 = 0;
              *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
              uVar2 = uVar2 - 1;
            }
            puVar5 = puVar4;
            if (0 < (int)uVar2) {
              pbVar9 = pbVar8 + 1;
              *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar4 = puVar4 + 1;
              for (iVar3 = uVar2 - 1;
                  (iVar12 = 1, puVar5 = puVar4, pbVar8 = pbVar9, 0 < iVar3 &&
                  (iVar12 = 2, 0 < iVar3 + -1)); iVar3 = iVar3 + -3) {
                pbVar8 = pbVar9 + 1;
                iVar12 = 0;
                *puVar4 = *(undefined1 *)((uint)*pbVar9 + param_12);
                puVar5 = puVar4 + 1;
                if (iVar3 + -2 < 1) break;
                pbVar9 = pbVar9 + 2;
                puVar4[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
                puVar4 = puVar4 + 2;
              }
            }
          }
LAB_0070612e:
          if ((int)param_5 < 1) {
            uVar2 = 0;
            break;
          }
          bVar7 = *pbVar6;
          local_8 = (uint)bVar7;
          pbVar6 = pbVar6 + 1;
          if ((bVar7 & 0x80) == 0) {
            uVar2 = bVar7 & 0x7f;
          }
          else {
            uVar2 = bVar7 & 0x3f;
          }
        } while ((int)uVar2 <= (int)param_5);
      }
      uVar2 = uVar2 - (int)param_5;
      if ((0 < (int)param_5) && ((local_8 & 0x80) != 0)) {
        if ((local_8 & 0x40) == 0) {
          puVar4 = puVar5;
          if (0 < iVar12) {
            if (iVar12 == 1) {
              pbVar6 = pbVar6 + 1;
              param_5 = param_5 + -1;
            }
            if ((int)param_5 < 1) goto LAB_007062b0;
            bVar7 = *pbVar8;
            puVar4 = puVar5 + 1;
            pbVar8 = pbVar8 + 1;
            pbVar6 = pbVar6 + 1;
            *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
            param_5 = param_5 + -1;
          }
          if (0 < (int)param_5) {
            pbVar9 = pbVar6 + 1;
            *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
            puVar5 = puVar4 + 1;
            for (pbVar10 = param_5 + -1; pbVar6 = pbVar9, 0 < (int)pbVar10; pbVar10 = pbVar10 + -3)
            {
              pbVar11 = pbVar8 + 1;
              pbVar6 = pbVar9 + 1;
              if ((int)(pbVar10 + -1) < 1) break;
              pbVar8 = pbVar8 + 2;
              pbVar6 = pbVar9 + 2;
              *puVar5 = *(undefined1 *)((uint)*pbVar11 + param_12);
              if ((int)(pbVar10 + -2) < 1) break;
              pbVar9 = pbVar9 + 3;
              puVar5[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar5 = puVar5 + 2;
            }
          }
        }
        else {
          pbVar6 = pbVar6 + 1;
          puVar4 = puVar5;
          if (0 < iVar12) {
            if (iVar12 == 1) {
              param_5 = param_5 + -1;
            }
            if ((int)param_5 < 1) goto LAB_007062b0;
            bVar7 = *pbVar8;
            puVar4 = puVar5 + 1;
            pbVar8 = pbVar8 + 1;
            *puVar5 = *(undefined1 *)((uint)bVar7 + param_12);
            param_5 = param_5 + -1;
          }
          if (0 < (int)param_5) {
            *puVar4 = *(undefined1 *)((uint)*pbVar8 + param_12);
            puVar5 = puVar4 + 1;
            for (pbVar9 = param_5 + -1;
                (0 < (int)pbVar9 && (pbVar10 = pbVar8 + 1, 0 < (int)(pbVar9 + -1)));
                pbVar9 = pbVar9 + -3) {
              pbVar8 = pbVar8 + 2;
              *puVar5 = *(undefined1 *)((uint)*pbVar10 + param_12);
              if ((int)(pbVar9 + -2) < 1) break;
              puVar5[1] = *(undefined1 *)((uint)*pbVar8 + param_12);
              puVar5 = puVar5 + 2;
            }
          }
        }
      }
LAB_007062b0:
      bVar7 = (byte)local_8;
      iVar12 = (param_6 - param_7) - param_8;
      if ((int)uVar2 < iVar12) {
        do {
          iVar12 = iVar12 - uVar2;
          pbVar8 = pbVar6;
          if (((byte)local_8 & 0xc0) == 0x80) {
            pbVar8 = pbVar6 + uVar2;
          }
          bVar7 = *pbVar8;
          local_8 = (uint)bVar7;
          pbVar6 = pbVar8 + 1;
          uVar2 = local_8;
          if (((bVar7 & 0x80) != 0) && (uVar2 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
            pbVar6 = pbVar8 + 2;
          }
        } while ((int)uVar2 < iVar12);
      }
      if ((bVar7 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + iVar12;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
    param_11 = param_11 + 1;
    iVar12 = param_9;
    if (2 < param_11) {
      param_11 = 0;
    }
  } while( true );
}

