
undefined4
FUN_006a76d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int *param_10,int *param_11,int *param_12)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  short *local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  iVar2 = param_2 * param_3;
  local_10 = 0x7fffffff;
  local_c = 0x7fffffff;
  local_1c = (param_8 * 3) / 5;
  local_28 = 0;
  if (param_9 < local_1c) {
    return 0;
  }
  do {
    local_20 = param_5 - local_1c;
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_24 = param_6 - local_1c;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_30 = (short *)(param_7 - local_1c);
    if ((int)local_30 < 0) {
      local_30 = (short *)0x0;
    }
    local_14 = local_1c + param_5;
    if (param_2 <= local_14) {
      local_14 = param_2 + -1;
    }
    local_18 = local_1c + param_6;
    if (param_3 <= local_18) {
      local_18 = param_3 + -1;
    }
    iVar3 = local_1c + param_7;
    if (param_4 <= iVar3) {
      iVar3 = param_4 + -1;
    }
    psVar9 = local_30;
    if (local_1c <= param_7 - (int)local_30) {
      psVar9 = (short *)((int)local_30 + 1);
    }
    iVar4 = iVar3;
    if (local_1c <= iVar3 - param_7) {
      iVar4 = iVar3 + -1;
    }
    if ((int)psVar9 <= iVar4) {
      iVar5 = (int)psVar9 * iVar2;
      do {
        iVar8 = local_18;
        if ((local_1c <= local_18 - param_6) && (local_1c != 0)) {
          iVar8 = local_18 + -1;
        }
        iVar6 = local_14;
        if (local_1c <= local_14 - param_5) {
          psVar7 = (short *)(param_1 + (iVar8 * param_2 + iVar5 + local_14) * 2);
          iVar6 = FUN_006aae60(local_14,iVar8,(int)psVar9,param_5,param_6,param_7);
          for (; local_24 <= iVar8; iVar8 = iVar8 + -1) {
            sVar1 = *psVar7;
            if ((((0 < sVar1) && (iVar6 <= local_c)) && (param_8 <= iVar6 / 3)) &&
               ((iVar6 / 3 <= param_9 && ((iVar6 < local_c || (sVar1 < local_10)))))) {
              local_10 = (int)sVar1;
              local_28 = 1;
              *param_10 = local_14;
              *param_11 = iVar8;
              *param_12 = (int)psVar9;
              local_c = iVar6;
            }
            psVar7 = psVar7 + -param_2;
            if (param_6 < iVar8) {
              iVar6 = iVar6 + -1;
            }
            else {
              iVar6 = iVar6 + 1;
            }
          }
          iVar6 = local_14 + -1;
        }
        if (local_1c != 0) {
          iVar8 = local_24;
          if (local_1c <= param_6 - local_24) {
            psVar7 = (short *)(param_1 + (local_24 * param_2 + iVar5 + iVar6) * 2);
            iVar8 = FUN_006aae60(iVar6,local_24,(int)psVar9,param_5,param_6,param_7);
            for (; local_20 <= iVar6; iVar6 = iVar6 + -1) {
              if ((((0 < *psVar7) && (iVar8 <= local_c)) &&
                  ((param_8 <= iVar8 / 3 && (iVar8 / 3 <= param_9)))) &&
                 ((iVar8 < local_c || (*psVar7 < local_10)))) {
                local_28 = 1;
                local_10 = (int)*psVar7;
                *param_10 = iVar6;
                *param_11 = local_24;
                *param_12 = (int)psVar9;
                local_c = iVar8;
              }
              psVar7 = psVar7 + -1;
              if (param_5 < iVar6) {
                iVar8 = iVar8 + -1;
              }
              else {
                iVar8 = iVar8 + 1;
              }
            }
            iVar8 = local_24 + 1;
          }
          iVar6 = local_20;
          if (local_1c <= param_5 - local_20) {
            psVar7 = (short *)(param_1 + (iVar8 * param_2 + iVar5 + local_20) * 2);
            iVar6 = FUN_006aae60(local_20,iVar8,(int)psVar9,param_5,param_6,param_7);
            for (; iVar8 <= local_18; iVar8 = iVar8 + 1) {
              sVar1 = *psVar7;
              if (((((0 < sVar1) && (iVar6 <= local_c)) && (param_8 <= iVar6 / 3)) &&
                  (iVar6 / 3 <= param_9)) && ((iVar6 < local_c || (sVar1 < local_10)))) {
                local_10 = (int)sVar1;
                local_28 = 1;
                *param_10 = local_20;
                *param_11 = iVar8;
                *param_12 = (int)psVar9;
                local_c = iVar6;
              }
              psVar7 = psVar7 + param_2;
              if (iVar8 < param_6) {
                iVar6 = iVar6 + -1;
              }
              else {
                iVar6 = iVar6 + 1;
              }
            }
            iVar6 = local_20 + 1;
          }
          if (local_1c <= local_18 - param_6) {
            psVar7 = (short *)(param_1 + (local_18 * param_2 + iVar5 + iVar6) * 2);
            iVar8 = FUN_006aae60(iVar6,local_18,(int)psVar9,param_5,param_6,param_7);
            for (; iVar6 <= local_14; iVar6 = iVar6 + 1) {
              sVar1 = *psVar7;
              if ((((0 < sVar1) && (iVar8 <= local_c)) &&
                  ((param_8 <= iVar8 / 3 && (iVar8 / 3 <= param_9)))) &&
                 ((iVar8 < local_c || (sVar1 < local_10)))) {
                local_10 = (int)sVar1;
                *param_10 = iVar6;
                *param_11 = local_18;
                local_28 = 1;
                *param_12 = (int)psVar9;
                local_c = iVar8;
              }
              psVar7 = psVar7 + 1;
              if (iVar6 < param_5) {
                iVar8 = iVar8 + -1;
              }
              else {
                iVar8 = iVar8 + 1;
              }
            }
          }
        }
        psVar9 = (short *)((int)psVar9 + 1);
        iVar5 = iVar5 + iVar2;
      } while ((int)psVar9 <= iVar4);
    }
    if (local_1c != 0) {
      if ((local_1c <= param_7 - (int)local_30) && (local_24 <= local_18)) {
        psVar9 = (short *)(param_1 + (local_24 * param_2 + (int)local_30 * iVar2 + local_20) * 2);
        iVar4 = local_24;
        do {
          iVar5 = FUN_006aae60(local_20,iVar4,(int)local_30,param_5,param_6,param_7);
          psVar7 = psVar9;
          for (iVar8 = local_20; iVar8 <= local_14; iVar8 = iVar8 + 1) {
            sVar1 = *psVar7;
            if ((((0 < sVar1) && (iVar5 <= local_c)) && (param_8 <= iVar5 / 3)) &&
               ((iVar5 / 3 <= param_9 && ((iVar5 < local_c || (sVar1 < local_10)))))) {
              local_10 = (int)sVar1;
              *param_10 = iVar8;
              *param_11 = iVar4;
              local_28 = 1;
              *param_12 = (int)local_30;
              local_c = iVar5;
            }
            psVar7 = psVar7 + 1;
            if (iVar8 < param_5) {
              iVar5 = iVar5 + -1;
            }
            else {
              iVar5 = iVar5 + 1;
            }
          }
          iVar4 = iVar4 + 1;
          psVar9 = psVar9 + param_2;
        } while (iVar4 <= local_18);
      }
      if ((local_1c <= iVar3 - param_7) && (local_24 <= local_18)) {
        local_30 = (short *)(param_1 + (local_24 * param_2 + iVar3 * iVar2 + local_20) * 2);
        do {
          iVar4 = FUN_006aae60(local_20,local_24,iVar3,param_5,param_6,param_7);
          psVar9 = local_30;
          for (iVar5 = local_20; iVar5 <= local_14; iVar5 = iVar5 + 1) {
            sVar1 = *psVar9;
            if ((((0 < sVar1) && (iVar4 <= local_c)) && (param_8 <= iVar4 / 3)) &&
               ((iVar4 / 3 <= param_9 && ((iVar4 < local_c || (sVar1 < local_10)))))) {
              local_10 = (int)sVar1;
              *param_10 = iVar5;
              *param_11 = local_24;
              local_28 = 1;
              *param_12 = iVar3;
              local_c = iVar4;
            }
            psVar9 = psVar9 + 1;
            if (iVar5 < param_5) {
              iVar4 = iVar4 + -1;
            }
            else {
              iVar4 = iVar4 + 1;
            }
          }
          local_24 = local_24 + 1;
          local_30 = local_30 + param_2;
        } while (local_24 <= local_18);
      }
    }
    local_1c = local_1c + 1;
  } while (local_1c <= param_9);
  return local_28;
}

