
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00718130(byte *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = (float)*param_1 * _DAT_0079e25c;
  fVar4 = (float)param_1[1] * _DAT_0079e25c;
  fVar5 = (float)param_1[2] * _DAT_0079e25c;
  fVar2 = fVar5;
  if (fVar5 < fVar4) {
    fVar2 = fVar4;
  }
  fVar6 = fVar3;
  if ((fVar3 <= fVar2) && (fVar6 = fVar5, fVar5 < fVar4)) {
    fVar6 = fVar4;
  }
  fVar2 = fVar5;
  if (fVar4 < fVar5) {
    fVar2 = fVar4;
  }
  fVar8 = fVar3;
  if ((fVar2 <= fVar3) && (fVar8 = fVar5, fVar4 < fVar5)) {
    fVar8 = fVar4;
  }
  fVar2 = (fVar8 + fVar6) * _DAT_00790784;
  param_2[1] = fVar2;
  if (fVar6 == fVar8) {
    param_2[2] = 0.0;
    *param_2 = 999.0;
    return;
  }
  fVar7 = fVar6 - fVar8;
  if ((float)_DAT_007901c0 < fVar2) {
    param_2[2] = fVar7 / ((_DAT_0079e258 - fVar6) - fVar8);
  }
  else {
    param_2[2] = fVar7 / (fVar8 + fVar6);
  }
  fVar8 = (fVar6 - fVar3) / fVar7;
  fVar2 = (fVar6 - fVar4) / fVar7;
  fVar7 = (fVar6 - fVar5) / fVar7;
  if (fVar3 == fVar6) {
    fVar7 = fVar7 - fVar2;
  }
  else if (fVar4 == fVar6) {
    fVar7 = (fVar8 + _DAT_0079e258) - fVar7;
  }
  else {
    if (fVar5 != fVar6) goto LAB_007182c7;
    fVar7 = (fVar2 + _DAT_0079d074) - fVar8;
  }
  *param_2 = fVar7;
LAB_007182c7:
  fVar2 = *param_2 * _DAT_0079e254;
  bVar1 = _DAT_0079034c <= fVar2;
  *param_2 = fVar2;
  if (bVar1) {
    return;
  }
  *param_2 = fVar2 + _DAT_0079e250;
  return;
}

