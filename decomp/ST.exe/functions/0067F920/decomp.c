
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0067f920(byte *param_1)

{
  float *pfVar1;

  pfVar1 = (float *)thunk_FUN_0067f860(param_1);
  if (pfVar1 != (float *)0x0) {
    return (float10)*pfVar1;
  }
  return (float10)_DAT_0079034c;
}

