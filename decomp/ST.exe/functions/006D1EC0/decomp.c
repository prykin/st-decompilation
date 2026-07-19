
int FUN_006d1ec0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_5 == 0) || (param_6 == 0)) {
    return 0;
  }
  local_8 = *param_1;
  if (local_8 <= param_2) {
    piVar1 = param_1 + 2;
    local_c = 0;
    if (0 < local_8) {
      local_10 = local_8 + -1;
      do {
        iVar5 = piVar1[2] + *piVar1;
        if ((iVar5 < param_3) || (iVar6 = param_3 + param_5, iVar6 < *piVar1)) {
cf_common_join_006D2041:
          local_c = local_c + 1;
          piVar1 = piVar1 + 4;
        }
        else {
          iVar2 = piVar1[1];
          iVar3 = iVar2 + piVar1[3];
          if ((iVar3 < param_4) || (iVar7 = param_4 + param_6, iVar7 < iVar2))
          goto cf_common_join_006D2041;
          if ((((iVar5 <= param_3) || (iVar6 <= *piVar1)) || (iVar3 <= param_4)) || (iVar7 <= iVar2)
             ) {
            if ((param_6 == piVar1[3]) && (param_4 == iVar2)) {
              if (param_3 == iVar5) {
LAB_006d23e7:
                param_3 = *piVar1;
              }
              else {
                if (iVar6 != *piVar1) goto LAB_006d2188;
                if (param_3 == iVar5) goto LAB_006d23e7;
              }
              param_5 = param_5 + piVar1[2];
              *param_1 = *param_1 + -1;
              if (local_c < local_8 + -1) {
                piVar10 = piVar1 + 4;
                for (iVar5 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar5 != 0;
                    iVar5 = iVar5 + -1) {
                  *piVar1 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(char *)piVar1 = (char)*piVar10;
                  piVar10 = (int *)((int)piVar10 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
            }
            else {
LAB_006d2188:
              if ((param_5 != piVar1[2]) || (param_3 != *piVar1)) goto cf_common_join_006D2041;
              if (param_4 == iVar3) {
LAB_006d244b:
                param_4 = piVar1[1];
              }
              else {
                if (iVar7 != iVar2) goto cf_common_join_006D2041;
                if (param_4 == iVar3) goto LAB_006d244b;
              }
              param_6 = param_6 + piVar1[3];
              *param_1 = *param_1 + -1;
              if (local_c < local_8 + -1) {
                piVar10 = piVar1 + 4;
                for (iVar5 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar5 != 0;
                    iVar5 = iVar5 + -1) {
                  *piVar1 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(char *)piVar1 = (char)*piVar10;
                  piVar10 = (int *)((int)piVar10 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
            }
            iVar5 = FUN_006d1ec0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            if (local_c < iVar5) {
              return local_c + 1;
            }
            return iVar5;
          }
          iVar8 = *piVar1;
          if (*piVar1 <= param_3) {
            iVar8 = param_3;
          }
          iVar11 = param_4;
          if (param_4 < iVar2) {
            iVar11 = iVar2;
          }
          iVar4 = iVar6;
          if (iVar5 < iVar6) {
            iVar4 = iVar5;
          }
          iVar4 = iVar4 - iVar8;
          iVar9 = iVar7;
          if (iVar3 < iVar7) {
            iVar9 = iVar3;
          }
          iVar9 = iVar9 - iVar11;
          if (iVar4 == param_5) {
            if (iVar4 == piVar1[2]) {
              iVar5 = piVar1[1];
              if (iVar5 < param_4) {
                param_4 = iVar5;
              }
              if (iVar7 < iVar3) {
                iVar7 = iVar3;
              }
              param_6 = iVar7 - param_4;
              if ((param_4 == iVar5) && (param_6 == piVar1[3])) {
                return 0;
              }
              if (local_c < local_8 + -1) {
                piVar10 = piVar1 + 4;
                for (iVar5 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar5 != 0;
                    iVar5 = iVar5 + -1) {
                  *piVar1 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(char *)piVar1 = (char)*piVar10;
                  piVar10 = (int *)((int)piVar10 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
              *param_1 = *param_1 + -1;
LAB_006d2232:
              iVar5 = FUN_006d1ec0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
              if (local_c < iVar5) {
                return local_c + 1;
              }
              return iVar5;
            }
            if (iVar11 == param_4) {
              param_4 = param_4 + iVar9;
              param_6 = param_6 - iVar9;
              bVar14 = param_6 < 0;
              bVar13 = param_6 == 0;
            }
            else {
              if (iVar3 < iVar7) goto cf_common_join_006D22C3;
              param_6 = param_6 - iVar9;
              bVar14 = param_6 < 0;
              bVar13 = param_6 == 0;
            }
LAB_006d2038:
            if (bVar13 || bVar14) {
              return 0;
            }
            goto cf_common_join_006D2041;
          }
          if (iVar9 == param_6) {
            if (iVar9 == piVar1[3]) {
              iVar3 = *piVar1;
              if (iVar3 < param_3) {
                param_3 = iVar3;
              }
              if (iVar6 < iVar5) {
                iVar6 = iVar5;
              }
              param_5 = iVar6 - param_3;
              if ((param_3 == iVar3) && (param_5 == piVar1[2])) {
                return 0;
              }
              if (local_c < local_8 + -1) {
                piVar10 = piVar1 + 4;
                for (iVar5 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar5 != 0;
                    iVar5 = iVar5 + -1) {
                  *piVar1 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar1 = piVar1 + 1;
                }
                for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(char *)piVar1 = (char)*piVar10;
                  piVar10 = (int *)((int)piVar10 + 1);
                  piVar1 = (int *)((int)piVar1 + 1);
                }
              }
              *param_1 = *param_1 + -1;
              goto LAB_006d2232;
            }
            if (iVar8 == param_3) {
              param_3 = param_3 + iVar4;
            }
            else if (iVar5 < iVar6) goto cf_common_join_006D22C3;
            param_5 = param_5 - iVar4;
            bVar14 = param_5 < 0;
            bVar13 = param_5 == 0;
            goto LAB_006d2038;
          }
          if (iVar4 == piVar1[2]) {
            if (iVar11 == iVar2) {
              iVar5 = piVar1[3] - iVar9;
              piVar1[1] = piVar1[1] + iVar9;
              piVar1[3] = iVar5;
            }
            else {
              if (iVar3 < iVar7) goto cf_common_join_006D22C3;
              iVar5 = piVar1[3] - iVar9;
              piVar1[3] = iVar5;
            }
LAB_006d20bc:
            if (0 < iVar5) goto cf_common_join_006D2041;
            if (local_10 <= local_c) goto LAB_006d2148;
            piVar10 = piVar1 + 4;
            piVar12 = piVar1;
            for (iVar5 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1
                ) {
              *piVar12 = *piVar10;
              piVar10 = piVar10 + 1;
              piVar12 = piVar12 + 1;
            }
            for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(char *)piVar12 = (char)*piVar10;
              piVar10 = (int *)((int)piVar10 + 1);
              piVar12 = (int *)((int)piVar12 + 1);
            }
            local_8 = local_8 + -1;
            local_10 = local_10 + -1;
            *param_1 = *param_1 + -1;
          }
          else {
            if (iVar9 != piVar1[3]) {
cf_common_join_006D22C3:
              param_6 = local_c + 1;
              if (param_4 < iVar11) {
                iVar2 = FUN_006d1ec0(param_1,param_2,param_3,param_4,param_5,iVar11 - param_4,
                                     param_7,param_8);
                if (iVar2 == -1) {
                  return -1;
                }
                if (iVar2 < param_6) {
                  param_6 = iVar2;
                }
              }
              if (iVar3 < iVar7) {
                iVar3 = FUN_006d1ec0(param_1,param_2,param_3,iVar3,param_5,iVar7 - iVar3,param_7,
                                     param_8);
                if (iVar3 == -1) {
                  return -1;
                }
                if (iVar3 < param_6) {
                  param_6 = iVar3;
                }
              }
              if (param_3 < iVar8) {
                iVar3 = FUN_006d1ec0(param_1,param_2,param_3,iVar11,iVar8 - param_3,iVar9,param_7,
                                     param_8);
                if (iVar3 == -1) {
                  return -1;
                }
                if (iVar3 < param_6) {
                  param_6 = iVar3;
                }
              }
              if (iVar5 < iVar6) {
                iVar5 = FUN_006d1ec0(param_1,param_2,iVar5,iVar11,iVar6 - iVar5,iVar9,param_7,
                                     param_8);
                if (iVar5 == -1) {
                  return -1;
                }
                if (iVar5 < param_6) {
                  return iVar5;
                }
              }
              return param_6;
            }
            if (iVar8 == *piVar1) {
              iVar5 = piVar1[2] - iVar4;
              *piVar1 = *piVar1 + iVar4;
              piVar1[2] = iVar5;
              goto LAB_006d20bc;
            }
            if (iVar5 < iVar6) goto cf_common_join_006D22C3;
            iVar4 = piVar1[2] - iVar4;
            piVar1[2] = iVar4;
            if (0 < iVar4) goto cf_common_join_006D2041;
            if (local_c < local_10) {
              piVar10 = piVar1 + 4;
              piVar12 = piVar1;
              for (iVar5 = ((local_8 - local_c) - 1U & 0xfffffff) << 2; iVar5 != 0;
                  iVar5 = iVar5 + -1) {
                *piVar12 = *piVar10;
                piVar10 = piVar10 + 1;
                piVar12 = piVar12 + 1;
              }
              for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(char *)piVar12 = (char)*piVar10;
                piVar10 = (int *)((int)piVar10 + 1);
                piVar12 = (int *)((int)piVar12 + 1);
              }
            }
LAB_006d2148:
            local_8 = local_8 + -1;
            local_10 = local_10 + -1;
            *param_1 = *param_1 + -1;
          }
        }
      } while (local_c < local_8);
    }
    if (local_8 < param_2) {
      *param_1 = *param_1 + 1;
      piVar1 = param_1 + local_8 * 4 + 2;
      *piVar1 = param_3;
      piVar1[1] = param_4;
      piVar1[2] = param_5;
      piVar1[3] = param_6;
      return *param_1;
    }
  }
  *param_1 = param_2 + 1;
  return -1;
}

