
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=7,
   ignored=7, unknown=0 */

void __cdecl FUN_0064a800(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != nullptr) {
    thunk_FUN_0064a7c0((undefined4 *)*param_1);
    FreeAndNull((void **)param_1);
  }
  return;
}

