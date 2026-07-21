
int FUN_006d1ad0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int local_10;
  int local_c;
  int local_8;

  if ((param_5 == 0) || (param_6 == 0)) {
    return 0;
  }
  iVar8 = *param_1;
  if (iVar8 <= param_2) {
    piVar9 = param_1 + 2;
    local_10 = 0;
    if (0 < iVar8) {
      do {
        iVar1 = piVar9[2];
        local_8 = *piVar9;
        iVar3 = iVar1 + local_8;
        if ((param_3 <= iVar3) && (iVar4 = param_5 + param_3, local_8 <= iVar4)) {
          iVar2 = piVar9[3];
          iVar5 = iVar2 + piVar9[1];
          if ((param_4 <= iVar5) && (iVar6 = param_6 + param_4, piVar9[1] <= iVar6)) {
            if ((((param_3 < iVar3) && (local_8 < iVar4)) && (param_4 < iVar5)) &&
               (local_c = piVar9[1], local_c < iVar6)) {
              if (param_3 <= local_8) {
                local_8 = param_3;
              }
              if (param_4 <= local_c) {
                local_c = param_4;
              }
              if (iVar4 < iVar3) {
                iVar4 = iVar3;
              }
              iVar4 = iVar4 - local_8;
              if (iVar6 < iVar5) {
                iVar6 = iVar5;
              }
              iVar6 = iVar6 - local_c;
              iVar3 = iVar6 * iVar4 * 7;
              if ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3 < param_5 * param_6 + iVar2 * iVar1) {
                if ((((local_8 == *piVar9) && (local_c == piVar9[1])) && (iVar4 == piVar9[2])) &&
                   (iVar6 == piVar9[3])) {
                  return 0;
                }
                if ((0 < param_9) ||
                   (((local_8 == param_3 && (local_c == param_4)) &&
                    ((iVar4 == param_5 && (iVar6 == param_6)))))) {
                  if (local_10 < iVar8 + -1) {
                    piVar7 = piVar9 + 4;
                    for (iVar8 = ((iVar8 - local_10) - 1U & 0xfffffff) << 2; iVar8 != 0;
                        iVar8 = iVar8 + -1) {
                      *piVar9 = *piVar7;
                      piVar7 = piVar7 + 1;
                      piVar9 = piVar9 + 1;
                    }
                    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                      *(char *)piVar9 = (char)*piVar7;
                      piVar7 = (int *)((int)piVar7 + 1);
                      piVar9 = (int *)((int)piVar9 + 1);
                    }
                  }
                  *param_1 = *param_1 + -1;
                  param_1[1] = param_1[1] - iVar2 * iVar1;
                  param_5 = iVar4;
                  param_6 = iVar6;
cf_continue_loop_006D1E3F:
                  iVar8 = FUN_006d1ad0(param_1,param_2,local_8,local_c,param_5,param_6,param_7,
                                       param_8,param_9);
                  if (local_10 < iVar8) {
                    return local_10 + 1;
                  }
                  return iVar8;
                }
              }
              if (param_9 < 0) {
                *param_1 = param_2 + 1;
                return -1;
              }
            }
            else {
              if ((param_6 == iVar2) && (param_4 == piVar9[1])) {
                if (param_3 == iVar3) {
LAB_006d1d8a:
                  local_8 = *piVar9;
                }
                else {
                  if (iVar4 != local_8) goto LAB_006d1cbe;
                  if (param_3 == iVar3) goto LAB_006d1d8a;
                  local_8 = param_3;
                }
                param_5 = piVar9[2] + param_5;
                *param_1 = iVar8 + -1;
                param_1[1] = param_1[1] - piVar9[3] * piVar9[2];
                local_c = param_4;
                if (local_10 < iVar8 + -1) {
                  piVar7 = piVar9 + 4;
                  for (iVar8 = ((iVar8 - local_10) - 1U & 0xfffffff) << 2; iVar8 != 0;
                      iVar8 = iVar8 + -1) {
                    *piVar9 = *piVar7;
                    piVar7 = piVar7 + 1;
                    piVar9 = piVar9 + 1;
                  }
                  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *(char *)piVar9 = (char)*piVar7;
                    piVar7 = (int *)((int)piVar7 + 1);
                    piVar9 = (int *)((int)piVar9 + 1);
                  }
                }
                goto cf_continue_loop_006D1E3F;
              }
LAB_006d1cbe:
              if ((param_5 == iVar1) && (param_3 == local_8)) {
                if (param_4 == iVar5) {
LAB_006d1de7:
                  local_c = piVar9[1];
                }
                else {
                  if (iVar6 != piVar9[1]) goto LAB_006d1ce7;
                  if (param_4 == iVar5) goto LAB_006d1de7;
                  local_c = param_4;
                }
                param_6 = piVar9[3] + param_6;
                *param_1 = iVar8 + -1;
                param_1[1] = param_1[1] - piVar9[2] * piVar9[3];
                local_8 = param_3;
                if (local_10 < iVar8 + -1) {
                  piVar7 = piVar9 + 4;
                  for (iVar8 = ((iVar8 - local_10) - 1U & 0xfffffff) << 2; iVar8 != 0;
                      iVar8 = iVar8 + -1) {
                    *piVar9 = *piVar7;
                    piVar7 = piVar7 + 1;
                    piVar9 = piVar9 + 1;
                  }
                  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *(char *)piVar9 = (char)*piVar7;
                    piVar7 = (int *)((int)piVar7 + 1);
                    piVar9 = (int *)((int)piVar9 + 1);
                  }
                }
                goto cf_continue_loop_006D1E3F;
              }
            }
          }
        }
LAB_006d1ce7:
        piVar9 = piVar9 + 4;
        local_10 = local_10 + 1;
      } while (local_10 < iVar8);
    }
    if (iVar8 < param_2) {
      *param_1 = iVar8 + 1;
      piVar9 = param_1 + iVar8 * 4 + 2;
      *piVar9 = param_3;
      piVar9[1] = param_4;
      piVar9[2] = param_5;
      piVar9[3] = param_6;
      iVar8 = param_1[1] + param_5 * param_6;
      param_1[1] = iVar8;
      if (iVar8 < param_7 * param_8) {
        return *param_1;
      }
      *param_1 = param_2 + 1;
      return -1;
    }
  }
  *param_1 = param_2 + 1;
  return -1;
}

