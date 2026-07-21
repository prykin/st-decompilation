
undefined4 FUN_0075aab0(AnonShape_0075AAB0_12234AD6 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;

  iVar7 = param_1->field_019A;
  local_8 = 0;
  local_24 = iVar7;
  if (0 < param_1->field_0136) {
    local_1c = local_38;
    local_10 = (int *)&param_1->field_0x13a;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(*local_10 + 0xc);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)param_1 + 0x20))
                        (param_1,*(undefined4 *)(iVar7 + 0x48 + *(int *)(*local_10 + 4) * 4),
                         *(int *)&param_1->field_0x8c * iVar1,iVar1,1);
      piVar6 = local_10 + 1;
      *local_1c = iVar1;
      local_1c = local_1c + 1;
      local_8 = local_8 + 1;
      local_10 = piVar6;
    } while (local_8 < param_1->field_0136);
  }
  local_c = *(int *)(iVar7 + 0x18);
  if (local_c < *(int *)(iVar7 + 0x1c)) {
    do {
      local_10 = *(int **)(iVar7 + 0x14);
      if (local_10 < param_1->field_014A) {
        do {
          iVar1 = 0;
          local_8 = 0;
          if (0 < param_1->field_0136) {
            local_1c = local_38;
            local_18 = (int *)&param_1->field_0x13a;
            do {
              local_20 = 0;
              iVar7 = *local_18;
              iVar3 = *(int *)(iVar7 + 0x34);
              if (0 < *(int *)(iVar7 + 0x38)) {
                local_28 = iVar3 * (int)local_10 * 0x100;
                local_14 = (int *)(*local_1c + local_c * 4);
                do {
                  iVar2 = local_28 + *local_14;
                  iVar4 = 0;
                  if (0 < iVar3) {
                    piVar6 = (int *)(local_24 + 0x20 + iVar1 * 4);
                    do {
                      *piVar6 = iVar2;
                      iVar3 = *(int *)(iVar7 + 0x34);
                      iVar1 = iVar1 + 1;
                      piVar6 = piVar6 + 1;
                      iVar2 = iVar2 + 0x100;
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < iVar3);
                  }
                  local_14 = local_14 + 1;
                  local_20 = local_20 + 1;
                } while (local_20 < *(int *)(iVar7 + 0x38));
              }
              local_18 = local_18 + 1;
              local_1c = local_1c + 1;
              local_8 = local_8 + 1;
              iVar7 = local_24;
            } while (local_8 < param_1->field_0136);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar1 = (**(code **)(param_1->field_01AA + 4))(param_1,iVar7 + 0x20);
          if (iVar1 == 0) {
            *(int *)(iVar7 + 0x18) = local_c;
            *(int **)(iVar7 + 0x14) = local_10;
            return 0;
          }
          local_10 = (int *)((int)local_10 + 1);
        } while (local_10 < param_1->field_014A);
      }
      local_c = local_c + 1;
      *(undefined4 *)(iVar7 + 0x14) = 0;
    } while (local_c < *(int *)(iVar7 + 0x1c));
  }
  uVar5 = *(int *)&param_1->field_0x8c + 1;
  *(uint *)&param_1->field_0x8c = uVar5;
  if (param_1->field_012E <= uVar5) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(param_1->field_01A2 + 0xc))(param_1);
    return 4;
  }
  FUN_0075a7a0((AnonShape_0075A7A0_BCCC082B *)param_1);
  return 3;
}

