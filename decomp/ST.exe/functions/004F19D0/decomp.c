
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004F19D0_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

undefined4
FUN_004f19d0(char param_1,Global_sub_004F19D0_param_2Enum param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  if (DAT_00806730 == 0x400) {
    if (CASE_1 < param_2) {
      return 0;
    }
    if (param_2 == CASE_1) {
      *param_3 = 0x12;
      *param_4 = 0x5b;
      return 1;
    }
    *param_3 = 0x12;
    *param_4 = 10;
    return 1;
  }
  if (DAT_00806730 != 0x500) {
    return 0;
  }
  if (param_1 == '\0') {
    switch(param_2) {
    case CASE_1:
      *param_3 = 0xa2;
      *param_4 = 0x5a;
      return 1;
    case CASE_2:
      *param_3 = 0x53;
      *param_4 = 9;
      return 1;
    case CASE_3:
      *param_3 = 0x53;
      *param_4 = 0x5a;
      return 1;
    case CASE_4:
      *param_3 = 4;
      *param_4 = 9;
      return 1;
    case CASE_5:
      *param_3 = 4;
      *param_4 = 0x5a;
      return 1;
    default:
      *param_3 = 0xa2;
      *param_4 = 9;
      return 1;
    }
  }
  switch(param_2) {
  case CASE_1:
    *param_3 = 3;
    *param_4 = 0x5a;
    return 1;
  case CASE_2:
    *param_3 = 0x52;
    *param_4 = 9;
    return 1;
  case CASE_3:
    *param_3 = 0x52;
    *param_4 = 0x5a;
    return 1;
  case CASE_4:
    *param_3 = 0xa1;
    *param_4 = 9;
    return 1;
  case CASE_5:
    *param_3 = 0xa1;
    *param_4 = 0x5a;
    return 1;
  default:
    *param_3 = 3;
    *param_4 = 9;
    return 1;
  }
}

