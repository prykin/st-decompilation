
void FUN_0075e980(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_428 [256];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar7 = param_3;
  iVar3 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(int *)(param_1 + 0x7c);
  local_20 = (int)param_3 * 2 + 0x1c >> 1;
  local_8 = 0x7fffffff;
  param_1 = 0;
  local_28 = param_2 * 2 + 0x18 >> 1;
  local_24 = param_4 * 2 + 0x18 >> 1;
  if (0 < local_c) {
    piVar1 = *(int **)(iVar3 + 0x80);
    param_3 = local_428;
    local_18 = *piVar1;
    local_10 = piVar1[1];
    local_14 = piVar1[2];
    do {
      uVar2 = (uint)*(byte *)(local_18 + param_1);
      if ((int)uVar2 < param_2) {
        iVar6 = (uVar2 - param_2) * (uVar2 - param_2);
        iVar5 = param_2 + 0x18;
LAB_0075ea13:
        iVar3 = iVar5;
      }
      else {
        iVar3 = param_2 + 0x18;
        iVar5 = param_2;
        if (iVar3 < (int)uVar2) {
          iVar6 = (uVar2 - iVar3) * (uVar2 - iVar3);
          goto LAB_0075ea13;
        }
        iVar6 = 0;
        if (local_28 < (int)uVar2) goto LAB_0075ea13;
      }
      uVar4 = (uint)*(byte *)(local_10 + param_1);
      if ((int)uVar4 < (int)piVar7) {
        iVar5 = (uVar4 - (int)piVar7) * 3;
        iVar6 = iVar6 + iVar5 * iVar5;
        iVar5 = uVar4 - (int)(piVar7 + 7);
      }
      else {
        piVar1 = piVar7 + 7;
        if ((int)piVar1 < (int)uVar4) {
          iVar5 = (uVar4 - (int)piVar1) * 3;
          iVar6 = iVar6 + iVar5 * iVar5;
        }
        else if ((int)uVar4 <= local_20) {
          iVar5 = uVar4 - (int)piVar1;
          goto LAB_0075ea6d;
        }
        iVar5 = uVar4 - (int)piVar7;
      }
LAB_0075ea6d:
      uVar4 = (uint)*(byte *)(local_14 + param_1);
      if ((int)uVar4 < param_4) {
        iVar8 = (uVar4 - param_4) * 2;
        iVar6 = iVar6 + iVar8 * iVar8;
        local_1c = uVar4 - (param_4 + 0x18);
      }
      else {
        local_1c = param_4 + 0x18;
        if (local_1c < (int)uVar4) {
          iVar8 = (uVar4 - local_1c) * 2;
          iVar6 = iVar6 + iVar8 * iVar8;
        }
        else if ((int)uVar4 <= local_24) {
          local_1c = uVar4 - local_1c;
          goto LAB_0075eac8;
        }
        local_1c = uVar4 - param_4;
      }
LAB_0075eac8:
      iVar3 = (uVar2 - iVar3) * (uVar2 - iVar3) + iVar5 * 3 * iVar5 * 3 +
              local_1c * 2 * local_1c * 2;
      *param_3 = iVar6;
      if (iVar3 < local_8) {
        local_8 = iVar3;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 < local_c);
  }
  iVar3 = 0;
  iVar5 = 0;
  if (0 < local_c) {
    piVar7 = local_428;
    do {
      if (*piVar7 <= local_8) {
        *(char *)(iVar3 + param_5) = (char)iVar5;
        iVar3 = iVar3 + 1;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < local_c);
  }
  return;
}

