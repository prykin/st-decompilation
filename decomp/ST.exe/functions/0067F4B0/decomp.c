
undefined4 __cdecl FUN_0067f4b0(uint param_1)

{
  undefined4 *puVar1;

  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00848a28, param_1) (runtime stride) */
  if ((param_1 < PTR_00848a28->count) &&
     (puVar1 = (undefined4 *)(PTR_00848a28->elementSize * param_1 + (int)PTR_00848a28->data),
     puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}

