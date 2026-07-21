
void FUN_006accd0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  AnonShape_006CE700_F21E5976 *pAVar2;
  AnonShape_006CE700_6E2936C3 *pAVar3;
  AnonShape_006CE700_6E2936C3 *pAVar4;
  int iVar5;
  AnonShape_006CE700_6E2936C3 *pAVar6;
  AnonShape_006CE700_6E2936C3 *pAVar7;
  AnonShape_006CE700_6E2936C3 *pAVar8;
  AnonShape_006CE700_F21E5976 *pAVar9;
  undefined4 local_fc;
  undefined4 local_f8 [59];
  undefined4 *local_c;
  AnonShape_006CE700_6E2936C3 *local_8;

  pAVar3 = (AnonShape_006CE700_6E2936C3 *)param_1;
  if (1 < (int)param_2) {
    pAVar4 = (AnonShape_006CE700_6E2936C3 *)((int)param_2 * param_3 + (int)param_1);
    param_2 = &local_fc;
    local_c = local_f8;
    param_1 = (undefined4 *)0x0;
cf_continue_loop_006ACD0D:
    local_8 = pAVar4;
    pAVar7 = pAVar3;
    pAVar8 = local_8;
    iVar5 = ((int)local_8 - (int)pAVar7) / param_3;
    if (7 < iVar5) {
      FUN_006ce700(pAVar7,(AnonShape_006CE700_F21E5976 *)
                          (&pAVar7->field_0x0 + (iVar5 / 2) * param_3),param_3);
      pAVar6 = pAVar7;
cf_continue_loop_006ACD37:
      pAVar6 = (AnonShape_006CE700_6E2936C3 *)(&pAVar6->field_0x0 + param_3);
      if (pAVar6 < local_8) goto code_r0x006acd43;
      goto LAB_006acd4f;
    }
    for (pAVar9 = (AnonShape_006CE700_F21E5976 *)((int)local_8 - param_3); local_8 = pAVar7,
        pAVar2 = (AnonShape_006CE700_F21E5976 *)pAVar7, pAVar7 < pAVar9;
        pAVar9 = (AnonShape_006CE700_F21E5976 *)((int)pAVar9 - param_3)) {
      while (pAVar2 = (AnonShape_006CE700_F21E5976 *)(&pAVar2->field_0x0 + param_3),
            pAVar2 <= pAVar9) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)param_4)(pAVar2,local_8);
        if (0 < iVar5) {
          local_8 = (AnonShape_006CE700_6E2936C3 *)pAVar2;
        }
      }
      FUN_006ce700(local_8,pAVar9,param_3);
    }
    if (0 < (int)param_1) {
      param_1 = (undefined4 *)((int)param_1 + -1);
      puVar1 = local_c + -2;
      param_2 = param_2 + -2;
      local_c = local_c + -2;
      pAVar3 = (AnonShape_006CE700_6E2936C3 *)*param_2;
      pAVar4 = (AnonShape_006CE700_6E2936C3 *)*puVar1;
      goto cf_continue_loop_006ACD0D;
    }
  }
  return;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
code_r0x006acd43:
  iVar5 = (*(code *)param_4)(pAVar6,pAVar7);
  if (iVar5 < 1) goto cf_continue_loop_006ACD37;
LAB_006acd4f:
  do {
    pAVar8 = (AnonShape_006CE700_6E2936C3 *)((int)pAVar8 - param_3);
    if (pAVar8 <= pAVar7) break;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (*(code *)param_4)(pAVar8,pAVar7);
  } while (-1 < iVar5);
  if (pAVar6 <= pAVar8) {
    FUN_006ce700(pAVar6,(AnonShape_006CE700_F21E5976 *)pAVar8,param_3);
    goto cf_continue_loop_006ACD37;
  }
  FUN_006ce700(pAVar7,(AnonShape_006CE700_F21E5976 *)pAVar8,param_3);
  pAVar3 = pAVar7;
  pAVar4 = pAVar8;
  if (((AnonShape_006CE700_6E2936C3 *)(&pAVar6->field_0x0 + param_3) < local_8) &&
     (pAVar3 = pAVar6, pAVar4 = local_8,
     (AnonShape_006CE700_F21E5976 *)(&pAVar7->field_0x0 + param_3) < pAVar8)) {
    if ((int)pAVar8 - (int)pAVar7 < (int)local_8 - (int)pAVar6) {
      *param_2 = pAVar6;
      param_2 = param_2 + 2;
      *local_c = local_8;
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_c = local_c + 2;
      pAVar3 = pAVar7;
      pAVar4 = pAVar8;
    }
    else {
      *param_2 = pAVar7;
      param_2 = param_2 + 2;
      *local_c = pAVar8;
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_c = local_c + 2;
      pAVar4 = local_8;
    }
  }
  goto cf_continue_loop_006ACD0D;
}

