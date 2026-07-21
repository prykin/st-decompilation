
undefined4 FUN_0075ae60(undefined4 *param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;

  puVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar7 = *(int *)((int)param_1 + 0x19a);
  local_10 = 0;
  if ((param_1[0x35] == 0) || (param_1[0x26] == 0)) {
    return 0;
  }
  if (*(int *)(iVar7 + 0x70) == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)*param_1)(param_1,1,param_1[7] * 0x18);
    *(undefined4 *)(iVar7 + 0x70) = uVar3;
  }
  iVar7 = *(int *)(iVar7 + 0x70);
  local_c = 0;
  if (0 < (int)param_1[7]) {
    local_8 = (undefined4 *)(param_1[0x34] + 0x4c);
    param_1 = (undefined4 *)0x0;
    do {
      psVar1 = (short *)*local_8;
      if (psVar1 == (short *)0x0) {
        return 0;
      }
      if (*psVar1 == 0) {
        return 0;
      }
      if (psVar1[1] == 0) {
        return 0;
      }
      if (psVar1[8] == 0) {
        return 0;
      }
      if (psVar1[0x10] == 0) {
        return 0;
      }
      if (psVar1[9] == 0) {
        return 0;
      }
      if (psVar1[2] == 0) {
        return 0;
      }
      piVar4 = (int *)(puVar2[0x26] + (int)param_1);
      if (*piVar4 < 0) {
        return 0;
      }
      iVar6 = iVar7 - (int)piVar4;
      iVar5 = 5;
      do {
        piVar4 = piVar4 + 1;
        *(int *)(iVar6 + (int)piVar4) = *piVar4;
        if (*piVar4 != 0) {
          local_10 = 1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar7 = iVar7 + 0x18;
      local_c = local_c + 1;
      param_1 = param_1 + 0x40;
      local_8 = local_8 + 0x15;
    } while (local_c < (int)puVar2[7]);
  }
  return local_10;
}

