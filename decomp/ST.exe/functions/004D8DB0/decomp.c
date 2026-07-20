
undefined4 __fastcall FUN_004d8db0(AnonShape_004D8DB0_597A2A4F *param_1)

{
  switch(param_1->field_0245) {
  case 0:
  case 5:
    if (param_1->field_04F0 != 0) {
      if (99 < param_1->field_04EC) {
        return 0;
      }
      param_1->field_0261 = 0;
      return 0;
    }
    break;
  case 1:
  case 6:
    param_1->field_04D0 = 0;
    break;
  default:
    goto switchD_004d8dbb_caseD_2;
  }
  param_1->field_0261 = 0;
switchD_004d8dbb_caseD_2:
  return 0;
}

