
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00606FD0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24
    */

undefined4
FUN_00606fd0(Global_sub_00606FD0_param_1Enum param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5)

{
  switch(param_1) {
  case CASE_1:
    *param_2 = 4;
    *param_3 = 0;
    *param_4 = 5;
    *param_5 = 1;
    return 0x50;
  case CASE_2:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 0x78;
  case CASE_3:
  case CASE_4:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_C:
    *param_2 = 7;
    *param_3 = 3;
    *param_4 = 5;
    *param_5 = 1;
    return 0xd2;
  case CASE_5:
  case CASE_A:
  case CASE_B:
    *param_2 = 7;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 0xb4;
  default:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0x28;
  case CASE_D:
  case CASE_E:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0x78;
  case CASE_F:
  case CASE_11:
  case CASE_12:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_16:
  case CASE_18:
    *param_2 = 7;
    *param_3 = 3;
    *param_4 = 5;
    *param_5 = 2;
    return 0xd2;
  case CASE_10:
  case CASE_17:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0xb4;
  }
}

