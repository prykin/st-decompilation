
undefined4 *
FUN_006a88f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,int *param_12,undefined4 *param_13)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  short sVar20;
  int iVar21;
  int local_48;
  int local_44;
  int local_40;
  short *local_3c;
  int *local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_12 = 0;
  iVar3 = FUN_006aadd0(param_5,param_6,param_7,param_8,param_9,param_10);
  if ((((param_11 < iVar3) && (-1 < param_5)) && (param_5 < param_2)) &&
     ((((-1 < param_6 && (param_6 < param_3)) &&
       ((-1 < param_7 && ((param_7 < param_4 && (-1 < param_8)))))) &&
      ((param_8 < param_2 &&
       ((((-1 < param_9 && (param_9 < param_3)) && (-1 < param_10)) && (param_10 < param_4)))))))) {
    iVar14 = param_2 * param_3;
    iVar3 = param_2 * param_9 + param_8 + iVar14 * param_10;
    if (*(short *)(param_1 + iVar3 * 2) == -3) {
      *(undefined2 *)(param_1 + iVar3 * 2) = 0;
    }
    iVar3 = FUN_006a64e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
    if (iVar3 == 0) {
      sVar1 = *(short *)(param_1 + (param_2 * param_9 + param_8 + iVar14 * param_10) * 2);
      if (sVar1 < 0) {
        uVar12 = param_8 - param_5 >> 0x1f;
        iVar15 = (param_8 - param_5 ^ uVar12) - uVar12;
        uVar12 = param_9 - param_6 >> 0x1f;
        iVar4 = (param_9 - param_6 ^ uVar12) - uVar12;
        uVar12 = param_10 - param_7 >> 0x1f;
        iVar3 = (param_10 - param_7 ^ uVar12) - uVar12;
        if (iVar15 < iVar4) {
          if (iVar3 <= iVar4) {
            iVar3 = iVar4;
          }
        }
        else if (iVar3 <= iVar15) {
          iVar3 = iVar15;
        }
        iVar3 = FUN_006a76d0(param_1,param_2,param_3,param_4,param_8,param_9,param_10,param_11,iVar3
                             ,&param_8,&param_9,&param_10);
        if (iVar3 == 0) {
          return (undefined4 *)0x0;
        }
      }
      else if (sVar1 == 0) {
        return (undefined4 *)0x0;
      }
      sVar1 = *(short *)(param_1 + (param_2 * param_9 + param_8 + iVar14 * param_10) * 2);
      iVar3 = (((int)sVar1 -
               (int)*(short *)(param_1 + (param_2 * param_6 + param_5 + iVar14 * param_7) * 2)) + 2)
              / 3;
      local_8 = iVar3 + 3 + iVar3 / 2;
      puVar5 = (undefined4 *)FUN_006aac70(local_8 * 0x48);
      iVar15 = param_10;
      iVar4 = param_9;
      iVar3 = param_8;
      if (puVar5 != (undefined4 *)0x0) {
        puVar17 = puVar5;
        for (iVar10 = (local_8 * 9 & 0x1fffffffU) << 1; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar17 = 0xffffffff;
          puVar17 = puVar17 + 1;
        }
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined1 *)puVar17 = 0xff;
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
        local_c = local_8 + -1;
        local_18 = param_8;
        puVar17 = puVar5 + local_c * 0x12;
        *(short *)puVar17 = (short)param_8;
        local_14 = param_9;
        *(short *)((int)puVar17 + 2) = (short)param_9;
        local_10 = param_10;
        *(short *)(puVar17 + 1) = (short)param_10;
        *(undefined2 *)((int)puVar17 + 6) = 0;
        *(undefined2 *)((int)puVar17 + 0xe) = 0x7fff;
        local_40 = 0;
        local_44 = 0;
        local_20 = 0;
        uVar12 = FUN_006a6360(param_5,param_6,param_7,param_8,param_9,param_10);
        local_30 = FUN_006a6320(uVar12);
        if (((iVar3 != param_5) || (iVar4 != param_6)) || (iVar15 != param_7)) {
          uVar12 = (uint)param_13 & 4;
          local_2c = local_30;
          do {
            iVar3 = 30000;
            local_24 = 30000;
            param_13 = puVar17;
            uVar6 = FUN_006a6360(param_5,param_6,param_7,local_18,local_14,local_10);
            uVar6 = FUN_006a6320(uVar6);
            if (uVar12 != 0) {
              local_2c = uVar6;
            }
            local_28 = 0;
            local_38 = &DAT_007ed640;
            local_3c = &DAT_007ed572;
            puVar18 = puVar17;
            do {
              iVar4 = local_3c[-1] + local_18;
              if (((-1 < iVar4) && (iVar4 < param_2)) &&
                 ((iVar15 = *local_3c + local_14, -1 < iVar15 &&
                  (((iVar15 < param_3 && (iVar10 = local_3c[1] + local_10, -1 < iVar10)) &&
                   (iVar10 < param_4)))))) {
                sVar20 = *(short *)(param_1 + (iVar15 * param_2 + iVar4 + iVar10 * iVar14) * 2);
                puVar18 = param_13;
                if (((iVar4 == param_5) && (iVar15 == param_6)) && (iVar10 == param_7)) {
                  local_30 = local_28;
                  sVar20 = (short)(&DAT_007ed640)[local_28] + sVar20;
                  local_44 = iVar15;
                  local_40 = iVar4;
                  local_20 = iVar10;
                  break;
                }
                iVar3 = local_24;
                if (0 < sVar20) {
                  iVar21 = (int)sVar20 + *local_38;
                  if ((iVar21 < local_24) ||
                     ((iVar21 == local_24 &&
                      (((int)local_3c[2] == local_2c || ((int)local_3c[2] == uVar6)))))) {
                    local_30 = local_28;
                    iVar3 = iVar21;
                    local_44 = iVar15;
                    local_40 = iVar4;
                    local_24 = iVar21;
                    local_20 = iVar10;
                  }
                }
              }
              sVar20 = (short)iVar3;
              local_38 = local_38 + 1;
              local_28 = local_28 + 1;
              local_3c = local_3c + 4;
            } while ((int)local_38 < 0x7ed6a8);
            sVar2 = (&DAT_007ed576)[local_30 * 4];
            if (((int)sVar2 != local_2c) && (local_c != local_8 + -1)) {
              local_c = local_c + -1;
              *(undefined2 *)(puVar18 + -0x12) = (undefined2)local_18;
              *(undefined2 *)((int)puVar18 + -0x46) = (undefined2)local_14;
              *(undefined2 *)(puVar18 + -0x11) = (undefined2)local_10;
              *(undefined2 *)((int)puVar18 + -0x42) = *(undefined2 *)((int)puVar18 + 6);
              puVar18 = puVar18 + -0x12;
            }
            local_14 = local_44;
            local_18 = local_40;
            puVar17 = puVar18 + -0x12;
            local_c = local_c + -1;
            *(short *)puVar17 = (short)local_40;
            *(short *)((int)puVar18 + -0x46) = (short)local_44;
            *(undefined2 *)(puVar18 + -0x11) = (undefined2)local_20;
            *(short *)((int)puVar18 + -0x42) =
                 (*(short *)(&DAT_007ed640 + local_30) - sVar20) + sVar1;
            *(undefined2 *)((int)puVar18 + -0x3a) = 0x7fff;
            if (((local_40 == param_5) && (local_44 == param_6)) &&
               (param_13 = puVar17, local_20 == param_7)) goto LAB_006a8be6;
            local_10 = local_20;
            local_2c = (int)sVar2;
          } while( true );
        }
        local_c = local_8 + -2;
        puVar17 = puVar5 + local_c * 0x12;
        *(undefined2 *)puVar17 = (undefined2)param_5;
        *(short *)((int)puVar17 + 2) = (short)param_6;
        *(short *)(puVar17 + 1) = (short)param_7;
        *(short *)((int)puVar17 + 6) = sVar1;
        *(undefined2 *)((int)puVar17 + 0xe) = 0x7fff;
LAB_006a8be6:
        iVar3 = param_11;
        if (0 < local_c) {
          puVar17 = puVar5 + local_c * 0x12;
          puVar18 = puVar5;
          for (iVar4 = ((local_8 - local_c) * 9 & 0x1fffffffU) << 1; iVar4 != 0; iVar4 = iVar4 + -1)
          {
            *puVar18 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          }
        }
        iVar4 = (local_8 - local_c) + -1;
        if ((0 < param_11) && (1 < iVar4)) {
          psVar16 = (short *)((int)puVar5 + iVar4 * 0x48 + -0x46);
          do {
            iVar15 = FUN_006aadd0((int)psVar16[-1],(int)*psVar16,(int)psVar16[1],param_8,param_9,
                                  param_10);
            if (iVar3 < iVar15) break;
            iVar4 = iVar4 + -1;
            psVar16 = psVar16 + -0x24;
          } while (1 < iVar4);
        }
        sVar1 = *(short *)((int)puVar5 + iVar4 * 0x48 + 2);
        sVar20 = *(short *)(puVar5 + iVar4 * 0x12 + 1);
        local_8 = iVar4 + 1;
        if (5 < *(int *)(PTR_DAT_007ed56c +
                        ((((((int)sVar20 - (int)*(short *)(puVar5 + iVar4 * 0x12 + -0x11)) * 3 -
                           (int)*(short *)((int)puVar5 + iVar4 * 0x48 + -0x46)) + (int)sVar1) * 3 -
                         (int)*(short *)(puVar5 + iVar4 * 0x12 + -0x12)) +
                        (int)*(short *)(puVar5 + iVar4 * 0x12)) * 4)) {
          local_8 = iVar4 + 2;
          psVar16 = (short *)(puVar5 + (iVar4 + 1) * 0x12);
          *psVar16 = *(short *)(puVar5 + iVar4 * 0x12);
          psVar16[1] = sVar1;
          psVar16[2] = sVar20;
          psVar16[3] = 0;
          psVar16[7] = 0x7fff;
        }
        local_c = 1;
        if (1 < local_8 + -1) {
          local_30 = 9;
          psVar16 = (short *)(puVar5 + 0x13);
          do {
            iVar3 = (int)psVar16[-2];
            iVar4 = (int)psVar16[-1];
            iVar15 = (int)*psVar16;
            if (((psVar16[-0x26] == iVar3) && (psVar16[-0x25] == iVar4)) &&
               ((psVar16[-0x24] == iVar15 && (0x11 < (int)local_30)))) {
              sVar1 = psVar16[-0x47];
            }
            else {
              sVar1 = psVar16[-0x23];
            }
            param_7 = (int)psVar16[0x22];
            param_6 = (int)psVar16[0x23];
            param_11 = (int)psVar16[0x24];
            local_48 = (int)psVar16[0x25];
            if ((((param_7 == iVar3) && (param_6 == iVar4)) && (param_11 == iVar15)) &&
               (local_c < local_8 + -2)) {
              param_7 = (int)psVar16[0x46];
              param_6 = (int)psVar16[0x47];
              param_11 = (int)psVar16[0x48];
              local_48 = (int)psVar16[0x49];
            }
            iVar10 = *(int *)(PTR_DAT_007ed56c +
                             (((((iVar15 - psVar16[-0x24]) * 3 - (int)psVar16[-0x25]) + iVar4) * 3 -
                              (int)psVar16[-0x26]) + iVar3) * 4);
            if (0x19 < iVar10) {
              iVar10 = *(int *)(PTR_DAT_007ed56c +
                               (((((param_11 - iVar15) * 3 - iVar4) + param_6) * 3 - iVar3) +
                               param_7) * 4);
            }
            local_44 = 1;
            piVar7 = (int *)(&DAT_007ecb40 + iVar10 * 0x60);
            local_3c = (short *)0x0;
            do {
              if (*piVar7 == -2) break;
              iVar10 = *piVar7 + iVar3;
              if (((-1 < iVar10) && (iVar10 < param_2)) &&
                 ((((iVar21 = piVar7[1] + iVar4, -1 < iVar21 &&
                    ((iVar21 < param_3 && (iVar13 = piVar7[2] + iVar15, -1 < iVar13)))) &&
                   (iVar13 < param_4)) &&
                  (-1 < *(short *)(param_1 + (iVar21 * param_2 + iVar10 + iVar13 * iVar14) * 2)))))
              {
                iVar19 = param_7 - iVar10;
                if ((((iVar19 < -1) || (1 < iVar19)) || (iVar11 = param_6 - iVar21, iVar11 < -1)) ||
                   (((1 < iVar11 || (iVar8 = param_11 - iVar13, iVar8 < -1)) || (1 < iVar8)))) {
                  iVar9 = (int)psVar16[1];
                  if (*(int *)(PTR_DAT_007ed56c +
                              (((((iVar15 - iVar13) * 3 - iVar21) + iVar4) * 3 - iVar10) + iVar3) *
                              4) < 0x1a) {
                    iVar9 = (int)psVar16[1] +
                            (&DAT_007ed640)
                            [*(int *)(PTR_DAT_007ed56c +
                                     (((((iVar15 - iVar13) * 3 - iVar21) + iVar4) * 3 - iVar10) +
                                     iVar3) * 4)];
                  }
                }
                else {
                  iVar9 = local_48;
                  if (*(int *)(PTR_DAT_007ed56c + ((iVar11 + iVar8 * 3) * 3 + iVar19) * 4) < 0x1a) {
                    iVar9 = (&DAT_007ed640)
                            [*(int *)(PTR_DAT_007ed56c + ((iVar11 + iVar8 * 3) * 3 + iVar19) * 4)] +
                            local_48;
                  }
                }
                if (iVar9 < sVar1) {
                  puVar17 = puVar5 + (local_30 + local_44) * 2;
                  *(short *)puVar17 = (short)iVar10;
                  *(short *)((int)puVar17 + 2) = (short)iVar21;
                  *(short *)(puVar17 + 1) = (short)iVar13;
                  *(short *)((int)puVar17 + 6) = (short)iVar9;
                  local_44 = local_44 + 1;
                }
              }
              piVar7 = piVar7 + 3;
              local_3c = (short *)((int)local_3c + 1);
            } while ((int)local_3c < 8);
            local_c = local_c + 1;
            psVar16 = psVar16 + 0x24;
            local_30 = local_30 + 9;
          } while (local_c < local_8 + -1);
        }
      }
      *param_12 = local_8;
      return puVar5;
    }
    RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_WAY_C_way3d_cpp_007ed718,0x68e);
  }
  return (undefined4 *)0x0;
}

