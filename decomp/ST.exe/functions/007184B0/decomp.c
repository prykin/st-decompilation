
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_007184b0(float *param_1,float *param_2)

{
  float10 fVar1;

  *param_2 = param_1[1];
  if (*param_1 == 999.0) {
    param_2[2] = 0.0;
    param_2[1] = 0.0;
    return;
  }
  fVar1 = (float10)fcos((float10)*param_1 * (float10)_DAT_0079e278);
  param_2[1] = (float)(fVar1 * (float10)param_1[2]);
  fVar1 = (float10)fsin((float10)*param_1 * (float10)_DAT_0079e278);
  param_2[2] = (float)(fVar1 * (float10)param_1[2]);
  return;
}

