
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006BFBF0 -> 006BFE70 @ 006BFD7F */

DWORD FUN_006bfe70(undefined4 *param_1,int param_2,uint *param_3)

{
  short *psVar1;
  LPDWORD pDVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  DWORD DVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DWORD local_c;
  undefined4 *local_8;
  
  iVar5 = param_2;
  pbVar13 = LPVOID_008568b0;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  if (*(short *)(param_2 + 0x4c) == 1) {
    if ((*(uint *)(param_2 + 4) & 0x2000) == 0) {
      psVar1 = *(short **)(param_2 + 0x24);
      iVar5 = *(int *)(psVar1 + 0xb);
      if (iVar5 == 0) {
        iVar5 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
      }
      Library::MSVCRT::FUN_0072da70
                (param_1,(undefined4 *)(*(int *)(param_2 + 0x28) + iVar5),(uint)param_3);
    }
    else {
      local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(param_2 + 0x1c) + 4) + 0xc),
                             *(LPDWORD *)(param_2 + 0x28),param_1,(DWORD)param_3);
    }
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + (int)param_3;
    *(int *)(param_2 + 0xc0) =
         *(int *)(param_2 + 0xc0) - (int)param_3 / (int)(uint)*(ushort *)(param_2 + 0x96);
    return local_c;
  }
  if ((*(uint *)(param_2 + 4) & 0x2000) == 0) {
    psVar1 = *(short **)(param_2 + 0x24);
    iVar7 = *(int *)(psVar1 + 0xb);
    if (iVar7 == 0) {
      iVar7 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
    }
    pbVar13 = (byte *)(*(int *)(param_2 + 0x28) + iVar7);
    local_8 = (undefined4 *)((int)param_3 * 2);
  }
  else {
    local_18 = *(int *)(param_2 + 0x5e) + 0x3e + *(int *)(param_2 + 0x20);
    pDVar2 = *(LPDWORD *)(param_2 + 0x28);
    local_8 = DAT_00856878;
    if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
      local_8 = (undefined4 *)(local_18 - (int)pDVar2);
    }
    local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(param_2 + 0x1c) + 4) + 0xc),pDVar2,
                           LPVOID_008568b0,(DWORD)local_8);
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
    puVar11 = param_1;
    if (0 < (int)param_3) {
      do {
        pvVar4 = LPVOID_008568b0;
        iVar7 = *(int *)(iVar5 + 0xbc);
        if (iVar7 < 1) {
          pbVar14 = pbVar13;
          if ((int)local_8 < 0xe) {
            pDVar2 = *(LPDWORD *)(iVar5 + 0x28);
            param_1 = DAT_00856878;
            if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
              param_1 = (undefined4 *)(local_18 - (int)pDVar2);
            }
            DVar6 = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xc),pDVar2,
                                 LPVOID_008568b0,(DWORD)param_1);
            if (DVar6 != 0) {
              return DVar6;
            }
            local_8 = param_1;
            local_c = 0;
            pbVar14 = pvVar4;
          }
          *(uint *)(iVar5 + 0x9c) = (uint)*pbVar14;
          *(uint *)(iVar5 + 0xac) = (uint)pbVar14[1];
          *(int *)(iVar5 + 0xa0) = (int)*(short *)(pbVar14 + 2);
          *(int *)(iVar5 + 0xb0) = (int)*(short *)(pbVar14 + 4);
          *(int *)(iVar5 + 0xa4) = (int)*(short *)(pbVar14 + 6);
          *(int *)(iVar5 + 0xb4) = (int)*(short *)(pbVar14 + 8);
          *(int *)(iVar5 + 0xa8) = (int)*(short *)(pbVar14 + 10);
          iVar7 = *(int *)(iVar5 + 0x9c);
          pbVar13 = pbVar14 + 0xe;
          *(int *)(iVar5 + 0xb8) = (int)*(short *)(pbVar14 + 0xc);
          if ((6 < iVar7) || (iVar10 = *(int *)(iVar5 + 0xac), 6 < iVar10)) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(iVar5 + 0x6e + iVar7 * 4);
          local_14 = (int)*(short *)(iVar5 + 0x70 + iVar7 * 4);
          local_1c = (uint)*(short *)(iVar5 + 0x6e + iVar10 * 4);
          local_20 = (int)*(short *)(iVar5 + 0x70 + iVar10 * 4);
          local_8 = (undefined4 *)((int)local_8 - 0xe);
          *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 0xe;
          *(uint *)(iVar5 + 0xbc) = *(ushort *)(iVar5 + 0x58) - 10;
          *(undefined2 *)puVar11 = *(undefined2 *)(iVar5 + 0xa8);
          uVar8 = *(undefined2 *)(iVar5 + 0xb8);
