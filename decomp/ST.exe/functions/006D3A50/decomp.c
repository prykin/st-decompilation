
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006d3a50(undefined2 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int local_8;

  if (0 < param_6) {
    local_8 = param_6;
    do {
      if (0 < param_5) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_5;
        puVar2 = param_1;
        do {
          puVar1 = (undefined2 *)(param_7 + (uint)*param_3 * 4);
          param_1 = (undefined2 *)((int)puVar2 + 3);
          param_3 = param_3 + 1;
          *puVar2 = *puVar1;
          *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -1;
          puVar2 = param_1;
        } while (param_6 != 0);
      }
      param_1 = (undefined2 *)((int)param_1 + param_2 + param_5 * -3);
      param_3 = param_3 + (param_4 - param_5);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

