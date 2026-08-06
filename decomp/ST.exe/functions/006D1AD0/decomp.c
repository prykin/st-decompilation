
int FUN_006d1ad0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int *piVar7;
  int iVar9;
  int *piVar10;
  int local_10;
  int local_c;
  int local_8;

  if ((param_5 == 0) || (param_6 == 0)) {
    return 0;
  }
  iVar9 = *param_1;
  if (iVar9 <= param_2) {
    piVar10 = param_1 + 2;
    local_10 = 0;
    if (0 < iVar9) {
      do {
        iVar1 = piVar10[2];
        local_8 = *piVar10;
        iVar3 = iVar1 + local_8;
        if ((param_3 <= iVar3) && (iVar4 = param_5 + param_3, local_8 <= iVar4)) {
          iVar2 = piVar10[3];
          iVar5 = iVar2 + piVar10[1];
          if ((param_4 <= iVar5) && (iVar6 = param_6 + param_4, piVar10[1] <= iVar6)) {
            if ((((param_3 < iVar3) && (local_8 < iVar4)) && (param_4 < iVar5)) &&
               (local_c = piVar10[1], local_c < iVar6)) {
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
                if ((((local_8 == *piVar10) && (local_c == piVar10[1])) && (iVar4 == piVar10[2])) &&
                   (iVar6 == piVar10[3])) {
                  return 0;
                }
                if ((0 < param_9) ||
                   (((local_8 == param_3 && (local_c == param_4)) &&
                    ((iVar4 == param_5 && (iVar6 == param_6)))))) {
                  if (local_10 < iVar9 + -1) {
                    piVar7 = piVar10 + 4;
                    for (iVar9 = ((iVar9 - local_10) - 1U & 0xfffffff) << 2; iVar9 != 0;
                        iVar9 = iVar9 + -1) {
                      *piVar10 = *piVar7;
                      piVar7 = piVar7 + 1;
                      piVar10 = piVar10 + 1;
                    }
                    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *(char *)piVar10 = (char)*piVar7;
                      piVar7 = (int *)((int)piVar7 + 1);
                      piVar10 = (int *)((int)piVar10 + 1);
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
              if ((param_6 == iVar2) && (param_4 == piVar10[1])) {
                if (param_3 == iVar3) {
LAB_006d1d8a:
                  local_8 = *piVar10;
                }
                else {
                  if (iVar4 != local_8) goto LAB_006d1cbe;
                  if (param_3 == iVar3) goto LAB_006d1d8a;
                  local_8 = param_3;
                }
                param_5 = piVar10[2] + param_5;
                *param_1 = iVar9 + -1;
                param_1[1] = param_1[1] - piVar10[3] * piVar10[2];
                local_c = param_4;
                if (local_10 < iVar9 + -1) {
                  piVar7 = piVar10 + 4;
                  for (iVar9 = ((iVar9 - local_10) - 1U & 0xfffffff) << 2; iVar9 != 0;
                      iVar9 = iVar9 + -1) {
                    *piVar10 = *piVar7;
                    piVar7 = piVar7 + 1;
                    piVar10 = piVar10 + 1;
                  }
                  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *(char *)piVar10 = (char)*piVar7;
                    piVar7 = (int *)((int)piVar7 + 1);
                    piVar10 = (int *)((int)piVar10 + 1);
                  }
                }
                goto cf_continue_loop_006D1E3F;
              }
LAB_006d1cbe:
              if ((param_5 == iVar1) && (param_3 == local_8)) {
                if (param_4 == iVar5) {
LAB_006d1de7:
                  local_c = piVar10[1];
                }
                else {
                  if (iVar6 != piVar10[1]) goto LAB_006d1ce7;
                  if (param_4 == iVar5) goto LAB_006d1de7;
                  local_c = param_4;
                }
                param_6 = piVar10[3] + param_6;
                *param_1 = iVar9 + -1;
                param_1[1] = param_1[1] - piVar10[2] * piVar10[3];
                local_8 = param_3;
                if (local_10 < iVar9 + -1) {
                  piVar7 = piVar10 + 4;
                  for (iVar9 = ((iVar9 - local_10) - 1U & 0xfffffff) << 2; iVar9 != 0;
                      iVar9 = iVar9 + -1) {
                    *piVar10 = *piVar7;
                    piVar7 = piVar7 + 1;
                    piVar10 = piVar10 + 1;
                  }
                  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *(char *)piVar10 = (char)*piVar7;
                    piVar7 = (int *)((int)piVar7 + 1);
                    piVar10 = (int *)((int)piVar10 + 1);
                  }
                }
                goto cf_continue_loop_006D1E3F;
              }
            }
          }
        }
LAB_006d1ce7:
        piVar10 = piVar10 + 4;
        local_10 = local_10 + 1;
      } while (local_10 < iVar9);
    }
    if (iVar9 < param_2) {
      *param_1 = iVar9 + 1;
      piVar10 = param_1 + iVar9 * 4 + 2;
      *piVar10 = param_3;
      piVar10[1] = param_4;
      piVar10[2] = param_5;
      piVar10[3] = param_6;
      iVar9 = param_1[1] + param_5 * param_6;
      param_1[1] = iVar9;
      if (iVar9 < param_7 * param_8) {
        return *param_1;
      }
      *param_1 = param_2 + 1;
      return -1;
    }
  }
  *param_1 = param_2 + 1;
  return -1;
}

