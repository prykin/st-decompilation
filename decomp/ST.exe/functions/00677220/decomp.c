
/* [STPrototypeApplier] Propagated return.
   Evidence: 00677220 returns zeroed full register at 00677234 @ 00677237 */

uint FUN_00677220(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  DArrayTy *in_stack_00000010;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (in_stack_00000010 != (DArrayTy *)0x0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    Library::DKW::TBL::DArrayAppend(in_stack_00000010,&stack0x00000008);
  }
  return 0;
}

