
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_007182f0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  if (param_1 < _DAT_0079034c) {
    param_1 = param_1 + _DAT_0079e250;
  }
  if (_DAT_0079e250 < param_1) {
    param_1 = param_1 - _DAT_0079e250;
  }
  if (_DAT_0079e254 <= param_1) {
    if (param_1 < _DAT_0079e264) {
      fVar1 = (float10)param_3;
      goto LAB_00718362;
    }
LAB_00718374:
    if (_DAT_0079e260 <= param_1) goto LAB_007183b0;
    fVar1 = ((float10)_DAT_0079e260 - (float10)param_1) * ((float10)param_3 - (float10)param_2) *
            (float10)_DAT_0079e268 + (float10)param_2;
  }
  else {
    fVar1 = ((float10)param_3 - (float10)param_2) * (float10)param_1 * (float10)_DAT_0079e268 +
            (float10)param_2;
LAB_00718362:
    if (_DAT_0079e264 <= param_1) goto LAB_00718374;
  }
  if (param_1 < _DAT_0079e260) {
    return fVar1;
  }
LAB_007183b0:
  return (float10)param_2;
}

