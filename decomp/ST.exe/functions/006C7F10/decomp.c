
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C7F10 -> 006B5B10 @ 006C7F4B | 006C7F10 -> 006B5B10 @ 006C7F86

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void FUN_006c7f10(RecoveredSourceFamily_dibcopy *param_1,int param_2,int *param_3,int param_4,
                 byte param_5)

{
  int *piVar1;
  int *piVar2;

  piVar1 = param_3;
  if (1 < param_4) {
    piVar2 = param_3 + 1;
    auto param_3_after_write = (int *)(param_4 + -1); /* compiler stack-slot lifetime split */
    do {
      FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,piVar2[-1],*piVar2,piVar2[1],
                   piVar2[2],param_5,0xd);
      piVar2 = piVar2 + 2;
      param_3_after_write = (int *)((int)param_3_after_write + -1);
    } while (param_3_after_write != nullptr);
  }
  FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,piVar1[param_4 * 2 + -2],
               piVar1[param_4 * 2 + -1],*piVar1,piVar1[1],param_5,0xd);
  return;
}

