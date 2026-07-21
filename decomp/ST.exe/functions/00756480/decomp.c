
void FUN_00756480(AnonShape_00756480_42788A49 *param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = param_1->field_001C;
  if (iVar1 == 1) {
    param_1->field_0020 = 1;
    param_1->field_0024 = 1;
    goto cf_common_exit_00756569;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((param_1->field_0119 == 0) || (param_1->field_011D == '\0')) {
        param_1->field_0020 = 4;
        param_1->field_0024 = 4;
      }
      else {
        param_1->field_0020 = 5;
        param_1->field_0024 = 4;
      }
    }
    else {
      param_1->field_0020 = 0;
      param_1->field_0024 = 0;
    }
    goto cf_common_exit_00756569;
  }
  if (param_1->field_0110 == 0) {
    if (param_1->field_0119 == 0) {
      piVar2 = param_1->field_00D0;
      if ((((*piVar2 != 1) && (*piVar2 == 0x52)) && (piVar2[0x15] == 0x47)) &&
         (piVar2[0x2a] == 0x42)) goto LAB_00756548;
    }
    else if (param_1->field_011D == '\0') {
LAB_00756548:
      param_1->field_0020 = 2;
      param_1->field_0024 = 2;
      goto cf_common_exit_00756569;
    }
  }
  param_1->field_0020 = 3;
  param_1->field_0024 = 2;
cf_common_exit_00756569:
  param_1->field_0030 = 0;
  param_1->field_0038 = 0;
  param_1->field_003C = 0;
  param_1->field_0040 = 0;
  param_1->field_004C = 0;
  param_1->field_0080 = 0;
  param_1->field_005C = 0;
  param_1->field_0060 = 0;
  param_1->field_0064 = 0;
  param_1->field_0028 = 1;
  param_1->field_002C = 1;
  param_1->field_0034 = 0x3ff00000;
  param_1->field_0044 = 1;
  param_1->field_0048 = 1;
  param_1->field_0050 = 2;
  param_1->field_0054 = 1;
  param_1->field_0058 = 0x100;
  return;
}

