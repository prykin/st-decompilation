
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006263B0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_9=9;CASE_A=10;CASE_B=11;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1C=28;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_36=54;CASE_3E=62;CASE_3F=63;CASE_42=66;CASE_46=70;CASE_47=71;CASE_4A=74;CASE_4B=75;CASE_6B=107
    */

undefined4 FUN_006263b0(Global_sub_006263B0_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_1:
  case CASE_2:
  case CASE_D:
  case CASE_E:
  case CASE_1E:
  case CASE_20:
  case CASE_24:
  case CASE_25:
    return 1;
  case CASE_3:
  case CASE_F:
  case CASE_10:
  case CASE_1F:
    return 2;
  case CASE_4:
  case CASE_9:
  case CASE_A:
  case CASE_15:
  case CASE_17:
  case CASE_1C:
    return 8;
  case CASE_5:
  case CASE_6:
  case CASE_B:
  case CASE_11:
  case CASE_12:
  case CASE_16:
  case CASE_21:
  case CASE_22:
  case CASE_23:
    return 4;
  default:
    return 0x20;
  case CASE_36:
  case CASE_3E:
  case CASE_3F:
  case CASE_42:
  case CASE_46:
  case CASE_47:
  case CASE_4A:
  case CASE_4B:
  case CASE_6B:
    return 0x10;
  }
}

