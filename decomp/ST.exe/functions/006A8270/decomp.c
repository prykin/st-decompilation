
short * FUN_006a8270(int param_1,int param_2,uint param_3,undefined4 *param_4,short *param_5,
                    short *param_6,short *param_7,short *param_8,short *param_9,short *param_10,
                    int param_11,int *param_12,uint param_13)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  int local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  short *local_10;
  int local_8;
  
  *param_12 = 0;
  local_8 = 0;
  iVar4 = FUN_006aadd0((int)param_5,(int)param_6,(int)param_7,(int)param_8,(int)param_9,
                       (int)param_10);
  if (iVar4 <= param_11) {
    return (short *)0x0;
  }
  if ((int)param_5 < 0) {
    return (short *)0x0;
  }
  if (param_2 <= (int)param_5) {
    return (short *)0x0;
  }
  if ((int)param_6 < 0) {
    return (short *)0x0;
  }
  if ((int)param_3 <= (int)param_6) {
    return (short *)0x0;
  }
  if ((int)param_7 < 0) {
    return (short *)0x0;
  }
  if ((int)param_4 <= (int)param_7) {
    return (short *)0x0;
  }
  if ((int)param_8 < 0) {
    return (short *)0x0;
  }
  if (param_2 <= (int)param_8) {
    return (short *)0x0;
  }
  if ((int)param_9 < 0) {
    return (short *)0x0;
  }
  if ((int)param_3 <= (int)param_9) {
    return (short *)0x0;
  }
  if ((int)param_10 < 0) {
    return (short *)0x0;
  }
  if ((int)param_4 <= (int)param_10) {
    return (short *)0x0;
  }
  iVar14 = param_2 * param_3;
  iVar12 = (int)param_8 + param_2 * (int)param_9 + iVar14 * (int)param_10;
  sVar2 = *(short *)(param_1 + iVar12 * 2);
  if (sVar2 == -3) {
    *(undefined2 *)(param_1 + iVar12 * 2) = 0;
  }
  if (((param_13 & 2) == 0) ||
     (local_10 = FUN_006a9190(param_1,param_2,param_3,(int)param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,&local_8,(undefined4 *)0x0,(short *)0x0,
                              param_13 & 0xfffffffe), local_10 == (short *)0x0)) {
    iVar12 = FUN_006c8ec0(param_1,param_2,param_3,param_4,(int)param_5,(int)param_6,(int)param_7,
                          param_8,(int)param_9,(int)param_10);
    psVar17 = param_10;
    psVar6 = param_9;
    psVar9 = param_8;
    if (iVar12 != 0) {
      RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_WAY_C_way3d_cpp_007ed718,0x5d2);
      return (short *)0x0;
    }
    sVar3 = *(short *)(param_1 +
                      ((int)param_8 + param_2 * (int)param_9 + iVar14 * (int)param_10) * 2);
    if (sVar3 < 0) {
LAB_006a841d:
      uVar13 = (int)param_8 - (int)param_5 >> 0x1f;
      iVar15 = ((int)param_8 - (int)param_5 ^ uVar13) - uVar13;
      uVar13 = (int)param_9 - (int)param_6 >> 0x1f;
      iVar5 = ((int)param_9 - (int)param_6 ^ uVar13) - uVar13;
      uVar13 = (int)param_10 - (int)param_7 >> 0x1f;
      iVar12 = ((int)param_10 - (int)param_7 ^ uVar13) - uVar13;
      if (iVar15 < iVar5) {
        if (iVar12 <= iVar5) {
          iVar12 = iVar5;
        }
      }
      else if (iVar12 <= iVar15) {
        iVar12 = iVar15;
      }
      iVar12 = FUN_006a76d0(param_1,param_2,param_3,(int)param_4,(int)param_8,(int)param_9,
                            (int)param_10,param_11,iVar12,(int *)&param_8,(int *)&param_9,
                            (int *)&param_10);
      if ((iVar12 == 0) ||
         (iVar12 = FUN_006aadd0((int)param_8,(int)param_9,(int)param_10,(int)psVar9,(int)psVar6,
                                (int)psVar17), iVar4 <= iVar12)) {
        return (short *)0x0;
      }
    }
    else if (sVar3 == 0) {
      if (sVar2 == -3) {
        return (short *)0x0;
      }
      goto LAB_006a841d;
    }
    local_8 = ((((int)*(short *)(param_1 +
                                ((int)param_8 + param_2 * (int)param_9 + iVar14 * (int)param_10) * 2
                                ) -
                (int)*(short *)(param_1 +
                               ((int)param_5 + param_2 * (int)param_6 + iVar14 * (int)param_7) * 2))
               + 2) / 3) * 2 + 2;
    local_10 = (short *)FUN_006aac70(local_8 * 0x48);
    if (local_10 == (short *)0x0) goto LAB_006a88dd;
    psVar9 = local_10;
    for (iVar4 = (local_8 * 9 & 0x1fffffffU) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      psVar9[0] = -1;
      psVar9[1] = -1;
      psVar9 = psVar9 + 2;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)psVar9 = 0xff;
      psVar9 = (short *)((int)psVar9 + 1);
    }
    iVar4 = FUN_006a7d50(param_1,param_2,param_3,(int)param_4,(int)param_5,(int)param_6,(int)param_7
                         ,(int)param_8,(int)param_9,(int)param_10,(undefined4 *)local_10,local_8,
                         param_13);
    if ((0 < param_11) && (1 < iVar4)) {
      psVar9 = local_10 + iVar4 * 0x24 + -0x23;
      do {
        iVar12 = FUN_006aadd0((int)psVar9[-1],(int)*psVar9,(int)psVar9[1],(int)param_8,(int)param_9,
                              (int)param_10);
        if (param_11 < iVar12) break;
        iVar4 = iVar4 + -1;
        psVar9 = psVar9 + -0x24;
      } while (1 < iVar4);
    }
    local_8 = iVar4 + 1;
  }
  else {
    iVar4 = local_8 + -1;
  }
  sVar2 = local_10[iVar4 * 0x24 + 1];
  sVar3 = local_10[iVar4 * 0x24 + 2];
  if (5 < *(int *)(PTR_DAT_007ed56c +
                  ((((((int)sVar3 - (int)local_10[iVar4 * 0x24 + -0x22]) * 3 -
                     (int)local_10[iVar4 * 0x24 + -0x23]) + (int)sVar2) * 3 -
                   (int)local_10[iVar4 * 0x24 + -0x24]) + (int)local_10[iVar4 * 0x24]) * 4)) {
    local_10[local_8 * 0x24] = local_10[iVar4 * 0x24];
    local_10[local_8 * 0x24 + 1] = sVar2;
    local_10[local_8 * 0x24 + 2] = sVar3;
    local_10[local_8 * 0x24 + 3] = 0;
    local_10[local_8 * 0x24 + 7] = 0x7fff;
    local_8 = local_8 + 1;
  }
  local_20 = 1;
  if (1 < local_8 + -1) {
    psVar9 = local_10 + 0x26;
    local_18 = 9;
    do {
      psVar6 = (short *)(int)psVar9[-2];
      psVar17 = (short *)(int)psVar9[-1];
      iVar4 = (int)*psVar9;
      if (((((short *)(int)psVar9[-0x26] == psVar6) && ((short *)(int)psVar9[-0x25] == psVar17)) &&
          (psVar9[-0x24] == iVar4)) && (0x11 < local_18)) {
        sVar2 = psVar9[-0x47];
      }
      else {
        sVar2 = psVar9[-0x23];
      }
      param_6 = (short *)(int)psVar9[0x22];
      param_5 = (short *)(int)psVar9[0x23];
      param_11 = (int)psVar9[0x24];
      local_24 = (int)psVar9[0x25];
      if (((param_6 == psVar6) && (param_5 == psVar17)) &&
         ((param_11 == iVar4 && (local_20 < local_8 + -2)))) {
        param_6 = (short *)(int)psVar9[0x46];
        param_5 = (short *)(int)psVar9[0x47];
        param_11 = (int)psVar9[0x48];
        local_24 = (int)psVar9[0x49];
      }
      iVar12 = *(int *)(PTR_DAT_007ed56c +
                       (((((iVar4 - psVar9[-0x24]) * 3 - (int)psVar9[-0x25]) + (int)psVar17) * 3 -
                        (int)psVar9[-0x26]) + (int)psVar6) * 4);
      if (0x19 < iVar12) {
        iVar12 = *(int *)(PTR_DAT_007ed56c +
                         (((((param_11 - iVar4) * 3 - (int)psVar17) + (int)param_5) * 3 -
                          (int)psVar6) + (int)param_6) * 4);
      }
      local_1c = 1;
      piVar7 = (int *)(&DAT_007ecb40 + iVar12 * 0x60);
      local_34 = 0;
      do {
        if (*piVar7 == -2) break;
        iVar12 = *piVar7 + (int)psVar6;
        if (((-1 < iVar12) && (iVar12 < param_2)) &&
           (((iVar5 = piVar7[1] + (int)psVar17, -1 < iVar5 &&
             (((iVar5 < (int)param_3 && (iVar15 = piVar7[2] + iVar4, -1 < iVar15)) &&
              (iVar15 < (int)param_4)))) &&
            (-1 < *(short *)(param_1 + (iVar5 * param_2 + iVar12 + iVar15 * iVar14) * 2))))) {
          iVar16 = (int)param_6 - iVar12;
          if ((((iVar16 < -1) || (1 < iVar16)) ||
              ((iVar10 = (int)param_5 - iVar5, iVar10 < -1 ||
               ((1 < iVar10 || (iVar8 = param_11 - iVar15, iVar8 < -1)))))) || (1 < iVar8)) {
            iVar11 = (int)psVar9[1];
            if (*(int *)(PTR_DAT_007ed56c +
                        (((((iVar4 - iVar15) * 3 - iVar5) + (int)psVar17) * 3 - iVar12) +
                        (int)psVar6) * 4) < 0x1a) {
              iVar16 = (&DAT_007ed640)
                       [*(int *)(PTR_DAT_007ed56c +
                                (((((iVar4 - iVar15) * 3 - iVar5) + (int)psVar17) * 3 - iVar12) +
                                (int)psVar6) * 4)];
              goto LAB_006a8873;
            }
          }
          else {
            iVar11 = local_24;
            if (*(int *)(PTR_DAT_007ed56c + ((iVar10 + iVar8 * 3) * 3 + iVar16) * 4) < 0x1a) {
              iVar11 = (&DAT_007ed640)
                       [*(int *)(PTR_DAT_007ed56c + ((iVar10 + iVar8 * 3) * 3 + iVar16) * 4)];
              iVar16 = local_24;
LAB_006a8873:
              iVar11 = iVar11 + iVar16;
            }
          }
          if (iVar11 <= sVar2) {
            psVar1 = local_10 + (local_18 + local_1c) * 4;
            *psVar1 = (short)iVar12;
            psVar1[1] = (short)iVar5;
            psVar1[2] = (short)iVar15;
            psVar1[3] = (short)iVar11;
            local_1c = local_1c + 1;
          }
        }
        piVar7 = piVar7 + 3;
        local_34 = local_34 + 1;
      } while (local_34 < 8);
      local_20 = local_20 + 1;
      psVar9 = psVar9 + 0x24;
      local_18 = local_18 + 9;
    } while (local_20 < local_8 + -1);
  }
LAB_006a88dd:
  *param_12 = local_8;
  return local_10;
}

