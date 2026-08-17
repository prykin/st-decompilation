
/* [STPrototypeApplier] Propagated return.
   Evidence: 00748B37 returns return of KERNEL32.DLL::InterlockedIncrement @ 00748B45 */

LONG FUN_00748b37(int param_1)

{
  LONG LVar1;

  /* ST_CALLSITE[00748B3F]: CALL dword ptr [0x0085bc78] */
  LVar1 = InterlockedIncrement((LONG *)(param_1 + 0x44));
  return LVar1;
}

