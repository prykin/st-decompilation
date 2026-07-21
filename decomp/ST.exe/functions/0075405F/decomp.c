
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void FUN_0075405f(void)

{
  undefined1 *puVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined1 in_AL;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar1 = *(undefined1 **)(unaff_EBP + 0x48);
  *(int *)(unaff_EBP + 0x48) = *(int *)(unaff_EBP + 0x48) + 1;
  *puVar1 = in_AL;
  return;
}

