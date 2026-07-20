
undefined4
FUN_0060f940(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,
            int *param_14,int *param_15)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if (param_4 == 0) {
    iVar6 = FUN_006acf0d(param_5,param_6,param_7,param_8,param_9,param_10);
    iVar4 = FUN_006acf0d(param_8,param_9,param_10,param_11,param_12,param_13);
    if ((iVar6 != 0) && (iVar4 != 0)) {
      iVar5 = (param_13 - param_10) * (param_10 - param_7) +
              (param_12 - param_9) * (param_9 - param_6) +
              (param_11 - param_8) * (param_8 - param_5);
      if (iVar6 < iVar4) {
        iVar5 = ((iVar5 / iVar6) * 10000) / iVar4;
      }
      else {
        iVar5 = ((iVar5 / iVar4) * 10000) / iVar6;
      }
      *param_14 = iVar5;
      *param_15 = iVar4;
      *(int *)(param_3 + 8) = iVar6;
      if (iVar5 != 0) {
        iVar5 = (iVar6 * 10000) / iVar5;
        *(int *)(param_3 + 0xc) =
             (param_8 - param_5) * 10 - ((param_11 - param_8) * iVar5 * 10) / iVar4;
        *(int *)(param_3 + 0x10) =
             (param_9 - param_6) * 10 - ((param_12 - param_9) * iVar5 * 10) / iVar4;
        *(int *)(param_3 + 0x14) =
             (param_10 - param_7) * 10 - ((param_13 - param_10) * iVar5 * 10) / iVar4;
      }
      iVar6 = FUN_006acf0d(*(int *)(param_3 + 0xc),*(int *)(param_3 + 0x10),*(int *)(param_3 + 0x14)
                           ,0,0,0);
      if (iVar6 != 0) {
        local_8 = 8;
        *(int *)(param_3 + 0xc) = (*(int *)(param_3 + 0xc) * 10000) / iVar6;
        *(int *)(param_3 + 0x10) = (*(int *)(param_3 + 0x10) * 10000) / iVar6;
        *(int *)(param_3 + 0x14) = (*(int *)(param_3 + 0x14) * 10000) / iVar6;
      }
      return local_8;
    }
    return 0xffffffff;
  }
  if (param_1 == param_2) {
    return 0;
  }
  psVar1 = &SHORT_007ed574 + param_1 * 4;
  psVar2 = &SHORT_007ed572 + param_1 * 4;
  psVar3 = &SHORT_007ed570 + param_1 * 4;
  iVar6 = *(int *)(&DAT_007cfe74 + param_1 * 4);
  iVar4 = (((((int)*psVar1 * (int)(&SHORT_007ed574)[param_2 * 4] +
              (int)*psVar2 * (int)(&SHORT_007ed572)[param_2 * 4] +
             (int)*psVar3 * (int)(&SHORT_007ed570)[param_2 * 4]) * 1000000) / iVar6) * 10000) /
          *(int *)(&DAT_007cfe74 + param_2 * 4);
  if ((iVar4 < 0) && (iVar4 < -0xdac)) {
    return 0xffffffff;
  }
  iVar5 = iVar4 >> 0x1f;
  iVar7 = iVar4 / 10 + iVar5;
  iVar8 = iVar7 - iVar5;
  if (iVar8 < 0x1f5) {
    if (iVar8 == 500) {
      local_8 = 4;
    }
    else {
      if (iVar8 == -0x14d) {
        local_8 = 7;
        *(int *)(param_3 + 8) = (iVar6 * 0xc9) / 1000;
        iVar4 = (*(int *)(&DAT_007cfe74 + param_1 * 4) * 10000) / iVar4;
        *(int *)(param_3 + 0xc) =
             *psVar3 * 1000 -
             ((&SHORT_007ed570)[param_2 * 4] * iVar4 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4)
        ;
        *(int *)(param_3 + 0x10) =
             *psVar2 * 1000 -
             ((&SHORT_007ed572)[param_2 * 4] * iVar4 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4)
        ;
        iVar6 = *psVar1 * 1000 -
                ((&SHORT_007ed574)[param_2 * 4] * iVar4 * 1000) /
                *(int *)(&DAT_007cfe74 + param_2 * 4);
        *(int *)(param_3 + 0x14) = iVar6;
        iVar4 = FUN_006acf0d(*(int *)(param_3 + 0xc),*(int *)(param_3 + 0x10),iVar6,0,0,0);
        *(int *)(param_3 + 0xc) = (*(int *)(param_3 + 0xc) * -10000) / iVar4;
        *(int *)(param_3 + 0x10) = (*(int *)(param_3 + 0x10) * -10000) / iVar4;
        iVar6 = *(int *)(param_3 + 0x14) * -5;
        goto LAB_0060fe02;
      }
      if (iVar7 == iVar5) {
        *(int *)(param_3 + 8) = (iVar6 * 0xc9) / 1000;
        *(int *)(param_3 + 0xc) = (&SHORT_007ed570)[param_2 * 4] * -10000;
        *(int *)(param_3 + 0x10) = (&SHORT_007ed572)[param_2 * 4] * -10000;
        iVar6 = (&SHORT_007ed574)[param_2 * 4] * -10000;
        *(int *)(param_3 + 0x14) = iVar6;
        iVar6 = FUN_006acf0d(*(int *)(param_3 + 0xc),*(int *)(param_3 + 0x10),iVar6,0,0,0);
        *(int *)(param_3 + 0xc) = (*(int *)(param_3 + 0xc) * 10000) / iVar6;
        *(int *)(param_3 + 0x10) = (*(int *)(param_3 + 0x10) * 10000) / iVar6;
        *(int *)(param_3 + 0x14) = (*(int *)(param_3 + 0x14) * 10000) / iVar6;
        return 6;
      }
      if (iVar8 != 0x14d) {
        return 0xffffffff;
      }
      local_8 = 5;
    }
  }
  else if (iVar8 == 0x241) {
    local_8 = 3;
  }
  else if (iVar8 == 0x2c3) {
    local_8 = 2;
  }
  else {
    if (iVar8 != 0x330) {
      return 0xffffffff;
    }
    local_8 = 1;
  }
  *(int *)(param_3 + 8) = (iVar6 * 0xc9) / 1000;
  iVar4 = (*(int *)(&DAT_007cfe74 + param_1 * 4) * 10000) / iVar4;
  *(int *)(param_3 + 0xc) =
       *psVar3 * 1000 -
       ((&SHORT_007ed570)[param_2 * 4] * iVar4 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  *(int *)(param_3 + 0x10) =
       *psVar2 * 1000 -
       ((&SHORT_007ed572)[param_2 * 4] * iVar4 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  iVar6 = *psVar1 * 1000 -
          ((&SHORT_007ed574)[param_2 * 4] * iVar4 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  *(int *)(param_3 + 0x14) = iVar6;
  iVar4 = FUN_006acf0d(*(int *)(param_3 + 0xc),*(int *)(param_3 + 0x10),iVar6,0,0,0);
  *(int *)(param_3 + 0xc) = (*(int *)(param_3 + 0xc) * 10000) / iVar4;
  *(int *)(param_3 + 0x10) = (*(int *)(param_3 + 0x10) * 10000) / iVar4;
  iVar6 = *(int *)(param_3 + 0x14) * 5;
LAB_0060fe02:
  *(int *)(param_3 + 0x14) = (iVar6 * 2000) / iVar4;
  return local_8;
}

