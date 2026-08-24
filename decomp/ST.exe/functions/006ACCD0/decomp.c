#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0040EB90 -> 006ACCD0 @ 0040EF61; data at 007F4D3C */

void FUN_006accd0(RuntimeRecord_007F4D3C_0014 *param_1,undefined4 *param_2,int param_3,
                 callback_006ACCD0_p3 *param_4)

{
  uint *puVar1;
  int *piVar2;
  RuntimeRecord_007F4D3C_0014 *pRVar3;
  int iVar4;
  RuntimeRecord_007F4D3C_0014 *arg_1;
  RuntimeRecord_007F4D3C_0014 *arg_2;
  RuntimeRecord_007F4D3C_0014 *pRVar4_mg0;
  RuntimeRecord_007F4D3C_0014 *pRVar5_mg1;
  undefined4 local_fc;
  uint local_f8 [59];
  uint *local_c;
  RuntimeRecord_007F4D3C_0014 *local_8;
  RuntimeRecord_007F4D3C_0014 *pRVar5_mg0;

  pRVar5_mg0 = param_1;
  if (1 < (int)param_2) {
    iVar4 = (int)param_2 * param_3;
    piVar2 = &param_1->field_0000;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = &local_fc;
    local_c = local_f8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    pRVar3 = (RuntimeRecord_007F4D3C_0014 *)((int)piVar2 + iVar4);
cf_continue_loop_006ACD0D:
    local_8 = pRVar3;
    arg_2 = pRVar5_mg0;
    pRVar4_mg0 = local_8;
    iVar4 = ((int)local_8 - (int)arg_2) / param_3;
    if (7 < iVar4) {
      FUN_006ce700((byte *)arg_2,(byte *)((int)&arg_2->field_0000 + (iVar4 / 2) * param_3),param_3);
      arg_1 = arg_2;
cf_continue_loop_006ACD37:
      arg_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&arg_1->field_0000 + param_3);
      if (arg_1 < local_8) goto code_r0x006acd43;
      goto LAB_006acd4f;
    }
    for (pRVar5_mg1 = (RuntimeRecord_007F4D3C_0014 *)((int)local_8 - param_3); local_8 = arg_2,
        pRVar3 = arg_2, arg_2 < pRVar5_mg1;
        pRVar5_mg1 = (RuntimeRecord_007F4D3C_0014 *)((int)pRVar5_mg1 - param_3)) {
      while (pRVar3 = (RuntimeRecord_007F4D3C_0014 *)((int)&pRVar3->field_0000 + param_3),
            pRVar3 <= pRVar5_mg1) {
        /* ST_CALLSITE[006ACE0C]: CALL dword ptr [EBP + 0x14] */
        iVar4 = (*param_4)(pRVar3,local_8);
        if (0 < iVar4) {
          local_8 = pRVar3;
        }
      }
      FUN_006ce700((byte *)local_8,(byte *)pRVar5_mg1,param_3);
    }
    if (0 < (int)param_1) {
      param_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&param_1[-1].field_0010 + 3);
      puVar1 = local_c + -2;
      param_2 = param_2 + -2;
      local_c = local_c + -2;
      pRVar5_mg0 = (RuntimeRecord_007F4D3C_0014 *)*param_2;
      pRVar3 = (RuntimeRecord_007F4D3C_0014 *)*puVar1;
      goto cf_continue_loop_006ACD0D;
    }
  }
  return;
code_r0x006acd43:
  /* ST_CALLSITE[006ACD45]: CALL dword ptr [EBP + 0x14] */
  iVar4 = (*param_4)(arg_1,arg_2);
  if (iVar4 < 1) goto cf_continue_loop_006ACD37;
LAB_006acd4f:
  do {
    pRVar4_mg0 = (RuntimeRecord_007F4D3C_0014 *)((int)pRVar4_mg0 - param_3);
    if (pRVar4_mg0 <= arg_2) break;
    /* ST_CALLSITE[006ACD58]: CALL dword ptr [EBP + 0x14] */
    iVar4 = (*param_4)(pRVar4_mg0,arg_2);
  } while (-1 < iVar4);
  if (arg_1 <= pRVar4_mg0) {
    FUN_006ce700((byte *)arg_1,(byte *)pRVar4_mg0,param_3);
    goto cf_continue_loop_006ACD37;
  }
  FUN_006ce700((byte *)arg_2,(byte *)pRVar4_mg0,param_3);
  pRVar5_mg0 = arg_2;
  pRVar3 = pRVar4_mg0;
  if (((RuntimeRecord_007F4D3C_0014 *)((int)&arg_1->field_0000 + param_3) < local_8) &&
     (pRVar5_mg0 = arg_1, pRVar3 = local_8,
     (RuntimeRecord_007F4D3C_0014 *)((int)&arg_2->field_0000 + param_3) < pRVar4_mg0)) {
    if ((int)pRVar4_mg0 - (int)arg_2 < (int)local_8 - (int)arg_1) {
      *param_2 = arg_1;
      param_2 = param_2 + 2;
      *local_c = local_8;
      param_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&param_1->field_0000 + 1);
      local_c = local_c + 2;
      pRVar5_mg0 = arg_2;
      pRVar3 = pRVar4_mg0;
    }
    else {
      *param_2 = arg_2;
      param_2 = param_2 + 2;
      *local_c = pRVar4_mg0;
      param_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&param_1->field_0000 + 1);
      local_c = local_c + 2;
      pRVar3 = local_8;
    }
  }
  goto cf_continue_loop_006ACD0D;
}

