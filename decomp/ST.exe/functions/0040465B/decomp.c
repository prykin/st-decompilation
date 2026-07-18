
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl thunk_FUN_0067f820(uint param_1)

{
  float *pfVar1;
  
  if ((param_1 < *(uint *)(DAT_00848a30 + 0xc)) &&
     (pfVar1 = (float *)(*(int *)(DAT_00848a30 + 8) * param_1 + *(int *)(DAT_00848a30 + 0x1c)),
     pfVar1 != (float *)0x0)) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

