
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   pointer:/int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=17,
   ignored=0, unknown=0 */

int * FUN_006bfb70(int param_1)

{
  int *piVar1;

  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = thunk_FUN_006a3be0(param_1);
  return piVar1;
}

