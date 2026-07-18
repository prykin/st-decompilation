
void FUN_006d3300(undefined2 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 byte *param_7,int param_8,byte *param_9,int param_10,int param_11,int param_12)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  
  if (param_9 != (byte *)0x0) {
    param_9 = param_9 + param_10 * param_12 + (param_11 >> 3);
  }
  if (param_5 < 1) {
    pbVar3 = param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    pbVar3 = FUN_006cfe10(param_3,param_5);
  }
  sVar2 = *(short *)(param_3 + 0x12);
  bVar1 = (byte)param_11;
  if (param_6 == sVar2) {
    if (param_9 == (byte *)0x0) {
      if (0 < (int)param_7) {
        param_9 = param_7;
        do {
          uVar8 = (uint)*pbVar3;
          pbVar3 = pbVar3 + 1;
          iVar9 = param_6;
          if (uVar8 == 0) {
            param_1 = (undefined2 *)((int)param_1 + param_2);
          }
          else {
            while( true ) {
              uVar5 = uVar8 & 0x7f;
              iVar9 = iVar9 - uVar5;
              if ((uVar8 & 0x80) == 0) {
                param_1 = param_1 + uVar5;
              }
              else {
                for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                  bVar1 = *pbVar3;
                  pbVar3 = pbVar3 + 1;
                  *param_1 = *(undefined2 *)(param_8 + (uint)bVar1 * 2);
                  param_1 = param_1 + 1;
                }
              }
              if (iVar9 < 1) break;
              uVar8 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            }
            param_1 = (undefined2 *)((int)param_1 + param_2 + param_6 * -2);
          }
          param_9 = param_9 + -1;
        } while (param_9 != (byte *)0x0);
        return;
      }
    }
    else if (0 < (int)param_7) {
      param_11 = (int)param_7;
      do {
        uVar5 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        param_3 = (byte *)param_6;
        uVar8 = 0x80 >> (bVar1 & 7);
        param_7 = param_9;
        if (uVar5 == 0) {
          param_1 = (undefined2 *)((int)param_1 + param_2);
        }
        else {
          while( true ) {
            uVar4 = uVar5 & 0x7f;
            param_3 = param_3 + -uVar4;
            if ((uVar5 & 0x80) == 0) {
              uVar8 = ((uVar8 & 0xff) << 8) >> ((byte)uVar4 & 7);
              param_1 = param_1 + uVar4;
              if (uVar8 < 0x81) {
                param_7 = param_7 + 1;
              }
              else {
                uVar8 = uVar8 >> 8;
              }
              uVar8 = uVar8 & 0xff;
              param_7 = param_7 + ((int)uVar4 >> 3);
            }
            else {
              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                if ((*param_7 & (byte)uVar8) != 0) {
                  *param_1 = *(undefined2 *)(param_8 + (uint)*pbVar3 * 2);
                }
                param_1 = param_1 + 1;
                pbVar3 = pbVar3 + 1;
                bVar6 = (byte)uVar8 >> 1;
                uVar8 = (uint)bVar6;
                if (bVar6 == 0) {
                  uVar8 = 0x80;
                  param_7 = param_7 + 1;
                }
              }
            }
            if ((int)param_3 < 1) break;
            uVar5 = (uint)*pbVar3;
            pbVar3 = pbVar3 + 1;
          }
          param_1 = (undefined2 *)((int)param_1 + param_2 + param_6 * -2);
        }
        param_9 = param_9 + param_10;
        param_11 = param_11 + -1;
      } while (param_11 != 0);
      return;
    }
  }
  else if (0 < (int)param_7) {
    param_12 = (int)param_7;
    do {
      uVar8 = (uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      if (uVar8 == 0) {
        param_1 = (undefined2 *)((int)param_1 + param_2);
      }
      else {
        param_7 = param_9;
        uVar5 = 0x80 >> (bVar1 & 7);
        uVar4 = uVar8 & 0x7f;
        iVar9 = param_4;
        if ((int)uVar4 <= param_4) {
          do {
            if ((uVar8 & 0x80) != 0) {
              pbVar3 = pbVar3 + uVar4;
            }
            iVar9 = iVar9 - uVar4;
            uVar8 = (uint)*pbVar3;
            pbVar3 = pbVar3 + 1;
            uVar4 = uVar8 & 0x7f;
          } while ((int)uVar4 <= iVar9);
        }
        puVar7 = (undefined2 *)(uVar4 - iVar9);
        if ((uVar8 & 0x80) != 0) {
          pbVar3 = pbVar3 + iVar9;
        }
        param_3 = (byte *)param_6;
        if (param_9 == (byte *)0x0) {
          puVar10 = param_1;
          if ((int)puVar7 <= param_6) {
            do {
              param_3 = param_3 + -(int)puVar7;
              if ((uVar8 & 0x80) == 0) {
                puVar10 = param_1 + (int)puVar7;
              }
              else {
                puVar10 = param_1;
                if (0 < (int)puVar7) {
                  do {
                    puVar10 = param_1 + 1;
                    bVar6 = *pbVar3;
                    pbVar3 = pbVar3 + 1;
                    puVar7 = (undefined2 *)((int)puVar7 - 1);
                    *param_1 = *(undefined2 *)(param_8 + (uint)bVar6 * 2);
                    param_1 = puVar10;
                  } while (puVar7 != (undefined2 *)0x0);
                }
              }
              if ((int)param_3 < 1) {
                puVar7 = (undefined2 *)0x0;
                break;
              }
              uVar8 = (uint)*pbVar3;
              puVar7 = (undefined2 *)(uVar8 & 0x7f);
              pbVar3 = pbVar3 + 1;
              param_1 = puVar10;
            } while ((int)puVar7 <= (int)param_3);
          }
          uVar4 = (int)puVar7 - (int)param_3;
          param_1 = puVar10;
          if ((uVar8 & 0x80) == 0) {
LAB_006d36c3:
            puVar7 = param_1 + (int)param_3;
          }
          else {
            puVar7 = puVar10;
            param_1 = (undefined2 *)param_3;
            if (0 < (int)param_3) {
              do {
                puVar7 = puVar10 + 1;
                bVar6 = *pbVar3;
                pbVar3 = pbVar3 + 1;
                *puVar10 = *(undefined2 *)(param_8 + (uint)bVar6 * 2);
                param_1 = (undefined2 *)((int)param_1 + -1);
                puVar10 = puVar7;
              } while (param_1 != (undefined2 *)0x0);
            }
          }
        }
        else {
          puVar10 = param_1;
          if ((int)puVar7 <= param_6) {
            do {
              param_3 = param_3 + -(int)puVar7;
              if ((uVar8 & 0x80) == 0) {
                puVar10 = puVar10 + (int)puVar7;
                uVar5 = ((uVar5 & 0xff) << 8) >> ((byte)puVar7 & 7);
                if (uVar5 < 0x81) {
                  param_7 = param_7 + 1;
                }
                else {
                  uVar5 = uVar5 >> 8;
                }
                uVar5 = uVar5 & 0xff;
                param_7 = param_7 + ((int)puVar7 >> 3);
              }
              else {
                param_1 = puVar7;
                if (0 < (int)puVar7) {
                  do {
                    if ((*param_7 & (byte)uVar5) != 0) {
                      *puVar10 = *(undefined2 *)(param_8 + (uint)*pbVar3 * 2);
                    }
                    puVar10 = puVar10 + 1;
                    pbVar3 = pbVar3 + 1;
                    bVar6 = (byte)uVar5 >> 1;
                    uVar5 = (uint)bVar6;
                    if (bVar6 == 0) {
                      uVar5 = 0x80;
                      param_7 = param_7 + 1;
                    }
                    param_1 = (undefined2 *)((int)param_1 + -1);
                  } while (param_1 != (undefined2 *)0x0);
                }
              }
              param_1 = puVar10;
              if ((int)param_3 < 1) {
                puVar7 = (undefined2 *)0x0;
                break;
              }
              uVar8 = (uint)*pbVar3;
              puVar7 = (undefined2 *)(uVar8 & 0x7f);
              pbVar3 = pbVar3 + 1;
            } while ((int)puVar7 <= (int)param_3);
          }
          uVar4 = (int)puVar7 - (int)param_3;
          if ((uVar8 & 0x80) == 0) goto LAB_006d36c3;
          puVar7 = param_1;
          if (0 < (int)param_3) {
            do {
              if ((*param_7 & (byte)uVar5) != 0) {
                *param_1 = *(undefined2 *)(param_8 + (uint)*pbVar3 * 2);
              }
              puVar7 = param_1 + 1;
              pbVar3 = pbVar3 + 1;
              bVar6 = (byte)uVar5 >> 1;
              uVar5 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar5 = 0x80;
                param_7 = param_7 + 1;
              }
              param_3 = param_3 + -1;
              param_1 = puVar7;
            } while (param_3 != (byte *)0x0);
          }
        }
        iVar9 = (sVar2 - param_4) - param_6;
        if ((int)uVar4 < iVar9) {
          do {
            if ((uVar8 & 0x80) != 0) {
              pbVar3 = pbVar3 + uVar4;
            }
            iVar9 = iVar9 - uVar4;
            uVar8 = (uint)*pbVar3;
            uVar4 = uVar8 & 0x7f;
            pbVar3 = pbVar3 + 1;
          } while ((int)uVar4 < iVar9);
        }
        if ((uVar8 & 0x80) != 0) {
          pbVar3 = pbVar3 + iVar9;
        }
        param_1 = (undefined2 *)((int)puVar7 + param_2 + param_6 * -2);
      }
      if (param_9 != (byte *)0x0) {
        param_9 = param_9 + param_10;
      }
      param_12 = param_12 + -1;
    } while (param_12 != 0);
  }
  return;
}

