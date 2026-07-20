
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_00616400(AnonShape_00616400_B4BF5EEF *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar2 = (float)param_1->field_027C * _DAT_0079cea8;
  fVar3 = (float)param_1->field_0280 * _DAT_0079cea8;
  fVar4 = (float10)param_1->field_0284 * (float10)_DAT_0079cea8;
  fVar1 = (float)fVar4;
  fVar4 = (float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3 + fVar4 * (float10)fVar1
  ;
  if (fVar4 != (float10)_DAT_0079034c) {
    fVar4 = (((float10)param_2 * (float10)fVar2 +
             (float10)param_3 * (float10)fVar3 + (float10)param_4 * (float10)fVar1) -
            ((float10)(int)param_1->field_025A * (float10)fVar2 +
            (float10)(int)param_1->field_025C * (float10)fVar3 +
            (float10)(int)param_1->field_025E * (float10)fVar1)) / fVar4;
  }
  return fVar4;
}

