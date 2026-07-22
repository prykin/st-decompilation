
/* [STPrototypeApplier] Propagated return.
   Evidence: 0067FCA0 returns used as parameter 1 of FUN_00683780 @ 00683B20 | 0067FCA0 returns used
   as parameter 1 of FUN_00683780 @ 00685F71 */

AnonShape_00683780_11EA4E23 * __cdecl FUN_0067fca0(uint param_1)

{
  int *piVar1;
  AnonShape_00683780_11EA4E23 *pAVar2;

  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00848a38, param_1) (runtime stride) */
  if (((PTR_00848a38->count <= param_1) ||
      (piVar1 = (int *)(PTR_00848a38->elementSize * param_1 + (int)PTR_00848a38->data),
      piVar1 == (int *)0x0)) ||
     (pAVar2 = (AnonShape_00683780_11EA4E23 *)*piVar1, pAVar2 == (AnonShape_00683780_11EA4E23 *)0x0)
     ) {
    pAVar2 = (AnonShape_00683780_11EA4E23 *)0x0;
  }
  return pAVar2;
}

