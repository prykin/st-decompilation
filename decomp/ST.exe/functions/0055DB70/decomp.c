
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_0055db70(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000004;

  if (PTR_008032a4 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecMemFree(in_stack_00000004,(uint *)&PTR_008032a4);
  }
  if (PTR_008032a8 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecMemFree(in_stack_00000004,(uint *)&PTR_008032a8);
  }
  if (PTR_008032ac != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecMemFree(in_stack_00000004,(uint *)&PTR_008032ac);
  }
  if (PTR_008032b0 != nullptr) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecMemFree(in_stack_00000004,(uint *)&PTR_008032b0);
  }
  return;
}

