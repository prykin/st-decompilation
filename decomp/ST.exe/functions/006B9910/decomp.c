
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006736F0 -> 006B9910 @ 00673830 | 006B7190 -> 006B9910 @ 006B723F */

void FUN_006b9910(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;

  *(undefined4 *)param_2 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    for (piVar2 = (int *)*piVar1; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      piVar1 = piVar2;
    }
    *piVar1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

