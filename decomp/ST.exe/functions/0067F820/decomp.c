
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0067f820(uint param_1)

{
  float *pfVar1;
  
  if ((param_1 < PTR_00848a30->field_000C) &&
     (pfVar1 = (float *)(PTR_00848a30->field_0008 * param_1 + PTR_00848a30->field_001C),
     pfVar1 != (float *)0x0)) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

