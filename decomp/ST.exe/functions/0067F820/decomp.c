
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0067f820(uint param_1)

{
  float *pfVar1;

  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00848a30, param_1) (runtime stride) */
  if ((param_1 < PTR_00848a30->count) &&
     (pfVar1 = (float *)(PTR_00848a30->elementSize * param_1 + (int)PTR_00848a30->data),
     pfVar1 != (float *)0x0)) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

