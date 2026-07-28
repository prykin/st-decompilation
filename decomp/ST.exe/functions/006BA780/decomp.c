
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006BA780 @ 0056B235; data at 0080759C | 0056DB80 -> 006BA780 @ 0056E653;
   data at 0080759C | 005DCE90 -> 006BA780 @ 005DD063; data at 0080759C */

void FUN_006ba780(DDXContext *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1->field_000C = param_1->field_000C | 0x1000;
    return;
  }
  param_1->field_000C = param_1->field_000C & 0xffffefff;
  return;
}

