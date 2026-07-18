
DWORD FUN_006bfe70(undefined4 *param_1,int param_2,uint param_3)

{
  short *psVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DWORD local_c;
  undefined4 *local_8;
  
  iVar4 = param_2;
  pbVar12 = DAT_008568b0;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  if (*(short *)(param_2 + 0x4c) == 1) {
    if ((*(uint *)(param_2 + 4) & 0x2000) == 0) {
      psVar1 = *(short **)(param_2 + 0x24);
      iVar4 = *(int *)(psVar1 + 0xb);
      if (iVar4 == 0) {
        iVar4 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
      }
      FUN_0072da70(param_1,(undefined4 *)(*(int *)(param_2 + 0x28) + iVar4),param_3);
    }
    else {
      local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(param_2 + 0x1c) + 4) + 0xc),
                             *(DWORD *)(param_2 + 0x28),param_1,param_3);
    }
    *(uint *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + param_3;
    *(int *)(param_2 + 0xc0) =
         *(int *)(param_2 + 0xc0) - (int)param_3 / (int)(uint)*(ushort *)(param_2 + 0x96);
    return local_c;
  }
  if ((*(uint *)(param_2 + 4) & 0x2000) == 0) {
    psVar1 = *(short **)(param_2 + 0x24);
    iVar6 = *(int *)(psVar1 + 0xb);
    if (iVar6 == 0) {
      iVar6 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
    }
    pbVar12 = (byte *)(*(int *)(param_2 + 0x28) + iVar6);
    local_8 = (undefined4 *)(param_3 * 2);
  }
  else {
    local_18 = *(int *)(param_2 + 0x5e) + 0x3e + *(int *)(param_2 + 0x20);
    DVar5 = *(DWORD *)(param_2 + 0x28);
    local_8 = DAT_00856878;
    if (local_18 < (int)(DVar5 + (int)DAT_00856878)) {
      local_8 = (undefined4 *)(local_18 - DVar5);
    }
    local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(param_2 + 0x1c) + 4) + 0xc),DVar5,
                           DAT_008568b0,(DWORD)local_8);
    if (local_c != 0) {
      return local_c;
    }
  }
  if (*(short *)(param_2 + 0x8c) == 2) {
    if (0 < *(int *)(param_2 + 0xbc)) {
      local_10 = (int)*(short *)(param_2 + 0x6e + *(int *)(param_2 + 0x9c) * 4);
      local_14 = (int)*(short *)(param_2 + 0x70 + *(int *)(param_2 + 0x9c) * 4);
      local_1c = (uint)*(short *)(param_2 + 0x6e + *(int *)(param_2 + 0xac) * 4);
      local_20 = (int)*(short *)(param_2 + 0x70 + *(int *)(param_2 + 0xac) * 4);
    }
    param_2 = 0;
    puVar10 = param_1;
    if (0 < (int)param_3) {
      do {
        pbVar3 = DAT_008568b0;
        iVar6 = *(int *)(iVar4 + 0xbc);
        if (iVar6 < 1) {
          pbVar13 = pbVar12;
          if ((int)local_8 < 0xe) {
            DVar5 = *(DWORD *)(iVar4 + 0x28);
            param_1 = DAT_00856878;
            if (local_18 < (int)(DVar5 + (int)DAT_00856878)) {
              param_1 = (undefined4 *)(local_18 - DVar5);
            }
            DVar5 = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xc),DVar5,
                                 DAT_008568b0,(DWORD)param_1);
            if (DVar5 != 0) {
              return DVar5;
            }
            local_8 = param_1;
            local_c = 0;
            pbVar13 = pbVar3;
          }
          *(uint *)(iVar4 + 0x9c) = (uint)*pbVar13;
          *(uint *)(iVar4 + 0xac) = (uint)pbVar13[1];
          *(int *)(iVar4 + 0xa0) = (int)*(short *)(pbVar13 + 2);
          *(int *)(iVar4 + 0xb0) = (int)*(short *)(pbVar13 + 4);
          *(int *)(iVar4 + 0xa4) = (int)*(short *)(pbVar13 + 6);
          *(int *)(iVar4 + 0xb4) = (int)*(short *)(pbVar13 + 8);
          *(int *)(iVar4 + 0xa8) = (int)*(short *)(pbVar13 + 10);
          iVar6 = *(int *)(iVar4 + 0x9c);
          pbVar12 = pbVar13 + 0xe;
          *(int *)(iVar4 + 0xb8) = (int)*(short *)(pbVar13 + 0xc);
          if ((6 < iVar6) || (iVar9 = *(int *)(iVar4 + 0xac), 6 < iVar9)) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(iVar4 + 0x6e + iVar6 * 4);
          local_14 = (int)*(short *)(iVar4 + 0x70 + iVar6 * 4);
          local_1c = (uint)*(short *)(iVar4 + 0x6e + iVar9 * 4);
          local_20 = (int)*(short *)(iVar4 + 0x70 + iVar9 * 4);
          local_8 = (undefined4 *)((int)local_8 - 0xe);
          *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 0xe;
          *(uint *)(iVar4 + 0xbc) = *(ushort *)(iVar4 + 0x58) - 10;
          *(undefined2 *)puVar10 = *(undefined2 *)(iVar4 + 0xa8);
          uVar7 = *(undefined2 *)(iVar4 + 0xb8);
LAB_006c0125:
          *(undefined2 *)((int)puVar10 + 2) = uVar7;
          puVar10 = puVar10 + 1;
          param_2 = param_2 + 4;
          *(int *)(iVar4 + 0xc0) = *(int *)(iVar4 + 0xc0) + -1;
          param_1 = puVar10;
        }
        else {
          if (iVar6 == *(ushort *)(iVar4 + 0x58) - 10) {
            *(int *)(iVar4 + 0xbc) = iVar6 + -4;
            *(undefined2 *)puVar10 = *(undefined2 *)(iVar4 + 0xa4);
            uVar7 = *(undefined2 *)(iVar4 + 0xb4);
            goto LAB_006c0125;
          }
          while ((param_2 < (int)param_3 &&
                 (iVar6 = *(int *)(iVar4 + 0xbc), *(int *)(iVar4 + 0xbc) = iVar6 + -1,
                 pbVar3 = DAT_008568b0, 0 < iVar6))) {
            if (*(int *)(iVar4 + 0xc0) < 1) {
              return local_c;
            }
            pbVar13 = pbVar12;
            if ((int)local_8 < 1) {
              DVar5 = *(DWORD *)(iVar4 + 0x28);
              local_8 = DAT_00856878;
              if (local_18 < (int)(DVar5 + (int)DAT_00856878)) {
                local_8 = (undefined4 *)(local_18 - DVar5);
              }
              local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xc),DVar5,
                                     DAT_008568b0,(DWORD)local_8);
              pbVar13 = pbVar3;
              if (local_c != 0) {
                return local_c;
              }
            }
            pbVar12 = pbVar13 + 1;
            uVar8 = (uint)(*pbVar13 >> 4);
            uVar11 = *pbVar13 & 0xf;
            local_8 = (undefined4 *)((int)local_8 - 1);
            *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
            if (7 < uVar8) {
              uVar8 = uVar8 - 0x10;
            }
            iVar6 = (*(int *)(iVar4 + 0xa4) * local_10 + *(int *)(iVar4 + 0xa8) * local_14 >> 8) +
                    *(int *)(iVar4 + 0xa0) * uVar8;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar9 = *(int *)(PTR_DAT_007ede0c + uVar8 * 4) * *(int *)(iVar4 + 0xa0) >> 8;
            *(int *)(iVar4 + 0xa0) = iVar9;
            if (iVar9 < 0x10) {
              *(undefined4 *)(iVar4 + 0xa0) = 0x10;
            }
            *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(iVar4 + 0xa4);
            *(int *)(iVar4 + 0xa4) = iVar6;
            *(short *)param_1 = (short)iVar6;
            if (7 < uVar11) {
              uVar11 = uVar11 - 0x10;
            }
            iVar6 = ((int)(*(int *)(iVar4 + 0xb4) * local_1c + local_20 * *(int *)(iVar4 + 0xb8)) >>
                    8) + *(int *)(iVar4 + 0xb0) * uVar11;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar9 = *(int *)(PTR_DAT_007ede0c + uVar11 * 4) * *(int *)(iVar4 + 0xb0) >> 8;
            *(int *)(iVar4 + 0xb0) = iVar9;
            if (iVar9 < 0x10) {
              *(undefined4 *)(iVar4 + 0xb0) = 0x10;
            }
            uVar2 = *(undefined4 *)(iVar4 + 0xb4);
            *(int *)(iVar4 + 0xb4) = iVar6;
            *(undefined4 *)(iVar4 + 0xb8) = uVar2;
            *(short *)((int)param_1 + 2) = (short)iVar6;
            puVar10 = param_1 + 1;
            param_2 = param_2 + 4;
            *(int *)(iVar4 + 0xc0) = *(int *)(iVar4 + 0xc0) + -1;
            param_1 = puVar10;
          }
        }
        if (*(int *)(iVar4 + 0xc0) < 1) {
          return local_c;
        }
        if ((int)param_3 <= param_2) {
          return local_c;
        }
      } while( true );
    }
  }
  else {
    if (0 < *(int *)(param_2 + 0xbc)) {
      local_10 = (int)*(short *)(param_2 + 0x6e + *(int *)(param_2 + 0x9c) * 4);
      local_14 = (int)*(short *)(param_2 + 0x70 + *(int *)(param_2 + 0x9c) * 4);
    }
    param_2 = 0;
    if (0 < (int)param_3) {
      do {
        pbVar3 = DAT_008568b0;
        uVar8 = *(uint *)(iVar4 + 0xbc);
        if ((int)uVar8 < 1) {
          if ((int)local_8 < 7) {
            DVar5 = *(DWORD *)(iVar4 + 0x28);
            local_8 = DAT_00856878;
            if (local_18 < (int)(DVar5 + (int)DAT_00856878)) {
              local_8 = (undefined4 *)(local_18 - DVar5);
            }
            local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xc),DVar5,
                                   DAT_008568b0,(DWORD)local_8);
            pbVar12 = pbVar3;
            if (local_c != 0) {
              return local_c;
            }
          }
          *(uint *)(iVar4 + 0x9c) = (uint)*pbVar12;
          *(int *)(iVar4 + 0xa0) = (int)*(short *)(pbVar12 + 1);
          *(int *)(iVar4 + 0xa4) = (int)*(short *)(pbVar12 + 3);
          *(int *)(iVar4 + 0xa8) = (int)*(short *)(pbVar12 + 5);
          iVar6 = *(int *)(iVar4 + 0x9c);
          pbVar12 = pbVar12 + 7;
          if (6 < iVar6) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(iVar4 + 0x6e + iVar6 * 4);
          local_14 = (int)*(short *)(iVar4 + 0x70 + iVar6 * 4);
          local_8 = (undefined4 *)((int)local_8 - 7);
          *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 7;
          *(uint *)(iVar4 + 0xbc) = (uint)*(ushort *)(iVar4 + 0x58) * 2 + -0xc;
          *(undefined2 *)param_1 = *(undefined2 *)(iVar4 + 0xa8);
LAB_006c0455:
          *(int *)(iVar4 + 0xc0) = *(int *)(iVar4 + 0xc0) + -1;
          puVar10 = (undefined4 *)((int)param_1 + 2);
          iVar6 = param_2 + 2;
        }
        else {
          if (uVar8 == (uint)*(ushort *)(iVar4 + 0x58) * 2 - 0xc) {
            *(uint *)(iVar4 + 0xbc) = uVar8 - 2;
            *(undefined2 *)param_1 = *(undefined2 *)(iVar4 + 0xa4);
            goto LAB_006c0455;
          }
          if ((uVar8 & 1) != 0) {
            if ((int)local_8 < 1) {
              DVar5 = *(DWORD *)(iVar4 + 0x28);
              local_8 = DAT_00856878;
              if (local_18 < (int)(DVar5 + (int)DAT_00856878)) {
                local_8 = (undefined4 *)(local_18 - DVar5);
              }
              local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xc),DVar5,
                                     DAT_008568b0,(DWORD)local_8);
              pbVar12 = pbVar3;
              if (local_c != 0) {
                return local_c;
              }
            }
            uVar8 = *pbVar12 & 0xf;
            pbVar12 = pbVar12 + 1;
            if (7 < uVar8) {
              uVar8 = uVar8 - 0x10;
            }
            iVar6 = (*(int *)(iVar4 + 0xa4) * local_10 + *(int *)(iVar4 + 0xa8) * local_14 >> 8) +
                    *(int *)(iVar4 + 0xa0) * uVar8;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar9 = *(int *)(PTR_DAT_007ede0c + uVar8 * 4) * *(int *)(iVar4 + 0xa0) >> 8;
            *(int *)(iVar4 + 0xa0) = iVar9;
            if (iVar9 < 0x10) {
              *(undefined4 *)(iVar4 + 0xa0) = 0x10;
            }
            *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(iVar4 + 0xa4);
            local_8 = (undefined4 *)((int)local_8 - 1);
            *(int *)(iVar4 + 0xa4) = iVar6;
            *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
            *(short *)param_1 = (short)iVar6;
            param_1 = (undefined4 *)((int)param_1 + 2);
            param_2 = param_2 + 2;
            *(int *)(iVar4 + 0xbc) = *(int *)(iVar4 + 0xbc) + -1;
            *(int *)(iVar4 + 0xc0) = *(int *)(iVar4 + 0xc0) + -1;
          }
          puVar10 = param_1;
          iVar6 = param_2;
          if (param_2 < (int)param_3) {
            while (pbVar3 = DAT_008568b0, puVar10 = param_1, iVar6 = param_2,
                  0 < *(int *)(iVar4 + 0xbc)) {
              if (*(int *)(iVar4 + 0xc0) < 1) {
                return local_c;
              }
              if ((int)local_8 < 1) {
                DVar5 = *(DWORD *)(iVar4 + 0x28);
                local_8 = DAT_00856878;
                if (local_18 < (int)(DVar5 + (int)DAT_00856878)) {
                  local_8 = (undefined4 *)(local_18 - DVar5);
                }
                local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xc),DVar5
                                       ,DAT_008568b0,(DWORD)local_8);
                pbVar12 = pbVar3;
                if (local_c != 0) {
                  return local_c;
                }
              }
              local_1c = *pbVar12 & 0xf;
              uVar8 = (uint)(*pbVar12 >> 4);
              if (7 < uVar8) {
                uVar8 = uVar8 - 0x10;
              }
              iVar6 = (*(int *)(iVar4 + 0xa4) * local_10 + *(int *)(iVar4 + 0xa8) * local_14 >> 8) +
                      *(int *)(iVar4 + 0xa0) * uVar8;
              if (iVar6 < 0x8000) {
                if (iVar6 < -0x8000) {
                  iVar6 = -0x8000;
                }
              }
              else {
                iVar6 = 0x7fff;
              }
              iVar9 = *(int *)(PTR_DAT_007ede0c + uVar8 * 4) * *(int *)(iVar4 + 0xa0) >> 8;
              *(int *)(iVar4 + 0xa0) = iVar9;
              if (iVar9 < 0x10) {
                *(undefined4 *)(iVar4 + 0xa0) = 0x10;
              }
              uVar2 = *(undefined4 *)(iVar4 + 0xa4);
              *(int *)(iVar4 + 0xa4) = iVar6;
              *(undefined4 *)(iVar4 + 0xa8) = uVar2;
              *(short *)param_1 = (short)iVar6;
              puVar10 = (undefined4 *)((int)param_1 + 2);
              iVar9 = *(int *)(iVar4 + 0xc0) + -1;
              *(int *)(iVar4 + 0xbc) = *(int *)(iVar4 + 0xbc) + -1;
              *(int *)(iVar4 + 0xc0) = iVar9;
              iVar6 = param_2 + 2;
              if (((int)param_3 <= iVar6) || (iVar9 < 1)) break;
              if (7 < local_1c) {
                local_1c = local_1c - 0x10;
              }
              iVar6 = (*(int *)(iVar4 + 0xa4) * local_10 + *(int *)(iVar4 + 0xa8) * local_14 >> 8) +
                      *(int *)(iVar4 + 0xa0) * local_1c;
              if (iVar6 < 0x8000) {
                if (iVar6 < -0x8000) {
                  iVar6 = -0x8000;
                }
              }
              else {
                iVar6 = 0x7fff;
              }
              iVar9 = *(int *)(PTR_DAT_007ede0c + local_1c * 4) * *(int *)(iVar4 + 0xa0) >> 8;
              *(int *)(iVar4 + 0xa0) = iVar9;
              if (iVar9 < 0x10) {
                *(undefined4 *)(iVar4 + 0xa0) = 0x10;
              }
              pbVar12 = pbVar12 + 1;
              *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
              *(int *)(iVar4 + 0xa8) = *(int *)(iVar4 + 0xa4);
              *(int *)(iVar4 + 0xa4) = iVar6;
              *(short *)puVar10 = (short)iVar6;
              local_8 = (undefined4 *)((int)local_8 - 1);
              param_1 = param_1 + 1;
              *(int *)(iVar4 + 0xbc) = *(int *)(iVar4 + 0xbc) + -1;
              param_2 = param_2 + 4;
              *(int *)(iVar4 + 0xc0) = *(int *)(iVar4 + 0xc0) + -1;
              puVar10 = param_1;
              iVar6 = param_2;
              if ((int)param_3 <= param_2) break;
            }
          }
        }
        param_2 = iVar6;
        param_1 = puVar10;
        if (*(int *)(iVar4 + 0xc0) < 1) {
          return local_c;
        }
        if ((int)param_3 <= param_2) {
          return local_c;
        }
      } while( true );
    }
  }
  return local_c;
}

