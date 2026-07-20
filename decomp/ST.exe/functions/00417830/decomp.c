
undefined4 __fastcall FUN_00417830(AnonShape_00417830_9254190A *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1->field_00EC == 1) {
    param_1->field_00EC = 0;
  }
  if (param_1->field_0088 == 1) {
    param_1->field_0088 = 0;
    param_1->field_00EC = 1;
  }
  if (param_1->field_00F0 == 1) {
    param_1->field_00F0 = 0;
    param_1->field_00E8 = 0;
    return 0;
  }
  if (param_1->field_006C == param_1->field_0084) {
    param_1->field_00EC = 0;
    param_1->field_00F0 = 1;
    return 2;
  }
  sVar2 = param_1->field_0086;
  sVar1 = sVar2 + param_1->field_006C;
  uVar4 = (int)sVar2 >> 0x1f;
  param_1->field_006C = sVar1;
  iVar3 = ((int)sVar2 ^ uVar4) - uVar4;
  if (0x168 - iVar3 < (int)sVar1) {
    param_1->field_006C = 0;
  }
  if ((short)param_1->field_006C < 0) {
    param_1->field_006C = 0x168 - (short)iVar3;
  }
  return 2;
}

