
void FUN_006f8660(undefined4 *param_1,int param_2,byte *param_3,int param_4,int param_5,uint param_6
                 ,uint param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint local_c;
  uint local_8;

  if (-1 < (int)(param_7 - 1)) {
    local_c = param_7;
    pbVar3 = param_3;
    do {
      local_8 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      iVar2 = param_5;
      if (local_8 == 0) {
        param_1 = (undefined4 *)((int)param_1 + param_2);
      }
      else {
        while( true ) {
          while ((local_8 & 0x80) == 0) {
            uVar7 = local_8 & 0x7f;
            if (iVar2 < (int)uVar7) goto LAB_006f86ce;
            bVar6 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            iVar2 = iVar2 - uVar7;
            local_8 = (uint)bVar6;
          }
          uVar7 = local_8 & 0x3f;
          if (iVar2 < (int)uVar7) break;
          if ((local_8 & 0x40) == 0) {
            local_8 = (uint)pbVar3[uVar7];
            pbVar3 = pbVar3 + uVar7 + 1;
            iVar2 = iVar2 - uVar7;
          }
          else {
            local_8 = (uint)pbVar3[1];
            pbVar3 = pbVar3 + 2;
            iVar2 = iVar2 - uVar7;
          }
        }
LAB_006f86ce:
        uVar7 = uVar7 - iVar2;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar2;
        }
        param_7 = param_6;
        puVar9 = param_1;
        puVar8 = param_1;
        param_3 = pbVar3;
        if ((int)uVar7 <= (int)param_6) {
          do {
            param_7 = param_7 - uVar7;
            if ((local_8 & 0x80) == 0) {
              puVar9 = (undefined4 *)((int)puVar8 + uVar7);
              param_1 = (undefined4 *)((int)puVar8 + uVar7);
            }
            else {
              puVar9 = puVar8;
              if ((local_8 & 0x40) == 0) {
                if (-1 < (int)(uVar7 - 1)) {
                  do {
                    bVar6 = *param_3;
                    puVar9 = (undefined4 *)((int)puVar8 + 1);
                    param_3 = param_3 + 1;
                    uVar7 = uVar7 - 1;
                    *(undefined1 *)puVar8 = *(undefined1 *)((uint)bVar6 + param_8);
                    puVar8 = puVar9;
                    param_1 = puVar9;
                  } while (uVar7 != 0);
                }
              }
              else {
                uVar1 = *(undefined1 *)((uint)*param_3 + param_8);
                param_3 = param_3 + 1;
                if (-1 < (int)(uVar7 - 1)) {
                  for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                    puVar8 = puVar8 + 1;
                  }
                  for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(undefined1 *)puVar8 = uVar1;
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                  }
                  puVar9 = (undefined4 *)((int)param_1 + uVar7);
                  param_1 = puVar9;
                }
              }
            }
            if ((int)param_7 < 1) {
              uVar7 = 0;
              break;
            }
            bVar6 = *param_3;
            local_8 = (uint)bVar6;
            param_3 = param_3 + 1;
            if ((bVar6 & 0x80) == 0) {
              uVar7 = local_8 & 0x7f;
            }
            else {
              uVar7 = local_8 & 0x3f;
            }
            puVar8 = puVar9;
          } while ((int)uVar7 <= (int)param_7);
        }
        uVar7 = uVar7 - param_7;
        pbVar3 = param_3;
        if ((local_8 & 0x80) == 0) {
          puVar9 = (undefined4 *)((int)puVar9 + param_7);
        }
        else if ((local_8 & 0x40) == 0) {
          pbVar5 = param_3;
          puVar8 = puVar9;
          param_3 = (byte *)param_7;
          if (-1 < (int)(param_7 - 1)) {
            do {
              puVar9 = (undefined4 *)((int)puVar8 + 1);
              pbVar3 = pbVar5 + 1;
              *(undefined1 *)puVar8 = *(undefined1 *)((uint)*pbVar5 + param_8);
              param_3 = param_3 + -1;
              pbVar5 = pbVar3;
              puVar8 = puVar9;
            } while (param_3 != (byte *)0x0);
          }
        }
        else if (0 < (int)param_7) {
          uVar1 = *(undefined1 *)((uint)*param_3 + param_8);
          pbVar3 = param_3 + 1;
          if (-1 < (int)(param_7 - 1)) {
            for (uVar4 = param_7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar9 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
              puVar9 = puVar9 + 1;
            }
            for (uVar4 = param_7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar9 = uVar1;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puVar9 = (undefined4 *)((int)param_1 + param_7);
          }
        }
        bVar6 = (byte)local_8;
        iVar2 = (param_4 - param_5) - param_6;
        if ((int)uVar7 < iVar2) {
          do {
            iVar2 = iVar2 - uVar7;
            pbVar5 = pbVar3;
            if (((byte)local_8 & 0xc0) == 0x80) {
              pbVar5 = pbVar3 + uVar7;
            }
            bVar6 = *pbVar5;
            local_8 = (uint)bVar6;
            pbVar3 = pbVar5 + 1;
            uVar7 = local_8;
            if (((bVar6 & 0x80) != 0) && (uVar7 = local_8 & 0x3f, (bVar6 & 0x40) != 0)) {
              pbVar3 = pbVar5 + 2;
            }
          } while ((int)uVar7 < iVar2);
        }
        if ((bVar6 & 0xc0) == 0x80) {
          pbVar3 = pbVar3 + iVar2;
        }
        param_1 = (undefined4 *)((int)puVar9 + (param_2 - param_6));
      }
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return;
}

