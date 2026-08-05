
/* [STPrototypeApplier] Propagated return.
   Evidence: 00752060 returns return of KERNEL32.DLL::_llseek @ 00752075 */

LONG FUN_00752060(int param_1)

{
  LONG LVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  LVar1 = _llseek(*(HFILE *)(param_1 + 0x32),0,1);
  return LVar1;
}