LAB_006c0125:
          *(undefined2 *)((int)puVar11 + 2) = uVar8;
          puVar11 = puVar11 + 1;
          param_2 = param_2 + 4;
          *(int *)(iVar5 + 0xc0) = *(int *)(iVar5 + 0xc0) + -1;
          param_1 = puVar11;
        }
        else {
          if (iVar7 == *(ushort *)(iVar5 + 0x58) - 10) {
            *(int *)(iVar5 + 0xbc) = iVar7 + -4;
            *(undefined2 *)puVar11 = *(undefined2 *)(iVar5 + 0xa4);
            uVar8 = *(undefined2 *)(iVar5 + 0xb4);
            goto LAB_006c0125;
          }
          while ((param_2 < (int)param_3 &&
                 (iVar7 = *(int *)(iVar5 + 0xbc), *(int *)(iVar5 + 0xbc) = iVar7 + -1,
                 pvVar4 = LPVOID_008568b0, 0 < iVar7))) {
            if (*(int *)(iVar5 + 0xc0) < 1) {
              return local_c;
            }
            pbVar14 = pbVar13;
            if ((int)local_8 < 1) {
              pDVar2 = *(LPDWORD *)(iVar5 + 0x28);
              local_8 = DAT_00856878;
              if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                local_8 = (undefined4 *)(local_18 - (int)pDVar2);
              }
              local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xc),pDVar2,
                                     LPVOID_008568b0,(DWORD)local_8);
              pbVar14 = pvVar4;
              if (local_c != 0) {
                return local_c;
              }
            }
            pbVar13 = pbVar14 + 1;
            uVar9 = (uint)(*pbVar14 >> 4);
            uVar12 = *pbVar14 & 0xf;
            local_8 = (undefined4 *)((int)local_8 - 1);
            *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
            if (7 < uVar9) {
              uVar9 = uVar9 - 0x10;
            }
            iVar7 = (*(int *)(iVar5 + 0xa4) * local_10 + *(int *)(iVar5 + 0xa8) * local_14 >> 8) +
                    *(int *)(iVar5 + 0xa0) * uVar9;
            if (iVar7 < 0x8000) {
              if (iVar7 < -0x8000) {
                iVar7 = -0x8000;
              }
            }
            else {
              iVar7 = 0x7fff;
            }
            iVar10 = *(int *)(PTR_DAT_007ede0c + uVar9 * 4) * *(int *)(iVar5 + 0xa0) >> 8;
            *(int *)(iVar5 + 0xa0) = iVar10;
            if (iVar10 < 0x10) {
              *(undefined4 *)(iVar5 + 0xa0) = 0x10;
            }
            *(undefined4 *)(iVar5 + 0xa8) = *(undefined4 *)(iVar5 + 0xa4);
            *(int *)(iVar5 + 0xa4) = iVar7;
            *(short *)param_1 = (short)iVar7;
            if (7 < uVar12) {
              uVar12 = uVar12 - 0x10;
            }
            iVar7 = ((int)(*(int *)(iVar5 + 0xb4) * local_1c + local_20 * *(int *)(iVar5 + 0xb8)) >>
                    8) + *(int *)(iVar5 + 0xb0) * uVar12;
            if (iVar7 < 0x8000) {
              if (iVar7 < -0x8000) {
                iVar7 = -0x8000;
              }
            }
            else {
              iVar7 = 0x7fff;
            }
            iVar10 = *(int *)(PTR_DAT_007ede0c + uVar12 * 4) * *(int *)(iVar5 + 0xb0) >> 8;
            *(int *)(iVar5 + 0xb0) = iVar10;
            if (iVar10 < 0x10) {
              *(undefined4 *)(iVar5 + 0xb0) = 0x10;
            }
            uVar3 = *(undefined4 *)(iVar5 + 0xb4);
            *(int *)(iVar5 + 0xb4) = iVar7;
            *(undefined4 *)(iVar5 + 0xb8) = uVar3;
            *(short *)((int)param_1 + 2) = (short)iVar7;
            puVar11 = param_1 + 1;
            param_2 = param_2 + 4;
            *(int *)(iVar5 + 0xc0) = *(int *)(iVar5 + 0xc0) + -1;
            param_1 = puVar11;
          }
        }
        if (*(int *)(iVar5 + 0xc0) < 1) {
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
        pvVar4 = LPVOID_008568b0;
        uVar9 = *(uint *)(iVar5 + 0xbc);
        if ((int)uVar9 < 1) {
          if ((int)local_8 < 7) {
            pDVar2 = *(LPDWORD *)(iVar5 + 0x28);
            local_8 = DAT_00856878;
            if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
              local_8 = (undefined4 *)(local_18 - (int)pDVar2);
            }
            local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xc),pDVar2,
                                   LPVOID_008568b0,(DWORD)local_8);
            pbVar13 = pvVar4;
            if (local_c != 0) {
              return local_c;
            }
          }
          *(uint *)(iVar5 + 0x9c) = (uint)*pbVar13;
          *(int *)(iVar5 + 0xa0) = (int)*(short *)(pbVar13 + 1);
          *(int *)(iVar5 + 0xa4) = (int)*(short *)(pbVar13 + 3);
          *(int *)(iVar5 + 0xa8) = (int)*(short *)(pbVar13 + 5);
          iVar7 = *(int *)(iVar5 + 0x9c);
          pbVar13 = pbVar13 + 7;
          if (6 < iVar7) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(iVar5 + 0x6e + iVar7 * 4);
          local_14 = (int)*(short *)(iVar5 + 0x70 + iVar7 * 4);
          local_8 = (undefined4 *)((int)local_8 - 7);
          *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 7;
          *(uint *)(iVar5 + 0xbc) = (uint)*(ushort *)(iVar5 + 0x58) * 2 + -0xc;
          *(undefined2 *)param_1 = *(undefined2 *)(iVar5 + 0xa8);
