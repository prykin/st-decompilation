
undefined4 __fastcall FUN_0063cb30(AnonShape_0063CB30_3EF2BD1B *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((int)param_1->field_0266 < 0) {
    param_1->field_0266 = 0;
    return 2;
  }
  if ((int)param_1->field_026A < 0) {
    param_1->field_026A = 0;
    return 2;
  }
  if ((int)param_1->field_026E < 0x5a) {
    param_1->field_026E = 0x5a;
    return 2;
  }
  uVar1 = param_1->field_0266 - (int)param_1->field_0253;
  uVar3 = (int)uVar1 >> 0x1f;
  if ((((int)((uVar1 ^ uVar3) - uVar3) < 6) &&
      (uVar1 = param_1->field_026A - (int)param_1->field_0255, uVar3 = (int)uVar1 >> 0x1f,
      (int)((uVar1 ^ uVar3) - uVar3) < 6)) &&
     ((uVar1 = param_1->field_026E - param_1->field_0282, uVar3 = (int)uVar1 >> 0x1f,
      iVar2 = (uVar1 ^ uVar3) - uVar3, iVar2 < 6 || (iVar2 < 0x97)))) {
    return 3;
  }
  return 0;
}

