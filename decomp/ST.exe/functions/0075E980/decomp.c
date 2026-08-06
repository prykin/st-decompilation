
void FUN_0075e980(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
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
  int *piVar7;

  piVar7 = param_3;
  iVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(int *)(param_1 + 0x7c);
  local_20 = (int)param_3 * 2 + 0x1c >> 1;
  local_8 = 0x7fffffff;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = 0;
  local_28 = param_2 * 2 + 0x18 >> 1;
  local_24 = param_4 * 2 + 0x18 >> 1;
  if (0 < local_c) {
    piVar6 = *(int **)(iVar2 + 0x80);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = local_428;
    local_18 = *piVar6;
    local_10 = piVar6[1];
    local_14 = piVar6[2];
    do {
      uVar1 = (uint)*(byte *)(local_18 + param_1);
      if ((int)uVar1 < param_2) {
        iVar5 = (uVar1 - param_2) * (uVar1 - param_2);
        iVar4 = param_2 + 0x18;
LAB_0075ea13:
        iVar2 = iVar4;
      }
      else {
        iVar2 = param_2 + 0x18;
        iVar4 = param_2;
        if (iVar2 < (int)uVar1) {
          iVar5 = (uVar1 - iVar2) * (uVar1 - iVar2);
          goto LAB_0075ea13;
        }
        iVar5 = 0;
        if (local_28 < (int)uVar1) goto LAB_0075ea13;
      }
      uVar3 = (uint)*(byte *)(local_10 + param_1);
      if ((int)uVar3 < (int)piVar7) {
        iVar4 = (uVar3 - (int)piVar7) * 3;
        iVar5 = iVar5 + iVar4 * iVar4;
        iVar4 = uVar3 - (int)(piVar7 + 7);
      }
      else {
        piVar6 = piVar7 + 7;
        if ((int)piVar6 < (int)uVar3) {
          iVar4 = (uVar3 - (int)piVar6) * 3;
          iVar5 = iVar5 + iVar4 * iVar4;
        }
        else if ((int)uVar3 <= local_20) {
          iVar4 = uVar3 - (int)piVar6;
          goto LAB_0075ea6d;
        }
        iVar4 = uVar3 - (int)piVar7;
      }
LAB_0075ea6d:
      uVar3 = (uint)*(byte *)(local_14 + param_1);
      if ((int)uVar3 < param_4) {
        iVar7 = (uVar3 - param_4) * 2;
        iVar5 = iVar5 + iVar7 * iVar7;
        local_1c = uVar3 - (param_4 + 0x18);
      }
      else {
        local_1c = param_4 + 0x18;
        if (local_1c < (int)uVar3) {
          iVar7 = (uVar3 - local_1c) * 2;
          iVar5 = iVar5 + iVar7 * iVar7;
        }
        else if ((int)uVar3 <= local_24) {
          local_1c = uVar3 - local_1c;
          goto LAB_0075eac8;
        }
        local_1c = uVar3 - param_4;
      }
LAB_0075eac8:
      iVar2 = (uVar1 - iVar2) * (uVar1 - iVar2) + iVar4 * 3 * iVar4 * 3 +
              local_1c * 2 * local_1c * 2;
      *param_3 = iVar5;
      if (iVar2 < local_8) {
        local_8 = iVar2;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
    } while (param_1 < local_c);
  }
  iVar2 = 0;
  iVar4 = 0;
  if (0 < local_c) {
    piVar6 = local_428;
    do {
      if (*piVar6 <= local_8) {
        *(char *)(iVar2 + param_5) = (char)iVar4;
        iVar2 = iVar2 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < local_c);
  }
  return;
}