LAB_006c0455:
          *(int *)(iVar5 + 0xc0) = *(int *)(iVar5 + 0xc0) + -1;
          puVar11 = (undefined4 *)((int)param_1 + 2);
          iVar7 = param_2 + 2;
        }
        else {
          if (uVar9 == (uint)*(ushort *)(iVar5 + 0x58) * 2 - 0xc) {
            *(uint *)(iVar5 + 0xbc) = uVar9 - 2;
            *(undefined2 *)param_1 = *(undefined2 *)(iVar5 + 0xa4);
            goto LAB_006c0455;
          }
          if ((uVar9 & 1) != 0) {
            if ((int)local_8 < 1) {
              pDVar2 = *(LPDWORD *)(iVar5 + 0x28);
              local_8 = DAT_00856878;
              if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                local_8 = (undefined4 *)(local_18 - (int)pDVar2);
              }
              local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xc),pDVar2,
                                     LPVOID_008568b0,(DWORD)local_8);
              pbVar13 = pvVar4;
              if (local_c != 0) {
                return local_c;
              }
            }
            uVar9 = *pbVar13 & 0xf;
            pbVar13 = pbVar13 + 1;
            if (7 < uVar9) {
              uVar9 = uVar9 - 0x10;
            }
            iVar7 = (*(int *)(iVar5 + 0xa4) * local_10 + *(int *)(iVar5 + 0xa8) * local_14 >> 8) +
                    *(int *)(iVar5 + 0xa0) * uVar9;
            if (iVar7 < 0x8000) {
              if (iVar7 < -0x8000) {
                iVar7 = -0x8000;
              }
            }
            else {
              iVar7 = 0x7fff;
            }
            iVar10 = *(int *)(PTR_DAT_007ede0c + uVar9 * 4) * *(int *)(iVar5 + 0xa0) >> 8;
            *(int *)(iVar5 + 0xa0) = iVar10;
            if (iVar10 < 0x10) {
              *(undefined4 *)(iVar5 + 0xa0) = 0x10;
            }
            *(undefined4 *)(iVar5 + 0xa8) = *(undefined4 *)(iVar5 + 0xa4);
            local_8 = (undefined4 *)((int)local_8 - 1);
            *(int *)(iVar5 + 0xa4) = iVar7;
            *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
            *(short *)param_1 = (short)iVar7;
            param_1 = (undefined4 *)((int)param_1 + 2);
            param_2 = param_2 + 2;
            *(int *)(iVar5 + 0xbc) = *(int *)(iVar5 + 0xbc) + -1;
            *(int *)(iVar5 + 0xc0) = *(int *)(iVar5 + 0xc0) + -1;
          }
          puVar11 = param_1;
          iVar7 = param_2;
          if (param_2 < (int)param_3) {
            while (pvVar4 = LPVOID_008568b0, puVar11 = param_1, iVar7 = param_2,
                  0 < *(int *)(iVar5 + 0xbc)) {
              if (*(int *)(iVar5 + 0xc0) < 1) {
                return local_c;
              }
              if ((int)local_8 < 1) {
                pDVar2 = *(LPDWORD *)(iVar5 + 0x28);
                local_8 = DAT_00856878;
                if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                  local_8 = (undefined4 *)(local_18 - (int)pDVar2);
                }
                local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(*(int *)(iVar5 + 0x1c) + 4) + 0xc),
                                       pDVar2,LPVOID_008568b0,(DWORD)local_8);
                pbVar13 = pvVar4;
                if (local_c != 0) {
                  return local_c;
                }
              }
              local_1c = *pbVar13 & 0xf;
              uVar9 = (uint)(*pbVar13 >> 4);
              if (7 < uVar9) {
                uVar9 = uVar9 - 0x10;
              }
              iVar7 = (*(int *)(iVar5 + 0xa4) * local_10 + *(int *)(iVar5 + 0xa8) * local_14 >> 8) +
                      *(int *)(iVar5 + 0xa0) * uVar9;
              if (iVar7 < 0x8000) {
                if (iVar7 < -0x8000) {
                  iVar7 = -0x8000;
                }
              }
              else {
                iVar7 = 0x7fff;
              }
              iVar10 = *(int *)(PTR_DAT_007ede0c + uVar9 * 4) * *(int *)(iVar5 + 0xa0) >> 8;
              *(int *)(iVar5 + 0xa0) = iVar10;
              if (iVar10 < 0x10) {
                *(undefined4 *)(iVar5 + 0xa0) = 0x10;
              }
              uVar3 = *(undefined4 *)(iVar5 + 0xa4);
              *(int *)(iVar5 + 0xa4) = iVar7;
              *(undefined4 *)(iVar5 + 0xa8) = uVar3;
              *(short *)param_1 = (short)iVar7;
              puVar11 = (undefined4 *)((int)param_1 + 2);
              iVar10 = *(int *)(iVar5 + 0xc0) + -1;
              *(int *)(iVar5 + 0xbc) = *(int *)(iVar5 + 0xbc) + -1;
              *(int *)(iVar5 + 0xc0) = iVar10;
              iVar7 = param_2 + 2;
              if (((int)param_3 <= iVar7) || (iVar10 < 1)) break;
              if (7 < local_1c) {
                local_1c = local_1c - 0x10;
              }
              iVar7 = (*(int *)(iVar5 + 0xa4) * local_10 + *(int *)(iVar5 + 0xa8) * local_14 >> 8) +
                      *(int *)(iVar5 + 0xa0) * local_1c;
              if (iVar7 < 0x8000) {
                if (iVar7 < -0x8000) {
                  iVar7 = -0x8000;
                }
              }
              else {
                iVar7 = 0x7fff;
              }
              iVar10 = *(int *)(PTR_DAT_007ede0c + local_1c * 4) * *(int *)(iVar5 + 0xa0) >> 8;
              *(int *)(iVar5 + 0xa0) = iVar10;
              if (iVar10 < 0x10) {
                *(undefined4 *)(iVar5 + 0xa0) = 0x10;
              }
              pbVar13 = pbVar13 + 1;
              *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
              *(int *)(iVar5 + 0xa8) = *(int *)(iVar5 + 0xa4);
              *(int *)(iVar5 + 0xa4) = iVar7;
              *(short *)puVar11 = (short)iVar7;
              local_8 = (undefined4 *)((int)local_8 - 1);
              param_1 = param_1 + 1;
              *(int *)(iVar5 + 0xbc) = *(int *)(iVar5 + 0xbc) + -1;
              param_2 = param_2 + 4;
              *(int *)(iVar5 + 0xc0) = *(int *)(iVar5 + 0xc0) + -1;
              puVar11 = param_1;
              iVar7 = param_2;
              if ((int)param_3 <= param_2) break;
            }
          }
        }
        param_2 = iVar7;
        param_1 = puVar11;
        if (*(int *)(iVar5 + 0xc0) < 1) {
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

