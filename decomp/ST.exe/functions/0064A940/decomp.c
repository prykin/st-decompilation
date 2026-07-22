
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00671F10 -> 0064A940 @ 00672079 */

undefined4 __cdecl FUN_0064a940(int *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= param_1[1])) {
    param_1[1] = param_2;
    return 1;
  }
  return 0;
}

