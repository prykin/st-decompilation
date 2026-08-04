
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void FUN_006accd0(undefined4 *param_1,undefined4 *param_2,int param_3,callback_006ACCD0_p3 *param_4)

{
  undefined4 *puVar1;
  AnonShape_006CE700_F21E5976 *arg_1;
  AnonShape_006CE700_6E2936C3 *pAVar2;
  AnonShape_006CE700_6E2936C3 *pAVar3;
  int iVar4;
  AnonShape_006CE700_6E2936C3 *arg_1_00;
  AnonShape_006CE700_6E2936C3 *arg_2;
  AnonShape_006CE700_6E2936C3 *arg_1_01;
  AnonShape_006CE700_F21E5976 *pAVar5;
  undefined4 local_fc;
  undefined4 local_f8 [59];
  undefined4 *local_c;
  AnonShape_006CE700_6E2936C3 *local_8;

  pAVar2 = (AnonShape_006CE700_6E2936C3 *)param_1;
  if (1 < (int)param_2) {
    pAVar3 = (AnonShape_006CE700_6E2936C3 *)((int)param_2 * param_3 + (int)param_1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = &local_fc;
    local_c = local_f8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
cf_continue_loop_006ACD0D:
    local_8 = pAVar3;
    arg_2 = pAVar2;
    arg_1_01 = local_8;
    iVar4 = ((int)local_8 - (int)arg_2) / param_3;
    if (7 < iVar4) {
      FUN_006ce700(arg_2,(AnonShape_006CE700_F21E5976 *)(&arg_2->field_0x0 + (iVar4 / 2) * param_3),
                   param_3);
      arg_1_00 = arg_2;
cf_continue_loop_006ACD37:
      arg_1_00 = (AnonShape_006CE700_6E2936C3 *)(&arg_1_00->field_0x0 + param_3);
      if (arg_1_00 < local_8) goto code_r0x006acd43;
      goto LAB_006acd4f;
    }
    for (pAVar5 = (AnonShape_006CE700_F21E5976 *)((int)local_8 - param_3); local_8 = arg_2,
        arg_1 = (AnonShape_006CE700_F21E5976 *)arg_2, arg_2 < pAVar5;
        pAVar5 = (AnonShape_006CE700_F21E5976 *)((int)pAVar5 - param_3)) {
      while (arg_1 = (AnonShape_006CE700_F21E5976 *)(&arg_1->field_0x0 + param_3), arg_1 <= pAVar5)
      {
        iVar4 = (*param_4)(arg_1,local_8);
        if (0 < iVar4) {
          local_8 = (AnonShape_006CE700_6E2936C3 *)arg_1;
        }
      }
      FUN_006ce700(local_8,pAVar5,param_3);
    }
    if (0 < (int)param_1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (undefined4 *)((int)param_1 + -1);
      puVar1 = local_c + -2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + -2;
      local_c = local_c + -2;
      pAVar2 = (AnonShape_006CE700_6E2936C3 *)*param_2;
      pAVar3 = (AnonShape_006CE700_6E2936C3 *)*puVar1;
      goto cf_continue_loop_006ACD0D;
    }
  }
  return;
code_r0x006acd43:
  iVar4 = (*param_4)(arg_1_00,arg_2);
  if (iVar4 < 1) goto cf_continue_loop_006ACD37;
LAB_006acd4f:
  do {
    arg_1_01 = (AnonShape_006CE700_6E2936C3 *)((int)arg_1_01 - param_3);
    if (arg_1_01 <= arg_2) break;
    iVar4 = (*param_4)(arg_1_01,arg_2);
  } while (-1 < iVar4);
  if (arg_1_00 <= arg_1_01) {
    FUN_006ce700(arg_1_00,(AnonShape_006CE700_F21E5976 *)arg_1_01,param_3);
    goto cf_continue_loop_006ACD37;
  }
  FUN_006ce700(arg_2,(AnonShape_006CE700_F21E5976 *)arg_1_01,param_3);
  pAVar2 = arg_2;
  pAVar3 = arg_1_01;
  if (((AnonShape_006CE700_6E2936C3 *)(&arg_1_00->field_0x0 + param_3) < local_8) &&
     (pAVar2 = arg_1_00, pAVar3 = local_8,
     (AnonShape_006CE700_F21E5976 *)(&arg_2->field_0x0 + param_3) < arg_1_01)) {
    if ((int)arg_1_01 - (int)arg_2 < (int)local_8 - (int)arg_1_00) {
      *param_2 = arg_1_00;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 2;
      *local_c = local_8;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_c = local_c + 2;
      pAVar2 = arg_2;
      pAVar3 = arg_1_01;
    }
    else {
      *param_2 = arg_2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 2;
      *local_c = arg_1_01;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_c = local_c + 2;
      pAVar3 = local_8;
    }
  }
  goto cf_continue_loop_006ACD0D;
}

