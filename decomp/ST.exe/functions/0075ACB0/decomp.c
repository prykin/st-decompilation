
int FUN_0075acb0(AnonShape_0075ACB0_25ECA7C9 *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  AnonShape_0075ACB0_25ECA7C9 *pAVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;

  pAVar3 = param_1;
  iVar5 = param_1->field_019A;
  iVar1 = param_1->field_012E;
  while ((*(int *)&param_1->field_0x88 < *(int *)&param_1->field_0x90 ||
         ((*(int *)&param_1->field_0x88 == *(int *)&param_1->field_0x90 &&
          (*(uint *)&param_1->field_0x8c <= *(uint *)&param_1->field_0x94))))) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (*(code *)*param_1->field_01A2)(param_1);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = *(int *)&param_1->field_0xd0;
  local_18 = 0;
  if (0 < *(int *)&param_1->field_0x1c) {
    local_c = (undefined4 *)(iVar5 + 0x48);
    iVar5 = 4 - (int)param_2;
    piVar7 = param_2;
    do {
      if (*(int *)(iVar4 + 0x30) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        local_8 = (undefined4 *)
                  (**(code **)(*(int *)pAVar3 + 0x20))
                            (pAVar3,*local_c,*(int *)&pAVar3->field_0x94 * *(int *)(iVar4 + 0xc),
                             *(int *)(iVar4 + 0xc),0);
        if (*(uint *)&pAVar3->field_0x94 < iVar1 - 1U) {
          local_14 = *(uint *)(iVar4 + 0xc);
        }
        else {
          local_14 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0xc);
          if (local_14 == 0) {
            local_14 = *(uint *)(iVar4 + 0xc);
          }
        }
        pcVar2 = *(code **)(*(int *)&pAVar3[1].field_0x6 + iVar5 + (int)piVar7);
        param_2 = (int *)*piVar7;
        if (0 < (int)local_14) {
          do {
            iVar8 = 0;
            param_1 = (AnonShape_0075ACB0_25ECA7C9 *)*local_8;
            local_10 = 0;
            if (*(int *)(iVar4 + 0x1c) != 0) {
              do {
                (*pcVar2)(pAVar3,iVar4,param_1,param_2,iVar8);
                param_1 = (AnonShape_0075ACB0_25ECA7C9 *)&param_1->field_0x100;
                iVar8 = iVar8 + *(int *)(iVar4 + 0x24);
                local_10 = local_10 + 1;
              } while (local_10 < *(uint *)(iVar4 + 0x1c));
            }
            param_2 = param_2 + *(int *)(iVar4 + 0x24);
            local_8 = local_8 + 1;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
      }
      local_18 = local_18 + 1;
      local_c = local_c + 1;
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + 0x54;
    } while (local_18 < *(int *)&pAVar3->field_0x1c);
  }
  uVar6 = *(int *)&pAVar3->field_0x94 + 1;
  *(uint *)&pAVar3->field_0x94 = uVar6;
  return 4 - (uint)(uVar6 < (uint)pAVar3->field_012E);
}

