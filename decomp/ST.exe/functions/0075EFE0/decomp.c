
void FUN_0075efe0(int *param_1,int *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = *(int *)(*(int *)((int)param_1 + 0x1ba) + 0x18);
  local_c = (int *)*param_2;
  local_8 = param_2[2];
  local_20 = param_2[3];
  local_14 = param_2[4];
  local_10 = (int *)param_2[1];
  local_18 = param_2[5];
  if ((int)local_c < (int)local_10) {
    if ((int)local_c <= (int)local_10) {
      local_28 = (int *)(iVar5 + (int)local_c * 4);
      param_1 = local_c;
      do {
        if (local_8 <= local_20) {
          psVar2 = (short *)(*local_28 + (local_8 * 0x20 + local_14) * 2);
          iVar8 = local_14;
          local_1c = local_8;
          psVar3 = psVar2;
          do {
            for (; iVar8 <= local_18; iVar8 = iVar8 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                local_c = param_1;
                *param_2 = (int)param_1;
                goto LAB_0075f0a7;
              }
            }
            psVar2 = psVar3 + 0x20;
            local_1c = local_1c + 1;
            iVar8 = local_14;
            psVar3 = psVar2;
          } while (local_1c <= local_20);
        }
        param_1 = (int *)((int)param_1 + 1);
        local_28 = local_28 + 1;
      } while ((int)param_1 <= (int)local_10);
    }
LAB_0075f0a7:
    if ((int)local_c < (int)local_10) {
      local_28 = (int *)(iVar5 + (int)local_10 * 4);
      param_1 = local_10;
      do {
        if (local_8 <= local_20) {
          psVar2 = (short *)(*local_28 + (local_8 * 0x20 + local_14) * 2);
          iVar8 = local_14;
          iVar7 = local_8;
          psVar3 = psVar2;
          do {
            for (; iVar8 <= local_18; iVar8 = iVar8 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                param_2[1] = (int)param_1;
                local_10 = param_1;
                goto LAB_0075f125;
              }
            }
            iVar7 = iVar7 + 1;
            psVar2 = psVar3 + 0x20;
            iVar8 = local_14;
            psVar3 = psVar2;
          } while (iVar7 <= local_20);
        }
        param_1 = (int *)((int)param_1 + -1);
        local_28 = local_28 + -1;
      } while ((int)local_c <= (int)param_1);
    }
  }
LAB_0075f125:
  if (local_8 < local_20) {
    if (local_8 <= local_20) {
      iVar8 = (local_8 * 0x20 + local_14) * 2;
      local_1c = local_8;
      do {
        param_1 = local_c;
        if ((int)local_c <= (int)local_10) {
          piVar6 = (int *)(iVar5 + (int)local_c * 4);
          do {
            psVar2 = (short *)(*piVar6 + iVar8);
            for (iVar7 = local_14; iVar7 <= local_18; iVar7 = iVar7 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                param_2[2] = local_1c;
                local_8 = local_1c;
                goto LAB_0075f1aa;
              }
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 1;
          } while ((int)param_1 <= (int)local_10);
        }
        iVar8 = iVar8 + 0x40;
        local_1c = local_1c + 1;
      } while (local_1c <= local_20);
    }
LAB_0075f1aa:
    if (local_8 < local_20) {
      iVar8 = (local_20 * 0x20 + local_14) * 2;
      local_1c = local_20;
      do {
        param_1 = local_c;
        if ((int)local_c <= (int)local_10) {
          piVar6 = (int *)(iVar5 + (int)local_c * 4);
          do {
            psVar2 = (short *)(iVar8 + *piVar6);
            for (iVar7 = local_14; iVar7 <= local_18; iVar7 = iVar7 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                local_20 = local_1c;
                param_2[3] = local_1c;
                goto LAB_0075f229;
              }
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 1;
          } while ((int)param_1 <= (int)local_10);
        }
        iVar8 = iVar8 + -0x40;
        local_1c = local_1c + -1;
      } while (local_8 <= local_1c);
    }
  }
LAB_0075f229:
  iVar8 = local_14;
  if (local_14 < local_18) {
    for (; iVar8 <= local_18; iVar8 = iVar8 + 1) {
      param_1 = local_c;
      if ((int)local_c <= (int)local_10) {
        piVar6 = (int *)(iVar5 + (int)local_c * 4);
        do {
          psVar2 = (short *)(*piVar6 + (local_8 * 0x20 + iVar8) * 2);
          for (iVar7 = local_8; iVar7 <= local_20; iVar7 = iVar7 + 1) {
            if (*psVar2 != 0) {
              param_2[4] = iVar8;
              local_14 = iVar8;
              goto LAB_0075f2a7;
            }
            psVar2 = psVar2 + 0x20;
          }
          param_1 = (int *)((int)param_1 + 1);
          piVar6 = piVar6 + 1;
        } while ((int)param_1 <= (int)local_10);
      }
    }
LAB_0075f2a7:
    iVar8 = local_18;
    if (local_14 < local_18) {
      do {
        param_1 = local_c;
        if ((int)local_c <= (int)local_10) {
          piVar6 = (int *)(iVar5 + (int)local_c * 4);
          do {
            psVar2 = (short *)((local_8 * 0x20 + iVar8) * 2 + *piVar6);
            for (iVar7 = local_8; iVar7 <= local_20; iVar7 = iVar7 + 1) {
              if (*psVar2 != 0) {
                param_2[5] = iVar8;
                local_18 = iVar8;
                goto LAB_0075f317;
              }
              psVar2 = psVar2 + 0x20;
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 1;
          } while ((int)param_1 <= (int)local_10);
        }
        iVar8 = iVar8 + -1;
      } while (local_14 <= iVar8);
    }
  }
LAB_0075f317:
  iVar4 = (local_18 - local_14) * 0x10;
  iVar8 = ((int)local_10 - (int)local_c) * 8;
  iVar7 = (local_20 - local_8) * 0xc;
  param_2[6] = iVar4 * iVar4 + iVar7 * iVar7 + iVar8 * iVar8;
  iVar8 = 0;
  if ((int)local_c <= (int)local_10) {
    local_24 = ((int)local_10 - (int)local_c) + 1;
    param_1 = (int *)(iVar5 + (int)local_c * 4);
    do {
      if (local_8 <= local_20) {
        psVar2 = (short *)(*param_1 + (local_8 * 0x20 + local_14) * 2);
        local_28 = (int *)((local_20 - local_8) + 1);
        do {
          if (local_14 <= local_18) {
            iVar5 = (local_18 - local_14) + 1;
            psVar3 = psVar2;
            do {
              if (*psVar3 != 0) {
                iVar8 = iVar8 + 1;
              }
              psVar3 = psVar3 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          psVar2 = psVar2 + 0x20;
          local_28 = (int *)((int)local_28 + -1);
        } while (local_28 != (int *)0x0);
      }
      param_1 = param_1 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    param_2[7] = iVar8;
    return;
  }
  param_2[7] = 0;
  return;
}

