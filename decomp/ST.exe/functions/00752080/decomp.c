
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00752080 -> EXTERNAL:0000000E @ 00752090

   [STPrototypeApplier] Propagated return.
   Evidence: 00752080 returns return of KERNEL32.DLL::_llseek @ 00752097 */

LONG FUN_00752080(int param_1,LONG lOffset)

{
  LONG LVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  LVar1 = _llseek(*(HFILE *)(param_1 + 0x32),lOffset,0);
  return LVar1;
}

