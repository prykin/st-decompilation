
/* [STPrototypeApplier] Propagated return.
   Evidence: 006D61C0 returns return of FUN_00748b37 @ 006D61D3 */

LONG FUN_006d61c0(int param_1)

{
  int *piVar1;
  LONG LVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x18) + 0x68);
  *piVar1 = *piVar1 + 1;
  LVar2 = FUN_00748b37(param_1);
  return LVar2;
}

