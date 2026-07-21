
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00416390(AnonShape_00416390_86C8F938 *param_1)

{
  undefined4 uVar1;

  uVar1 = 2;
  if ((PTR_00802a38->field_00E4 & 1) != 0) {
    return uVar1;
  }
  param_1->field_006E = param_1->field_006E + 1;
  if (param_1->field_006E == 0x2f) {
    uVar1 = 0;
  }
  if (param_1->field_006E == 0x30) {
    param_1->field_006E = 0;
  }
  param_1->field_0070 =
       *(float *)(&DAT_007a4d24 + (short)param_1->field_006E * 4) * (float)_DAT_007901c0;
  return uVar1;
}

