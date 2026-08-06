
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   pointer:/int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=25,
   ignored=0, unknown=0

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00561670 -> 006BFB50 @ 00561810; return of FUN_006bfb70 | 006A64E0 -> 006BFB50 @
   006A6605; return of FUN_006bfb70 | 006A6F00 -> 006BFB50 @ 006A7000; return of FUN_006bfb70 |
   006AB090 -> 006BFB50 @ 006AB269; return of FUN_006bfb70 */

int * FUN_006bfb50(int *param_1,uint param_2)

{
  int *piVar1;

  if (param_2 == 0) {
    param_2 = 1;
  }
  piVar1 = thunk_FUN_006a4130(param_1,param_2);
  return piVar1;
}

