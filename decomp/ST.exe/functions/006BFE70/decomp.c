
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006BFBF0 -> 006BFE70 @ 006BFD7F */

DWORD FUN_006bfe70(undefined4 *param_1,AnonShape_006BFE70_9EDC24A5 *param_2,uint *param_3)

{
  short *psVar1;
  LPDWORD pDVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  AnonShape_006BFE70_9EDC24A5 *pAVar5;
  int iVar6;
  DWORD DVar7;
  AnonShape_006BFE70_9EDC24A5 *pAVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DWORD local_c;
  undefined4 *local_8;
  
  pAVar5 = param_2;
  pbVar14 = LPVOID_008568b0;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_c = 0;
  if (param_2->field_004C == 1) {
    if ((param_2->field_0004 & 0x2000) == 0) {
      psVar1 = param_2->field_0024;
      iVar6 = *(int *)(psVar1 + 0xb);
      if (iVar6 == 0) {
        iVar6 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
      }
      Library::MSVCRT::FUN_0072da70
                (param_1,(undefined4 *)(param_2->field_0028 + iVar6),(uint)param_3);
    }
    else {
      local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(param_2->field_001C + 4) + 0xc),
                             (LPDWORD)param_2->field_0028,param_1,(DWORD)param_3);
    }
    param_2->field_0028 = param_2->field_0028 + (int)param_3;
    param_2->field_00C0 = param_2->field_00C0 - (int)param_3 / (int)(uint)param_2->field_0096;
    return local_c;
  }
  if ((param_2->field_0004 & 0x2000) == 0) {
    psVar1 = param_2->field_0024;
    iVar6 = *(int *)(psVar1 + 0xb);
    if (iVar6 == 0) {
      iVar6 = (-(uint)(*psVar1 != 1) & 0x24) + 0x1a + (int)psVar1;
    }
    pbVar14 = (byte *)(param_2->field_0028 + iVar6);
    local_8 = (undefined4 *)((int)param_3 * 2);
  }
  else {
    local_18 = param_2->field_005E + 0x3e + param_2->field_0020;
    pDVar2 = (LPDWORD)param_2->field_0028;
    local_8 = DAT_00856878;
    if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
      local_8 = (undefined4 *)(local_18 - (int)pDVar2);
    }
    local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(param_2->field_001C + 4) + 0xc),pDVar2,
                           LPVOID_008568b0,(DWORD)local_8);
    if (local_c != 0) {
      return local_c;
    }
  }
  if (param_2->field_008C == 2) {
    if (0 < param_2->field_00BC) {
      local_10 = (int)*(short *)(&param_2->field_0x6e + param_2->field_009C * 4);
      local_14 = (int)*(short *)(&param_2->field_0x70 + param_2->field_009C * 4);
      local_1c = (uint)*(short *)(&param_2->field_0x6e + param_2->field_00AC * 4);
      local_20 = (int)*(short *)(&param_2->field_0x70 + param_2->field_00AC * 4);
    }
    param_2 = (AnonShape_006BFE70_9EDC24A5 *)0x0;
    puVar12 = param_1;
    if (0 < (int)param_3) {
      do {
        pvVar4 = LPVOID_008568b0;
        iVar6 = pAVar5->field_00BC;
        if (iVar6 < 1) {
          pbVar15 = pbVar14;
          if ((int)local_8 < 0xe) {
            pDVar2 = (LPDWORD)pAVar5->field_0028;
            param_1 = DAT_00856878;
            if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
              param_1 = (undefined4 *)(local_18 - (int)pDVar2);
            }
            DVar7 = FUN_006bfb90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                 LPVOID_008568b0,(DWORD)param_1);
            if (DVar7 != 0) {
              return DVar7;
            }
            local_8 = param_1;
            local_c = 0;
            pbVar15 = pvVar4;
          }
          pAVar5->field_009C = (uint)*pbVar15;
          pAVar5->field_00AC = (uint)pbVar15[1];
          *(int *)&pAVar5->field_0xa0 = (int)*(short *)(pbVar15 + 2);
          *(int *)&pAVar5->field_0xb0 = (int)*(short *)(pbVar15 + 4);
          *(int *)&pAVar5->field_0xa4 = (int)*(short *)(pbVar15 + 6);
          *(int *)&pAVar5->field_0xb4 = (int)*(short *)(pbVar15 + 8);
          *(int *)&pAVar5->field_0xa8 = (int)*(short *)(pbVar15 + 10);
          iVar6 = pAVar5->field_009C;
          pbVar14 = pbVar15 + 0xe;
          *(int *)&pAVar5->field_0xb8 = (int)*(short *)(pbVar15 + 0xc);
          if ((6 < iVar6) || (iVar11 = pAVar5->field_00AC, 6 < iVar11)) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(&pAVar5->field_0x6e + iVar6 * 4);
          local_14 = (int)*(short *)(&pAVar5->field_0x70 + iVar6 * 4);
          local_1c = (uint)*(short *)(&pAVar5->field_0x6e + iVar11 * 4);
          local_20 = (int)*(short *)(&pAVar5->field_0x70 + iVar11 * 4);
          local_8 = (undefined4 *)((int)local_8 - 0xe);
          pAVar5->field_0028 = pAVar5->field_0028 + 0xe;
          pAVar5->field_00BC = *(ushort *)&pAVar5->field_0x58 - 10;
          *(undefined2 *)puVar12 = *(undefined2 *)&pAVar5->field_0xa8;
          uVar9 = *(undefined2 *)&pAVar5->field_0xb8;
LAB_006c0125:
          *(undefined2 *)((int)puVar12 + 2) = uVar9;
          puVar12 = puVar12 + 1;
          param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0004;
          pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          param_1 = puVar12;
        }
        else {
          if (iVar6 == *(ushort *)&pAVar5->field_0x58 - 10) {
            pAVar5->field_00BC = iVar6 + -4;
            *(undefined2 *)puVar12 = *(undefined2 *)&pAVar5->field_0xa4;
            uVar9 = *(undefined2 *)&pAVar5->field_0xb4;
            goto LAB_006c0125;
          }
          while (((int)param_2 < (int)param_3 &&
                 (iVar6 = pAVar5->field_00BC, pAVar5->field_00BC = iVar6 + -1,
                 pvVar4 = LPVOID_008568b0, 0 < iVar6))) {
            if (pAVar5->field_00C0 < 1) {
              return local_c;
            }
            pbVar15 = pbVar14;
            if ((int)local_8 < 1) {
              pDVar2 = (LPDWORD)pAVar5->field_0028;
              local_8 = DAT_00856878;
              if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                local_8 = (undefined4 *)(local_18 - (int)pDVar2);
              }
              local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                     LPVOID_008568b0,(DWORD)local_8);
              pbVar15 = pvVar4;
              if (local_c != 0) {
                return local_c;
              }
            }
            pbVar14 = pbVar15 + 1;
            uVar10 = (uint)(*pbVar15 >> 4);
            uVar13 = *pbVar15 & 0xf;
            local_8 = (undefined4 *)((int)local_8 - 1);
            pAVar5->field_0028 = pAVar5->field_0028 + 1;
            if (7 < uVar10) {
              uVar10 = uVar10 - 0x10;
            }
            iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 + *(int *)&pAVar5->field_0xa8 * local_14
                    >> 8) + *(int *)&pAVar5->field_0xa0 * uVar10;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar11 = *(int *)(PTR_DAT_007ede0c + uVar10 * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
            *(int *)&pAVar5->field_0xa0 = iVar11;
            if (iVar11 < 0x10) {
              *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
            }
            *(undefined4 *)&pAVar5->field_0xa8 = *(undefined4 *)&pAVar5->field_0xa4;
            *(int *)&pAVar5->field_0xa4 = iVar6;
            *(short *)param_1 = (short)iVar6;
            if (7 < uVar13) {
              uVar13 = uVar13 - 0x10;
            }
            iVar6 = ((int)(*(int *)&pAVar5->field_0xb4 * local_1c +
                          local_20 * *(int *)&pAVar5->field_0xb8) >> 8) +
                    *(int *)&pAVar5->field_0xb0 * uVar13;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar11 = *(int *)(PTR_DAT_007ede0c + uVar13 * 4) * *(int *)&pAVar5->field_0xb0 >> 8;
            *(int *)&pAVar5->field_0xb0 = iVar11;
            if (iVar11 < 0x10) {
              *(undefined4 *)&pAVar5->field_0xb0 = 0x10;
            }
            uVar3 = *(undefined4 *)&pAVar5->field_0xb4;
            *(int *)&pAVar5->field_0xb4 = iVar6;
            *(undefined4 *)&pAVar5->field_0xb8 = uVar3;
            *(short *)((int)param_1 + 2) = (short)iVar6;
            puVar12 = param_1 + 1;
            param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0004;
            pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
            param_1 = puVar12;
          }
        }
        if (pAVar5->field_00C0 < 1) {
          return local_c;
        }
        if ((int)param_3 <= (int)param_2) {
          return local_c;
        }
      } while( true );
    }
  }
  else {
    if (0 < param_2->field_00BC) {
      local_10 = (int)*(short *)(&param_2->field_0x6e + param_2->field_009C * 4);
      local_14 = (int)*(short *)(&param_2->field_0x70 + param_2->field_009C * 4);
    }
    param_2 = (AnonShape_006BFE70_9EDC24A5 *)0x0;
    if (0 < (int)param_3) {
      do {
        pvVar4 = LPVOID_008568b0;
        uVar10 = pAVar5->field_00BC;
        if ((int)uVar10 < 1) {
          if ((int)local_8 < 7) {
            pDVar2 = (LPDWORD)pAVar5->field_0028;
            local_8 = DAT_00856878;
            if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
              local_8 = (undefined4 *)(local_18 - (int)pDVar2);
            }
            local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                   LPVOID_008568b0,(DWORD)local_8);
            pbVar14 = pvVar4;
            if (local_c != 0) {
              return local_c;
            }
          }
          pAVar5->field_009C = (uint)*pbVar14;
          *(int *)&pAVar5->field_0xa0 = (int)*(short *)(pbVar14 + 1);
          *(int *)&pAVar5->field_0xa4 = (int)*(short *)(pbVar14 + 3);
          *(int *)&pAVar5->field_0xa8 = (int)*(short *)(pbVar14 + 5);
          iVar6 = pAVar5->field_009C;
          pbVar14 = pbVar14 + 7;
          if (6 < iVar6) {
            return 0xfffffffb;
          }
          local_10 = (int)*(short *)(&pAVar5->field_0x6e + iVar6 * 4);
          local_14 = (int)*(short *)(&pAVar5->field_0x70 + iVar6 * 4);
          local_8 = (undefined4 *)((int)local_8 - 7);
          pAVar5->field_0028 = pAVar5->field_0028 + 7;
          pAVar5->field_00BC = (uint)*(ushort *)&pAVar5->field_0x58 * 2 + -0xc;
          *(undefined2 *)param_1 = *(undefined2 *)&pAVar5->field_0xa8;
LAB_006c0455:
          pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          puVar12 = (undefined4 *)((int)param_1 + 2);
          pAVar8 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0x2;
        }
        else {
          if (uVar10 == (uint)*(ushort *)&pAVar5->field_0x58 * 2 - 0xc) {
            pAVar5->field_00BC = uVar10 - 2;
            *(undefined2 *)param_1 = *(undefined2 *)&pAVar5->field_0xa4;
            goto LAB_006c0455;
          }
          if ((uVar10 & 1) != 0) {
            if ((int)local_8 < 1) {
              pDVar2 = (LPDWORD)pAVar5->field_0028;
              local_8 = DAT_00856878;
              if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                local_8 = (undefined4 *)(local_18 - (int)pDVar2);
              }
              local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                     LPVOID_008568b0,(DWORD)local_8);
              pbVar14 = pvVar4;
              if (local_c != 0) {
                return local_c;
              }
            }
            uVar10 = *pbVar14 & 0xf;
            pbVar14 = pbVar14 + 1;
            if (7 < uVar10) {
              uVar10 = uVar10 - 0x10;
            }
            iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 + *(int *)&pAVar5->field_0xa8 * local_14
                    >> 8) + *(int *)&pAVar5->field_0xa0 * uVar10;
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                iVar6 = -0x8000;
              }
            }
            else {
              iVar6 = 0x7fff;
            }
            iVar11 = *(int *)(PTR_DAT_007ede0c + uVar10 * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
            *(int *)&pAVar5->field_0xa0 = iVar11;
            if (iVar11 < 0x10) {
              *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
            }
            *(undefined4 *)&pAVar5->field_0xa8 = *(undefined4 *)&pAVar5->field_0xa4;
            local_8 = (undefined4 *)((int)local_8 - 1);
            *(int *)&pAVar5->field_0xa4 = iVar6;
            pAVar5->field_0028 = pAVar5->field_0028 + 1;
            *(short *)param_1 = (short)iVar6;
            param_1 = (undefined4 *)((int)param_1 + 2);
            param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0x2;
            pAVar5->field_00BC = pAVar5->field_00BC + -1;
            pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
          }
          puVar12 = param_1;
          pAVar8 = param_2;
          if ((int)param_2 < (int)param_3) {
            while (pvVar4 = LPVOID_008568b0, puVar12 = param_1, pAVar8 = param_2,
                  0 < pAVar5->field_00BC) {
              if (pAVar5->field_00C0 < 1) {
                return local_c;
              }
              if ((int)local_8 < 1) {
                pDVar2 = (LPDWORD)pAVar5->field_0028;
                local_8 = DAT_00856878;
                if (local_18 < (int)pDVar2 + (int)DAT_00856878) {
                  local_8 = (undefined4 *)(local_18 - (int)pDVar2);
                }
                local_c = FUN_006bfb90(*(HANDLE *)(*(int *)(pAVar5->field_001C + 4) + 0xc),pDVar2,
                                       LPVOID_008568b0,(DWORD)local_8);
                pbVar14 = pvVar4;
                if (local_c != 0) {
                  return local_c;
                }
              }
              local_1c = *pbVar14 & 0xf;
              uVar10 = (uint)(*pbVar14 >> 4);
              if (7 < uVar10) {
                uVar10 = uVar10 - 0x10;
              }
              iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 +
                       *(int *)&pAVar5->field_0xa8 * local_14 >> 8) +
                      *(int *)&pAVar5->field_0xa0 * uVar10;
              if (iVar6 < 0x8000) {
                if (iVar6 < -0x8000) {
                  iVar6 = -0x8000;
                }
              }
              else {
                iVar6 = 0x7fff;
              }
              iVar11 = *(int *)(PTR_DAT_007ede0c + uVar10 * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
              *(int *)&pAVar5->field_0xa0 = iVar11;
              if (iVar11 < 0x10) {
                *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
              }
              uVar3 = *(undefined4 *)&pAVar5->field_0xa4;
              *(int *)&pAVar5->field_0xa4 = iVar6;
              *(undefined4 *)&pAVar5->field_0xa8 = uVar3;
              *(short *)param_1 = (short)iVar6;
              puVar12 = (undefined4 *)((int)param_1 + 2);
              iVar6 = pAVar5->field_00C0 + -1;
              pAVar5->field_00BC = pAVar5->field_00BC + -1;
              pAVar5->field_00C0 = iVar6;
              pAVar8 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0x2;
              if (((int)param_3 <= (int)pAVar8) || (iVar6 < 1)) break;
              if (7 < local_1c) {
                local_1c = local_1c - 0x10;
              }
              iVar6 = (*(int *)&pAVar5->field_0xa4 * local_10 +
                       *(int *)&pAVar5->field_0xa8 * local_14 >> 8) +
                      *(int *)&pAVar5->field_0xa0 * local_1c;
              if (iVar6 < 0x8000) {
                if (iVar6 < -0x8000) {
                  iVar6 = -0x8000;
                }
              }
              else {
                iVar6 = 0x7fff;
              }
              iVar11 = *(int *)(PTR_DAT_007ede0c + local_1c * 4) * *(int *)&pAVar5->field_0xa0 >> 8;
              *(int *)&pAVar5->field_0xa0 = iVar11;
              if (iVar11 < 0x10) {
                *(undefined4 *)&pAVar5->field_0xa0 = 0x10;
              }
              pbVar14 = pbVar14 + 1;
              pAVar5->field_0028 = pAVar5->field_0028 + 1;
              *(int *)&pAVar5->field_0xa8 = *(int *)&pAVar5->field_0xa4;
              *(int *)&pAVar5->field_0xa4 = iVar6;
              *(short *)puVar12 = (short)iVar6;
              local_8 = (undefined4 *)((int)local_8 - 1);
              param_1 = param_1 + 1;
              pAVar5->field_00BC = pAVar5->field_00BC + -1;
              param_2 = (AnonShape_006BFE70_9EDC24A5 *)&param_2->field_0004;
              pAVar5->field_00C0 = pAVar5->field_00C0 + -1;
              puVar12 = param_1;
              pAVar8 = param_2;
              if ((int)param_3 <= (int)param_2) break;
            }
          }
        }
        param_2 = pAVar8;
        param_1 = puVar12;
        if (pAVar5->field_00C0 < 1) {
          return local_c;
        }
        if ((int)param_3 <= (int)param_2) {
          return local_c;
        }
      } while( true );
    }
  }
  return local_c;
}

