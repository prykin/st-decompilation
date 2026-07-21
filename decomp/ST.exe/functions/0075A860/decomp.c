
undefined4 FUN_0075a860(AnonShape_0075A860_7232E9BC *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;

  iVar1 = param_1->field_012E;
  iVar2 = param_1->field_019A;
  uVar9 = param_1->field_014A - 1;
  iVar8 = *(int *)(iVar2 + 0x18);
  if (iVar8 < *(int *)(iVar2 + 0x1c)) {
    do {
      for (uVar7 = *(uint *)(iVar2 + 0x14); uVar7 <= uVar9; uVar7 = uVar7 + 1) {
        FUN_00759f30(*(undefined4 **)(iVar2 + 0x20),
                     (AnonShape_0075FEE0_E0ABA202 *)(param_1->field_0152 << 8));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)(param_1->field_01AA + 4))(param_1,iVar2 + 0x20);
        if (iVar6 == 0) {
          *(int *)(iVar2 + 0x18) = iVar8;
          *(uint *)(iVar2 + 0x14) = uVar7;
          return 0;
        }
        iVar6 = 0;
        local_10 = 0;
        local_30 = 0;
        if (0 < param_1->field_0136) {
          local_18 = (int *)&param_1->field_0x13a;
          local_1c = param_2;
          do {
            iVar3 = *local_18;
            if (*(int *)(iVar3 + 0x30) == 0) {
              iVar6 = iVar6 + *(int *)(iVar3 + 0x3c);
              local_10 = iVar6;
            }
            else {
              pcVar4 = *(code **)(param_1->field_01AE + 4 + *(int *)(iVar3 + 4) * 4);
              if (uVar7 < uVar9) {
                local_24 = *(int *)(iVar3 + 0x34);
              }
              else {
                local_24 = *(int *)(iVar3 + 0x44);
              }
              iVar5 = *(int *)(iVar3 + 0x40);
              local_14 = *local_1c + *(int *)(iVar3 + 0x24) * iVar8 * 4;
              local_2c = 0;
              if (0 < *(int *)(iVar3 + 0x38)) {
                do {
                  if ((((uint)param_1->field_008C < iVar1 - 1U) ||
                      (iVar8 + local_2c < *(int *)(iVar3 + 0x48))) && (0 < local_24)) {
                    local_28 = local_24;
                    puVar10 = (undefined4 *)(iVar2 + 0x20 + iVar6 * 4);
                    iVar11 = iVar5 * uVar7;
                    do {
                      (*pcVar4)(param_1,iVar3,*puVar10,local_14,iVar11);
                      iVar11 = iVar11 + *(int *)(iVar3 + 0x24);
                      puVar10 = puVar10 + 1;
                      local_28 = local_28 + -1;
                      iVar6 = local_10;
                    } while (local_28 != 0);
                  }
                  iVar6 = iVar6 + *(int *)(iVar3 + 0x34);
                  local_2c = local_2c + 1;
                  local_14 = local_14 + *(int *)(iVar3 + 0x24) * 4;
                  local_10 = iVar6;
                } while (local_2c < *(int *)(iVar3 + 0x38));
              }
            }
            local_18 = local_18 + 1;
            local_1c = local_1c + 1;
            local_30 = local_30 + 1;
          } while (local_30 < param_1->field_0136);
        }
      }
      iVar8 = iVar8 + 1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
    } while (iVar8 < *(int *)(iVar2 + 0x1c));
  }
  uVar9 = param_1->field_008C + 1;
  param_1->field_0094 = param_1->field_0094 + 1;
  param_1->field_008C = uVar9;
  if (uVar9 < (uint)param_1->field_012E) {
    FUN_0075a7a0((AnonShape_0075A7A0_BCCC082B *)param_1);
    return 3;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(param_1->field_01A2 + 0xc))(param_1);
  return 4;
}

