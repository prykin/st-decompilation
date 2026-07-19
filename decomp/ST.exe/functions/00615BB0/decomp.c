
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00615BB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

void FUN_00615bb0(Global_sub_00615BB0_param_1Enum param_1,undefined4 *param_2,undefined4 *param_3,
                 int param_4,undefined2 *param_5)

{
  switch(param_1) {
  case CASE_0:
  case CASE_1:
  case CASE_17:
    if (param_4 == 0) {
      *param_2 = 1;
      *param_3 = 0;
      return;
    }
    break;
  case CASE_2:
  case CASE_3:
  case CASE_4:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 1;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0xffff;
      return;
    }
    *param_2 = 1;
    *param_3 = 0xffffffff;
    return;
  case CASE_5:
  case CASE_6:
  case CASE_7:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 1;
      param_5[3] = 0;
      param_5[4] = 0xffff;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return;
  case CASE_8:
  case CASE_9:
  case CASE_A:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      param_5[3] = 0xffff;
      param_5[4] = 0xffff;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return;
  case CASE_B:
  case CASE_C:
  case CASE_D:
    if (param_4 == 0) {
      *param_2 = 0xffffffff;
      *param_3 = 0;
      return;
    }
    break;
  case CASE_E:
  case CASE_F:
  case CASE_10:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0xffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 1;
      return;
    }
    *param_2 = 0xffffffff;
    *param_3 = 1;
    return;
  case CASE_11:
  case CASE_12:
  case CASE_13:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0xffff;
      param_5[3] = 0;
      param_5[4] = 1;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0;
    *param_3 = 1;
    return;
  case CASE_14:
  case CASE_15:
  case CASE_16:
    if (param_4 == 0) {
      *param_2 = 1;
      *param_3 = 1;
      return;
    }
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 1;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 1;
  default:
    return;
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0xffff;
  param_5[4] = 0;
  param_5[5] = 1;
  return;
}

